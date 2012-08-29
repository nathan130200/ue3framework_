/*
#############################################################################################
# Sanctum (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Sanctum_classes.h
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

#define CONST_MINTIMEBETWEENPAINSOUNDS                           0.35
#define CONST_MINTIMEBETWEENPAINEFFECTS                          0.35
#define CONST_DYING_SOUND_TIMEOUT                                1.0f
#define CONST_TAKEHIT_SOUND_TIMEOUT                              1.0f
#define CONST_GIB_SOUND_TIMEOUT                                  0.33f
#define CONST_IMMUNE_SOUND_TIMEOUT                               0.1f
#define CONST_MORTAR_EXPLOTION_SOUND_TIMEOUT                     0.25f
#define CONST_PLUS_SIGN                                          10
#define CONST_P_SIGN                                             11
#define CONST_WEAKSPOT_HIT                                       0x00000001
#define CONST_REDUCED_DAMAGE                                     0x00000002
#define CONST_OVERHEAT_FIREMODE                                  2
#define CONST_ENEMY_TRACKING                                     1
#define CONST_CLUSTER_FIRING                                     3
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
#define CONST_PROPERTY_DIFFICULTY                                0x40000002
#define CONST_PROPERTY_GAMEDURATION                              0x40000003
#define CONST_PROPERTY_VERSION                                   0x40000004
#define CONST_PROPERTY_GAMEADDON                                 0x40000005
#define CONST_PROPERTY_ISTURBO                                   0x40000006
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
#define CONST_BEGIN_NEW_PATH                                     none
#define CONST_SAVE_DELIMITER                                     "$SAVE$"
#define CONST_EOF_DELIMITER                                      "$EOF$"
#define CONST_CHECKSUM_DELIMITER                                 "$CHK$"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Sanctum.SanctumTowerHologram.Action
/*enum Action
{
	NOTABLE                                            = 0,
	Upgrade                                            = 1,
	Build                                              = 2,
	Sell                                               = 3,
	Action_MAX                                         = 4
};*/

// Enum Sanctum.SanctumTowerHologram.BuildResult
/*enum BuildResult
{
	ABLE                                               = 0,
	NOTABLE                                            = 1,
	POOR                                               = 2,
	BLOCKEDPATH                                        = 3,
	MAXUPGRADED                                        = 4,
	PLAYERBLOCKING                                     = 5,
	BLOCKONBLOCK                                       = 6,
	BLOCKREQUIRED                                      = 7,
	CANTUPGRADE                                        = 8,
	FIELDONBLOCK                                       = 9,
	NOT_CHOSEN                                         = 10,
	NOAIM                                              = 11,
	BuildResult_MAX                                    = 12
};*/

// Enum Sanctum.SanctumGameReplicationInfo.EGameMode
/*enum EGameMode
{
	GM_NORMAL                                          = 0,
	GM_CLASSIC_TD                                      = 1,
	GM_RANDOM_MAZE                                     = 2,
	GM_ONSLAUGHT                                       = 3,
	GM_UNDEFINED                                       = 4,
	GM_MAX                                             = 5
};*/

// Enum Sanctum.SanctumGameReplicationInfo.EBuildPhaseState
/*enum EBuildPhaseState
{
	BPS_FALSE                                          = 0,
	BPS_TRUE                                           = 1,
	BPS_UNDEFINED                                      = 2,
	BPS_LAST_ENUM                                      = 3,
	BPS_MAX                                            = 4
};*/

// Enum Sanctum.SanctumGameReplicationInfo.EDifficulty
/*enum EDifficulty
{
	D_Casual                                           = 0,
	D_Experienced                                      = 1,
	D_Hardcore                                         = 2,
	D_MAX                                              = 3
};*/

// Enum Sanctum.SanctumGameReplicationInfo.MoneySpentOn
/*enum MoneySpentOn
{
	Weapon                                             = 0,
	Tower                                              = 1,
	Other                                              = 2,
	MoneySpentOn_MAX                                   = 3
};*/

// Enum Sanctum.SanctumWeaponSniper.ZoomState
/*enum ZoomState
{
	NotZoomed                                          = 0,
	ZoomingIn                                          = 1,
	ZoomingOut                                         = 2,
	Zoomed                                             = 3,
	ZoomState_MAX                                      = 4
};*/

// Enum Sanctum.SanctumHUD.MovieEnum
/*enum MovieEnum
{
	MOVIE_NONE                                         = 0,
	MOVIE_TEST                                         = 1,
	MOVIE_MAX                                          = 2
};*/

// Enum Sanctum.SanctumWeaponBuildGun.WeaponUpgradeAction
/*enum WeaponUpgradeAction
{
	Valid                                              = 0,
	MAXUPGRADED                                        = 1,
	NotEnoughCash                                      = 2,
	WeaponUpgradeAction_MAX                            = 3
};*/

// Enum Sanctum.SanctumWeaponBuildGun.MoneySpentOn
/*enum MoneySpentOn
{
	Weapon                                             = 0,
	Tower                                              = 1,
	MoneySpentOn_MAX                                   = 2
};*/

// Enum Sanctum.SanctumWeaponBuildGun.BuildUpgradeAction
/*enum BuildUpgradeAction
{
	Build_Valid                                        = 0,
	Build_InvalidTarget                                = 1,
	Build_NotEnoughCash                                = 2,
	Upgrade_Valid                                      = 3,
	Upgrade_MaxUpgraded                                = 4,
	Upgrade_NotEnoughCash                              = 5,
	NoTarget                                           = 6,
	BuildUpgradeAction_MAX                             = 7
};*/

// Enum Sanctum.SanctumWeaponBuildGun.SellAction
/*enum SellAction
{
	Sell_Valid                                         = 0,
	Sell_Invalid                                       = 1,
	NoTarget                                           = 2,
	SellAction_MAX                                     = 3
};*/

// Enum Sanctum.SanctumWeaponBuildGun.ButtonClick
/*enum ButtonClick
{
	Right                                              = 0,
	Left                                               = 1,
	Potential_Build                                    = 2,
	Any                                                = 3,
	ButtonClick_MAX                                    = 4
};*/

// Enum Sanctum.SanctumSystemSettings.ETextureLevel
/*enum ETextureLevel
{
	TL_Custom                                          = 0,
	TL_Crap                                            = 1,
	TL_Medium                                          = 2,
	TL_High                                            = 3,
	TL_Ultra                                           = 4,
	TL_MAX                                             = 5
};*/

// Enum Sanctum.SanctumSystemSettings.EQualityMode
/*enum EQualityMode
{
	QM_Low                                             = 0,
	QM_Medium                                          = 1,
	QM_High                                            = 2,
	QM_MAX                                             = 3
};*/

// Enum Sanctum.SanctumSeqAct_TogglePathNode.EOutputLinks
/*enum EOutputLinks
{
	OL_SUCCESS                                         = 0,
	OL_FAILED                                          = 1,
	OL_MAX                                             = 2
};*/

// Enum Sanctum.SanctumSystemSettingsHelper.ESoundMode
/*enum ESoundMode
{
	SM_Slow                                            = 0,
	SM_Normal                                          = 1,
	SM_MAX                                             = 2
};*/

// Enum Sanctum.SanctumSystemSettingsHelper.EDetailLevel
/*enum EDetailLevel
{
	DL_VeryLow                                         = 0,
	DL_Low                                             = 1,
	DL_Medium                                          = 2,
	DL_High                                            = 3,
	DL_VeryHigh                                        = 4,
	DL_MAX                                             = 5
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Sanctum.SanctumAudioManagerBase
// 0x0004 (0x0044 - 0x0040)
class USanctumAudioManagerBase : public USubsystem
{
public:
	unsigned long                                      mShowDebug : 1;                                   		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mShowBoundingSphere : 1;                          		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mShowDetailedVolumeInfo : 1;                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mShowPriority : 1;                                		// 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1939 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void PlayGibSound ( class USoundCue* Sound, struct FVector SoundLocation );
	void PlayDyingSound ( class USoundCue* Sound, struct FVector SoundLocation );
	void PlayTakeHitSound ( class USoundCue* Sound, struct FVector SoundLocation );
	void PlayMortarExplotionSound ( class USoundCue* Sound, struct FVector SoundLocation );
	void PlayImmuneSound ( class USoundCue* Sound, struct FVector SoundLocation, class AActor* InstigatedBy );
	void eventTick ( float DeltaTime );
};

UClass* USanctumAudioManagerBase::pClassPointer = NULL;

// Class Sanctum.SanctumEngineBase
// 0x0004 (0x07A0 - 0x079C)
class USanctumEngineBase : public UGameEngine
{
public:
	class USanctumAudioManagerBase*                    mAudioManager;                                    		// 0x079C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1940 ];

		return pClassPointer;
	};

	void eventInitializeEngine ( );
};

UClass* USanctumEngineBase::pClassPointer = NULL;

// Class Sanctum.SanctumPawnBase
// 0x000C (0x0630 - 0x0624)
class ASanctumPawnBase : public AUDKPawn
{
public:
	struct FVector                                     mNetRelevancyLocationOffset;                      		// 0x0624 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1941 ];

		return pClassPointer;
	};

	bool eventIsInOverviewMode ( );
};

UClass* ASanctumPawnBase::pClassPointer = NULL;

// Class Sanctum.SanctumSteamHelper
// 0x0000 (0x003C - 0x003C)
class USanctumSteamHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1942 ];

		return pClassPointer;
	};

	struct FString GetCountryCode ( );
	bool IsVACBanned ( );
	bool IsValidUrl ( struct FString URLString );
	struct FString SteamIDToString ( struct FUniqueNetId Id );
	bool HasDLCWithAppID ( int AppID );
	bool HasAcceleratorDLC ( );
	bool HasChristmasDLC ( );
	bool HasCavernDLC ( );
	bool HasViolatorDLC ( );
	bool HasSlumsDLC ( );
	bool HasBelowDLC ( );
	bool HasMine2DLC ( );
	bool HasPenetratorDLC ( );
	bool HasKillingFloorDLC ( );
	bool HasBridge2DLC ( );
	bool HasMonkeyCageDLC ( );
	bool HasFirstMapPack ( );
	bool HasJournalistDLC ( );
	void OpenStoreOverlayForDLC ( int AppID );
	void OpenWebURL ( struct FString URL );
};

UClass* USanctumSteamHelper::pClassPointer = NULL;

// Class Sanctum.SanctumSystemSettings
// 0x0000 (0x003C - 0x003C)
class USanctumSystemSettings : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1943 ];

		return pClassPointer;
	};

	bool IsChristmas ( );
	void GetAvailableResolutions ( TArray< struct FString >* resolutionArray );
	struct FString GetCurrentLanguage ( );
	void SetLanguage ( struct FString lang, unsigned long reloadObjects );
	int GetPurgedObjectCount ( );
	int GetObjectCount ( );
	void GetSupportedLanguages ( TArray< struct FString >* langArray, int* SelectedIndex );
	void getSelectedResolutionIndex ( int ResX, int ResY, int* SelectedIndex );
	void getSettingValuesNumber ( int Value, int Min, int Max, TArray< struct FString >* Settings, int* SelectedIndex );
	void getSettingValuesBool ( unsigned long Value, TArray< struct FString >* outRendererDataProvider, int* SelectedIndex );
	unsigned char GetWorldTextureLevel ( );
	void SetWorldTextureLevel ( unsigned char TextureLevel );
	void GetGraphicsSettings ( struct FGraphicsSettings* out_GraphicsSettings );
	struct FString MD5Hash ( struct FString ToHash );
	unsigned char GetShadowQuality ( struct FGraphicsSettings* out_GraphicsSettings );
	void SetShadowQuality ( unsigned char Quality, struct FGraphicsSettings* out_GraphicsSettings );
};

UClass* USanctumSystemSettings::pClassPointer = NULL;

// Class Sanctum.SanctumAchievements
// 0x0028 (0x0064 - 0x003C)
class USanctumAchievements : public UObject
{
public:
	unsigned long                                      mCollateralDamage : 1;                            		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mBoomHeadshot : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mFullyCovered : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mChillMan : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mUSDollars : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mSeeIveGotThis : 1;                               		// 0x003C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mBombingRaid : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mBrutus : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      mAchievementsEnabled : 1;                         		// 0x003C (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      mShotsFired : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      mOnlyGrenade : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      mGrenadeWasFired : 1;                             		// 0x003C (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      mReadWasSuccessfull : 1;                          		// 0x003C (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      mParasolUp : 1;                                   		// 0x003C (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      mRadioOn : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      mGrillLit : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      mEligibleForPickingUpThePieces : 1;               		// 0x003C (0x0004) [0x0000000000000000] [0x00010000] 
	int                                                mBlockTowers;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                mSpentMoneyBeforeLastWave;                        		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                mLifeBeforeLastWave;                              		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                mStrawBerryFish;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                mStrawBerryCount;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                mSentToMonkeyCageOnWave;                          		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                mNumberOfRecievedStats;                           		// 0x0058 (0x0004) [0x0000000000000000]              
	class USanctumOnlineAchievementsStatsRead*         mAchievementsStatsRead;                           		// 0x005C (0x0004) [0x0000000000000000]              
	class USanctumOnlineAchievementsStatsWrite*        mAchievementsStatsWrite;                          		// 0x0060 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44778 ];

		return pClassPointer;
	};

	void ReadAchievementsStatsComplete ( unsigned long bWasSuccessful );
	void ReadAllOnlineStats ( );
	void FlushAllStats ( );
	void WriteStatToViewID ( unsigned char ViewId, int StatValueDiff, unsigned char NumberOfStats );
	void UnlockAchievement ( int Index );
	bool AchievementsEnabled ( );
	void UnlockLevelComplete ( int Level, float Diff, int GameMode, float RemainingCoreLife );
	void GameEnded ( );
	void CheckNoTeleports ( );
	void NumberOfRunnersKilledWithOneGrenade ( int Number );
	void EnemyKilledWithGrenade ( );
	void SniperStraightWeakSpotKills ( int Number );
	void SniperOneClipKills ( int Number );
	void CheckForTowerDiversityOnArc ( );
	void CheckForSlowUpgrades ( );
	void CheckForTowerUpgrades ( );
	void CheckForExclusiveTowers ( );
	void NewActionPhaseAchievements ( );
	void NewBuildPhaseAchievements ( );
	void NewBlockWasBuilt ( );
	void BlockWasSold ( );
	void BombingRaid ( );
	void Brutus ( );
	void NoTowersShot ( float Difficulty );
	void shotsFired ( );
	void NoneAssaulGrenadeFired ( );
	void AssaultGrenadeFired ( );
	void CheckIfInMaxSlowFieldAndFreeze ( class ASanctumEnemy* E );
	void WeaponUpgrade ( );
	void MVP ( );
	void WaveCompleted ( class UClass* GameInfo, int Wave, int MaxPlayers, float Difficulty );
	void ToggleRadio ( unsigned long On );
	void ExpandParasol ( );
	void LightTheGrill ( );
	void CheckSummerAchievement ( );
	void ChristmasPresentCollected ( );
	void StrawberryFishHit ( int Id );
	void CleanUpAchievements ( );
};

UClass* USanctumAchievements::pClassPointer = NULL;

// Class Sanctum.SanctumOnlineAchievementsStatsWrite
// 0x0000 (0x0088 - 0x0088)
class USanctumOnlineAchievementsStatsWrite : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44780 ];

		return pClassPointer;
	};

};

UClass* USanctumOnlineAchievementsStatsWrite::pClassPointer = NULL;

// Class Sanctum.SanctumOnlineAchievementsStatsRead
// 0x0000 (0x0088 - 0x0088)
class USanctumOnlineAchievementsStatsRead : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44782 ];

		return pClassPointer;
	};

};

UClass* USanctumOnlineAchievementsStatsRead::pClassPointer = NULL;

// Class Sanctum.SanctumGameInfo
// 0x00AC (0x042C - 0x0380)
class ASanctumGameInfo : public AUDKGame
{
public:
	class UClass*                                      mStartGameEvent;                                  		// 0x0380 (0x0004) [0x0000000000000000]              
	unsigned long                                      mDebug : 1;                                       		// 0x0384 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mGameWasLoaded : 1;                               		// 0x0384 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mTurboMode : 1;                                   		// 0x0384 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mIsSingleplayer : 1;                              		// 0x0384 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mIsClassicMode : 1;                               		// 0x0384 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mFirstWave : 1;                                   		// 0x0384 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mIsOnslaughtMode : 1;                             		// 0x0384 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mIsRandomMode : 1;                                		// 0x0384 (0x0004) [0x0000000000000000] [0x00000080] 
	class ASanctumEnemy*                               mMarkedEnemyFirst;                                		// 0x0388 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ASanctumEnemy*                               mMarkedEnemySecond;                               		// 0x038C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     mDifficultyName;                                  		// 0x0390 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mOptionsString;                                   		// 0x039C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ASanctumSpawner*                             mWaveSpawner;                                     		// 0x03A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class ASanctumEnemy* >                     mAllEnemies;                                      		// 0x03AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mLeaderboardDifficulty;                           		// 0x03B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                mLeaderboardLevel;                                		// 0x03BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                mLeaderboardGamemode;                             		// 0x03C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              mBuildphaseDelay;                                 		// 0x03C4 (0x0004) [0x0000000000000000]              
	struct FString                                     mGameTypeName;                                    		// 0x03C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     mTurboString;                                     		// 0x03D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                mActionPhaseStartTime;                            		// 0x03E0 (0x0004) [0x0000000000000000]              
	int                                                mActionPhaseTime;                                 		// 0x03E4 (0x0004) [0x0000000000000000]              
	int                                                mHeavyWaveInterval;                               		// 0x03E8 (0x0004) [0x0000000000000000]              
	float                                              mHeavyWaveDelay;                                  		// 0x03EC (0x0004) [0x0000000000000000]              
	int                                                mRubelAccumulated;                                		// 0x03F0 (0x0004) [0x0000000000000000]              
	int                                                mDifficultyRubelAccumulated;                      		// 0x03F4 (0x0004) [0x0000000000000000]              
	int                                                mRubelGain;                                       		// 0x03F8 (0x0004) [0x0000000000000000]              
	int                                                mMaxRubel;                                        		// 0x03FC (0x0004) [0x0000000000000000]              
	int                                                mLastRubelGiven;                                  		// 0x0400 (0x0004) [0x0000000000000000]              
	float                                              mBuildphaseTime;                                  		// 0x0404 (0x0004) [0x0000000000000000]              
	int                                                mGainedRubelDuringPhase;                          		// 0x0408 (0x0004) [0x0000000000000000]              
	int                                                mDifficultyRubelsGainedDuringPhase;               		// 0x040C (0x0004) [0x0000000000000000]              
	class UClass*                                      mRubelAlgorithmClass;                             		// 0x0410 (0x0004) [0x0000000000000000]              
	int                                                mGameAddonIndex;                                  		// 0x0414 (0x0004) [0x0000000000000000]              
	class USanctumRubelAlgorithm*                      mRubelAlgorithm;                                  		// 0x0418 (0x0004) [0x0000000000000000]              
	int                                                mNumberOfWaves;                                   		// 0x041C (0x0004) [0x0000000000000000]              
	struct FString                                     NextLevel;                                        		// 0x0420 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44822 ];

		return pClassPointer;
	};

	void collectActionEndInfo ( );
	void StopDPSTimer ( );
	void StartDPSTimer ( );
	void ForceStartWave ( );
	void DisplayCheatMessage ( );
	void setNextEnemyInfo ( int nextWave );
	void ToggleReady ( );
	void startWave ( int waveNr );
	bool isWavesLeft ( );
	int GetGameModeInt ( );
	int CreateViewIDForLeaderboard ( );
	void Pause ( class ULocalPlayer* ownedByLocalPlayer );
	void Logout ( class AController* Exiting );
	void eventPostLogin ( class APlayerController* NewPlayer );
	bool IsTrainingMode ( );
	void DisableAchievements ( class APlayerController* PC );
	bool FindInactivePRI ( class APlayerController* PC );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	void SendToMonkeyCage ( class ASanctumPlayerController* PC );
	void ReleaseFromMonkeyCage ( class ASanctumPlayerController* PC );
	bool isFirstPlayer ( class ASanctumController* SC );
	void CheckMapDLC ( );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage );
	void eventPreLogin ( struct FString Options, struct FString Address, struct FUniqueNetId UniqueId, unsigned long bSupportsAuth, struct FString* ErrorMessage );
	void WriteOnlineStats ( );
	void PerformEndGameHandling ( );
	void UpdateGameSettings ( );
	void OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void UpdateGameSettingsCounts ( );
	void GameOver ( class ASanctumEnemy* Killer );
	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void enemyReachedCore ( class ASanctumEnemy* Enemy );
	bool AllowCheats ( class APlayerController* P );
	void BroadCastHeavyWaveIncoming ( );
	void ToggleBuildPhase ( );
	void ScheduleBuildPhase ( );
	void eventAddDefaultInventory ( class APawn* P );
	bool AllowMutator ( struct FString MutatorClassName );
	void writeSlot ( int SlotNumber, struct FPlayerSlot* Slot );
	int findPlayerSlot ( class ASanctumController* Controller, struct FPlayerSlot* Slot );
	int findFreeSlot ( struct FPlayerSlot* Slot );
	void enemySpawned ( class ASanctumEnemy* Enemy );
	void ShowRubelGain ( );
	void AddRubelToAll ( int rubelAmount, unsigned long showReward );
	void eventToggleLevelCompleteEvent ( );
	void EnemyKilled ( class ASanctumEnemy* Enemy, class AActor* Killer );
	void KillAllEnemies ( );
	void CalculateAccumulatedRubel ( );
	struct FString difficultyToString ( unsigned char Difficulty );
	void InitGameReplicationName ( class ASanctumGameReplicationInfo* SGRI );
	void InitGameReplicationInfo ( );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	void InitializeGameAddon ( struct FString* Options );
	unsigned char GetGameMode ( );
	void eventPostBeginPlay ( );
	void eventPreBeginPlay ( );
};

UClass* ASanctumGameInfo::pClassPointer = NULL;

// Class Sanctum.SanctumGameInfoEndless
// 0x0004 (0x0430 - 0x042C)
class ASanctumGameInfoEndless : public ASanctumGameInfo
{
public:
	unsigned long                                      mOnlineGameStarted : 1;                           		// 0x042C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44823 ];

		return pClassPointer;
	};

	void startWave ( int waveNr );
	void eventPostLogin ( class APlayerController* NewPlayer );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage );
	void StartOnlineGame ( );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnServerCreateComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	void Logout ( class AController* Exiting );
	void eventGameEnding ( );
	void eventPreExit ( );
	void DestroyOnlineGame ( );
	void CleanUpDelegates ( );
	struct FString difficultyToString ( unsigned char Difficulty );
	int GetGameModeInt ( );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void eventPostBeginPlay ( );
};

UClass* ASanctumGameInfoEndless::pClassPointer = NULL;

// Class Sanctum.SanctumController
// 0x009C (0x0910 - 0x0874)
class ASanctumController : public AUDKPlayerController
{
public:
	unsigned long                                      mTempBlockerBool : 1;                             		// 0x0874 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mDebug : 1;                                       		// 0x0874 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mReturnTutorialToMain : 1;                        		// 0x0874 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mSplash : 1;                                      		// 0x0874 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mDisconnected : 1;                                		// 0x0874 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              ConfigurableFOV;                                  		// 0x0878 (0x0004) [0x0000000000004000]              ( CPF_Config )
	class USanctumSapitu*                              mSAP;                                             		// 0x087C (0x0004) [0x0000000000000000]              
	class USanctumSapituGame*                          mGame;                                            		// 0x0880 (0x0004) [0x0000000000000000]              
	class USanctumOnlineLeaderboardRead*               mLeaderboardStatsRead;                            		// 0x0884 (0x0004) [0x0000000000000000]              
	struct FString                                     mNextLevelName;                                   		// 0x0888 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mWebUpdateString;                                 		// 0x0894 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mLevelsLocked;                                    		// 0x08A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLobbyFilters                               mLobbyFilters;                                    		// 0x08AC (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineLobbyInterfaceSteamworks*             mLobbyInterface;                                  		// 0x08D8 (0x0004) [0x0000000000000000]              
	class USanctumDataStore_OnlineGameSearch*          mSearchDataStore;                                 		// 0x08DC (0x0004) [0x0000000000000000]              
	struct FString                                     mLobbyIsFull;                                     		// 0x08E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     mCantConnectToLobby;                              		// 0x08EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     mConnectingToHostString;                          		// 0x08F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FScriptDelegate                             __RandomSort__Delegate;                           		// 0x0904 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44825 ];

		return pClassPointer;
	};

	void OnLobbyInvite ( struct FUniqueNetId LobbyId, struct FUniqueNetId FriendID, unsigned long bAccepted );
	void OnLobbyJoinGame ( int LobbyIndex, struct FUniqueNetId ServerID, struct FString ServerIP, TArray< struct FActiveLobbyInfo >* LobbyList );
	void OnLobbyReceiveBinaryData ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList, TArray< unsigned char >* Data );
	void OnLobbyReceiveMessage ( int LobbyIndex, int MemberIndex, struct FString Type, struct FString Message, TArray< struct FActiveLobbyInfo >* LobbyList );
	void OnLobbyMemberStatusUpdate ( int LobbyIndex, int MemberIndex, int InstigatorIndex, struct FString Status, TArray< struct FActiveLobbyInfo >* LobbyList );
	void OnLobbyMemberSettingsUpdate ( int LobbyIndex, int MemberIndex, TArray< struct FActiveLobbyInfo >* LobbyList );
	void OnLobbySettingsUpdate ( int LobbyIndex, TArray< struct FActiveLobbyInfo >* LobbyList );
	void OnFindLobbiesComplete ( unsigned long bWasSuccessful, TArray< struct FBasicLobbyInfo >* LobbyList );
	bool HasSameVersion ( TArray< struct FLobbyMetaData > LobbySettings );
	bool HasHostname ( TArray< struct FLobbyMetaData > LobbySettings );
	void OnPingUpdated ( struct FUniqueNetId LobbyId, int Ping );
	void OnJoinLobbyComplete ( unsigned long bWasSuccessful, int LobbyIndex, struct FUniqueNetId LobbyUID, struct FString Error, TArray< struct FActiveLobbyInfo >* LobbyList );
	void JoinLobby ( struct FString LobbyId );
	void OnCreateLobbyComplete ( unsigned long bWasSuccessful, struct FUniqueNetId LobbyId, struct FString Error );
	struct FString IPToString ( int IP );
	void updateGameLobbySettings ( );
	bool getMetadataForGame ( TArray< struct FLobbyMetaData >* MetaData );
	bool isLobbyAdmin ( int* adminOfIndex );
	void findFriendsLobbies ( int mapIndex, int difficultyIndex, int playersIdx, unsigned long hideFullGames, int addonIdx );
	void FindLobbies ( int mapIndex, int difficultyIndex, int playersIdx, unsigned long hideFullGames, unsigned char lobbyDistance, int addonIdx );
	void appendDifficultyFilter ( int Difficulty, TArray< struct FLobbyFilter >* Filters );
	void appendLevelFilter ( struct FString Level, TArray< struct FLobbyFilter >* Filters );
	void leaveAllLobbies ( );
	void clearLobbyDelegates ( );
	void addLobbyDelegates ( );
	void joinedGame ( class UClass* SGI );
	void fetchLobbyInterface ( );
	void kickLobbyMember ( class ASanctumController* LobbyMember );
	void setupLobby ( );
	void OnAuthReady ( );
	void hostedGame ( class UClass* SGI );
	void ReceivedGameClass ( class UClass* GameClass );
	void SetPlayerSlot ( int SlotNumber );
	void ControlLoop ( );
	void StartControlLoop ( );
	class UClass* stringToHologram ( struct FString hologramString );
	class UClass* stringToTower ( struct FString towerString );
	class UClass* stringToWeapon ( struct FString weaponString );
	void showGame ( );
	void printGames ( );
	bool DoesSaveExist ( );
	void SaveLastEquipment ( TArray< class UClass* > Weapons, TArray< class UClass* > Holograms );
	bool GetLastEquipment ( TArray< class UClass* >* Weapons, TArray< class UClass* >* TowerHolograms );
	void AddNewEncounteredEnemy ( struct FString NewEnemy );
	bool NewEncounteredEnemy ( struct FString CheckEnemy );
	void SetLevelHasBeenStarted ( struct FString Level );
	bool HasLevelBeenStarted ( struct FString Level );
	bool isLevelUnlocked ( struct FString Level );
	void UnlockLevel ( struct FString Level );
	void loadGameToSanctum ( );
	void UpgradeAttachments ( int lvl, int numTowers, TArray< class ASanctumTowerBaseAttachment* >* spawnedAttachments, int* upgradedAttachments, int* totalAttachments, int* totalCost );
	void UpgradeSpawnedAttachments ( int A, int B, int C, int D, int E, TArray< class ASanctumTowerBaseAttachment* >* spawnedAttachments, int* totalCost );
	void SpawnRandomMaze ( int numLevelSix, int numLevelFive, int numLevelFour, int numLevelThree, int numLevelTwo, int numLevelOne );
	void SpawnRandomBlocks ( int numBlocksToSpawn, TArray< class ASanctumTowerBase* >* towerBases, TArray< int >* basesWithBlockIndex, int* totalCost );
	void ShuffleIntArray ( TArray< int >* indexes );
	int RandomSort ( int A, int B );
	void loadWeaponsToSanctum ( );
	class ASanctumWeapon* GetWeaponArchetypeFromClass ( class UClass* Weapon );
	class USanctumSapituGame* loadGame ( struct FString GameID, unsigned long onlyParseInfo );
	bool saveGame ( struct FString GameName );
	void loadCheckpoint ( );
	void resumeGameFromMainMenu ( );
	void ShowAchievementsOverlay ( );
	void ShowChatOverlay ( );
	void ShowFacebookOverlay ( );
	void ShowForumOverlay ( );
	void ShowLeaderboardOverlay ( );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void ShowAudioDebug ( unsigned long audioDebug, unsigned long detailedVolumeInfo, unsigned long showAudioBoundingBox, unsigned long showPriority );
	void updateWebData ( );
	void MapCompleted ( struct FString NextMap, unsigned long MapUnlocked );
	bool IsTutorialLevel ( );
	void ClientGameEnded ( class AActor* EndGameFocus, unsigned long bIsWinner );
	void GameHasEnded ( class AActor* EndGameFocus, unsigned long bIsWinner );
	void CheckLevelsLockInts ( );
	void OnReadAchievementsComplete ( int TitleId );
	void GetAllAchievements ( );
	void ReInitMainMenu ( );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	void OnLoginChange ( unsigned char LocalUserNum );
	void Login ( struct FString UserName, struct FString Password );
	void FixFOV ( );
	void SetFOV ( float NewFOV );
	void Save ( );
	void FixTheFov ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	void eventPreBeginPlay ( );
};

UClass* ASanctumController::pClassPointer = NULL;

// Class Sanctum.SanctumPlayerController
// 0x00A0 (0x09B0 - 0x0910)
class ASanctumPlayerController : public ASanctumController
{
public:
	int                                                mCurrentElevatorIndex;                            		// 0x0910 (0x0004) [0x0000000000000000]              
	class ASanctumTowerHologram*                       mTowerHologram;                                   		// 0x0914 (0x0004) [0x0000000000000000]              
	class ASanctumTowerBase*                           mTowerBase;                                       		// 0x0918 (0x0004) [0x0000000000000000]              
	class ASanctumHUD*                                 mHUD;                                             		// 0x091C (0x0004) [0x0000000000000000]              
	struct FName                                       mPrev;                                            		// 0x0920 (0x0008) [0x0000000000000000]              
	unsigned long                                      mShowReward : 1;                                  		// 0x0928 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      localIsReady : 1;                                 		// 0x0928 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mOnlineStatsWasRead : 1;                          		// 0x0928 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mInMonkeyCage : 1;                                		// 0x0928 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      mInEQCameraTransition : 1;                        		// 0x0928 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mOverviewMode : 1;                                		// 0x0928 (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned long                                      mForceOverviewMode : 1;                           		// 0x0928 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mOverviewDisabled : 1;                            		// 0x0928 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      mNextWaveDisabled : 1;                            		// 0x0928 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      mStefansSecret : 1;                               		// 0x0928 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      mPausedGame : 1;                                  		// 0x0928 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      mPumpiHUDHidden : 1;                              		// 0x0928 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      mEquipmentInitialized : 1;                        		// 0x0928 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      mWeakspotKillSoundAllowed : 1;                    		// 0x0928 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      mReadyTextSwitch : 1;                             		// 0x0928 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      mWeaponStore : 1;                                 		// 0x0928 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      mCheated : 1;                                     		// 0x0928 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      mDidWin : 1;                                      		// 0x0928 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      mGotNewRecord : 1;                                		// 0x0928 (0x0004) [0x0000000000000000] [0x00040000] 
	struct FVector                                     mPlayerMouse;                                     		// 0x092C (0x000C) [0x0000000000000000]              
	float                                              mFOVLinearZoomRate;                               		// 0x0938 (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      mCameraShakeShortWaveForm;                        		// 0x093C (0x0004) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      mCameraShakeLongWaveForm;                         		// 0x0940 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             mAudioComponent;                                  		// 0x0944 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< int >                                      mTowersLocked;                                    		// 0x0948 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mWeaponsLocked;                                   		// 0x0954 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USanctumAchievements*                        mAchievements;                                    		// 0x0960 (0x0004) [0x0000000000000000]              
	class UClass*                                      MatineeCameraClass;                               		// 0x0964 (0x0004) [0x0000000000000000]              
	float                                              mWeakspotKillSoundChance;                         		// 0x0968 (0x0004) [0x0000000000000000]              
	float                                              mWeakspotKillSoundCooldownTime;                   		// 0x096C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   mWeakspotKillSound;                               		// 0x0970 (0x0004) [0x0000000000000000]              
	unsigned char                                      mShouldEnterEquipSelect;                          		// 0x0974 (0x0001) [0x0000000000000020]              ( CPF_Net )
	struct FWaveHashData                               mCompletedWaveData;                               		// 0x0978 (0x0010) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	TArray< class USoundCue* >                         mReadySounds;                                     		// 0x0988 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UCameraAnimInst*                             mCameraAnimInst;                                  		// 0x0994 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __SortElevators__Delegate;                        		// 0x0998 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __CanUnpause__Delegate;                           		// 0x09A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44824 ];

		return pClassPointer;
	};

	void showNextEnemies ( unsigned long show );
	void showResource ( unsigned long show );
	void showLife ( unsigned long show );
	void showBuildList ( unsigned long show );
	void HUDVisibility ( unsigned long show );
	void WeaponVisibility ( unsigned long Visible );
	bool CanUnpause ( );
	struct FVector findFreeSpotOnTeleporter ( class USanctumTeleportInterface* Teleporter );
	void ToggleReady ( unsigned long Toggle );
	void loopNotifierText ( );
	void eventInitInputSystem ( );
	void StoreSwitch ( );
	void SwitchWeapon ( unsigned char T );
	bool LandingShake ( );
	void DrawHUD ( class AHUD* H );
	void Use ( );
	void showRoundEnded ( );
	void endActionPhase ( );
	void startActionPhase ( );
	void startTeleport ( );
	void activatePartyTimer ( unsigned long Force );
	void BeginFire_Gamepad ( unsigned long gamepad );
	void BeginFire ( unsigned char FireModeNum );
	void StartAltFire ( unsigned char FireModeNum );
	void SaveAndNotifyPlayerOfRecord ( );
	void SaveEndGameRecord ( );
	int GetWavesLeftForRecord ( );
	void clientStartBuildPhase ( );
	void clientStartActionPhase ( );
	void SetWaveCompleted ( int WaveCompleted );
	void CheckIfCheated ( );
	struct FRotator GetAdjustedAimFor ( class AWeapon* W, struct FVector StartFireLoc );
	void eventGetPlayerViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation );
	void SetCameraMode ( struct FName NewCamMode );
	void CheckFPS ( );
	void ServerStartActionPhase ( );
	void startBuildPhase ( );
	void EnterStartState ( );
	void ClientEndEquipmentScreen ( );
	void GotoOverviewAndSelectWeapons ( );
	void DoneSelectingEquipment ( );
	void serverGotoState ( struct FName NewState );
	void CalculateNewPlayerStats ( );
	void notifyWaveStarted ( );
	void ProcessMove ( float DeltaTime, struct FVector newAccel, unsigned char DoubleClickMove, struct FRotator DeltaRot );
	void PlayCameraAnim ( class UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, unsigned long bLoop, unsigned long bIsDamageShake );
	void ViewShake ( float DeltaTime );
	void CheckJumpOrDuck ( );
	void StartOverviewMode ( unsigned long Force );
	void ClientStartOverviewMode ( unsigned long Force );
	void NotifyAllEventsOfClass ( class UClass* EventClass );
	void EndOverviewMode ( unsigned long transition );
	void ClientRemoveOverview ( unsigned long UnForce );
	void Save ( );
	void showGameOver ( );
	void showReward ( int rubelsToReward, int WaveNumber, int MaxWaveNumber );
	void characterProcessingComplete ( );
	void TogglePause ( );
	void NextWeapon ( );
	void PrevWeapon ( );
	void ServerEndedOverview ( );
	void ServerEnteredOverview ( unsigned long Force );
	void ToggleOverview ( );
	void ServerTeleportPlayer ( struct FVector TeleportLocation );
	void actuallyTeleportPlayer ( struct FVector TeleportLocation );
	void TeleportPlayer ( struct FVector TeleportLocation );
	void StopZoom ( );
	void StartZoom ( float NewDesiredFOV, float NewZoomRate );
	void AdjustFOV ( float DeltaTime );
	void eventDestroyed ( );
	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition );
	void ClientSetHUD ( class UClass* newHUDType );
	void KickPlayer ( struct FString PlayerName );
	void eventClientWasKicked ( );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	void OnGameInviteReceived ( unsigned char LocalUserNum, struct FString RequestingNick );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	void ClientSetOnlineStatus ( );
	void OnLinkStatusChanged ( unsigned long bConnected );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	void eventClearOnlineDelegates ( );
	void ReceivedGameClass ( class UClass* GameClass );
	void AddOnlineDelegates ( unsigned long bRegisterVoice );
	void UpdateParty ( );
	void ShowSteamFriends ( );
	void WeakspotSoundCooldown ( );
	void DidWeakspotKill ( class ASanctumEnemy* Victim );
	void ClientToggleRadio ( unsigned long On );
	void ClientExpandParasol ( );
	void ClientPickedUpChristmasPresent ( );
	void ClientLightTheGrill ( );
	void ClientShotFish ( int Id );
	void ClientUnlockAchievement ( int Index );
	void ClientReadAllOnlineStats ( );
	void ClientDisableAchievements ( );
	void ClientSetStatToViewID ( unsigned char ViewId, int StatValueDiff, unsigned char NumberOfStats );
	void Cleanup ( );
	void OnJoinGameComplete ( struct FName SessionName, unsigned long bSuccessful );
	void JoinGame ( int ServerIndex );
	void DestroyCurrentOnlineGame ( );
	void PrevElevator ( );
	void NextElevator ( );
	int SortElevators ( class USanctumTeleportInterface* A, class USanctumTeleportInterface* B );
	void ClientStartOnlineGame ( );
	void OnFlushLeaderboardStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void ClientWriteLeaderboardStats ( class UClass* OnlineStatsWriteClass, unsigned long bIsIncomplete );
	void NewActionPhase ( );
	void NewBuildPhase ( );
	void DrawTowerStats ( unsigned long draw );
	void registerListenersToHud ( class ASanctumGameReplicationInfo* GRI, class AHUD* HUD );
	void unregisterListenersToHud ( class ASanctumGameReplicationInfo* GRI, class AHUD* HUD );
	void ShowStatScreen ( );
	void SetTimeLabelForStatScreen ( );
	void ShowGameEndedScreen ( unsigned long won );
	void RewardStars ( );
	void ClientGameEnded ( class AActor* EndGameFocus, unsigned long bIsWinner );
	void GameHasEnded ( class AActor* EndGameFocus, unsigned long bIsWinner );
	void MapCompleted ( struct FString NextMap, unsigned long MapUnlocked );
	bool AllowTextMessage ( struct FString msg );
	void NotifyKismetEscapeMenu ( );
	void NotifyKismetGameResume ( );
	void hide ( struct FString Path );
	bool AllowTTSMessageFrom ( class APlayerReplicationInfo* PRI );
	bool IsBuildPhase ( );
	void ClientRegisterBuildListeners ( );
	void BuildPhaseChanged ( unsigned long buildPhase, unsigned long isViaReplication );
	void updateNotifierText ( unsigned long IsReady );
	void SetTextureLevel ( unsigned char TextureLevel );
	void GetTextureLevel ( );
	void OpenStoreOverlayForDLC ( int AppID );
	void eventPostBeginPlay ( );
	void eventPreBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumPlayerController::pClassPointer = NULL;

// Class Sanctum.SanctumPlayerReplicationInfo
// 0x01A4 (0x041C - 0x0278)
class ASanctumPlayerReplicationInfo : public APlayerReplicationInfo
{
public:
	class UClass*                                      mFamilyInfo;                                      		// 0x0278 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FWeaponData                                 mWeapons[ 0x3 ];                                  		// 0x027C (0x0018) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      mWeaponsInitialized : 1;                          		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsReady : 1;                                     		// 0x0294 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      mReceivedInactivePRI : 1;                         		// 0x0294 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mNeedsHelp : 1;                                   		// 0x0294 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	class UClass*                                      mChosenTowersHologram[ 0x8 ];                     		// 0x0298 (0x0020) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      mSelectedWeaponsInEQScreen[ 0x3 ];                		// 0x02B8 (0x000C) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      mSelectedTowersInEQScreen[ 0x8 ];                 		// 0x02C4 (0x0020) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FTowerCountStruct >                 mFavouriteTowerArray;                             		// 0x02E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SlotNumber;                                       		// 0x02F0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mFrags;                                           		// 0x02F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      mFavouriteWeaponClass;                            		// 0x02F8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      mFavouriteTowerClass;                             		// 0x02FC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mDamageCaused;                                    		// 0x0300 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mWeakSpotHits;                                    		// 0x0304 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mGibs;                                            		// 0x0308 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mTeleports;                                       		// 0x030C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mShotsFired;                                      		// 0x0310 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mShotHits;                                        		// 0x0314 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mSniperKills;                                     		// 0x0318 (0x0004) [0x0000000000000000]              
	int                                                mAssaultKills;                                    		// 0x031C (0x0004) [0x0000000000000000]              
	int                                                mShotgunKills;                                    		// 0x0320 (0x0004) [0x0000000000000000]              
	int                                                mFullyChargedShotgunShots;                        		// 0x0324 (0x0004) [0x0000000000000000]              
	int                                                mInAirKills;                                      		// 0x0328 (0x0004) [0x0000000000000000]              
	int                                                mTowerUpgrades;                                   		// 0x032C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mTowersBuiltCount;                                		// 0x0330 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mDamageCausedSinceActionStart;                    		// 0x0334 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mSpentOnWeapon;                                   		// 0x0338 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mSpentOnTower;                                    		// 0x033C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mSpentOnOther;                                    		// 0x0340 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mJumpCount;                                       		// 0x0344 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mKnockbackCount;                                  		// 0x0348 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mOverviewCount;                                   		// 0x034C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mAverageDPS;                                      		// 0x0350 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mDPS;                                             		// 0x0354 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mPreviousGibs;                                    		// 0x0358 (0x0004) [0x0000000000000000]              
	int                                                mPreviousSniperKills;                             		// 0x035C (0x0004) [0x0000000000000000]              
	int                                                mPreviousAssaultKills;                            		// 0x0360 (0x0004) [0x0000000000000000]              
	int                                                mPreviousShotgunKills;                            		// 0x0364 (0x0004) [0x0000000000000000]              
	int                                                mPreviousFullyChargedShotgunShots;                		// 0x0368 (0x0004) [0x0000000000000000]              
	int                                                mPreviousWeakSpotHits;                            		// 0x036C (0x0004) [0x0000000000000000]              
	int                                                mPreviousTeleports;                               		// 0x0370 (0x0004) [0x0000000000000000]              
	int                                                mPreviousInAirKills;                              		// 0x0374 (0x0004) [0x0000000000000000]              
	int                                                mPreviousTowerUpgrades;                           		// 0x0378 (0x0004) [0x0000000000000000]              
	struct FVector                                     mLocationHUDArrow;                                		// 0x037C (0x000C) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      mRotationHUDArrowByte;                            		// 0x0388 (0x0001) [0x0000000000000020]              ( CPF_Net )
	int                                                mRunnerKills;                                     		// 0x038C (0x0004) [0x0000000000000000]              
	int                                                mHovererKills;                                    		// 0x0390 (0x0004) [0x0000000000000000]              
	int                                                mWalkerKills;                                     		// 0x0394 (0x0004) [0x0000000000000000]              
	int                                                mChargerKills;                                    		// 0x0398 (0x0004) [0x0000000000000000]              
	int                                                mSporePodKills;                                   		// 0x039C (0x0004) [0x0000000000000000]              
	int                                                mBigWalkersKills;                                 		// 0x03A0 (0x0004) [0x0000000000000000]              
	int                                                mBobbleHeadKills;                                 		// 0x03A4 (0x0004) [0x0000000000000000]              
	int                                                mArmouredKills;                                   		// 0x03A8 (0x0004) [0x0000000000000000]              
	int                                                mDebufferKills;                                   		// 0x03AC (0x0004) [0x0000000000000000]              
	int                                                mArmadilloKills;                                  		// 0x03B0 (0x0004) [0x0000000000000000]              
	int                                                mBamanKills;                                      		// 0x03B4 (0x0004) [0x0000000000000000]              
	int                                                mDodgerKills;                                     		// 0x03B8 (0x0004) [0x0000000000000000]              
	int                                                mPrevRunnerKills;                                 		// 0x03BC (0x0004) [0x0000000000000000]              
	int                                                mPrevHovererKills;                                		// 0x03C0 (0x0004) [0x0000000000000000]              
	int                                                mPrevWalkerKills;                                 		// 0x03C4 (0x0004) [0x0000000000000000]              
	int                                                mPrevChargerKills;                                		// 0x03C8 (0x0004) [0x0000000000000000]              
	int                                                mPrevSporePodKills;                               		// 0x03CC (0x0004) [0x0000000000000000]              
	int                                                mPrevBigWalkersKills;                             		// 0x03D0 (0x0004) [0x0000000000000000]              
	int                                                mPrevBobbleHeadKills;                             		// 0x03D4 (0x0004) [0x0000000000000000]              
	int                                                mPrevArmouredKills;                               		// 0x03D8 (0x0004) [0x0000000000000000]              
	int                                                mPrevDebufferKills;                               		// 0x03DC (0x0004) [0x0000000000000000]              
	int                                                mPrevArmadilloKills;                              		// 0x03E0 (0x0004) [0x0000000000000000]              
	int                                                mPrevBamanKills;                                  		// 0x03E4 (0x0004) [0x0000000000000000]              
	int                                                mPrevDodgerKills;                                 		// 0x03E8 (0x0004) [0x0000000000000000]              
	struct FString                                     mResourcesHash;                                   		// 0x03EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ASanctumPing*                                mPings[ 0x5 ];                                    		// 0x03F8 (0x0014) [0x0000000000000000]              
	int                                                mNewestPingIndex;                                 		// 0x040C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __FloatChanged__Delegate;                         		// 0x0410 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44830 ];

		return pClassPointer;
	};

	void activatePing ( struct FVector pingLoc );
	void StorePlayerStats ( );
	void OverrideWith ( class APlayerReplicationInfo* PRI );
	void CopyProperties ( class APlayerReplicationInfo* PRI );
	void IncreaseFavouriteTower ( class UClass* Tower );
	void AddToFavourite ( class UClass* Tower, int Count );
	class UClass* GetFavouriteTowerClass ( );
	void setNotifierText ( );
	bool getReady ( );
	void setReady ( unsigned long Ready );
	void FillEquipmentForTutorial ( );
	void upgradeWeapon ( class UClass* Weapon, int toLevel, unsigned long pay, unsigned long Message );
	void addDamage ( float Damage );
	void InitializeTowers ( int* chosenTowers );
	void initializeWeapons ( int* chosenWeapons );
	int GetWeaponTotalValue ( );
	void notifyWeaponChanged ( );
	void BuyBackWeapons ( );
	void SetSelectedTowerInEQ ( class UClass* towerHologramClass, int Index );
	void SetSelectedWeaponInEQ ( class UClass* WeaponClass, int Index );
	void NewSelectedTowersInEQ ( );
	void NewSelectedWeaponsInEQ ( );
	void RemovePlayerFromOthersInEQ ( );
	void InitializeBuildgun ( );
	void eventDestroyed ( );
	void eventPreBeginPlay ( );
	void ExitExterminationPhase ( );
	void EnterExterminationPhase ( );
	void UpdatePlayersDPS ( );
	void eventReplicatedEvent ( struct FName VarName );
	void FloatChanged ( float NewValue );
};

UClass* ASanctumPlayerReplicationInfo::pClassPointer = NULL;

// Class Sanctum.SanctumGameReplicationInfo
// 0x01BC (0x03D4 - 0x0218)
class ASanctumGameReplicationInfo : public AGameReplicationInfo
{
public:
	struct FPlayerSlot                                 mPlayerSlots[ 0x4 ];                              		// 0x0218 (0x0020) [0x0000000000000020]              ( CPF_Net )
	int                                                mCurrentViewID;                                   		// 0x0238 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      mBuildPhase;                                      		// 0x023C (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      mGameMode;                                        		// 0x023D (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      mBuildPhaseBoolReplicationCondition : 1;          		// 0x0240 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mGameStarted : 1;                                 		// 0x0240 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      mTurbo : 1;                                       		// 0x0240 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      mCheatDetected : 1;                               		// 0x0240 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      mOnlyGatling : 1;                                 		// 0x0240 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mOnlyLightning : 1;                               		// 0x0240 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mOnlyScatterLaser : 1;                            		// 0x0240 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mDebug : 1;                                       		// 0x0240 (0x0004) [0x0000000000000000] [0x00000080] 
	int                                                mLife;                                            		// 0x0244 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mMaxLife;                                         		// 0x0248 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mNumEnemies;                                      		// 0x024C (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FWaveData                                   mWaveData;                                        		// 0x0250 (0x0010) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	int                                                mCashGainDuringWave;                              		// 0x0260 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mBuildPhaseTimeLeft;                              		// 0x0264 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mTowerFrags;                                      		// 0x0268 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mTowerDamage;                                     		// 0x026C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mTowerDamageAtActionStart;                        		// 0x0270 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mTowerDPS;                                        		// 0x0274 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mAverageTowerDPS;                                 		// 0x0278 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mEnemiesReachedCore;                              		// 0x027C (0x0004) [0x0000000000000000]              
	float                                              mClearTime;                                       		// 0x0280 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mSaveTime;                                        		// 0x0284 (0x0004) [0x0000000000000000]              
	float                                              mDifficulty;                                      		// 0x0288 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mMaxPlayers;                                      		// 0x028C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mGameDuration;                                    		// 0x0290 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mNumberOfFixedWaves;                              		// 0x0294 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FString                                     mWaveHash;                                        		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mLifeHash;                                        		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mRunnerKills;                                     		// 0x02B0 (0x0004) [0x0000000000000000]              
	int                                                mHovererKills;                                    		// 0x02B4 (0x0004) [0x0000000000000000]              
	int                                                mWalkerKills;                                     		// 0x02B8 (0x0004) [0x0000000000000000]              
	int                                                mChargerKills;                                    		// 0x02BC (0x0004) [0x0000000000000000]              
	int                                                mSporePodKills;                                   		// 0x02C0 (0x0004) [0x0000000000000000]              
	int                                                mBigWalkersKills;                                 		// 0x02C4 (0x0004) [0x0000000000000000]              
	int                                                mBobbleHeadKills;                                 		// 0x02C8 (0x0004) [0x0000000000000000]              
	int                                                mArmouredKills;                                   		// 0x02CC (0x0004) [0x0000000000000000]              
	int                                                mDebufferKills;                                   		// 0x02D0 (0x0004) [0x0000000000000000]              
	int                                                mArmadilloKills;                                  		// 0x02D4 (0x0004) [0x0000000000000000]              
	int                                                mBamanKills;                                      		// 0x02D8 (0x0004) [0x0000000000000000]              
	int                                                mDodgerKills;                                     		// 0x02DC (0x0004) [0x0000000000000000]              
	int                                                mPrevRunnerKills;                                 		// 0x02E0 (0x0004) [0x0000000000000000]              
	int                                                mPrevHovererKills;                                		// 0x02E4 (0x0004) [0x0000000000000000]              
	int                                                mPrevWalkerKills;                                 		// 0x02E8 (0x0004) [0x0000000000000000]              
	int                                                mPrevChargerKills;                                		// 0x02EC (0x0004) [0x0000000000000000]              
	int                                                mPrevSporePodKills;                               		// 0x02F0 (0x0004) [0x0000000000000000]              
	int                                                mPrevBigWalkersKills;                             		// 0x02F4 (0x0004) [0x0000000000000000]              
	int                                                mPrevBobbleHeadKills;                             		// 0x02F8 (0x0004) [0x0000000000000000]              
	int                                                mPrevArmouredKills;                               		// 0x02FC (0x0004) [0x0000000000000000]              
	int                                                mPrevDebufferKills;                               		// 0x0300 (0x0004) [0x0000000000000000]              
	int                                                mPrevArmadilloKills;                              		// 0x0304 (0x0004) [0x0000000000000000]              
	int                                                mPrevBamanKills;                                  		// 0x0308 (0x0004) [0x0000000000000000]              
	int                                                mPrevDodgerKills;                                 		// 0x030C (0x0004) [0x0000000000000000]              
	struct FDPSKingInfo                                mDPSKingInfo;                                     		// 0x0310 (0x0014) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	TArray< struct FListenerInfo >                     mCashListeners;                                   		// 0x0324 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mLifeListeners;                                   		// 0x0330 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mMaxLifeListeners;                                		// 0x033C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mEnemyListeners;                                  		// 0x0348 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mWaveListeners;                                   		// 0x0354 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mTimeListeners;                                   		// 0x0360 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mCashGainedListeners;                             		// 0x036C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FWaveInformation                            mPlannedWaves[ 0x5 ];                             		// 0x0378 (0x0050) [0x0000000000000020]              ( CPF_Net )
	struct FScriptDelegate                             __IntChanged__Delegate;                           		// 0x03C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44832 ];

		return pClassPointer;
	};

	int getWave ( );
	int getNumberOfEnemy ( );
	int getMaxLife ( );
	int getLife ( );
	void setNumEnemies ( int Enemy );
	void UpdateLobbyWithNewWave ( int Wave );
	void setWave ( int Wave );
	bool IsWaveCheatUsed ( );
	void setMaxLife ( int life );
	void setLife ( int life );
	void reduceLife ( int dmg );
	void removeRubel ( int Amount, int Slot, unsigned char Target );
	void giveRubel ( int rubels, int Slot );
	void UpdateManagePlayerList ( );
	void RemovePRI ( class APlayerReplicationInfo* PRI );
	void AddPRI ( class APlayerReplicationInfo* PRI );
	void giveRubelAll ( int rubels );
	void setRubel ( int Rubel, int Slot );
	void notifyCashGainedListeners ( );
	void notifyTimeListeners ( );
	void notifyWaveListeners ( );
	void notifyEnemyListeners ( );
	void notifyMaxLifeListeners ( );
	void notifyLifeListeners ( );
	void notifyCashListeners ( int Slot );
	void unregisterTimeListener ( struct FScriptDelegate timeListener );
	void unregisterWaveListener ( struct FScriptDelegate waveListener );
	void unregisterEnemyListener ( struct FScriptDelegate enemyListener );
	void unregisterMaxLifeListener ( struct FScriptDelegate lifeListener );
	void unregisterLifeListener ( struct FScriptDelegate lifeListener );
	void unregisterCashGainedListener ( struct FScriptDelegate cashListener );
	void registerCashGainedListener ( struct FScriptDelegate Listener );
	void unregisterCashListener ( struct FScriptDelegate cashListener, int Slot );
	void registerTimeListener ( struct FScriptDelegate Listener );
	void registerWaveListener ( struct FScriptDelegate Listener );
	void registerEnemyListener ( struct FScriptDelegate Listener );
	void registerMaxLifeListener ( struct FScriptDelegate maxLifeListener );
	void registerLifeListener ( struct FScriptDelegate lifeListener );
	int getRubels ( int SlotNumber );
	void registerCashListener ( struct FScriptDelegate cashListener, int Slot );
	bool getIncommingEnemies ( int Wave, struct FString* Enemies );
	int GetCurrentViewIDForLeaderboard ( );
	void StoreGameStats ( );
	void PlanNextWave ( int Wave, TArray< class ASanctumEnemy* > Enemies );
	void ExitExterminationPhase ( );
	void EnterExterminationPhase ( );
	void UpdateTowersDPS ( );
	void addTowerDamage ( float Damage );
	bool IsBuildPhase ( );
	void BuildPhaseChanged ( unsigned long buildPhase, unsigned long isViaReplication );
	void eventReplicatedEvent ( struct FName VarName );
	void IntChanged ( int NewValue );
};

UClass* ASanctumGameReplicationInfo::pClassPointer = NULL;

// Class Sanctum.SanctumPawn
// 0x0088 (0x06B8 - 0x0630)
class ASanctumPawn : public ASanctumPawnBase
{
public:
	class UDynamicLightEnvironmentComponent*           mLightEnvironment;                                		// 0x0630 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class ASanctumFreezeObject*                        mFreezeObject;                                    		// 0x0634 (0x0004) [0x0000000000000000]              
	unsigned long                                      mFreeze : 1;                                      		// 0x0638 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      mInSlowField : 1;                                 		// 0x0638 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bGibbed : 1;                                      		// 0x0638 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mAbleToTeleportBetweenPathNodes : 1;              		// 0x0638 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              mCustomTimeDilation;                              		// 0x063C (0x0004) [0x0000000000000000]              
	unsigned char                                      mCompressedTimeDilation[ 0x2 ];                   		// 0x0640 (0x0002) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      mCompressedAmpColor[ 0x2 ];                       		// 0x0642 (0x0002) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      mCompressedAnimTime[ 0x2 ];                       		// 0x0644 (0x0002) [0x0000000000000020]              ( CPF_Net )
	float                                              mDamageMultiplier;                                		// 0x0648 (0x0004) [0x0000000000000000]              
	float                                              mAmpColorScale;                                   		// 0x064C (0x0004) [0x0000000000000000]              
	float                                              mOrigTimeDilation;                                		// 0x0650 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             mHitEffect;                                       		// 0x0654 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             mHitEffectWeakSpot;                               		// 0x0658 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             mHitEffectReducedDamage;                          		// 0x065C (0x0004) [0x0000000000000000]              
	float                                              DeathTime;                                        		// 0x0660 (0x0004) [0x0000000000000000]              
	int                                                mMaterialIndex;                                   		// 0x0664 (0x0004) [0x0000000000000000]              
	TArray< struct FGibInfo >                          mGibs;                                            		// 0x0668 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             mGibExplosionTemplate;                            		// 0x0674 (0x0004) [0x0000000000000000]              
	TArray< class UMaterialInstanceConstant* >         mMaterials;                                       		// 0x0678 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      SoundGroupClass;                                  		// 0x0684 (0x0004) [0x0000000000000000]              
	float                                              mLastPainSound;                                   		// 0x0688 (0x0004) [0x0000000000000000]              
	float                                              mLastPainEffect;                                  		// 0x068C (0x0004) [0x0000000000000000]              
	float                                              MaxFootstepDistSq;                                		// 0x0690 (0x0004) [0x0000000000000000]              
	TArray< struct FSlowDownStruct >                   SlowArray;                                        		// 0x0694 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDamageMultiplierData >             mDamageMultiplierArray;                           		// 0x06A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mAnimationNodeInterval;                           		// 0x06AC (0x0004) [0x0000000000000000]              
	int                                                mPathNodeCounter;                                 		// 0x06B0 (0x0004) [0x0000000000000000]              
	class APlayerReplicationInfo*                      mLocalPRI;                                        		// 0x06B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44836 ];

		return pClassPointer;
	};

	bool DoJump ( unsigned long bUpdating );
	void PlayJumpingSound ( );
	void PlayDyingSound ( );
	void ActuallyPlayFootstepSound ( int FootDown );
	void eventPlayFootStepSound ( int FootDown );
	struct FName GetMaterialBelowFeet ( );
	void TurnOffPawn ( );
	void SpawnGibs ( class UClass* sanctumDamageTypeClass, struct FVector HitLocation );
	class ASanctumGib* SpawnGib ( class UClass* GibClass, struct FName BoneName, class UClass* sanctumDamageTypeClass, struct FVector HitLocation, unsigned long bSpinGib );
	struct FVector ReflectVect ( struct FVector V, struct FVector N );
	void SwitchWeapon ( unsigned char NewGroup );
	void StoreSwitch ( unsigned char NewGroup );
	bool HandleHitEffect ( );
	float GetEyeHeight ( );
	struct FVector GetPawnViewLocation ( );
	class USoundCue* GetPawnAmbientSound ( );
	void SetPawnAmbientSound ( class USoundCue* NewAmbientSound );
	void ReachedPathnode ( );
	void SetAnimationTime ( float newAnimationTime );
	float GetAnimationTime ( );
	float GetAnimationLength ( );
	void SetAmpColor ( float AmpScale );
	void SetSlowColor ( float ColorScale );
	float GetAmpColorScale ( );
	float GetAmpSlowRelation ( );
	void setDamageMultiplier ( float newDamageMultiplier );
	void multiplyDamage ( float damageMultiplier );
	void revertDamageMultiplier ( float damageMultiplier );
	void RemoveDamageMultiplierBy ( class AActor* MultipliedBy );
	void AddDamageMultiplier ( class AActor* DamageModdedBy, float damageMultiplier );
	void SetFrozen ( unsigned long frozen, float freezeTime, float DiminishFactor, float diminishTime );
	void RevertSlow ( float slowness );
	void Slowdown ( float slowness );
	void SetCustomTimeDilation ( float newCustomTimeDilation );
	int GetNumberOfSlowProjectilesAffecting ( );
	void RecalculateAllSlowDiminish ( );
	bool RemoveSlowDownBy ( class AActor* SlowedBy );
	void CalculateSlowRateDiminish ( float DiminishFactor, int NumberOfProjectileAffecters, float* SlowDownRate );
	bool SetSlowDown ( class AActor* SlowedBy, float SlowDownRate, float DiminishFactor, unsigned long DoesCauserStack );
	float Byte2ToFloat ( unsigned char* inputBytes, unsigned long bSigned );
	void FloatTo2Bytes ( float inputFloat, unsigned long bSigned, unsigned char* out_Bytes );
	bool IsChristmasLevel ( );
	void SpawnTransEffect ( );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void GetPRI ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumPawn::pClassPointer = NULL;

// Class Sanctum.SanctumGib
// 0x0068 (0x0230 - 0x01C8)
class ASanctumGib : public AActor
{
public:
	class UDynamicLightEnvironmentComponent*           GibLightEnvironment;                              		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   HitSound;                                         		// 0x01CC (0x0004) [0x0000000000000000]              
	class UMeshComponent*                              GibMeshComp;                                      		// 0x01D0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   MIC_Gib;                                          		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           MI_Decal;                                         		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                MITV_DecalTemplate;                               		// 0x01DC (0x0004) [0x0000000000000000]              
	struct FName                                       DecalDissolveParamName;                           		// 0x01E0 (0x0008) [0x0000000000000000]              
	float                                              DecalWaitTimeBeforeDissolve;                      		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                MITV_GibMeshTemplate;                             		// 0x01EC (0x0004) [0x0000000000000000]              
	class UMaterialInstanceTimeVarying*                MITV_GibMeshTemplateSecondary;                    		// 0x01F0 (0x0004) [0x0000000000000000]              
	struct FName                                       GibMeshDissolveParamName;                         		// 0x01F4 (0x0008) [0x0000000000000000]              
	float                                              GibMeshWaitTimeBeforeDissolve;                    		// 0x01FC (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_GibEffect;                                    		// 0x0200 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_CustomEffect;                                  		// 0x0204 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseUnrealPhysics : 1;                            		// 0x0208 (0x0004) [0x0000000000044000] [0x00000001] ( CPF_Config | CPF_GlobalConfig )
	unsigned long                                      bStopMovingCamera : 1;                            		// 0x0208 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FStaticMeshDatum >                  GibMeshesData;                                    		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     OldCamLoc;                                        		// 0x0218 (0x000C) [0x0000000000000000]              
	struct FRotator                                    OldCamRot;                                        		// 0x0224 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44852 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void TurnOnCollision ( );
	void LeaveADecal ( struct FVector HitLoc, struct FVector HitNorm );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	bool CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV );
	void eventBecomeViewTarget ( class APlayerController* PC );
	void Timer ( );
	void DoCustomGibEffects ( );
	void ChooseGib ( );
	void SetGibStaticMesh ( class UStaticMesh* NewStaticMesh );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void SetTexturesToBeResident ( float TimeToBeResident );
	void eventPreBeginPlay ( );
};

UClass* ASanctumGib::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroup
// 0x005C (0x0098 - 0x003C)
class USanctumPawnSoundGroup : public UObject
{
public:
	class USoundCue*                                   DefaultJumpingSound;                              		// 0x003C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   LandSound;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   DyingSound;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   HitSounds[ 0x3 ];                                 		// 0x0048 (0x000C) [0x0000000000000000]              
	class USoundCue*                                   GibSound;                                         		// 0x0054 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ImmuneSound;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< struct FFootstepSoundInfo >                FootstepSounds;                                   		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   DefaultFootstepSound;                             		// 0x0068 (0x0004) [0x0000000000000000]              
	TArray< struct FFootstepSoundInfo >                JumpingSounds;                                    		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFootstepSoundInfo >                LandingSounds;                                    		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   DefaultLandingSound;                              		// 0x0084 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   BulletImpactSound;                                		// 0x0088 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   CrushedSound;                                     		// 0x008C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   BodyExplosionSound;                               		// 0x0090 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   InstagibSound;                                    		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44861 ];

		return pClassPointer;
	};

	void PlayImmuneSound ( class ASanctumEnemy* P, class AActor* InstigatedBy );
	void PlayGibSound ( class APawn* P );
	void PlayTakeHitSound ( class APawn* P, int Damage );
	void PlayDyingSound ( class APawn* P );
	class USoundCue* GetLandSound ( struct FName MaterialType );
	class USoundCue* GetJumpSound ( struct FName MaterialType );
	class USoundCue* GetFootstepSound ( int FootDown, struct FName MaterialType );
	void PlayLandSound ( class APawn* P );
	void PlayJumpSound ( class APawn* P );
	void PlayBodyExplosion ( class APawn* P );
	void PlayCrushedSound ( class APawn* P );
	void PlayBulletImpact ( class APawn* P );
	void PlayInstagibSound ( class APawn* P );
};

UClass* USanctumPawnSoundGroup::pClassPointer = NULL;

// Class Sanctum.SanctumFreezeObject
// 0x000C (0x01D4 - 0x01C8)
class ASanctumFreezeObject : public AActor
{
public:
	TArray< struct FDiminishStruct >                   mDiminishArray;                                   		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44880 ];

		return pClassPointer;
	};

	void eventTick ( float Delta );
	void NewFreezeObject ( float freezeTime, float DiminishFactor, float diminishTime );
};

UClass* ASanctumFreezeObject::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachment
// 0x0084 (0x024C - 0x01C8)
class ASanctumTowerBaseAttachment : public AActor
{
public:
	class ASanctumTowerBase*                           mTowerBase;                                       		// 0x01C8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mMaxLevel;                                        		// 0x01CC (0x0004) [0x0000000000000000]              
	TArray< struct FLinearColor >                      mMaterialColor;                                   		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mLevel;                                           		// 0x01DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< int >                                      mCost;                                            		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mRubelSpent[ 0x4 ];                               		// 0x01EC (0x0010) [0x0000000000000000]              
	unsigned long                                      mUpgradable : 1;                                  		// 0x01FC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mActionPhaseReplication : 1;                      		// 0x01FC (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FName >                             mWhiteList;                                       		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           mSpecial;                                         		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      mTowerInfo;                                       		// 0x0218 (0x0004) [0x0000000000000000]              
	int                                                mDamageInflicted;                                 		// 0x021C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mKills;                                           		// 0x0220 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mDamageInflictedLastWave;                         		// 0x0224 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mKillsLastWave;                                   		// 0x0228 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< struct FLinearColor >                      mGiftColors;                                      		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                mCurrentGiftColor;                                		// 0x0238 (0x0010) [0x0000000000000020]              ( CPF_Net )
	class ASanctumPlayerController*                    mBuiltBySPC;                                      		// 0x0248 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44893 ];

		return pClassPointer;
	};

	int getRubelSpent ( int slotNr );
	void setRubelSpent ( int rubelSpent, int slotNr );
	int getBuyCost ( );
	int getUpgradeCost ( );
	int GetAccumulatedUpgradeCost ( int Level );
	int getTotalAmountRubelSpent ( );
	void Upgrade ( int NewLevel );
	int GetSellPrice ( );
	class ASanctumTowerBase* getParent ( );
	void setTowerBase ( class ASanctumTowerBase* TowerBase );
	void setLightEnvrioment ( class UDynamicLightEnvironmentComponent* enviroment );
	void GetStats ( int Level, struct FStatInfoStruct* statInfo );
	void StartBuildingPhase ( );
	void startActionPhase ( );
	class ASanctumTowerBase* getTowerBase ( );
	struct FName getTowerBaseName ( );
	int getMaxLevel ( );
	class UClass* getTowerInfo ( );
	int getLevel ( );
	bool IsChristmas ( );
	void CheckDLCOwnerShip ( class ASanctumPlayerController* SPC );
	bool HasDLC ( );
	void SetChristmasColor ( struct FLinearColor LC );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumTowerBaseAttachment::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentField
// 0x0034 (0x0280 - 0x024C)
class ASanctumTowerBaseAttachmentField : public ASanctumTowerBaseAttachment
{
public:
	TArray< class UMaterialInstance* >                 mMaterial;                                        		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       mColorParameterName;                              		// 0x0258 (0x0008) [0x0000000000000000]              
	TArray< int >                                      cMaterialsToChange;                               		// 0x0260 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UStaticMeshComponent*                        mStaticMesh;                                      		// 0x026C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   mMeshMIC;                                         		// 0x0270 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             mFieldParticleSystem;                             		// 0x0274 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    mFieldParticleSystemComponent;                    		// 0x0278 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      mAutoActivatePSC : 1;                             		// 0x027C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44892 ];

		return pClassPointer;
	};

	void UpgradeMesh ( int toLevel );
	void createParticleSystem ( );
	void eventTick ( float Delta );
	void HandleUntouch ( class ASanctumPawn* P );
	void HandleTouchingPawn ( class ASanctumPawn* P );
	bool IsPawnOn ( class APawn* P );
	void setTowerBase ( class ASanctumTowerBase* TowerBase );
	void Upgrade ( int toLevel );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumTowerBaseAttachmentField::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentSlowField
// 0x0004 (0x0284 - 0x0280)
class ASanctumTowerBaseAttachmentSlowField : public ASanctumTowerBaseAttachmentField
{
public:
	class USanctumConfigSlowField*                     cSlowConfig;                                      		// 0x0280 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44891 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void HandleUntouch ( class ASanctumPawn* P );
	void HandleTouchingPawn ( class ASanctumPawn* P );
	void eventUnTouch ( class AActor* Other );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
};

UClass* ASanctumTowerBaseAttachmentSlowField::pClassPointer = NULL;

// Class Sanctum.SanctumEnemy
// 0x017C (0x0834 - 0x06B8)
class ASanctumEnemy : public ASanctumPawn
{
public:
	float                                              cSpeed;                                           		// 0x06B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       cTurretAimBone;                                   		// 0x06BC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       cHealthbarBone;                                   		// 0x06C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   cHealthbarSize;                                   		// 0x06CC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     cHealthbarOffset;                                 		// 0x06D4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     cCombatTextOffset;                                		// 0x06E0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              cSnapDistance;                                    		// 0x06EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             cBonesToHideOnWeakspotGib;                        		// 0x06F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             cWeakSpotBone;                                    		// 0x06FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cWeakSpotBoneRadius;                              		// 0x0708 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cNockbackScale;                                   		// 0x0714 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                cDamage;                                          		// 0x0718 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cStrafeTolerance;                                 		// 0x071C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cStrafeDistance;                                  		// 0x0720 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     cName;                                            		// 0x0724 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cArmourReduction;                                 		// 0x0730 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cArmourWeakspotMod;                               		// 0x0734 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    cDamageMultiplier;                                		// 0x0738 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	TArray< float >                                    cHealthMultiplier;                                		// 0x0744 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	int                                                mRubelsWorth;                                     		// 0x0750 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                NumberOfEnemies;                                  		// 0x0754 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnStartTime;                                   		// 0x0758 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnCooldown;                                    		// 0x075C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Probability;                                      		// 0x0760 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                cCasualBaseHP;                                    		// 0x0764 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cCasualHpMOD;                                     		// 0x0768 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                cBaseHP;                                          		// 0x076C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cHpMOD;                                           		// 0x0770 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                cBaseHPHardcore;                                  		// 0x0774 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cHpMODHardcore;                                   		// 0x0778 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      cSpBaseHp;                                        		// 0x077C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cSpHpMod;                                         		// 0x0788 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ASanctumEnemy*                               mEndlessArchetype;                                		// 0x0794 (0x0004) [0x0000000000000000]              
	int                                                mMortarHits;                                      		// 0x0798 (0x0004) [0x0000000000000000]              
	unsigned long                                      mMarked : 1;                                      		// 0x079C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mRagdolled : 1;                                   		// 0x079C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mFlying : 1;                                      		// 0x079C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mAimLocationDirty : 1;                            		// 0x079C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      mDebug : 1;                                       		// 0x079C (0x0004) [0x0000000000000000] [0x00000010] 
	struct FVector                                     mMarkedLocation;                                  		// 0x07A0 (0x000C) [0x0000000000000000]              
	int                                                mCashGained;                                      		// 0x07AC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ASanctumHealthbar*                           mHealthBar;                                       		// 0x07B0 (0x0004) [0x0000000000000000]              
	unsigned char                                      mCompressedHealthPercent;                         		// 0x07B4 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class ASanctumCombatText*                          mCombatText;                                      		// 0x07B8 (0x0004) [0x0000000000000000]              
	float                                              cGibSize;                                         		// 0x07BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UCylinderComponent* >                mAdditionalComponents;                            		// 0x07C0 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UParticleSystem*                             mImmuneHitEffect;                                 		// 0x07CC (0x0004) [0x0000000000000000]              
	struct FVector                                     mAimLocation;                                     		// 0x07D0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mOrigGroundSpeed;                                 		// 0x07DC (0x0004) [0x0000000000000000]              
	float                                              mHeadRadius;                                      		// 0x07E0 (0x0004) [0x0000000000000000]              
	float                                              mTargetingRadius;                                 		// 0x07E4 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             mWeakSpotControllers;                             		// 0x07E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSanctumTakeHitInfo                         LastHurtBy;                                       		// 0x07F4 (0x0028) [0x0000000000000020]              ( CPF_Net )
	class UMaterialInstance*                           mMaterial;                                        		// 0x081C (0x0004) [0x0000000000000000]              
	struct FName                                       mShieldScalarParameter;                           		// 0x0820 (0x0008) [0x0000000000000000]              
	TArray< class UActorComponent* >                   mChristmasComponents;                             		// 0x0828 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44895 ];

		return pClassPointer;
	};

	void SetWeakbonesScale ( float NewScale );
	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent );
	void WakeRagdoll ( class UClass* DamageType );
	void DisableShield ( );
	void EnableShield ( );
	void SpawnCoreDamageEffect ( struct FVector centerLocation, struct FVector surfaceLocation );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void PlayTakeDamageSound ( struct FVector HitLocation, float Damage, class UClass* DamageType, class AActor* DamageCauser, int Flags );
	void PlayWeakspotGib ( struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType );
	void PlayTakeDamageEffect ( struct FVector HitLocation, float Damage, class UClass* DamageType, class AActor* DamageCauser, int Flags );
	void eventTornOff ( );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void CollectStats ( class UClass* damageTypeClass, class AController* InstigatedBy, int Damage, unsigned long weakSpot, class AActor* DamageCauser );
	void GotHitByController ( class AController* InstigatedBy );
	bool WeakSpotHit ( struct FVector HitLocation, struct FVector Momentum, class UClass* damageTypeClass );
	void eventTick ( float DeltaTime );
	bool isMarked ( );
	bool ShouldGib ( class UClass* damageTypeClass );
	void PlayDying ( class UClass* damageTypeClass, struct FVector HitLoc );
	bool IsFlying ( );
	void ReachedCore ( struct FVector HitLocation );
	void KilledTimer ( );
	void SetPawnRBChannels ( unsigned long bRagdollMode );
	int CalculateHitFlags ( struct FVector HitLocation, struct FVector Momentum, class UClass* damageTypeClass );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* damageTypeClass, struct FVector Momentum, struct FTraceHitInfo HitInfo );
	bool IsImmune ( struct FVector HitLocation, struct FVector Momentum, struct FTraceHitInfo HitInfo, int Damage, class UClass* DamageType, class AActor* DamageCauser );
	struct FVector GetAimLocation ( );
	struct FVector GetHealthBoneWorldLocation ( );
	void SetupHealthbar ( );
	int GetEndlessScalingHealth ( int Difficulty, float scaledWaveDifficulty, unsigned long singlePlayerGame );
	void SetEndlessData ( int totalWaves, int waveNr, unsigned long isSpGame, float scaledDifficulty, float Difficulty );
	void AlwaysRelevantFalse ( );
	float GetSpeedForStuckCheck ( );
	void StuckKillSelf ( );
	void CheatKillSelf ( );
	class ASanctumChristmasPresent* DropGift ( );
	bool ShouldDropChristmasPresent ( );
	void AttachChristmas ( );
	bool ShouldBeChristmasEnemy ( );
	bool IsChristmasEvent ( );
	void Destroyed ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumEnemy::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentBlock
// 0x000C (0x0258 - 0x024C)
class ASanctumTowerBaseAttachmentBlock : public ASanctumTowerBaseAttachment
{
public:
	class UStaticMeshComponent*                        mStaticMesh;                                      		// 0x024C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   mBuildSound;                                      		// 0x0250 (0x0004) [0x0000000000000000]              
	class UMaterialInstance*                           mMaterial;                                        		// 0x0254 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44926 ];

		return pClassPointer;
	};

	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	void eventTick ( float DeltaTime );
	int GetSellPrice ( );
	void PlayBuildSound ( );
	void SetChristmasColor ( struct FLinearColor LC );
	void PostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentBlock::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentElevator
// 0x007C (0x02C8 - 0x024C)
class ASanctumTowerBaseAttachmentElevator : public ASanctumTowerBaseAttachment
{
public:
	struct FVector                                     mOriginalPosition;                                		// 0x024C (0x000C) [0x0000000000000000]              
	struct FVector                                     cRaisedOffset;                                    		// 0x0258 (0x000C) [0x0000000000000000]              
	float                                              cTopRaiseAnimTime;                                		// 0x0264 (0x0004) [0x0000000000000000]              
	float                                              cLowerElevatorDist;                               		// 0x0268 (0x0004) [0x0000000000000000]              
	float                                              cRaiseElevatorDist;                               		// 0x026C (0x0004) [0x0000000000000000]              
	int                                                cUpdatesPerSecond;                                		// 0x0270 (0x0004) [0x0000000000000000]              
	unsigned long                                      mMoveBox : 1;                                     		// 0x0274 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      mBoxRaising : 1;                                  		// 0x0274 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      mRaised : 1;                                      		// 0x0274 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	class UStaticMeshComponent*                        mTopMesh;                                         		// 0x0278 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mOverviewMesh;                                    		// 0x027C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mTowerBottom;                                     		// 0x0280 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   mTopMIC;                                          		// 0x0284 (0x0004) [0x0000000000000000]              
	float                                              mUpdateTime;                                      		// 0x0288 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class ASanctumPlayer* >                    mPlayers;                                         		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASanctumPlayer* >                    mClosePlayers;                                    		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASanctumPlayer* >                    mPlayersOnElevator;                               		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterial*                                   mMaterial;                                        		// 0x02B0 (0x0004) [0x0000000000000000]              
	class UCylinderComponent*                          mPlayerDetector;                                  		// 0x02B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstance*                           mOverviewMaterialInstance;                        		// 0x02B8 (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           mCorners;                                         		// 0x02BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44927 ];

		return pClassPointer;
	};

	bool OnElevator ( class AActor* A );
	void MoveBox ( float DeltaTime, unsigned long upWards );
	void eventTick ( float Delta );
	struct FVector getLocation ( );
	void StopHighlight ( );
	void StartHighlight ( );
	void StopOverview ( );
	void StartOverview ( );
	void FindPlayers ( );
	void eventPlayerSteppedOffElevator ( class ASanctumPlayer* P );
	void moveElevatorDown ( );
	void moveElevatorUp ( );
	void eventPlayerSteppedOnElevator ( class ASanctumPlayer* P );
	void NearbyPlayers ( );
	void ensurePlayersOnElevator ( );
	void eventPlayerGotDistanceToElevator ( class ASanctumPlayer* P );
	void eventPlayerCameCloseToElevator ( class ASanctumPlayer* P );
	void DetectPlayers ( );
	bool AboveTower ( class AActor* A );
	bool OnTowers ( class AActor* A );
	void setTowerBase ( class ASanctumTowerBase* TowerBase );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
};

UClass* ASanctumTowerBaseAttachmentElevator::pClassPointer = NULL;

// Class Sanctum.SanctumPlayer
// 0x009C (0x0754 - 0x06B8)
class ASanctumPlayer : public ASanctumPawn
{
public:
	class UAnimNodeSlot*                               mFullBodyAnimSlot;                                		// 0x06B8 (0x0004) [0x0000000000000000]              
	class UAnimNodeSlot*                               mTopHalfAnimSlot;                                 		// 0x06BC (0x0004) [0x0000000000000000]              
	class UUDKAnimBlendBase*                           mBuildPhaseNode;                                  		// 0x06C0 (0x0004) [0x0000000000000000]              
	class UClass*                                      mCurrentWeaponAttachmentClass;                    		// 0x06C4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ASanctumWeaponAttachment*                    mCurrentWeaponAttachment;                         		// 0x06C8 (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 mNockbackAnim;                                    		// 0x06CC (0x0004) [0x0000000000000000]              
	struct FName                                       mWeaponSocket;                                    		// 0x06D0 (0x0008) [0x0000000000000000]              
	struct FName                                       mBuildgunSocket;                                  		// 0x06D8 (0x0008) [0x0000000000000000]              
	unsigned long                                      mDebug : 1;                                       		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bJustLanded : 1;                                  		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLandRecovery : 1;                                		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHeadBob : 1;                                     		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mKnockbackCooldown : 1;                           		// 0x06E0 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      mInKnockback : 1;                                 		// 0x06E0 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     mPrevPosition;                                    		// 0x06E4 (0x000C) [0x0000000000000000]              
	float                                              LandBob;                                          		// 0x06F0 (0x0004) [0x0000000000000000]              
	float                                              BobTime;                                          		// 0x06F4 (0x0004) [0x0000000000000000]              
	struct FVector                                     WalkBob;                                          		// 0x06F8 (0x000C) [0x0000000000000000]              
	float                                              JumpBob;                                          		// 0x0704 (0x0004) [0x0000000000000000]              
	float                                              Bob;                                              		// 0x0708 (0x0004) [0x0000000000000000]              
	float                                              AppliedBob;                                       		// 0x070C (0x0004) [0x0000000000000000]              
	float                                              mNockbackHeight;                                  		// 0x0710 (0x0004) [0x0000000000000000]              
	float                                              mKnockbackCooldownTime;                           		// 0x0714 (0x0004) [0x0000000000000000]              
	class ASanctumPlayerController*                    mBrutusAchievementController;                     		// 0x0718 (0x0004) [0x0000000000000000]              
	float                                              mBrutusAchievementTime;                           		// 0x071C (0x0004) [0x0000000000000000]              
	class UClass*                                      mDefaultFamilyInfo[ 0x2 ];                        		// 0x0720 (0x0008) [0x0000000000000000]              
	class UClass*                                      mCurrFamilyInfo;                                  		// 0x0728 (0x0004) [0x0000000000000000]              
	TArray< class UMaterialInstanceConstant* >         mCharacterMICs;                                   		// 0x072C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mOverheat;                                        		// 0x0738 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              mLastOverheatSet;                                 		// 0x073C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mOverheatTimeThreshold;                           		// 0x0740 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             mWeaponAmbientSound;                              		// 0x0744 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   mWeaponAmbientSoundCue;                           		// 0x0748 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UParticleSystemComponent*                    mSnowParticleSystemComponent;                     		// 0x074C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mSnowParticleSystemOffset;                        		// 0x0750 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44940 ];

		return pClassPointer;
	};

	void SetPhaseAnimation ( );
	void eventTick ( float DeltaTime );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void KnockBack ( struct FVector SourceLocation, struct FVector HitLocation, struct FVector vel, float knockBackScale );
	void KnockbackHasEnded ( );
	void KnockbackCooldown ( );
	void BuildPhaseChanged ( unsigned long NewValue );
	void PlayLandingSound ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	struct FVector WeaponBob ( float BobDamping, float JumpDamping );
	void eventUpdateEyeHeight ( float DeltaTime );
	void SetPuttingDownWeapon ( unsigned long bNowPuttingDownWeapon );
	void WeaponStoppedFiring ( class AWeapon* InWeapon, unsigned long bViaReplication );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	void SpawnFireFX ( unsigned char FiringModeNum, struct FImpactInfo Impact );
	void FlashCountUpdated ( class AWeapon* InWeapon, unsigned char InFlashCount, unsigned long bViaReplication );
	void FlashLocationUpdated ( class AWeapon* InWeapon, struct FVector InFlashLocation, unsigned long bViaReplication );
	void FiringModeUpdated ( class AWeapon* InWeapon, unsigned char InFiringMode, unsigned long bViaReplication );
	void weaponAttachmentChanged ( );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void eventEncroachedBy ( class AActor* Other );
	void FixSoundMode ( );
	void RevertSlow ( float slowness );
	void Slowdown ( float slowness );
	void SetWeaponAmbientSound ( class USoundCue* NewAmbientSound );
	void SetOverheat ( float Overheat );
	int getWeaponLevel ( class UClass* WeaponClass );
	struct FVector GetPawnViewLocation ( );
	void updatedPRI ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void FamilyInfoUpdated ( );
	void AssignInventoryManagerHUD ( );
	void StopOverview ( );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void StartOverview ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void enterBuildPhase ( );
	void enterActionPhase ( );
	void ToggleOwnerSee ( unsigned long see );
	struct FVector eventGetWeaponStartTraceLocation ( class AWeapon* CurrentWeapon );
	void UnPossessed ( );
	bool eventIsInOverviewMode ( );
	void WeaponChanged ( class ASanctumWeapon* NewWeapon );
	void SpawnSnow ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumPlayer::pClassPointer = NULL;

// Class Sanctum.SanctumMapInfo
// 0x005C (0x0098 - 0x003C)
class USanctumMapInfo : public UMapInfo
{
public:
	class ASanctumWaveSpawner*                         mWaveSpawner;                                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ASanctumWavespawnerEndless*                  mWaveSpawnerEndless;                              		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mStartingLife;                                    		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mStartingLifeEndless;                             		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     NextLevel;                                        		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CurrentMap;                                       		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      TutorialLevel : 1;                                		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DemoLevel : 1;                                    		// 0x0064 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< class UClass* >                            mUnavailablTowersSP;                              		// 0x0068 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UClass* >                            mUnavailablTowersMP;                              		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                cNumberOfTowersToSelect;                          		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mOverriddenMaxTowers;                             		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class USanctumTeleportInterface* >         mElevatorList;                                    		// 0x0088 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class USanctumPathingCommonRoute*                  mCommonRoute;                                     		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44955 ];

		return pClassPointer;
	};

	bool IsDemoBuild ( );
	class USanctumPathingCommonRoute* GetPathingCommonRouteObject ( );
	bool IsTowerAvailableOnMap ( class UClass* hologram );
	void GetUnavailableTowersArray ( TArray< class UClass* >* unavailablTowers );
	int GetNumberOfTowersToSelect ( );
};

UClass* USanctumMapInfo::pClassPointer = NULL;

// Class Sanctum.SanctumAIController
// 0x0038 (0x03D4 - 0x039C)
class ASanctumAIController : public AGameAIController
{
public:
	int                                                mNodeNum;                                         		// 0x039C (0x0004) [0x0000000000000000]              
	float                                              mStrafeDistance;                                  		// 0x03A0 (0x0004) [0x0000000000000000]              
	float                                              mStrafeTolerance;                                 		// 0x03A4 (0x0004) [0x0000000000000000]              
	class AActor*                                      mTarget;                                          		// 0x03A8 (0x0004) [0x0000000000000000]              
	float                                              mMinimumTravelTolerance;                          		// 0x03AC (0x0004) [0x0000000000000000]              
	float                                              mDistToCurrentTarget;                             		// 0x03B0 (0x0004) [0x0000000000000000]              
	int                                                mCurrentNrOfSlowFrames;                           		// 0x03B4 (0x0004) [0x0000000000000000]              
	int                                                mMaxNrOfSlowFrames;                               		// 0x03B8 (0x0004) [0x0000000000000000]              
	class ASanctumCore*                                mTargetCore;                                      		// 0x03BC (0x0004) [0x0000000000000000]              
	struct FVector                                     mCurrentGoal;                                     		// 0x03C0 (0x000C) [0x0000000000000000]              
	unsigned long                                      mDebug : 1;                                       		// 0x03CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDebugPathing : 1;                                		// 0x03CC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              mExtraStuckCheckSeconds;                          		// 0x03D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44999 ];

		return pClassPointer;
	};

	void eventMoveUnreachable ( struct FVector AttemptedDest, class AActor* AttemptedTarget );
	bool eventHandlePathObstruction ( class AActor* BlockedBy );
	void FindGoal ( );
	void PawnDied ( class APawn* P );
	struct FVector RandomVector ( float Offset );
	void NotifySanctumPathNodeReached ( );
	bool ReachedPoint ( struct FVector Point );
	void setStrafeTolerance ( float strafeTolerance );
	void setStrafeDist ( float strafeDist );
	void ClearStuckTimer ( );
	void StartStuckCheck ( struct FVector currentGoal );
	struct FVector GetNewTarget ( int forNodeNum );
};

UClass* ASanctumAIController::pClassPointer = NULL;

// Class Sanctum.SanctumCore
// 0x00C4 (0x0364 - 0x02A0)
class ASanctumCore : public APathNode
{
public:
	float                                              mDamageAdd;                                       		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDamageExp;                                       		// 0x02A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mUndamagedSize;                                   		// 0x02A8 (0x0004) [0x0000000000000000]              
	float                                              mDestroyedSize;                                   		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                mUndamagedColor0;                                 		// 0x02B0 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                mUndamagedColor1;                                 		// 0x02C0 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                mHalfdamagedColor0;                               		// 0x02D0 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                mHalfdamagedColor1;                               		// 0x02E0 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                mDestroyedColor0;                                 		// 0x02F0 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                mDestroyedColor1;                                 		// 0x0300 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UPointLightComponent*                        mCoreLight;                                       		// 0x0310 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mHalfDamagePercent;                               		// 0x0314 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mUndamagedLightRadius;                            		// 0x0318 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mDestroyedLightRadius;                            		// 0x031C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      mUndamagedLightColor;                             		// 0x0320 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FColor                                      mHalfdamagedLightColor;                           		// 0x0324 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      mDestroyedLightColor;                             		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mUndamagedBloomTreshhold;                         		// 0x032C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mDestroyedBloomTreshhold;                         		// 0x0330 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mUndamagedBrightness;                             		// 0x0334 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mDestroyedBrightness;                             		// 0x0338 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCurrentDamageScale;                              		// 0x033C (0x0004) [0x0000000000000000]              
	float                                              mCurrentDamage;                                   		// 0x0340 (0x0004) [0x0000000000000000]              
	int                                                mMaxLife;                                         		// 0x0344 (0x0004) [0x0000000000000000]              
	int                                                mLife;                                            		// 0x0348 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        mMesh;                                            		// 0x034C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   mMaterial;                                        		// 0x0350 (0x0004) [0x0000000000000000]              
	unsigned long                                      mDamageEffect : 1;                                		// 0x0354 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mDamageEffectCounter;                             		// 0x0358 (0x0004) [0x0000000000000000]              
	float                                              mDamageEffectScale;                               		// 0x035C (0x0004) [0x0000000000000000]              
	float                                              mDamageEffectTime;                                		// 0x0360 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45005 ];

		return pClassPointer;
	};

	struct FColor LinearColorToColor ( struct FLinearColor C );
	void updateVisuals ( float Delta, unsigned long ignoreDirty );
	void enableDamageEffect ( );
	void setLife ( int life );
	void setMaxLife ( int maxLife );
	void eventTick ( float Delta );
	void registerWithGRI ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumCore::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyArmadillo
// 0x0024 (0x0858 - 0x0834)
class ASanctumEnemyArmadillo : public ASanctumEnemy
{
public:
	float                                              cTimeBeforeDefense;                               		// 0x0834 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTimeDefense;                                     		// 0x0838 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDamageReductionFactor;                           		// 0x083C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mRotationRateOrig;                                		// 0x0840 (0x000C) [0x0000000000000000]              
	class UAnimNodeSlot*                               mAnimNodeSlot;                                    		// 0x084C (0x0004) [0x0000000000000000]              
	unsigned long                                      mDefenseState : 1;                                		// 0x0850 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class UCylinderComponent*                          mCylinderTop;                                     		// 0x0854 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45023 ];

		return pClassPointer;
	};

	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void EnterDefense ( );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventReplicatedEvent ( struct FName VarName );
	void ExitDefense ( );
	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemyArmadillo::pClassPointer = NULL;

// Class Sanctum.SanctumPathNode
// 0x0000 (0x02A0 - 0x02A0)
class ASanctumPathNode : public APathNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45041 ];

		return pClassPointer;
	};

	void PawnShouldTeleport ( class APawn* P );
	void ReachedPoint ( class APawn* P );
};

UClass* ASanctumPathNode::pClassPointer = NULL;

// Class Sanctum.SanctumAIControllerAir
// 0x0024 (0x03F8 - 0x03D4)
class ASanctumAIControllerAir : public ASanctumAIController
{
public:
	class ASanctumCore*                                mCore;                                            		// 0x03D4 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            mAirRouteCache;                                   		// 0x03D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      mStrafing : 1;                                    		// 0x03E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mCheckSpeed : 1;                                  		// 0x03E4 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                mNumberOfFramesTooSlow;                           		// 0x03E8 (0x0004) [0x0000000000000000]              
	float                                              mPreviousDistance;                                		// 0x03EC (0x0004) [0x0000000000000000]              
	float                                              mMaxNumberOfFramesTooSlow;                        		// 0x03F0 (0x0004) [0x0000000000000000]              
	float                                              mMinumumSpeed;                                    		// 0x03F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45060 ];

		return pClassPointer;
	};

	void ForceMoveToNextNode ( );
	void SetNextTarget ( );
	void FindGoal ( );
	void SetStrafing ( unsigned long strafing );
	bool ReachedPoint ( struct FVector Point );
	struct FVector RandomVector ( float Offset );
	void StartCheck ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumAIControllerAir::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyFlying
// 0x0004 (0x0838 - 0x0834)
class ASanctumEnemyFlying : public ASanctumEnemy
{
public:
	int                                                mRouteIndex;                                      		// 0x0834 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45084 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ASanctumEnemyFlying::pClassPointer = NULL;

// Class Sanctum.SanctumPathNodeAir
// 0x0008 (0x01D0 - 0x01C8)
class ASanctumPathNodeAir : public AActor
{
public:
	int                                                mRouteIndex;                                      		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mIndex;                                           		// 0x01CC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45086 ];

		return pClassPointer;
	};

};

UClass* ASanctumPathNodeAir::pClassPointer = NULL;

// Class Sanctum.SanctumAIControllerAirDodger
// 0x0004 (0x03FC - 0x03F8)
class ASanctumAIControllerAirDodger : public ASanctumAIControllerAir
{
public:
	unsigned long                                      mWeHaveANewNode : 1;                              		// 0x03F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mThisWasANode : 1;                                		// 0x03F8 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45098 ];

		return pClassPointer;
	};

	void StartCheck ( );
	void ForceMoveToNextNode ( );
	void FindGoal ( );
	void SetNextTarget ( );
};

UClass* ASanctumAIControllerAirDodger::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyDodger
// 0x001C (0x0854 - 0x0838)
class ASanctumEnemyDodger : public ASanctumEnemyFlying
{
public:
	float                                              cMinTimeMove;                                     		// 0x0838 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMaxTimeMove;                                     		// 0x083C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMinDistMove;                                     		// 0x0840 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMaxDistMove;                                     		// 0x0844 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDeviance;                                        		// 0x0848 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCylinderComponent*                          bodyCylinder;                                     		// 0x084C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          headCylinder;                                     		// 0x0850 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45104 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void SpawnGibs ( class UClass* SanctumDamageType, struct FVector HitLocation );
	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemyDodger::pClassPointer = NULL;

// Class Sanctum.SanctumAIControllerGround
// 0x001C (0x03F0 - 0x03D4)
class ASanctumAIControllerGround : public ASanctumAIController
{
public:
	class AActor*                                      Target;                                           		// 0x03D4 (0x0004) [0x0000000000000000]              
	struct FVector                                     TargetDestination;                                		// 0x03D8 (0x000C) [0x0000000000000000]              
	TArray< struct FVector >                           Path;                                             		// 0x03E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45130 ];

		return pClassPointer;
	};

	void FindTarget ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumAIControllerGround::pClassPointer = NULL;

// Class Sanctum.SanctumAIDummy
// 0x001C (0x0380 - 0x0364)
class ASanctumAIDummy : public AAIController
{
public:
	int                                                mLife;                                            		// 0x0364 (0x0004) [0x0000000000000000]              
	int                                                mRubel;                                           		// 0x0368 (0x0004) [0x0000000000000000]              
	unsigned long                                      mDebug : 1;                                       		// 0x036C (0x0004) [0x0000000000000000] [0x00000001] 
	class ASanctumCore*                                mCore;                                            		// 0x0370 (0x0004) [0x0000000000000000]              
	TArray< class ANavigationPoint* >                  mCachedRoute;                                     		// 0x0374 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45139 ];

		return pClassPointer;
	};

	bool CanFindGoal ( class ASanctumTowerBase* TowerBase, unsigned long blockTowerBase );
	void PathHasChanged ( TArray< class ANavigationPoint* >* newRoute );
	void CacheRoute ( TArray< class ANavigationPoint* >* routeToCache );
	bool IsPathDirty ( TArray< class ANavigationPoint* >* newRoute );
	void CallMarkPathAsDirty ( );
	void eventPossess ( class APawn* inPawn, unsigned long bVehicleTransition );
	class ASanctumCore* FindCore ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumAIDummy::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBase
// 0x008C (0x0254 - 0x01C8)
class ASanctumTowerBase : public AActor
{
public:
	unsigned long                                      mEnabled : 1;                                     		// 0x01C8 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      mBlocked : 1;                                     		// 0x01C8 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      mRequiresPathNode : 1;                            		// 0x01C8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mBuildCompleted : 1;                              		// 0x01C8 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      mDebug : 1;                                       		// 0x01C8 (0x0004) [0x0000000000000000] [0x00000010] 
	class UStaticMeshComponent*                        mMesh;                                            		// 0x01CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   mTowerMIC;                                        		// 0x01D0 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                mTowerBaseColor;                                  		// 0x01D4 (0x0010) [0x0000000000000000]              
	class ASanctumTowerBaseAttachment*                 mTower;                                           		// 0x01E4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      mInitialTower;                                    		// 0x01E8 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	class ASanctumTowerHologram*                       mHologram;                                        		// 0x01EC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UDynamicLightEnvironmentComponent*           mLightEnviroment;                                 		// 0x01F0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     mLocationOffset;                                  		// 0x01F4 (0x000C) [0x0000000000000000]              
	int                                                mOwnerInvestment[ 0x4 ];                          		// 0x0200 (0x0010) [0x0000000000000020]              ( CPF_Net )
	int                                                mPotentialOwnerInvestment[ 0x4 ];                 		// 0x0210 (0x0010) [0x0000000000000020]              ( CPF_Net )
	int                                                mPotentialOwnerSlotNr;                            		// 0x0220 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      mPotentialTowerClass;                             		// 0x0224 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mPotentialBuild;                                  		// 0x0228 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mPotentialCompletion;                             		// 0x022C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mBlockInvestment[ 0x4 ];                          		// 0x0230 (0x0010) [0x0000000000000020]              ( CPF_Net )
	float                                              mLoadedRubels;                                    		// 0x0240 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            mOnlyAbleToBuild;                                 		// 0x0244 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class APathNode*                                   mPathnode;                                        		// 0x0250 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45175 ];

		return pClassPointer;
	};

	void ToggleOn ( );
	void ToggleOff ( );
	int SellTower ( );
	void SetPathnodeBlocking ( unsigned long newVal );
	void UpdatePathNextFrame ( );
	void SetHologram ( class ASanctumTowerHologram* hologram );
	void DelayedSetLocationRotation ( );
	void SetTower ( class ASanctumTowerBaseAttachment* Tower, unsigned long fromReplication );
	void GetBuildLocationRotation ( struct FVector* out_Location, struct FRotator* out_Rotation );
	struct FVector GetLocationOffset ( );
	class APathNode* FindClosestPathNode ( );
	void EnterExterminationPhase ( );
	void enterBuildPhase ( );
	void ResetOwnerInvestments ( class UClass* Tower );
	void GetOwnerInvestmentsArray ( class UClass* Tower, TArray< int >* ownerInvestment );
	void ToggleBaseHologramHidden ( unsigned long Hidden );
	void ClearPotentialInvestments ( );
	int GetPotentialPlayerInvestment ( int slotNr );
	int GetPotentialInvestment ( );
	void SetPotentialOwnerInvestment ( int Rubel, int slotNr );
	void ClearPotentialTowerClass ( int slotNr );
	void SetPotentialTowerClass ( class UClass* towerClass, int slotNr );
	float GetPotentialAmountCompleted ( int slotNr );
	void SetPotentialAmountCompleted ( int slotNr, float completion );
	void SetOwnerInvestment ( int Resources, int SlotNumber, class UClass* Tower );
	void AddOwnerInvestment ( int Resources, int SlotNumber );
	void eventReplicatedEvent ( struct FName VarName );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBase::pClassPointer = NULL;

// Class Sanctum.SanctumAirGoal
// 0x0000 (0x02A8 - 0x02A8)
class ASanctumAirGoal : public AVolumePathNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45178 ];

		return pClassPointer;
	};

};

UClass* ASanctumAirGoal::pClassPointer = NULL;

// Class Sanctum.SanctumAudioManager
// 0x0024 (0x0068 - 0x0044)
class USanctumAudioManager : public USanctumAudioManagerBase
{
public:
	TArray< class USoundCue* >                         mPlayingImmuneSounds;                             		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mLastDyingSoundTime;                              		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              mLastTakeHitSoundTime;                            		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              mLastGibSoundTime;                                		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              mLastImmuneSoundTime;                             		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              mLastMortarExplotion;                             		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              mDyingSoundLength;                                		// 0x0064 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45207 ];

		return pClassPointer;
	};

	void PlayGibSound ( class USoundCue* Sound, struct FVector SoundLocation );
	void PlayDyingSound ( class USoundCue* Sound, struct FVector SoundLocation );
	void PlayMortarExplotionSound ( class USoundCue* Sound, struct FVector SoundLocation );
	void PlayTakeHitSound ( class USoundCue* Sound, struct FVector SoundLocation );
	void PlayImmuneSound ( class USoundCue* Sound, struct FVector SoundLocation, class AActor* InstigatedBy );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	bool IsAttenuated ( class UAudioComponent* AC );
	float GetAttenuationDistance ( class UAudioComponent* AC );
	int GetNumChannels ( class UAudioComponent* AC );
	class USoundNode* DepthFirstSearchForNode ( class USoundNode* Node, class UClass* SoundNodeClass );
};

UClass* USanctumAudioManager::pClassPointer = NULL;

// Class Sanctum.SanctumBeachGrill
// 0x0008 (0x01D0 - 0x01C8)
class ASanctumBeachGrill : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      mDidGrill : 1;                                    		// 0x01CC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45294 ];

		return pClassPointer;
	};

	void Animate ( );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumBeachGrill::pClassPointer = NULL;

// Class Sanctum.SanctumBeachParasol
// 0x0008 (0x01D0 - 0x01C8)
class ASanctumBeachParasol : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      mDidTrigger : 1;                                  		// 0x01CC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45315 ];

		return pClassPointer;
	};

	void Animate ( );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumBeachParasol::pClassPointer = NULL;

// Class Sanctum.SanctumBeachRadio
// 0x0010 (0x01D8 - 0x01C8)
class ASanctumBeachRadio : public AActor
{
public:
	class UStaticMeshComponent*                        Mesh;                                             		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      mRadioIsOn : 1;                                   		// 0x01CC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class UAudioComponent*                             AudioCmp;                                         		// 0x01D0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   SndCue;                                           		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45337 ];

		return pClassPointer;
	};

	void PlaySomeMusic ( );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumBeachRadio::pClassPointer = NULL;

// Class Sanctum.SanctumCamera
// 0x0048 (0x0558 - 0x0510)
class ASanctumCamera : public AGamePlayerCamera
{
public:
	struct FVector                                     mOverviewPosition;                                		// 0x0510 (0x000C) [0x0000000000000000]              
	struct FRotator                                    mOverviewRotation;                                		// 0x051C (0x000C) [0x0000000000000000]              
	struct FVector                                     mTransitionPosition;                              		// 0x0528 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    mTransitionRotation;                              		// 0x0534 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mTransitionTime;                                  		// 0x0540 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTransitionTimeEQ;                                		// 0x0544 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTransitionCounter;                               		// 0x0548 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mTransitionDownFoV;                               		// 0x054C (0x0004) [0x0000000000000000]              
	float                                              mTransitionUpFoV;                                 		// 0x0550 (0x0004) [0x0000000000000000]              
	float                                              mOverviewFOV;                                     		// 0x0554 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45357 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void StopPlacingTower ( unsigned long teleportTransition, unsigned long eqTransition );
	void StartPlacingTower ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumCamera::pClassPointer = NULL;

// Class Sanctum.SanctumOverviewLocation
// 0x0004 (0x01CC - 0x01C8)
class ASanctumOverviewLocation : public AActor
{
public:
	float                                              cFOV;                                             		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45370 ];

		return pClassPointer;
	};

};

UClass* ASanctumOverviewLocation::pClassPointer = NULL;

// Class Sanctum.SanctumCheatManager
// 0x0000 (0x0054 - 0x0054)
class USanctumCheatManager : public UCheatManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45431 ];

		return pClassPointer;
	};

	void UpgradeWeaponToLevel ( struct FName Weapon, int Level );
	void showNextEnemies ( unsigned long show );
	void showResource ( unsigned long show );
	void showLife ( unsigned long show );
	void showBuildList ( unsigned long show );
	void checkWave ( );
	void UnlockAllLevels ( );
	void WeaponVisibility ( unsigned long Visible );
	void setLife ( int life );
	void setWave ( int Wave );
	void SetLifeOnEnemies ( int life );
	void GiefRubels ( int rubels, int toSlot );
	void KillAllEnemies ( );
	class AWeapon* GiveWeapon ( struct FString WeaponClassStr );
};

UClass* USanctumCheatManager::pClassPointer = NULL;

// Class Sanctum.SanctumInventoryManager
// 0x0084 (0x0268 - 0x01E4)
class ASanctumInventoryManager : public AInventoryManager
{
public:
	class ASanctumHUD*                                 mHUD;                                             		// 0x01E4 (0x0004) [0x0000000000000000]              
	unsigned char                                      mCurrentWeapon;                                   		// 0x01E8 (0x0001) [0x0000000000000000]              
	unsigned long                                      mBuildGunLocked : 1;                              		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mDisableSellTower : 1;                            		// 0x01EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mWeaponStoreDisable : 1;                          		// 0x01EC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHiddenWeapons : 1;                               		// 0x01EC (0x0004) [0x0000000000000000] [0x00000008] 
	class ASanctumWeapon*                              mBuildGunArchetype;                               		// 0x01F0 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   mWeaponNumberChanged;                             		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mCurrentWeaponChanged;                            		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFavouriteWeaponStruct >            mFavouriteWeaponArray;                            		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ASanctumTowerHologram*                       mSpawnedTowerHolograms[ 0xE ];                    		// 0x0218 (0x0038) [0x0000000000000000]              
	struct FScriptDelegate                             __ByteChanged__Delegate;                          		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __WeaponChanged__Delegate;                        		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45452 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void CollectFavouriteWeaponStats ( );
	void StopCollectingStats ( );
	void AddToFavourite ( class UClass* WeaponClass, float TotalTime, float LastTimeStamp, unsigned long Equipped );
	float GetEquipTimeForClass ( class UClass* WeaponClass );
	class UClass* GetFavouriteWeaponClass ( );
	void SetPendingWeapon ( class AWeapon* DesiredWeapon );
	void switchToBuildPhase ( unsigned long buildPhase );
	void ClientWeaponSet ( class AWeapon* NewWeapon, unsigned long bOptionalSet, unsigned long bDoNotActivate );
	void ChangedWeapon ( );
	void SwitchWeapon ( unsigned char NewGroup );
	void StoreSwitch ( unsigned char NewGroup );
	void GetWeaponList ( TArray< class ASanctumWeapon* >* WeaponList );
	void PrevWeapon ( );
	void NextWeapon ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	void removeCoolDownListeners ( );
	void notifyCurrentWeaponChangedListeners ( class UClass* NewWeapon );
	void notifyWeaponNumberChangedListeners ( unsigned char WeaponNumber );
	void removeWeaponChangedListener ( struct FScriptDelegate Listener );
	void removeWeaponSwitchListener ( struct FScriptDelegate Listener );
	void addWeaponChangedListener ( struct FScriptDelegate Listener );
	void EnableSellTower ( );
	void DisableSellTower ( );
	void enableBuildGun ( );
	void disableBuildGun ( );
	void enableWeaponStore ( );
	void disableWeaponStore ( );
	void TogglePlayerReady ( unsigned long IsReady );
	void setWeaponVisibility ( unsigned long WeaponVisibility );
	void addWeaponSwitchListener ( struct FScriptDelegate Listener );
	bool IsBuildPhase ( );
	class ASanctumTowerHologram* GetSpawnedTowerHologram ( class UClass* HologramClass );
	void SpawnAllTowerHolograms ( );
	void ClientSyncWeapon ( class AWeapon* NewWeapon );
	void eventPostBeginPlay ( );
	void WeaponChanged ( class UClass* NewWeapon );
	void ByteChanged ( unsigned char NewValue );
};

UClass* ASanctumInventoryManager::pClassPointer = NULL;

// Class Sanctum.SanctumGlobals
// 0x00F8 (0x0134 - 0x003C)
class USanctumGlobals : public UObject
{
public:
	TArray< struct FString >                           LevelNames;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LevelNamesEndlessOnly;                            		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TutorialLevelName;                                		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGameAddonStruct >                  GameAddons;                                       		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Difficulties;                                     		// 0x006C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           MultiplayerDifficulties;                          		// 0x0078 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           mControlsSettings;                                		// 0x0084 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           mGameplaySettings;                                		// 0x0090 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           mGraphicsSettings;                                		// 0x009C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           mSoundSettings;                                   		// 0x00A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           mBooleanValuesString;                             		// 0x00B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< int >                                      MaxPlayers;                                       		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FColor >                            PlayerColors;                                     		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLinearColor >                      HUDArrowColors;                                   		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      TowerColor;                                       		// 0x00E4 (0x0004) [0x0000000000000000]              
	class ASanctumWeapon*                              mWeaponArchetypes[ 0x5 ];                         		// 0x00E8 (0x0014) [0x0000000000000000]              
	class UClass*                                      mTowerHologramsAssortment[ 0xE ];                 		// 0x00FC (0x0038) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45456 ];

		return pClassPointer;
	};

	int GetIndexForTowerHologramClass ( class UClass* towerHologramClass );
	bool IsLevelFreeDLC ( int Idx );
	int GetIndexForMapName ( struct FString MapName );
	int GetIndexForWeaponClass ( class UClass* WeaponClass );
};

UClass* USanctumGlobals::pClassPointer = NULL;

// Class Sanctum.SanctumMenuHUD
// 0x000C (0x045C - 0x0450)
class ASanctumMenuHUD : public AHUD
{
public:
	class USanctumMainMenu*                            mMainMenu;                                        		// 0x0450 (0x0004) [0x0000000000000000]              
	class USanctumHUDGfxCredits*                       mCreditsScene;                                    		// 0x0454 (0x0004) [0x0000000000000000]              
	unsigned long                                      mDebug : 1;                                       		// 0x0458 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45458 ];

		return pClassPointer;
	};

	void StopCredits ( );
	void ShowDebugInfo ( float* out_YL, float* out_YPos );
	bool IsAnyKeyPressed ( );
	void DrawFullscreenMovie ( class UTextureMovie* Texture );
	void StartCredits ( );
	void closeAllHUDs ( );
	void eventDestroyed ( );
	void PostBeginPlay ( );
};

UClass* ASanctumMenuHUD::pClassPointer = NULL;

// Class Sanctum.SanctumHUD
// 0x0230 (0x0680 - 0x0450)
class ASanctumHUD : public AHUD
{
public:
	TArray< struct FPopupSequence >                    mPopupInfo;                                       		// 0x0450 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mPopupFooter;                                     		// 0x045C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FArrowInfo >                        mArrowArray;                                      		// 0x0468 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USanctumHUDGFxCircle*                        mCircleHUD;                                       		// 0x0474 (0x0004) [0x0000000000000000]              
	class USanctumHUDGFxAction*                        mActionHUD;                                       		// 0x0478 (0x0004) [0x0000000000000000]              
	class USanctumHUDGFxEquipmentSelection*            mEquipmentHUD;                                    		// 0x047C (0x0004) [0x0000000000000000]              
	class USanctumHUDGFxTutorial*                      mTutorialHUD;                                     		// 0x0480 (0x0004) [0x0000000000000000]              
	class USanctumHUDTeleport*                         mTeleportHUD;                                     		// 0x0484 (0x0004) [0x0000000000000000]              
	class USanctumMainMenu*                            mMenuHUD;                                         		// 0x0488 (0x0004) [0x0000000000000000]              
	class USanctumHUDGfxStatScreen*                    mStatScreen;                                      		// 0x048C (0x0004) [0x0000000000000000]              
	class USanctumHUDGfxCredits*                       mCreditsScene;                                    		// 0x0490 (0x0004) [0x0000000000000000]              
	class UTexture*                                    OverviewErrorTexture;                             		// 0x0494 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   ScreenPosition;                                   		// 0x0498 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   locScreen;                                        		// 0x04A0 (0x0008) [0x0000000000000000]              
	class UFont*                                       SanctumFontOutline;                               		// 0x04A8 (0x0004) [0x0000000000000000]              
	unsigned long                                      mUsingGamepad : 1;                                		// 0x04AC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mCursorPositionSet : 1;                           		// 0x04AC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mDidCameraPanPlay : 1;                            		// 0x04AC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mElevatorMarked : 1;                              		// 0x04AC (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mShowOverviewError : 1;                           		// 0x04AC (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mDebug : 1;                                       		// 0x04AC (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mClosePrevHUD : 1;                                		// 0x04AC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mRunExitAnim : 1;                                 		// 0x04AC (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      mRunEnterAnim : 1;                                		// 0x04AC (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      mGameWon : 1;                                     		// 0x04AC (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      mVisiblePlayerArrow : 1;                          		// 0x04AC (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      mDrawTowerStats : 1;                              		// 0x04AC (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      mWaitingForGRI : 1;                               		// 0x04AC (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      mCheckGarbageCollection : 1;                      		// 0x04AC (0x0004) [0x0000000000004000] [0x00002000] ( CPF_Config )
	class UTexture2D*                                  DefaultTexture_Black;                             		// 0x04B0 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  DefaultTexture_White;                             		// 0x04B4 (0x0004) [0x0000000000000000]              
	struct FVector                                     WorldOrigin;                                      		// 0x04B8 (0x000C) [0x0000000000000000]              
	struct FVector                                     WorldDirection;                                   		// 0x04C4 (0x000C) [0x0000000000000000]              
	class AActor*                                      MarkedActor;                                      		// 0x04D0 (0x0004) [0x0000000000000000]              
	struct FVector                                     mTraceLoc;                                        		// 0x04D4 (0x000C) [0x0000000000000000]              
	struct FVector2D                                   FlashSize;                                        		// 0x04E0 (0x0008) [0x0000000000000000]              
	struct FName                                       mPrevState;                                       		// 0x04E8 (0x0008) [0x0000000000000000]              
	struct FString                                     mMenuHUDName;                                     		// 0x04F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       mNextHUDName;                                     		// 0x04FC (0x0008) [0x0000000000000000]              
	struct FVector                                     mLastElevatorPosition2D;                          		// 0x0504 (0x000C) [0x0000000000000000]              
	struct FVector                                     mLastElevatorPosition3D;                          		// 0x0510 (0x000C) [0x0000000000000000]              
	struct FString                                     stuff;                                            		// 0x051C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class ASanctumOverviewLocation*                    mOverviewLocation;                                		// 0x0528 (0x0004) [0x0000000000000000]              
	float                                              scaleValue;                                       		// 0x052C (0x0004) [0x0000000000000000]              
	class UMaterial*                                   mPlayerArrowMat;                                  		// 0x0530 (0x0004) [0x0000000000000000]              
	class UTexture*                                    mPlayerNeedsResources;                            		// 0x0534 (0x0004) [0x0000000000000000]              
	struct FName                                       mNextState;                                       		// 0x0538 (0x0008) [0x0000000000000000]              
	struct FHudLocalizedMessage                        mLastMessages[ 0x5 ];                             		// 0x0540 (0x0140) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45462 ];

		return pClassPointer;
	};

	void DrawOverviewError ( class UCanvas* C );
	void changeState ( struct FName StateName );
	void TraceElevators ( );
	void setCursorPosition ( );
	void setGamepadControlActive ( );
	void drawHUDArrow ( struct FVector TargetPos, int SlotNumber, unsigned long resourcesNeeded, unsigned char PlayerRotationByte );
	void drawOfScreenArrow ( struct FVector TargetPos, unsigned long resourcesNeeded, int SlotNumber );
	void drawOnScreenArrow ( struct FVector TargetPos, unsigned long resourcesNeeded, int SlotNumber );
	void drawOverviewArrow ( struct FVector TargetPos, unsigned long resourcesNeeded, int SlotNumber, unsigned char PlayerRotationByte );
	void DrawArrow ( struct FRotator arrowRotation, unsigned long resourcesNeeded, unsigned long onScreen, unsigned long inOverview, int SlotNumber );
	void SetHUDArrowVisibility ( unsigned long Visible );
	struct FLinearColor BlendColorToWhite ( float whiteness, struct FLinearColor C );
	void eventPostRender ( );
	void StopCredits ( );
	bool IsAnyKeyPressed ( );
	void DrawFullscreenMovie ( class UTextureMovie* Texture );
	void StartCredits ( );
	void DrawTowerStats ( );
	void ShowBanner ( );
	void closeTeleportHUD ( unsigned long unloadContent );
	void closePlayHUDS ( unsigned long unloadContent );
	void closeBuildHUD ( unsigned long unloadContent );
	void closeActionHUD ( unsigned long unloadContent );
	void closePauseHUD ( unsigned long unloadContent );
	void eventDestroyed ( );
	void DrawHUD ( );
	void DrawDemoText ( );
	void AddConsoleMessage ( struct FString M, class UClass* InMessageClass, class APlayerReplicationInfo* PRI, float Lifetime );
	void DisplayLocalMessages ( );
	void DrawMessage ( int I, float PosY, float* DX, float* DY );
	void DrawLastMessage ( int I, float PosY, float* DX, float* DY );
	void switchState ( struct FName NewState, unsigned long closePrevious, unsigned long exitAnim, unsigned long enterAnim );
	void AllocateArrowMaterials ( );
	void PollForGRI ( );
	void PostBeginPlay ( );
};

UClass* ASanctumHUD::pClassPointer = NULL;

// Class Sanctum.SanctumChristmasPresent
// 0x0048 (0x0210 - 0x01C8)
class ASanctumChristmasPresent : public AActor
{
public:
	class UStaticMeshComponent*                        mPresentMesh;                                     		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UStaticMesh* >                       mPresentMeshes;                                   		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UDynamicLightEnvironmentComponent*           mLightEnvironment;                                		// 0x01D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystemComponent*                    mParticleComponent;                               		// 0x01DC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                mCachedMeshID;                                    		// 0x01E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      mTouched : 1;                                     		// 0x01E4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	struct FInitialPackage                             mPackageInitialState;                             		// 0x01E8 (0x0010) [0x0000000000000020]              ( CPF_Net )
	struct FRestingStateForPackage                     mRestingStateForPackage;                          		// 0x01F8 (0x0018) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45481 ];

		return pClassPointer;
	};

	void AddRandomSpin ( unsigned long ViaReplication );
	void MoveToRestingPlace ( );
	void eventOnSleepRBPhysics ( );
	void GeneratePhysics ( unsigned long ViaReplication );
	void KillSelf ( );
	void SpawnPickUpFX ( );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumChristmasPresent::pClassPointer = NULL;

// Class Sanctum.SanctumGibStaticMeshComponent
// 0x0000 (0x0254 - 0x0254)
class USanctumGibStaticMeshComponent : public UStaticMeshComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45519 ];

		return pClassPointer;
	};

};

UClass* USanctumGibStaticMeshComponent::pClassPointer = NULL;

// Class Sanctum.SanctumChristmasSanta
// 0x0008 (0x01D0 - 0x01C8)
class ASanctumChristmasSanta : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh;                                             		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           mLightEnvironment;                                		// 0x01CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45531 ];

		return pClassPointer;
	};

	void eventTimer ( );
	void ActivateEvent ( class UClass* eventToActivate );
	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void SpawnPackages ( );
	void SpawnRagdollAndEffects ( );
	bool CanPlayerSeeMe ( class AController* Viewer );
	void eventTornOff ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumChristmasSanta::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_SantaDied
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_SantaDied : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45563 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_SantaDied::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_DestroySanta
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_DestroySanta : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45571 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_DestroySanta::pClassPointer = NULL;

// Class Sanctum.SanctumChristmasTree
// 0x0000 (0x0364 - 0x0364)
class ASanctumChristmasTree : public ASanctumCore
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45634 ];

		return pClassPointer;
	};

	void eventPostBeginPlay ( );
};

UClass* ASanctumChristmasTree::pClassPointer = NULL;

// Class Sanctum.SanctumCombatText
// 0x0040 (0x0208 - 0x01C8)
class ASanctumCombatText : public AActor
{
public:
	class ASanctumPlayer*                              mLocalPlayer;                                     		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             mParticleTemplate;                                		// 0x01CC (0x0004) [0x0000000000000000]              
	TArray< class UParticleSystem* >                   mMessages;                                        		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FColor >                            mColors;                                          		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     mPointOffset;                                     		// 0x01E8 (0x000C) [0x0000000000000000]              
	struct FColor                                      mPointColor;                                      		// 0x01F4 (0x0004) [0x0000000000000000]              
	struct FVector                                     mLastKnownLocation;                               		// 0x01F8 (0x000C) [0x0000000000000000]              
	unsigned long                                      mActive : 1;                                      		// 0x0204 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDebugInfo : 1;                                   		// 0x0204 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45640 ];

		return pClassPointer;
	};

	void SpawnDigit ( int digit, struct FVector Loc, float Scale, unsigned long IsCash );
	void CreateCombatText ( TArray< int > damageDigits, float Scale, unsigned long IsCash );
	void AddCombatText ( int Damage, class AActor* DamageCauser, float Scale );
	void AddPoints ( int Points );
	bool FindLocallyControlledPlayer ( );
};

UClass* ASanctumCombatText::pClassPointer = NULL;

// Class Sanctum.SanctumViewportClient
// 0x0018 (0x0140 - 0x0128)
class USanctumViewportClient : public UGameViewportClient
{
public:
	class USanctumSystemSettingsHelper*                mSanctumSettingsHelper;                           		// 0x0128 (0x0004) [0x0000000000000000]              
	unsigned char                                      ConnectionMessageType;                            		// 0x012C (0x0001) [0x0000000000000000]              
	unsigned long                                      mWasKicked : 1;                                   		// 0x0130 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     mExitMessage;                                     		// 0x0134 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45664 ];

		return pClassPointer;
	};

	void DrawTransition ( class UCanvas* Canvas );
	void NotifyConnectionError ( unsigned char MessageType, struct FString Message, struct FString Title );
	void eventSetProgressMessage ( unsigned char MessageType, struct FString Message, struct FString Title, unsigned long bIgnoreFutureNetworkMessages );
	void eventTick ( float Delta );
	void SetAudioSettings ( float Master, float SFX, float Ambient, float Voice, float Music );
	bool eventInit ( struct FString* OutError );
};

UClass* USanctumViewportClient::pClassPointer = NULL;

// Class Sanctum.SanctumSystemSettingsHelper
// 0x00E4 (0x0120 - 0x003C)
class USanctumSystemSettingsHelper : public UObject
{
public:
	class USoundMode*                                  CurrentSoundMode;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              MasterVolume;                                     		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SFXVolume;                                        		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AmbientVolume;                                    		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              VoiceVolume;                                      		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MusicVolume;                                      		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      TextToSpeech : 1;                                 		// 0x0054 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      UseMouseScroll : 1;                               		// 0x0054 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      ScoreText : 1;                                    		// 0x0054 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      CombatText : 1;                                   		// 0x0054 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      RangeDecals : 1;                                  		// 0x0054 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	unsigned long                                      Lifebars : 1;                                     		// 0x0054 (0x0004) [0x0000000000004000] [0x00000020] ( CPF_Config )
	unsigned long                                      HUDArrow : 1;                                     		// 0x0054 (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	unsigned long                                      Pathing : 1;                                      		// 0x0054 (0x0004) [0x0000000000004000] [0x00000080] ( CPF_Config )
	unsigned long                                      HeadBobbing : 1;                                  		// 0x0054 (0x0004) [0x0000000000004000] [0x00000100] ( CPF_Config )
	unsigned long                                      GibsIgnoresRunningSlow : 1;                       		// 0x0054 (0x0004) [0x0000000000004000] [0x00000200] ( CPF_Config )
	unsigned long                                      RagdollsIgnoresRunningSlow : 1;                   		// 0x0054 (0x0004) [0x0000000000004000] [0x00000400] ( CPF_Config )
	unsigned long                                      RangeSphere : 1;                                  		// 0x0054 (0x0004) [0x0000000000004000] [0x00000800] ( CPF_Config )
	TArray< class ASanctumPawn* >                      mAllRagdolls;                                     		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASanctumPawn* >                      mRagdollsThisFrame;                               		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASanctumGib* >                       mAllGibs;                                         		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASanctumGib* >                       mGibsThisFrame;                                   		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MAX_GIBS_FRAME;                                   		// 0x0088 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< int >                                      MaxNumRagdolls;                                   		// 0x008C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< int >                                      MaxNumGibs;                                       		// 0x0098 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned char                                      Ragdolls;                                         		// 0x00A4 (0x0001) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      Gibs;                                             		// 0x00A5 (0x0001) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FString >                           DetailsString;                                    		// 0x00A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           Resolutions;                                      		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           BoolNames;                                        		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            DetailModes;                                      		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            DetailLevels;                                     		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            TextureLevels;                                    		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            BoolValues;                                       		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AAValues;                                         		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      MultipleArray;                                    		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FOV;                                              		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45666 ];

		return pClassPointer;
	};

	void Cleanup ( );
	void GetFOVValues ( float currentFOV, TArray< struct FString >* fovArray, int* SelectedIndex );
	void setResolutionProvider ( class UGFxObject** OutProvider );
	void SetSoundMode ( unsigned char NewSoundMode );
	void UpdateAudioSettings ( );
	void SetAudioSettings ( float Master, float SFX, float Ambient, float Voice, float Music );
	void SetGameplaySettings ( );
	void ragdollDestroyed ( class ASanctumEnemy* Ragdoll );
	void RagdollSpawned ( class ASanctumEnemy* Ragdoll );
	void GibDestroyed ( class ASanctumGib* Gib );
	void GetTextureLevel ( unsigned char detailLevel, TArray< struct FString >* outRendererDataProvider, int* SelectedIndex );
	void getAALevel ( unsigned long Enabled, int aaVAlue, TArray< struct FString >* outRendererDataProvider, int* SelectedIndex );
	void GetDetailMode ( unsigned char detailLevel, TArray< struct FString >* outRendererDataProvider, int* SelectedIndex );
	unsigned char PurgeDetailMode ( unsigned char DetailMode );
	void getDetailLevel ( unsigned char detailLevel, TArray< struct FString >* outRendererDataProvider, int* SelectedIndex );
	void gibSpawned ( class ASanctumGib* Gib );
	bool IsMoreRagdollsAllowed ( class ASanctumPawn* E );
	bool IsMoreGibsAllowed ( class ASanctumPawn* E );
	bool destroyUnseenRagdolls ( );
	bool destoryUnseenGib ( );
	bool forceRagdollsAndGibsForPawn ( class ASanctumPawn* E );
	void Tick ( float Delta );
	void SetSoundPitch ( float NewPitch );
};

UClass* USanctumSystemSettingsHelper::pClassPointer = NULL;

// Class Sanctum.SanctumProjectile
// 0x0034 (0x0274 - 0x0240)
class ASanctumProjectile : public AUDKProjectile
{
public:
	class UParticleSystemComponent*                    mProjEffects;                                     		// 0x0240 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             mFlightTemplate;                                  		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             mExplosionTemplate;                               		// 0x0248 (0x0004) [0x0000000000000000]              
	class UClass*                                      mExplosionLightClass;                             		// 0x024C (0x0004) [0x0000000000000000]              
	class UUDKExplosionLight*                          mExplosionLight;                                  		// 0x0250 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FLinearColor >                      mColor;                                           		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                cLevel;                                           		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDamageMultiplier;                                		// 0x0264 (0x0004) [0x0000000000000000]              
	int                                                mNumberOfHoloHits;                                		// 0x0268 (0x0004) [0x0000000000000000]              
	unsigned long                                      mHitAnEnemy : 1;                                  		// 0x026C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mShouldBeAffectedByHolo : 1;                      		// 0x026C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                mOriginalDamage;                                  		// 0x0270 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45678 ];

		return pClassPointer;
	};

	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void MyOnParticleSystemFinished ( class UParticleSystemComponent* PSC );
	void SpawnFlightEffects ( );
	void HitAnEnemy ( );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void PostBeginPlay ( );
};

UClass* ASanctumProjectile::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileGrenade
// 0x001C (0x0290 - 0x0274)
class ASanctumProjectileGrenade : public ASanctumProjectile
{
public:
	float                                              mDamageRadius;                                    		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mSpeed;                                           		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxSpeed;                                        		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTerminalVelocity;                                		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMomentumTransfer;                                		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLifetime;                                        		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mRunnerKills;                                     		// 0x028C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45677 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void KilledAnEnemy ( class UClass* Enemyclass );
	void Init ( struct FVector Direction );
	void eventPostBeginPlay ( );
};

UClass* ASanctumProjectileGrenade::pClassPointer = NULL;

// Class Sanctum.SanctumConfigAmpField
// 0x000C (0x0048 - 0x003C)
class USanctumConfigAmpField : public UObject
{
public:
	TArray< float >                                    cAmpMultiplier;                                   		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45707 ];

		return pClassPointer;
	};

};

UClass* USanctumConfigAmpField::pClassPointer = NULL;

// Class Sanctum.SanctumConfigHoloTower
// 0x0018 (0x0054 - 0x003C)
class USanctumConfigHoloTower : public UObject
{
public:
	TArray< float >                                    DamageBoostMultiplier;                            		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    DiminishingReturns;                               		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45711 ];

		return pClassPointer;
	};

};

UClass* USanctumConfigHoloTower::pClassPointer = NULL;

// Class Sanctum.SanctumConfigKillingFloor
// 0x001C (0x0058 - 0x003C)
class USanctumConfigKillingFloor : public UObject
{
public:
	TArray< float >                                    cDamage;                                          		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cIntervall;                                       		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cFireDelay;                                       		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45717 ];

		return pClassPointer;
	};

};

UClass* USanctumConfigKillingFloor::pClassPointer = NULL;

// Class Sanctum.SanctumConfigSlowField
// 0x000C (0x0048 - 0x003C)
class USanctumConfigSlowField : public UObject
{
public:
	TArray< float >                                    SlowDownRate;                                     		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45724 ];

		return pClassPointer;
	};

};

UClass* USanctumConfigSlowField::pClassPointer = NULL;

// Class Sanctum.SanctumConsole
// 0x0004 (0x01D4 - 0x01D0)
class USanctumConsole : public UConsole
{
public:
	int                                                mNumCharsAllowed;                                 		// 0x01D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45728 ];

		return pClassPointer;
	};

	void SetCursorPos ( int Position );
	void StartTyping ( struct FString Text );
};

UClass* USanctumConsole::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologram
// 0x0034 (0x01FC - 0x01C8)
class ASanctumTowerHologram : public AActor
{
public:
	class UParticleSystem*                             mBuildEffect;                                     		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UClass*                                      mTowerClass;                                      		// 0x01CC (0x0004) [0x0000000000000000]              
	TArray< class UMaterialInstanceConstant* >         mMaterials;                                       		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                mDisabledColor;                                   		// 0x01DC (0x0010) [0x0000000000000000]              
	unsigned char                                      mAction;                                          		// 0x01EC (0x0001) [0x0000000000000020]              ( CPF_Net )
	class APawn*                                       mPlayerOwner;                                     		// 0x01F0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mCurrentCompletion;                               		// 0x01F4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      mDebug : 1;                                       		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45761 ];

		return pClassPointer;
	};

	void setUpgrade ( );
	void SetEnabled ( );
	void SetDisabled ( );
	void actionChanged ( );
	void setCountdownChange ( float percentComplete );
	void setPlayerOwner ( class APawn* PC );
	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void syncWithTower ( class ASanctumTowerBaseAttachment* Attachment );
	class UClass* getTowerClass ( );
	bool PlayerOnBase ( class ASanctumTowerBase* TB );
	unsigned char AbleToBuildOnBase ( class ASanctumTowerBase* TowerBase, int Rubel );
	bool IsAChosenTower ( class APawn* hologramOwner );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumTowerHologram::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentOffensive
// 0x0088 (0x02D4 - 0x024C)
class ASanctumTowerBaseAttachmentOffensive : public ASanctumTowerBaseAttachment
{
public:
	int                                                cUpdatesPerSecond;                                		// 0x024C (0x0004) [0x0000000000000000]              
	class ASanctumTowerBaseAttachmentWeapon*           cWeapon;                                          		// 0x0250 (0x0004) [0x0000000000000000]              
	TArray< int >                                      cMaterialsToChange;                               		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      mMesh;                                            		// 0x0260 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimNodeSlot*                               mFullBodyAnimSlot;                                		// 0x0264 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        mTopMesh;                                         		// 0x0268 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      mDebug : 1;                                       		// 0x026C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< class UCylinderComponent* >                mCollisionModel;                                  		// 0x0270 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UMaterialInstance* >                 mMaterial;                                        		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterialInstance*                           mBlockMaterial;                                   		// 0x0288 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                mBlockTowerColor;                                 		// 0x028C (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             mShootingAnims;                                   		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             mIdleAnims;                                       		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mCurrentAnim;                                     		// 0x02B4 (0x0004) [0x0000000000000000]              
	class ASanctumTowerBaseAttachmentWeapon*           mWeapon;                                          		// 0x02B8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ASanctumEnemy*                               mTarget;                                          		// 0x02BC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class USkelControlLookAt*                          mSkelControlLookAt;                               		// 0x02C0 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          mSkelControlLookAtUp;                             		// 0x02C4 (0x0004) [0x0000000000000000]              
	float                                              mUpdateInterval;                                  		// 0x02C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mAggregatedUpdateTime;                            		// 0x02CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ASanctumRangeIndicator*                      mGroundDecal;                                     		// 0x02D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45810 ];

		return pClassPointer;
	};

	void AdjustAim ( float Delta );
	void PlayIdleAnimation ( );
	void PlayShootingAnimation ( );
	void Destroyed ( );
	bool throttleAI ( float Delta );
	void UpgradeMesh ( int toLevel );
	void FindAndAssignNewTarget ( );
	void Upgrade ( int toLevel );
	class ASanctumEnemy* findNewTarget ( );
	bool isValidTarget ( class ASanctumEnemy* Target );
	bool isOkTarget ( class ASanctumEnemy* Target );
	bool isVisible ( class ASanctumEnemy* Enemy );
	void StopOverview ( );
	void StartOverview ( );
	void StopHighlight ( );
	void StartHighlight ( );
	bool hitWhitelistedComponent ( class AActor* Actor, struct FTraceHitInfo HitInfo );
	bool notHitWhitelistedComponent ( class AActor* Actor, struct FTraceHitInfo HitInfo );
	void AwaitingWeaponUpgrade ( );
	bool AddBlockMaterialToArray ( );
	void SetChristmasColor ( struct FLinearColor LC );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName Variable );
};

UClass* ASanctumTowerBaseAttachmentOffensive::pClassPointer = NULL;

// Class Sanctum.SanctumDataStore_OnlineGameSearch
// 0x0000 (0x0094 - 0x0094)
class USanctumDataStore_OnlineGameSearch : public UUDKDataStore_GameSearchBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45851 ];

		return pClassPointer;
	};

	void ClearAllSearchResults ( );
	void eventInit ( );
};

UClass* USanctumDataStore_OnlineGameSearch::pClassPointer = NULL;

// Class Sanctum.SanctumOnlineLeaderboardRead
// 0x0000 (0x0088 - 0x0088)
class USanctumOnlineLeaderboardRead : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45857 ];

		return pClassPointer;
	};

	int GetScore ( struct FUniqueNetId Player );
};

UClass* USanctumOnlineLeaderboardRead::pClassPointer = NULL;

// Class Sanctum.SanctumSapitu
// 0x0020 (0x005C - 0x003C)
class USanctumSapitu : public UObject
{
public:
	int                                                mOffset;                                          		// 0x003C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     saveString;                                       		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                checksum;                                         		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SaveFileVersion;                                  		// 0x0050 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45860 ];

		return pClassPointer;
	};

	class USanctumSapituGame* CreateGame ( struct FString GameID );
	void SaveLastEquipment ( TArray< struct FString > Weapons, TArray< struct FString > Holograms );
	bool GetLastEquipment ( TArray< struct FString >* Weapons, TArray< struct FString >* Holograms );
	class USanctumSapitu* CreateSapituFromSteamCloud ( struct FString Filename, class UClass* SapituClass );
	class USanctumSapituGame* GetGameSave ( struct FString GameName );
	void UpdateGlobalSaveWithStarsRetroactively ( TArray< struct FAchievementDetails > Achievements );
	class USanctumSapituGlobal* GetGlobalSave ( );
	void SetStarsForLevelByName ( struct FString MapName, int stars );
	int GetStarsForLevelByName ( struct FString MapName );
	void SetBestWaveForLevelByNameAndDifficulty ( struct FString MapName, int Difficulty, int Wave );
	int GetBestWaveForLevelByNameAndDifficulty ( struct FString MapName, int Difficulty );
	void AddNewEncounteredEnemy ( struct FString Enemy );
	bool NewEncounteredEnemy ( struct FString Enemy );
	void SetLevelHasBeenStarted ( struct FString Level );
	bool HasLevelBeenStarted ( struct FString Level );
	void SetLevelToCleared ( struct FString Level );
	bool isLevelCleared ( struct FString Level );
	void UnlockLevel ( struct FString Level );
	bool isLevelUnlocked ( struct FString Level );
	TArray< struct FString > getGames ( );
	class USanctumSapituGame* loadGame ( struct FString GameID );
	void decrypt ( );
	void encrypt ( );
	int GetSaveRevisonInt ( );
	int calculateChecksum ( );
	struct FString GetSaveName ( );
	void gameToString ( );
	bool stringToGame ( );
	void Save ( );
};

UClass* USanctumSapitu::pClassPointer = NULL;

// Class Sanctum.SanctumSapituGame
// 0x00A8 (0x0104 - 0x005C)
class USanctumSapituGame : public USanctumSapitu
{
public:
	struct FString                                     mName;                                            		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mRubel;                                           		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                mRubelSpentOnWeapons;                             		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                mRubelSpentOnTowers;                              		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                mLives;                                           		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              mPlayTime;                                        		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FString                                     mMap;                                             		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mWaveNumber;                                      		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                mScore;                                           		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              mDifficulty;                                      		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                mPlayerFrags;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	int                                                mPlayerDamageCaused;                              		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                mPlayerWeakSpotHits;                              		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                mPlayerGibs;                                      		// 0x00A0 (0x0004) [0x0000000000000000]              
	int                                                mPlayerTeleports;                                 		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                mTowerFrags;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                mTowerDamage;                                     		// 0x00AC (0x0004) [0x0000000000000000]              
	TArray< struct FWeaponStruct >                     mWeapons;                                         		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTowerStruct >                      mTowers;                                          		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      mOnlyGatling : 1;                                 		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mOnlyLightning : 1;                               		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mOnlyScatterLaser : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                mShotsFired;                                      		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                mShotsHit;                                        		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                mPlayerAverageDPS;                                		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                mJumps;                                           		// 0x00D8 (0x0004) [0x0000000000000000]              
	int                                                mTimesKnockedBack;                                		// 0x00DC (0x0004) [0x0000000000000000]              
	int                                                mTimesInOverView;                                 		// 0x00E0 (0x0004) [0x0000000000000000]              
	int                                                mTowerAverageDPS;                                 		// 0x00E4 (0x0004) [0x0000000000000000]              
	int                                                mTowersBuiltCount;                                		// 0x00E8 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           mChosenTowerHolograms;                            		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FFavouriteTowerStruct >             mFavouriteTower;                                  		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45859 ];

		return pClassPointer;
	};

	void addFavouriteTower ( struct FString Tower, int Count );
	void addTower ( struct FString twClass, int twLevel, struct FName twBaseName, int TotalDamage, int lastWaveDamage, int TotalKills, int lastWaveKills );
	void addWeapon ( struct FString wpClass, int wpLevel, float wpTime );
	struct FString GetSaveName ( );
	bool stringToGame ( );
	void gameToString ( );
};

UClass* USanctumSapituGame::pClassPointer = NULL;

// Class Sanctum.SanctumEngine
// 0x0000 (0x07A0 - 0x07A0)
class USanctumEngine : public USanctumEngineBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45930 ];

		return pClassPointer;
	};

	void eventInitializeEngine ( );
	bool eventChooseLoadMapMovie ( TArray< struct FString >* LoadMapMovies, struct FString* out_LoadMapMovieChosen );
};

UClass* USanctumEngine::pClassPointer = NULL;

// Class Sanctum.SanctumGameInfoNormal
// 0x0008 (0x0434 - 0x042C)
class ASanctumGameInfoNormal : public ASanctumGameInfo
{
public:
	int                                                mCheckpointInterval;                              		// 0x042C (0x0004) [0x0000000000000000]              
	int                                                mCountDown;                                       		// 0x0430 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45961 ];

		return pClassPointer;
	};

	void eventToggleLevelCompleteEvent ( );
	void ToggleBuildPhase ( );
	bool isWavesLeft ( );
	void startWave ( int waveNr );
	void CountDownToSave ( );
	void saveGame ( );
	bool CheckAndPlayCameraPan ( class ASanctumPlayerController* SPC );
	void CameraPanWasSkipped ( );
	void PlayCameraPan ( );
	void MapIsAlwaysUnlocked ( );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage );
	int GetGameModeInt ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumGameInfoNormal::pClassPointer = NULL;

// Class Sanctum.SanctumWeapon
// 0x0238 (0x0510 - 0x02D8)
class ASanctumWeapon : public AUDKWeapon
{
public:
	unsigned long                                      mDebug : 1;                                       		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mWeaponHidden : 1;                                		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mAvailableInBuildPhase : 1;                       		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mMuzzleFlashAttached : 1;                         		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mMuzzleFlashPSCLoops : 1;                         		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mClientSideInstantHit : 1;                        		// 0x02D8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      cShouldAutoCorrect : 1;                           		// 0x02D8 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	TArray< int >                                      mShotCost;                                        		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      mAttachmentClass;                                 		// 0x02E8 (0x0004) [0x0000000000000000]              
	class UClass*                                      mHologramClass;                                   		// 0x02EC (0x0004) [0x0000000000000000]              
	TArray< struct FLinearColor >                      mColors;                                          		// 0x02F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    mFirstOverheatAnimRatio;                          		// 0x02FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstance* >                 mMaterials;                                       		// 0x0308 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              mSwitchAbortTime;                                 		// 0x0314 (0x0004) [0x0000000000000000]              
	class UClass*                                      mWeaponInfo;                                      		// 0x0318 (0x0004) [0x0000000000000000]              
	struct FName                                       mWeaponAnimName;                                  		// 0x031C (0x0008) [0x0000000000000000]              
	TArray< float >                                    mMinReloadPct;                                    		// 0x0324 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     mSmallWeaponsOffset;                              		// 0x0330 (0x000C) [0x0000000000000000]              
	float                                              mWideScreenOffsetScaling;                         		// 0x033C (0x0004) [0x0000000000000000]              
	struct FRotator                                    mWidescreenRotationOffset;                        		// 0x0340 (0x000C) [0x0000000000000000]              
	float                                              mMaxPitchLag;                                     		// 0x034C (0x0004) [0x0000000000000000]              
	float                                              mMaxYawLag;                                       		// 0x0350 (0x0004) [0x0000000000000000]              
	float                                              mLastRotUpdate;                                   		// 0x0354 (0x0004) [0x0000000000000000]              
	struct FRotator                                    mLastRotation;                                    		// 0x0358 (0x000C) [0x0000000000000000]              
	float                                              mOldLeadMag[ 0x2 ];                               		// 0x0364 (0x0008) [0x0000000000000000]              
	int                                                mOldRotDiff[ 0x2 ];                               		// 0x036C (0x0008) [0x0000000000000000]              
	float                                              mOldMaxDiff[ 0x2 ];                               		// 0x0374 (0x0008) [0x0000000000000000]              
	float                                              mRotChgSpeed;                                     		// 0x037C (0x0004) [0x0000000000000000]              
	float                                              mReturnChgSpeed;                                  		// 0x0380 (0x0004) [0x0000000000000000]              
	float                                              mProjectileSpawnOffset;                           		// 0x0384 (0x0004) [0x0000000000000000]              
	float                                              mCurrentDamageMultiplier;                         		// 0x0388 (0x0004) [0x0000000000000000]              
	int                                                mNumberOfHoloHits;                                		// 0x038C (0x0004) [0x0000000000000000]              
	struct FName                                       mMuzzleFlashSocket;                               		// 0x0390 (0x0008) [0x0000000000000000]              
	TArray< class UUDKParticleSystemComponent* >       mMuzzleFlashPSC;                                  		// 0x0398 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UParticleSystem* >                   mMuzzleFlashPSCTemplate;                          		// 0x03A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUDKExplosionLight*                          mMuzzleFlashLight;                                		// 0x03B0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      mMuzzleFlashLightClass;                           		// 0x03B4 (0x0004) [0x0000000000000000]              
	TArray< class UParticleSystem* >                   mTracerTemplate;                                  		// 0x03B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             mTracerEndpointName;                              		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTextureCoordinates                         mCrossHairCoordinates;                            		// 0x03D0 (0x0010) [0x0000000000000000]              
	float                                              mCrossHairScaling;                                		// 0x03E0 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  mCrosshairImage;                                  		// 0x03E4 (0x0004) [0x0000000000000000]              
	struct FColor                                      mDefaultCrosshairColor;                           		// 0x03E8 (0x0004) [0x0000000000000000]              
	struct FColor                                      mDisabledCrosshairColor;                          		// 0x03EC (0x0004) [0x0000000000000000]              
	struct FColor                                      mCrosshairColor;                                  		// 0x03F0 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             mWeaponFireAnims;                                 		// 0x03F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       mWeaponPutDownAnim;                               		// 0x0400 (0x0008) [0x0000000000000000]              
	struct FName                                       mWeaponIdleAnim;                                  		// 0x0408 (0x0008) [0x0000000000000000]              
	struct FName                                       mWeaponEquipAnim;                                 		// 0x0410 (0x0008) [0x0000000000000000]              
	float                                              mClientSideHitLeeway;                             		// 0x0418 (0x0004) [0x0000000000000000]              
	struct FRotator                                    mAddedRecoil;                                     		// 0x041C (0x000C) [0x0000000000000000]              
	struct FRotator                                    mDesiredViewOffset;                               		// 0x0428 (0x000C) [0x0000000000000000]              
	float                                              mRecoilAutoCorrectTime;                           		// 0x0434 (0x0004) [0x0000000000000000]              
	TArray< class UCameraAnim* >                       cCameraShakes;                                    		// 0x0438 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cMuzzleFlashDuration;                             		// 0x0444 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class USoundCue* >                         cWeaponFireSounds;                                		// 0x0448 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      cUpgradeCosts;                                    		// 0x0454 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                cMaxLevel;                                        		// 0x0460 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< int >                                      cPrimaryShotCost;                                 		// 0x0464 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      cSecondaryShotCost;                               		// 0x0470 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cPrimaryFireInterval;                             		// 0x047C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cSecondaryFireInterval;                           		// 0x0488 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cPrimaryFireSpread;                               		// 0x0494 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cSecondaryFireSpread;                             		// 0x04A0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      cPrimaryFireDamage;                               		// 0x04AC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      cSecondaryFireDamage;                             		// 0x04B8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      cMaxAmmo;                                         		// 0x04C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class ASanctumProjectile* >                cProjectileArchetypes;                            		// 0x04D0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           cSpecial;                                         		// 0x04DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FRotator                                    cRecoil;                                          		// 0x04E8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              cRecoilSpeed;                                     		// 0x04F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cRecoilAutoCorrectSpeed;                          		// 0x04F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cRecoilAutoCorrectDelay;                          		// 0x04FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cAutoCorrectPct;                                  		// 0x0500 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBobDamping;                                      		// 0x0504 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mJumpDamping;                                     		// 0x0508 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mLevel;                                           		// 0x050C (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46032 ];

		return pClassPointer;
	};

	void TimeWeaponFiring ( unsigned char FireModeNum );
	void FiringPutDownWeapon ( );
	bool TryPutDown ( );
	bool AllowSwitchTo ( class AWeapon* NewWeapon );
	void TimeWeaponEquipping ( );
	float GetEquipTime ( );
	void PlayWeaponEquip ( );
	void PerformWeaponChange ( );
	void ClientWeaponSet ( unsigned long bOptionalSet, unsigned long bDoNotActivate );
	void ClientEndFire ( unsigned char FireModeNum );
	void ClientToggleReady ( unsigned long IsReady );
	void ToggleReady ( unsigned long IsReady );
	void ChangeVisibility ( unsigned long bIsVisible );
	void ClientGotoState ( struct FName NewState, struct FName NewLabel );
	struct FVector GetPhysicalFireStartLoc ( struct FVector AimDir );
	struct FVector GetEffectLocation ( );
	void eventStopMuzzleFlash ( );
	void eventCauseMuzzleFlash ( );
	int GetMuzzleFlashIndex ( unsigned char FireModeNum );
	void AttachMuzzleFlash ( );
	void eventCauseMuzzleFlashLight ( );
	void eventMuzzleFlashTimer ( );
	void SpawnWeaponTracer ( unsigned char FireModeNum, struct FVector HitLocation );
	void ShakeView ( unsigned char FireModeNum );
	void PlayFiringSound ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void AddRecoil ( );
	void PlayOwnedFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void eventWeaponStoppedFiring ( unsigned char FiringModeNum );
	void eventWeaponFired ( unsigned char FiringMode, struct FVector HitLocation );
	void FlashLocationUpdated ( unsigned char FiringMode, struct FVector FlashLocation, unsigned long bViaReplication );
	void FlashCountUpdated ( unsigned char FlashCount, unsigned char FiringMode, unsigned long bViaReplication );
	void SetFlashLocation ( struct FVector HitLocation );
	struct FImpactInfo CalcRemoteWeaponFire ( struct FVector StartTrace, struct FVector EndTrace );
	void CalcRemoteImpactEffects ( unsigned char FireModeNum, struct FVector GivenHitLocation, unsigned long bViaReplication );
	void SetCurrentFireMode ( unsigned char FiringModeNum );
	void eventOnWeaponAnimEnd ( );
	void PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
	bool ShouldRegisterDamage ( class AActor* A );
	void ProcessInstantHit_Internal ( unsigned char FiringMode, int InDamage, struct FImpactInfo* Impact );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	bool CheckIfHoloHit ( struct FImpactInfo* Impact );
	void ServerNotifyHit ( unsigned char FiringMode, struct FImpactInfo Impact, int Damage );
	class AProjectile* ProjectileFire ( );
	class ASanctumProjectile* GetProjectileArchetype ( );
	void InstantFire ( );
	float GetSpread ( unsigned char FireModeNum );
	struct FRotator AddSpread ( struct FRotator BaseAim );
	void FireAmmunition ( );
	int GetAmountOfShotsFired ( );
	void ServerStartFire ( unsigned char FireModeNum );
	struct FVector InstantFireEndTrace ( struct FVector StartTrace );
	struct FVector InstantFireStartTrace ( );
	bool PassThroughDamage ( class AActor* HitActor );
	bool AmmoMaxed ( );
	void WeaponEmpty ( );
	bool HasAnyAmmo ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	int AddAmmo ( int Amount );
	void DrawCrosshair ( class AHUD* H );
	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	void DrawHUD ( class AHUD* H );
	void eventSetPosition ( class AUDKPawn* Holder );
	int LagRot ( int NewValue, int LastValue, float MaxDiff, int Index );
	bool ShouldLagRot ( );
	void ToggleOwnerSee ( unsigned long see );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void UpgradeTo ( int Level );
	void UpgradeShotCost ( int NewLevel );
	void UpgradeSpreadTo ( int NewLevel );
	void UpgradeFireIntervalTo ( int NewLevel );
	void GetStats ( class ASanctumWeapon* Wpn, int Level, struct FStatInfoStruct* weaponInfo );
	void PreloadTextures ( unsigned long forcePreload );
	bool HasDLC ( );
	void CheckCheat ( );
	void DetachWeapon ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumWeapon::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponBuildGun
// 0x01AC (0x06BC - 0x0510)
class ASanctumWeaponBuildGun : public ASanctumWeapon
{
public:
	struct FName                                       mStartingBuyAnimation;                            		// 0x0510 (0x0008) [0x0000000000000000]              
	struct FName                                       mIdleBuyAnimation;                                		// 0x0518 (0x0008) [0x0000000000000000]              
	struct FName                                       mEndingBuyAnimation;                              		// 0x0520 (0x0008) [0x0000000000000000]              
	class UAudioComponent*                             mAudioComponent;                                  		// 0x0528 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      mTowerHologramClass;                              		// 0x052C (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ASanctumTowerHologram*                       mUpgradeHologram;                                 		// 0x0530 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ASanctumTowerHologram*                       mClientPreviousUpgradeHologram;                   		// 0x0534 (0x0004) [0x0000000000000000]              
	struct FTowerData                                  mAimingAtTowerData;                               		// 0x0538 (0x0008) [0x0000000000000000]              
	class ASanctumTowerBase*                           mTowerBase;                                       		// 0x0540 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      mWeaponHologramClass;                             		// 0x0544 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class ASanctumWeaponHologram*                      mWeaponHologram;                                  		// 0x0548 (0x0004) [0x0000000000000000]              
	class ASanctumWeapon*                              mCurrentWeapon;                                   		// 0x054C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mCurrentWeaponLevel;                              		// 0x0550 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mUpgradingWeaponLevel;                            		// 0x0554 (0x0004) [0x0000000000000000]              
	struct FTowerData                                  mCurrentTowerData;                                		// 0x0558 (0x0008) [0x0000000000000000]              
	struct FDataForWeapon                              mPreviousWeaponData;                              		// 0x0560 (0x0008) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      mAbleToBuild : 1;                                 		// 0x0568 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      mAbleToSell : 1;                                  		// 0x0568 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      mAbleToUpgrade : 1;                               		// 0x0568 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      mPotentialBuildCompleted : 1;                     		// 0x0568 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mAimingAtTower : 1;                               		// 0x0568 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      mDisable : 1;                                     		// 0x0568 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      mDisableSellTower : 1;                            		// 0x0568 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      mCanStartFire : 1;                                		// 0x0568 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      mAimingAtPrebuilt : 1;                            		// 0x0568 (0x0004) [0x0000000000000000] [0x00000100] 
	class ASanctumTowerBaseAttachment*                 mAttachmentInstance;                              		// 0x056C (0x0004) [0x0000000000000000]              
	int                                                mBuyPrice;                                        		// 0x0570 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mSellPrice;                                       		// 0x0574 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FName >                             mBuyStates;                                       		// 0x0578 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             mSellStates;                                      		// 0x0584 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      mRightClickAction;                                		// 0x0590 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mLeftClickAction;                                 		// 0x0591 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mWeaponUpgradeAction;                             		// 0x0592 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mBuildResult;                                     		// 0x0593 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                mCurrentWeaponCost;                               		// 0x0594 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ASanctumHUD*                                 mHUD;                                             		// 0x0598 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mBuyCountdownTime;                                		// 0x059C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mUpgradeCountdownTime;                            		// 0x05A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mSellCountdownTime;                               		// 0x05A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPoorTimer;                                       		// 0x05A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCountdownTimer;                                  		// 0x05AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mCurrentStartCountdownTime;                       		// 0x05B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mMaxCountDown;                                    		// 0x05B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mHelpMsgDelay;                                    		// 0x05B8 (0x0004) [0x0000000000000000]              
	class ASanctumRangeIndicator*                      mGroundRange;                                     		// 0x05BC (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   mButtonDownListeners;                             		// 0x05C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mButtonUpListeners;                               		// 0x05CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mSellPriceListeners;                              		// 0x05D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mBuyPriceListeners;                               		// 0x05E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mCountdownTimerListeners;                         		// 0x05F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mCurrentTowerListeners;                           		// 0x05FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mAimingAtTowerListeners;                          		// 0x0608 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mLeftClickListeners;                              		// 0x0614 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mRightClickListeners;                             		// 0x0620 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mWeaponUpgradeListeners;                          		// 0x062C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mNextWeaponListeners;                             		// 0x0638 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mPrevWeaponListeners;                             		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __IntChanged__Delegate;                           		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __FloatChanged__Delegate;                         		// 0x065C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __VoidChanged__Delegate;                          		// 0x0668 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __LeftClickListener__Delegate;                    		// 0x0674 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __RightClickListener__Delegate;                   		// 0x0680 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __WeaponUpgradeListener__Delegate;                		// 0x068C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __CurrentTowerChanged__Delegate;                  		// 0x0698 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __CurrentTowerChangedInstance__Delegate;          		// 0x06A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __AimedAtTower__Delegate;                         		// 0x06B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46043 ];

		return pClassPointer;
	};

	float getMaxCompletion ( );
	void buildAborted ( );
	void playPing ( );
	void ClientToggleReady ( unsigned long IsReady );
	void ToggleReady ( unsigned long IsReady );
	float getCurrentCompletion ( );
	void ToggleOwnerSee ( unsigned long see );
	void HologramUpgradeCountdown ( float amountComplete, unsigned char click );
	bool delayIdle ( struct FName PrevState );
	void weaponCategoryChangedServer ( unsigned char Category );
	void DrawHUD ( class AHUD* H );
	void DetachWeaponHologram ( );
	void weaponCategoryChanged ( unsigned char Category );
	void HandleFinishedFiring ( );
	bool isInWeaponStore ( );
	void weaponStoreUpdate ( );
	bool DoOverrideNextWeapon ( );
	bool DoOverridePrevWeapon ( );
	bool isUpgradeAction ( unsigned char Action );
	void BuildFunction ( int FireMode );
	void AchievementsCheckSell ( class UClass* towerClass );
	void AddBuildStats ( class UClass* towerClass, class APawn* PC );
	void AchievementsChecksUpgrade ( class UClass* towerClass );
	struct FVector getBuildEffectLocation ( class ASanctumTowerBase* TowerBase );
	bool currentTowerIsChanged ( );
	void addWeaponUpgradeListener ( struct FScriptDelegate Listener );
	void addAimingAtTowerListener ( struct FScriptDelegate Listener );
	void addCurrentTowerListener ( struct FScriptDelegate Listener );
	void addPrevWeaponListener ( struct FScriptDelegate Listener );
	void addNextWeaponListener ( struct FScriptDelegate Listener );
	void addRightClickListener ( struct FScriptDelegate Listener );
	void addLeftClickListener ( struct FScriptDelegate Listener );
	void addCountdownListener ( struct FScriptDelegate Listener );
	void addBuyPriceListener ( struct FScriptDelegate Listener );
	void addSellPriceListener ( struct FScriptDelegate Listener );
	void addButtonUpListener ( struct FScriptDelegate Listener );
	void addButtonDownListener ( struct FScriptDelegate Listener );
	void setAimingAtTower ( unsigned long NewValue );
	void setWeaponUpgradeAction ( unsigned char Action, int Cost );
	void setRightClickAction ( unsigned char Action );
	void setLeftClickAction ( unsigned char Action );
	void setBuyPrice ( int NewValue );
	void getAdjustedSellPrice ( class UClass* Tower, TArray< int >* ownerInvestment );
	void setSellPrice ( int NewValue );
	void setAbleToUpgrade ( unsigned long NewValue );
	void setAbleToSell ( unsigned long NewValue );
	void setAbleToBuild ( unsigned long NewValue );
	void notifyPrevWeaponListeners ( );
	void notifyNextWeaponListeners ( );
	void notifyAimingAtTowerListeners ( class UClass* towerClass, int towerLevel, class ASanctumTowerBaseAttachment* attachmentInstance );
	void notifyCurrentTowerListeners ( class UClass* towerClass, int towerLevel, class ASanctumTowerBaseAttachment* attachmentInstance );
	void notifyWeaponUpgradeListeners ( unsigned char Action, int Cost );
	void notifyRightClickListeners ( unsigned char Action );
	void notifyLeftClickListeners ( unsigned char Action );
	void notifyCountdownListeners ( float NewValue, unsigned char click );
	void notifyBuyPriceListeners ( int NewValue );
	void notifySellPriceListeners ( int NewValue );
	void notifyButtonDownListeners ( int NewValue );
	void NotifyButtonUpListeners ( unsigned char FireMode );
	void serverSetAbleToUpgrade ( unsigned long NewValue );
	void serverSetAbleToSell ( unsigned long NewValue );
	void serverSetAbleToBuild ( unsigned long NewValue );
	unsigned char canUpgradeOnBase ( class ASanctumTowerBase* TowerBase, int Rubel );
	int getCurrentWeaponCost ( );
	unsigned char canUpgradeWeapon ( int Rubel );
	bool canSellOnBase ( class ASanctumTowerBase* TowerBase );
	void CheckTowerCollision ( );
	class ASanctumTowerBaseAttachment* getTowerBaseAttachment ( class AActor* Actor );
	void hideGroundRange ( );
	void HideHologram ( );
	void showHologram ( );
	class UClass* getHologramFromTower ( class UClass* Tower );
	void spawnNewHologram ( class UClass* towerClass );
	void setTowerChoice ( class ASanctumTowerBase* TowerBase );
	void changedPotentialTower ( );
	void showRange ( class ASanctumTowerBase* TowerBase, class ASanctumTowerHologram* hologram );
	void setTowerBase ( class ASanctumTowerBase* TowerBase );
	void weaponHologramClassChanged ( );
	void PlayHologramEquip ( );
	bool AnimateWeaponStore ( );
	void ShouldWeAnimateWeaponStore ( );
	void setWeapon ( class ASanctumWeapon* Weapon, int Level );
	void eventSetPosition ( class AUDKPawn* Holder );
	void setTowerHologram ( class UClass* theHologram );
	class AActor* TraceForBase ( );
	void NotifyKismetAimedAtTower ( class UClass* towerClass );
	void NotifyKismetUpgradedTower ( class UClass* towerClass );
	void NotifyKismetSelectedTower ( class UClass* HologramClass );
	void NotifyKismetUpgradedWeapon ( class UClass* WeaponClass );
	void NotifyKismetEnterWeaponStore ( );
	void NotifyKismetSoldTower ( );
	void NotifyKismetBuiltTower ( class UClass* towerClass );
	void ClientRegisterActionListeners ( );
	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	void cashChanged ( int newCash );
	void AttachAudioComponent ( );
	void UpgradeTo ( int Level );
	void Destroyed ( );
	void eventPostBeginPlay ( );
	void updatedPRI ( );
	void eventReplicatedEvent ( struct FName VarName );
	void AimedAtTower ( class ASanctumTowerBaseAttachment* attachmentInstance );
	void CurrentTowerChangedInstance ( class UClass* towerClass, int towerLevel, class ASanctumTowerBaseAttachment* attachmentInstance );
	void CurrentTowerChanged ( class UClass* towerClass, int towerLevel );
	void WeaponUpgradeListener ( unsigned char Action, int Cost );
	void RightClickListener ( unsigned char Action );
	void LeftClickListener ( unsigned char Action );
	void VoidChanged ( );
	void FloatChanged ( float Variable, unsigned char click );
	void IntChanged ( int Variable );
};

UClass* ASanctumWeaponBuildGun::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponOverheat
// 0x007C (0x058C - 0x0510)
class ASanctumWeaponOverheat : public ASanctumWeapon
{
public:
	float                                              cOverheatRegainTime;                              		// 0x0510 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    cOverheatTime;                                    		// 0x0514 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mOverheated : 1;                                  		// 0x0520 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mPlayingOverheatEquip : 1;                        		// 0x0520 (0x0004) [0x0000000000000000] [0x00000002] 
	class USoundCue*                                   mOverheatSound;                                   		// 0x0524 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   mReloadSound;                                     		// 0x0528 (0x0004) [0x0000000000000000]              
	float                                              mTargetOverheatTime;                              		// 0x052C (0x0004) [0x0000000000000000]              
	float                                              mCurrentOverheat;                                 		// 0x0530 (0x0004) [0x0000000000000000]              
	float                                              mCurrentOverheatRegainTime;                       		// 0x0534 (0x0004) [0x0000000000000000]              
	struct FName                                       mOverheatAnim;                                    		// 0x0538 (0x0008) [0x0000000000000000]              
	struct FName                                       mOverheatFinishedAnim;                            		// 0x0540 (0x0008) [0x0000000000000000]              
	struct FName                                       mOverheatIdleAnim;                                		// 0x0548 (0x0008) [0x0000000000000000]              
	float                                              mOverheatStartAnimTime;                           		// 0x0550 (0x0004) [0x0000000000000000]              
	float                                              mOverheatFinishedAnimTime;                        		// 0x0554 (0x0004) [0x0000000000000000]              
	float                                              mTotalOverheatTime;                               		// 0x0558 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlend*                              mAnimNodeBlend;                                   		// 0x055C (0x0004) [0x0000000000000000]              
	class UAnimNodeSlot*                               mFullBodySlot;                                    		// 0x0560 (0x0004) [0x0000000000000000]              
	int                                                mLastAmmoCount;                                   		// 0x0564 (0x0004) [0x0000000000000000]              
	float                                              mAnimLengthMultiplier;                            		// 0x0568 (0x0004) [0x0000000000000000]              
	unsigned char                                      mFinishedFireModeNum;                             		// 0x056C (0x0001) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   mCooldownListeners;                               		// 0x0570 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mLastCooldownValue;                               		// 0x057C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __CooldownChanged__Delegate;                      		// 0x0580 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46230 ];

		return pClassPointer;
	};

	bool ShouldRefire ( );
	void OverheatStartAnimEnded ( );
	void PlayOverheatIdleAnim ( );
	bool HasAnyAmmo ( );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	void CallAllOverheatFuncs ( float Delta );
	void eventTick ( float Delta );
	void CalculateOverheat ( );
	void SetOverheatMaterial ( struct FLinearColor overheatColor );
	void SetOverheat ( );
	void RegainAmmo ( );
	void StartAmmoRegain ( );
	void CalculateOverheatTime ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void WeaponEmpty ( );
	void ForceOverheat ( );
	void FireFinished ( );
	void FireAmmunition ( );
	void NotifyCooldownListeners ( float Percent );
	void ClearAllCooldownListeners ( );
	void RemoveCooldownListener ( struct FScriptDelegate Listener );
	void AddCooldownListener ( struct FScriptDelegate Listener );
	void Overheat ( );
	void StopOverheatEffects ( );
	void PlayOverheatEffects ( );
	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	void CalculateTotalOverheatTime ( );
	void UpgradeTo ( int Level );
	void PlayCustomWeaponAnimByDuration ( struct FName Sequence, float desiredDuration, float BlendInTime, float BlendOutTime, unsigned long loop, unsigned long override );
	void eventOnWeaponAnimEnd ( );
	void PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	void SetupAnimNodes ( );
	void eventReplicatedEvent ( struct FName VarName );
	void CooldownChanged ( float cooldownPercent );
};

UClass* ASanctumWeaponOverheat::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponMarker
// 0x002C (0x05B8 - 0x058C)
class ASanctumWeaponMarker : public ASanctumWeaponOverheat
{
public:
	TArray< float >                                    cSlowdownFactor;                                  		// 0x058C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class ASanctumProjectile* >                cFreezeProjectileArchetypes;                      		// 0x0598 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cSecondaryFireOverheat;                           		// 0x05A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimNodeBlend*                              mFireModeBlend;                                   		// 0x05B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      mLastWasPrimaryFire : 1;                          		// 0x05B4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46229 ];

		return pClassPointer;
	};

	void ChooseOverheatAnims ( );
	void GetStats ( class ASanctumWeapon* Wpn, int lvl, struct FStatInfoStruct* weaponInfo );
	class ASanctumProjectile* GetSecondaryProjectileArchetype ( );
	class ASanctumProjectile* GetProjectileArchetype ( );
	void SetOverheat ( );
	void CalculateTotalOverheatTime ( );
	void ChooseOverheatNode ( );
	void eventOnWeaponAnimEnd ( );
	void SetupAnimNodes ( );
	void CalculateOverheatTime ( );
	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	void eventPostBeginPlay ( );
};

UClass* ASanctumWeaponMarker::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponAssault
// 0x0058 (0x05E4 - 0x058C)
class ASanctumWeaponAssault : public ASanctumWeaponOverheat
{
public:
	TArray< int >                                      cStartOverheatWarning;                            		// 0x058C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      cStopOverheatWarning;                             		// 0x0598 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cMinSpreadMod;                                    		// 0x05A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMaxSpreadMod;                                    		// 0x05A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cSpreadSpeed;                                     		// 0x05AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             mHeatSmokeSockets;                                		// 0x05B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUDKParticleSystemComponent* >       mSmokeSystems;                                    		// 0x05BC (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UParticleSystem* >                   mSmokeTemplates;                                  		// 0x05C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      mOverheatWarningPlaying : 1;                      		// 0x05D4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class USoundCue*                                   mOverheatWarningSound;                            		// 0x05D8 (0x0004) [0x0000000000000000]              
	float                                              mCurrentSpreadMod;                                		// 0x05DC (0x0004) [0x0000000000000000]              
	float                                              mDesiredSpreadMod;                                		// 0x05E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46231 ];

		return pClassPointer;
	};

	void eventTick ( float Delta );
	void StopOverheatWarningSound ( );
	void StartOverheatWarningSound ( );
	void PlayOverheatWarning ( );
	void FireAmmunition ( );
	int AddAmmo ( int Amount );
	void DeattachSmokeHeat ( int Socket );
	void AttachHeatSmoke ( int Socket );
	float GetSpread ( unsigned char FireModeNum );
	void CalcSpreadMod ( float Delta );
	void StopOverheatEffects ( );
	void PlayOverheatEffects ( );
	void SetOverheatMaterial ( struct FLinearColor overheatColor );
	void PlayCooldownedSound ( float Cooldown );
	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	void GetStats ( class ASanctumWeapon* Wpn, int lvl, struct FStatInfoStruct* weaponInfo );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumWeaponAssault::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponUsingAmmo
// 0x0044 (0x05D0 - 0x058C)
class ASanctumWeaponUsingAmmo : public ASanctumWeaponOverheat
{
public:
	TArray< class UGFxObject* >                        mAmmoList;                                        		// 0x058C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mAmmoSpacing;                                     		// 0x0598 (0x0004) [0x0000000000000000]              
	float                                              mAmmoPaddingY;                                    		// 0x059C (0x0004) [0x0000000000000000]              
	struct FVector2D                                   mLockedOnAmmoSize;                                		// 0x05A0 (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  mAmmoTexture;                                     		// 0x05A8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  mSpecialAmmoTexture;                              		// 0x05AC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  mConsumedAmmoTexture;                             		// 0x05B0 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   mAmmoListeners;                                   		// 0x05B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mLastAmmoValue;                                   		// 0x05C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __AmmoChanged__Delegate;                          		// 0x05C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46233 ];

		return pClassPointer;
	};

	void UpgradeTo ( int Level );
	void NotifyAmmoListeners ( int ammoLeft, class ASanctumWeaponUsingAmmo* Wpn );
	void ClearAllAmmoListeners ( );
	void RemoveAmmoListener ( struct FScriptDelegate Listener );
	void AddAmmoListener ( struct FScriptDelegate Listener );
	int AddAmmo ( int Amount );
	void RegainAmmo ( );
	void StartAmmoRegain ( );
	void DrawHUD ( class AHUD* H );
	class UTexture2D* GetCrosshairTextureForAmmo ( int ammoIndex );
	void CalculateOverheat ( );
	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void AmmoChanged ( int ammoLeft, class ASanctumWeaponUsingAmmo* Wpn );
};

UClass* ASanctumWeaponUsingAmmo::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponSniper
// 0x0040 (0x0610 - 0x05D0)
class ASanctumWeaponSniper : public ASanctumWeaponUsingAmmo
{
public:
	unsigned char                                      mZoomedFireModeNum;                               		// 0x05D0 (0x0001) [0x0000000000000000]              
	unsigned char                                      mZoomLevel;                                       		// 0x05D1 (0x0001) [0x0000000000000000]              
	TArray< float >                                    mZoomedTargetFOV;                                 		// 0x05D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cZoomedRate;                                      		// 0x05E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cZoomOutReloadDelay;                              		// 0x05E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  mZoomedImage;                                     		// 0x05E8 (0x0004) [0x0000000000000000]              
	struct FName                                       mZoomInAnim;                                      		// 0x05EC (0x0008) [0x0000000000000000]              
	struct FName                                       mZoomOutAnim;                                     		// 0x05F4 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   mZoomInSound;                                     		// 0x05FC (0x0004) [0x0000000000000000]              
	class USoundCue*                                   mZoomOutSound;                                    		// 0x0600 (0x0004) [0x0000000000000000]              
	int                                                mKillsWithCurrentClip;                            		// 0x0604 (0x0004) [0x0000000000000000]              
	int                                                mStraightWeakSpotKills;                           		// 0x0608 (0x0004) [0x0000000000000000]              
	int                                                mPotentialWeakSpotKill;                           		// 0x060C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46232 ];

		return pClassPointer;
	};

	void Destroyed ( );
	void GetStats ( class ASanctumWeapon* Wpn, int lvl, struct FStatInfoStruct* weaponInfo );
	void DrawZoomedCrosshair ( class AHUD* H );
	void DrawCrosshair ( class AHUD* H );
	bool CheckZoom ( unsigned char FireModeNum );
	void EndZoom ( class APlayerController* PC );
	void ForceEndZoom ( );
	unsigned char GetZoomedState ( );
	void StartZoom ( class APlayerController* PC );
	void SendToFiringState ( unsigned char FireModeNum );
	void FireAmmunition ( );
	void SniperWeakspotKill ( );
	void SetOverheat ( );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumWeaponSniper::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponShotgun
// 0x00A8 (0x0678 - 0x05D0)
class ASanctumWeaponShotgun : public ASanctumWeaponUsingAmmo
{
public:
	struct FName                                       mScheduledAnimation;                              		// 0x05D0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< class USoundCue* >                         mChargeSoundArray;                                		// 0x05D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   mChargeIdleSound;                                 		// 0x05E4 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             mAudioComponent;                                  		// 0x05E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FName >                             mHeatSmokeSockets;                                		// 0x05EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UUDKParticleSystemComponent* >       mSmokeSystems;                                    		// 0x05F8 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UParticleSystem* >                   mSmokeTemplates;                                  		// 0x0604 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FVector2D >                         mPelletSpread;                                    		// 0x0610 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mTransientShotgunDamage;                          		// 0x061C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mLoadedAmmo;                                      		// 0x0620 (0x0001) [0x0000000000000000]              
	unsigned char                                      mShotsFired;                                      		// 0x0621 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      mMaxLoadAnims;                                    		// 0x0622 (0x0001) [0x0000000000000000]              
	float                                              mCurrentOverheatColorScale;                       		// 0x0624 (0x0004) [0x0000000000000000]              
	unsigned long                                      mCanPlayFireEffects : 1;                          		// 0x0628 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mLoadingShots : 1;                                		// 0x0628 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mShooting : 1;                                    		// 0x0628 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mEndingFireLoad : 1;                              		// 0x0628 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              cMaxDistToGetBonus;                               		// 0x062C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cCloseDamageBonus;                                		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDamageMultiplier;                                		// 0x0634 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                cTraceExtentSize;                                 		// 0x0638 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cKnockBack;                                       		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cChargeRotateReturnTime;                          		// 0x0640 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPawnHitInfo >                      mLastHitInfo;                                     		// 0x0644 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	TArray< struct FVector >                           mLastHitLocations;                                		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             mChargeAnimNames;                                 		// 0x065C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       mFirstCharge;                                     		// 0x0668 (0x0008) [0x0000000000000000]              
	struct FName                                       mChargeToNormal;                                  		// 0x0670 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46234 ];

		return pClassPointer;
	};

	class UTexture2D* GetCrosshairTextureForAmmo ( int ammoIndex );
	void GetStats ( class ASanctumWeapon* Wpn, int lvl, struct FStatInfoStruct* weaponInfo );
	void PlayChargeIdleSound ( );
	void StopOverheatEffects ( );
	void PlayOverheatEffects ( );
	void PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
	int HitNumberOfTimes ( class ASanctumPawn* HitPawn );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void eventOnWeaponAnimEnd ( );
	void FireAmmunition ( );
	void KnockBackPlayer ( );
	void DeattachHeatSmoke ( int Socket );
	void AttachHeatSmoke ( int Socket );
	void CallAllOverheatFuncs ( float Delta );
	void CoolDownOverheat ( float Delta );
	void SetOverheat ( );
	void CalculateOverheat ( );
	void FireAllPellets ( struct FVector StartLocation, struct FRotator inAimRot, unsigned char FireModeNum );
	void AttachAudioComponent ( );
	void FlashLocationUpdated ( unsigned char FiringMode, struct FVector FlashLocation, unsigned long bViaReplication );
	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	void CustomFire ( );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
	int GetAmountOfShotsFired ( );
	void Destroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumWeaponShotgun::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponRocketLauncher
// 0x005C (0x062C - 0x05D0)
class ASanctumWeaponRocketLauncher : public ASanctumWeaponUsingAmmo
{
public:
	TArray< class ASanctumProjectile* >                mSecondaryProjectileArchetypes;                   		// 0x05D0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cTrackingTimeout;                                 		// 0x05DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cInitialTrackingTime;                             		// 0x05E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mCanTrackEnemies : 1;                             		// 0x05E4 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mTrackingCooldown;                                		// 0x05E8 (0x0004) [0x0000000000000000]              
	TArray< class ASanctumEnemy* >                     mTrackedEnemies;                                  		// 0x05EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterial*                                   mTrackingHUDMaterial;                             		// 0x05F8 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   mTrackingHUDMinSize;                              		// 0x05FC (0x0008) [0x0000000000000000]              
	struct FVector2D                                   mTrackingHUDMaxSize;                              		// 0x0604 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   mLockOnSound;                                     		// 0x060C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   mStartTrackingSound;                              		// 0x0610 (0x0004) [0x0000000000000000]              
	class USoundCue*                                   mEndTrackingSound;                                		// 0x0614 (0x0004) [0x0000000000000000]              
	struct FName                                       mTrackingAnimation;                               		// 0x0618 (0x0008) [0x0000000000000000]              
	struct FName                                       mTrackingIdleAnimation;                           		// 0x0620 (0x0008) [0x0000000000000000]              
	int                                                mNumberOfMiniRocketsFired;                        		// 0x0628 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46235 ];

		return pClassPointer;
	};

	void eventnotifyNewHud ( class ASanctumHUD* HUD );
	class UTexture2D* GetCrosshairTextureForAmmo ( int ammoIndex );
	void GetEnemyTrackingInformation ( class UCanvas* inCanvas, class ASanctumEnemy* Enemy, struct FVector2D* out_enemyScreenLocation, struct FVector2D* out_enemyHitSize );
	void CheckForDeadTrackedEnemies ( );
	void UpgradeSpreadTo ( int NewLevel );
	void UpgradeShotCost ( int NewLevel );
	void UpgradeFireIntervalTo ( int NewLevel );
	void GetStats ( class ASanctumWeapon* Wpn, int lvl, struct FStatInfoStruct* weaponInfo );
	void SetNormalCrosshair ( );
	void SetTrackingCrosshair ( );
	void ServerSetTrackedEnemy ( class ASanctumEnemy* Enemy, unsigned char Index );
	void SetTrackedEnemy ( class ASanctumEnemy* Enemy );
	class ASanctumProjectile* GetProjectileArchetype ( );
};

UClass* ASanctumWeaponRocketLauncher::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentAntiAir
// 0x0010 (0x02E4 - 0x02D4)
class ASanctumTowerBaseAttachmentAntiAir : public ASanctumTowerBaseAttachmentOffensive
{
public:
	class UStaticMeshComponent*                        mLaser;                                           		// 0x02D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mBeacon;                                          		// 0x02D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              cShootingBlend;                                   		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cIdleBlend;                                       		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46239 ];

		return pClassPointer;
	};

	void PlayIdleAnimation ( );
	void PlayShootingAnimation ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	bool AddBlockMaterialToArray ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentAntiAir::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentScatterLaser
// 0x0004 (0x02D8 - 0x02D4)
class ASanctumTowerBaseAttachmentScatterLaser : public ASanctumTowerBaseAttachmentOffensive
{
public:
	class USkelControlLookAt*                          mSkelControlLookAtHead;                           		// 0x02D4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46240 ];

		return pClassPointer;
	};

	void UpgradeMesh ( int toLevel );
	class ASanctumEnemy* findNewTarget ( );
	void PlayShootingAnimation ( );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	bool AddBlockMaterialToArray ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentScatterLaser::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentGatling
// 0x0000 (0x02D4 - 0x02D4)
class ASanctumTowerBaseAttachmentGatling : public ASanctumTowerBaseAttachmentOffensive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46241 ];

		return pClassPointer;
	};

	void eventMuzzleFourFired ( );
	void eventMuzzleThreeFired ( );
	void eventMuzzleTwoFired ( );
	void eventMuzzleOneFired ( );
	void eventMuzzleZeroFired ( );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentGatling::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentLightning
// 0x0004 (0x02D8 - 0x02D4)
class ASanctumTowerBaseAttachmentLightning : public ASanctumTowerBaseAttachmentOffensive
{
public:
	class UAudioComponent*                             AmbientSound;                                     		// 0x02D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46242 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void UpgradeMesh ( int toLevel );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	void PlayShootingAnimation ( );
	bool AddBlockMaterialToArray ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentLightning::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentMortar
// 0x0000 (0x02D4 - 0x02D4)
class ASanctumTowerBaseAttachmentMortar : public ASanctumTowerBaseAttachmentOffensive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46243 ];

		return pClassPointer;
	};

	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	bool isValidTarget ( class ASanctumEnemy* Target );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void UpgradeMesh ( int toLevel );
	bool AddBlockMaterialToArray ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentMortar::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentHolo
// 0x002C (0x0278 - 0x024C)
class ASanctumTowerBaseAttachmentHolo : public ASanctumTowerBaseAttachment
{
public:
	class USanctumConfigHoloTower*                     mBoostConfig;                                     		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    mDamageMultiplier;                                		// 0x0250 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             mShootThroughEffect;                              		// 0x025C (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        mTopMesh;                                         		// 0x0260 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mForceFieldMesh;                                  		// 0x0264 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UMaterialInstanceConstant* >         mMaterials;                                       		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   mBuildSound;                                      		// 0x0274 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46244 ];

		return pClassPointer;
	};

	float getDamageMultiplier ( int numberOfHoloHits );
	void GetShotThrough ( struct FImpactInfo Impact );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	void Upgrade ( int NewLevel );
	void UpgradeMesh ( );
	void eventTick ( float DeltaTime );
	void PlayBuildSound ( );
	void eventReplicatedEvent ( struct FName VarName );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentHolo::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentPenetrator
// 0x0000 (0x02D4 - 0x02D4)
class ASanctumTowerBaseAttachmentPenetrator : public ASanctumTowerBaseAttachmentOffensive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46245 ];

		return pClassPointer;
	};

	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	void UpgradeMesh ( int toLevel );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	bool HasDLC ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentPenetrator::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentGauss
// 0x0008 (0x02DC - 0x02D4)
class ASanctumTowerBaseAttachmentGauss : public ASanctumTowerBaseAttachmentOffensive
{
public:
	class UStaticMeshComponent*                        mLaser;                                           		// 0x02D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mBeacon;                                          		// 0x02D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46246 ];

		return pClassPointer;
	};

	void PlayIdleAnimation ( );
	void PlayShootingAnimation ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void UpgradeMesh ( int toLevel );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	bool HasDLC ( );
	bool AddBlockMaterialToArray ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentGauss::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentAmpField
// 0x0004 (0x0284 - 0x0280)
class ASanctumTowerBaseAttachmentAmpField : public ASanctumTowerBaseAttachmentField
{
public:
	class USanctumConfigAmpField*                      cAmpConfig;                                       		// 0x0280 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46247 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void HandleUntouch ( class ASanctumPawn* P );
	void HandleTouchingPawn ( class ASanctumPawn* P );
	void eventUnTouch ( class AActor* Other );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
};

UClass* ASanctumTowerBaseAttachmentAmpField::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentKillingFloor
// 0x0028 (0x02A8 - 0x0280)
class ASanctumTowerBaseAttachmentKillingFloor : public ASanctumTowerBaseAttachmentField
{
public:
	class USanctumConfigKillingFloor*                  cKillingFloorConfig;                              		// 0x0280 (0x0004) [0x0000000000000000]              
	class UClass*                                      mDamageType;                                      		// 0x0284 (0x0004) [0x0000000000000000]              
	float                                              mCoolDown;                                        		// 0x0288 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             mHeatHazeParticleSystem;                          		// 0x028C (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    mHeatHazePSC;                                     		// 0x0290 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   mKillSound;                                       		// 0x0294 (0x0004) [0x0000000000000000]              
	float                                              mCurrentFanSpeedScale;                            		// 0x0298 (0x0004) [0x0000000000000000]              
	float                                              mMinFanSpeed;                                     		// 0x029C (0x0004) [0x0000000000000000]              
	float                                              mMaxFanSpeed;                                     		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             AmbientSound;                                     		// 0x02A4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46248 ];

		return pClassPointer;
	};

	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	void UpgradeMesh ( int toLevel );
	void createParticleSystem ( );
	void Kill ( );
	void SetFanSpeed ( float Scale );
	void HandleTouchingPawn ( class ASanctumPawn* P );
	void eventTick ( float Delta );
	bool HasDLC ( );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentKillingFloor::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentKairos
// 0x0018 (0x02EC - 0x02D4)
class ASanctumTowerBaseAttachmentKairos : public ASanctumTowerBaseAttachmentOffensive
{
public:
	float                                              cShootingBlend;                                   		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cIdleBlend;                                       		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mShootAnimLength;                                 		// 0x02DC (0x0004) [0x0000000000000000]              
	class UAnimNodeBlend*                              mBlendAnimSlot;                                   		// 0x02E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      mReceiveAnimNotification : 1;                     		// 0x02E4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UAudioComponent*                             AmbientSound;                                     		// 0x02E8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46249 ];

		return pClassPointer;
	};

	void UpgradeMesh ( int toLevel );
	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	void eventShootAnimDone ( );
	void PlayShootingAnimation ( );
	void eventDestroyed ( );
	bool AddBlockMaterialToArray ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentKairos::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentAccelerator
// 0x0000 (0x02D4 - 0x02D4)
class ASanctumTowerBaseAttachmentAccelerator : public ASanctumTowerBaseAttachmentOffensive
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46250 ];

		return pClassPointer;
	};

	void GetStats ( int lvl, struct FStatInfoStruct* statInfo );
	void PlayShootingAnimation ( );
	void PlayIdleAnimation ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	bool AddBlockMaterialToArray ( );
	bool HasDLC ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentAccelerator::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramOffensive
// 0x0008 (0x0204 - 0x01FC)
class ASanctumTowerHologramOffensive : public ASanctumTowerHologram
{
public:
	class UAnimNodeSlot*                               mFullBodyAnimSlot;                                		// 0x01FC (0x0004) [0x0000000000000000]              
	class USkeletalMeshComponent*                      mSkeletalMesh;                                    		// 0x0200 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46255 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	unsigned char AbleToBuildOnBase ( class ASanctumTowerBase* TowerBase, int Rubel );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramOffensive::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramAntiAir
// 0x0014 (0x0218 - 0x0204)
class ASanctumTowerHologramAntiAir : public ASanctumTowerHologramOffensive
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x0204 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh1;                                           		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh2;                                           		// 0x020C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkelControlLookAt*                          mSkelControlLookAt;                               		// 0x0210 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          mSkelControlLookAtUp;                             		// 0x0214 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46254 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramAntiAir::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramScatterLaser
// 0x0010 (0x0214 - 0x0204)
class ASanctumTowerHologramScatterLaser : public ASanctumTowerHologramOffensive
{
public:
	class USkelControlLookAt*                          mSkelControlLookAt;                               		// 0x0204 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          mSkelControlLookAtUp;                             		// 0x0208 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          mSkelControlLookAtHead;                           		// 0x020C (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x0210 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46256 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramScatterLaser::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramBlock
// 0x0010 (0x020C - 0x01FC)
class ASanctumTowerHologramBlock : public ASanctumTowerHologram
{
public:
	TArray< class ASanctumPawnDummy* >                 mDummyArray;                                      		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46257 ];

		return pClassPointer;
	};

	unsigned char AbleToBuildOnBase ( class ASanctumTowerBase* TowerBase, int Rubel );
	bool AllDummysCanFindGoal ( class ASanctumTowerBase* TowerBase );
	void fillArrayWithDummies ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramBlock::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramGatling
// 0x0010 (0x0214 - 0x0204)
class ASanctumTowerHologramGatling : public ASanctumTowerHologramOffensive
{
public:
	class USkelControlLookAt*                          mSkelControlLookAt;                               		// 0x0204 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          mSkelControlLookAtUp;                             		// 0x0208 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x020C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh1;                                           		// 0x0210 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46258 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramGatling::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramElevator
// 0x0010 (0x020C - 0x01FC)
class ASanctumTowerHologramElevator : public ASanctumTowerHologram
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x01FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh1;                                           		// 0x0200 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh2;                                           		// 0x0204 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh3;                                           		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46259 ];

		return pClassPointer;
	};

	unsigned char AbleToBuildOnBase ( class ASanctumTowerBase* TowerBase, int Rubel );
	void PostBeginPlay ( );
};

UClass* ASanctumTowerHologramElevator::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramLightning
// 0x0004 (0x0208 - 0x0204)
class ASanctumTowerHologramLightning : public ASanctumTowerHologramOffensive
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x0204 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46260 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramLightning::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramMortar
// 0x000C (0x0210 - 0x0204)
class ASanctumTowerHologramMortar : public ASanctumTowerHologramOffensive
{
public:
	class USkelControlLookAt*                          mSkelControlLookAt;                               		// 0x0204 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          mSkelControlLookAtUp;                             		// 0x0208 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x020C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46261 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramMortar::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramField
// 0x0000 (0x01FC - 0x01FC)
class ASanctumTowerHologramField : public ASanctumTowerHologram
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46263 ];

		return pClassPointer;
	};

	unsigned char AbleToBuildOnBase ( class ASanctumTowerBase* TowerBase, int Rubel );
};

UClass* ASanctumTowerHologramField::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramSlowField
// 0x0004 (0x0200 - 0x01FC)
class ASanctumTowerHologramSlowField : public ASanctumTowerHologramField
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x01FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46262 ];

		return pClassPointer;
	};

	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramSlowField::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramHolo
// 0x0008 (0x0204 - 0x01FC)
class ASanctumTowerHologramHolo : public ASanctumTowerHologram
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x01FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh1;                                           		// 0x0200 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46264 ];

		return pClassPointer;
	};

	unsigned char AbleToBuildOnBase ( class ASanctumTowerBase* TowerBase, int Rubel );
	void PostBeginPlay ( );
};

UClass* ASanctumTowerHologramHolo::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramPenetrator
// 0x000C (0x0210 - 0x0204)
class ASanctumTowerHologramPenetrator : public ASanctumTowerHologramOffensive
{
public:
	class USkelControlLookAt*                          mSkelControlLookAt;                               		// 0x0204 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh1;                                           		// 0x020C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46265 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramPenetrator::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramGauss
// 0x0014 (0x0218 - 0x0204)
class ASanctumTowerHologramGauss : public ASanctumTowerHologramOffensive
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x0204 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh1;                                           		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh2;                                           		// 0x020C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkelControlLookAt*                          mSkelControlLookAt;                               		// 0x0210 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          mSkelControlLookAtUp;                             		// 0x0214 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46266 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramGauss::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramAmpField
// 0x0004 (0x0200 - 0x01FC)
class ASanctumTowerHologramAmpField : public ASanctumTowerHologramField
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x01FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46267 ];

		return pClassPointer;
	};

	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramAmpField::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramKillingFloor
// 0x0004 (0x0200 - 0x01FC)
class ASanctumTowerHologramKillingFloor : public ASanctumTowerHologramField
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x01FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46268 ];

		return pClassPointer;
	};

	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramKillingFloor::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramKairos
// 0x0008 (0x020C - 0x0204)
class ASanctumTowerHologramKairos : public ASanctumTowerHologramOffensive
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x0204 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mMesh1;                                           		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46269 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramKairos::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramAccelerator
// 0x000C (0x0210 - 0x0204)
class ASanctumTowerHologramAccelerator : public ASanctumTowerHologramOffensive
{
public:
	class UStaticMeshComponent*                        mMesh0;                                           		// 0x0204 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkelControlLookAt*                          mSkelControlLookAt;                               		// 0x0208 (0x0004) [0x0000000000000000]              
	class USkelControlLookAt*                          mSkelControlLookAtUp;                             		// 0x020C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46270 ];

		return pClassPointer;
	};

	bool alignWithTower ( class ASanctumTowerBaseAttachmentOffensive* offensive );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerHologramAccelerator::pClassPointer = NULL;

// Class Sanctum.SanctumPlayerInput
// 0x0080 (0x02E0 - 0x0260)
class USanctumPlayerInput : public UPlayerInput
{
public:
	float                                              GamepadSpeed;                                     		// 0x0260 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              WalkSpeed;                                        		// 0x0264 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      TempInvertX : 1;                                  		// 0x0268 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      TempInvertY : 1;                                  		// 0x0268 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              TempMouseSense;                                   		// 0x026C (0x0004) [0x0000000000000000]              
	TArray< struct FTempKeyBind >                      RemovedKeyBindsArray;                             		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTempKeyBind >                      TemporaryBinds;                                   		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  ButtonToBind;                                     		// 0x0288 (0x0004) [0x0000000000000000]              
	struct FString                                     ActionToBind;                                     		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       KeyToBind;                                        		// 0x0298 (0x0008) [0x0000000000000000]              
	TArray< struct FKeyBind >                          FirstControl;                                     		// 0x02A0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FKeyBind >                          SecondControl;                                    		// 0x02AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FKeyBind >                          ThirdControl;                                     		// 0x02B8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mKeyListeners;                                    		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      mPingButton;                                      		// 0x02D0 (0x0001) [0x0000000000000004]              ( CPF_Input )
	struct FScriptDelegate                             __KeyChanged__Delegate;                           		// 0x02D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46274 ];

		return pClassPointer;
	};

	void eventPlayerInput ( float DeltaTime );
	void Save ( );
	void ResetKeybind ( );
	void notifyKeyListeners ( struct FName Key );
	void unregisterKeyListener ( struct FScriptDelegate keyListener );
	void registerKeyListener ( struct FScriptDelegate Listener );
	void KeyChanged ( struct FName newKey );
};

UClass* USanctumPlayerInput::pClassPointer = NULL;

// Class Sanctum.SanctumFamilyInfo
// 0x0028 (0x0064 - 0x003C)
class USanctumFamilyInfo : public UObject
{
public:
	class USkeletalMesh*                               CharacterMesh;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< int >                                      MICIndices;                                       		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             MICColorNames;                                    		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLinearColor >                      SlotColors;                                       		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46280 ];

		return pClassPointer;
	};

	class USkeletalMesh* GetCharacterMesh ( );
	struct FLinearColor GetSlotColor ( int Slot );
};

UClass* USanctumFamilyInfo::pClassPointer = NULL;

// Class Sanctum.SanctumFamilyInfoSkye
// 0x0000 (0x0064 - 0x0064)
class USanctumFamilyInfoSkye : public USanctumFamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46279 ];

		return pClassPointer;
	};

};

UClass* USanctumFamilyInfoSkye::pClassPointer = NULL;

// Class Sanctum.SanctumFamilyInfoHelmedSkye
// 0x0000 (0x0064 - 0x0064)
class USanctumFamilyInfoHelmedSkye : public USanctumFamilyInfoSkye
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46281 ];

		return pClassPointer;
	};

};

UClass* USanctumFamilyInfoHelmedSkye::pClassPointer = NULL;

// Class Sanctum.SanctumVersion
// 0x0010 (0x004C - 0x003C)
class USanctumVersion : public UObject
{
public:
	int                                                MajorVersion;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                MinorVersion;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                TortoiseSVNRevisionNumber;                        		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                P4RevisionNumber;                                 		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46359 ];

		return pClassPointer;
	};

	int GetBuildVersion ( );
	int GetMinorVersion ( );
	int GetMajorVersion ( );
	struct FString GetVersionString ( );
};

UClass* USanctumVersion::pClassPointer = NULL;

// Class Sanctum.SanctumLocalizationHelper
// 0x00F0 (0x012C - 0x003C)
class USanctumLocalizationHelper : public UObject
{
public:
	TArray< struct FLocalizedUIContent >               mLocalizedWidgetStrings;                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedLevelNames;                             		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedPopups;                                 		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedLevelOptions;                           		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedEquipmentScreen;                        		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedBuildHUD;                               		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedActionHUD;                              		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedTeleportHUD;                            		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedInfoStats;                              		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedMenuHeaders;                            		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedWikiScreen;                             		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedLanguage >                mLocalizedLanguages;                              		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedLogMessages;                            		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedStatScreen;                             		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedSettingSwitch;                          		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedOptions;                                		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedLobby;                                  		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedContinueScreen;                         		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedPreview;                                		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLocalizedUIContent >               mLocalizedPopup;                                  		// 0x0120 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46434 ];

		return pClassPointer;
	};

	bool FindIdInArray ( TArray< struct FLocalizedUIContent > idArray, struct FString Id, struct FString* LocalizedName );
	struct FString FindLocalizedName ( struct FString Id );
	void SetLocalizedText ( class UGFxObject* Obj, struct FString Id, struct FString VarName );
	bool HandleLocalizedObject ( class UGFxObject* Widget );
};

UClass* USanctumLocalizationHelper::pClassPointer = NULL;

// Class Sanctum.SanctumCustomInput
// 0x0010 (0x0178 - 0x0168)
class USanctumCustomInput : public UGFxMoviePlayer
{
public:
	TArray< class UGFxObject* >                        Buttons;                                          		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      SelectKeyActive : 1;                              		// 0x0174 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46479 ];

		return pClassPointer;
	};

	void SetButtonNames ( );
	void CallActionFunc ( struct FString KeyName, class UGFxObject* Button );
	void StartBindKey ( class UGFxObject* Button );
	struct FString FindKey ( struct FString Command );
	void Init ( class ULocalPlayer* LocPlay );
};

UClass* USanctumCustomInput::pClassPointer = NULL;

// Class Sanctum.SanctumDamageType
// 0x000C (0x0070 - 0x0064)
class USanctumDamageType : public UDamageType
{
public:
	float                                              mWeakSpotMultiplier;                              		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      mAlwaysGibs : 1;                                  		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mReplicateDamageEffect : 1;                       		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mIsProjectile : 1;                                		// 0x0068 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mShowDamageText : 1;                              		// 0x0068 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              mGibPerterbation;                                 		// 0x006C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46497 ];

		return pClassPointer;
	};

	void SpawnGibEffects ( class ASanctumGib* Gib );
	bool ShouldGib ( class ASanctumPawn* Pawn );
};

UClass* USanctumDamageType::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeTower
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeTower : public USanctumDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46510 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeTower::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeAccelerator
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeAccelerator : public USanctumDamageTypeTower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46512 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeAccelerator::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeAntiAir
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeAntiAir : public USanctumDamageTypeTower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46514 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeAntiAir::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeWeapon
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeWeapon : public USanctumDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46516 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeWeapon::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeAssault
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeAssault : public USanctumDamageTypeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46518 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeAssault::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeCheatManager
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeCheatManager : public USanctumDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46520 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeCheatManager::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeCore
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeCore : public USanctumDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46522 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeCore::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeFreeze
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeFreeze : public USanctumDamageTypeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46524 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeFreeze::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeGatling
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeGatling : public USanctumDamageTypeTower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46526 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeGatling::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeGauss
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeGauss : public USanctumDamageTypeTower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46528 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeGauss::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeGrenade
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeGrenade : public USanctumDamageTypeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46530 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeGrenade::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeKillingFloor
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeKillingFloor : public USanctumDamageTypeTower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46532 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeKillingFloor::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeLightning
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeLightning : public USanctumDamageTypeTower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46534 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeLightning::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeMarker
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeMarker : public USanctumDamageTypeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46536 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeMarker::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeMortar
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeMortar : public USanctumDamageTypeTower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46538 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeMortar::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypePenetrator
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypePenetrator : public USanctumDamageTypeTower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46540 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypePenetrator::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeRocket
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeRocket : public USanctumDamageTypeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46542 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeRocket::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeRocketContainer
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeRocketContainer : public USanctumDamageTypeRocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46544 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeRocketContainer::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeScatterLaser
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeScatterLaser : public USanctumDamageTypeTower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46546 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeScatterLaser::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeShotgun
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeShotgun : public USanctumDamageTypeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46548 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeShotgun::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeShotgunSecondary
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeShotgunSecondary : public USanctumDamageTypeShotgun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46550 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeShotgunSecondary::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeSlow
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeSlow : public USanctumDamageTypeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46552 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeSlow::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeSmallRocket
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeSmallRocket : public USanctumDamageTypeRocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46554 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeSmallRocket::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeSniper
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeSniper : public USanctumDamageTypeWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46556 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeSniper::pClassPointer = NULL;

// Class Sanctum.SanctumDamageTypeSpit
// 0x0000 (0x0070 - 0x0070)
class USanctumDamageTypeSpit : public USanctumDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46558 ];

		return pClassPointer;
	};

};

UClass* USanctumDamageTypeSpit::pClassPointer = NULL;

// Class Sanctum.SanctumOnlineGameSearch
// 0x0000 (0x00F4 - 0x00F4)
class USanctumOnlineGameSearch : public UOnlineGameSearch
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46563 ];

		return pClassPointer;
	};

};

UClass* USanctumOnlineGameSearch::pClassPointer = NULL;

// Class Sanctum.SanctumSettingsCommon
// 0x000C (0x00B8 - 0x00AC)
class USanctumSettingsCommon : public UUDKGameSettingsCommon
{
public:
	struct FString                                     country;                                          		// 0x00AC (0x000C) [0x0000000040400000]              ( CPF_NeedCtorLink | CPF_EditInlineNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46564 ];

		return pClassPointer;
	};

	void UpdateFromURL ( class AGameInfo* Game, struct FString* URL );
};

UClass* USanctumSettingsCommon::pClassPointer = NULL;

// Class Sanctum.SanctumUIDataProvider_SearchResult
// 0x0000 (0x0094 - 0x0094)
class USanctumUIDataProvider_SearchResult : public UUDKUIDataProvider_SearchResult
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46565 ];

		return pClassPointer;
	};

};

UClass* USanctumUIDataProvider_SearchResult::pClassPointer = NULL;

// Class Sanctum.SanctumEmitter
// 0x0000 (0x01D4 - 0x01D4)
class ASanctumEmitter : public AEmitter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46566 ];

		return pClassPointer;
	};

	void SetLightEnvironment ( class ULightEnvironmentComponent* Light );
	void eventSetTemplate ( class UParticleSystem* NewTemplate, unsigned long bDestroyOnFinish );
	class UParticleSystem* GetTemplateForDistance ( struct FVector SpawnLocation, class AWorldInfo* WI, TArray< struct FDistanceBasedParticleTemplate >* TemplateList );
};

UClass* ASanctumEmitter::pClassPointer = NULL;

// Class Sanctum.SanctumReplicatedEmitter
// 0x0008 (0x01DC - 0x01D4)
class ASanctumReplicatedEmitter : public ASanctumEmitter
{
public:
	class UParticleSystem*                             EmitterTemplate;                                  		// 0x01D4 (0x0004) [0x0000000000000000]              
	float                                              ServerLifeSpan;                                   		// 0x01D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46585 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ASanctumReplicatedEmitter::pClassPointer = NULL;

// Class Sanctum.SanctumEmit_Teleport
// 0x0008 (0x01E4 - 0x01DC)
class ASanctumEmit_Teleport : public ASanctumReplicatedEmitter
{
public:
	float                                              TLTrailKillWindow;                                		// 0x01DC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             FirstPersonTemplate;                              		// 0x01E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46591 ];

		return pClassPointer;
	};

	void Timer ( );
	void PostBeginPlay ( );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
};

UClass* ASanctumEmit_Teleport::pClassPointer = NULL;

// Class Sanctum.SanctumEmitterPool
// 0x0004 (0x0224 - 0x0220)
class ASanctumEmitterPool : public AEmitterPool
{
public:
	class ASanctumPathingEmitterPool*                  mPathingEmitterPool;                              		// 0x0220 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46612 ];

		return pClassPointer;
	};

	void ClearPathingPool ( );
	class UParticleSystemComponent* SpawnPathingEmitter ( class UParticleSystem* EmitterTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* AttachToActor, class AActor* InInstigator, int MaxDLEPooledReuses, unsigned long bInheritScaleFromBase );
	void PreBeginPlay ( );
};

UClass* ASanctumEmitterPool::pClassPointer = NULL;

// Class Sanctum.SanctumPathingEmitterPool
// 0x0000 (0x0220 - 0x0220)
class ASanctumPathingEmitterPool : public AEmitterPool
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46614 ];

		return pClassPointer;
	};

};

UClass* ASanctumPathingEmitterPool::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileSlow
// 0x0034 (0x02A8 - 0x0274)
class ASanctumProjectileSlow : public ASanctumProjectile
{
public:
	float                                              cSlowTime;                                        		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cSlowFactor;                                      		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cSpeedReductionFactor;                            		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDiminishFactor;                                  		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mStuck : 1;                                       		// 0x0284 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mUnusable : 1;                                    		// 0x0284 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     mHitNormal;                                       		// 0x0288 (0x000C) [0x0000000000000000]              
	class ASanctumEnemy*                               mEnemyStuck;                                      		// 0x0294 (0x0004) [0x0000000000000000]              
	class ASanctumEnemy*                               mTargetEnemy;                                     		// 0x0298 (0x0004) [0x0000000000000000]              
	TArray< class ASanctumEnemy* >                     mAffectedEnemies;                                 		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46668 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void RevertSlow ( );
	void SlowedDied ( class ASanctumEnemy* Enemy );
	void eventTick ( float Delta );
	void RemoveFromAffected ( class ASanctumEnemy* Enemy );
	void AddToAffected ( class ASanctumEnemy* Enemy );
	void stickProjectile ( struct FVector NewLocation );
	void ProcessTouch ( class AActor* Other, struct FVector NewLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void eventPostBeginPlay ( );
};

UClass* ASanctumProjectileSlow::pClassPointer = NULL;

// Class Sanctum.SanctumPhysicalMaterialProperty
// 0x0008 (0x0044 - 0x003C)
class USanctumPhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       MaterialType;                                     		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46790 ];

		return pClassPointer;
	};

};

UClass* USanctumPhysicalMaterialProperty::pClassPointer = NULL;

// Class Sanctum.SanctumHealthbar
// 0x0030 (0x01F8 - 0x01C8)
class ASanctumHealthbar : public AActor
{
public:
	class UStaticMeshComponent*                        mMesh;                                            		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mDamageMesh;                                      		// 0x01CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mCurrentPercent;                                  		// 0x01D0 (0x0004) [0x0000000000000000]              
	float                                              mAnimationTime;                                   		// 0x01D4 (0x0004) [0x0000000000000000]              
	float                                              mDamagePercent;                                   		// 0x01D8 (0x0004) [0x0000000000000000]              
	float                                              mHealthDiff;                                      		// 0x01DC (0x0004) [0x0000000000000000]              
	float                                              mWidth;                                           		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              mHeight;                                          		// 0x01E4 (0x0004) [0x0000000000000000]              
	unsigned long                                      mEnabled : 1;                                     		// 0x01E8 (0x0004) [0x0000000000000000] [0x00000001] 
	class ASanctumPlayer*                              mSkye;                                            		// 0x01EC (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   mMaterial;                                        		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   mDamageMaterial;                                  		// 0x01F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46856 ];

		return pClassPointer;
	};

	void SetHealthPercent ( float healthPercent );
	void SetSize ( float Width, float Height );
	void UpdateDamagebar ( float DeltaTime );
	void eventTick ( float DeltaTime );
	void SetEnabled ( unsigned long Enabled );
	void PostBeginPlay ( );
};

UClass* ASanctumHealthbar::pClassPointer = NULL;

// Class Sanctum.SanctumGameInfoNormalSPAuto
// 0x0000 (0x0434 - 0x0434)
class ASanctumGameInfoNormalSPAuto : public ASanctumGameInfoNormal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46902 ];

		return pClassPointer;
	};

};

UClass* ASanctumGameInfoNormalSPAuto::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeapon
// 0x00C0 (0x0288 - 0x01C8)
class ASanctumTowerBaseAttachmentWeapon : public AActor
{
public:
	TArray< float >                                    cCoolDownTime;                                    		// 0x01C8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      cDamage;                                          		// 0x01D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cRange;                                           		// 0x01E0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cAirRange;                                        		// 0x01EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cMinRange;                                        		// 0x01F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       cParticleTarget;                                  		// 0x0204 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              cAimingSpeed;                                     		// 0x020C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cShootingAngle;                                   		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                cCreateHitEffectEveryNumShots;                    		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cScoreMultiplierToAdd;                            		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cScoreMultiplierCap;                              		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       cTracerColorParameter;                            		// 0x0220 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             mTracerTemplate;                                  		// 0x0228 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             mMissHitEffect;                                   		// 0x022C (0x0004) [0x0000000000000000]              
	unsigned long                                      mShouldPlayFireSound : 1;                         		// 0x0230 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mShouldCauseMuzzleLight : 1;                      		// 0x0230 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mCoolDowned : 1;                                  		// 0x0230 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mFireing : 1;                                     		// 0x0230 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      mDidFireThisActionPhase : 1;                      		// 0x0230 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mDebug : 1;                                       		// 0x0230 (0x0004) [0x0000000000000000] [0x00000020] 
	class UParticleSystem*                             mHitEffect;                                       		// 0x0234 (0x0004) [0x0000000000000000]              
	float                                              mCurrentAngleFromTarget;                          		// 0x0238 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             mMuzzles;                                         		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUDKExplosionLight*                          mMuzzleFlashLight;                                		// 0x0248 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class UParticleSystemComponent* >          mMuzzleFlashPSC;                                  		// 0x024C (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UClass*                                      mMuzzleFlashLightClass;                           		// 0x0258 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             mMuzzleFlashPSCTemplate;                          		// 0x025C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   mFireSound;                                       		// 0x0260 (0x0004) [0x0000000000000000]              
	float                                              mCoolingDownTimer;                                		// 0x0264 (0x0004) [0x0000000000000000]              
	struct FVector                                     mAimingAt;                                        		// 0x0268 (0x000C) [0x0000000000000020]              ( CPF_Net )
	int                                                mLevel;                                           		// 0x0274 (0x0004) [0x0000000000000000]              
	class UClass*                                      mDamageType;                                      		// 0x0278 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mCurrentMuzzle;                                   		// 0x027C (0x0004) [0x0000000000000000]              
	class ASanctumTowerBaseAttachmentOffensive*        mParent;                                          		// 0x0280 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mShotsFired;                                      		// 0x0284 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47040 ];

		return pClassPointer;
	};

	void EndFire ( );
	void BeginFire ( );
	void aimAt ( struct FVector aimAt );
	void CauseMuzzleFlash ( struct FVector From );
	void spawnMuzzleFlash ( struct FVector FlashLocation );
	void spawnTracer ( struct FVector From, struct FVector to );
	void upgradeToLevel ( int NewLevel );
	bool PreFire ( );
	struct FVector InstantFire ( struct FVector traceDirection, struct FVector fireLocation );
	void SpawnHoloEffects ( TArray< struct FImpactInfo >* impactInfos );
	class AActor* BulletTrace ( struct FVector fromLoction, struct FVector toLocation, struct FVector* out_HitLocation, struct FVector* out_HitNormal, struct FTraceHitInfo* out_hitInfo, float* out_damageMultiplier, TArray< struct FImpactInfo >* out_holoImpactInfo );
	void spawnHitEffect ( struct FVector HitLocation );
	bool ResetTowerFired ( );
	void PlayFireSound ( struct FVector fireLocation );
	bool CanShootAir ( );
	bool canShootGround ( );
	struct FVector getFireLocation ( );
	void eventTick ( float Delta );
	void SetNewCooldown ( );
	float GetAirRange ( );
	float GetMinRange ( );
	float GetRange ( );
	void CauseMuzzleEffect ( int muzzleNum );
	void SetParent ( class ASanctumTowerBaseAttachmentOffensive* Parent );
	bool EffectIsRelevant ( struct FVector SpawnLocation, unsigned long bForceDedicated, float VisibleCullDistance, float HiddenCullDistance );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumTowerBaseAttachmentWeapon::pClassPointer = NULL;

// Class Sanctum.SanctumGibArmadillo
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibArmadillo : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47217 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibArmadillo::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupArmadillo
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupArmadillo : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47218 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupArmadillo::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyArmoured
// 0x0030 (0x0864 - 0x0834)
class ASanctumEnemyArmoured : public ASanctumEnemy
{
public:
	float                                              cEndlessMultiplier;                               		// 0x0834 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             cAdditionalHitEffect;                             		// 0x0838 (0x0004) [0x0000000000000000]              
	class UCylinderComponent*                          mCylinderNeck;                                    		// 0x083C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mCylinderHead;                                    		// 0x0840 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                cDisableThreshold;                                		// 0x0844 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDisableLength;                                   		// 0x0848 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mWeakSpotHit : 1;                                 		// 0x084C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                mAccumulatedWeakspotDamage;                       		// 0x0850 (0x0004) [0x0000000000000000]              
	unsigned char                                      mTookCriticalHit;                                 		// 0x0854 (0x0001) [0x0000000000000020]              ( CPF_Net )
	float                                              mOldArmourReduction;                              		// 0x0858 (0x0004) [0x0000000000000000]              
	float                                              mCurrentGlowScale;                                		// 0x085C (0x0004) [0x0000000000000000]              
	float                                              mRealGlow;                                        		// 0x0860 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47219 ];

		return pClassPointer;
	};

	void SetGlowScale ( float Scale );
	bool IsImmune ( struct FVector HitLocation, struct FVector Momentum, struct FTraceHitInfo HitInfo, int Damage, class UClass* DamageType, class AActor* DamageCauser );
	void SetEndlessData ( int totalWaves, int waveNr, unsigned long isSpGame, float TotalResources, float Difficulty );
	void TookThreshholdHit ( );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool WeakSpotHit ( struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType );
	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void DisableShield ( );
	void EnableShield ( );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumEnemyArmoured::pClassPointer = NULL;

// Class Sanctum.SanctumGibArmoured
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibArmoured : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47300 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibArmoured::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupArmoured
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupArmoured : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47301 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupArmoured::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyBaman
// 0x0010 (0x0848 - 0x0838)
class ASanctumEnemyBaman : public ASanctumEnemyFlying
{
public:
	class UCylinderComponent*                          headCylinder;                                     		// 0x0838 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          bodyCylinder;                                     		// 0x083C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          tail1Cylinder;                                    		// 0x0840 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          tail2Cylinder;                                    		// 0x0844 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47308 ];

		return pClassPointer;
	};

	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemyBaman::pClassPointer = NULL;

// Class Sanctum.SanctumGibBaman
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibBaman : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47328 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibBaman::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupBaman
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupBaman : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47329 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupBaman::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyBobbleHead
// 0x0010 (0x0844 - 0x0834)
class ASanctumEnemyBobbleHead : public ASanctumEnemy
{
public:
	class UCylinderComponent*                          mSpineComp;                                       		// 0x0834 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mHipComp;                                         		// 0x0838 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mNeckComp;                                        		// 0x083C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mHeadComp;                                        		// 0x0840 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47330 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent );
	bool IsImmune ( struct FVector HitLocation, struct FVector Momentum, struct FTraceHitInfo HitInfo, int Damage, class UClass* DamageType, class AActor* DamageCauser );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemyBobbleHead::pClassPointer = NULL;

// Class Sanctum.SanctumGibBobblehead
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibBobblehead : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47387 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibBobblehead::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupBobbleHead
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupBobbleHead : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47388 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupBobbleHead::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyCharger
// 0x0048 (0x087C - 0x0834)
class ASanctumEnemyCharger : public ASanctumEnemy
{
public:
	float                                              cSlowDownAngle;                                   		// 0x0834 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTimeToCheck;                                     		// 0x0838 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cRetardRate;                                      		// 0x083C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMinSpeed;                                        		// 0x0840 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cAccelRate;                                       		// 0x0844 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCylinderComponent*                          mCylinderNeck;                                    		// 0x0848 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mLeftKnee;                                        		// 0x084C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mRightKnee;                                       		// 0x0850 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mMaxSpeed;                                        		// 0x0854 (0x0004) [0x0000000000000000]              
	TArray< struct FVector >                           mPreviousDirections;                              		// 0x0858 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    mPreviousDelta;                                   		// 0x0864 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mSumOfAngles;                                     		// 0x0870 (0x0004) [0x0000000000000000]              
	float                                              mSumOfDeltas;                                     		// 0x0874 (0x0004) [0x0000000000000000]              
	unsigned long                                      mSlowingDown : 1;                                 		// 0x0878 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47389 ];

		return pClassPointer;
	};

	void eventTick ( float Delta );
	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	float GetSpeedForStuckCheck ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemyCharger::pClassPointer = NULL;

// Class Sanctum.SanctumGibCharger
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibCharger : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47429 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibCharger::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupCharger
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupCharger : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47430 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupCharger::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyDebuffer
// 0x0024 (0x0858 - 0x0834)
class ASanctumEnemyDebuffer : public ASanctumEnemy
{
public:
	float                                              cAdditionalDamageRate;                            		// 0x0834 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cEnlargeHits;                                     		// 0x0838 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cEnlargeSpeed;                                    		// 0x083C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMaxRadius;                                       		// 0x0840 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMaxHeight;                                       		// 0x0844 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCylinderComponent*                          mCylinderComp;                                    		// 0x0848 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mCurrentAdditionalDamage;                         		// 0x084C (0x0004) [0x0000000000000000]              
	unsigned char                                      mCurrentBlendingScale[ 0x2 ];                     		// 0x0850 (0x0002) [0x0000000000000020]              ( CPF_Net )
	class UAnimNodeBlend*                              mBlendBall;                                       		// 0x0854 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47431 ];

		return pClassPointer;
	};

	void AdditionalDamageChanged ( float BlendScale );
	float calculateBlendScale ( float AdditionalHits );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventTick ( float DeltaTime );
	void eventPostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
};

UClass* ASanctumEnemyDebuffer::pClassPointer = NULL;

// Class Sanctum.SanctumGibDebuffer
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibDebuffer : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47476 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibDebuffer::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupDebuffer
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupDebuffer : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47477 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupDebuffer::pClassPointer = NULL;

// Class Sanctum.SanctumGibDodger
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibDodger : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47500 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibDodger::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupDodger
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupDodger : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47501 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupDodger::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyEngineer
// 0x0000 (0x0834 - 0x0834)
class ASanctumEnemyEngineer : public ASanctumEnemy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47502 ];

		return pClassPointer;
	};

};

UClass* ASanctumEnemyEngineer::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyHover
// 0x0014 (0x0848 - 0x0834)
class ASanctumEnemyHover : public ASanctumEnemy
{
public:
	float                                              cHitAngle;                                        		// 0x0834 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCylinderComponent*                          mBodyComp;                                        		// 0x0838 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mHeadComp;                                        		// 0x083C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mSpineComp;                                       		// 0x0840 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mTailComp;                                        		// 0x0844 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47508 ];

		return pClassPointer;
	};

	bool IsImmune ( struct FVector HitLocation, struct FVector Momentum, struct FTraceHitInfo HitInfo, int Damage, class UClass* DamageType, class AActor* DamageCauser );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool HitDummyCylinder ( struct FTraceHitInfo HitInfo );
	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemyHover::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileFreeze
// 0x0010 (0x0284 - 0x0274)
class ASanctumProjectileFreeze : public ASanctumProjectile
{
public:
	float                                              mFreezeTime;                                      		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDamageRadiusAir;                                 		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDiminishFactor;                                  		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDiminishTime;                                    		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47536 ];

		return pClassPointer;
	};

	void eventTakeDamage ( int DamageTaken, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void CheckAchievement ( class ASanctumEnemy* Enemy );
	void slowEnemies ( );
	void eventPostBeginPlay ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
};

UClass* ASanctumProjectileFreeze::pClassPointer = NULL;

// Class Sanctum.SanctumGibHover
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibHover : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47556 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibHover::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupHover
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupHover : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47557 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupHover::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileSpit
// 0x0020 (0x0294 - 0x0274)
class ASanctumProjectileSpit : public ASanctumProjectile
{
public:
	class ASanctumPlayer*                              mTargetPlayer;                                    		// 0x0274 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              cLifeSpan;                                        		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cKnockBackScale;                                  		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeedStart;                                  		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeedBest;                                   		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeedImprovmentFactor;                       		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cAccelRate;                                       		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCurrentTurnSpeed;                                		// 0x0290 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47604 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventTakeDamage ( int DamageTaken, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void eventDestroyed ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventTick ( float Delta );
	void HitAnEnemy ( );
	void Launch ( struct FVector Direction, class ASanctumPlayer* Target );
	void Init ( struct FVector Direction );
	void eventPostBeginPlay ( );
};

UClass* ASanctumProjectileSpit::pClassPointer = NULL;

// Class Sanctum.SanctumEnemySpitter
// 0x0054 (0x0888 - 0x0834)
class ASanctumEnemySpitter : public ASanctumEnemy
{
public:
	class ASanctumProjectileSpit*                      cSpitArchetype;                                   		// 0x0834 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mNumberOfHits;                                    		// 0x0838 (0x0004) [0x0000000000000000]              
	float                                              cSpitTimeInterval;                                		// 0x083C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cSpitRandomTimeMax;                               		// 0x0840 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       cSpitLocationBone;                                		// 0x0844 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   mSpitSound;                                       		// 0x084C (0x0004) [0x0000000000000000]              
	unsigned long                                      mReadyToSpit : 1;                                 		// 0x0850 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	class UAnimNodeSlot*                               mAnimNodeSlot;                                    		// 0x0854 (0x0004) [0x0000000000000000]              
	class UCylinderComponent*                          mCylinderBody;                                    		// 0x0858 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mCylinderHead;                                    		// 0x085C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mCylinderNeck;                                    		// 0x0860 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCylinderComponent*                          mCylinderSack;                                    		// 0x0864 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       mBodyBone;                                        		// 0x0868 (0x0008) [0x0000000000000000]              
	struct FName                                       mHeadBone;                                        		// 0x0870 (0x0008) [0x0000000000000000]              
	struct FName                                       mNeckBone;                                        		// 0x0878 (0x0008) [0x0000000000000000]              
	struct FName                                       mSackBone;                                        		// 0x0880 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47650 ];

		return pClassPointer;
	};

	void eventSpitNotification ( );
	void eventWalkCycleEnd ( );
	void Spit ( );
	void PreSpit ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemySpitter::pClassPointer = NULL;

// Class Sanctum.SanctumGibSpitter
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibSpitter : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47701 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibSpitter::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupSpitter
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupSpitter : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47702 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupSpitter::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyIsraphel
// 0x0004 (0x088C - 0x0888)
class ASanctumEnemyIsraphel : public ASanctumEnemySpitter
{
public:
	class USkelControlLookAt*                          mLookAtController;                                		// 0x0888 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47709 ];

		return pClassPointer;
	};

	void eventFireEnded ( );
	void eventWalkCycleEnd ( );
	void eventTick ( float DeltaTime );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelMesh );
	void ActivateEvent ( class UClass* eventToActivate );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemyIsraphel::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_IsraphelSpawned
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_IsraphelSpawned : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47712 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_IsraphelSpawned::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupIsraphel
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupIsraphel : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47737 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupIsraphel::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyRunner
// 0x0004 (0x0838 - 0x0834)
class ASanctumEnemyRunner : public ASanctumEnemy
{
public:
	unsigned long                                      mIsKittie : 1;                                    		// 0x0834 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47738 ];

		return pClassPointer;
	};

	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void SwitchMesh ( );
	void PostBeginPlay ( );
};

UClass* ASanctumEnemyRunner::pClassPointer = NULL;

// Class Sanctum.SanctumGibRunner
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibRunner : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47765 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibRunner::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupRunner
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupRunner : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47766 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupRunner::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyKittie
// 0x0000 (0x0838 - 0x0838)
class ASanctumEnemyKittie : public ASanctumEnemyRunner
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47774 ];

		return pClassPointer;
	};

};

UClass* ASanctumEnemyKittie::pClassPointer = NULL;

// Class Sanctum.SanctumEnemySpawner
// 0x0028 (0x01F0 - 0x01C8)
class ASanctumEnemySpawner : public AActor
{
public:
	int                                                mSpawnedEnemies;                                  		// 0x01C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mFinished : 1;                                    		// 0x01CC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mEndlessMode : 1;                                 		// 0x01CC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mIsSpGame : 1;                                    		// 0x01CC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mDebug : 1;                                       		// 0x01CC (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              mResourceMod;                                     		// 0x01D0 (0x0004) [0x0000000000000000]              
	struct FEnemyConfig                                mConfig;                                          		// 0x01D4 (0x001C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47780 ];

		return pClassPointer;
	};

	bool isFinished ( );
	void spawnEnemy ( );
	void setEnemyConfig ( struct FEnemyConfig EnemyConfig );
	void Clear ( );
	void setEndlessMode ( unsigned long endless, unsigned long isSpGame, float resourceMod );
	void startWave ( );
};

UClass* ASanctumEnemySpawner::pClassPointer = NULL;

// Class Sanctum.SanctumSpawner
// 0x0020 (0x01E8 - 0x01C8)
class ASanctumSpawner : public AActor
{
public:
	int                                                mCurrentWave;                                     		// 0x01C8 (0x0004) [0x0000000000000000]              
	TArray< class ASanctumSpawnLocation* >             mSpawnLocations;                                  		// 0x01CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      mFinished : 1;                                    		// 0x01D8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mDebug : 1;                                       		// 0x01D8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	TArray< struct FString >                           mIncomingEnemies;                                 		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47783 ];

		return pClassPointer;
	};

	void giveReward ( int Wave );
	void waveComplete ( );
	void startWave ( int Wave );
	bool isFinished ( );
	class ASanctumSpawnLocation* findLocation ( int Id );
	void PlanWave ( int Wave );
	void laneComplete ( class ASanctumSpawnLocation* Loc );
	class ASanctumSpawnLocation* findLane ( TArray< class ASanctumSpawnLocation* > locations, int Id );
	void setCurrentWave ( int currentWave );
	void eventPreBeginPlay ( );
};

UClass* ASanctumSpawner::pClassPointer = NULL;

// Class Sanctum.SanctumWaveSpawner
// 0x000C (0x01F4 - 0x01E8)
class ASanctumWaveSpawner : public ASanctumSpawner
{
public:
	TArray< struct FWaveConfig >                       mWaves;                                           		// 0x01E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47782 ];

		return pClassPointer;
	};

	void giveReward ( int Wave );
	void waveComplete ( );
	void startWave ( int Wave );
	void PlanWave ( int Wave );
	void eventPostBeginPlay ( );
};

UClass* ASanctumWaveSpawner::pClassPointer = NULL;

// Class Sanctum.SanctumSpawnLocation
// 0x0040 (0x02E0 - 0x02A0)
class ASanctumSpawnLocation : public APathNode
{
public:
	int                                                Mid;                                              		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mCurrentEnemyConfig;                              		// 0x02A4 (0x0004) [0x0000000000000000]              
	struct FWaveConfig                                 mWaveConfig;                                      		// 0x02A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASanctumEnemySpawner* >              mSpawners;                                        		// 0x02B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      mFinished : 1;                                    		// 0x02C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mRunning : 1;                                     		// 0x02C0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mDebug : 1;                                       		// 0x02C0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mEndlessMode : 1;                                 		// 0x02C0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mIsSpGame : 1;                                    		// 0x02C0 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              mResourceMod;                                     		// 0x02C4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             mCompleteCallback;                                		// 0x02C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __CompleteDelegate__Delegate;                     		// 0x02D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47794 ];

		return pClassPointer;
	};

	void setFinishedCallback ( struct FScriptDelegate CompleteDelegate );
	void eventDestroyed ( );
	void spawnerFinished ( class ASanctumEnemySpawner* Spawner );
	bool isFinished ( );
	void startWave ( );
	void addEnemyConfig ( struct FEnemyConfig enemyConf );
	void setEndlessMode ( unsigned long endless, unsigned long isSpGame, float resourceMod );
	void clearEnemies ( );
	void CompleteDelegate ( class ASanctumSpawnLocation* Loc );
};

UClass* ASanctumSpawnLocation::pClassPointer = NULL;

// Class Sanctum.SanctumSpawnLocationAir
// 0x0000 (0x02E0 - 0x02E0)
class ASanctumSpawnLocationAir : public ASanctumSpawnLocation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47816 ];

		return pClassPointer;
	};

};

UClass* ASanctumSpawnLocationAir::pClassPointer = NULL;

// Class Sanctum.SanctumEnemySporePod
// 0x0004 (0x083C - 0x0838)
class ASanctumEnemySporePod : public ASanctumEnemyFlying
{
public:
	class UCylinderComponent*                          mMainBody;                                        		// 0x0838 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47820 ];

		return pClassPointer;
	};

	void SetWeakbonesScale ( float NewScale );
	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemySporePod::pClassPointer = NULL;

// Class Sanctum.SanctumGibSporePod
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibSporePod : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47836 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibSporePod::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupSporePod
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupSporePod : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47837 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupSporePod::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyWalker
// 0x000C (0x0840 - 0x0834)
class ASanctumEnemyWalker : public ASanctumEnemy
{
public:
	class UStaticMeshComponent*                        mXmasHat;                                         		// 0x0834 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mChristmasChance;                                 		// 0x0838 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      mIsChristmasEnemy : 1;                            		// 0x083C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47838 ];

		return pClassPointer;
	};

	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void SpawnGibs ( class UClass* sanctumDamageTypeClass, struct FVector HitLocation );
	bool ShouldDropChristmasPresent ( );
	bool ShouldBeChristmasEnemy ( );
	void AttachChristmas ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumEnemyWalker::pClassPointer = NULL;

// Class Sanctum.SanctumGibWalker
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibWalker : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47865 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibWalker::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupWalker
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupWalker : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47866 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupWalker::pClassPointer = NULL;

// Class Sanctum.SanctumEnemyWalkerBig
// 0x0004 (0x0838 - 0x0834)
class ASanctumEnemyWalkerBig : public ASanctumEnemy
{
public:
	class UCylinderComponent*                          mBodyComp;                                        		// 0x0834 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47867 ];

		return pClassPointer;
	};

	void PlayerKilledEnemyStats ( class ASanctumPlayerReplicationInfo* PRI );
	void TowerKilledEnemyStats ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumEnemyWalkerBig::pClassPointer = NULL;

// Class Sanctum.SanctumGibWalkerBig
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibWalkerBig : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47882 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibWalkerBig::pClassPointer = NULL;

// Class Sanctum.SanctumRubelAlgorithm
// 0x0008 (0x0044 - 0x003C)
class USanctumRubelAlgorithm : public UObject
{
public:
	int                                                mRubelGain;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                mInitialRubels;                                   		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47934 ];

		return pClassPointer;
	};

	int GetRubelForKilledEnemy ( int Wave, class ASanctumEnemy* killedEnemy, unsigned long turboMode );
	int GetRubelAmountAfterWave ( int Wave, unsigned long turboMode );
	int GetInitialRubel ( struct FString MapName, unsigned long turboMode );
	void Init ( struct FString MapName, unsigned long turboMode );
};

UClass* USanctumRubelAlgorithm::pClassPointer = NULL;

// Class Sanctum.SanctumRubelAlgorithmClassic
// 0x0000 (0x0044 - 0x0044)
class USanctumRubelAlgorithmClassic : public USanctumRubelAlgorithm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47988 ];

		return pClassPointer;
	};

	int GetRubelForKilledEnemy ( int Wave, class ASanctumEnemy* killedEnemy, unsigned long turboMode );
	int GetRubelAmountAfterWave ( int Wave, unsigned long turboMode );
	int GetInitialRubel ( struct FString MapName, unsigned long turboMode );
	void Init ( struct FString MapName, unsigned long turboMode );
};

UClass* USanctumRubelAlgorithmClassic::pClassPointer = NULL;

// Class Sanctum.SanctumRubelAlgorithmOnslaught
// 0x0000 (0x0044 - 0x0044)
class USanctumRubelAlgorithmOnslaught : public USanctumRubelAlgorithm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47989 ];

		return pClassPointer;
	};

	int GetRubelForKilledEnemy ( int Wave, class ASanctumEnemy* killedEnemy, unsigned long turboMode );
	int GetRubelAmountAfterWave ( int Wave, unsigned long turboMode );
	int GetInitialRubel ( struct FString MapName, unsigned long turboMode );
	void Init ( struct FString MapName, unsigned long turboMode );
};

UClass* USanctumRubelAlgorithmOnslaught::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_StartGame
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_StartGame : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 47990 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void notifyStartGame ( float Diff, unsigned long turbo, class AActor* FromActor );
	void eventActivated ( );
};

UClass* USanctumSeqEvent_StartGame::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessage
// 0x0000 (0x0050 - 0x0050)
class USanctumLocalMessage : public ULocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48073 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessage::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessageHeavyWave
// 0x0000 (0x0050 - 0x0050)
class USanctumLocalMessageHeavyWave : public USanctumLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48072 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessageHeavyWave::pClassPointer = NULL;

// Class Sanctum.SanctumMonkeyCage
// 0x0000 (0x01C8 - 0x01C8)
class ASanctumMonkeyCage : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48139 ];

		return pClassPointer;
	};

};

UClass* ASanctumMonkeyCage::pClassPointer = NULL;

// Class Sanctum.SanctumGameInfoEndlessLimited
// 0x0000 (0x0430 - 0x0430)
class ASanctumGameInfoEndlessLimited : public ASanctumGameInfoEndless
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48187 ];

		return pClassPointer;
	};

	void ActivateLevelCompleteScene ( );
	void eventToggleLevelCompleteEvent ( );
	void eventPostBeginPlay ( );
	int GetGameModeInt ( );
	struct FString difficultyToString ( unsigned char Difficulty );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	bool isWavesLeft ( );
};

UClass* ASanctumGameInfoEndlessLimited::pClassPointer = NULL;

// Class Sanctum.SanctumGameMessage
// 0x0100 (0x0264 - 0x0164)
class USanctumGameMessage : public UGameMessage
{
public:
	struct FString                                     Checkpoint;                                       		// 0x0164 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotEnoughCash;                                    		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BlockingPath;                                     		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MaxUpgradedTower;                                 		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PlayerOnBase;                                     		// 0x0194 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MaxUpgradedWeapon;                                		// 0x01A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BLOCKONBLOCK;                                     		// 0x01AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BLOCKREQUIRED;                                    		// 0x01B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CANTUPGRADE;                                      		// 0x01C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     FIELDONBLOCK;                                     		// 0x01D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReadyMessagePrefix;                               		// 0x01DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReadyMessagePostfix;                              		// 0x01E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UnReadyMessagePrefix;                             		// 0x01F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UnReadyMessagePostfix;                            		// 0x0200 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NOAIM;                                            		// 0x020C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CheatDetected;                                    		// 0x0218 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KickPlayerPrefix;                                 		// 0x0224 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KickPlayerMiddle;                                 		// 0x0230 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     KickPlayerPostfix;                                		// 0x023C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NotChosen;                                        		// 0x0248 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CantSellPrebuilt;                                 		// 0x0254 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FColor                                      Red;                                              		// 0x0260 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48230 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumGameMessage::pClassPointer = NULL;

// Class Sanctum.SanctumOnlineLeaderboardWrite
// 0x0000 (0x0088 - 0x0088)
class USanctumOnlineLeaderboardWrite : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48280 ];

		return pClassPointer;
	};

};

UClass* USanctumOnlineLeaderboardWrite::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_StartGameEndless
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_StartGameEndless : public USanctumSeqEvent_StartGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48336 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* USanctumSeqEvent_StartGameEndless::pClassPointer = NULL;

// Class Sanctum.SanctumRubelAlgorithmEndless
// 0x0000 (0x0044 - 0x0044)
class USanctumRubelAlgorithmEndless : public USanctumRubelAlgorithm
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48337 ];

		return pClassPointer;
	};

	int GetRubelAmountAfterWave ( int Wave, unsigned long turboMode );
	int GetInitialRubel ( struct FString MapName, unsigned long turboMode );
	void Init ( struct FString MapName, unsigned long turboMode );
};

UClass* USanctumRubelAlgorithmEndless::pClassPointer = NULL;

// Class Sanctum.SanctumSettingsEndless
// 0x0000 (0x00B8 - 0x00B8)
class USanctumSettingsEndless : public USanctumSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48338 ];

		return pClassPointer;
	};

};

UClass* USanctumSettingsEndless::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_LevelComplete
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_LevelComplete : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48356 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_LevelComplete::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_StartGameEndlessLimited
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_StartGameEndlessLimited : public USanctumSeqEvent_StartGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48358 ];

		return pClassPointer;
	};

};

UClass* USanctumSeqEvent_StartGameEndlessLimited::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_StartCameraPan
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_StartCameraPan : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48389 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_StartCameraPan::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_CameraPanWasSkipped
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_CameraPanWasSkipped : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48394 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_CameraPanWasSkipped::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessageSave
// 0x0018 (0x0068 - 0x0050)
class USanctumLocalMessageSave : public USanctumLocalMessage
{
public:
	struct FString                                     SavingIn;                                         		// 0x0050 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Saved;                                            		// 0x005C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48407 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessageSave::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_StartGameNormal
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_StartGameNormal : public USanctumSeqEvent_StartGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48428 ];

		return pClassPointer;
	};

};

UClass* USanctumSeqEvent_StartGameNormal::pClassPointer = NULL;

// Class Sanctum.SanctumRubelAlgorithmNormal
// 0x0000 (0x0044 - 0x0044)
class USanctumRubelAlgorithmNormal : public USanctumRubelAlgorithm
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

	int GetRubelAmountAfterWave ( int Wave, unsigned long turboMode );
	int GetInitialRubel ( struct FString MapName, unsigned long turboMode );
	void Init ( struct FString MapName, unsigned long turboMode );
};

UClass* USanctumRubelAlgorithmNormal::pClassPointer = NULL;

// Class Sanctum.SanctumSettingsNormal
// 0x0000 (0x00B8 - 0x00B8)
class USanctumSettingsNormal : public USanctumSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48430 ];

		return pClassPointer;
	};

};

UClass* USanctumSettingsNormal::pClassPointer = NULL;

// Class Sanctum.SanctumWikiObject
// 0x0024 (0x0060 - 0x003C)
class USanctumWikiObject : public UObject
{
public:
	TArray< struct FWikiListCreatures >                Creatures;                                        		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FWikiList >                         Towers;                                           		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FWikiList >                         Weapons;                                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48544 ];

		return pClassPointer;
	};

	int LookupEnemyId ( struct FString EnemyName );
};

UClass* USanctumWikiObject::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_LifeChanged
// 0x0004 (0x0118 - 0x0114)
class USanctumSeqEvent_LifeChanged : public USequenceEvent
{
public:
	int                                                life;                                             		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48610 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_LifeChanged::pClassPointer = NULL;

// Class Sanctum.SanctumGibSkeletalMeshComponent
// 0x0000 (0x0604 - 0x0604)
class USanctumGibSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48712 ];

		return pClassPointer;
	};

};

UClass* USanctumGibSkeletalMeshComponent::pClassPointer = NULL;

// Class Sanctum.SanctumGibIsraphel
// 0x0000 (0x0230 - 0x0230)
class ASanctumGibIsraphel : public ASanctumGib
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48784 ];

		return pClassPointer;
	};

};

UClass* ASanctumGibIsraphel::pClassPointer = NULL;

// Class Sanctum.SanctumInfo
// 0x0024 (0x0060 - 0x003C)
class USanctumInfo : public UObject
{
public:
	struct FString                                     mName;                                            		// 0x003C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     mPrefix;                                          		// 0x0048 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     mPostfix;                                         		// 0x0054 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48891 ];

		return pClassPointer;
	};

	struct FString getNameWithPostfix ( );
	struct FString getNameWithPrefixAndPostfix ( );
	struct FString getNameWithPrefix ( );
	struct FString getName ( );
};

UClass* USanctumInfo::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponInfo
// 0x0000 (0x0060 - 0x0060)
class USanctumWeaponInfo : public USanctumInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48890 ];

		return pClassPointer;
	};

};

UClass* USanctumWeaponInfo::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponHologram
// 0x00C4 (0x028C - 0x01C8)
class ASanctumWeaponHologram : public AActor
{
public:
	float                                              DefaultAnimSpeed;                                 		// 0x01C8 (0x0004) [0x0000000000000000]              
	float                                              mWeaponEquipTime;                                 		// 0x01CC (0x0004) [0x0000000000000000]              
	float                                              mWeaponUneqipTime;                                		// 0x01D0 (0x0004) [0x0000000000000000]              
	struct FName                                       mEquipAnim;                                       		// 0x01D4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mUnequipAnim;                                     		// 0x01DC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mIdleAnim;                                        		// 0x01E4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mDebug : 1;                                       		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mEquiped : 1;                                     		// 0x01EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mForceUnequip : 1;                                		// 0x01EC (0x0004) [0x0000000000000000] [0x00000004] 
	class USkeletalMeshComponent*                      mMesh;                                            		// 0x01F0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      mHologram;                                        		// 0x01F4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FLinearColor                                mLocalEnabledColor;                               		// 0x01F8 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                mLocalDisabledColor;                              		// 0x0208 (0x0010) [0x0000000000000000]              
	float                                              BobDamping;                                       		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpDamping;                                      		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxPitchLag;                                      		// 0x0220 (0x0004) [0x0000000000000000]              
	float                                              MaxYawLag;                                        		// 0x0224 (0x0004) [0x0000000000000000]              
	float                                              LastRotUpdate;                                    		// 0x0228 (0x0004) [0x0000000000000000]              
	struct FRotator                                    LastRotation;                                     		// 0x022C (0x000C) [0x0000000000000000]              
	struct FVector                                     SmallWeaponsOffset;                               		// 0x0238 (0x000C) [0x0000000000000000]              
	float                                              WideScreenOffsetScaling;                          		// 0x0244 (0x0004) [0x0000000000000000]              
	float                                              OldLeadMag[ 0x2 ];                                		// 0x0248 (0x0008) [0x0000000000000000]              
	int                                                OldRotDiff[ 0x2 ];                                		// 0x0250 (0x0008) [0x0000000000000000]              
	float                                              OldMaxDiff[ 0x2 ];                                		// 0x0258 (0x0008) [0x0000000000000000]              
	float                                              RotChgSpeed;                                      		// 0x0260 (0x0004) [0x0000000000000000]              
	float                                              ReturnChgSpeed;                                   		// 0x0264 (0x0004) [0x0000000000000000]              
	struct FRotator                                    WidescreenRotationOffset;                         		// 0x0268 (0x000C) [0x0000000000000000]              
	TArray< class UMaterialInstanceConstant* >         mMaterials;                                       		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UMaterialInstance* >                 mWeaponMaterials;                                 		// 0x0280 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48894 ];

		return pClassPointer;
	};

	class UAnimNodeSequence* GetWeaponAnimNodeSeq ( );
	void PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
	void Equipped ( );
	void Unequipped ( );
	void TimeWeaponUnequip ( );
	void TimeWeaponEquip ( );
	bool ShouldLagRot ( );
	int LagRot ( int NewValue, int LastValue, float MaxDiff, int Index );
	void eventSetPosition ( class AUDKPawn* Holder );
	void detachFrom ( class ASanctumPlayer* Player );
	void HideHologram ( );
	void SetEnabled ( );
	void SetDisabled ( );
	void ToggleOwnerSee ( unsigned long see );
	void setWeaponColor ( struct FLinearColor C );
	void setCountdownChange ( float percentComplete );
	void attachTo ( class ASanctumPlayer* Player );
	bool PlayUnequip ( );
	void PlayEquip ( );
	void PlayUnequipWhenEquipIsDone ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void eventPostBeginPlay ( );
};

UClass* ASanctumWeaponHologram::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponAttachment
// 0x00AC (0x0274 - 0x01C8)
class ASanctumWeaponAttachment : public AActor
{
public:
	class USkeletalMeshComponent*                      mMesh;                                            		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       mMuzzleFlashSocket;                               		// 0x01CC (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    mMuzzleFlashPSC;                                  		// 0x01D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             mMuzzleFlashPSCTemplate;                          		// 0x01D8 (0x0004) [0x0000000000000000]              
	struct FColor                                      mMuzzleFlashColor;                                		// 0x01DC (0x0004) [0x0000000000000000]              
	unsigned long                                      mMuzzleFlashPSCLoops : 1;                         		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mAvailableInBuildPhase : 1;                       		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mDebug : 1;                                       		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              mMuzzleFlashDuration;                             		// 0x01E4 (0x0004) [0x0000000000000000]              
	class UClass*                                      mMuzzleFlashLightClass;                           		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UUDKExplosionLight*                          mMuzzleFlashLight;                                		// 0x01EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      mWeaponClass;                                     		// 0x01F0 (0x0004) [0x0000000000000000]              
	class ASanctumWeapon*                              mWeaponArchetype;                                 		// 0x01F4 (0x0004) [0x0000000000000000]              
	TArray< class UParticleSystem* >                   mTracerTemplate;                                  		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             mTracerEndpointName;                              		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      mImpactLightClass;                                		// 0x0210 (0x0004) [0x0000000000000000]              
	TArray< struct FMaterialImpactEffect >             mImpactEffects;                                   		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMaterialImpactEffect                       mDefaultImpactEffect;                             		// 0x0220 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLinearColor >                      mColors;                                          		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMaterialInstance*                           mMaterial;                                        		// 0x025C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mMaxImpactEffectDistance;                         		// 0x0260 (0x0004) [0x0000000000000000]              
	float                                              mMaxFireEffectDistance;                           		// 0x0264 (0x0004) [0x0000000000000000]              
	float                                              mImpactTraceLengthHalf;                           		// 0x0268 (0x0004) [0x0000000000000000]              
	unsigned char                                      mCurrentFireMode;                                 		// 0x026C (0x0001) [0x0000000000000000]              
	int                                                mLevel;                                           		// 0x0270 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48896 ];

		return pClassPointer;
	};

	void FireModeUpdated ( unsigned char FiringMode, unsigned long bViaReplication );
	void ChangeVisibility ( unsigned long bIsVisible );
	void detachFrom ( class USkeletalMeshComponent* MeshCpnt );
	void eventstopThirdPersonFireEffects ( );
	void stopFirstPersonFireEffects ( class AWeapon* pawnWeapon );
	void StopMuzzleFlash ( );
	void MuzzleFlashTimer ( );
	void CauseMuzzleFlash ( );
	void setMuzzleFlashParams ( class UParticleSystemComponent* PSC );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void SpawnWeaponTracer ( unsigned char FireModeNum, struct FVector HitLocation );
	void firstPersonFireEffects ( class AWeapon* pawnWeapon, struct FVector HitLocation );
	void setLevel ( int Level );
	int getInstantHitDamage ( );
	void PlayImpactFX ( unsigned char FiringModeNum, struct FImpactInfo Impact );
	bool ShouldPlayImpactEffectsOn ( class AActor* impactActor );
	struct FVector GetEffectLocation ( );
	void updateOverheat ( float Overheat );
	bool AllowImpactEffects ( class AActor* HitActor, struct FVector HitLocation, struct FVector HitNormal );
	struct FMaterialImpactEffect getImpactEffect ( class UPhysicalMaterial* hitMaterial );
	void attachTo ( class ASanctumPlayer* ownerPawn );
	void ToggleOwnerSee ( unsigned long see );
	class AActor* GetTraceOwner ( );
	struct FImpactInfo CalcRemoteWeaponFire ( struct FVector StartTrace, struct FVector EndTrace );
	void CalcRemoteImpactEffects ( unsigned char FireModeNum, struct FVector GivenHitLocation, unsigned long bViaReplication );
	void FlashLocationUpdated ( unsigned char FiringMode, struct FVector FlashLocation, unsigned long bViaReplication );
	void eventPostBeginPlay ( );
};

UClass* ASanctumWeaponAttachment::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponAttachmentAssault
// 0x0000 (0x0274 - 0x0274)
class ASanctumWeaponAttachmentAssault : public ASanctumWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49496 ];

		return pClassPointer;
	};

	void updateOverheat ( float Overheat );
	void eventPostBeginPlay ( );
};

UClass* ASanctumWeaponAttachmentAssault::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponHologramAssault
// 0x0000 (0x028C - 0x028C)
class ASanctumWeaponHologramAssault : public ASanctumWeaponHologram
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49497 ];

		return pClassPointer;
	};

};

UClass* ASanctumWeaponHologramAssault::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponInfoAssault
// 0x0000 (0x0060 - 0x0060)
class USanctumWeaponInfoAssault : public USanctumWeaponInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49498 ];

		return pClassPointer;
	};

};

UClass* USanctumWeaponInfoAssault::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponAttachmentSniper
// 0x0000 (0x0274 - 0x0274)
class ASanctumWeaponAttachmentSniper : public ASanctumWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49657 ];

		return pClassPointer;
	};

};

UClass* ASanctumWeaponAttachmentSniper::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponHologramSniper
// 0x0000 (0x028C - 0x028C)
class ASanctumWeaponHologramSniper : public ASanctumWeaponHologram
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49658 ];

		return pClassPointer;
	};

};

UClass* ASanctumWeaponHologramSniper::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponInfoSniper
// 0x0000 (0x0060 - 0x0060)
class USanctumWeaponInfoSniper : public USanctumWeaponInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49659 ];

		return pClassPointer;
	};

};

UClass* USanctumWeaponInfoSniper::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponAttachmentShotgun
// 0x0000 (0x0274 - 0x0274)
class ASanctumWeaponAttachmentShotgun : public ASanctumWeaponAttachment
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

	void updateOverheat ( float Overheat );
	void eventPostBeginPlay ( );
};

UClass* ASanctumWeaponAttachmentShotgun::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponHologramShotgun
// 0x0000 (0x028C - 0x028C)
class ASanctumWeaponHologramShotgun : public ASanctumWeaponHologram
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

UClass* ASanctumWeaponHologramShotgun::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponInfoShotgun
// 0x0000 (0x0060 - 0x0060)
class USanctumWeaponInfoShotgun : public USanctumWeaponInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49855 ];

		return pClassPointer;
	};

};

UClass* USanctumWeaponInfoShotgun::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponAttachmentMarker
// 0x0000 (0x0274 - 0x0274)
class ASanctumWeaponAttachmentMarker : public ASanctumWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49915 ];

		return pClassPointer;
	};

};

UClass* ASanctumWeaponAttachmentMarker::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponHologramMarker
// 0x0000 (0x028C - 0x028C)
class ASanctumWeaponHologramMarker : public ASanctumWeaponHologram
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49916 ];

		return pClassPointer;
	};

	void eventPostBeginPlay ( );
};

UClass* ASanctumWeaponHologramMarker::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponInfoMarker
// 0x0000 (0x0060 - 0x0060)
class USanctumWeaponInfoMarker : public USanctumWeaponInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49917 ];

		return pClassPointer;
	};

};

UClass* USanctumWeaponInfoMarker::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileRocket
// 0x0004 (0x0278 - 0x0274)
class ASanctumProjectileRocket : public ASanctumProjectile
{
public:
	float                                              mLifeSpan;                                        		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49953 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void eventDestroyed ( );
	void KilledAnEnemy ( class UClass* Enemyclass );
	void Init ( struct FVector Direction );
	void eventPostBeginPlay ( );
};

UClass* ASanctumProjectileRocket::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileContainer
// 0x002C (0x02A0 - 0x0274)
class ASanctumProjectileContainer : public ASanctumProjectile
{
public:
	float                                              mLifeSpan;                                        		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    cDamage;                                          		// 0x0278 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cDamageRadius;                                    		// 0x0284 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ASanctumProjectileSmallRocket*               cProjectileClassArchetype;                        		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                cContainedProjectiles;                            		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ASanctumEnemy*                               mTargetEnemy;                                     		// 0x0298 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      mExploded : 1;                                    		// 0x029C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49954 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void SpawnSmallProjectiles ( );
	void eventTick ( float Delta );
	void Init ( struct FVector Direction );
	void Launch ( class ASanctumEnemy* Enemy, int Level );
	void eventDestroyed ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumProjectileContainer::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileSmallRocket
// 0x0048 (0x02BC - 0x0274)
class ASanctumProjectileSmallRocket : public ASanctumProjectile
{
public:
	class ASanctumEnemy*                               mTargetEnemy;                                     		// 0x0274 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mLevel;                                           		// 0x0278 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              cLifeSpan;                                        		// 0x027C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeedStart;                                  		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeedBest;                                   		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeedImprovmentFactor;                       		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cAccelRate;                                       		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    cDamage;                                          		// 0x0290 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cDamageRadius;                                    		// 0x029C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cMinLifeSpanWhenNoTarget;                         		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMaxLifeSpanWhenNoTarget;                         		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mSetNoTargetDeathTimer : 1;                       		// 0x02B0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mLifeSpanWhenNoTarget;                            		// 0x02B4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mCurrentTurnSpeed;                                		// 0x02B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 49956 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventTick ( float Delta );
	void SetNoTargetLifeSpan ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void eventDestroyed ( );
	void Launch ( struct FVector Direction, class ASanctumEnemy* Target, class APawn* newInstigator, int Level );
	void Init ( struct FVector Direction );
	void eventPostBeginPlay ( );
};

UClass* ASanctumProjectileSmallRocket::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponAttachmentRocketLauncher
// 0x0000 (0x0274 - 0x0274)
class ASanctumWeaponAttachmentRocketLauncher : public ASanctumWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50049 ];

		return pClassPointer;
	};

};

UClass* ASanctumWeaponAttachmentRocketLauncher::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponHologramRocketLauncher
// 0x0000 (0x028C - 0x028C)
class ASanctumWeaponHologramRocketLauncher : public ASanctumWeaponHologram
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50050 ];

		return pClassPointer;
	};

};

UClass* ASanctumWeaponHologramRocketLauncher::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponInfoRocketLauncher
// 0x0000 (0x0060 - 0x0060)
class USanctumWeaponInfoRocketLauncher : public USanctumWeaponInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50051 ];

		return pClassPointer;
	};

};

UClass* USanctumWeaponInfoRocketLauncher::pClassPointer = NULL;

// Class Sanctum.SanctumGoalNode
// 0x0000 (0x02A0 - 0x02A0)
class ASanctumGoalNode : public APathNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50096 ];

		return pClassPointer;
	};

};

UClass* ASanctumGoalNode::pClassPointer = NULL;

// Class Sanctum.SanctumHUDGfxCredits
// 0x0000 (0x0168 - 0x0168)
class USanctumHUDGfxCredits : public UGFxMoviePlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50182 ];

		return pClassPointer;
	};

	void CreditsFinished ( );
	void Init ( class ULocalPlayer* P );
};

UClass* USanctumHUDGfxCredits::pClassPointer = NULL;

// Class Sanctum.SanctumHUDGfxStatScreen
// 0x0094 (0x01FC - 0x0168)
class USanctumHUDGfxStatScreen : public UGFxMoviePlayer
{
public:
	TArray< struct FStats >                            ListStats;                                        		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              listMC;                                           		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x0178 (0x0004) [0x0000000000000000]              
	struct FString                                     mMapName;                                         		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mTimePlayed;                                      		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mDifficulty;                                      		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mRemainingLife;                                   		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mWaveReached;                                     		// 0x01AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Difficulties;                                     		// 0x01B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           MultiplayerDifficulties;                          		// 0x01C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              mMainBtn;                                         		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              mCheckpointBtn;                                   		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              mRestartBtn;                                      		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              mNextBtn;                                         		// 0x01DC (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        mPlayerLabelList;                                 		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      mLevelUnlocked : 1;                               		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mWonGame : 1;                                     		// 0x01EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mHasDisplayedResult : 1;                          		// 0x01EC (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                mTotalTowerDamagePercent;                         		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                mTotalTowerKillPercent;                           		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mTimeLabel;                                       		// 0x01F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50184 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetTimeLabel ( );
	void RestartLevel ( );
	void ExitToMain ( );
	void loadCheckpoint ( );
	void callOpenPopup ( struct FString popupName );
	void StartCredits ( );
	void disableCinematic ( );
	void NextLevel ( struct FEventData ev );
	void ClickedButton ( struct FEventData ev );
	void SetList ( class UGFxObject* InList );
	void OnListItemPress ( struct FEventData ev );
	void setTowerEntryStats ( );
	void setPlayerEntryStats ( );
	void UpdateListDataProvider ( );
	void PlaySound ( struct FString snd );
	void FadeToStats ( unsigned long forced );
	void Init ( class ULocalPlayer* LocPlay );
};

UClass* USanctumHUDGfxStatScreen::pClassPointer = NULL;

// Class Sanctum.SanctumMainMenu
// 0x00E8 (0x0250 - 0x0168)
class USanctumMainMenu : public UGFxMoviePlayer
{
public:
	struct FString                                     mMode;                                            		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mScene;                                           		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mMenuBackButton;                                  		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mPopupTextField;                                  		// 0x017C (0x0004) [0x0000000000000000]              
	struct FString                                     mPopupTextID;                                     		// 0x0180 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mPopupTextReplacement;                            		// 0x018C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mMenuBackButtonName;                              		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct USanctumMainMenu_FSound >           SoundList;                                        		// 0x01A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FKeyNames >                         Actions;                                          		// 0x01B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       prevKeyName;                                      		// 0x01BC (0x0008) [0x0000000000000000]              
	struct FString                                     keyCommand;                                       		// 0x01C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     displayKeyName;                                   		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     fileKeyName;                                      		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      mDebug : 1;                                       		// 0x01E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsServer : 1;                                    		// 0x01E8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mLevelUnlocked : 1;                               		// 0x01E8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mCommunityGrpVisible : 1;                         		// 0x01E8 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     mMenuHUDName;                                     		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  WikiDescText;                                     		// 0x01F8 (0x0004) [0x0000000000000000]              
	TArray< int >                                      gfxOptionStepperValues;                           		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mLevelUnlockedArray;                              		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mCommunityGrp;                                    		// 0x0214 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ReadOnlyKeys;                                     		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ErrorMessages;                                    		// 0x0224 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct USanctumWikiObject_FWaveInfo >      WavePlanner;                                      		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mLevelListMC;                                     		// 0x023C (0x0004) [0x0000000000000000]              
	struct FString                                     mLevelSelectType;                                 		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mWikiLabel;                                       		// 0x024C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50185 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetPopupText ( struct FString Id, struct FString insertTxt );
	void SetBackButtonText ( struct FString txt );
	void ClearLobbyInfo ( );
	void SetWikiButtonBarNames ( );
	void SetLobbyLocalization ( );
	void SetLocalizedGameAddons ( struct FString Mode );
	void SetLocalizedDifficultyProvider ( struct FString Mode );
	void SetLocalizedWaveCount ( );
	void SetLocalizeedLevelLockedText ( );
	void SetLocalizedText ( class UGFxObject* Obj, struct FString Id, struct FString VarName );
	void OnCommunityPressed ( struct FEventData Event );
	void OnLeaderboardsPressed ( struct FEventData Event );
	void OnAchievementsPressed ( struct FEventData Event );
	void OnFacebookPressed ( struct FEventData Event );
	void SetCommunityButtons ( unsigned long Visible );
	void applyGfxSettings ( );
	void getDefaultGfxOptions ( );
	void applyGameplaySettings ( );
	void getDefaultGameplayOptions ( );
	void getDefaultControlsOptions ( );
	void applySoundSettings ( );
	void getDefaultSoundOptions ( );
	void pushSoundOptionBool ( struct FString Label, int optValue, unsigned long fromUnreal, TArray< struct FString > entrys );
	void pushSoundOption ( struct FString Label, int optValue, unsigned long fromUnreal );
	void pushOption ( struct FString Label, int optValue, unsigned long fromUnreal, TArray< struct FString > entrys );
	void setImage ( struct FString theName, int wikiTab, int Index );
	void setWavePreview ( int Index );
	void getNextInfo ( );
	void markWikiItem ( );
	void sortWikiList ( );
	void gotoWikiWaveIndex ( int Index, struct FString Desc );
	void gotoWikiIndex ( struct FString Selected, struct FString Desc );
	void ChangedWikiTab ( int selectedTab, int ListIndex, unsigned long gotoQuick );
	void checkPrevBind ( struct FName Key );
	void CheckBind ( struct FName Key );
	void cancelKeybind ( );
	void callCancelKeybind ( );
	void KeyToBind ( struct FName newKey );
	void Bind ( int Idx, struct FString prevKey, struct FString Command );
	void setCommand ( struct FString Command, struct FString Key );
	void SetData ( struct FString Command, struct FString Key );
	void ResetControlsAndKeybind ( );
	void applyControlsSettings ( );
	void SetControlsData ( );
	void callShowLevelSelect ( );
	void CancelJoin ( );
	void showConnectionErrorPopup ( );
	void JoinGame ( struct FString adr );
	void getMode ( );
	void callShowValidIP ( );
	void callStartJoin ( );
	void CheckJoinString ( struct FString Str );
	void TogglePause ( );
	void RestartLevel ( );
	void ExitToWindows ( );
	void ExitToMain ( );
	void ResumeGameFromPause ( );
	void JoinLobby ( struct FString Id );
	void UncagePlayer ( int Slot );
	void CagePlayer ( int Slot );
	void KickComplete ( );
	void KickPlayer ( int Slot );
	void GetPlayerNames ( );
	void RefreshFriends ( int mapIdx, int diffIdx, int playersIdx, unsigned long hideFullGames, int addonIdx );
	void RefreshLobby ( int mapIdx, int diffIdx, int playersIdx, unsigned long hideFullGames, int lobbyDistance, int addonIdx );
	void callNoLobbiesFoundPopup ( );
	void CallSetSaveInfo ( unsigned long Save, TArray< int > unlocked );
	void getSaveInfo ( );
	void getContinueInfo ( );
	void clearLevelArray ( );
	void ChangePreviewImage ( class UGFxObject* Obj, struct FString frameName );
	void insertEndlessLevels ( );
	void SetLevelIDArray ( class UGFxObject* idArray );
	void OpenMapDLCPage ( );
	void CallUpdateLevelSelectedData ( );
	void UpdateLevelListData ( class UGFxObject* levelList, unsigned long isSurvival, int Difficulty, int gameModeIndex );
	void PurchasedLevelDLC ( int AppID );
	void RemoveDLCDelegate ( );
	void AddLevelDLCDelegate ( );
	void PopulateLevelList ( class UGFxObject* listMC, struct FString Type );
	void setLevelUnlocked ( );
	void ApplyGraphicSettings ( );
	void loadCheckpoint ( );
	void resumeGame ( );
	void PlaySound ( struct FString snd );
	void returnCurrentWave ( );
	void StartLevel ( struct FString Level );
	void setMode ( struct FString Mode );
	void Write ( struct FString Text );
	void callShowConnectingToHost ( );
	void callOpenPopup ( struct FString frame );
	void callShowLocalizedPopup ( struct FString localizedText );
	void callShowDisconnectMessage ( struct FString msg, unsigned long kicked );
	void getKickMessage ( );
	void switchMap ( struct FString URL );
	void getDifficulty ( );
	void ShowSteamFriends ( );
	void showAchievements ( );
	void showLeaderboard ( );
	void CreditRollCalled ( );
	void CreditsWin ( );
	void callUpdateWebData ( struct FString newsData );
	void PollUpdateData ( );
	void openSteamLink ( struct FString callType );
	void SetCheckpointButton ( class UGFxObject* Button );
	void SetLevelNames ( struct FString Mode );
	void Init ( class ULocalPlayer* LocPlay );
};

UClass* USanctumMainMenu::pClassPointer = NULL;

// Class Sanctum.SanctumHUDTeleport
// 0x0044 (0x01AC - 0x0168)
class USanctumHUDTeleport : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  HUDMouse;                                         		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Bottom;                                           		// 0x016C (0x0004) [0x0000000000000000]              
	struct FASDisplayInfo                              DI;                                               		// 0x0170 (0x002C) [0x0000000000000000]              
	unsigned long                                      once : 1;                                         		// 0x019C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __TeleportCursorUpdated__Delegate;                		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50187 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void switchHUD ( );
	void Visible ( unsigned long hide );
	void SetUpdateCursorDelegate ( struct FScriptDelegate InDelegate );
	void UpdateCursor ( );
	void setCursorPosition ( float X, float Y );
	void Init ( class ULocalPlayer* LocPlay );
	void TeleportCursorUpdated ( );
};

UClass* USanctumHUDTeleport::pClassPointer = NULL;

// Class Sanctum.SanctumHUDGFxTutorial
// 0x0004 (0x016C - 0x0168)
class USanctumHUDGFxTutorial : public UGFxMoviePlayer
{
public:
	unsigned long                                      mEscapeTime : 1;                                  		// 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50189 ];

		return pClassPointer;
	};

	void callSetEntry ( struct FString entrypoint );
	void callEnterPopup ( struct FString header, struct FString body, struct FString Footer, struct FString ExitCommand, unsigned long clickable );
	void Write ( struct FString Text );
	bool Start ( unsigned long StartPaused );
};

UClass* USanctumHUDGFxTutorial::pClassPointer = NULL;

// Class Sanctum.SanctumHUDGFxEquipmentSelection
// 0x0110 (0x0278 - 0x0168)
class USanctumHUDGFxEquipmentSelection : public UGFxMoviePlayer
{
public:
	class UGFxClikWidget*                              mTowerListMC;                                     		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              mWeaponListMC;                                    		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              mActiveListMC;                                    		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              mPopupSubmitBtn;                                  		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              mGotoDLCBtn;                                      		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mPortraitMC;                                      		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mTowersDesc;                                      		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mWeaponsDesc;                                     		// 0x0184 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mPopupItemArea;                                   		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mInfoLabel;                                       		// 0x018C (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        mWeaponSlots;                                     		// 0x0190 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mTowersInt;                                       		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mWeaponsInt;                                      		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mPreviousWeaponsInt;                              		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mPreviousTowersInt;                               		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mTemporaryTowerInts;                              		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mTemporaryWeaponInts;                             		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        mTowerSlots;                                      		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              mCustomizeTowersBtn;                              		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              mCustomizeWeaponsBtn;                             		// 0x01F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      mInitDone : 1;                                    		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mPopupOpen : 1;                                   		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mBufferChecked : 1;                               		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000004] 
	class UGFxObject*                                  mWikiAreaMC;                                      		// 0x01FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mWikiText;                                        		// 0x0200 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mLockedEntryData;                                 		// 0x0204 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mWeaponLabelGrp;                                  		// 0x0208 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        mSelectedWeaponLabels;                            		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mTowerLabelGrp;                                   		// 0x0218 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        mSelectedTowerLabels;                             		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mRoot;                                            		// 0x0228 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mScene;                                           		// 0x022C (0x0004) [0x0000000000000000]              
	TArray< struct FOtherPlayersEQ >                   mOtherPlayers;                                    		// 0x0230 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBufferedTowers >                   mBufferedTowers;                                  		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBufferedWeapons >                  mBufferedWeapons;                                 		// 0x0248 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mLastPressedBtn;                                  		// 0x0254 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mWikiLabel;                                       		// 0x0258 (0x0004) [0x0000000000000000]              
	struct FString                                     mWikiLabelText;                                   		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           mRemovedItems;                                    		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mSelectionArrow;                                  		// 0x0274 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50191 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void Write ( struct FString Str );
	void SetListIndex ( );
	void SetFocus ( );
	void UpdateWiki ( int Idx, struct FString Type );
	void CreateWikiObject ( );
	void SetHitArea ( class UGFxObject* btn, int numElements );
	void ShowSelectedWeapons ( );
	void ShowSelectedTowers ( );
	void OnCustomizeRollOut ( struct FEventData Event );
	void HighlightLabels ( struct FString markedList );
	void OnCustomizeRollOver ( struct FEventData Event );
	void CancelCustomize ( );
	void OnCustomizeClicked ( struct FEventData Event );
	void OnSlotClicked ( struct FEventData ev );
	void OnSlotOut ( struct FEventData Event );
	void OnSlotOver ( struct FEventData Event );
	void AttachWeaponSlots ( );
	void PopupDestroyed ( );
	void CallCancelPopup ( struct FString Data );
	void LocalSaveSlotChoice ( );
	void SetSelectedTowers ( class UClass** towerHologramClasses, int slotNr, struct FString PlayerName );
	void SetSelectedWeapons ( class UClass** weaponClasses, int slotNr, struct FString PlayerName );
	void CallSetTextColor ( class UGFxObject* mc, int R, int G, int B );
	void SetTextColor ( class UGFxObject* mc, struct FColor playerColor );
	void RemoveFromOthers ( int slotNr );
	void AddToBufferedTowers ( class UClass** towerHologramClasses, int slotNr, struct FString PlayerName );
	void AddToBufferedWeapons ( class UClass** weaponClasses, int slotNr, struct FString PlayerName );
	void UpdateSelectedWeaponsAndTowers ( );
	void CloseEQPopup ( struct FEventData ev );
	void UpdateListWithNewPurchase ( );
	void PurchasedDLC ( int AppID );
	void GotoDLCWebsite ( struct FEventData ev );
	bool DisableEQAccept ( TArray< class UGFxObject* > Slots );
	void AttachTowerSlots ( );
	void OnListItemPress ( struct FEventData Event );
	class UGFxObject* GetRendererAt ( class UGFxObject* listMC, int SelectedIndex );
	void OnListItemRollOver ( struct FEventData Event );
	void OnListItemClick ( struct FEventData Event );
	bool HasBlockChosen ( );
	bool FilledAllSlots ( );
	void StartGame ( );
	void GiveListFocus ( );
	void OnEquipOut ( struct FEventData ev );
	void OnEquipOver ( struct FEventData ev );
	bool HasServerStarted ( );
	void OnEquipPressed ( struct FEventData ev );
	void ExitToMain ( );
	void CallShowPopup ( struct FString popupFrame );
	void PopulateWeaponList ( class UGFxObject* List );
	bool EntryChosen ( struct FString entryLabel );
	void UpdateWeaponListProvider ( class UGFxObject* selectedRenderer );
	void SetDefaultEquipment ( struct FEventData ev );
	void UpdateTowerListProvider ( class UGFxObject* selectedRenderer );
	void PopulateTowerList ( class UGFxObject* List );
	void SaveLastEquipment ( int* Weapons, int* Towers );
	void GetLastEquipmentInts ( TArray< int >* weaponsInt, TArray< int >* towersInt );
	void PlaySound ( struct FString snd );
	void AttachOtherPlayersInfo ( );
	void CheckPlayersBuffers ( );
	void CallSetFocus ( class UGFxObject* focusTarget );
	void SetArrowPos ( );
	void Init ( class ULocalPlayer* LocPlay );
};

UClass* USanctumHUDGFxEquipmentSelection::pClassPointer = NULL;

// Class Sanctum.SanctumHUDGfxPhase
// 0x000C (0x0174 - 0x0168)
class USanctumHUDGfxPhase : public UGFxMoviePlayer
{
public:
	TArray< class UGFxObject* >                        mPartyList;                                       		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50193 ];

		return pClassPointer;
	};

	void setReady ( class UGFxObject* mc, unsigned long Ready );
	void InitPartyColors ( );
	void callSetEntryColor ( class UGFxObject* mc, int R, int G, int B );
	void setEntryColor ( class UGFxObject* mc, struct FColor playerColor );
	void setPartyStats ( class UGFxObject* mc, struct FString PlayerName, struct FString statVal );
	void changePartyType ( class UGFxObject* mc, struct FString Phase );
};

UClass* USanctumHUDGfxPhase::pClassPointer = NULL;

// Class Sanctum.SanctumHUDGFxAction
// 0x009C (0x0210 - 0x0174)
class USanctumHUDGFxAction : public USanctumHUDGfxPhase
{
public:
	struct FweaponInfo                                 mBufferedWeapons[ 0x3 ];                          		// 0x0174 (0x0030) [0x0000000000000000]              
	unsigned long                                      mInitialized : 1;                                 		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mClassicMode : 1;                                 		// 0x01A4 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                mCurrentLife;                                     		// 0x01A8 (0x0004) [0x0000000000000000]              
	int                                                mCurrentCash;                                     		// 0x01AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  lifeCash;                                         		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  EnemyWave;                                        		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Overheat;                                         		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  assaultBar;                                       		// 0x01BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  sniperBar;                                        		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  markerBar;                                        		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  shotgunBar;                                       		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  REXBar;                                           		// 0x01CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mClassicCashGained;                               		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  tempIcon;                                         		// 0x01D4 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        mWeaponIcons;                                     		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              lifeCashY;                                        		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              lifeCashYHide;                                    		// 0x01E8 (0x0004) [0x0000000000000000]              
	float                                              enemyWaveY;                                       		// 0x01EC (0x0004) [0x0000000000000000]              
	float                                              enemyWaveYHide;                                   		// 0x01F0 (0x0004) [0x0000000000000000]              
	float                                              overheatY;                                        		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                mWaveNumber;                                      		// 0x01F8 (0x0004) [0x0000000000000000]              
	struct FString                                     mCurrentWeapon;                                   		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mLife;                                            		// 0x0208 (0x0004) [0x0000000000000000]              
	int                                                mPrevEnemyVal;                                    		// 0x020C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50192 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void ExitHUD ( struct FString State );
	void getLife ( int life );
	void updateEnemies ( int NewValue );
	void updateWave ( int NewValue );
	void getCash ( int NewValue );
	void ShowClassicCashGained ( unsigned long show );
	void Visible ( unsigned long hide );
	void CallExit ( );
	void switchState ( );
	void switchHUD ( );
	void markerCooldown ( float cooldownPercent );
	void AmmoChanged ( int ammoLeft, class ASanctumWeaponUsingAmmo* Wpn );
	void REXReload ( float reloadPercent );
	void shotgunReload ( float reloadPercent );
	void sniperReload ( float reloadPercent );
	void assaultOverheat ( float overheatPercent );
	void weaponClassChanged ( class UClass* NewWeapon );
	void CallShowWave ( int Max );
	void CallChangeWeapon ( struct FString NewWeapon );
	void CashGained ( int newCash );
	void Write ( struct FString Text );
	void callSetHUDPosition ( );
	void setInitDoneVal ( unsigned long val );
	void InitPartyColors ( );
	void SetupAmmoWeapon ( class ASanctumWeapon* Wpn, int lvl, class UGFxObject* wpnIcon );
	void SetupWeapon ( class ASanctumWeapon* Wpn, int lvl, int Index );
	void SetupWeapons ( );
	void RemoveWeaponIcons ( );
	void Init ( class ULocalPlayer* LocPlay );
};

UClass* USanctumHUDGFxAction::pClassPointer = NULL;

// Class Sanctum.SanctumHUDGFxCircle
// 0x029C (0x0410 - 0x0174)
class USanctumHUDGFxCircle : public USanctumHUDGfxPhase
{
public:
	TArray< struct USanctumHUDGFxCircle_FSound >       SoundList;                                        		// 0x0174 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FWeaponData >                       mWeaponData;                                      		// 0x0180 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mNotifierGrp;                                     		// 0x018C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mStatWindowCurrentLabel;                          		// 0x0190 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mStatWindowNextLabel;                             		// 0x0194 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mStatWindowRank;                                  		// 0x0198 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mStatWindowInstanceGrp;                           		// 0x019C (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        mStatWindowDesc;                                  		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        mStatWindowStat;                                  		// 0x01AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        mStatWindowNext;                                  		// 0x01B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        mStatWindowShared;                                		// 0x01C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        mStatWindowInstanceDesc;                          		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        mStatWindowInstanceStat;                          		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mStatIcon;                                        		// 0x01E8 (0x0004) [0x0000000000000000]              
	class ASanctumTowerBaseAttachment*                 mCurrentAttachmentInstance;                       		// 0x01EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  mInfoview;                                        		// 0x01F0 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        mStoreEntries;                                    		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mSelectedStoreItemZ;                              		// 0x0200 (0x0004) [0x0000000000000000]              
	struct FString                                     mLastStateWeapons;                                		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mLastStateTowers;                                 		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mCostWeapons;                                     		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mCostTowers;                                      		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  mClassicTimer;                                    		// 0x0234 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   mHologramListener;                                		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   mWeaponListener;                                  		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           mTowers;                                          		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mSelected;                                        		// 0x025C (0x0004) [0x0000000000000000]              
	struct FString                                     mPrevTower;                                       		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mSelectedWeapon;                                  		// 0x026C (0x0004) [0x0000000000000000]              
	unsigned long                                      mTowerTab : 1;                                    		// 0x0270 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mAbleToUpgrade : 1;                               		// 0x0270 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mDebug : 1;                                       		// 0x0270 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mNewCreature : 1;                                 		// 0x0270 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mReturnedFromPause : 1;                           		// 0x0270 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mShouldUpgrade : 1;                               		// 0x0270 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mClassicMode : 1;                                 		// 0x0270 (0x0004) [0x0000000000000000] [0x00000040] 
	int                                                mNextLevel;                                       		// 0x0274 (0x0004) [0x0000000000000000]              
	class UClass*                                      mClass;                                           		// 0x0278 (0x0004) [0x0000000000000000]              
	class ASanctumWeapon*                              mWeapon;                                          		// 0x027C (0x0004) [0x0000000000000000]              
	int                                                mWeaponLevel;                                     		// 0x0280 (0x0004) [0x0000000000000000]              
	struct FString                                     mSelectedWeaponName;                              		// 0x0284 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mSelectedWeaponLevel;                             		// 0x0290 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           EnemiesMet;                                       		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            highlightEnemy;                                   		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mWave;                                            		// 0x02AC (0x0004) [0x0000000000000000]              
	struct FString                                     mDPSMasterString;                                 		// 0x02B0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FTutorialHUDVisible                         TutorialHUDList;                                  		// 0x02BC (0x0004) [0x0000000000000000]              
	TArray< struct FSelectArray >                      TowerList;                                        		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTowerInfoStruct                            towerInfo;                                        		// 0x02CC (0x0060) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FStatInfoStruct                             statInfo;                                         		// 0x032C (0x00AC) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRewardInfoStruct                           mRewardInfo;                                      		// 0x03D8 (0x000C) [0x0000000000000000]              
	TArray< class USoundCue* >                         mCountdownSounds;                                 		// 0x03E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mCurrentCash;                                     		// 0x03F0 (0x0004) [0x0000000000000000]              
	int                                                mCurrentLife;                                     		// 0x03F4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __HologramUpdated__Delegate;                      		// 0x03F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __WeaponUpdated__Delegate;                        		// 0x0404 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50194 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetLocalizedText ( class UGFxObject* Obj, struct FString Id, struct FString VarName );
	void AS_SetLabelColor ( class UGFxObject* Label, unsigned char R, unsigned char G, unsigned char B );
	void SetLabelColor ( class UGFxObject* Label, struct FColor playerColor );
	void SetDPSData ( class UGFxObject* playerLabel, class UGFxObject* playerTitle );
	void UpdateDPSStatus ( );
	void getNextInfo ( );
	void updateWave ( int NewValue );
	void getLife ( int life );
	void EnterDone ( );
	void switchHUD ( );
	void ShowClassicTimer ( unsigned long show );
	void setTutorialHUD ( );
	void setInitDoneVal ( unsigned long val );
	void InitphaseDone ( );
	void CallShowBuildStart ( int newCash, int WaveNumber, int Max );
	void CallResetWaveBanner ( );
	void MAXUPGRADED ( unsigned long MAXUPGRADED );
	void lowMoneyUpgrade ( unsigned long lowMoneyUpgrade );
	void lowMoneyBuy ( unsigned long lowMoneyBuy );
	void aimingAtTower ( unsigned long aimingAtTower );
	void WeaponChanged ( unsigned char Weapon );
	void PrevWeapon ( );
	void NextWeapon ( );
	void setIconPos ( struct FString Icon );
	void buyPriceChanged ( int newBuyPrice );
	void sellPriceChanged ( int newSellPrice );
	void CallUpdateBar ( float Percent, int click, unsigned long Upgrade );
	void countdownTimeChanged ( float Percent, unsigned char click );
	void setAimingAtTowerData ( class ASanctumTowerBaseAttachment* attachmentInstance );
	void buttonUp ( int Button );
	void buttonDown ( int Button );
	void ableToUpgradeChanged ( unsigned long NewValue );
	void ableToSellChanged ( unsigned long NewValue );
	void ableToBuildChanged ( unsigned long NewValue, unsigned long aimingAtTower );
	void CallRightClickActionChanged ( struct FString actionType );
	void CallLeftClickActionChanged ( struct FString actionType );
	void rightClickActionChanged ( unsigned char actionType );
	void leftClickActionChanged ( unsigned char actionType );
	void CallSetWeapons ( TArray< struct FString > Weapons );
	void CallSetTowers ( TArray< struct FString > Towers );
	void CheckActiveWeapons ( );
	void CheckActiveTowers ( );
	void Write ( struct FString Text );
	void UpdateSelected ( );
	void HUDRight ( );
	void HUDLeft ( );
	void CallGreyAllEntries ( );
	void CallDownlight ( );
	void CallHighlight ( int Idx );
	void CallGotoWeaponIndex ( class UGFxObject* mc, int Idx );
	void CallGotoTowerIndex ( class UGFxObject* mc, int Idx );
	void CallDisableBlockDependent ( unsigned long dis );
	void callClearInfoClips ( );
	void ChangedTower ( struct FString twr, int lvl, unsigned long towerTab );
	void weaponStoreAction ( unsigned char actionType, int Cost );
	void callSetFloatVarAppend ( class UGFxObject* Obj, float val, struct FString append );
	void callSetFloatVar ( class UGFxObject* Obj, float val );
	void CallWeaponActionChanged ( struct FString actionType, struct FString Cost );
	void CallSetSpeed ( int varType, int val );
	void FillStatInfo ( );
	void GetTowerInstanceStats ( int* damageTotal, int* damageLast );
	void ChangedWeapon ( unsigned long towerTab );
	void setTowerData ( class UClass* towerClass, int towerLevel, class ASanctumTowerBaseAttachment* attachmentInstance );
	void SetTowerInstanceStats ( );
	void getCash ( int Cash );
	void setWeaponData ( struct FWeaponData* Weapons );
	void unregisterWeaponListener ( struct FScriptDelegate callback );
	void registerWeaponListener ( struct FScriptDelegate callback );
	void setWeaponInfo ( class ASanctumWeapon* Wpn, int lvl );
	void notifyWeaponListener ( );
	void notifyHologramListener ( );
	void unregisterHologramListener ( struct FScriptDelegate callback );
	void registerHologramListener ( struct FScriptDelegate callback );
	void PlaySound ( struct FString snd );
	void callSetHUDResolution ( );
	void setBuildThingsVisible ( unsigned long hide );
	void Visible ( unsigned long hide );
	void setNotifierText ( struct FString txt );
	void ClassicTimeChanged ( int TimeLeft );
	void callSetHUDPosition ( );
	void InitPartyColors ( );
	void Init ( class ULocalPlayer* LocPlay );
	void WeaponUpdated ( class ASanctumWeapon* Weapon, int CurrentLevel );
	void HologramUpdated ( class UClass* hologram );
};

UClass* USanctumHUDGFxCircle::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInterface
// 0x0000 (0x003C - 0x003C)
class USanctumTowerInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50469 ];

		return pClassPointer;
	};

	void StopOverview ( );
	void StartOverview ( );
	void StopHighlight ( );
	void StartHighlight ( );
};

UClass* USanctumTowerInterface::pClassPointer = NULL;

// Class Sanctum.SanctumHUDGfxBase
// 0x0004 (0x016C - 0x0168)
class USanctumHUDGfxBase : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  mPopupObject;                                     		// 0x0168 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50647 ];

		return pClassPointer;
	};

	void ShowPopup ( struct FString popupFrame );
};

UClass* USanctumHUDGfxBase::pClassPointer = NULL;

// Class Sanctum.SanctumRangeIndicator
// 0x0004 (0x01D4 - 0x01D0)
class ASanctumRangeIndicator : public ADecalActorMovable
{
public:
	class UMaterialInstanceConstant*                   mMIC;                                             		// 0x01D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50710 ];

		return pClassPointer;
	};

	void SetRange ( float MaxRange, float minRange );
	void SetOwningTowerBase ( class ASanctumTowerBase* TowerBase, class UClass* plannedTower );
	class UMaterialInstanceConstant* CreateAndSetMaterialInstanceConstant ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumRangeIndicator::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_BuiltTower
// 0x0004 (0x0118 - 0x0114)
class USanctumSeqEvent_BuiltTower : public USequenceEvent
{
public:
	class UClass*                                      Tower;                                            		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50790 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_BuiltTower::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_SoldTower
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_SoldTower : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50796 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_SoldTower::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_EnterWeaponStore
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_EnterWeaponStore : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50801 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_EnterWeaponStore::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_UpgradedWeapon
// 0x0004 (0x0118 - 0x0114)
class USanctumSeqEvent_UpgradedWeapon : public USequenceEvent
{
public:
	class UClass*                                      Weapon;                                           		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50807 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_UpgradedWeapon::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_SelectedTower
// 0x0004 (0x0118 - 0x0114)
class USanctumSeqEvent_SelectedTower : public USequenceEvent
{
public:
	class UClass*                                      hologram;                                         		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50814 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_SelectedTower::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_UpgradedTower
// 0x0004 (0x0118 - 0x0114)
class USanctumSeqEvent_UpgradedTower : public USequenceEvent
{
public:
	class UClass*                                      Tower;                                            		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50821 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_UpgradedTower::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_AimedAtTower
// 0x0004 (0x0118 - 0x0114)
class USanctumSeqEvent_AimedAtTower : public USequenceEvent
{
public:
	class UClass*                                      Tower;                                            		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50828 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_AimedAtTower::pClassPointer = NULL;

// Class Sanctum.SanctumTowerEffect
// 0x0004 (0x01E0 - 0x01DC)
class ASanctumTowerEffect : public ASanctumReplicatedEmitter
{
public:
	class USoundCue*                                   EffectSound;                                      		// 0x01DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51077 ];

		return pClassPointer;
	};

	void PostBeginPlay ( );
};

UClass* ASanctumTowerEffect::pClassPointer = NULL;

// Class Sanctum.SanctumTowerEffectBuild
// 0x0000 (0x01E0 - 0x01E0)
class ASanctumTowerEffectBuild : public ASanctumTowerEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51076 ];

		return pClassPointer;
	};

};

UClass* ASanctumTowerEffectBuild::pClassPointer = NULL;

// Class Sanctum.SanctumTowerEffectSell
// 0x0000 (0x01E0 - 0x01E0)
class ASanctumTowerEffectSell : public ASanctumTowerEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51078 ];

		return pClassPointer;
	};

};

UClass* ASanctumTowerEffectSell::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessageSell
// 0x0000 (0x0050 - 0x0050)
class USanctumLocalMessageSell : public USanctumLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51079 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessageSell::pClassPointer = NULL;

// Class Sanctum.SanctumTowerEffectUpgrade
// 0x0000 (0x01E0 - 0x01E0)
class ASanctumTowerEffectUpgrade : public ASanctumTowerEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51084 ];

		return pClassPointer;
	};

};

UClass* ASanctumTowerEffectUpgrade::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessageHelpBuild
// 0x0000 (0x0050 - 0x0050)
class USanctumLocalMessageHelpBuild : public USanctumLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51156 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessageHelpBuild::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessageHelpUpgrade
// 0x0000 (0x0050 - 0x0050)
class USanctumLocalMessageHelpUpgrade : public USanctumLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51157 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessageHelpUpgrade::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponAttachmentBuildgun
// 0x0000 (0x0274 - 0x0274)
class ASanctumWeaponAttachmentBuildgun : public ASanctumWeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51250 ];

		return pClassPointer;
	};

};

UClass* ASanctumWeaponAttachmentBuildgun::pClassPointer = NULL;

// Class Sanctum.SanctumHUDGFxSplash
// 0x0008 (0x0170 - 0x0168)
class USanctumHUDGFxSplash : public UGFxMoviePlayer
{
public:
	class UTexture2D*                                  LicenseSplash;                                    		// 0x0168 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  CoffeeSplash;                                     		// 0x016C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52018 ];

		return pClassPointer;
	};

	void switchTexture ( struct FString TextureName );
	bool Start ( unsigned long StartPaused );
};

UClass* USanctumHUDGFxSplash::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessageRecord
// 0x0030 (0x0080 - 0x0050)
class USanctumLocalMessageRecord : public USanctumLocalMessage
{
public:
	struct FString                                     NewPersonalBest;                                  		// 0x0050 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NewPersonalBestIn;                                		// 0x005C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     BestWave;                                         		// 0x0068 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReachedWave;                                      		// 0x0074 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52138 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessageRecord::pClassPointer = NULL;

// Class Sanctum.SanctumJumpPad
// 0x0000 (0x02C0 - 0x02C0)
class ASanctumJumpPad : public AUDKJumpPad
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52334 ];

		return pClassPointer;
	};

};

UClass* ASanctumJumpPad::pClassPointer = NULL;

// Class Sanctum.SanctumJumpPadTarget
// 0x0000 (0x02A0 - 0x02A0)
class ASanctumJumpPadTarget : public APathNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52339 ];

		return pClassPointer;
	};

};

UClass* ASanctumJumpPadTarget::pClassPointer = NULL;

// Class Sanctum.SanctumKeybindDefaults
// 0x000C (0x0048 - 0x003C)
class USanctumKeybindDefaults : public UObject
{
public:
	TArray< struct FDefKeys >                          DefaultKeys;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52342 ];

		return pClassPointer;
	};

};

UClass* USanctumKeybindDefaults::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessageBuild
// 0x0000 (0x0050 - 0x0050)
class USanctumLocalMessageBuild : public USanctumLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52427 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessageBuild::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfo
// 0x0004 (0x0064 - 0x0060)
class USanctumTowerInfo : public USanctumInfo
{
public:
	unsigned long                                      mUpgradable : 1;                                  		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52438 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfo::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessagePickup
// 0x000C (0x005C - 0x0050)
class USanctumLocalMessagePickup : public USanctumLocalMessage
{
public:
	TArray< struct FString >                           mGiftStrings;                                     		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52490 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessagePickup::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessageUpgrade
// 0x0000 (0x0050 - 0x0050)
class USanctumLocalMessageUpgrade : public USanctumLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52541 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessageUpgrade::pClassPointer = NULL;

// Class Sanctum.SanctumLocalMessageUpgradeWeapon
// 0x0000 (0x0050 - 0x0050)
class USanctumLocalMessageUpgradeWeapon : public USanctumLocalMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52554 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* USanctumLocalMessageUpgradeWeapon::pClassPointer = NULL;

// Class Sanctum.SanctumMenuController
// 0x0008 (0x0918 - 0x0910)
class ASanctumMenuController : public ASanctumController
{
public:
	class ASanctumMenuInfo*                            mSGI;                                             		// 0x0910 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ASanctumMenuHUD*                             mHUD;                                             		// 0x0914 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52744 ];

		return pClassPointer;
	};

	bool CanCommunicate ( );
	void changeState ( struct FName StateName );
	void ShowSteamFriends ( );
	void updateWebData ( );
	void Save ( );
	void PostBeginPlay ( );
	void eventPreBeginPlay ( );
};

UClass* ASanctumMenuController::pClassPointer = NULL;

// Class Sanctum.SanctumTeleportInterface
// 0x0000 (0x003C - 0x003C)
class USanctumTeleportInterface : public USanctumTowerInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53222 ];

		return pClassPointer;
	};

	struct FVector getLocation ( );
};

UClass* USanctumTeleportInterface::pClassPointer = NULL;

// Class Sanctum.SanctumPathingCommonRoute
// 0x002C (0x0068 - 0x003C)
class USanctumPathingCommonRoute : public UObject
{
public:
	TArray< class ANavigationPoint* >                  mCommonRoute;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class ASanctumAIDummy* >                   mDummyAIs;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UParticleSystemComponent* >          mAttachedParticles;                               		// 0x0054 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UParticleSystem*                             mLineParticle;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      mPathIsDirty : 1;                                 		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53224 ];

		return pClassPointer;
	};

	void UpdatePath ( );
	void CheckIfPathShouldUpdate ( );
	void SetPathingLOD ( unsigned long inOverview );
	void ShowPath ( );
	void CalculateNewCommonPath ( TArray< class ANavigationPoint* > newRoute );
	void AddDummyAI ( class ASanctumAIDummy* newDummy );
};

UClass* USanctumPathingCommonRoute::pClassPointer = NULL;

// Class Sanctum.SanctumWavespawnerEndless
// 0x0028 (0x0210 - 0x01E8)
class ASanctumWavespawnerEndless : public ASanctumSpawner
{
public:
	int                                                mNumEnemyTypes;                                   		// 0x01E8 (0x0004) [0x0000000000000000]              
	float                                              mTotalProbability;                                		// 0x01EC (0x0004) [0x0000000000000000]              
	float                                              mResourceMod;                                     		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FEnemyConfigEndless >               mEnemies;                                         		// 0x01F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct ASanctumWavespawnerEndless_FWaveInfo > mIncomingWaves;                                   		// 0x0200 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                mCurrentSetWave;                                  		// 0x020C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53227 ];

		return pClassPointer;
	};

	bool isHeavyWave ( unsigned char Difficulty, int Wave );
	int GetNumberOfEnemytypes ( unsigned char Difficulty, int Wave );
	void notifyHeavyWave ( );
	void test__rouletteWheelSelectionTest ( int attempts );
	void test__enemyChosen ( class ASanctumEnemy* E, TArray< struct FTestData >* Data );
	void giveReward ( int Wave );
	void GenerateNewWave ( int Wave );
	bool MapHaveBossWave ( );
	void waveComplete ( );
	struct FEnemyConfigEndless chooseRandomEnemy ( TArray< struct FEnemyConfigEndless > Enemies );
	float delaySpawnStart ( int NumEnemyTypes, TArray< struct FEnemyConfigEndless >* out_existingEnemies, struct FEnemyConfigEndless* out_enemyConfig );
	void startWave ( int Wave );
	void eventPostBeginPlay ( );
	void eventPreBeginPlay ( );
};

UClass* ASanctumWavespawnerEndless::pClassPointer = NULL;

// Class Sanctum.SanctumMenuInfo
// 0x0000 (0x0380 - 0x0380)
class ASanctumMenuInfo : public AUDKGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53243 ];

		return pClassPointer;
	};

	void Pause ( class ULocalPlayer* ownedByLocalPlayer );
	void eventRestartPlayer ( class AController* NewPlayer );
	void eventPostLogin ( class APlayerController* NewPlayer );
	bool AllowCheats ( class APlayerController* P );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage );
	void eventPreLogin ( struct FString Options, struct FString Address, struct FUniqueNetId UniqueId, unsigned long bSupportsAuth, struct FString* ErrorMessage );
	void eventPreBeginPlay ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumMenuInfo::pClassPointer = NULL;

// Class Sanctum.SanctumTcpLinkClient
// 0x0014 (0x021C - 0x0208)
class ASanctumTcpLinkClient : public ATcpLink
{
public:
	struct FString                                     TargetHost;                                       		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TargetPort;                                       		// 0x0214 (0x0004) [0x0000000000000000]              
	unsigned long                                      mDebug : 1;                                       		// 0x0218 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53246 ];

		return pClassPointer;
	};

	void eventReceivedText ( struct FString Text );
	void eventClosed ( );
	void eventOpened ( );
	void eventResolveFailed ( );
	void eventResolved ( struct FIpAddr Addr );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTcpLinkClient::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_ShouldTeleportFromPathnode
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_ShouldTeleportFromPathnode : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53389 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void eventActivated ( );
};

UClass* USanctumSeqEvent_ShouldTeleportFromPathnode::pClassPointer = NULL;

// Class Sanctum.SanctumPawnDummy
// 0x0000 (0x0450 - 0x0450)
class ASanctumPawnDummy : public APawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53395 ];

		return pClassPointer;
	};

};

UClass* ASanctumPawnDummy::pClassPointer = NULL;

// Class Sanctum.SanctumPawnSoundGroupSkye
// 0x0000 (0x0098 - 0x0098)
class USanctumPawnSoundGroupSkye : public USanctumPawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53511 ];

		return pClassPointer;
	};

};

UClass* USanctumPawnSoundGroupSkye::pClassPointer = NULL;

// Class Sanctum.SanctumPing
// 0x0014 (0x01DC - 0x01C8)
class ASanctumPing : public AActor
{
public:
	class UParticleSystem*                             mParticleSystem;                                  		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    mParticleSystemComponent;                         		// 0x01CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      mActive : 1;                                      		// 0x01D0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	struct FColor                                      mColor;                                           		// 0x01D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class USoundCue*                                   mPingSound;                                       		// 0x01D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53530 ];

		return pClassPointer;
	};

	void createParticleSystem ( );
	void setLinearColor ( struct FLinearColor linCol );
	void SetColor ( struct FColor Col );
	void deactivate ( );
	void changeActive ( );
	void Activate ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumPing::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_ResumeGame
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_ResumeGame : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53822 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_ResumeGame::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_EscapeMenu
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_EscapeMenu : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53827 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_EscapeMenu::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_GameEnded
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_GameEnded : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53844 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void notifyGameEnded ( class ASanctumPlayerController* PC );
	void eventActivated ( );
};

UClass* USanctumSeqEvent_GameEnded::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_CoreDestroyed
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_CoreDestroyed : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 53856 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_CoreDestroyed::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_TeleportedOverview
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_TeleportedOverview : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54031 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_TeleportedOverview::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_OverviewOpened
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_OverviewOpened : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54049 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqEvent_OverviewOpened::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_WaveStarted
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_WaveStarted : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54072 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void notifyWaveStarted ( int Wave, class AActor* FromActor );
	void eventActivated ( );
};

UClass* USanctumSeqEvent_WaveStarted::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileAALight
// 0x0000 (0x0220 - 0x0220)
class USanctumProjectileAALight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54426 ];

		return pClassPointer;
	};

};

UClass* USanctumProjectileAALight::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileAntiAir
// 0x0028 (0x029C - 0x0274)
class ASanctumProjectileAntiAir : public ASanctumProjectile
{
public:
	float                                              mTossZ;                                           		// 0x0274 (0x0004) [0x0000000000000000]              
	class ASanctumEnemyFlying*                         mTargetEnemy;                                     		// 0x0278 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      mShouldSearchForNewTarget : 1;                    		// 0x027C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              cProjectileSpeed;                                 		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cProjectileMaxSpeed;                              		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cProjectileTossZ;                                 		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cProjectileTerminalVelocity;                      		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cProjectileLifeSpan;                              		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeed;                                       		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mInitialLifSpan;                                  		// 0x0298 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54428 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Launch ( struct FVector Direction, class ASanctumEnemy* Target, float newDamage, float newDamageRadius );
	void eventDestroyed ( );
	void HitAnEnemy ( );
	void SearchForNewTarget ( );
	void eventTick ( float Delta );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumProjectileAntiAir::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileFreezeLight
// 0x0000 (0x0220 - 0x0220)
class USanctumProjectileFreezeLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54526 ];

		return pClassPointer;
	};

};

UClass* USanctumProjectileFreezeLight::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileGrenadeLight
// 0x0000 (0x0220 - 0x0220)
class USanctumProjectileGrenadeLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54548 ];

		return pClassPointer;
	};

};

UClass* USanctumProjectileGrenadeLight::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileKairos
// 0x0068 (0x02DC - 0x0274)
class ASanctumProjectileKairos : public ASanctumProjectile
{
public:
	class ASanctumEnemyFlying*                         mTargetEnemy;                                     		// 0x0274 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mLevel;                                           		// 0x0278 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< float >                                    cSlowFactor;                                      		// 0x027C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cSlowRadius;                                      		// 0x0288 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cSlowTime;                                        		// 0x0294 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              cLifeSpan;                                        		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cAccelRate;                                       		// 0x02A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeedStart;                                  		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeedBest;                                   		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTurnSpeedImprovmentFactor;                       		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCurrentTurnSpeed;                                		// 0x02B4 (0x0004) [0x0000000000000000]              
	float                                              mSlowDuration;                                    		// 0x02B8 (0x0004) [0x0000000000000000]              
	unsigned long                                      mExploded : 1;                                    		// 0x02BC (0x0004) [0x0000000000000000] [0x00000001] 
	class UAudioComponent*                             AmbientSound;                                     		// 0x02C0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< class ASanctumEnemyFlying* >               mAffectedEnemies;                                 		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     mInitialAcceleration;                             		// 0x02D0 (0x000C) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54550 ];

		return pClassPointer;
	};

	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	bool FindAndAssignNewTarget ( );
	void HitAnEnemy ( );
	void eventTick ( float Delta );
	void Launch ( struct FVector Direction, class ASanctumEnemyFlying* Target, int Level );
	void eventDestroyed ( );
	void Init ( struct FVector Direction );
	void eventPostBeginPlay ( );
	void ReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumProjectileKairos::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileMortar
// 0x002C (0x02A0 - 0x0274)
class ASanctumProjectileMortar : public ASanctumProjectile
{
public:
	float                                              mTossZ;                                           		// 0x0274 (0x0004) [0x0000000000000000]              
	class ASanctumProjectileMortar*                    mBuddy;                                           		// 0x0278 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      mMaster : 1;                                      		// 0x027C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      mUseParticles : 1;                                		// 0x027C (0x0004) [0x0000000000000000] [0x00000002] 
	class UParticleSystem*                             mTracerTemplate;                                  		// 0x0280 (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    mParticles;                                       		// 0x0284 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              cSpeed;                                           		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMaxSpeed;                                        		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTossZ;                                           		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cTerminalVelocity;                                		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDamageRadius;                                    		// 0x0298 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDamage;                                          		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54632 ];

		return pClassPointer;
	};

	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Destroyed ( );
	void deattachBeam ( );
	void eventTick ( float Delta );
	void SetToMaster ( );
	void SetBuddy ( class ASanctumProjectileMortar* buddy );
	void PostBeginPlay ( );
	void HitAnEnemy ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumProjectileMortar::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileMortarLight
// 0x0000 (0x0220 - 0x0220)
class USanctumProjectileMortarLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54682 ];

		return pClassPointer;
	};

};

UClass* USanctumProjectileMortarLight::pClassPointer = NULL;

// Class Sanctum.SanctumProjectileSlowLight
// 0x0000 (0x0220 - 0x0220)
class USanctumProjectileSlowLight : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54744 ];

		return pClassPointer;
	};

};

UClass* USanctumProjectileSlowLight::pClassPointer = NULL;

// Class Sanctum.SanctumSapituGlobal
// 0x006C (0x00C8 - 0x005C)
class USanctumSapituGlobal : public USanctumSapitu
{
public:
	TArray< struct FString >                           mUnlockedLevels;                                  		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           mStartedLevels;                                   		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           mEncounteredEnemies;                              		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           mClearedLevels;                                   		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           mWeaponEquip;                                     		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           mHologramEquip;                                   		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStarMapMapping >                   mStarArray;                                       		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBestWaveStruct >                   mBestWaveSurvival;                                		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAchievementMapMapping >            mAchievementMap;                                  		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54944 ];

		return pClassPointer;
	};

	void UpdateWithStars ( TArray< struct FAchievementDetails > Achievements );
	int GetStarsForLevelFromAchievements ( int Index, TArray< struct FAchievementDetails > Achievements );
	void LaunchRetroActiveCheck ( );
	bool stringToGame ( );
	struct FString GetSaveName ( );
	void gameToString ( );
};

UClass* USanctumSapituGlobal::pClassPointer = NULL;

// Class Sanctum.SanctumScout
// 0x0000 (0x04F0 - 0x04F0)
class ASanctumScout : public AUDKScout
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55108 ];

		return pClassPointer;
	};

};

UClass* ASanctumScout::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_ActivateHUD
// 0x0004 (0x0100 - 0x00FC)
class USanctumSeqAct_ActivateHUD : public USequenceAction
{
public:
	unsigned long                                      life : 1;                                         		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Enemies : 1;                                      		// 0x00FC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Resources : 1;                                    		// 0x00FC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      Build : 1;                                        		// 0x00FC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      Notifier : 1;                                     		// 0x00FC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55111 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_ActivateHUD::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_ActivatePopup
// 0x0010 (0x010C - 0x00FC)
class USanctumSeqAct_ActivatePopup : public USequenceAction
{
public:
	struct FString                                     Mid;                                              		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mClickable : 1;                                   		// 0x0108 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55121 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_ActivatePopup::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_ActivatePopupMovie
// 0x000C (0x0108 - 0x00FC)
class USanctumSeqAct_ActivatePopupMovie : public USequenceAction
{
public:
	struct FString                                     mEntryPoint;                                      		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55131 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_ActivatePopupMovie::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_BringUpBuildHUD
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_BringUpBuildHUD : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55138 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_BringUpBuildHUD::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_ClosePopupMovie
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_ClosePopupMovie : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55143 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_ClosePopupMovie::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_ForceOverview
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_ForceOverview : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55149 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_ForceOverview::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_GiefRubel
// 0x0008 (0x0104 - 0x00FC)
class USanctumSeqAct_GiefRubel : public USequenceAction
{
public:
	int                                                Rubel;                                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      InitialRubel : 1;                                 		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55154 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_GiefRubel::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_KillAllEnemies
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_KillAllEnemies : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55162 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_KillAllEnemies::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_LockBuildgun
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_LockBuildgun : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55166 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_LockBuildgun::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_LockNextWave
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_LockNextWave : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55172 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_LockNextWave::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_LockOverview
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_LockOverview : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55176 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_LockOverview::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_LockSellTower
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_LockSellTower : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55180 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_LockSellTower::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_LockWeaponstore
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_LockWeaponstore : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55186 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_LockWeaponstore::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_RemoveOverview
// 0x0004 (0x0100 - 0x00FC)
class USanctumSeqAct_RemoveOverview : public USequenceAction
{
public:
	unsigned long                                      UnForce : 1;                                      		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55192 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_RemoveOverview::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_SaveAuto
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_SaveAuto : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55198 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_SaveAuto::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_SaveCheckpoint
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_SaveCheckpoint : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55203 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_SaveCheckpoint::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_SetLife
// 0x0008 (0x0104 - 0x00FC)
class USanctumSeqAct_SetLife : public USequenceAction
{
public:
	int                                                life;                                             		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Relative : 1;                                     		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      InitialLife : 1;                                  		// 0x0100 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55208 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_SetLife::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_SetNumEnemytypes
// 0x0004 (0x0100 - 0x00FC)
class USanctumSeqAct_SetNumEnemytypes : public USequenceAction
{
public:
	int                                                NumEnemies;                                       		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55215 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_SetNumEnemytypes::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_ShowGameOver
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_ShowGameOver : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55221 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_ShowGameOver::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_ShowMenu
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_ShowMenu : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55226 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_ShowMenu::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_TogglePathNode
// 0x000C (0x0108 - 0x00FC)
class USanctumSeqAct_TogglePathNode : public USequenceAction
{
public:
	int                                                mCost;                                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APathNode*                                   mPathnode;                                        		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mInstigator;                                      		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55231 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* USanctumSeqAct_TogglePathNode::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_ToggleTowerBaseHologram
// 0x0004 (0x0100 - 0x00FC)
class USanctumSeqAct_ToggleTowerBaseHologram : public USequenceAction
{
public:
	unsigned long                                      Hidden : 1;                                       		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55243 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_ToggleTowerBaseHologram::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_UnlockAchievements
// 0x0004 (0x0100 - 0x00FC)
class USanctumSeqAct_UnlockAchievements : public USequenceAction
{
public:
	int                                                AchievementId;                                    		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55249 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_UnlockAchievements::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_UnlockBuildgun
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_UnlockBuildgun : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55255 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_UnlockBuildgun::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_UnlockNextWave
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_UnlockNextWave : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55261 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_UnlockNextWave::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_UnlockOverview
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_UnlockOverview : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55265 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_UnlockOverview::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_UnlockSellTower
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_UnlockSellTower : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55269 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_UnlockSellTower::pClassPointer = NULL;

// Class Sanctum.SanctumSeqAct_UnlockWeaponstore
// 0x0000 (0x00FC - 0x00FC)
class USanctumSeqAct_UnlockWeaponstore : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55275 ];

		return pClassPointer;
	};

	void eventActivated ( );
};

UClass* USanctumSeqAct_UnlockWeaponstore::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_HeavyWave
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_HeavyWave : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55301 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void eventActivated ( );
};

UClass* USanctumSeqEvent_HeavyWave::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_LoadNextLevel
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_LoadNextLevel : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55312 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void notifyLoadLevel ( struct FString Level, class AActor* FromActor );
	void eventActivated ( );
};

UClass* USanctumSeqEvent_LoadNextLevel::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_WaveComplete
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_WaveComplete : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55358 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void notifyWaveComplete ( int Wave, class AActor* FromActor );
	void eventActivated ( );
};

UClass* USanctumSeqEvent_WaveComplete::pClassPointer = NULL;

// Class Sanctum.SanctumSeqEvent_WaveCompleteEndless
// 0x0000 (0x0114 - 0x0114)
class USanctumSeqEvent_WaveCompleteEndless : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55367 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
	void notifyWaveComplete ( int Wave, class AActor* FromActor );
	void eventActivated ( );
};

UClass* USanctumSeqEvent_WaveCompleteEndless::pClassPointer = NULL;

// Class Sanctum.SanctumSettingsGraphics
// 0x0014 (0x0050 - 0x003C)
class USanctumSettingsGraphics : public UObject
{
public:
	unsigned long                                      AmbientOcclusion : 1;                             		// 0x003C (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      DynamicLight : 1;                                 		// 0x003C (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	struct FString                                     Resolution;                                       		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class ASanctumController*                          ThaController;                                    		// 0x004C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55495 ];

		return pClassPointer;
	};

};

UClass* USanctumSettingsGraphics::pClassPointer = NULL;

// Class Sanctum.SanctumSpawnLocationGround
// 0x0000 (0x02E0 - 0x02E0)
class ASanctumSpawnLocationGround : public ASanctumSpawnLocation
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55582 ];

		return pClassPointer;
	};

	void eventPreBeginPlay ( );
};

UClass* ASanctumSpawnLocationGround::pClassPointer = NULL;

// Class Sanctum.SanctumStrawberryfish
// 0x0008 (0x01D0 - 0x01C8)
class ASanctumStrawberryfish : public AActor
{
public:
	int                                                StrawBerryFishID;                                 		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x01CC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55609 ];

		return pClassPointer;
	};

	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
};

UClass* ASanctumStrawberryfish::pClassPointer = NULL;

// Class Sanctum.SanctumTeleporter
// 0x0008 (0x01D0 - 0x01C8)
class ASanctumTeleporter : public AActor
{
public:
	class UStaticMeshComponent*                        mOverviewMesh;                                    		// 0x01C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   mOverviewMaterialInstance;                        		// 0x01CC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 55804 ];

		return pClassPointer;
	};

	struct FVector getLocation ( );
	void StopHighlight ( );
	void StartHighlight ( );
	void StopOverview ( );
	void StartOverview ( );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTeleporter::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeaponAccelerator
// 0x0028 (0x02B0 - 0x0288)
class ASanctumTowerBaseAttachmentWeaponAccelerator : public ASanctumTowerBaseAttachmentWeapon
{
public:
	class ASanctumEnemy*                               mLastEnemy;                                       		// 0x0288 (0x0004) [0x0000000000000000]              
	float                                              mNextCoolDown;                                    		// 0x028C (0x0004) [0x0000000000000000]              
	float                                              cCoolDownReductionFactor;                         		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cMinimumCooldown;                                 		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cPitchSoundMin;                                   		// 0x0298 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cPitchSoundFactor;                                		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mNumberOfConsecutiveHits;                         		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             mRevolveAudioComponent;                           		// 0x02A4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mRevolveSoundCurrentPlayTime;                     		// 0x02A8 (0x0004) [0x0000000000000000]              
	float                                              mPitchWhenLastFired;                              		// 0x02AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56224 ];

		return pClassPointer;
	};

	struct FVector getFireLocation ( );
	void spawnTracer ( struct FVector From, struct FVector to );
	void SetNewCooldown ( );
	bool PreFire ( );
	void PlayFireSound ( struct FVector fireLocation );
	float CalculateNewPitch ( );
	void eventTick ( float Delta );
	void eventPostBeginPlay ( );
};

UClass* ASanctumTowerBaseAttachmentWeaponAccelerator::pClassPointer = NULL;

// Class Sanctum.SanctumWeaponMuzzleFlashAssault
// 0x0000 (0x0220 - 0x0220)
class USanctumWeaponMuzzleFlashAssault : public UUDKExplosionLight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56267 ];

		return pClassPointer;
	};

};

UClass* USanctumWeaponMuzzleFlashAssault::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoAccelerator
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoAccelerator : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56299 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoAccelerator::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoAmpField
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoAmpField : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56361 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoAmpField::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeaponAntiAir
// 0x0028 (0x02B0 - 0x0288)
class ASanctumTowerBaseAttachmentWeaponAntiAir : public ASanctumTowerBaseAttachmentWeapon
{
public:
	struct FVector                                     mFireLocation;                                    		// 0x0288 (0x000C) [0x0000000000000000]              
	TArray< float >                                    cProjectileDamageRadius;                          		// 0x0294 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    cProjectileDamage;                                		// 0x02A0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ASanctumProjectileAntiAir*                   mProjectileArchetype;                             		// 0x02AC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56362 ];

		return pClassPointer;
	};

	void eventTick ( float Delta );
	void fireRocket ( );
	struct FVector getFireLocation ( );
	bool PreFire ( );
};

UClass* ASanctumTowerBaseAttachmentWeaponAntiAir::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoAntiAir
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoAntiAir : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56414 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoAntiAir::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoBlock
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoBlock : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56434 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoBlock::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoElevator
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoElevator : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56538 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoElevator::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeaponGatling
// 0x0014 (0x029C - 0x0288)
class ASanctumTowerBaseAttachmentWeaponGatling : public ASanctumTowerBaseAttachmentWeapon
{
public:
	TArray< float >                                    cSpread;                                          		// 0x0288 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             cMuzzleFlashPSCTemplate;                          		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mMuzzleMax;                                       		// 0x0298 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56539 ];

		return pClassPointer;
	};

	void eventTick ( float Delta );
	void upgradeToLevel ( int NewLevel );
	void CauseMuzzleEffect ( int muzzleNum );
	void PlayFireSound ( struct FVector fireLocation );
	struct FVector getFireLocation ( );
	bool PreFire ( );
};

UClass* ASanctumTowerBaseAttachmentWeaponGatling::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoGatling
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoGatling : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56594 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoGatling::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeaponGauss
// 0x0000 (0x0288 - 0x0288)
class ASanctumTowerBaseAttachmentWeaponGauss : public ASanctumTowerBaseAttachmentWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56595 ];

		return pClassPointer;
	};

	void eventTick ( float Delta );
	void spawnMuzzleFlash ( struct FVector FlashLocation );
	void spawnTracer ( struct FVector From, struct FVector to );
	bool PreFire ( );
};

UClass* ASanctumTowerBaseAttachmentWeaponGauss::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoGauss
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoGauss : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56659 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoGauss::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoHolo
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoHolo : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56701 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoHolo::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeaponKairos
// 0x0010 (0x0298 - 0x0288)
class ASanctumTowerBaseAttachmentWeaponKairos : public ASanctumTowerBaseAttachmentWeapon
{
public:
	struct FVector                                     mFireLocation;                                    		// 0x0288 (0x000C) [0x0000000000000000]              
	class ASanctumProjectileKairos*                    mProjectileArchetype;                             		// 0x0294 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56702 ];

		return pClassPointer;
	};

	void fireProjectile ( );
	struct FVector getFireLocation ( );
	bool PreFire ( );
};

UClass* ASanctumTowerBaseAttachmentWeaponKairos::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoKairos
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoKairos : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56754 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoKairos::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoKillingFloor
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoKillingFloor : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56806 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoKillingFloor::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeaponLightning
// 0x005C (0x02E4 - 0x0288)
class ASanctumTowerBaseAttachmentWeaponLightning : public ASanctumTowerBaseAttachmentWeapon
{
public:
	TArray< int >                                      cBounce;                                          		// 0x0288 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                cBounceRange;                                     		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cBounceDelay;                                     		// 0x0298 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cDamageFallOff;                                   		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mCurrentBounce;                                   		// 0x02A0 (0x0004) [0x0000000000000000]              
	TArray< class ASanctumEnemy* >                     mGotHit;                                          		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FJumpInfo                                   mCurrentJump;                                     		// 0x02B0 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	struct FJumpInfo                                   mReplicatedJumpInfo;                              		// 0x02C8 (0x0018) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned long                                      mReplicateJump : 1;                               		// 0x02E0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56807 ];

		return pClassPointer;
	};

	void spawnTracer ( struct FVector From, struct FVector to );
	void bounceLightning ( );
	bool PreFire ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* ASanctumTowerBaseAttachmentWeaponLightning::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoLightning
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoLightning : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56887 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoLightning::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeaponMortar
// 0x0058 (0x02E0 - 0x0288)
class ASanctumTowerBaseAttachmentWeaponMortar : public ASanctumTowerBaseAttachmentWeapon
{
public:
	struct FVector                                     mCurrentAim;                                      		// 0x0288 (0x000C) [0x0000000000000000]              
	struct FVector                                     mFirstFireLocation;                               		// 0x0294 (0x000C) [0x0000000000000000]              
	struct FVector                                     mSecondFireLocation;                              		// 0x02A0 (0x000C) [0x0000000000000000]              
	struct FVector                                     mTossVelocity;                                    		// 0x02AC (0x000C) [0x0000000000000000]              
	struct FVector                                     mSecondTossVelocity;                              		// 0x02B8 (0x000C) [0x0000000000000000]              
	class ASanctumProjectileMortar*                    mLastProjectile;                                  		// 0x02C4 (0x0004) [0x0000000000000000]              
	float                                              cProjectileDesiredZ;                              		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cProjectileMinZ;                                  		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              cSecondRoundFireDelay;                            		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class ASanctumProjectileMortar* >          cProjectiles;                                     		// 0x02D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56888 ];

		return pClassPointer;
	};

	struct FVector getFireLocation ( );
	void EndFire ( );
	void eventTick ( float Delta );
	void fireSecondMortarRound ( );
	void fireFirstMortarRound ( );
	bool PreFire ( );
	bool AbleToHit ( struct FVector Target );
};

UClass* ASanctumTowerBaseAttachmentWeaponMortar::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoMortar
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoMortar : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56956 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoMortar::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeaponPenetrator
// 0x0004 (0x028C - 0x0288)
class ASanctumTowerBaseAttachmentWeaponPenetrator : public ASanctumTowerBaseAttachmentWeapon
{
public:
	float                                              cDamageReductionFactor;                           		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56957 ];

		return pClassPointer;
	};

	void spawnTracer ( struct FVector From, struct FVector to );
	void PenetratingFire ( struct FVector traceDirection, struct FVector fireLocation );
	void eventTick ( float Delta );
	bool PreFire ( );
};

UClass* ASanctumTowerBaseAttachmentWeaponPenetrator::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoPenetrator
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoPenetrator : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57039 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoPenetrator::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseAttachmentWeaponScatterLaser
// 0x0004 (0x028C - 0x0288)
class ASanctumTowerBaseAttachmentWeaponScatterLaser : public ASanctumTowerBaseAttachmentWeapon
{
public:
	float                                              cMoveHeadThreshold;                               		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57040 ];

		return pClassPointer;
	};

	void spawnTracer ( struct FVector From, struct FVector to );
	void eventTick ( float Delta );
	bool PreFire ( );
};

UClass* ASanctumTowerBaseAttachmentWeaponScatterLaser::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoScatterLaser
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoScatterLaser : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57093 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoScatterLaser::pClassPointer = NULL;

// Class Sanctum.SanctumTowerInfoSlowField
// 0x0000 (0x0064 - 0x0064)
class USanctumTowerInfoSlowField : public USanctumTowerInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57117 ];

		return pClassPointer;
	};

};

UClass* USanctumTowerInfoSlowField::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseBlock
// 0x0000 (0x0254 - 0x0254)
class ASanctumTowerBaseBlock : public ASanctumTowerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57120 ];

		return pClassPointer;
	};

};

UClass* ASanctumTowerBaseBlock::pClassPointer = NULL;

// Class Sanctum.SanctumTowerBaseElevator
// 0x000C (0x0260 - 0x0254)
class ASanctumTowerBaseElevator : public ASanctumTowerBase
{
public:
	TArray< class UActorComponent* >                   mTempComponents;                                  		// 0x0254 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57124 ];

		return pClassPointer;
	};

	void eventPreBeginPlay ( );
};

UClass* ASanctumTowerBaseElevator::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramSell
// 0x0000 (0x01FC - 0x01FC)
class ASanctumTowerHologramSell : public ASanctumTowerHologram
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57323 ];

		return pClassPointer;
	};

	bool AbleToSellOnBase ( class ASanctumTowerBase* TowerBase );
	class UClass* getTowerClass ( );
};

UClass* ASanctumTowerHologramSell::pClassPointer = NULL;

// Class Sanctum.SanctumTowerHologramUpgrade
// 0x0000 (0x01FC - 0x01FC)
class ASanctumTowerHologramUpgrade : public ASanctumTowerHologram
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57334 ];

		return pClassPointer;
	};

	unsigned char AbleToUpgradeOnBase ( class ASanctumTowerBase* TowerBase, int Rubel );
	class UClass* getTowerClass ( );
};

UClass* ASanctumTowerHologramUpgrade::pClassPointer = NULL;

// Class Sanctum.SanctumTowerNavMeshObstacle
// 0x0014 (0x01DC - 0x01C8)
class ASanctumTowerNavMeshObstacle : public AActor
{
public:
	class ANavMeshObstacle*                            mObstacles[ 0x4 ];                                		// 0x01C8 (0x0010) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mDebug : 1;                                       		// 0x01D8 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57359 ];

		return pClassPointer;
	};

	void ToggleOff ( );
	void ToggleOn ( );
	void PostBeginPlay ( );
};

UClass* ASanctumTowerNavMeshObstacle::pClassPointer = NULL;

// Class Sanctum.SanctumTrigger
// 0x0000 (0x01D4 - 0x01D4)
class ASanctumTrigger : public ATrigger
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57368 ];

		return pClassPointer;
	};

	bool UsedBy ( class APawn* User );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* ASanctumTrigger::pClassPointer = NULL;

// Class Sanctum.SanctumWaveSpawnerSinglePlayerAutoScaling
// 0x0004 (0x01F8 - 0x01F4)
class ASanctumWaveSpawnerSinglePlayerAutoScaling : public ASanctumWaveSpawner
{
public:
	float                                              cRubelMod;                                        		// 0x01F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57552 ];

		return pClassPointer;
	};

	void eventPreBeginPlay ( );
};

UClass* ASanctumWaveSpawnerSinglePlayerAutoScaling::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif