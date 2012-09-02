/*
#############################################################################################
# Ravaged Beta (Beta) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: RavagedGame_classes.h
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

#define CONST_MAX_DELTA_TIME                                     0.5
#define CONST_ASPECT_RATIO_ERR                                   0.0001
#define CONST_FakePlayerIndex                                    0
#define CONST_MarkupForNoMapImage                                "UDKFrontEnd.gm_map_none"
#define CONST_SERVERTYPE_LAN                                     0
#define CONST_SERVERTYPE_UNRANKED                                1
#define CONST_SERVERTYPE_RANKED                                  2
#define CONST_MAXIMUM_PLAYER_COUNT                               24
#define CONST_SERVERBROWSER_SERVERTYPE_RANKED                    2
#define CONST_SERVERBROWSER_SERVERTYPE_UNRANKED                  1
#define CONST_SERVERBROWSER_SERVERTYPE_LAN                       0
#define CONST_myDegreeToURot                                     80
#define CONST_IDX_Res_Support                                    4
#define CONST_IDX_Scav_Bandit                                    0
#define CONST_IDX_Scav_Warrior                                   1
#define CONST_IDX_Scav_Bodyguard                                 2
#define CONST_IDX_Scav_Assassin                                  3
#define CONST_IDX_Scav_Grunt                                     4
#define CONST_IDX_Res_Recon                                      0
#define CONST_IDX_Res_Soldier                                    1
#define CONST_IDX_Res_WeaponsSpecialist                          2
#define CONST_IDX_Res_Sniper                                     3

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum RavagedGame.R_Achievements.ER_GameAchievements
/*enum ER_GameAchievements
{
	ERA_WEAPON_HeadShot                                = 0,
	ERA_WEAPON_NutShot                                 = 1,
	ERA_SPREE_Spree5                                   = 2,
	ERA_SPREE_Frenzy                                   = 3,
	ERA_SPREE_Rampage                                  = 4,
	ERA_MATCH_MVP                                      = 5,
	ERA_WEAPON_Executioner                             = 6,
	ERA_MATCH_PointMan                                 = 7,
	ERA_PERSONAL_Avenger                               = 8,
	ERA_MELEE_HittingDingers                           = 9,
	ERA_MELEE_HitStreak                                = 10,
	ERA_UNIQUE_FreshMeat                               = 11,
	ERA_WEAPON_Sterilization                           = 12,
	ERA_VEHICLE_RoadRage                               = 13,
	ERA_VEHICLE_Junker                                 = 14,
	ERA_VEHICLE_DeathFromAbove                         = 15,
	ERA_MATCH_CantShint                                = 16,
	ERA_MATCH_GetDownAgain                             = 17,
	ERA_MATCH_SkullCollector                           = 18,
	ERA_MATCH_MasterBlaster                            = 19,
	ERA_WEAPON_HailMary                                = 20,
	ERA_MISC_BaseJumping                               = 21,
	ERA_VEHICLE_BigAir                                 = 22,
	ERA_MATCH_Tycoon                                   = 23,
	ERA_MATCH_Hoarder                                  = 24,
	ERA_MATCH_Victory                                  = 25,
	ERA_WEAPON_WhatThe                                 = 26,
	ERA_MULTI_DoubleKill                               = 27,
	ERA_MULTI_TripleKill                               = 28,
	ERA_MULTI_QuadrupleKill                            = 29,
	ERA_MULTI_Slaughter                                = 30,
	ERA_UNIQUE_EarlyExit                               = 31,
	ERA_VEHICLE_DogFight                               = 32,
	ERA_MAX                                            = 33
};*/

// Enum RavagedGame.R_AlienFxManager.EAFX_Actions
/*enum EAFX_Actions
{
	EAFX_Idling                                        = 0,
	EAFX_Award                                         = 1,
	EAFX_Walking                                       = 2,
	EAFX_TakingDamage                                  = 3,
	EAFX_Hurting                                       = 4,
	EAFX_SpawnMenu                                     = 5,
	EAFX_PlayerGrabbedCTR                              = 6,
	EAFX_TeamScored                                    = 7,
	EAFX_DeadAndBleeding                               = 8,
	EAFX_MAX                                           = 9
};*/

// Enum RavagedGame.R_Bot.BotClass
/*enum BotClass
{
	eClassNone                                         = 0,
	eClass1                                            = 1,
	eClass2                                            = 2,
	eClass3                                            = 3,
	eClass4                                            = 4,
	eClass5                                            = 5,
	BotClass_MAX                                       = 6
};*/

// Enum RavagedGame.R_DisplayHandler.EDisplayHandlerSortMode
/*enum EDisplayHandlerSortMode
{
	EDHSM_Width                                        = 0,
	EDHSM_Height                                       = 1,
	EDHSM_RefreshRate                                  = 2,
	EDHSM_AspectRatio                                  = 3,
	EDHSM_MAX                                          = 4
};*/

// Enum RavagedGame.R_Objective_ControlPoint.ECapturableTeams
/*enum ECapturableTeams
{
	ECT_SCAVENGERS                                     = 0,
	ECT_RESISTANCE                                     = 1,
	ECT_ALL_TEAMS                                      = 2,
	ECT_MAX                                            = 3
};*/

// Enum RavagedGame.R_Objective_ControlPoint.EStartTeam
/*enum EStartTeam
{
	EST_SCAVENGERS                                     = 0,
	EST_RESISTANCE                                     = 1,
	EST_NEUTRAL                                        = 2,
	EST_MAX                                            = 3
};*/

// Enum RavagedGame.R_GFxChat.eChatType
/*enum eChatType
{
	eTeam                                              = 0,
	ePublic                                            = 1,
	eNone                                              = 2,
	eChatType_MAX                                      = 3
};*/

// Enum RavagedGame.R_GFxFrontEnd_Join.EQueryCompletionAction
/*enum EQueryCompletionAction
{
	QUERYACTION_None                                   = 0,
	QUERYACTION_Default                                = 1,
	QUERYACTION_CloseScene                             = 2,
	QUERYACTION_JoinServer                             = 3,
	QUERYACTION_RefreshAll                             = 4,
	QUERYACTION_MAX                                    = 5
};*/

// Enum RavagedGame.R_GFxFrontEnd_Join.ESortMode
/*enum ESortMode
{
	ESBSM_PingHighToLow                                = 0,
	ESBSM_PingLowToHigh                                = 1,
	ESBSM_PlayersHighToLow                             = 2,
	ESBSM_PlayersLowToHigh                             = 3,
	ESBSM_ServerNameAtoZ                               = 4,
	ESBSM_ServerNameZtoA                               = 5,
	ESBSM_MapNameAtoZ                                  = 6,
	ESBSM_MapNameZtoA                                  = 7,
	ESBSM_GameModeAtoZ                                 = 8,
	ESBSM_GameModeZtoA                                 = 9,
	ESBSM_MAX                                          = 10
};*/

// Enum RavagedGame.R_GFxHUD.ePawnType
/*enum ePawnType
{
	pDead                                              = 0,
	pOnFoot                                            = 1,
	pDriver                                            = 2,
	pDriverWithWeapons                                 = 3,
	pWeaponSeat                                        = 4,
	pPassenger                                         = 5,
	ePawnType_MAX                                      = 6
};*/

// Enum RavagedGame.R_GFxHUD.eStanceType
/*enum eStanceType
{
	Up                                                 = 0,
	Crouched                                           = 1,
	proned                                             = 2,
	eStanceType_MAX                                    = 3
};*/

// Enum RavagedGame.R_GFxSpawnMenu.WeaponType
/*enum WeaponType
{
	NoWeap                                             = 0,
	Primary                                            = 1,
	Secondary                                          = 2,
	Melee                                              = 3,
	Throwable                                          = 4,
	WeaponType_MAX                                     = 5
};*/

// Enum RavagedGame.R_GFxSpawnMenuMap.ESpawnPointActorType
/*enum ESpawnPointActorType
{
	AT_Vehicle                                         = 0,
	AT_Objective                                       = 1,
	AT_MAX                                             = 2
};*/

// Enum RavagedGame.R_LeaderboardDataRead.ERavagedStats
/*enum ERavagedStats
{
	ERS_LEADERBOARD                                    = 0,
	ERS_KILLS                                          = 1,
	ERS_KILL_ASSISTS                                   = 2,
	ERS_DEATHS                                         = 3,
	ERS_VICTORIES                                      = 4,
	ERS_DEFEATS                                        = 5,
	ERS_TIME_PLAYED                                    = 6,
	ERS_VEHICLE_KILLS                                  = 7,
	ERS_BASES_CAPTURED                                 = 8,
	ERS_RESOURCES_CAPTURED                             = 9,
	ERS_MAX                                            = 10
};*/

// Enum RavagedGame.R_LeaderboardDataWrite.ERavagedStats
/*enum ERavagedStats
{
	ERS_LEADERBOARD                                    = 0,
	ERS_KILLS                                          = 1,
	ERS_KILL_ASSISTS                                   = 2,
	ERS_DEATHS                                         = 3,
	ERS_VICTORIES                                      = 4,
	ERS_DEFEATS                                        = 5,
	ERS_TIME_PLAYED                                    = 6,
	ERS_VEHICLE_KILLS                                  = 7,
	ERS_BASES_CAPTURED                                 = 8,
	ERS_RESOURCES_CAPTURED                             = 9,
	ERS_MAX                                            = 10
};*/

// Enum RavagedGame.R_LeaderboardScoreRead.ERavagedStats
/*enum ERavagedStats
{
	ERS_LEADERBOARD                                    = 0,
	ERS_KILLS                                          = 1,
	ERS_KILL_ASSISTS                                   = 2,
	ERS_DEATHS                                         = 3,
	ERS_VICTORIES                                      = 4,
	ERS_DEFEATS                                        = 5,
	ERS_TIME_PLAYED                                    = 6,
	ERS_VEHICLE_KILLS                                  = 7,
	ERS_BASES_CAPTURED                                 = 8,
	ERS_RESOURCES_CAPTURED                             = 9,
	ERS_MAX                                            = 10
};*/

// Enum RavagedGame.R_LeaderboardScoreWrite.ERavagedStats
/*enum ERavagedStats
{
	ERS_LEADERBOARD                                    = 0,
	ERS_KILLS                                          = 1,
	ERS_KILL_ASSISTS                                   = 2,
	ERS_DEATHS                                         = 3,
	ERS_VICTORIES                                      = 4,
	ERS_DEFEATS                                        = 5,
	ERS_TIME_PLAYED                                    = 6,
	ERS_VEHICLE_KILLS                                  = 7,
	ERS_BASES_CAPTURED                                 = 8,
	ERS_RESOURCES_CAPTURED                             = 9,
	ERS_MAX                                            = 10
};*/

// Enum RavagedGame.R_Pawn.EProneAimLimitType
/*enum EProneAimLimitType
{
	EPALT_HomeLike                                     = 0,
	EPALT_PushUp                                       = 1,
	EPALT_SnapLevel                                    = 2,
	EPALT_MAX                                          = 3
};*/

// Enum RavagedGame.R_Pawn.EWeaponRepSound
/*enum EWeaponRepSound
{
	EWRS_StopFiring                                    = 0,
	EWRS_MAX                                           = 1
};*/

// Enum RavagedGame.R_Pawn.EWeaponAnim
/*enum EWeaponAnim
{
	EWA_Reload                                         = 0,
	EWA_Taunt                                          = 1,
	EWA_Reload2                                        = 2,
	EWA_Reload3                                        = 3,
	EWA_MAX                                            = 4
};*/

// Enum RavagedGame.R_PlayerController.PlayerClass
/*enum PlayerClass
{
	eClassNone                                         = 0,
	eClass1                                            = 1,
	eClass2                                            = 2,
	eClass3                                            = 3,
	eClass4                                            = 4,
	eClass5                                            = 5,
	PlayerClass_MAX                                    = 6
};*/

// Enum RavagedGame.R_PlayerController.ERavagedStats
/*enum ERavagedStats
{
	ERS_LEADERBOARD                                    = 0,
	ERS_KILLS                                          = 1,
	ERS_KILL_ASSISTS                                   = 2,
	ERS_DEATHS                                         = 3,
	ERS_VICTORIES                                      = 4,
	ERS_DEFEATS                                        = 5,
	ERS_TIME_PLAYED                                    = 6,
	ERS_VEHICLE_KILLS                                  = 7,
	ERS_BASES_CAPTURED                                 = 8,
	ERS_RESOURCES_CAPTURED                             = 9,
	ERS_MAX                                            = 10
};*/

// Enum RavagedGame.R_Resource_Depot.EDepotTeam
/*enum EDepotTeam
{
	EDT_SCAVENGERS                                     = 0,
	EDT_RESISTANCE                                     = 1,
	EDT_NEITHER_TEAM                                   = 2,
	EDT_MAX                                            = 3
};*/

// Enum RavagedGame.R_ThrustMapInfo.ClockAction
/*enum ClockAction
{
	STOP_COUNTING                                      = 0,
	KEEP_COUNTING                                      = 1,
	COUNT_BACK_UP                                      = 2,
	ClockAction_MAX                                    = 3
};*/

// Enum RavagedGame.R_Vehicle.EArmorType
/*enum EArmorType
{
	EAT_ExtraLight                                     = 0,
	EAT_Light                                          = 1,
	EAT_Medium                                         = 2,
	EAT_Heavy                                          = 3,
	EAT_MAX                                            = 4
};*/

// Enum RavagedGame.R_VehicleWeapon.EWeaponMagState
/*enum EWeaponMagState
{
	EWMS_Reloading                                     = 0,
	EWMS_None                                          = 1,
	EWMS_MAX                                           = 2
};*/

// Enum RavagedGame.R_Weapon.E_RZoomState
/*enum E_RZoomState
{
	R_ZST_NotZoomed                                    = 0,
	R_ZST_ZoomingInAnim                                = 1,
	R_ZST_ZoomingInFOV                                 = 2,
	R_ZST_ZoomingOutFOV                                = 3,
	R_ZST_ZoomingOutAnim                               = 4,
	R_ZST_Zoomed                                       = 5,
	R_ZST_MAX                                          = 6
};*/

// Enum RavagedGame.R_Weapon.EAmmoDisplayType
/*enum EAmmoDisplayType
{
	Ammo_MagWeapon                                     = 0,
	Ammo_FusedWeapon                                   = 1,
	Ammo_ThrowingKnife                                 = 2,
	Ammo_Melee                                         = 3,
	Ammo_MAX                                           = 4
};*/

// Enum RavagedGame.R_Weapon.ELoadoutType
/*enum ELoadoutType
{
	LO_Primary                                         = 0,
	LO_Secondary                                       = 1,
	LO_Melee                                           = 2,
	LO_Throwable                                       = 3,
	LO_MAX                                             = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class RavagedGame.R_AlienFX
// 0x000C (0x0048 - 0x003C)
class UR_AlienFX : public UObject
{
public:
	int                                                NumDevices;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	struct FColor                                      LastColor;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      EnableAlienFX : 1;                                		// 0x0044 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1526 ];

		return pClassPointer;
	};

	void SetColor ( struct FColor newColor );
	int PackColor ( struct FColor Col );
	bool SameColor ( struct FColor A, struct FColor B );
	void UpdateLights ( );
	void SetDeviceLightColorNoUpdate ( int Dev, int Light, int R, int G, int B, int A );
	int GetNumLights ( int DeviceNum );
	void NativeSetAllLight ( int packedCol );
	int GetNumDevicesDoNotCall ( );
	void SetColorDoNotCall ( int R, int G, int B, int A );
};

UClass* UR_AlienFX::pClassPointer = NULL;

// Class RavagedGame.R_CombatVolume
// 0x000C (0x020C - 0x0200)
class AR_CombatVolume : public AEnvironmentVolume
{
public:
	unsigned long                                      bLandVolume : 1;                                  		// 0x0200 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAirVolume : 1;                                   		// 0x0200 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	int                                                OutOfBoundsTimeLand;                              		// 0x0204 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                OutOfBoundsTimeAir;                               		// 0x0208 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1527 ];

		return pClassPointer;
	};

	bool GetReEntryPoint ( struct FVector Position, struct FVector* ReEntryPosition );
};

UClass* AR_CombatVolume::pClassPointer = NULL;

// Class RavagedGame.R_DisplayHandler
// 0x0028 (0x0064 - 0x003C)
class UR_DisplayHandler : public UObject
{
public:
	TArray< struct FAspectRatioInfo >                  PossibleAspectRatios;                             		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMonitorResolutionInfo >            DisplayResolutions;                               		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      CurrentSortMode;                                  		// 0x0054 (0x0001) [0x0000000000000000]              
	struct FScriptDelegate                             __ResolutionSort__Delegate;                       		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1528 ];

		return pClassPointer;
	};

	int ResolutionSort ( struct FMonitorResolutionInfo A, struct FMonitorResolutionInfo B );
	void Resort ( unsigned char NewSortMode );
	struct FString GetAspectRatioString ( int Idx );
	void CalculateAspectRatios ( );
	bool PopulateResolutions ( unsigned long bAutoSort );
	void VerifyPossibleAspectRatios ( );
	bool Equals ( float A, float B );
	void SetMaxSmoothedFrameRate ( int maxFPS );
	int GetMaxSmoothedFrameRate ( );
	void SetDefaultGamma ( );
	void SetGamma ( float decimalValue );
	void SetDynamicDecals ( unsigned long B );
	void SetPostprocess ( unsigned long B );
	void SetFullscreenMode ( int Mode );
	void SetVSync ( unsigned long B );
	void SetShadowDetail ( int Level );
	void SetTextureDetail ( int Level );
	void SetAFLevel ( int Level );
	void SetPostProcessingAALevel ( int Level );
	void SetMSAAEnabled ( int Level );
	void SetOverallQualityLevel ( int Level );
	bool GetNativeResolutions ( TArray< struct FMonitorResolutionInfo >* RezArray );
	void SetResolution ( int ResX, int ResY );
	float GetGamma ( );
	bool GetDynamicDecals ( );
	int GetPostprocessEffectsEnabled ( );
	int GetFullscreenMode ( );
	bool GetVSync ( );
	void GetDesktopResolution ( int* ResX, int* ResY );
	void GetResolution ( int* ResX, int* ResY );
	int GetAFLevel ( );
	int GetPostProcessingAALevel ( );
	int GetMSAALevel ( );
	int GetShadowDetail ( );
	int GetTextureDetail ( );
	int GetOverallQuality ( );
	void SetDefaultOverallQuality ( );
	void RevertSystemSettings ( );
	void ApplyCurrentSystemSettings ( unsigned long writeToIni );
	void InitCurrentSystemSettings ( );
};

UClass* UR_DisplayHandler::pClassPointer = NULL;

// Class RavagedGame.R_LadderVolume
// 0x0014 (0x027C - 0x0268)
class AR_LadderVolume : public ALadderVolume
{
public:
	float                                              HideWeaponAnimTime;                               		// 0x0268 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPlayArmsPutDownAnim : 1;                         		// 0x026C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              RungDistance;                                     		// 0x0270 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BottomRungOffset;                                 		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VolumeBottom;                                     		// 0x0278 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1529 ];

		return pClassPointer;
	};

	void eventPawnLeavingVolume ( class APawn* P );
	void eventPawnEnteredVolume ( class APawn* P );
	void eventPostBeginPlay ( );
};

UClass* AR_LadderVolume::pClassPointer = NULL;

// Class RavagedGame.R_Minimap
// 0x0124 (0x0160 - 0x003C)
class UR_Minimap : public UObject
{
public:
	class UFont*                                       NumericFont;                                      		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AR_HUD*                                      OwnerHUD;                                         		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APlayerController*                           LocalPC;                                          		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UR_MapInfo*                                  rMapInfo;                                         		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     MapCenterWorld;                                   		// 0x004C (0x000C) [0x0000000000000000]              
	float                                              MapExtentWorld;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              ViewScale;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              FlashValue;                                       		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ControlPointFlashFactor;                          		// 0x0064 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              ResourceFlashFactor;                              		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              VehicleResourceFlashFactor;                       		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MapSizeScaleAmount;                               		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     MapOffsetWorld;                                   		// 0x0074 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              MapExpandToFullSpeed;                             		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              MapShrinkToNormalSpeed;                           		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              FullSizeInset;                                    		// 0x0088 (0x0004) [0x0000000000000000]              
	unsigned char                                      MapSizeState;                                     		// 0x008C (0x0001) [0x0000000000000000]              
	struct FVector2D                                   MapWindowLocation;                                		// 0x0090 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   MapWindowBottomRight;                             		// 0x0098 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   MapWindowCenterLocation;                          		// 0x00A0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              MapWindowSize;                                    		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   MapLocationScreen;                                		// 0x00AC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   MapCenterScreen;                                  		// 0x00B4 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              MapSizeScreen;                                    		// 0x00BC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  MapBorder;                                        		// 0x00C0 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  MapTexture;                                       		// 0x00C4 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                MapBorderDrawColor;                               		// 0x00C8 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                EmptyVehicleColor;                                		// 0x00D8 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                LocalPlayerColor;                                 		// 0x00E8 (0x0010) [0x0000000000000000]              
	float                                              CurZoomf;                                         		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              NormalZoomf;                                      		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              MaxZoomf;                                         		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              MinZoomf;                                         		// 0x0104 (0x0004) [0x0000000000000000]              
	float                                              NewZoomf;                                         		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              OldZoomf;                                         		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              ZoomSpeed;                                        		// 0x0110 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   OffEdgeTexCoordsTopLeft;                          		// 0x0114 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   OffEdgeTexCoordsBottomRight;                      		// 0x011C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AR_Objective* >                      ControlPoints;                                    		// 0x0124 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class AR_Object_CTR* >                     Resources;                                        		// 0x0130 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bClampControlPoints : 1;                          		// 0x013C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClampResources : 1;                              		// 0x013C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClampVehicles : 1;                               		// 0x013C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bClampPawns : 1;                                  		// 0x013C (0x0004) [0x0000000000000000] [0x00000008] 
	class UMaterialInstanceConstant*                   MapMaterialInstance;                              		// 0x0140 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterial*                                   MapMaterialReference;                             		// 0x0144 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  PlayerIcon;                                       		// 0x0148 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   PlayerIconSize;                                   		// 0x014C (0x0008) [0x0000000000000000]              
	class UTexture2D*                                  PawnIcon;                                         		// 0x0154 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   PawnIconIconSize;                                 		// 0x0158 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1530 ];

		return pClassPointer;
	};

	void ToggleFullMap ( );
	void eventResizeFinished ( );
	void SetZoom ( float Amount );
	void GetFullMapSizeAndLoc ( float ClipX, float ClipY, float* Size, struct FVector2D* Loc );
	void GetSmallMapSizeAndLoc ( float ClipY, float* Size, struct FVector2D* Loc );
	bool IsOnMap ( struct FVector Location );
	struct FVector GetHUDLocationNative ( struct FVector InLocation );
	void DrawResources ( class UCanvas* Canvas );
	void DrawControlPoints ( class UCanvas* Canvas );
	void DrawPawnsNative ( class UCanvas* Canvas );
	void RenderNative ( class UCanvas* Canvas );
	void Cleanup ( );
	void Initialize ( class APlayerController* rPC, class AR_HUD* rHUD );
};

UClass* UR_Minimap::pClassPointer = NULL;

// Class RavagedGame.R_NoProneVolume
// 0x0000 (0x0234 - 0x0234)
class AR_NoProneVolume : public APhysicsVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1531 ];

		return pClassPointer;
	};

	void eventPawnLeavingVolume ( class APawn* Other );
	void eventPawnEnteredVolume ( class APawn* Other );
};

UClass* AR_NoProneVolume::pClassPointer = NULL;

// Class RavagedGame.R_Object_CTR
// 0x00D0 (0x03BC - 0x02EC)
class AR_Object_CTR : public AUTCarriedObject
{
public:
	float                                              PointsCaptureTeam;                                		// 0x02EC (0x0004) [0x0000000000000000]              
	float                                              PointsCapturer;                                   		// 0x02F0 (0x0004) [0x0000000000000000]              
	float                                              PointsFirstCarrier;                               		// 0x02F4 (0x0004) [0x0000000000000000]              
	float                                              PointsVehicleAssist;                              		// 0x02F8 (0x0004) [0x0000000000000000]              
	float                                              PointsReturn;                                     		// 0x02FC (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        StatMesh;                                         		// 0x0300 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             RespawnEffect;                                    		// 0x0304 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBringUpBright : 1;                               		// 0x0308 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBringDownFromBright : 1;                         		// 0x0308 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFadingOut : 1;                                   		// 0x0308 (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bRespawning : 1;                                  		// 0x0308 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bWasClothEnabled : 1;                             		// 0x0308 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsBlinkVis : 1;                                  		// 0x0308 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bNoTeam : 1;                                      		// 0x0308 (0x0004) [0x0000000000000000] [0x00000040] 
	TArray< class UMaterialInstanceConstant* >         MICArray;                                         		// 0x030C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     RunningClothVelClamp;                             		// 0x0318 (0x000C) [0x0000000000000000]              
	struct FVector                                     HoverboardingClothVelClamp;                       		// 0x0324 (0x000C) [0x0000000000000000]              
	class UParticleSystemComponent*                    SuccessfulCaptureSystem;                          		// 0x0330 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0334 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LastLocationPingTime;                             		// 0x0338 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  FriendlyHomeHUDTexture;                           		// 0x033C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   FriendlyHomeHUDTextureSize;                       		// 0x0340 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FriendlyHomeHUDTextureScaling;                    		// 0x0348 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  FriendlyTakenHUDTexture;                          		// 0x034C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   FriendlyTakenHUDTextureSize;                      		// 0x0350 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FriendlyTakenHUDTextureScaling;                   		// 0x0358 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  EnemyHUDHomeTexture;                              		// 0x035C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   EnemyHUDHomeTextureSize;                          		// 0x0360 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyHUDHomeTextureScaling;                       		// 0x0368 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  EnemyHUDTakenTexture;                             		// 0x036C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   EnemyHUDTakenTextureSize;                         		// 0x0370 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              EnemyHUDTakenTextureScaling;                      		// 0x0378 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  FriendlyHomeMiniMapTexture;                       		// 0x037C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   FriendlyHomeMiniMapIconSize;                      		// 0x0380 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  FriendlyTakenMiniMapTexture;                      		// 0x0388 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   FriendlyTakenMiniMapIconSize;                     		// 0x038C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  EnemyMiniMapHomeTexture;                          		// 0x0394 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   EnemyMiniMapHomeIconSize;                         		// 0x0398 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  EnemyMiniMapTakenTexture;                         		// 0x03A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   EnemyMiniMapTakenIconSize;                        		// 0x03A4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              HUD1PZOffset;                                     		// 0x03AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      CTR_DrawColor;                                    		// 0x03B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BlinkPeriod;                                      		// 0x03B4 (0x0004) [0x0000000000000000]              
	float                                              DistanceFromViewer;                               		// 0x03B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1533 ];

		return pClassPointer;
	};

	void BroadcastTakenDroppedMessage ( class AController* EventInstigator );
	void BroadcastTakenFromBaseMessage ( class AController* EventInstigator );
	void BroadcastDroppedMessage ( class AController* EventInstigator );
	void BroadcastReturnedMessage ( );
	void SetFlagDynamicLightToNotBeDynamic ( );
	void SetFlagPropertiesToStationaryFlagState ( );
	void Drop ( class AController* Killer );
	void CustomFadeOutEffects ( );
	void bringUpBrightOff ( );
	void CustomRespawnEffects ( );
	void SameTeamTouch ( class AController* C );
	bool ValidHolder ( class AActor* Other );
	void SetHolder ( class AController* C );
	void ClientReturnedHome ( );
	bool ShouldMinimapRenderFor ( class APlayerController* PC );
	void eventOnBaseChainChanged ( );
	void Tick ( float DeltaTime );
	void RegisterWithGRI ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void BlinkHUD ( );
};

UClass* AR_Object_CTR::pClassPointer = NULL;

// Class RavagedGame.R_Objective
// 0x0060 (0x0450 - 0x03F0)
class AR_Objective : public AUTGameObjective
{
public:
	class UTexture2D*                                  IconTexture;                                      		// 0x03F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseTeamColorForIcon : 1;                         		// 0x03F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHudVisible : 1;                                  		// 0x03F4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class UTexture*                                    SpawnMenuTexture;                                 		// 0x03F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  FriendlyHUDTexture;                               		// 0x03FC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  EnemyHUDTexture;                                  		// 0x0400 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  NeutralHUDTexture;                                		// 0x0404 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   FriendlyHUDTextureSize;                           		// 0x0408 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   EnemyHUDTextureSize;                              		// 0x0410 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   NeutralHUDTextureSize;                            		// 0x0418 (0x0008) [0x0000000000000000]              
	float                                              FriendlyHUDTextureScaling;                        		// 0x0420 (0x0004) [0x0000000000000000]              
	float                                              EnemyHUDTextureScaling;                           		// 0x0424 (0x0004) [0x0000000000000000]              
	float                                              NeutralHUDTextureScaling;                         		// 0x0428 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  FriendlyMinimapTexture;                           		// 0x042C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  EnemyMinimapTexture;                              		// 0x0430 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  NeutralMinimapTexture;                            		// 0x0434 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   FriendlyMinimapTextureSize;                       		// 0x0438 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   EnemyMinimapTextureSize;                          		// 0x0440 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   NeutralMinimapTextureSize;                        		// 0x0448 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1535 ];

		return pClassPointer;
	};

};

UClass* AR_Objective::pClassPointer = NULL;

// Class RavagedGame.R_Objective_ControlPoint
// 0x00CC (0x051C - 0x0450)
class AR_Objective_ControlPoint : public AR_Objective
{
public:
	unsigned char                                      CapturableBy;                                     		// 0x0450 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StartingTeam;                                     		// 0x0451 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CapturingTeamIndex;                               		// 0x0452 (0x0001) [0x0000000000000000]              
	TArray< class AR_PlayerStart* >                    PlayerSpawnLocations;                             		// 0x0454 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class AR_Objective_VehicleFactory* >       ObjectiveVehicleFactories;                        		// 0x0460 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CapPerSecond;                                     		// 0x046C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CapAdditionalMod;                                 		// 0x0470 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CapPerSecMax;                                     		// 0x0474 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentCaptureRate;                               		// 0x0478 (0x0004) [0x0000000000002021]              ( CPF_Edit | CPF_Net | CPF_Transient )
	float                                              FlagVirtualPosition;                              		// 0x047C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              FlagPhysicalPosition;                             		// 0x0480 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FullMastReturnRate;                               		// 0x0484 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUpdateVirtualPos : 1;                            		// 0x0488 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bIsUsingActiveTimePeriod : 1;                     		// 0x0488 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUseHemisphericalRadius : 1;                      		// 0x0488 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bCapturerMustHaveLineOfSight : 1;                 		// 0x0488 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              PointsNeutralize;                                 		// 0x048C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PointsNeutralizeAssist;                           		// 0x0490 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PointsCapture;                                    		// 0x0494 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PointsCaptureTeam;                                		// 0x0498 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PointsCaptureAssist;                              		// 0x049C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LargeTriggerRadiusSq;                             		// 0x04A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InactiveTimePeriod;                               		// 0x04A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ActiveTimePeriod;                                 		// 0x04A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HemisphereZDelta;                                 		// 0x04AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastAwardedPoints;                                		// 0x04B0 (0x0004) [0x0000000000000000]              
	class AController*                                 PlayerScorer;                                     		// 0x04B4 (0x0004) [0x0000000000000000]              
	TArray< struct FCapturingController >              T0CapControllers;                                 		// 0x04B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FCapturingController >              T1CapControllers;                                 		// 0x04C4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class USkeletalMeshComponent*                      PoleSkel;                                         		// 0x04D0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USkeletalMeshComponent*                      FlagSkel;                                         		// 0x04D4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInterface*                          FlagMats[ 0x3 ];                                  		// 0x04D8 (0x000C) [0x0000000000000000]              
	float                                              FlagWindVaryPercent;                              		// 0x04E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastAlarmTime;                                    		// 0x04E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinTimeBetweenAlarms;                             		// 0x04EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FlagFullStaffTranslation;                         		// 0x04F0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FlagFullMastTranslation;                          		// 0x04FC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     FlagLowMastTranslation;                           		// 0x0508 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   AmbientSoundCue;                                  		// 0x0514 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             AmbientSoundComponent;                            		// 0x0518 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1536 ];

		return pClassPointer;
	};

	void eventUpdateFlag ( float DT );
	void UpdateFlagNative ( float DT );
	void eventCaptured ( class AR_PlayerController* Scorer, unsigned long bNeutralized );
	void BaseTimer ( );
	bool NearObjective ( class APawn* P );
	void ResetObjectiveStatus ( );
	bool IsCaptured ( );
	bool eventIsActive ( );
	void UpdateWindFromMap ( );
	void ActivateTeamMesh ( );
	void ActivateFactories ( );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AR_Objective_ControlPoint::pClassPointer = NULL;

// Class RavagedGame.R_Pawn_Native
// 0x0010 (0x0934 - 0x0924)
class AR_Pawn_Native : public AUTPawn
{
public:
	class AVolume*                                     CombatVolume;                                     		// 0x0924 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                OutOfCombatTime;                                  		// 0x0928 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      bOutOfBounds : 1;                                 		// 0x092C (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	float                                              MaxStepHeightCrouched;                            		// 0x0930 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1538 ];

		return pClassPointer;
	};

	void OutOfCombatTimer ( );
	void eventExitCombatVolume ( );
	void eventEnterCombatVolume ( );
	void eventStartCrouch ( float HeightAdjust );
	void eventEndCrouch ( float HeightAdjust );
	void SetMaxStepHeight ( float NewMaxStepHeight );
	void NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
};

UClass* AR_Pawn_Native::pClassPointer = NULL;

// Class RavagedGame.R_SoundNodePerspectiveSwitch
// 0x0004 (0x0050 - 0x004C)
class UR_SoundNodePerspectiveSwitch : public USoundNode
{
public:
	unsigned long                                      bPreviewInThirdPerson : 1;                        		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTickPositionUpdate : 1;                          		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1539 ];

		return pClassPointer;
	};

	void eventStartUpNode ( class UAudioComponent* AC, int NodeIndex );
};

UClass* UR_SoundNodePerspectiveSwitch::pClassPointer = NULL;

// Class RavagedGame.R_SoundNodeWeapDistXFade
// 0x0008 (0x0060 - 0x0058)
class UR_SoundNodeWeapDistXFade : public USoundNodeDistanceCrossFade
{
public:
	float                                              PreviewDistance;                                  		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTickPositionUpdate : 1;                          		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1540 ];

		return pClassPointer;
	};

	void eventStartUpNode ( class UAudioComponent* AC, float Dist, unsigned char ActiveChildMask, float Vol1, float Vol2 );
	void eventShowOwner ( class UAudioComponent* act1, class AActor* act2 );
};

UClass* UR_SoundNodeWeapDistXFade::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Engine
// 0x0098 (0x00E0 - 0x0048)
class UR_Vehicle_Engine : public UComponent
{
public:
	float                                              RPMMax;                                           		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentThrottle;                                  		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ThrottleGoverning;                                		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentEngineOutput;                              		// 0x0054 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ThrottleIdle;                                     		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ThrottleAccelRate;                                		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ThrottleDeccelRate;                               		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   CurrentEngineRotation;                            		// 0x0064 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FVector2D                                   CurrentEngineRotationTarget;                      		// 0x006C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              TorqueFactor;                                     		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   RotInputFactor;                                   		// 0x0078 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   RotMin;                                           		// 0x0080 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   RotMax;                                           		// 0x0088 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   RotChaseSpeed;                                    		// 0x0090 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     PositionRelative;                                 		// 0x0098 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DirectionRelative;                                		// 0x00A4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Input1RotAxis;                                    		// 0x00B0 (0x000C) [0x0000000000000000]              
	struct FVector                                     Input2RotAxis;                                    		// 0x00BC (0x000C) [0x0000000000000000]              
	struct FVector                                     CurrentDirection;                                 		// 0x00C8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIdledUp : 1;                                     		// 0x00D4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              EngineStartTime;                                  		// 0x00D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinInput;                                         		// 0x00DC (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1541 ];

		return pClassPointer;
	};

	struct FVector GetLocalForce ( );
	struct FVector GetLocalTorque ( );
	struct FVector NativeGetLocalTorque ( );
	void NativeUpdateEngine ( );
	void NativeApplyInputs ( float InThrottle, float InX, float InY, float DT );
	void InitEngine ( );
};

UClass* UR_Vehicle_Engine::pClassPointer = NULL;

// Class RavagedGame.R_VehicleSim_Heli
// 0x0028 (0x00B8 - 0x0090)
class UR_VehicleSim_Heli : public USVehicleSimBase
{
public:
	TArray< class UR_Vehicle_Engine* >                 HeliEngines;                                      		// 0x0090 (0x000C) [0x0000000004480009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	struct FVector                                     DragLinear;                                       		// 0x009C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              Drag;                                             		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseMouseInputCurve : 1;                          		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MouseInputCurveYawPoint;                          		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              MouseInputCurvePitchPoint;                        		// 0x00B4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1542 ];

		return pClassPointer;
	};

	void SetEnginesIdled ( unsigned long bIdledState );
	void InitEngines ( );
};

UClass* UR_VehicleSim_Heli::pClassPointer = NULL;

// Class RavagedGame.R_VehicleSimCar
// 0x013C (0x0288 - 0x014C)
class UR_VehicleSimCar : public UUDKVehicleSimCar
{
public:
	unsigned long                                      bIdledUp : 1;                                     		// 0x014C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bEngineWindupFourWheelsOffGround : 1;             		// 0x014C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAutoCenterLean : 1;                              		// 0x014C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAutoEjectWhenUpsideDown : 1;                     		// 0x014C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bTrackChassisTouching : 1;                        		// 0x014C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bTrackChassisTouchingStarted : 1;                 		// 0x014C (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bTrackChassisTouchingResult : 1;                  		// 0x014C (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bAWheelWasOnGround : 1;                           		// 0x014C (0x0004) [0x0000000000000000] [0x00000080] 
	float                                              WheelLatExtremumSlipSlow;                         		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLatExtremumValueSlow;                        		// 0x0154 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLatAsymptoteSlipSlow;                        		// 0x0158 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLatAsymptoteValueSlow;                       		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLatExtremumSlipFast;                         		// 0x0160 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLatExtremumValueFast;                        		// 0x0164 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLatAsymptoteSlipFast;                        		// 0x0168 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLatAsymptoteValueFast;                       		// 0x016C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLatLerpSpeedStart;                           		// 0x0170 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLatLerpSpeedEnd;                             		// 0x0174 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WheelLatState;                                    		// 0x0178 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      RearSlipState;                                    		// 0x0179 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              RearSlipMinIn;                                    		// 0x017C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RearSlipMinOut;                                   		// 0x0180 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RearSlipMaxIn;                                    		// 0x0184 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RearSlipMaxOut;                                   		// 0x0188 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RearSlip;                                         		// 0x018C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FInterpCurveFloat                           SteerSpeedCurve;                                  		// 0x0190 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       VehicleSpeedParamName;                            		// 0x01A0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DriveTrainRPMParamName;                           		// 0x01A8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              EngineWindUpFactor;                               		// 0x01B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FInterpCurveFloat                           EngineWindupCurve;                                		// 0x01B4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              EngineWindUpSpeed;                                		// 0x01C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EngineWindDownSpeed;                              		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EngineWindUpMin;                                  		// 0x01CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EngineWindUpMax;                                  		// 0x01D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EngineSnapDownSpeed;                              		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EngineSnapUpSpeed;                                		// 0x01D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LeanRightTorquePos;                               		// 0x01DC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LeanLeftTorquePos;                                		// 0x01E8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LeanForwardTorquePos;                             		// 0x01F4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LeanBackwardTorquePos;                            		// 0x0200 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeanTorqueMax;                                    		// 0x020C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeanTorqueCurrentMag;                             		// 0x0210 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              AutoCenterLeanFactor;                             		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   RotInputFactor;                                   		// 0x0218 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     NetTorqueVectPos;                                 		// 0x0220 (0x000C) [0x0000000000000000]              
	struct FVector                                     NetTorqueVectDir;                                 		// 0x022C (0x000C) [0x0000000000000000]              
	float                                              JumpAmount;                                       		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpAnimLerpUpTime;                               		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpAnimLerpUpTimes[ 0x5 ];                       		// 0x0240 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpAnimLerpDownTime;                             		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpAnimAmounts[ 0x5 ];                           		// 0x0258 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	float                                              AutoEjectMinZ;                                    		// 0x026C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ChassisTrackStartTime;                            		// 0x0270 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ChassisTrackActivateTime;                         		// 0x0274 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastWheelOnGroundLocation;                        		// 0x0278 (0x000C) [0x0000000000000000]              
	float                                              TakeOffTime;                                      		// 0x0284 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1543 ];

		return pClassPointer;
	};

	void eventThrowDriver ( class ASVehicle* Vehicle );
	void eventUpdateLeanInScript ( class AUDKVehicleBase* Vehicle, float DT );
	void UpdateLean ( class AUDKVehicle* Vehicle, float DT );
	void eventChassisTouchingUpsideDown ( class ASVehicle* Vehicle );
	void eventVehicleLanded ( class ASVehicle* Vehicle, float distanceTraveled );
};

UClass* UR_VehicleSimCar::pClassPointer = NULL;

// Class RavagedGame.R_AnimBlendByVehicle
// 0x001C (0x0144 - 0x0128)
class UR_AnimBlendByVehicle : public UUDKAnimBlendBase
{
public:
	unsigned long                                      bLastPawnDriving : 1;                             		// 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSeatHasIK : 1;                                   		// 0x0128 (0x0004) [0x0000000000000000] [0x00000002] 
	class AVehicle*                                    LastVehicle;                                      		// 0x012C (0x0004) [0x0000000000000000]              
	int                                                LastSeatIndex;                                    		// 0x0130 (0x0004) [0x0000000000000000]              
	struct FName                                       LeftHandIKSocketName;                             		// 0x0134 (0x0008) [0x0000000000000000]              
	struct FName                                       RightHandIKSocketName;                            		// 0x013C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1544 ];

		return pClassPointer;
	};

	void eventCheckForHandIKSockets ( class AVehicle* mainVeh, int CurSeatIdx );
	void eventGetSeatAnimNames ( class AVehicle* mainVeh, int CurSeatIdx );
	void eventUpdateInScript ( float DT );
	void eventHandIKEnabled ( unsigned long bUsingIK );
	void UpdateVehicleState ( );
};

UClass* UR_AnimBlendByVehicle::pClassPointer = NULL;

// Class RavagedGame.R_AnimNodeBlendByLadder
// 0x0008 (0x0130 - 0x0128)
class UR_AnimNodeBlendByLadder : public UUDKAnimBlendBase
{
public:
	class AR_LadderVolume*                             CurrentLadderVolume;                              		// 0x0128 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastZDelta;                                       		// 0x012C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1545 ];

		return pClassPointer;
	};

	void NativeUpdateNode ( float DT );
	void eventUpdateInScript ( float DT );
	void InitNewLadder ( class AR_LadderVolume* LV );
};

UClass* UR_AnimNodeBlendByLadder::pClassPointer = NULL;

// Class RavagedGame.R_AnimNodeBlendBySeatLean
// 0x0037 (0x0128 - 0x00F1)
class UR_AnimNodeBlendBySeatLean : public UAnimNodeBlendBase
{
public:
	TArray< struct FName >                             SeatLeanAnimNames;                                		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     LeanDir;                                          		// 0x0100 (0x000C) [0x0000000000000000]              
	float                                              MinIdle;                                          		// 0x010C (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MinErr;                                           		// 0x0110 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UR_VehicleSimCar*                            LeanVehicleSimCar;                                		// 0x0114 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bUsesJumpAnim : 1;                                		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentJumpAmount;                                		// 0x011C (0x0004) [0x0000000000000000]              
	float                                              LastJumplessTime;                                 		// 0x0120 (0x0004) [0x0000000000000000]              
	float                                              MinJumpTime;                                      		// 0x0124 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1546 ];

		return pClassPointer;
	};

	void eventGetAnimNamesFromSeat ( );
	void eventOnCeaseRelevant ( );
	void eventOnBecomeRelevant ( );
	void eventOnInit ( );
	void eventSetChildAnimsPlaying ( unsigned long bPlayAnims );
	void eventUpdateInScript ( float DT );
	void UpdateVehicleLean ( float DT );
};

UClass* UR_AnimNodeBlendBySeatLean::pClassPointer = NULL;

// Class RavagedGame.R_AnimNodeBlendBySeatSpringSim
// 0x0053 (0x0144 - 0x00F1)
class UR_AnimNodeBlendBySeatSpringSim : public UAnimNodeBlendBase
{
public:
	class AUDKVehicle*                                 MainVehicle;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
	int                                                SeatIdx;                                          		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              MaxAccelMag;                                      		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AccelScalar;                                      		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SpringPosition;                                   		// 0x0104 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              SpringK;                                          		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpringDamp;                                       		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpringSimMass;                                    		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpringMaxLength;                                  		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastSpringVel;                                    		// 0x0120 (0x000C) [0x0000000000000000]              
	struct FVector                                     vehLastVel;                                       		// 0x012C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     vehCurAccel;                                      		// 0x0138 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1547 ];

		return pClassPointer;
	};

	void eventScriptUpdateChildrenFromPosition ( );
	void InitSpringSystem ( );
	void CalcForces ( struct FVector localAccelFromVeh, float DT );
	void eventUpdateInScript ( float DT );
	void UpdateChildrenFromPosition ( );
	void NativeCalcForces ( struct FVector localAccelFromVeh, float DT );
	void NativeUpdateNode ( float DT );
};

UClass* UR_AnimNodeBlendBySeatSpringSim::pClassPointer = NULL;

// Class RavagedGame.R_AnimNodeBlendBySeatTurret
// 0x00A3 (0x0194 - 0x00F1)
class UR_AnimNodeBlendBySeatTurret : public UAnimNodeBlendBase
{
public:
	struct FAnimRelativePosition                       AnimPositions[ 0x9 ];                             		// 0x00F4 (0x0048) [0x0000000000000000]              
	unsigned long                                      bUses9Poses : 1;                                  		// 0x013C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNormalizeRot : 1;                                		// 0x013C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FTurretConstraintData                       FallbackMin;                                      		// 0x0140 (0x000C) [0x0000000000000000]              
	struct FTurretConstraintData                       FallbackMax;                                      		// 0x014C (0x000C) [0x0000000000000000]              
	int                                                NormalizeRotAngle;                                		// 0x0158 (0x0004) [0x0000000000000000]              
	struct FTurretConstraintData                       MaxAngle;                                         		// 0x015C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FTurretConstraintData                       MinAngle;                                         		// 0x0168 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FTurretConstraintData                       MidAngle;                                         		// 0x0174 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UUDKSkelControl_TurretConstrained*           ourTurret;                                        		// 0x0180 (0x0004) [0x0000000000000000]              
	float                                              NormalizedPositionX;                              		// 0x0184 (0x0004) [0x0000000000000000]              
	float                                              NormalizedPositionY;                              		// 0x0188 (0x0004) [0x0000000000000000]              
	class AUDKVehicle*                                 MainVehicle;                                      		// 0x018C (0x0004) [0x0000000000000000]              
	int                                                SeatIdx;                                          		// 0x0190 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1548 ];

		return pClassPointer;
	};

	void eventInitTurretConstraints ( class AR_Vehicle* veh, int CurSeatIdx );
	void Update9PoseTurret ( float DT );
	void UpdateHorizontalTurret ( float DT );
	void eventUpdateInScript ( float DT );
	int NormalizeTurretAngle ( int ang );
	void NativeUpdateHorizontalTurret ( float DT );
	void NativeUpdate9PoseTurret ( float DT );
	int NativeNormalizeTurretAngle ( int ang );
};

UClass* UR_AnimNodeBlendBySeatTurret::pClassPointer = NULL;

// Class RavagedGame.R_SkelControlFollowBone
// 0x0010 (0x00FC - 0x00EC)
class UR_SkelControlFollowBone : public USkelControlSingleBone
{
public:
	struct FName                                       BoneNameToFollow;                                 		// 0x00EC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                FollowedBoneIndex;                                		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bFollowX : 1;                                     		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFollowY : 1;                                     		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bFollowZ : 1;                                     		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1549 ];

		return pClassPointer;
	};

	void eventFollowBoneInScript ( int BoneID, class USkeletalMeshComponent* SkelComp );
	void eventInitBones ( class USkeletalMeshComponent* SkelComp );
};

UClass* UR_SkelControlFollowBone::pClassPointer = NULL;

// Class RavagedGame.R_SkelControlHandlebars
// 0x0018 (0x0104 - 0x00EC)
class UR_SkelControlHandlebars : public USkelControlSingleBone
{
public:
	unsigned char                                      HandlebarRotateAxis;                              		// 0x00EC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInvertRotation : 1;                              		// 0x00F0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              RotationOffset;                                   		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationScalar;                                   		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USVehicleSimCar*                             SteeringSimObj;                                   		// 0x00FC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              AngleOffset;                                      		// 0x0100 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1550 ];

		return pClassPointer;
	};

	void eventInitAndGetSimObject ( );
};

UClass* UR_SkelControlHandlebars::pClassPointer = NULL;

// Class RavagedGame.R_UDKAnimBlendByPosture
// 0x0000 (0x0128 - 0x0128)
class UR_UDKAnimBlendByPosture : public UUDKAnimBlendBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1551 ];

		return pClassPointer;
	};

};

UClass* UR_UDKAnimBlendByPosture::pClassPointer = NULL;

// Class RavagedGame.R_Achievements
// 0x0000 (0x0074 - 0x0074)
class UR_Achievements : public UUTAchievementsBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78050 ];

		return pClassPointer;
	};

	void Initialize ( );
};

UClass* UR_Achievements::pClassPointer = NULL;

// Class RavagedGame.R_AlienFxManager
// 0x0068 (0x0230 - 0x01C8)
class AR_AlienFxManager : public AActor
{
public:
	class UR_AlienFX*                                  AlienFX;                                          		// 0x01C8 (0x0004) [0x0000000000000000]              
	TArray< struct FActionMode >                       ActionModes;                                      		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FColorLerpPair >                    InMenuColors;                                     		// 0x01D8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FColorLerpPair                              BleedingColors;                                   		// 0x01E4 (0x0008) [0x0000000000000000]              
	struct FColorLerpPair                              WalkingColors;                                    		// 0x01EC (0x0008) [0x0000000000000000]              
	struct FColorLerpPair                              IdleColors;                                       		// 0x01F4 (0x0008) [0x0000000000000000]              
	int                                                DamageTaken;                                      		// 0x01FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FColor                                      TargetColor;                                      		// 0x0200 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FColor                                      LastColor;                                        		// 0x0204 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentLerpSpeed;                                 		// 0x0208 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AR_PlayerController*                         rOwner;                                           		// 0x020C (0x0004) [0x0000000000000000]              
	int                                                LastTeamIdx;                                      		// 0x0210 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastUpdateTime;                                   		// 0x0214 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinWait;                                          		// 0x0218 (0x0004) [0x0000000000000000]              
	unsigned long                                      bForceUpdate : 1;                                 		// 0x021C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bChasing : 1;                                     		// 0x021C (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FDeviceLights >                     DevicesLights;                                    		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DeviceCount;                                      		// 0x022C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78087 ];

		return pClassPointer;
	};

	void FindNextState ( );
	void eventTick ( float DeltaTime );
	bool ChangeState ( unsigned char NewState, unsigned long bForceNewState );
	bool GetOwner ( );
	void StartLightChase ( );
	struct FDeviceLights NewDeviceLights ( int numLights );
	bool Initialize ( );
};

UClass* AR_AlienFxManager::pClassPointer = NULL;

// Class RavagedGame.R_PlayerController
// 0x00EC (0x0A74 - 0x0988)
class AR_PlayerController : public AUTPlayerController
{
public:
	class UR_GFxSpawnMenu*                             GFxSpawnMenu;                                     		// 0x0988 (0x0004) [0x0000000000000000]              
	unsigned long                                      bClassMenuActive : 1;                             		// 0x098C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAllowTTS : 1;                                    		// 0x098C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSettingTeam : 1;                                 		// 0x098C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      ChangeTeamsOnDeath : 1;                           		// 0x098C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPlayerIsReadyToRespawn : 1;                      		// 0x098C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bInitialSpawn : 1;                                		// 0x098C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bWeaponZoomCanceledSprint : 1;                    		// 0x098C (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bHearBirds : 1;                                   		// 0x098C (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      bWaitingForSensitivity : 1;                       		// 0x098C (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      bVoteSucceeded : 1;                               		// 0x098C (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bShowSquadOnCanvas : 1;                           		// 0x098C (0x0004) [0x0000000000000000] [0x00000400] 
	float                                              DeadStateStartTime;                               		// 0x0990 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinPreSpawnMenuDeadTime;                          		// 0x0994 (0x0004) [0x0000000000000000]              
	int                                                LastTeamWeaponsUpdated;                           		// 0x0998 (0x0004) [0x0000000000000000]              
	TArray< struct FInventoryModifier >                InventoryMods;                                    		// 0x099C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            TeamWeapons;                                      		// 0x09A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            TeamWeaponsPri;                                   		// 0x09B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            TeamWeaponsSec;                                   		// 0x09C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            TeamWeaponsMel;                                   		// 0x09CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            TeamWeaponsThrow;                                 		// 0x09D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      SelectedSpawnActor;                               		// 0x09E4 (0x0004) [0x0000000000000000]              
	unsigned char                                      RespawnCounter;                                   		// 0x09E8 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      VoteKickVotesYes;                                 		// 0x09E9 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VoteKickVotesNo;                                  		// 0x09EA (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      PendingMultiKill;                                 		// 0x09EB (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class USoundCue*                                   TinitusEffectSoundCue;                            		// 0x09EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   TinitusBirdsSoundCue;                             		// 0x09F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastTinitusTime;                                  		// 0x09F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AR_Pawn*                                     TinitusPawn;                                      		// 0x09F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FsKillzHitInfo                              LastSkillzHitInfo;                                		// 0x09FC (0x000C) [0x0000000000000000]              
	int                                                SkillzSuperAwesomeKillStage;                      		// 0x0A08 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SkillzSuperAwesomeKillTimeout;                    		// 0x0A0C (0x0004) [0x0000000000000000]              
	class AR_Objective_ControlPoint*                   CapturingCP;                                      		// 0x0A10 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              LandVehicleSteerSensitivity;                      		// 0x0A14 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AirVehicleMouseSensitivity;                       		// 0x0A18 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SensitivityReceivedTime;                          		// 0x0A1C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVehicleDriverPerspective >         LastDriverPerspectives;                           		// 0x0A20 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class APlayerReplicationInfo* >            CurrentPlayersForVote;                            		// 0x0A2C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                CurrentVoteKickID;                                		// 0x0A38 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APlayerReplicationInfo*                      VoteKickPRI;                                      		// 0x0A3C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              VoteKickTimePeriod;                               		// 0x0A40 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              VoteKickStartTime;                                		// 0x0A44 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              VoteKickEndTime;                                  		// 0x0A48 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PendingMultiKillTime;                             		// 0x0A4C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    LastSentWeaponRot;                                		// 0x0A50 (0x000C) [0x0000000000000000]              
	TArray< class ASquadInfo* >                        ListedSquads;                                     		// 0x0A5C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastShoutTime;                                    		// 0x0A68 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinShoutDelay;                                    		// 0x0A6C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AR_AlienFxManager*                           AlienFxMgr;                                       		// 0x0A70 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78123 ];

		return pClassPointer;
	};

	void eventDestroyed ( );
	void eventPostBeginPlay ( );
	void ServerPlayerShout ( unsigned char CommandIndex );
	void PlayerShout ( unsigned char CommandIndex );
	void DrawSquadOnCanvas ( class AHUD* H );
	void SquadToggleDrawOnCanvas ( );
	void ServerLeaveSquad ( );
	void SquadLeave ( );
	void ServerCreateSquad ( struct FString SquadName );
	void SquadCreate ( struct FString SquadName );
	void ClientSquadResponse ( struct FString ResponseStr );
	void ClientJoinedSquadResponse ( unsigned long bJoined, struct FString ResponseStr );
	void ServerJoinSquad ( class ASquadInfo* JoinSquad );
	void SquadJoinByName ( struct FString SquadName );
	void SquadJoinByID ( int Index );
	void SquadList ( );
	void BuyGame ( );
	void GetPlayerList ( );
	void ServerGetPlayerList ( class APlayerController* caller );
	void ClientVoteKickResponse ( struct FString msg );
	void ClientVoteHasEnded ( int VoteID, unsigned long bVoteResults );
	void ClientVoteUpdate ( int VoteID, unsigned char VotesYes, unsigned char VotesNo );
	void ServerCastVoteKickPlayer ( unsigned long bKickPlayer, int VoteID );
	void CastVote ( unsigned long bKickPlayer );
	void ClientReceiveVoteKickPlayerInProgress ( class APlayerReplicationInfo* KickPRI, int VoteID, float TimeRemaining );
	void ServerRequestVoteKickPlayer ( class APlayerReplicationInfo* PRI );
	void VoteKickPlayerByIndex ( int Index );
	void VoteKickStart ( );
	void eventNotifyLoadedWorld ( struct FName WorldPackageName, unsigned long bFinalDest );
	void SetMapSpectatorLocation ( );
	void ServerRequestSpectate ( );
	void RequestSpectate ( );
	void Check3PWeaponZoom ( );
	void ClientSetBehindView ( unsigned long bNewBehindView );
	void ServerToggleBehindView ( );
	void CyclePerspective ( );
	void ClientSetRequestedEntryWithFlag ( class AUTVehicle* V, unsigned long bNewValue, int MessageIndex );
	void PlayStartupMessage ( unsigned char StartupStage );
	void ClientPlayTakeHit ( struct FVector HitLoc, unsigned char Damage, class UClass* DamageType );
	bool AllowTTSMessageFrom ( class APlayerReplicationInfo* PRI );
	bool CanCommunicate ( );
	void eventTeamMessage ( class APlayerReplicationInfo* PRI, struct FString S, struct FName Type, float MsgLifeTime );
	void SetMotD ( struct FString MotD );
	void TeamSay ( struct FString msg );
	void ShowSoundMode ( );
	void GFxReset ( );
	void ClientKillSpawnMenu ( );
	void ClientReset ( );
	void Reset ( );
	void PlayTinitusEffect ( class AR_Pawn* rPawn );
	void StopTinitusEffect ( );
	void DrawVehicleResourceDepotServiceState ( class AR_Vehicle* rVeh, class AHUD* H );
	void DrawHUD ( class AHUD* H );
	class AR_Pawn* GetR_Pawn ( );
	void RenderVoteKick ( class AHUD* H );
	void DrawSensitivity ( class AHUD* H );
	void ClientRestart ( class APawn* NewPawn );
	void Set1pHUDVisibility ( unsigned long bVis );
	void ClientPawnDied ( );
	void PawnDied ( class APawn* P );
	void ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation );
	void ServerReceiveTurretRot ( struct FRotator NewTurrentRot );
	void eventSendServerNewTurretRot ( struct FRotator NewTurretRotation );
	void GFxClassMenuVisibilityChanged ( unsigned long bClassMenuVis );
	void ReceiveMsgFromGFx ( struct FString str );
	void GFxChatEnter ( );
	void GFxClassChanged ( int nTeam, int newClassIdx );
	bool GFxGetWeaponPortraitAndDescription ( int WeaponType, int WeapIdx, class UTexture** weapTex, struct FString* weapDesc );
	void GFxUpdateClassWeapons ( );
	void GFxFillLoadOuts ( int nTeam, int nClass );
	void GFxFillTeamWeaponArraysIfNewTeam ( int NewTeam );
	void GFxUpdateClassMenuTeam ( int NewTeam );
	void GFxClientNewSpawnSelected ( class AActor* newSpawnObj );
	void ServerRequestSpawnPoint ( class AActor* SpawnPoint );
	void GFxServerSelectDefaultObjective ( );
	void GFxSelectDefaultObjective ( );
	void SpectateButtonPressed ( );
	void SuicideButtonPressed ( );
	void GFxSpawnMenuStop ( unsigned long bStopChat );
	void GFxClientSpawnSettingsComplete ( );
	void GFxCheckSpawnMenuStatus ( );
	void ShowSpawnMenu ( );
	void SpawnMenuKeyPressed ( );
	void ShowClassMenu ( );
	void EnableControls ( unsigned long bEnableMouse, unsigned long bEnableMove );
	void DisableControls ( );
	void TogglePlayerClass ( int classIdx );
	void UnSprint ( );
	int GetLastDriverPerspective ( class AR_Vehicle* rVeh );
	void NewDriverPerspectiveSelected ( class AR_Vehicle* rVeh, int PerspectivesIdx );
	void ProcessDriveLeaner ( float InForward, float InStrafe, float InUp, int Mouse );
	void ProcessDriveAir ( float InForward, float InStrafe, int Mouse );
	void ServerDriveLeaner ( float InForward, float InStrafe, float InUp, int Mouse, int View );
	void ServerDriveAir ( float InForward, float InStrafe, int Mouse, int View );
	void ClientSetAirVehicleParams ( float NewAirVehicleMouseSensitivity, unsigned long bMouseInputCurve );
	void ServerSetAirVehicleParams ( float NewAirVehicleMouseSensitivity, unsigned long bMouseInputCurve );
	void ClientSetLandSensitivity ( float NewLandVehicleSteerSensitivity );
	void ServerSetLandSensitivity ( float NewLandVehicleSteerSensitivity );
	void ClientShowSpawnMenu ( );
	void ServerRequestSpawnMenu ( );
	void ShowControllerState ( );
	void ClientChangedTeam ( int NewTeam );
	void ServerRequestTeam ( int N );
	void GFxCreateInventoryMods ( int PrimaryIdx, int SecondaryIdx, int MeleeIdx, int ThrowIdx );
	void GFxServerSetSpawnSettings ( unsigned char pClass, unsigned char PrimaryIdx, unsigned char SecondaryIdx, unsigned char MeleeIdx, unsigned char ThrowIdx );
	void ServerChangeClass ( unsigned char PC );
	void ChangeClass ( unsigned char PC );
	unsigned char GetClass ( );
	void SpawnPlayer ( );
	void SetSelectedSpawn ( class AActor* Objective );
	void ClientUnlockAchievement ( int AchievementId );
	void ClearStats ( );
	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList );
	void ReadLeaderboardDataStatsComplete ( unsigned long bWasSuccessful );
	void ClientWriteLeaderboardDataStats ( class UClass* OnlineStatsWriteClass, unsigned long bIsIncomplete );
	void ReadLeaderboardStatsComplete ( unsigned long bWasSuccessful );
	void ClientWriteLeaderboardStats ( class UClass* OnlineStatsWriteClass, unsigned long bIsIncomplete );
	void ClientReceiveMatchAwardLocalizedMessage ( int Switch, class APlayerReplicationInfo* PRI, struct FString StatStr );
	void AcknowledgePossession ( class APawn* P );
	void UpdateAirVehicleInputs ( );
	void SetAirVehicleMouseSensitivity ( float newVal );
	void SetLandVehicleSteerSensitivity ( float newVal );
	void SetFrontEndError ( struct FString titleName, struct FString messageName );
	void AutoAimOff ( );
	void AutoAimOn ( );
	void HandlePendingMultiKill ( );
};

UClass* AR_PlayerController::pClassPointer = NULL;

// Class RavagedGame.R_Pawn
// 0x0130 (0x0A64 - 0x0934)
class AR_Pawn : public AR_Pawn_Native
{
public:
	unsigned long                                      bPassengerToDriver : 1;                           		// 0x0934 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWaitingSprintLoop : 1;                           		// 0x0934 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bAllowLeftDodge : 1;                              		// 0x0934 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAllowRightDodge : 1;                             		// 0x0934 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bAllowForwardDodge : 1;                           		// 0x0934 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bAllowBackDodge : 1;                              		// 0x0934 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bJustDied : 1;                                    		// 0x0934 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bAlreadyHealing : 1;                              		// 0x0934 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      bWeaponAnimIdxRepBit : 1;                         		// 0x0934 (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      bWeaponSoundIdxRepBit : 1;                        		// 0x0934 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      bLadderEnteredWeapAttachHiddenGame : 1;           		// 0x0934 (0x0004) [0x0000000000002000] [0x00000400] ( CPF_Transient )
	unsigned long                                      bNotifiedTeamChanged : 1;                         		// 0x0934 (0x0004) [0x0000000000002000] [0x00000800] ( CPF_Transient )
	float                                              MinJumpWait;                                      		// 0x0938 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastJumpTime;                                     		// 0x093C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              OriginalFOV;                                      		// 0x0940 (0x0004) [0x0000000000000000]              
	float                                              SprintFOVDelta;                                   		// 0x0944 (0x0004) [0x0000000000000000]              
	float                                              SprintSpeedFactor;                                		// 0x0948 (0x0004) [0x0000000000000000]              
	float                                              OriginalGroundSpeed;                              		// 0x094C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              OriginalWaterSpeed;                               		// 0x0950 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              CrotchOffset;                                     		// 0x0954 (0x0004) [0x0000000000000000]              
	float                                              CrotchRadius;                                     		// 0x0958 (0x0004) [0x0000000000000000]              
	float                                              CrotchHeight;                                     		// 0x095C (0x0004) [0x0000000000000000]              
	float                                              CrotchScale;                                      		// 0x0960 (0x0004) [0x0000000000000000]              
	struct FName                                       CrotchBone;                                       		// 0x0964 (0x0008) [0x0000000000000000]              
	float                                              AssShotMinDot;                                    		// 0x096C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AssShotMaxDot;                                    		// 0x0970 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrotchShotMinDot;                                 		// 0x0974 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrotchShotMaxDot;                                 		// 0x0978 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastCrotchShotOuch;                               		// 0x097C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PostDamageHealDelayTime;                          		// 0x0980 (0x0004) [0x0000000000000000]              
	float                                              PostDamageUnder25PercHealDelayTime;               		// 0x0984 (0x0004) [0x0000000000000000]              
	float                                              HealTimerPeriod;                                  		// 0x0988 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                HealthGood;                                       		// 0x098C (0x0004) [0x0000000000000000]              
	float                                              HealthRegenRateFast;                              		// 0x0990 (0x0004) [0x0000000000000000]              
	float                                              HealthRegenRateSlow;                              		// 0x0994 (0x0004) [0x0000000000000000]              
	float                                              HealthPerTimer;                                   		// 0x0998 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                LastKnownHealth;                                  		// 0x099C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              HealthLevelRed;                                   		// 0x09A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthLevelYelllow;                               		// 0x09A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    HurtingHUDTexture;                                		// 0x09A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   HurtingHUDTextureSize;                            		// 0x09AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurTexAlphaCount;                                 		// 0x09B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialInstanceConstant*                   TinitusHUDMaterial;                               		// 0x09B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TinitusSoundLevel;                                		// 0x09BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USoundCue*                                   TinitusEffectSoundCue;                            		// 0x09C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             TinitusEffectAudioComponent;                      		// 0x09C4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      WeaponAnimIdx;                                    		// 0x09C8 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      WeaponRepSoundIdx;                                		// 0x09C9 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      PreLadderPhys;                                    		// 0x09CA (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ProneAimLimitType;                                		// 0x09CB (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      SkillZShot;                                       		// 0x09CC (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      BatKills;                                         		// 0x09CD (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastTauntTime;                                    		// 0x09D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              WalkingBob;                                       		// 0x09D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WalkingBobSpeed;                                  		// 0x09D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SprintBob;                                        		// 0x09DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SprintBobSpeed;                                   		// 0x09E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZoomedBob;                                        		// 0x09E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BobSpeed;                                         		// 0x09E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UR_AnimBlendByVehicleSeat*                   VehicleSeatNode;                                  		// 0x09EC (0x0004) [0x0000000000000000]              
	class UR_AnimNodeBlendBySeatLean*                  VehicleSeatLeanNode;                              		// 0x09F0 (0x0004) [0x0000000000000000]              
	class UR_AnimNodeBlendBySeatTurret*                VehicleSeatTurretNode;                            		// 0x09F4 (0x0004) [0x0000000000000000]              
	class UR_AnimNodeBlendBySeatSpringSim*             VehicleSeatSpringSimNode;                         		// 0x09F8 (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           SeatIdle;                                         		// 0x09FC (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SeatLeanLeft;                                     		// 0x0A00 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SeatLeanRight;                                    		// 0x0A04 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SeatLeanForward;                                  		// 0x0A08 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SeatLeanBack;                                     		// 0x0A0C (0x0004) [0x0000000000000000]              
	class UAnimNodeSequence*                           SeatIdleJump;                                     		// 0x0A10 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        TurIdle;                                          		// 0x0A14 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        TurLeft;                                          		// 0x0A18 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        TurRight;                                         		// 0x0A1C (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        TurUp;                                            		// 0x0A20 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        TurDown;                                          		// 0x0A24 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        TurUL;                                            		// 0x0A28 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        TurUR;                                            		// 0x0A2C (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        TurDL;                                            		// 0x0A30 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        TurDR;                                            		// 0x0A34 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SpringIdle;                                       		// 0x0A38 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SpringUp;                                         		// 0x0A3C (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SpringDown;                                       		// 0x0A40 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SpringLeft;                                       		// 0x0A44 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SpringRight;                                      		// 0x0A48 (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SpringForward;                                    		// 0x0A4C (0x0004) [0x0000000000000000]              
	class UUDKAnimNodeSequence*                        SpringBack;                                       		// 0x0A50 (0x0004) [0x0000000000000000]              
	class UAnimNodeSlot*                               Weap3pSlot;                                       		// 0x0A54 (0x0004) [0x0000000000000000]              
	class UR_AnimNodeBlendByLadder*                    AnimNodeBlendByLadder;                            		// 0x0A58 (0x0004) [0x0000000000000000]              
	float                                              HomeTypeLastLookDownTraceHitTime;                 		// 0x0A5C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCylinderComponent*                          PronedCylinderComp;                               		// 0x0A60 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78174 ];

		return pClassPointer;
	};

	void eventHoldGameObject ( class AUDKCarriedObject* GameObj );
	bool DoJump ( unsigned long bUpdating );
	void eventUpdateEyeHeight ( float DeltaTime );
	void SwitchWeapon ( unsigned char NewGroup );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void ReplicateWeaponSound ( unsigned char InWeapSoundIdx );
	void ServerPlay3PWeaponAnimation ( unsigned char InWeapAnimIdx );
	void DoPlay3PWeaponAnimation ( unsigned char AninIdx );
	void DoPlayWeaponSound ( unsigned char InWeapSoundIdx );
	bool StopWeaponFiring ( );
	void Engine_PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void SetArmsSkinFromMeshDefault ( );
	void UT_SetCharacterClassFromInfo ( class UClass* Info );
	void SetCharacterClassFromInfo ( class UClass* Info );
	void UT_NotifyTeamChanged ( );
	void UT_PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	void eventReplicatedEvent ( struct FName VarName );
	void TossInventory ( class AInventory* Inv, struct FVector ForceVelocity );
	void WeaponFired ( class AWeapon* InWeapon, unsigned long bViaReplication, struct FVector HitLocation );
	bool IsLocationInHipArea ( float AdditionalScale, struct FImpactInfo* Impact, int* HitResults );
	void TakeCrotchShot ( class UClass* CrotchShotDamageType, int CrotchDamage, class AController* InstigatingController, struct FImpactInfo* Impact );
	bool TakeHeadShot ( class UClass* HeadShotDamageType, int HeadDamage, float AdditionalScale, class AController* InstigatingController, struct FImpactInfo* Impact );
	bool IsLocationOnHead ( float AdditionalScale, struct FImpactInfo* Impact );
	void DisplayDebug ( class AHUD* H, float* out_YL, float* out_YPos );
	void R_DrawHUD ( class AHUD* H, unsigned long bSkipSuper );
	void PlayTinitusEffect ( );
	void StopTinitusEffect ( );
	void HealTimer ( );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent );
	bool PerformDodge ( unsigned char DoubleClickMove, struct FVector Dir, struct FVector Cross );
	void ClimbLadder ( class ALadderVolume* L );
	void EndClimbLadder ( class ALadderVolume* OldLadder );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void UT_StopDriving ( class AVehicle* V );
	void eventStopDriving ( class AVehicle* V );
	void SetMeshVisibilityInVehicle ( unsigned long bVisible );
	void UT_StartDriving ( class AVehicle* V );
	void eventStartDriving ( class AVehicle* V );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void QuickWeaponChanged ( class AR_Weapon* NewWeapon );
	class AR_PlayerReplicationInfo* R_GetUTPlayerReplicationInfo ( );
	class UClass* GetFamilyInfo ( );
	void FinalizeSetup ( );
	void PostBeginPlay ( );
	void eventEndProne ( float HeightAdjust );
	void eventStartProne ( float HeightAdjust );
	void ModifySpeedFromWeapon ( );
	float GetCurrentGroundSpeed ( );
	void DoUnSprinting ( );
	void DoSprinting ( );
	void ServerStopSprinting ( );
	void StopSprinting ( );
	void ServerStartSprinting ( );
	void StartSprinting ( );
	void DisableVehicleCollisionDetection ( );
	void EnableVehicleCollisionDetection ( );
	void SetCharacterMeshInfo ( class USkeletalMesh* SkelMesh, class UMaterialInterface* HeadMaterial, class UMaterialInterface* BodyMaterial );
	bool VerifyBodyMaterialInstance ( );
	void SpawnHeadGib ( class UClass* UTDamageType, struct FVector HitLocation );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void ProneAimAdjustBinarySearch ( struct FRotator* out_ViewRotation );
	struct FRotator GetAdjustedAimFor3P ( class AWeapon* W, struct FVector StartFireLoc );
	struct FRotator GetAdjustedAimFor ( class AWeapon* W, struct FVector StartFireLoc );
	bool eventEncroachingOn ( class AActor* Other );
};

UClass* AR_Pawn::pClassPointer = NULL;

// Class RavagedGame.R_HUD
// 0x0180 (0x0774 - 0x05F4)
class AR_HUD : public AUTGFxTeamHUDWrapper
{
public:
	int                                                lastSpawnsCount;                                  		// 0x05F4 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd*                              rPauseMenuMovie;                                  		// 0x05F8 (0x0004) [0x0000000000000000]              
	class UR_GFxHUD*                                   R_HudMovie;                                       		// 0x05FC (0x0004) [0x0000000000000000]              
	unsigned long                                      bScreenUpdate : 1;                                		// 0x0600 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRoundStartup : 1;                                		// 0x0600 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bRoundStarted : 1;                                		// 0x0600 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDeployIsPlaying : 1;                             		// 0x0600 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bCaptureBarShowing : 1;                           		// 0x0600 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bSpawnMenuUpdated : 1;                            		// 0x0600 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bDrawCPDistance : 1;                              		// 0x0600 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bShowEnemyCPs : 1;                                		// 0x0600 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bShowNeutralCPs : 1;                              		// 0x0600 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bUpdateDistances : 1;                             		// 0x0600 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      ShownMotD : 1;                                    		// 0x0600 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bShowUpdateMessage : 1;                           		// 0x0600 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bGotCPs : 1;                                      		// 0x0600 (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	class UR_GFxUIScoreboard*                          R_ScoreboardMovie;                                		// 0x0604 (0x0004) [0x0000000000000000]              
	class UR_GFxUILeaderboard*                         R_LeaderboardMovie;                               		// 0x0608 (0x0004) [0x0000000000000000]              
	class UR_GFxSpawnMenu*                             SpawnMovie;                                       		// 0x060C (0x0004) [0x0000000000000000]              
	float                                              LastCaptureBarRenderTime;                         		// 0x0610 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CaptureBarFadeTime;                               		// 0x0614 (0x0004) [0x0000000000000000]              
	class UR_GFxChat*                                  ChatMovie;                                        		// 0x0618 (0x0004) [0x0000000000000000]              
	class UR_Minimap*                                  Minimap;                                          		// 0x061C (0x0004) [0x0000000000000000]              
	class UClass*                                      R_GFxHUDClass;                                    		// 0x0620 (0x0004) [0x0000000000000000]              
	class UClass*                                      R_ChatClass;                                      		// 0x0624 (0x0004) [0x0000000000000000]              
	class AR_PlayerController*                         R_PlayerOwner;                                    		// 0x0628 (0x0004) [0x0000000000000000]              
	struct FVector                                     CurrentViewPoint;                                 		// 0x062C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    CurrentViewRotation;                              		// 0x0638 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                LastTime;                                         		// 0x0644 (0x0004) [0x0000000000000000]              
	float                                              UnrealToRavagedGameUnitsScale;                    		// 0x0648 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NoCapDisplayMinDist;                              		// 0x064C (0x0004) [0x0000000000000000]              
	struct FColor                                      CurrentCPDrawColor;                               		// 0x0650 (0x0004) [0x0000000000000000]              
	struct FColor                                      CurrentCPDistanceTextDrawColor;                   		// 0x0654 (0x0004) [0x0000000000000000]              
	struct FColor                                      CPDrawColor;                                      		// 0x0658 (0x0004) [0x0000000000000000]              
	struct FColor                                      CPDistanceTextColor;                              		// 0x065C (0x0004) [0x0000000000000000]              
	float                                              UpdateDistanceTimeRemaining;                      		// 0x0660 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              UpdateDistanceTimePeriod;                         		// 0x0664 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ViewLocation;                                     		// 0x0668 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinDistAlwaysUpdate;                              		// 0x0674 (0x0004) [0x0000000000000000]              
	float                                              FlashValue;                                       		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlashCount;                                       		// 0x067C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FlashPeriod;                                      		// 0x0680 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ControlPointFlashFactor;                          		// 0x0684 (0x0004) [0x0000000000000000]              
	class UR_OutOfBoundsArrowComponent*                OutOfBoundsArrow;                                 		// 0x0688 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       OutOfBoundsPostProcessEffectName;                 		// 0x068C (0x0008) [0x0000000000000000]              
	class UUberPostProcessEffect*                      OutOfBoundsEffect;                                		// 0x0694 (0x0004) [0x0000000000000000]              
	float                                              OriginalDesaturation;                             		// 0x0698 (0x0004) [0x0000000000000000]              
	float                                              OutOfBoundsFadeTime;                              		// 0x069C (0x0004) [0x0000000000000000]              
	struct FString                                     ReturnToCombatMessage;                            		// 0x06A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PressEnterMessage;                                		// 0x06AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReadyToSpawn;                                     		// 0x06B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TimeUntilSpawnMessage;                            		// 0x06C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TimeUntilSpawnMessage2;                           		// 0x06D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     TimeUntilSpawnMessage3;                           		// 0x06DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Press;                                            		// 0x06E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     MatchBeginning;                                   		// 0x06F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     NoSpawn;                                          		// 0x0700 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Deploy;                                           		// 0x070C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Ready;                                            		// 0x0718 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LReturn;                                          		// 0x0724 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ToGame;                                           		// 0x0730 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UFont*                                       LargeFont;                                        		// 0x073C (0x0004) [0x0000000000000000]              
	struct FString                                     MessageOfTheDay;                                  		// 0x0740 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TinitusLevel;                                     		// 0x074C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMaterialEffect*                             TinitusHitEffect;                                 		// 0x0750 (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   TinitusHitEffectMaterialInstance;                 		// 0x0754 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       TinitusPostProcessEffectName;                     		// 0x0758 (0x0008) [0x0000000000000000]              
	class AR_GRI*                                      GRI;                                              		// 0x0760 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AR_Supply_Object* >                  SupplyObjs;                                       		// 0x0764 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              MaxDistToShowSupplyObjects;                       		// 0x0770 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78179 ];

		return pClassPointer;
	};

	void ToggleInventory ( );
	void DrawGFxHUDToolTip ( class APlayerController* PC, struct FString Command, struct FString ToolTip );
	void TogglePauseMenu ( );
	void AddPostRenderedActor ( class AActor* A );
	void ToggleFullMap ( );
	void SetMinimapZoom ( float ZoomDir );
	void ShowMotD ( );
	void SetMotD ( struct FString MotD );
	float ClampLerp ( struct FVector2D A, struct FVector2D B, float val );
	void DrawScaledNumber ( struct FVector DrawLoc, int DrawNum, float TargetDrawScale );
	void DrawScaledCP ( struct FVector Loc, float TargetDrawScale, class UTexture2D* Tex, float TargetDist, unsigned long bDrawWhenOffScreen );
	void DrawUncapBase ( class AR_Thrust_ControlPoint* tempCP, float curScale );
	void DrawControlPoints ( int teamIdx );
	void Hide1pHUD ( unsigned long bVis );
	void eventSuperPostRender ( );
	void UpdateDeployButton ( struct FString strTop, struct FString strBottom );
	void PostRender ( );
	void Timer ( );
	void AddConsoleMessage ( struct FString M, class UClass* InMessageClass, class APlayerReplicationInfo* PRI, float Lifetime );
	void LocalizedMessage ( class UClass* InMessageClass, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, struct FString CriticalString, int Switch, float Position, float Lifetime, int FontSize, struct FColor DrawColor, class UObject* OptionalObject );
	void eventDrawHUD ( );
	void OnCloseAnimComplete ( );
	void SetShowScores ( unsigned long bEnableShowScores );
	void SetShowLeaderboard ( unsigned long bEnableLeaderboard );
	void ShowOutOfBounds ( );
	void ResolutionChanged ( );
	void DisplayHit ( struct FVector HitDir, int Damage, class UClass* DamageType );
	void SetVisible ( unsigned long bNewVisible );
	int GetLocalPlayerOwnerIndex ( );
	void AddSpawnPoints ( );
	void CreateChatMovie ( );
	void RoundIntroHUDMovie ( );
	void CreateLeaderBoardMovie ( );
	void CreateScoreBoardMovie ( );
	void CreateHUDMovie ( );
	void RemoveMovies ( );
	void MinimapZoomOut ( );
	void MinimapZoomIn ( );
	void BeginTeamChat ( unsigned long bChat );
	void BeginChat ( unsigned long bChat );
	void UpdateTinitus ( );
	void NotifyBindPostProcessEffects ( );
	void PostBeginPlay ( );
	void GRIFound ( );
	void eventPreBeginPlay ( );
	void GetSupplyObjects ( );
	bool GRIisReady ( );
};

UClass* AR_HUD::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle
// 0x01A4 (0x0D18 - 0x0B74)
class AR_Vehicle : public AUTVehicle
{
public:
	int                                                VehicleContentID;                                 		// 0x0B74 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LPressUseKey;                                     		// 0x0B78 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LPressFlipKey;                                    		// 0x0B84 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LPressDropKey;                                    		// 0x0B90 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	float                                              LastVehicleLocalCamYaw;                           		// 0x0B9C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastVehicleLocalCamPitch;                         		// 0x0BA0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVehicleSeatAnims >                 SeatAnimNames;                                    		// 0x0BA4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVehicleSeatIK >                    SeatIKs;                                          		// 0x0BB0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bCanCaptureObjectives : 1;                        		// 0x0BBC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsBoosting : 1;                                  		// 0x0BBC (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bPawnCollisionDetection : 1;                      		// 0x0BBC (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      bHideDeadPawn : 1;                                		// 0x0BBC (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      bWarningSirenActive : 1;                          		// 0x0BBC (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bWasInverted : 1;                                 		// 0x0BBC (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bInBreakAwayCam : 1;                              		// 0x0BBC (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bSpawnPointWhenOccupied : 1;                      		// 0x0BBC (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bSpawnPointWhenEmpty : 1;                         		// 0x0BBC (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bCurrentlySpawnPoint : 1;                         		// 0x0BBC (0x0004) [0x0000000000000020] [0x00000200] ( CPF_Net )
	unsigned long                                      bCanBeBaseForPawnsWhileDriving : 1;               		// 0x0BBC (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bPassengerInfosDirty : 1;                         		// 0x0BBC (0x0004) [0x0000000000002000] [0x00000800] ( CPF_Transient )
	unsigned long                                      bServerWeaponAimForceCam : 1;                     		// 0x0BBC (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	class UClass*                                      ResourceOnboardCTRClass;                          		// 0x0BC0 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	TArray< struct FResourceSocket >                   ResourceSockets;                                  		// 0x0BC4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      ResourceCargoCount;                               		// 0x0BD0 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      ResourceCargoCountMax;                            		// 0x0BD1 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ResourceDepotServiceState;                        		// 0x0BD2 (0x0001) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned char                                      ArmorType;                                        		// 0x0BD3 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostSpeedMultiplier;                             		// 0x0BD4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostFOVAngleModifier;                            		// 0x0BD8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             BoostSound;                                       		// 0x0BDC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< float >                                    SeatSplashMods;                                   		// 0x0BE0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              PawnScaling;                                      		// 0x0BEC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              IdleUpTime;                                       		// 0x0BF0 (0x0004) [0x0000000000000000]              
	int                                                WarningHealth;                                    		// 0x0BF4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             WarningSiren;                                     		// 0x0BF8 (0x0004) [0x00000000040A000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline )
	int                                                BleedHealthLevel;                                 		// 0x0BFC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BleedHealthAmount;                                		// 0x0C00 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BleedHealthTimeDelta;                             		// 0x0C04 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinEngineRemaining;                               		// 0x0C08 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HealthRegenUnitsMult;                             		// 0x0C0C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLandingSoftThreshold;                        		// 0x0C10 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WheelLandingHardThreshold;                        		// 0x0C14 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   CollisionSoftLandingSound;                        		// 0x0C18 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   CollisionMediumLandingSound;                      		// 0x0C1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BottomContactDamageMinDot;                        		// 0x0C20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RoofContactDamageMinDot;                          		// 0x0C24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MediumImpactMinModifier;                          		// 0x0C28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MediumImpactRoofHitAdditional;                    		// 0x0C2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HardImpactMinModifier;                            		// 0x0C30 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HardImpactRoofHitAdditional;                      		// 0x0C34 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LastCollisionDamage;                              		// 0x0C38 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                LastDamage;                                       		// 0x0C3C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USkeletalMesh*                               RagdollSkeletalMesh;                              		// 0x0C40 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               RagdollPhysicsAsset;                              		// 0x0C44 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RagdollSkelMeshOffset;                            		// 0x0C48 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPerspectiveInfo >                  Perspectives;                                     		// 0x0C54 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BreakAwayCamHeight;                               		// 0x0C60 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BreakAwayCamDist;                                 		// 0x0C64 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NotInvertedStartTime;                             		// 0x0C68 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LerpToBreakAwayCamAmount;                         		// 0x0C6C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     BreakAwayCamPos;                                  		// 0x0C70 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                BreakAwayCamMode;                                 		// 0x0C7C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< float >                                    ExitYaws;                                         		// 0x0C80 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              EmergencyExitHeight;                              		// 0x0C8C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FWeaponWindupInfo >                 WeaponWindupInfos;                                		// 0x0C90 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	int                                                HornPlayCount;                                    		// 0x0C9C (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UTexture*                                    SpawnMenuTexture;                                 		// 0x0CA0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnPointCreationDelay;                          		// 0x0CA4 (0x0004) [0x0000000000000000]              
	TArray< struct FTracerInfo >                       SeatTracerInfos;                                  		// 0x0CA8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MaxTracers;                                       		// 0x0CB4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AProjectile* >                       TracerProjectiles;                                		// 0x0CB8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     LastCameraPos;                                    		// 0x0CC4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastPreBurningPos;                                		// 0x0CD0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              ShowToolTipsDistance;                             		// 0x0CDC (0x0004) [0x0000000000000000]              
	float                                              ScreenDotRange;                                   		// 0x0CE0 (0x0004) [0x0000000000000000]              
	float                                              ExitVelocityAmount;                               		// 0x0CE4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APlayerReplicationInfo*                      PassengerInfos[ 0x6 ];                            		// 0x0CE8 (0x0018) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              VehicleSpeedToPawnDamageMult;                     		// 0x0D00 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VehicleSpeedToPawnMomentumMult;                   		// 0x0D04 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCachedSeatCameraInfo >             CachedCams;                                       		// 0x0D08 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              LastUnsoftLandingTime;                            		// 0x0D14 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78190 ];

		return pClassPointer;
	};

	void AttachFlag ( class AUTCarriedObject* FlagActor, class APawn* NewDriver );
	void eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir );
	void eventRenderToolTips ( class APlayerController* PC, class UCanvas* Canvas, float Dist );
	void SetBurnOut ( );
	void StartBurnOut ( );
	void ChangeToDeathMesh ( );
	void BleedHealthTimer ( );
	void CheckHealthAlarmSound ( );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void eventReceivedHealthChange ( );
	bool HealDamage ( int Amount, class AController* Healer, class UClass* DamageType );
	float R_GetCollisionDamageModifier ( float ContactAngle, float MinFallColMultFact, float RoofHitAdditional );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision );
	void PlayCollisionSound ( class USoundCue* colSound, int Damage );
	void eventRanInto ( class AActor* Other );
	void InitSeatWeaponWindups ( class AR_VehicleWeapon* VWeap );
	void InitializeWeaponWindups ( );
	void InitializeSeats ( );
	void eventPostBeginPlay ( );
	bool TakeHeadShot ( class UClass* HeadShotDamageType, int HeadDamage, float AdditionalScale, class AController* InstigatingController, struct FImpactInfo* Impact );
	bool UTVehicleBaseTakeHeadShot ( class UClass* HeadShotDamageType, int HeadDamage, float AdditionalScale, class AController* InstigatingController, struct FImpactInfo* Impact );
	void AdjustDriverDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, int* Damage, struct FVector* Momentum );
	void StopVehicleSounds ( );
	void eventDoStopBoosting ( );
	void ServerStopBoosting ( );
	void eventStopBoosting ( );
	void eventDoBoosting ( );
	void ServerStartBoosting ( );
	void StartBoosting ( );
	void PassengerLeave ( int SeatIndex );
	bool PassengerEnter ( class APawn* P, int SeatIndex );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void SitDriver ( class AUTPawn* UTP, int SeatIndex );
	bool DriverEnter ( class APawn* P );
	bool ChangeSeat ( class AController* ControllerToMove, int RequestedSeat );
	void UT_VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	void VehicleCalcCamera ( float DeltaTime, int SeatIndex, unsigned long bPivotOnly, struct FVector* out_CamLoc, struct FRotator* out_CamRot, struct FVector* CamStart );
	void ApplyViewConstraint ( int SeatIndex, struct FRotator* out_ViewRotation );
	void VehicleProcessViewRotation ( float DeltaTime, int SeatIndex, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	int LimitRotation ( int in_rot, int ViewMin, int ViewMax );
	void ApplyCamera ( struct FCameraInfo cInfo, int SeatIndex );
	void ServerApplyPerspective ( int SeatIndex, int NewIdx );
	void ApplyPerspective ( int SeatIndex, class AR_Pawn* rPwn );
	void CyclePerspective ( class AR_PlayerController* pController, int SeatIndex );
	float GetSeatFOV ( int SeatIndex );
	bool TryFalloutPos ( class APawn* ExitingDriver, struct FVector ExitPos );
	bool DriverFallOut ( class APawn* ExitingDriver );
	bool TryExitPosition ( struct FVector ExitPosition, float RelativeYaw, struct FVector Extent, class APawn* ExitingDriver, struct FRotator* ExitRot );
	bool R_PlaceExitingDriver2 ( class AVehicle* ExitVehicle, int SeatIdx, class APawn* ExitingDriver, struct FRotator* ExitRot );
	bool PassengerLeaveVehicle ( class AUDKWeaponPawn* PassVeh, unsigned long bForceLeave );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	struct FRotator GetWeaponAim ( class AUTVehicleWeapon* VWeapon );
	struct FVector UTGetEffectLocation ( int SeatIndex, struct FRotator* BarrelRotation );
	void FireTracerRound ( int SeatIdx, struct FVector HitLocation );
	void VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex );
	void VehicleWeaponStoppedFiring ( unsigned long bViaReplication, int SeatIndex );
	void VehicleWeaponFired ( unsigned long bViaReplication, struct FVector HitLocation, int SeatIndex );
	void eventReplicatedEvent ( struct FName VarName );
	void PlayHornSound ( );
	void UpdatePassengerClients ( );
	void CheckSpawnPointState ( );
	void CountOccupants ( );
	void DriverDied ( class UClass* DamageType );
	void ReplicateWindupState ( unsigned char SeatIdx, unsigned char NewState );
	void HandleWeaponWindupState ( unsigned char SeatIdx, unsigned char NewState );
	void SeatWeaponWindDown ( unsigned char SeatIdx );
	void SeatWeaponStartFiringLoop ( unsigned char SeatIdx );
	void SeatWeaponWindupStart ( unsigned char SeatIdx );
	bool CanBeBaseForPawn ( class APawn* aPawn );
	void CalcResources ( );
	void UnloadResource ( int ResourcesToUnload );
	void AddResource ( int ResourcesToAdd );
};

UClass* AR_Vehicle::pClassPointer = NULL;

// Class RavagedGame.R_Ammo_AssaultRifle
// 0x0000 (0x03C4 - 0x03C4)
class AR_Ammo_AssaultRifle : public AUTAmmoPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78197 ];

		return pClassPointer;
	};

};

UClass* AR_Ammo_AssaultRifle::pClassPointer = NULL;

// Class RavagedGame.R_Weapon
// 0x0248 (0x0800 - 0x05B8)
class AR_Weapon : public AUTWeapon
{
public:
	int                                                WeaponContentID;                                  		// 0x05B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bLoadCheck : 1;                                   		// 0x05BC (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bShellEjectorPSCLoops : 1;                        		// 0x05BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShellEjectorAttached : 1;                        		// 0x05BC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bInterruptTaunt : 1;                              		// 0x05BC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bPostFiringIdleAnimDelayComplete : 1;             		// 0x05BC (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bDrawDebugDeviations : 1;                         		// 0x05BC (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bUseDeviations : 1;                               		// 0x05BC (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bDrawDeviations : 1;                              		// 0x05BC (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bDrawCrossHairInCode : 1;                         		// 0x05BC (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bDrawCrossHairInCodeShadow : 1;                   		// 0x05BC (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bDrawLoadOutType : 1;                             		// 0x05BC (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bHideHitIndicatorOnZoom : 1;                      		// 0x05BC (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bApplySwitchToDev : 1;                            		// 0x05BC (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	unsigned long                                      bCurrentlyZoomedOrZooming : 1;                    		// 0x05BC (0x0004) [0x0000000000002000] [0x00002000] ( CPF_Transient )
	unsigned long                                      bApplyDevJump : 1;                                		// 0x05BC (0x0004) [0x0000000000002000] [0x00004000] ( CPF_Transient )
	unsigned long                                      bShotgunFirstShotOverride : 1;                    		// 0x05BC (0x0004) [0x0000000000002000] [0x00008000] ( CPF_Transient )
	unsigned long                                      bUseRecoil : 1;                                   		// 0x05BC (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      bSmoothRecoil : 1;                                		// 0x05BC (0x0004) [0x0000000000000001] [0x00020000] ( CPF_Edit )
	unsigned long                                      bUseDynamicLag : 1;                               		// 0x05BC (0x0004) [0x0000000000000001] [0x00040000] ( CPF_Edit )
	unsigned long                                      bLagAutoRecenter : 1;                             		// 0x05BC (0x0004) [0x0000000000000001] [0x00080000] ( CPF_Edit )
	unsigned long                                      bCanHeadShot : 1;                                 		// 0x05BC (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bCanCrotchShot : 1;                               		// 0x05BC (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bAbortZoom : 1;                                   		// 0x05BC (0x0004) [0x0000000000002000] [0x00400000] ( CPF_Transient )
	unsigned long                                      bShowScopeOnZoom : 1;                             		// 0x05BC (0x0004) [0x0000000000000001] [0x00800000] ( CPF_Edit )
	unsigned long                                      bHideCrossHairOnZoom : 1;                         		// 0x05BC (0x0004) [0x0000000000000001] [0x01000000] ( CPF_Edit )
	unsigned long                                      bAsyncZoom : 1;                                   		// 0x05BC (0x0004) [0x0000000000000001] [0x02000000] ( CPF_Edit )
	unsigned long                                      bAsyncUnZoom : 1;                                 		// 0x05BC (0x0004) [0x0000000000000001] [0x04000000] ( CPF_Edit )
	unsigned char                                      TeamIndex;                                        		// 0x05C0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      rAmmoDisplayType;                                 		// 0x05C1 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LoadOutType;                                      		// 0x05C2 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CurrentZoomState;                                 		// 0x05C3 (0x0001) [0x0000000000000000]              
	TArray< unsigned long >                            ScavClasses;                                      		// 0x05C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned long >                            ResClasses;                                       		// 0x05D0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     StartTriggerFlashLoc;                             		// 0x05DC (0x000C) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     WeaponUIDescription;                              		// 0x05E8 (0x000C) [0x0000000040408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink | CPF_EditInlineNotify )
	class UTexture*                                    WeaponUIPortrait;                                 		// 0x05F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    WeaponUIPortraitLg;                               		// 0x05F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponEffectivenessThreshold;                     		// 0x05FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ShellEjectorSocket;                               		// 0x0600 (0x0008) [0x0000000000000000]              
	class UUTParticleSystemComponent*                  ShellEjectorPSC;                                  		// 0x0608 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             ShellEjectorPSCTemplate;                          		// 0x060C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             ShellEjectorAltPSCTemplate;                       		// 0x0610 (0x0004) [0x0000000000000000]              
	struct FColor                                      ShellEjectorColor;                                		// 0x0614 (0x0004) [0x0000000000000000]              
	float                                              ShellEjectorDuration;                             		// 0x0618 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TauntTime;                                        		// 0x061C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponTauntAnim;                                  		// 0x0620 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponSprintAnim;                                 		// 0x0628 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponSprintSnd;                                  		// 0x0630 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponSprintInAnim;                               		// 0x0634 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponSprintInAnimTime;                           		// 0x063C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponSprintLoopAnim;                             		// 0x0640 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponSprintOutAnim;                              		// 0x0648 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponSprintOutAnimTime;                          		// 0x0650 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SprintTime;                                       		// 0x0654 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PostFiringIdleAnimDelay;                          		// 0x0658 (0x0004) [0x0000000000000000]              
	float                                              HitIndicatorFadeTime;                             		// 0x065C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      HitIndicatorColor;                                		// 0x0660 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HitIndSize;                                       		// 0x0664 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              HitIndicatorScale;                                		// 0x0668 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  HitIndicatorImage;                                		// 0x066C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         HitIndicatorCoordinates;                          		// 0x0670 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastHitEnemyBeepTime;                             		// 0x0680 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USoundCue*                                   HitIndicatorBeep;                                 		// 0x0684 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HitIndicatorBeepVolume;                           		// 0x0688 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         CrossHairTextCoordOffset;                         		// 0x068C (0x0010) [0x0000000000000000]              
	float                                              DrawnCrossHairDevScale;                           		// 0x069C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DrawnCrossHairMin;                                		// 0x06A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DrawnCrossHairLength;                             		// 0x06A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevToSpreadFactor;                                		// 0x06A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SampleMotionTimerPeriod;                          		// 0x06AC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SpeedSampleScalar;                                		// 0x06B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              SpeedSampleMax;                                   		// 0x06B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TurnSampleScalar;                                 		// 0x06B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              TurnSampleMax;                                    		// 0x06BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FireDevPerShot;                                   		// 0x06C0 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FireDevMax;                                       		// 0x06C4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              FireDevTimeout;                                   		// 0x06C8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DevMin;                                           		// 0x06CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevFire;                                          		// 0x06D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevSpeed;                                         		// 0x06D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevTurn;                                          		// 0x06D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevTotalMax;                                      		// 0x06DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ClientDeviationTotal;                             		// 0x06E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ServerDeviationTotal;                             		// 0x06E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DeviationTotalTarget;                             		// 0x06E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DeviationTotalIncreaseRate;                       		// 0x06EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DeviationTotalDecreaseRate;                       		// 0x06F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              DevTurnFactor;                                    		// 0x06F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevSpeedFactor;                                   		// 0x06F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevFireFactor;                                    		// 0x06FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevModCrouched;                                   		// 0x0700 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevModProned;                                     		// 0x0704 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevModZoom;                                       		// 0x0708 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SwitchToDev;                                      		// 0x070C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DevJump;                                          		// 0x0710 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    lastRot;                                          		// 0x0714 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              lastDevUpdateTime;                                		// 0x0720 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                MultiShotBuckCount;                               		// 0x0724 (0x0004) [0x0000000000000000]              
	struct FVector2D                                   RecoilStrength;                                   		// 0x0728 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   RecoilDirectionOffset;                            		// 0x0730 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilCrouchMod;                                  		// 0x0738 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilProneMod;                                   		// 0x073C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilZoomMod;                                    		// 0x0740 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotationalRecoilFactorYaw;                        		// 0x0744 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              RotationalRecoilFactorPitch;                      		// 0x0748 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              RecoilSmoothTime;                                 		// 0x074C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoilTimeAccum;                                  		// 0x0750 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    RecoilStartRot;                                   		// 0x0754 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    RecoilEndRot;                                     		// 0x0760 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              CamShakeCrouchedMod;                              		// 0x076C (0x0004) [0x0000000000000000]              
	float                                              CamShakePronedMod;                                		// 0x0770 (0x0004) [0x0000000000000000]              
	float                                              CamShakeZoomedMod;                                		// 0x0774 (0x0004) [0x0000000000000000]              
	float                                              MaxPitchLagCurrent;                               		// 0x0778 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MaxYawLagCurrent;                                 		// 0x077C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MaxPitchLagZoomed;                                		// 0x0780 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxYawLagZoomed;                                  		// 0x0784 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              JumpDampingZoomed;                                		// 0x0788 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OldRotDifMax;                                     		// 0x078C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LagAutoRecenterRotSpeed;                          		// 0x0790 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlowHeadshotScale;                                		// 0x0794 (0x0004) [0x0000000000000000]              
	float                                              RunningHeadshotScale;                             		// 0x0798 (0x0004) [0x0000000000000000]              
	class UClass*                                      HeadShotDamageType;                               		// 0x079C (0x0004) [0x0000000000000000]              
	class UClass*                                      CrotchShotDamageType;                             		// 0x07A0 (0x0004) [0x0000000000000000]              
	float                                              HeadShotDamageMult;                               		// 0x07A4 (0x0004) [0x0000000000000000]              
	float                                              CrotchShotDamageMult;                             		// 0x07A8 (0x0004) [0x0000000000000000]              
	float                                              ZoomFOVDelta;                                     		// 0x07AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ZoomedTargetFOVMin;                               		// 0x07B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UAudioComponent*                             ZoomLoop;                                         		// 0x07B4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class USoundCue*                                   ZoomLoopCue;                                      		// 0x07B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  ZoomedHudMaterial;                                		// 0x07BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponZoomedSnd;                                  		// 0x07C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponZoomFireAnim;                               		// 0x07C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponZoomIdleAnim;                               		// 0x07CC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponZoomInAnim;                                 		// 0x07D4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponZoomOutAnim;                                		// 0x07DC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponZoomFireTime;                               		// 0x07E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponZoomIdleTime;                               		// 0x07E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponZoomInTime;                                 		// 0x07EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponZoomOutTime;                                		// 0x07F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponZoomInFOVTime;                              		// 0x07F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WeaponZoomOutFOVTime;                             		// 0x07F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AmmoRegenUnitsMult;                               		// 0x07FC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78205 ];

		return pClassPointer;
	};

	int LagRot ( int NewValue, int LastValue, float MaxDiff, int Index );
	void eventSetPosition ( class AUDKPawn* Holder );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void DetachMuzzleFlash ( );
	void AttachMuzzleFlash ( );
	void SetShellParams ( class UParticleSystemComponent* PSC );
	void PreloadTextures ( unsigned long bForcePreload );
	void eventStopMuzzleFlash ( );
	void eventCauseMuzzleFlash ( );
	void eventShellEjectorTimer ( );
	void PostBeginPlay ( );
	bool TeamCanUse ( int teamInd );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DisplayDebugDeviations ( class AHUD* H );
	void ActiveRenderOverlays ( class AHUD* H );
	void DrawZoomedOverlay ( class AHUD* H );
	void PlayWeaponPutDown ( );
	void PerformQuickWeaponChange ( );
	void BeginFire ( unsigned char FireModeNum );
	void SprintOutFinished ( );
	void PlayWeaponEquip ( );
	void EndFire ( unsigned char FireModeNum );
	void PlayWeaponTaunt ( );
	void ServerBeginTaunt ( );
	void BeginTaunt ( );
	void Taunt ( );
	void TimeWeaponTaunt ( );
	void CalcInventoryWeight ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	bool CheckZoom ( unsigned char FireModeNum );
	void TauntisFinished ( );
	void ServerEndTaunt ( );
	void EndTaunt ( );
	void StopTaunt ( );
	void AbortTaunt ( );
	void WeaponTauntingFinished ( );
	void PlayWeaponSprintOut ( );
	void SprintInFinished ( );
	void PlayWeaponSprintIn ( );
	void WeaponStartSprint ( );
	unsigned char GetZoomedState ( );
	bool IsZoomedOrZooming ( );
	void RestartCrosshair ( );
	void ZoomOutAnimDone ( );
	void EndZoomImmediate ( class AR_PlayerController* PC );
	void LeaveZoom ( );
	void EndZoom ( class AUTPlayerController* PC );
	void StopZoom ( );
	void ZoomInComplete ( );
	void ZoomInAnimDone ( );
	void StartZoom ( class AUTPlayerController* UTPC );
	void HolderEnteredVehicle ( );
	struct FVector GetEffectLocation ( );
	void ApplyRecoil ( );
	void WeaponProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, float DamageScale, int NumHits );
	void UTWeaponProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, float DamageScale, int NumHits );
	bool sKillzProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, float DamageScale, int NumHits );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	void InstantFireShotGun ( );
	void InstantFire ( );
	void ShakeView ( );
	struct FRotator AddSpread ( struct FRotator BaseAim );
	void UpdateClientDeviations ( );
	void SampleMotionTimer ( );
	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
	void SetMotionSampleTimer ( unsigned long bOn, unsigned long bShowDeviations );
};

UClass* AR_Weapon::pClassPointer = NULL;

// Class RavagedGame.R_Weapon_MagType
// 0x004C (0x084C - 0x0800)
class AR_Weapon_MagType : public AR_Weapon
{
public:
	int                                                MagazineCount;                                    		// 0x0800 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                MagazineSize;                                     		// 0x0804 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bAutoCalcAmmoMaxFromMagMax : 1;                   		// 0x0808 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bAutoReload : 1;                                  		// 0x0808 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInterruptReload : 1;                             		// 0x0808 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bLoopedReload : 1;                                		// 0x0808 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFirstRoundReloaded : 1;                          		// 0x0808 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	int                                                MagWarnThreshold;                                 		// 0x080C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AmmoInMag;                                        		// 0x0810 (0x0004) [0x0000000000000000]              
	float                                              ReloadTime;                                       		// 0x0814 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      RoundsPerReloadLoop;                              		// 0x0818 (0x0001) [0x0000000000000000]              
	struct FName                                       WeaponLoopedReloadAnimStart;                      		// 0x081C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponLoopedReloadAnimEnd;                        		// 0x0824 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoopedReloadStartTime;                            		// 0x082C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoopedReloadEndTime;                              		// 0x0830 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       WeaponReloadAnim;                                 		// 0x0834 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ArmsReloadAnim;                                   		// 0x083C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponReloadSnd;                                  		// 0x0844 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponOutOfAmmoSnd;                               		// 0x0848 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78204 ];

		return pClassPointer;
	};

	int GetMagCount ( );
	int GetAmmoCountMag ( );
	bool DenyClientWeaponSet ( );
	void PutDownWeapon ( );
	void ChangeVisibility ( unsigned long bIsVisible );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DisplayDebugState ( class AHUD* H );
	void DisplayDebugReloadState ( class AHUD* H );
	void SetMotionSampleTimer ( unsigned long bOn, unsigned long bShowDeviations );
	bool IsReloading ( );
	bool IsMagazineLow ( );
	bool IsMagazineEmpty ( );
	int AddAmmo ( int Amount );
	void CalcMagCount ( );
	void PostBeginPlay ( );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	void Loaded ( unsigned long bUseWeaponMax );
	void ClientEndReload ( int MagAmmo );
	void ServerEndReload ( );
	void EndReload ( );
	void StopReload ( );
	void ServerAbortReload ( );
	void AbortReload ( );
	void WeaponIsReloaded ( );
	bool ShouldAutoReload ( );
	bool CanReload ( );
	void ProcessReload ( );
	void ServerBeginReload ( );
	void BeginReload ( );
	void ClientVerifyMagAmmo ( int MagAmmo );
	void ServerVerifyMagAmmo ( );
	void reload ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void TimeWeaponReloading ( );
	void ClientPlayLoopedReloadOutroAnim ( );
	void ClientReloadedOne ( );
	void ClientPlayLoopedReloadIntroAnim ( );
	void StopWeaponReloadingAnimation ( );
	void PlayWeaponReloadingAnimation ( );
};

UClass* AR_Weapon_MagType::pClassPointer = NULL;

// Class RavagedGame.R_Weap_AssaultRifle
// 0x0000 (0x084C - 0x084C)
class AR_Weap_AssaultRifle : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78203 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_AssaultRifle::pClassPointer = NULL;

// Class RavagedGame.R_Ammo_SniperRifle
// 0x0000 (0x03C4 - 0x03C4)
class AR_Ammo_SniperRifle : public AUTAmmoPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78207 ];

		return pClassPointer;
	};

};

UClass* AR_Ammo_SniperRifle::pClassPointer = NULL;

// Class RavagedGame.R_Supply_Object
// 0x0038 (0x02D8 - 0x02A0)
class AR_Supply_Object : public ANavigationPoint
{
public:
	float                                              FastTimerPeriod;                                  		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlowTimerPeriod;                                  		// 0x02A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFastTimer : 1;                                   		// 0x02A8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bShowOnHUD : 1;                                   		// 0x02A8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bHudVisible : 1;                                  		// 0x02A8 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              PlayerPawnAmmoRegenRate;                          		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayerPawnEffectRadius;                           		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AmmoUpSoundPeriod;                                		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastAmmoUpSoundTime;                              		// 0x02B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     HUDOffset;                                        		// 0x02BC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  HUDTexture;                                       		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HUDTextureScale;                                  		// 0x02CC (0x0004) [0x0000000000000000]              
	float                                              DistanceFromViewer;                               		// 0x02D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              MaxDistanceToDisplay;                             		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78214 ];

		return pClassPointer;
	};

	void RegenPlayerPawn ( class AR_Pawn* pwn, float DT );
	bool SupplyPlayerPawns ( );
	bool CheckPawns ( );
	void SupplyTimer ( );
	void PostBeginPlay ( );
};

UClass* AR_Supply_Object::pClassPointer = NULL;

// Class RavagedGame.R_InventoryManager
// 0x0008 (0x0208 - 0x0200)
class AR_InventoryManager : public AUTInventoryManager
{
public:
	unsigned char                                      AmmoInc;                                          		// 0x0200 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class USoundCue*                                   AmmoUpSound;                                      		// 0x0204 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78239 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void NextWeapon ( );
	void PrevWeapon ( );
	void DropAmmo ( struct FVector StartLocation, struct FVector StartVelocity );
	void AddAmmoToWeapon ( int AmountToAdd, class UClass* WeaponClassToAddTo );
	bool AddInventory ( class AInventory* NewItem, unsigned long bDoNotActivate );
};

UClass* AR_InventoryManager::pClassPointer = NULL;

// Class RavagedGame.R_AmmoCrate
// 0x0004 (0x02DC - 0x02D8)
class AR_AmmoCrate : public AR_Supply_Object
{
public:
	class UStaticMeshComponent*                        CrateMesh;                                        		// 0x02D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78250 ];

		return pClassPointer;
	};

};

UClass* AR_AmmoCrate::pClassPointer = NULL;

// Class RavagedGame.R_AnimBlendByPosture
// 0x0000 (0x0128 - 0x0128)
class UR_AnimBlendByPosture : public UR_UDKAnimBlendByPosture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78255 ];

		return pClassPointer;
	};

};

UClass* UR_AnimBlendByPosture::pClassPointer = NULL;

// Class RavagedGame.R_AnimBlendByVehicleSeat
// 0x0000 (0x0144 - 0x0144)
class UR_AnimBlendByVehicleSeat : public UR_AnimBlendByVehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78274 ];

		return pClassPointer;
	};

	void eventUpdateInScript ( float DT );
	void eventHandIKEnabled ( unsigned long bUsingIK );
	void eventGetSeatAnimNames ( class AVehicle* veh, int CurSeatIdx );
	void eventCheckForHandIKSockets ( class AVehicle* veh, int CurSeatIdx );
	void MyTickAnim ( float DeltaSeconds );
};

UClass* UR_AnimBlendByVehicleSeat::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Land
// 0x0098 (0x0DB0 - 0x0D18)
class AR_Vehicle_Land : public AR_Vehicle
{
public:
	class USoundCue*                                   SuspensionShiftSound;                             		// 0x0D18 (0x0004) [0x0000000000000000]              
	float                                              LockSuspensionTravel;                             		// 0x0D1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LockSuspensionStiffness;                          		// 0x0D20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinZRoofBounce;                                   		// 0x0D24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RoofBounceImpulse;                                		// 0x0D28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RoofBounceDamage;                                 		// 0x0D2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastContactLocation;                              		// 0x0D30 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastContactNormal;                                		// 0x0D3C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastUp;                                           		// 0x0D48 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              BoostMinVelCheckSq;                               		// 0x0D54 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BoostedChassisTorqueScale;                        		// 0x0D58 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostedReverseChassisTorqueScaleMult;             		// 0x0D5C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostedRearWheelTorque;                           		// 0x0D60 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostMaxZ;                                        		// 0x0D64 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   PressingGasSound;                                 		// 0x0D68 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxVelocityToPlayGasSound;                        		// 0x0D6C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinGasSoundDelay;                                 		// 0x0D70 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastGasSoundPlayTime;                             		// 0x0D74 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USoundCue*                                   PressingBrakeSound;                               		// 0x0D78 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinBrakingSoundDelay;                             		// 0x0D7C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastBrakingSoundPlayTime;                         		// 0x0D80 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< unsigned long >                            bEjectionSeats;                                   		// 0x0D84 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              RagDollVelocityAmount;                            		// 0x0D90 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinRagdollSpeedSq;                                		// 0x0D94 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicalMaterial*                           HighFrictionMaterial;                             		// 0x0D98 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AR_PlayerController*                         PotentialJumpAwardWinnerController;               		// 0x0D9C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     DrivenStartLoc;                                   		// 0x0DA0 (0x000C) [0x0000000000000000]              
	unsigned long                                      bDrivingTrackingStarted : 1;                      		// 0x0DAC (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78321 ];

		return pClassPointer;
	};

	void ChassisTouchingUpsideDown ( unsigned long bTouching );
	void eventDoStopBoosting ( );
	void eventDoBoosting ( );
	void CauseMuzzleFlashLight ( int SeatIndex );
	void IdleUpEngineTimer ( );
	void DrivingStatusChanged ( );
	bool TryToDrive ( class APawn* P );
	void eventSuspensionHeavyShift ( float Delta );
	void SetInputs ( float InForward, float InStrafe, float InUp );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void ThrowDriver ( );
	void InitializeSeats ( );
	void SetLandSensitivity ( float NewSensitivity, unsigned long bIsServer );
	void eventReplicatedEvent ( struct FName VarName );
	void PostLandingAwardDelay ( );
	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo );
	void SetDriving ( unsigned long B );
};

UClass* AR_Vehicle_Land::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Land_Leaning
// 0x000C (0x0DBC - 0x0DB0)
class AR_Vehicle_Land_Leaning : public AR_Vehicle_Land
{
public:
	unsigned long                                      bCamResetLerping : 1;                             		// 0x0DB0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CamResetLerpStartTime;                            		// 0x0DB4 (0x0004) [0x0000000000000000]              
	float                                              CamResetLerpTime;                                 		// 0x0DB8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78320 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
	void TickSpecial ( float DT );
	void VehicleProcessViewRotation ( float DeltaTime, int SeatIndex, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void ResetCam ( );
	void SetInputsLeaner ( float InForward, float InStrafe, float InUp, int Mouse );
};

UClass* AR_Vehicle_Land_Leaning::pClassPointer = NULL;

// Class RavagedGame.R_WeaponAttachment
// 0x0028 (0x02D4 - 0x02AC)
class AR_WeaponAttachment : public AUTWeaponAttachment
{
public:
	TArray< struct FName >                             Weapon3PAnim;                                     		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         Weapon3PAnimSound;                                		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             Weapon3PAnimProned;                               		// 0x02C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   StopFiringSound;                                  		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78482 ];

		return pClassPointer;
	};

	void eventStopThirdPersonFireEffects ( );
	struct FName GetWeapon3PAnimationFromIndex ( unsigned char Idx, unsigned long bProned );
};

UClass* AR_WeaponAttachment::pClassPointer = NULL;

// Class RavagedGame.R_WeaponAttachment_Tracer
// 0x001C (0x02F0 - 0x02D4)
class AR_WeaponAttachment_Tracer : public AR_WeaponAttachment
{
public:
	class UClass*                                      TracerClass;                                      		// 0x02D4 (0x0004) [0x0000000000000000]              
	int                                                TracerInterval;                                   		// 0x02D8 (0x0004) [0x0000000000000000]              
	int                                                MaxTracers;                                       		// 0x02DC (0x0004) [0x0000000000000000]              
	int                                                ShotsFired;                                       		// 0x02E0 (0x0004) [0x0000000000000000]              
	TArray< class AProjectile* >                       TracerProjectiles;                                		// 0x02E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78514 ];

		return pClassPointer;
	};

	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
	class AProjectile* FireTracerRound ( struct FVector EffectLocation, struct FVector HitLocation );
};

UClass* AR_WeaponAttachment_Tracer::pClassPointer = NULL;

// Class RavagedGame.R_Projectile
// 0x0038 (0x02C4 - 0x028C)
class AR_Projectile : public AUTProjectile
{
public:
	class UClass*                                      ExplosionEffectsClass;                            		// 0x028C (0x0004) [0x0000000000000002]              ( CPF_Const )
	class AR_ExplosionEffects*                         ExplosionEffects;                                 		// 0x0290 (0x0004) [0x0000000000000000]              
	unsigned long                                      bForceTerrainDecal : 1;                           		// 0x0294 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseMinArmingDistance : 1;                        		// 0x0294 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	float                                              MinArmingDistance;                                		// 0x0298 (0x0004) [0x0000000000000000]              
	float                                              TotalDistanceTraveledAtLastImpact;                		// 0x029C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastImpactLocation;                               		// 0x02A0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              MinArmBounceVelAmount;                            		// 0x02AC (0x0004) [0x0000000000000000]              
	float                                              MinArmBounceVelocityToAutoDetonate;               		// 0x02B0 (0x0004) [0x0000000000000000]              
	struct FVector                                     LastBounceLocation;                               		// 0x02B4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                SameLastBounceLocCount;                           		// 0x02C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78535 ];

		return pClassPointer;
	};

	void eventProjectile_HitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	bool CheckMinArmDistance ( struct FVector HitNormal );
	void DoMinArmBounce ( struct FVector HitNormal );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	bool Actor_HurtRadius ( float BaseDamage, float hurtDamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	bool Projectile_HurtRadius ( float DamageAmount, float InDamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage );
	bool Projectile_ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
	void PostBeginPlay ( );
};

UClass* AR_Projectile::pClassPointer = NULL;

// Class RavagedGame.R_TracerProjectile
// 0x0000 (0x02C4 - 0x02C4)
class AR_TracerProjectile : public AR_Projectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78534 ];

		return pClassPointer;
	};

	bool ProjectileHurtRadius ( struct FVector HurtOrigin, struct FVector HitNormal );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AR_TracerProjectile::pClassPointer = NULL;

// Class RavagedGame.R_Attachment
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78537 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment::pClassPointer = NULL;

// Class RavagedGame.R_Weapon_SemiAuto
// 0x0000 (0x084C - 0x084C)
class AR_Weapon_SemiAuto : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78543 ];

		return pClassPointer;
	};

};

UClass* AR_Weapon_SemiAuto::pClassPointer = NULL;

// Class RavagedGame.R_Weap
// 0x0000 (0x084C - 0x084C)
class AR_Weap : public AR_Weapon_SemiAuto
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78542 ];

		return pClassPointer;
	};

};

UClass* AR_Weap::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_AK47
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_AK47 : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78544 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_AK47::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Ak47
// 0x0000 (0x084C - 0x084C)
class AR_Weap_Ak47 : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78547 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Ak47::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_AN94
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_AN94 : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78548 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_AN94::pClassPointer = NULL;

// Class RavagedGame.R_Weap_AN94
// 0x0000 (0x084C - 0x084C)
class AR_Weap_AN94 : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78551 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_AN94::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_AssaultRifle
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_AssaultRifle : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78552 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_AssaultRifle::pClassPointer = NULL;

// Class RavagedGame.R_WeaponAttachment_Anim_Arms
// 0x0028 (0x02FC - 0x02D4)
class AR_WeaponAttachment_Anim_Arms : public AR_WeaponAttachment
{
public:
	TArray< struct FName >                             FireAnims;                                        		// 0x02D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             AltFireAnims;                                     		// 0x02E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      CycleWeaponFireAnims : 1;                         		// 0x02EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseFullBodyAnim : 1;                             		// 0x02EC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUseUpperBodyAnim : 1;                            		// 0x02EC (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                CurrentAnimIdx;                                   		// 0x02F0 (0x0004) [0x0000000000000000]              
	float                                              SwingAnimFadeInTime;                              		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SwingAnimFadeOutTime;                             		// 0x02F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78555 ];

		return pClassPointer;
	};

	void eventStopThirdPersonFireEffects ( );
	void PlayImpactEffects ( struct FVector HitLocation );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
};

UClass* AR_WeaponAttachment_Anim_Arms::pClassPointer = NULL;

// Class RavagedGame.R_Weapon_Melee
// 0x0068 (0x0868 - 0x0800)
class AR_Weapon_Melee : public AR_Weapon
{
public:
	float                                              ExhaustionLevel;                                  		// 0x0800 (0x0004) [0x0000000000000000]              
	float                                              ExhaustionPerSwing;                               		// 0x0804 (0x0004) [0x0000000000000000]              
	float                                              ExhaustionMax;                                    		// 0x0808 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExhaustionRecoveryRate;                           		// 0x080C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ExhaustionMin;                                    		// 0x0810 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bExhausted : 1;                                   		// 0x0814 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bDelayFireSoundUntilEffectiveSwingTime : 1;       		// 0x0814 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsSwinging : 1;                                  		// 0x0814 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bFollowThroughAfterHit : 1;                       		// 0x0814 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bMultipleHits : 1;                                		// 0x0814 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      WeaponFireCycleAnims : 1;                         		// 0x0814 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bDebugginAnims : 1;                               		// 0x0814 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bSamplingAnims : 1;                               		// 0x0814 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	float                                              LastSwingOrAttemptedTime;                         		// 0x0818 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       MeleeTipSocketName;                               		// 0x081C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotalSwingTime;                                   		// 0x0824 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WindupTime;                                       		// 0x0828 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectiveSwingTime;                               		// 0x082C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CheckHitTimePeriod;                               		// 0x0830 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectiveSwingStartTime;                          		// 0x0834 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastDebugTipPosition;                             		// 0x0838 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UR_Melee_Animation_Info* >           AnimationInfos;                                   		// 0x0844 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           GlobalTipPositions;                               		// 0x0850 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastPlayedPositionIdx;                            		// 0x085C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentAnimIdx;                                   		// 0x0860 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurrentAnimTimeScale;                             		// 0x0864 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78569 ];

		return pClassPointer;
	};

	void FireAmmunition ( );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void DrawDebugAnims ( class AHUD* H );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	void TakeSample ( );
	void StopFireEffects ( unsigned char FireModeNum );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	void SetFlashLocation ( struct FVector HitLocation );
	bool PerformFirePositionIdx ( int localPosIdx );
	void StopSwing ( );
	void PlaybackSamples ( );
	void CheckHitTimer ( );
	void WindUpComplete ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void InstantFire ( );
	void PlayAllAnimsTimer ( );
	void BeginFire ( unsigned char FireModeNum );
	void TimeWeaponFiring ( unsigned char FireModeNum );
	float GetFireInterval ( unsigned char FireModeNum );
	void SetMotionSampleTimer ( unsigned long bOn, unsigned long bShowDeviations );
	void PostBeginPlay ( );
};

UClass* AR_Weapon_Melee::pClassPointer = NULL;

// Class RavagedGame.R_Weapon_Melee_Attachment
// 0x0000 (0x02FC - 0x02FC)
class AR_Weapon_Melee_Attachment : public AR_WeaponAttachment_Anim_Arms
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78581 ];

		return pClassPointer;
	};

	void eventStopThirdPersonFireEffects ( );
	void PlayImpactEffects ( struct FVector HitLocation );
};

UClass* AR_Weapon_Melee_Attachment::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Axe
// 0x0000 (0x02FC - 0x02FC)
class AR_Attachment_Axe : public AR_Weapon_Melee_Attachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78588 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Axe::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Axe
// 0x0000 (0x0868 - 0x0868)
class AR_Weap_Axe : public AR_Weapon_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78603 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Axe::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Bat
// 0x0000 (0x02FC - 0x02FC)
class AR_Attachment_Bat : public AR_Weapon_Melee_Attachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78604 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Bat::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Bat
// 0x0000 (0x0868 - 0x0868)
class AR_Weap_Bat : public AR_Weapon_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78607 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Bat::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Browning
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_Browning : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78608 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Browning::pClassPointer = NULL;

// Class RavagedGame.R_Weap_HeavyAssault
// 0x0000 (0x084C - 0x084C)
class AR_Weap_HeavyAssault : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78611 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_HeavyAssault::pClassPointer = NULL;

// Class RavagedGame.R_WeaponAttachment_Throwable
// 0x0028 (0x0324 - 0x02FC)
class AR_WeaponAttachment_Throwable : public AR_WeaponAttachment_Anim_Arms
{
public:
	struct FName                                       Throw3PAnim;                                      		// 0x02FC (0x0008) [0x0000000000000000]              
	float                                              Throw3PAnimTime;                                  		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              ArmingTime3P;                                     		// 0x0308 (0x0004) [0x0000000000000000]              
	struct FName                                       CookIdle3PAnim;                                   		// 0x030C (0x0008) [0x0000000000000000]              
	float                                              WeaponReloadDelay;                                		// 0x0314 (0x0004) [0x0000000000000000]              
	float                                              ThrowingReleaseDelay3P;                           		// 0x0318 (0x0004) [0x0000000000000000]              
	float                                              IdleFadeInTime;                                   		// 0x031C (0x0004) [0x0000000000000000]              
	float                                              IdleFadeOutTime;                                  		// 0x0320 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78612 ];

		return pClassPointer;
	};

	void ArmingTime3PComplete ( );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void FirstPersonThrowProjectileEffects ( class AWeapon* Weap, struct FVector testV );
	void RestoreVisibility ( );
	void ReleaseProjectile ( );
	void ThirdPersonThrowProjectileEffects ( struct FVector HitLocation );
};

UClass* AR_WeaponAttachment_Throwable::pClassPointer = NULL;

// Class RavagedGame.R_Weapon_Throwable
// 0x0058 (0x0858 - 0x0800)
class AR_Weapon_Throwable : public AR_Weapon
{
public:
	float                                              CurrentArmingTime;                                		// 0x0800 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bThrowRequested : 1;                              		// 0x0804 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bForceThrow : 1;                                  		// 0x0804 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUsePitchForThrowVelocity : 1;                    		// 0x0804 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              ArmingTime;                                       		// 0x0808 (0x0004) [0x0000000000000000]              
	float                                              ArmingAnimTime;                                   		// 0x080C (0x0004) [0x0000000000000000]              
	struct FName                                       CookingIdleAnimName;                              		// 0x0810 (0x0008) [0x0000000000000000]              
	float                                              CookingIdleAnimTime;                              		// 0x0818 (0x0004) [0x0000000000000000]              
	struct FName                                       ThrowAnimName;                                    		// 0x081C (0x0008) [0x0000000000000000]              
	float                                              ThrowAnimTime;                                    		// 0x0824 (0x0004) [0x0000000000000000]              
	struct FName                                       WeaponThrowAnimName;                              		// 0x0828 (0x0008) [0x0000000000000000]              
	float                                              WeaponThrowAnimTime;                              		// 0x0830 (0x0004) [0x0000000000000000]              
	float                                              ThrowingReleaseDelay;                             		// 0x0834 (0x0004) [0x0000000000000000]              
	float                                              WeaponReloadDelay;                                		// 0x0838 (0x0004) [0x0000000000000000]              
	float                                              ThrowersVelocityFactor;                           		// 0x083C (0x0004) [0x0000000000000000]              
	float                                              ThrowersVelocityZFactor;                          		// 0x0840 (0x0004) [0x0000000000000000]              
	float                                              PitchToVelocityFactor;                            		// 0x0844 (0x0004) [0x0000000000000000]              
	float                                              PitchToVelocityMin;                               		// 0x0848 (0x0004) [0x0000000000000000]              
	struct FVector                                     ThrowProjectileFlashLoc;                          		// 0x084C (0x000C) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78635 ];

		return pClassPointer;
	};

	void WeaponRearmed ( );
	void ArmingTimeComplete ( );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	void PlayFiringSound ( );
	class AProjectile* ProjectileFire ( );
	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
};

UClass* AR_Weapon_Throwable::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Cleaver
// 0x0000 (0x0324 - 0x0324)
class AR_Attachment_Cleaver : public AR_WeaponAttachment_Throwable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78637 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Cleaver::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Cleaver
// 0x0000 (0x0858 - 0x0858)
class AR_Weap_Cleaver : public AR_Weapon_Throwable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78640 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
};

UClass* AR_Weap_Cleaver::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Crossbow
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_Crossbow : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78641 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Crossbow::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Crossbow
// 0x0000 (0x084C - 0x084C)
class AR_Weap_Crossbow : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78644 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Crossbow::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Crowbar
// 0x0000 (0x02FC - 0x02FC)
class AR_Attachment_Crowbar : public AR_Weapon_Melee_Attachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78645 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Crowbar::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Crowbar
// 0x0000 (0x0868 - 0x0868)
class AR_Weap_Crowbar : public AR_Weapon_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78648 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Crowbar::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Gknife
// 0x0000 (0x0324 - 0x0324)
class AR_Attachment_Gknife : public AR_WeaponAttachment_Throwable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78649 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Gknife::pClassPointer = NULL;

// Class RavagedGame.R_Weap_GKnife
// 0x0000 (0x0858 - 0x0858)
class AR_Weap_GKnife : public AR_Weapon_Throwable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78652 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
};

UClass* AR_Weap_GKnife::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Harpoon
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_Harpoon : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78653 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Harpoon::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Harpoon
// 0x0000 (0x084C - 0x084C)
class AR_Weap_Harpoon : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78656 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Harpoon::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_LAW
// 0x0000 (0x02D4 - 0x02D4)
class AR_Attachment_LAW : public AR_WeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78657 ];

		return pClassPointer;
	};

	void StopThirdPersonFireEffects ( );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void AttachTo ( class AUTPawn* OwnerPawn );
};

UClass* AR_Attachment_LAW::pClassPointer = NULL;

// Class RavagedGame.R_Weapon_RocketLauncher
// 0x0000 (0x084C - 0x084C)
class AR_Weapon_RocketLauncher : public AR_Weapon_SemiAuto
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78666 ];

		return pClassPointer;
	};

};

UClass* AR_Weapon_RocketLauncher::pClassPointer = NULL;

// Class RavagedGame.R_Weap_LAW
// 0x0000 (0x084C - 0x084C)
class AR_Weap_LAW : public AR_Weapon_RocketLauncher
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78665 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_LAW::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_M16
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_M16 : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78667 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_M16::pClassPointer = NULL;

// Class RavagedGame.R_Weap_M16
// 0x0000 (0x084C - 0x084C)
class AR_Weap_M16 : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78672 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_M16::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_M249
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_M249 : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78673 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_M249::pClassPointer = NULL;

// Class RavagedGame.R_Weap_M249
// 0x0000 (0x084C - 0x084C)
class AR_Weap_M249 : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78676 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_M249::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_M26Grenade
// 0x0000 (0x0324 - 0x0324)
class AR_Attachment_M26Grenade : public AR_WeaponAttachment_Throwable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78677 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_M26Grenade::pClassPointer = NULL;

// Class RavagedGame.R_Weapon_Fused
// 0x0008 (0x0860 - 0x0858)
class AR_Weapon_Fused : public AR_Weapon_Throwable
{
public:
	float                                              MaxCookTime;                                      		// 0x0858 (0x0004) [0x0000000000000000]              
	float                                              CurrentCookTime;                                  		// 0x085C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78681 ];

		return pClassPointer;
	};

	void WeaponRearmed ( );
	class AProjectile* ProjectileFire ( );
	float GetPowerPerc ( );
	void ActiveRenderOverlays ( class AHUD* H );
};

UClass* AR_Weapon_Fused::pClassPointer = NULL;

// Class RavagedGame.R_Weap_M26Grenade
// 0x0000 (0x0860 - 0x0860)
class AR_Weap_M26Grenade : public AR_Weapon_Fused
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78680 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_M26Grenade::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_M79
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_M79 : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78682 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_M79::pClassPointer = NULL;

// Class RavagedGame.R_Weap_M79
// 0x0000 (0x084C - 0x084C)
class AR_Weap_M79 : public AR_Weapon_RocketLauncher
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78685 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_M79::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Mp5
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_Mp5 : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78686 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Mp5::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Mp5
// 0x0000 (0x084C - 0x084C)
class AR_Weap_Mp5 : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78691 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Mp5::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Mp7
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_Mp7 : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78692 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Mp7::pClassPointer = NULL;

// Class RavagedGame.R_Weap_MP7
// 0x0000 (0x084C - 0x084C)
class AR_Weap_MP7 : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78695 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_MP7::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_P99
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_P99 : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78696 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_P99::pClassPointer = NULL;

// Class RavagedGame.R_Weap_P99
// 0x0000 (0x084C - 0x084C)
class AR_Weap_P99 : public AR_Weapon_SemiAuto
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78699 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_P99::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Rem870
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_Rem870 : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78700 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Rem870::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Rem870
// 0x0000 (0x084C - 0x084C)
class AR_Weap_Rem870 : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78703 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Rem870::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_RPG
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_RPG : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78704 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_RPG::pClassPointer = NULL;

// Class RavagedGame.R_Weap_RPG
// 0x0000 (0x084C - 0x084C)
class AR_Weap_RPG : public AR_Weapon_RocketLauncher
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78707 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_RPG::pClassPointer = NULL;

// Class RavagedGame.R_WeaponAttachment_ShotgunType
// 0x001C (0x030C - 0x02F0)
class AR_WeaponAttachment_ShotgunType : public AR_WeaponAttachment_Tracer
{
public:
	float                                              WeaponClassSpread;                                		// 0x02F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              WeaponClassWeaponRange;                           		// 0x02F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                WeaponClassBuckCount;                             		// 0x02F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     EffectLocPerCurrentView;                          		// 0x02FC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bLocalShotgunOverride : 1;                        		// 0x0308 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78708 ];

		return pClassPointer;
	};

	void AttachTo ( class AUTPawn* OwnerPawn );
	struct FRotator WeapAttachAddSpread ( struct FRotator BaseAim );
	void ShotgunExpandFireEffects ( struct FVector EffectStartLoc, struct FVector HitLocation );
	void PlayImpactEffects ( struct FVector HitLocation );
	void ThirdPersonFireEffects ( struct FVector HitLocation );
	void FirstPersonFireEffects ( class AWeapon* PawnWeapon, struct FVector HitLocation );
};

UClass* AR_WeaponAttachment_ShotgunType::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_SawedShotgun
// 0x0000 (0x030C - 0x030C)
class AR_Attachment_SawedShotgun : public AR_WeaponAttachment_ShotgunType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78744 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_SawedShotgun::pClassPointer = NULL;

// Class RavagedGame.R_Weap_SawedOffShotgun
// 0x0000 (0x084C - 0x084C)
class AR_Weap_SawedOffShotgun : public AR_Weapon_SemiAuto
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78749 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_SawedOffShotgun::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_SCAR
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_SCAR : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78750 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_SCAR::pClassPointer = NULL;

// Class RavagedGame.R_Weap_SCAR
// 0x0000 (0x084C - 0x084C)
class AR_Weap_SCAR : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78753 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_SCAR::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Shotgun
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_Shotgun : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78754 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Shotgun::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Sledgehammer
// 0x0000 (0x02FC - 0x02FC)
class AR_Attachment_Sledgehammer : public AR_Weapon_Melee_Attachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78757 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Sledgehammer::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Sledgehammer
// 0x0000 (0x0868 - 0x0868)
class AR_Weap_Sledgehammer : public AR_Weapon_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78760 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Sledgehammer::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_SniperRifle
// 0x0000 (0x02D4 - 0x02D4)
class AR_Attachment_SniperRifle : public AR_WeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78761 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_SniperRifle::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Sodabomb
// 0x0000 (0x0324 - 0x0324)
class AR_Attachment_Sodabomb : public AR_WeaponAttachment_Throwable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78764 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Sodabomb::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Sodabomb
// 0x0000 (0x0860 - 0x0860)
class AR_Weap_Sodabomb : public AR_Weapon_Fused
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78767 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Sodabomb::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Stinger
// 0x0000 (0x02D4 - 0x02D4)
class AR_Attachment_Stinger : public AR_WeaponAttachment
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78768 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Stinger::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Stinger
// 0x0000 (0x084C - 0x084C)
class AR_Weap_Stinger : public AR_Weapon_RocketLauncher
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78771 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Stinger::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_SubMachineGun
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_SubMachineGun : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78772 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_SubMachineGun::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_TennisBallbomb
// 0x0000 (0x0324 - 0x0324)
class AR_Attachment_TennisBallbomb : public AR_WeaponAttachment_Throwable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78775 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_TennisBallbomb::pClassPointer = NULL;

// Class RavagedGame.R_Weap_TennisBallbomb
// 0x0000 (0x0860 - 0x0860)
class AR_Weap_TennisBallbomb : public AR_Weapon_Fused
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78778 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_TennisBallbomb::pClassPointer = NULL;

// Class RavagedGame.R_Attachment_Uzi
// 0x0000 (0x02F0 - 0x02F0)
class AR_Attachment_Uzi : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78779 ];

		return pClassPointer;
	};

};

UClass* AR_Attachment_Uzi::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Uzi
// 0x0000 (0x084C - 0x084C)
class AR_Weap_Uzi : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78784 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Uzi::pClassPointer = NULL;

// Class RavagedGame.R_BarrelOfDeath
// 0x0038 (0x0328 - 0x02F0)
class AR_BarrelOfDeath : public AUDKKActorBreakable
{
public:
	class UParticleSystemComponent*                    BurningEffectComponent;                           		// 0x02F0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             BurningEffectTemplate;                            		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             BurningSoundComponent;                            		// 0x02F8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       BurningEffectParamName;                           		// 0x02FC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BurningHealth;                                    		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BurningLevel;                                     		// 0x0308 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bWasBurning : 1;                                  		// 0x030C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              Damage;                                           		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x0314 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MomentumTransfer;                                 		// 0x0318 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MyDamageType;                                     		// 0x031C (0x0004) [0x0000000000000000]              
	class USoundCue*                                   ExplosionSound;                                   		// 0x0320 (0x0004) [0x0000000000000000]              
	class UStaticMesh*                                 DamagedMesh;                                      		// 0x0324 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78785 ];

		return pClassPointer;
	};

	void Explode ( );
	void eventTakeDamage ( int TheDamage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
};

UClass* AR_BarrelOfDeath::pClassPointer = NULL;

// Class RavagedGame.R_Base_CTR
// 0x0064 (0x0454 - 0x03F0)
class AR_Base_CTR : public AUTGameObjective
{
public:
	class UAudioComponent*                             TakenSound;                                       		// 0x03F0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AR_Object_CTR*                               myFlag;                                           		// 0x03F4 (0x0004) [0x0000000000000000]              
	class UClass*                                      FlagType;                                         		// 0x03F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    SpawnMenuTexture;                                 		// 0x03FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ReturnableFlagType;                               		// 0x0400 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFlagMustBeHomeToReturn : 1;                      		// 0x0404 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceNeutralTeam : 1;                            		// 0x0404 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              MidFieldHighZOffset;                              		// 0x0408 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MidFieldLowZOffset;                               		// 0x040C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              NearBaseRadius;                                   		// 0x0410 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BaseExitTime;                                     		// 0x0414 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    FlagEmptyParticles;                               		// 0x0418 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMaterialInstanceConstant*                   FlagBaseMaterial;                                 		// 0x041C (0x0004) [0x0000000000000000]              
	class UMaterialInstanceConstant*                   MIC_FlagBaseColor;                                		// 0x0420 (0x0004) [0x0000000000000000]              
	class UStaticMeshComponent*                        FlagBaseMesh;                                     		// 0x0424 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      CTFAnnouncerMessagesClass;                        		// 0x0428 (0x0004) [0x0000000000000000]              
	TArray< class USoundNodeWave* >                    NearLocationSpeech;                               		// 0x042C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    MidfieldHighSpeech;                               		// 0x0438 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundNodeWave* >                    MidfieldLowSpeech;                                		// 0x0444 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DistanceFromViewer;                               		// 0x0450 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78815 ];

		return pClassPointer;
	};

	void SameTeamTouch ( class AController* C );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	bool eventIsActive ( );
	void eventReplicatedEvent ( struct FName VarName );
	void SetAlarm ( unsigned long bNowOn );
	class AUTCarriedObject* GetFlag ( );
	void ObjectiveChanged ( );
	class USoundNodeWave* GetLocationSpeechFor ( class APlayerController* PC, int LocationSpeechOffset, int MessageIndex );
	int GetLocationMessageIndex ( class AUTBot* B, class APawn* StatusPawn );
	class AActor* eventGetBestViewTarget ( );
	void PostBeginPlay ( );
};

UClass* AR_Base_CTR::pClassPointer = NULL;

// Class RavagedGame.R_Game
// 0x0108 (0x0668 - 0x0560)
class AR_Game : public AUTTeamGame
{
public:
	int                                                RespawnInterval;                                  		// 0x0560 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FirstRespawnInterval;                             		// 0x0564 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSpawnFailed : 1;                                 		// 0x0568 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bSpawnBlocked : 1;                                		// 0x0568 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bCPinit : 1;                                      		// 0x0568 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bCanAddBot : 1;                                   		// 0x0568 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bAllMapsStreamed : 1;                             		// 0x0568 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bVoteInProgress : 1;                              		// 0x0568 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      bVoteKickUsePercentageThreshold : 1;              		// 0x0568 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      EnableAutoBalance : 1;                            		// 0x0568 (0x0004) [0x0000000000000000] [0x00000080] 
	class AR_Vehicle*                                  SpawnedInVehicle;                                 		// 0x056C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UClass* >                            UsableWeaponClasses;                              		// 0x0570 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	class UClass*                                      SkillZMessageClass;                               		// 0x057C (0x0004) [0x0000000000000000]              
	struct FString                                     MessageOfTheDay;                                  		// 0x0580 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AR_PlayerController* >               PlayersWaitingToSpawn;                            		// 0x058C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     RConUnicodeTest;                                  		// 0x0598 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class AR_PlayerController*                         VoteKickInstigator;                               		// 0x05A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APlayerReplicationInfo*                      VoteKickOnPRI;                                    		// 0x05A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              VoteKickStartTime;                                		// 0x05AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                VoteKickTimeout;                                  		// 0x05B0 (0x0004) [0x0000000000000000]              
	int                                                VoteKickID;                                       		// 0x05B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VoteKickYes;                                      		// 0x05B8 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VoteKickNo;                                       		// 0x05B9 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	int                                                VoteKickResults;                                  		// 0x05BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                VoteKickPercentageThreshold;                      		// 0x05C0 (0x0004) [0x0000000000000000]              
	int                                                VoteKickVotesToSucceed;                           		// 0x05C4 (0x0004) [0x0000000000000000]              
	int                                                VoteKickVotesToSucceedINIDEFAULT;                 		// 0x05C8 (0x0004) [0x0000000000000000]              
	TArray< class AR_PlayerController* >               VoteKickParticipants;                             		// 0x05CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                TeamKillAutoKickThreshold;                        		// 0x05D8 (0x0004) [0x0000000000000000]              
	float                                              TeamKillAutoKickDuration;                         		// 0x05DC (0x0004) [0x0000000000000000]              
	float                                              PointsKill;                                       		// 0x05E0 (0x0004) [0x0000000000000000]              
	float                                              PointsSuicide;                                    		// 0x05E4 (0x0004) [0x0000000000000000]              
	float                                              PointsKillAssist;                                 		// 0x05E8 (0x0004) [0x0000000000000000]              
	float                                              PointsTeamKill;                                   		// 0x05EC (0x0004) [0x0000000000000000]              
	float                                              PointsDriverKillAssist;                           		// 0x05F0 (0x0004) [0x0000000000000000]              
	TArray< struct FMatchAchiever >                    MatchAchievers;                                   		// 0x05F4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                MatchAchievmentsMinPlayers;                       		// 0x0600 (0x0004) [0x0000000000000000]              
	float                                              LastMatchAchieversTime;                           		// 0x0604 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     AnnouncementText;                                 		// 0x0608 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AnnouncementDelay;                                		// 0x0614 (0x0004) [0x0000000000000000]              
	int                                                TKDecayRate;                                      		// 0x0618 (0x0004) [0x0000000000000000]              
	int                                                HighPingKickThreshold;                            		// 0x061C (0x0004) [0x0000000000000000]              
	int                                                HighPingChances;                                  		// 0x0620 (0x0004) [0x0000000000000000]              
	class AR_Thrust_ControlPoint*                      MainBases[ 0x2 ];                                 		// 0x0624 (0x0008) [0x0000000000000000]              
	int                                                SpawnCampKillsToMarkAsCamper;                     		// 0x062C (0x0004) [0x0000000000000000]              
	float                                              ABGoodPlayerKtoD;                                 		// 0x0630 (0x0004) [0x0000000000000000]              
	int                                                ABMaxTeamSizeDiff;                                		// 0x0634 (0x0004) [0x0000000000000000]              
	TArray< struct FABTeamPlayer >                     goodPlayersA;                                     		// 0x0638 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FABTeamPlayer >                     badPlayersA;                                      		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FABTeamPlayer >                     goodPlayersB;                                     		// 0x0650 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FABTeamPlayer >                     badPlayersB;                                      		// 0x065C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78841 ];

		return pClassPointer;
	};

	void GetMatchStats ( );
	void ReportMatchStat ( );
	void GetMatchOverStats ( );
	void CompileMatchAchievers ( );
	int GetMatchAchieverIndex ( unsigned char ach );
	void NotifySpree ( class AUTPlayerReplicationInfo* Other, int Num );
	void KickAnyBannedPlayers ( );
	void TestABStability ( int Instances );
	void TestAB ( );
	bool TestABImpl ( unsigned long verbose );
	bool Autobalance ( unsigned long Testing, unsigned long getNewTeamData, unsigned long verbose );
	void ABNow ( );
	float GetKToDForBalance ( int Kills, int Deaths );
	void ClearABPlayerLists ( );
	void SpewPlayers ( TArray< struct FABTeamPlayer >* Players );
	void SwapABTeamPlayer ( TArray< struct FABTeamPlayer >* From, TArray< struct FABTeamPlayer >* to, struct FABTeamPlayer* Player );
	void AutoBalancePlayer ( struct FABTeamPlayer Player );
	void TestABPlayer ( struct FString Player );
	void GetTeamData ( unsigned long Testing, int TeamNum, TArray< struct FABTeamPlayer >* goodPlayers, TArray< struct FABTeamPlayer >* badPlayers );
	void CheckForHighPings ( );
	void DecayTeamKills ( );
	void ScoreKill ( class AController* Killer, class AController* Other );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void Announce ( struct FString Message, int timeDelay );
	void ClearAnnouncement ( struct FString messageID );
	void BroadcastAnnouncement ( );
	void SetMotD ( struct FString newMotD );
	void MoveMap ( int mapNum, unsigned long Up );
	void RemoveMap ( int mapNum );
	void AddMap ( struct FString Map, int I );
	void GetMapList ( unsigned long annotated );
	void Switch ( struct FString URL );
	void RestartMap ( );
	void VoteKickEndVote ( unsigned long bVoteSucceeded );
	void VoteKickTimedOut ( );
	bool VoteKickCheckResults ( );
	void VoteKickCalcVotesNeeded ( );
	void VoteKickCastVote ( class AR_PlayerController* voterPC, unsigned long bKickPlayer, int curVoteID );
	bool RequestVoteKick ( class AR_PlayerController* VoteInstigator, class APlayerReplicationInfo* KickPRI, struct FString* msg );
	bool VoteKickPlayerAllowedToInstigate ( class AR_PlayerController* VoteInstigator );
	void GetPlayerList ( unsigned long annotated );
	struct FString GetAnnotatedPlayerStringFromPRI ( class APlayerReplicationInfo* PRI );
	struct FString GetPlayerStringFromPRI ( class APlayerReplicationInfo* PRI );
	void CycleMap ( );
	void NextMap ( );
	void RoundTransition ( );
	void RoundChange ( );
	void JoinGameFromSpectate ( class APlayerController* rCon );
	void SpectatePlayer ( class APlayerController* rCon );
	void eventPostLogin ( class APlayerController* NewPlayer );
	class UR_DataStore_GameSettings* GetGameSettings ( );
	void GenericPlayerInitialization ( class AController* C );
	void UTGame_ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	void UTTeamGame_ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	void ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	void UpdateGameSettings ( );
	TArray< class UClass* > GetWeaponsForTeamClass ( TArray< class UClass* > weapList, int nTeam, int nClass );
	TArray< class UClass* > GetWeaponsOfLoadoutType ( TArray< class UClass* > weapList, unsigned char FilterType );
	TArray< class UClass* > GetTeamWeapons ( int Team );
	void SpawnPlayer ( class AController* aPlayer );
	class APawn* GameInfo_SpawnDefaultPawnFor ( class AController* NewPlayer, class AActor* StartSpot, unsigned long bDisableStartCollisions );
	void GameInfo_RestartPlayer ( class AController* NewPlayer );
	void UTGame_RestartPlayer ( class AController* aPlayer );
	void GFxSpawnPlayer ( class AController* aPlayer );
	void GFxSetupPlayerInventory ( class AController* aPlayer );
	void RestartPlayer ( class AController* aPlayer );
	void SkillZCombo ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* comboType );
	void SetRespawnTime ( class AR_PlayerController* PC );
	void AnnounceScore ( int ScoringTeam );
	void AllClientsKillSpawnMenu ( );
	void ObjectiveNeutralized ( class AController* Scorer, class AR_Objective_ControlPoint* O, int NewTeam );
	void ObjectiveCaptured ( class AController* Scorer, class AR_Objective_ControlPoint* O, unsigned long bAnnounce );
	void AddTeamPoints ( int TeamNumber, int Points );
	class APlayerStart* ChoosePlayerStart ( class AController* Player, unsigned char InTeam );
	float R_RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	class AActor* GetObjectivesBestPlayerStart ( class AR_Objective_ControlPoint* cp, unsigned char InTeam, class AController* Player );
	class AActor* R_FindPlayerStart ( class AController* Player, unsigned char InTeam, struct FString IncomingName );
	void AddDumbBots ( int numbBots );
	void AddDumbBot ( int TeamIndex, int numberToAdd );
	class AUTBot* AddBot ( struct FString BotName, unsigned long bUseTeamIndex, int TeamIndex );
	class UClass* eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal );
	bool ChangeTeam ( class AController* Other, int N, unsigned long bNewTeam );
	bool UTTeamGame_ChangeTeam ( class AController* Other, int Num, unsigned long bNewTeam );
	void CalcTeamScores ( );
	bool GRIisReady ( );
	void eventPostSeamlessTravel ( );
	bool R_ActivateVehicleFactory ( class AUTVehicleFactory* VF );
	bool AllStreamedLevelsVisible ( );
	void FindMainBases ( );
	void PreBeginPlay ( );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	void InitGameReplicationInfo ( );
	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList );
	void StartMatch ( );
	void SwitchBothTeams ( );
	void RemovePlayerWaitingToSpawn ( class AR_PlayerController* rPC );
	void AddPlayerWaitingToSpawn ( class AR_PlayerController* rPC );
	void CheckPlayersSelectedSpawnActor ( class AActor* checkActor );
	void RespawnTimer ( );
	void CreateTeam ( int TeamIndex );
};

UClass* AR_Game::pClassPointer = NULL;

// Class RavagedGame.R_Game_CTR
// 0x0010 (0x0678 - 0x0668)
class AR_Game_CTR : public AR_Game
{
public:
	class UClass*                                      AnnouncerMessageClass;                            		// 0x0668 (0x0004) [0x0000000000000000]              
	class UClass*                                      VehicleResourceMessageClass;                      		// 0x066C (0x0004) [0x0000000000000000]              
	class UClass*                                      CTRMessageClass;                                  		// 0x0670 (0x0004) [0x0000000000000000]              
	float                                              PointsKillResourceCarrierBonus;                   		// 0x0674 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78840 ];

		return pClassPointer;
	};

	void ScoreKill ( class AController* Killer, class AController* Other );
	void VehicleUnloadedResources ( class AR_Vehicle* veh, int ResourcesUnloaded );
	void VehicleLoadedResources ( class AR_Vehicle* veh, int ResourcesUnloaded );
	class AR_PlayerReplicationInfo* GetVehicleDriverPRI ( class AR_Vehicle* veh );
	void ShowPathTo ( class APlayerController* P, int TeamNum );
	void ViewObjective ( class APlayerController* PC );
	void ScoreFlag ( class AController* Scorer, class AR_Object_CTR* theFlag );
	void UpdateScorersArray ( class APlayerReplicationInfo* PRI, float NewScore, TArray< struct FScorerInfo >* Scorers );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void RegisterResource ( class AR_Object_CTR* F, int TeamIndex );
	bool GetLocationFor ( class APawn* StatusPawn, int LocationSpeechOffset, class AActor** LocationObject, int* MessageIndex );
	int GetHandicapNeed ( class APawn* Other );
	void SetEndGameFocus ( class APlayerReplicationInfo* Winner );
	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList );
	void ObjectiveCaptured ( class AController* Scorer, class AR_Objective_ControlPoint* O, unsigned long bAnnounce );
};

UClass* AR_Game_CTR::pClassPointer = NULL;

// Class RavagedGame.R_PlayerReplicationInfo
// 0x001F (0x03A8 - 0x0389)
class AR_PlayerReplicationInfo : public AUTPlayerReplicationInfo
{
public:
	unsigned char                                      iClass1;                                          		// 0x038C (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      iClass2;                                          		// 0x038D (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      iClass3;                                          		// 0x038E (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      iClass4;                                          		// 0x038F (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      iClass5;                                          		// 0x0390 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      iClassNone;                                       		// 0x0391 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      iClass;                                           		// 0x0392 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      PrimaryWeaponIdx;                                 		// 0x0393 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      SecondaryWeaponIdx;                               		// 0x0394 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      MeleeWeaponIdx;                                   		// 0x0395 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      ThrowableWeaponIdx;                               		// 0x0396 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      ShoutCount;                                       		// 0x0397 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      HeldCTRClass;                                     		// 0x0398 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                CPCaptures;                                       		// 0x039C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                ResourceCaptures;                                 		// 0x03A0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                PingTooHighCounter;                               		// 0x03A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78878 ];

		return pClassPointer;
	};

	int GetKillStat ( struct FName StatName );
	int GetEventStat ( struct FName StatName );
	void IncrementKills ( unsigned long bEnemyKill );
	int IncrementEventStat ( struct FName NewStatName );
	void UpdateEventStatAchievements ( struct FName StatName );
	void SetFlag ( class AUTCarriedObject* NewFlag );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AR_PlayerReplicationInfo::pClassPointer = NULL;

// Class RavagedGame.R_Bot
// 0x0008 (0x05E8 - 0x05E0)
class AR_Bot : public AUTBot
{
public:
	class AR_PlayerController*                         PC;                                               		// 0x05E0 (0x0004) [0x0000000000000000]              
	struct FBotDetails                                 BotSelection;                                     		// 0x05E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78882 ];

		return pClassPointer;
	};

	void ServerSetCharacterClass ( class UClass* CharClass );
	void RandomSelectBot ( );
	unsigned char GetClass ( );
};

UClass* AR_Bot::pClassPointer = NULL;

// Class RavagedGame.R_Camera
// 0x0000 (0x04A8 - 0x04A8)
class AR_Camera : public ACamera
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78897 ];

		return pClassPointer;
	};

};

UClass* AR_Camera::pClassPointer = NULL;

// Class RavagedGame.R_CameraActor
// 0x0000 (0x0334 - 0x0334)
class AR_CameraActor : public ACameraActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78899 ];

		return pClassPointer;
	};

};

UClass* AR_CameraActor::pClassPointer = NULL;

// Class RavagedGame.R_CheatManager
// 0x0000 (0x0070 - 0x0070)
class UR_CheatManager : public UUTCheatManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78901 ];

		return pClassPointer;
	};

	void PatchDebugCameraController ( );
	void ToggleDebugCamera ( unsigned long bDrawDebugText );
};

UClass* UR_CheatManager::pClassPointer = NULL;

// Class RavagedGame.R_DebugCameraController
// 0x000C (0x05F4 - 0x05E8)
class AR_DebugCameraController : public ADebugCameraController
{
public:
	unsigned long                                      bInputToPawn : 1;                                 		// 0x05E8 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LastMouseSamples;                                 		// 0x05EC (0x0004) [0x0000000000000000]              
	float                                              LastMouseSamplingTotal;                           		// 0x05F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78908 ];

		return pClassPointer;
	};

	void OnActivate ( class APlayerController* PC );
	struct FImpactInfo DebugCamCalcWeaponFire ( struct FVector StartTrace, struct FVector EndTrace, struct FVector Extent, TArray< struct FImpactInfo >* ImpactList );
	bool PassThroughDamage ( class AActor* HitActor );
	void LogFullTrace ( );
	void PrimarySelect ( struct FVector HitLoc, struct FVector HitNormal, struct FTraceHitInfo HitInfo );
	void PlayerMove ( float DeltaTime );
	void OnDeactivate ( class APlayerController* PC );
	void PlayerTick ( float DT );
	void DisableDebugCamera ( );
	bool NativeInputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad );
	void eventClientHearSound ( class USoundCue* ASound, class AActor* SourceActor, struct FVector SourceLocation, unsigned long bStopWhenOwnerDestroyed, unsigned long bIsOccluded );
	void eventPostBeginPlay ( );
};

UClass* AR_DebugCameraController::pClassPointer = NULL;

// Class RavagedGame.R_CTRHUDMessage
// 0x0000 (0x0090 - 0x0090)
class UR_CTRHUDMessage : public UUTCTFHUDMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78918 ];

		return pClassPointer;
	};

};

UClass* UR_CTRHUDMessage::pClassPointer = NULL;

// Class RavagedGame.R_DataStore_GameSearch
// 0x0000 (0x00A8 - 0x00A8)
class UR_DataStore_GameSearch : public UUTDataStore_GameSearchDM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78920 ];

		return pClassPointer;
	};

};

UClass* UR_DataStore_GameSearch::pClassPointer = NULL;

// Class RavagedGame.R_GameSearchAll
// 0x0000 (0x0100 - 0x0100)
class UR_GameSearchAll : public UUTGameSearchCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78922 ];

		return pClassPointer;
	};

};

UClass* UR_GameSearchAll::pClassPointer = NULL;

// Class RavagedGame.R_GameSettingsCommon
// 0x0000 (0x00D8 - 0x00D8)
class UR_GameSettingsCommon : public UUTGameSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78923 ];

		return pClassPointer;
	};

};

UClass* UR_GameSettingsCommon::pClassPointer = NULL;

// Class RavagedGame.R_DataStore_GameSettings
// 0x0004 (0x0080 - 0x007C)
class UR_DataStore_GameSettings : public UUIDataStore_OnlineGameSettings
{
public:
	class UR_MapList*                                  MapList;                                          		// 0x007C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78924 ];

		return pClassPointer;
	};

	void InitMapList ( TArray< struct FString > Maps );
};

UClass* UR_DataStore_GameSettings::pClassPointer = NULL;

// Class RavagedGame.R_MapList
// 0x0014 (0x0050 - 0x003C)
class UR_MapList : public UObject
{
public:
	int                                                Round;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      SwitchTeams : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FString >                           Maps;                                             		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78926 ];

		return pClassPointer;
	};

	struct FString GetMapList ( unsigned long annotated );
	bool MoveMap ( int Position, unsigned long Up );
	bool RemoveMap ( int Position );
	bool AddMap ( struct FString Map );
	bool InsertMap ( struct FString Map, int Position );
	struct FString NextMap ( );
	bool IsMapIsValid ( struct FString Map );
	struct FString GetCurrentMap ( );
	void InitializeMapList ( TArray< struct FString > MapList );
	void CopyMapList ( class UR_MapList* Other );
};

UClass* UR_MapList::pClassPointer = NULL;

// Class RavagedGame.R_GameSettingsTH
// 0x0000 (0x00D8 - 0x00D8)
class UR_GameSettingsTH : public UR_GameSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78931 ];

		return pClassPointer;
	};

};

UClass* UR_GameSettingsTH::pClassPointer = NULL;

// Class RavagedGame.R_GameSettingsCTR
// 0x0000 (0x00D8 - 0x00D8)
class UR_GameSettingsCTR : public UR_GameSettingsCommon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78932 ];

		return pClassPointer;
	};

};

UClass* UR_GameSettingsCTR::pClassPointer = NULL;

// Class RavagedGame.R_DebugCameraHUD
// 0x0000 (0x0454 - 0x0454)
class AR_DebugCameraHUD : public ADebugCameraHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78937 ];

		return pClassPointer;
	};

	void DrawInsetText ( class UCanvas* canv, float X, float Y, struct FString MyText, struct FColor DrawColor );
	bool DisplayActorMaterials ( float X, float DY, class UMeshComponent* MeshComp, float* Y );
	void eventPostRender ( );
};

UClass* AR_DebugCameraHUD::pClassPointer = NULL;

// Class RavagedGame.R_PlayerInput
// 0x0017 (0x04C4 - 0x04AD)
class UR_PlayerInput : public UUTPlayerInput
{
public:
	unsigned long                                      bInvertAirVehicle : 1;                            		// 0x04B0 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      bHoldingSprint : 1;                               		// 0x04B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      bSprint;                                          		// 0x04B4 (0x0001) [0x0000000000000004]              ( CPF_Input )
	float                                              LastSprintTime;                                   		// 0x04B8 (0x0004) [0x0000000000000000]              
	class AR_Weapon*                                   PreviousWeapon;                                   		// 0x04BC (0x0004) [0x0000000000000000]              
	class AR_Vehicle*                                  rVeh;                                             		// 0x04C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78952 ];

		return pClassPointer;
	};

	void StopKnife ( );
	void StartKnife ( );
	void StopThrowWeapon ( );
	void StartThrowWeapon ( );
	void UnDuck ( );
	void Duck ( );
	void UnSprint ( );
	void Sprint ( );
	void TogglePerspective ( );
	void ClassMenu ( );
	void Taunt ( );
	void reload ( );
	void CheckMouseInverts ( );
};

UClass* UR_PlayerInput::pClassPointer = NULL;

// Class RavagedGame.R_DmgType
// 0x0018 (0x0144 - 0x012C)
class UR_DmgType : public UUTDamageType
{
public:
	class UClass*                                      BloodHitEffectClass;                              		// 0x012C (0x0004) [0x0000000000000000]              
	float                                              AirVehicleDamageScaling;                          		// 0x0130 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasKillAchievement : 1;                          		// 0x0134 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< float >                                    VehicleArmorScales;                               		// 0x0138 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79134 ];

		return pClassPointer;
	};

	void CheckKillAchievement ( class AUTPlayerReplicationInfo* KillerPRI, int KillCount, unsigned long bEnemyKill );
	int R_IncrementKills ( class AUTPlayerReplicationInfo* KillerPRI, unsigned long bEnemyKill );
	void R_ScoreKill ( class AUTPlayerReplicationInfo* KillerPRI, class AUTPlayerReplicationInfo* KilledPRI, class APawn* KilledPawn, unsigned long bEnemyKill );
	float VehicleDamageScalingFor ( class AVehicle* V );
};

UClass* UR_DmgType::pClassPointer = NULL;

// Class RavagedGame.R_Emit_BloodSpray
// 0x0000 (0x01D4 - 0x01D4)
class AR_Emit_BloodSpray : public AUTEmit_BloodSpray
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79161 ];

		return pClassPointer;
	};

};

UClass* AR_Emit_BloodSpray::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_HandGun
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_HandGun : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79164 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_HandGun::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_50cal
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_50cal : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79172 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_50cal::pClassPointer = NULL;

// Class RavagedGame.R_VehicleWeapon
// 0x00D8 (0x0744 - 0x066C)
class AR_VehicleWeapon : public AUTVehicleWeapon
{
public:
	float                                              AmmoRegenUnitsMult;                               		// 0x066C (0x0004) [0x0000000000000000]              
	unsigned long                                      bPawnCollisionProtection : 1;                     		// 0x0670 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNoAimTriangulation : 1;                          		// 0x0670 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bAutoReload : 1;                                  		// 0x0670 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bHasSecondaryWeapon : 1;                          		// 0x0670 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUseWindupSounds : 1;                             		// 0x0670 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bTriggerFiringAndWindDownFromFlashCount : 1;      		// 0x0670 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bWindupCanceled : 1;                              		// 0x0670 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bWindupInit : 1;                                  		// 0x0670 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      bUseInstaHitSplash : 1;                           		// 0x0670 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bPawnsAbsorbInstaHitSplash : 1;                   		// 0x0670 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bVehiclesAbsorbInstaHitSplash : 1;                		// 0x0670 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bDontSplashSelf : 1;                              		// 0x0670 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bDrawCrossHairInCode : 1;                         		// 0x0670 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      bDrawCrossHairInCodeShadow : 1;                   		// 0x0670 (0x0004) [0x0000000000000001] [0x00002000] ( CPF_Edit )
	unsigned long                                      bHideHitIndicatorOnZoom : 1;                      		// 0x0670 (0x0004) [0x0000000000000001] [0x00004000] ( CPF_Edit )
	unsigned long                                      bHitIndicatorOverride : 1;                        		// 0x0670 (0x0004) [0x0000000000002000] [0x00008000] ( CPF_Transient )
	unsigned long                                      bDrawWeaponLoadout : 1;                           		// 0x0670 (0x0004) [0x0000000000000000] [0x00010000] 
	TArray< unsigned char >                            MagStates;                                        		// 0x0674 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      MagSizes;                                         		// 0x0680 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      MagWarnThresholds;                                		// 0x068C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                MagCounts[ 0x2 ];                                 		// 0x0698 (0x0008) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	int                                                AmmoInMag2;                                       		// 0x06A0 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	TArray< float >                                    ReloadTimes;                                      		// 0x06A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AmmoCount2;                                       		// 0x06B0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	TArray< int >                                      MaxAmmos;                                         		// 0x06B4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USoundCue*                                   AmmoUpSound;                                      		// 0x06C0 (0x0004) [0x0000000000000000]              
	unsigned char                                      AmmoInc;                                          		// 0x06C4 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class UClass*                                      TracerClass[ 0x2 ];                               		// 0x06C8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                AmmoInMag;                                        		// 0x06D0 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	struct FName                                       WeaponReloadAnim;                                 		// 0x06D4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ArmsReloadAnim;                                   		// 0x06DC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponReloadSnd;                                  		// 0x06E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   WeaponOutOfAmmoSnd;                               		// 0x06E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FiringWindUpTime;                                 		// 0x06EC (0x0004) [0x0000000000000000]              
	float                                              FiringWindDownTime;                               		// 0x06F0 (0x0004) [0x0000000000000000]              
	TArray< float >                                    InstantHitSplashRadius;                           		// 0x06F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DrawnCrossHairDevScale;                           		// 0x0700 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DrawnCrossHairMin;                                		// 0x0704 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DrawnCrossHairLength;                             		// 0x0708 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   TexCrosshairSize;                                 		// 0x070C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              HitIndicatorFadeTime;                             		// 0x0714 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      HitIndicatorColor;                                		// 0x0718 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HitIndSize;                                       		// 0x071C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              HitIndicatorScale;                                		// 0x0720 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  HitIndicatorImage;                                		// 0x0724 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTextureCoordinates                         HitIndicatorCoordinates;                          		// 0x0728 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastHitEnemyBeepTime;                             		// 0x0738 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class USoundCue*                                   HitIndicatorBeep;                                 		// 0x073C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HitIndicatorBeepVolume;                           		// 0x0740 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79175 ];

		return pClassPointer;
	};

	void ShakeView ( );
	class AProjectile* ProjectileFire ( );
	bool RActor_HurtRadius ( float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController );
	void InstantHitSplashHurtRadius ( unsigned char FiringMode, class AActor* ImpactedActor, struct FVector HurtOrigin, struct FVector HitNormal, class AController* InstigatedByController );
	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	void InstantFire ( );
	void UT_ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	int GetMagCount2 ( );
	int GetMagCount ( );
	int GetAmmoCountMag ( );
	void StartZoom ( class AUTPlayerController* PC );
	void ServerSetZoom ( unsigned long bNowZoomed );
	void DrawWeaponCrosshair ( class AHUD* HUD );
	void DisplayMagDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void PlayWeaponAnimation ( struct FName Sequence, float fDesiredDuration, unsigned long bLoop, class USkeletalMeshComponent* SkelMesh );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void PlayFiringSound ( );
	void WindDownComplete ( );
	void WindUpComplete ( );
	void ServerStartWinddown ( );
	void ServerStopFireLooping ( );
	void ServerStartFireLooping ( );
	void ServerStartWindup ( );
	bool IsReloading ( unsigned char FireModeNum );
	bool IsMagazineLow ( unsigned char FireModeNum );
	bool IsMagazineEmpty ( unsigned char FireModeNum );
	void ReloadMag1 ( );
	void ReloadMag0 ( );
	int AddMagAmmo ( unsigned char FireModeNum, int Amount );
	void ConsumeAmmo ( unsigned char FireModeNum );
	void AddVehicleWeapAmmo ( int Amount );
	void PostBeginPlay ( );
	bool HasAnyAmmoForMag ( unsigned char FireModeNum );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	void ServerEndReload ( unsigned char FireModeNum );
	void EndReload ( unsigned char FireModeNum );
	void AbortReload ( );
	void WeaponIsReloaded ( );
	bool ShouldAutoReload ( unsigned char FireModeNum );
	bool MagHasAnyAmmo ( unsigned char FireModeNum );
	bool CanReload ( unsigned char FireModeNum );
	void CalcMagCount ( unsigned char FireModeNum );
	void ProcessReload ( unsigned char FireModeNum );
	void StopReload ( unsigned char FireModeNum );
	void EndMag1ReloadTime ( );
	void EndMag0ReloadTime ( );
	void ServerBeginReload ( unsigned char FireModeNum );
	void BeginReload ( unsigned char FireModeNum );
	void PackWeaponWindupState ( unsigned char SendWindupState );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AR_VehicleWeapon::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_50Cal
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_50Cal : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79174 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_50Cal::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_AK47
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_AK47 : public UR_DmgType_HandGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79178 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_AK47::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_AN94
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_AN94 : public UR_DmgType_HandGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79182 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_AN94::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Burning
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Burning : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79186 ];

		return pClassPointer;
	};

	float GetHitEffectDuration ( class APawn* P, float Damage );
	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UR_DmgType_Burning::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_AntiArmor
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_AntiArmor : public UR_DmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79204 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_AntiArmor::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_AssaultPrimary
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_AssaultPrimary : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79208 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_AssaultPrimary::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Autoshotgun
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Autoshotgun : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79212 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Autoshotgun::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Melee
// 0x0004 (0x0148 - 0x0144)
class UR_DmgType_Melee : public UR_DmgType
{
public:
	float                                              VehicleUnstickScaling;                            		// 0x0144 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79216 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Melee::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Axe
// 0x0000 (0x0148 - 0x0148)
class UR_DmgType_Axe : public UR_DmgType_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79221 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Axe::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Bat
// 0x0000 (0x0148 - 0x0148)
class UR_DmgType_Bat : public UR_DmgType_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79225 ];

		return pClassPointer;
	};

	void CheckKillAchievement ( class AUTPlayerReplicationInfo* KillerPRI, int KillCount, unsigned long bEnemyKill );
};

UClass* UR_DmgType_Bat::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Cleaver
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Cleaver : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79235 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Cleaver::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_CombatKnife
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_CombatKnife : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79239 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_CombatKnife::pClassPointer = NULL;

// Class RavagedGame.R_Weapon_QuickMelee
// 0x0024 (0x0824 - 0x0800)
class AR_Weapon_QuickMelee : public AR_Weapon
{
public:
	class UMaterialInstanceConstant*                   BloodMIC;                                         		// 0x0800 (0x0004) [0x0000000000000000]              
	TArray< float >                                    Ranges;                                           		// 0x0804 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    rangeMultiplier;                                  		// 0x0810 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              MaxForce;                                         		// 0x081C (0x0004) [0x0000000000000000]              
	class UCameraAnim*                                 ImpactKillCameraAnim;                             		// 0x0820 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79242 ];

		return pClassPointer;
	};

	void ProcessInstantHit ( unsigned char FiringMode, struct FImpactInfo Impact, int NumHits );
	void PlayImpactEffect ( unsigned char FiringMode, struct FImpactInfo Impact );
	float CalcAim ( class APawn* P, class APawn* Target );
	float GetAIRating ( );
	void SetSkin ( class UMaterial* NewMaterial );
};

UClass* AR_Weapon_QuickMelee::pClassPointer = NULL;

// Class RavagedGame.R_Weap_CombatKnife
// 0x0000 (0x0824 - 0x0824)
class AR_Weap_CombatKnife : public AR_Weapon_QuickMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79241 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_CombatKnife::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Crossbow
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Crossbow : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79245 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Crossbow::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_CrotchShot
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_CrotchShot : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79249 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UR_DmgType_CrotchShot::pClassPointer = NULL;

// Class RavagedGame.R_Message_Skillz
// 0x006C (0x00D0 - 0x0064)
class UR_Message_Skillz : public UUTLocalMessage
{
public:
	struct FString                                     RewardString[ 0x5 ];                              		// 0x0064 (0x003C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              BallBusterSounds[ 0x2 ];                          		// 0x00A0 (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              DoubleKillSounds[ 0x3 ];                          		// 0x00A8 (0x000C) [0x0000000000000000]              
	class USoundNodeWave*                              FirstKillSounds[ 0x2 ];                           		// 0x00B4 (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              HeadShotSounds[ 0x2 ];                            		// 0x00BC (0x0008) [0x0000000000000000]              
	class USoundNodeWave*                              MultiKillSounds[ 0x3 ];                           		// 0x00C4 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79261 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	bool AddAnnouncement ( class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
	int GetFontSize ( int Switch, class APlayerReplicationInfo* RelatedPRI1, class APlayerReplicationInfo* RelatedPRI2, class APlayerReplicationInfo* LocalPlayer );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UR_Message_Skillz::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Crowbar
// 0x0000 (0x0148 - 0x0148)
class UR_DmgType_Crowbar : public UR_DmgType_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79264 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Crowbar::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_G36
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_G36 : public UR_DmgType_HandGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79268 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_G36::pClassPointer = NULL;

// Class RavagedGame.R_Weap_G36C
// 0x0000 (0x084C - 0x084C)
class AR_Weap_G36C : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79270 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_G36C::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_GKnife
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_GKnife : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79273 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_GKnife::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Grenade
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Grenade : public UR_DmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79277 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Grenade::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Grenade_M19
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Grenade_M19 : public UR_DmgType_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79281 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Grenade_M19::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_M19
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_M19 : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79283 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_M19::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Grenade_M79
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Grenade_M79 : public UR_DmgType_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79286 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Grenade_M79::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Harpoon
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Harpoon : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79290 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Harpoon::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_HealVehicle
// 0x0000 (0x0064 - 0x0064)
class UR_DmgType_HealVehicle : public UDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79294 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_HealVehicle::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_HeavyAssault
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_HeavyAssault : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79296 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_HeavyAssault::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Rocket
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Rocket : public UR_DmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79300 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Rocket::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_HeliRocket
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_HeliRocket : public UR_DmgType_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79304 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_HeliRocket::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_RocketPod
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_RocketPod : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79306 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_RocketPod::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Stinger
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Stinger : public UR_DmgType_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79309 ];

		return pClassPointer;
	};

	float VehicleDamageScalingFor ( class AVehicle* V );
};

UClass* UR_DmgType_Stinger::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Air
// 0x0018 (0x0D30 - 0x0D18)
class AR_Vehicle_Air : public AR_Vehicle
{
public:
	unsigned long                                      bAutoLand : 1;                                    		// 0x0D18 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSmoothStrafeInput : 1;                           		// 0x0D18 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              PushForce;                                        		// 0x0D1C (0x0004) [0x0000000000000000]              
	float                                              LastStrafeInput;                                  		// 0x0D20 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              StrafeRampUpRate;                                 		// 0x0D24 (0x0004) [0x0000000000000000]              
	float                                              CurrentStrafeRamp;                                		// 0x0D28 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                EngineCutOutHealth;                               		// 0x0D2C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79313 ];

		return pClassPointer;
	};

	void eventPreBeginPlay ( );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void SetInputsAir ( float InForward, float InStrafe, int Mouse );
	float SmoothStrafeInput ( float InStrafe, float DT );
};

UClass* AR_Vehicle_Air::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_HeliStinger
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_HeliStinger : public UR_DmgType_Stinger
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79317 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_HeliStinger::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_HeliStinger
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_HeliStinger : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79319 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_HeliStinger::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_LAW
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_LAW : public UR_DmgType_AntiArmor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79322 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_LAW::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_M16
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_M16 : public UR_DmgType_HandGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79326 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_M16::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_M249
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_M249 : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79330 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_M249::pClassPointer = NULL;

// Class RavagedGame.R_DmgTypeThrowable
// 0x0000 (0x0144 - 0x0144)
class UR_DmgTypeThrowable : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79334 ];

		return pClassPointer;
	};

	void CheckKillAchievement ( class AUTPlayerReplicationInfo* KillerPRI, int KillCount, unsigned long bEnemyKill );
};

UClass* UR_DmgTypeThrowable::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_M26Grenade
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_M26Grenade : public UR_DmgTypeThrowable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79342 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_M26Grenade::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_M79Grenade
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_M79Grenade : public UR_DmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79346 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_M79Grenade::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Minigun
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Minigun : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79350 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Minigun::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_MiniGun
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_MiniGun : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79352 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_MiniGun::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Mp5
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Mp5 : public UR_DmgType_HandGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79355 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Mp5::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_OutOfCombat
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_OutOfCombat : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79359 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_OutOfCombat::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_P99
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_P99 : public UR_DmgType_HandGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79363 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_P99::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_RocketArtillery
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_RocketArtillery : public UR_DmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79367 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_RocketArtillery::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_RocketArtillery
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_RocketArtillery : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79369 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_RocketArtillery::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_RPG
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_RPG : public UR_DmgType_AntiArmor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79372 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_RPG::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_SawedOffShotgun
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_SawedOffShotgun : public UR_DmgType_HandGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79376 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_SawedOffShotgun::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Sledgehammer
// 0x0000 (0x0148 - 0x0148)
class UR_DmgType_Sledgehammer : public UR_DmgType_Melee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79380 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Sledgehammer::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_TempHeadShot
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_TempHeadShot : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79384 ];

		return pClassPointer;
	};

	void SpawnHitEffect ( class APawn* P, float Damage, struct FVector Momentum, struct FName BoneName, struct FVector HitLocation );
};

UClass* UR_DmgType_TempHeadShot::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_SniperHeadShot
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_SniperHeadShot : public UR_DmgType_TempHeadShot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79397 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_SniperHeadShot::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_SniperPrimary
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_SniperPrimary : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79401 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_SniperPrimary::pClassPointer = NULL;

// Class RavagedGame.R_Weap_SniperRifle
// 0x0000 (0x084C - 0x084C)
class AR_Weap_SniperRifle : public AR_Weapon_SemiAuto
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79403 ];

		return pClassPointer;
	};

	struct FVector GetEffectLocation ( );
};

UClass* AR_Weap_SniperRifle::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_SodaBomb
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_SodaBomb : public UR_DmgTypeThrowable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79406 ];

		return pClassPointer;
	};

	void CheckKillAchievement ( class AUTPlayerReplicationInfo* KillerPRI, int KillCount, unsigned long bEnemyKill );
};

UClass* UR_DmgType_SodaBomb::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_StrykerCannon
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_StrykerCannon : public UR_DmgType_Burning
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79414 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_StrykerCannon::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_StrykerCannon
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_StrykerCannon : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79416 ];

		return pClassPointer;
	};

	class AProjectile* ProjectileFire ( );
};

UClass* AR_VWeap_StrykerCannon::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_TennisBallBomb
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_TennisBallBomb : public UR_DmgTypeThrowable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79419 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_TennisBallBomb::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_UltralightHeliGun
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_UltralightHeliGun : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79423 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_UltralightHeliGun::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_UltralightHeliGuns
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_UltralightHeliGuns : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79425 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_UltralightHeliGuns::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_Uzi
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_Uzi : public UR_DmgType_HandGun
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79428 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_Uzi::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_VehicleCollision
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_VehicleCollision : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79432 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_VehicleCollision::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_VehicleVsVehicleCollision
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_VehicleVsVehicleCollision : public UR_DmgType_VehicleCollision
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79436 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_VehicleVsVehicleCollision::pClassPointer = NULL;

// Class RavagedGame.R_DmgType_VM249
// 0x0000 (0x0144 - 0x0144)
class UR_DmgType_VM249 : public UR_DmgType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79440 ];

		return pClassPointer;
	};

};

UClass* UR_DmgType_VM249::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_M249
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_M249 : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79442 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_M249::pClassPointer = NULL;

// Class RavagedGame.R_DroppedItemPickup
// 0x0008 (0x01FC - 0x01F4)
class AR_DroppedItemPickup : public AUTDroppedItemPickup
{
public:
	int                                                AmmoAmount;                                       		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UClass*                                      TargetWeapon;                                     		// 0x01F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79445 ];

		return pClassPointer;
	};

	void GiveTo ( class APawn* P );
	void eventSetPickupMesh ( class UPrimitiveComponent* NewPickupMesh );
	void eventPreBeginPlay ( );
};

UClass* AR_DroppedItemPickup::pClassPointer = NULL;

// Class RavagedGame.R_DroppedItemPickup_MagWeapon
// 0x0000 (0x01FC - 0x01FC)
class AR_DroppedItemPickup_MagWeapon : public AR_DroppedItemPickup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79462 ];

		return pClassPointer;
	};

};

UClass* AR_DroppedItemPickup_MagWeapon::pClassPointer = NULL;

// Class RavagedGame.R_DroppedWeaponPickup
// 0x0000 (0x01EC - 0x01EC)
class AR_DroppedWeaponPickup : public AUTDroppedPickup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79466 ];

		return pClassPointer;
	};

	void GiveTo ( class APawn* P );
};

UClass* AR_DroppedWeaponPickup::pClassPointer = NULL;

// Class RavagedGame.R_DumbBot
// 0x0000 (0x05E8 - 0x05E8)
class AR_DumbBot : public AR_Bot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79472 ];

		return pClassPointer;
	};

	void eventWhatToDoNext ( );
};

UClass* AR_DumbBot::pClassPointer = NULL;

// Class RavagedGame.R_ExplosionEffects
// 0x0058 (0x0220 - 0x01C8)
class AR_ExplosionEffects : public AActor
{
public:
	unsigned long                                      bFaceLocalPlayer : 1;                             		// 0x01C8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAttachedFlare : 1;                               		// 0x01C8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class ULensFlare*                                  MyLensFlare;                                      		// 0x01CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ULensFlareComponent*                         MyLensFlareComponent;                             		// 0x01D0 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              LensFlareDelay;                                   		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LensFlareLifeSpan;                                		// 0x01D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LensFlareTimeHasBeenAlive;                        		// 0x01DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                LensFlareBrightSourceColor;                       		// 0x01E0 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                LensFlareDarkSourceColor;                         		// 0x01F0 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              LensFlareBrightSourceColorAttackTime;             		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LensFlareDarkSourceColorDecayTime;                		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              curCol;                                           		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              InnerExplosionShakeRadius;                        		// 0x020C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OuterExplosionShakeRadius;                        		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShakeSpeed;                                       		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShakeScale;                                       		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCameraAnim*                                 ExplosionShake;                                   		// 0x021C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79478 ];

		return pClassPointer;
	};

	void DoShake ( );
	void eventLensFlareTimer ( );
	void eventTick ( float DT );
	void eventPostBeginPlay ( );
};

UClass* AR_ExplosionEffects::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo
// 0x0088 (0x0224 - 0x019C)
class UR_FamilyInfo : public UUTFamilyInfo
{
public:
	int                                                ClassContentID;                                   		// 0x019C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      ClassIndex;                                       		// 0x01A0 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     DisplayText;                                      		// 0x01A4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                FamHealth;                                        		// 0x01B0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                FamHealthMax;                                     		// 0x01B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                FamHealthGood;                                    		// 0x01B8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FamHealthRegenRateFast;                           		// 0x01BC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FamHealthRegenRateSlow;                           		// 0x01C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FamWaterSpeed;                                    		// 0x01C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FamAirSpeed;                                      		// 0x01C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FamJumpZ;                                         		// 0x01CC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                FamMaxMultiJump;                                  		// 0x01D0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FamGroundSpeed;                                   		// 0x01D4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FamGroundSpeedSprint;                             		// 0x01D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FamGroundSpeedMelee;                              		// 0x01DC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              FamGroundSpeedSprintMelee;                        		// 0x01E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HealthBonusScalar;                                		// 0x01E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HealthMaxBonusScalar;                             		// 0x01E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              GroundSpeedBonusScalar;                           		// 0x01EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              WaterSpeedBonusScalar;                            		// 0x01F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AirSpeedBonusScalar;                              		// 0x01F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              JumpZBonusScalar;                                 		// 0x01F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UClass*                                      PrimaryWeaponClass;                               		// 0x01FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UClass*                                      SecondaryWeaponClass;                             		// 0x0200 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UClass*                                      MeleeWeaponClass;                                 		// 0x0204 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UClass*                                      ThrowableWeaponClass;                             		// 0x0208 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< class UClass* >                            ScavengerFamilyClasses;                           		// 0x020C (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class UClass* >                            ResistanceFamilyClasses;                          		// 0x0218 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79508 ];

		return pClassPointer;
	};

	void GetTeamMaterials ( int TeamNum, class UMaterialInterface** TeamMaterialHead, class UMaterialInterface** TeamMaterialBody );
	void SetPawnInventory ( class AR_Pawn* rPwn, TArray< struct FInventoryModifier > inventMods );
	void SetPawnAttributes ( class AR_Pawn* rPwn );
	struct FString GetFamilyClassName ( unsigned char teamIdx, unsigned char classIdx );
	class UTexture* GetFamilyClassPortrait ( unsigned char teamIdx, unsigned char classIdx );
	class UClass* GetFamilyClass ( unsigned char teamIdx, unsigned char classIdx );
};

UClass* UR_FamilyInfo::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Scavengers
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Scavengers : public UR_FamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79511 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Scavengers::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Resistance
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Resistance : public UR_FamilyInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79514 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Resistance::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Bandit
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Bandit : public UR_FamilyInfo_Scavengers
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79579 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Bandit::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Warrior
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Warrior : public UR_FamilyInfo_Scavengers
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79580 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Warrior::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Bodyguard
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Bodyguard : public UR_FamilyInfo_Scavengers
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79581 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Bodyguard::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Assassin
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Assassin : public UR_FamilyInfo_Scavengers
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79582 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Assassin::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Grunt
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Grunt : public UR_FamilyInfo_Scavengers
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79583 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Grunt::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Recon
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Recon : public UR_FamilyInfo_Resistance
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79584 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Recon::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Soldier
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Soldier : public UR_FamilyInfo_Resistance
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79585 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Soldier::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_WeaponsSpecialist
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_WeaponsSpecialist : public UR_FamilyInfo_Resistance
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79586 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_WeaponsSpecialist::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Sniper
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Sniper : public UR_FamilyInfo_Resistance
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79587 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Sniper::pClassPointer = NULL;

// Class RavagedGame.R_FamilyInfo_Support
// 0x0000 (0x0224 - 0x0224)
class UR_FamilyInfo_Support : public UR_FamilyInfo_Resistance
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79588 ];

		return pClassPointer;
	};

};

UClass* UR_FamilyInfo_Support::pClassPointer = NULL;

// Class RavagedGame.R_PawnSoundGroup
// 0x0030 (0x00D8 - 0x00A8)
class UR_PawnSoundGroup : public UUTPawnSoundGroup
{
public:
	TArray< class USoundCue* >                         AssShotSounds;                                    		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         CrotchShotSounds;                                 		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         TauntSounds;                                      		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         CommunicationSounds;                              		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79589 ];

		return pClassPointer;
	};

	void PlayTauntSound ( class APawn* P );
	void PlayCrotchShotSound ( class APawn* P );
	void PlayAssShotSound ( class APawn* P );
	class USoundCue* GetCommunicationSound ( int ComIdx );
};

UClass* UR_PawnSoundGroup::pClassPointer = NULL;

// Class RavagedGame.R_Voice
// 0x0000 (0x00E4 - 0x00E4)
class UR_Voice : public UUTVoice
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79590 ];

		return pClassPointer;
	};

	bool SendLocationUpdate ( class AController* Sender, class APlayerReplicationInfo* Recipient, struct FName MessageType, class AUTGame* G, class APawn* StatusPawn, unsigned long bDontSendMidfield );
};

UClass* UR_Voice::pClassPointer = NULL;

// Class RavagedGame.R_Gib_Human
// 0x000C (0x0240 - 0x0234)
class AR_Gib_Human : public AUTGib
{
public:
	float                                              BounceAmount;                                     		// 0x0234 (0x0004) [0x0000000000000000]              
	struct FName                                       CustomGibSocketName;                              		// 0x0238 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79592 ];

		return pClassPointer;
	};

	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void DoCustomGibEffects ( );
};

UClass* AR_Gib_Human::pClassPointer = NULL;

// Class RavagedGame.R_Gib_Hand
// 0x0000 (0x0240 - 0x0240)
class AR_Gib_Hand : public AR_Gib_Human
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79591 ];

		return pClassPointer;
	};

};

UClass* AR_Gib_Hand::pClassPointer = NULL;

// Class RavagedGame.R_Gib_Arm
// 0x0000 (0x0240 - 0x0240)
class AR_Gib_Arm : public AR_Gib_Human
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79593 ];

		return pClassPointer;
	};

};

UClass* AR_Gib_Arm::pClassPointer = NULL;

// Class RavagedGame.R_Gib_Bloody
// 0x0000 (0x0240 - 0x0240)
class AR_Gib_Bloody : public AR_Gib_Human
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79594 ];

		return pClassPointer;
	};

};

UClass* AR_Gib_Bloody::pClassPointer = NULL;

// Class RavagedGame.R_Gib_Chest
// 0x0000 (0x0240 - 0x0240)
class AR_Gib_Chest : public AR_Gib_Human
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79595 ];

		return pClassPointer;
	};

};

UClass* AR_Gib_Chest::pClassPointer = NULL;

// Class RavagedGame.R_Gib_Ribs
// 0x0000 (0x0240 - 0x0240)
class AR_Gib_Ribs : public AR_Gib_Human
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79596 ];

		return pClassPointer;
	};

};

UClass* AR_Gib_Ribs::pClassPointer = NULL;

// Class RavagedGame.R_PawnSoundGroup_Female
// 0x0000 (0x00D8 - 0x00D8)
class UR_PawnSoundGroup_Female : public UR_PawnSoundGroup
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79612 ];

		return pClassPointer;
	};

};

UClass* UR_PawnSoundGroup_Female::pClassPointer = NULL;

// Class RavagedGame.R_PlayerStart
// 0x0008 (0x02C8 - 0x02C0)
class AR_PlayerStart : public AUTTeamPlayerStart
{
public:
	int                                                RatingModifier;                                   		// 0x02C0 (0x0004) [0x0000000000000000]              
	class AR_Objective_ControlPoint*                   MyObjective;                                      		// 0x02C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79694 ];

		return pClassPointer;
	};

	void SetObjective ( class AR_Objective_ControlPoint* O );
};

UClass* AR_PlayerStart::pClassPointer = NULL;

// Class RavagedGame.R_GRI
// 0x0020 (0x0288 - 0x0268)
class AR_GRI : public AUTGameReplicationInfo
{
public:
	TArray< class AR_Thrust_ControlPoint* >            AllControlPoints;                                 		// 0x0268 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                ScavangerCPCount;                                 		// 0x0274 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ResistanceCPCount;                                		// 0x0278 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bCPsInitialized : 1;                              		// 0x027C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bSpawnsChanged : 1;                               		// 0x027C (0x0004) [0x0000000000002020] [0x00000002] ( CPF_Net | CPF_Transient )
	unsigned long                                      bFriendlyFireOn : 1;                              		// 0x027C (0x0004) [0x0000000000000020] [0x00000004] ( CPF_Net )
	unsigned long                                      bAllowPerspectiveCycling : 1;                     		// 0x027C (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      bAllowSpectating : 1;                             		// 0x027C (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      bLockSpectatorsToTeammates : 1;                   		// 0x027C (0x0004) [0x0000000000000020] [0x00000020] ( CPF_Net )
	unsigned char                                      CPUpdate;                                         		// 0x0280 (0x0001) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                LastSelectedViewIdx;                              		// 0x0284 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79698 ];

		return pClassPointer;
	};

	void VehicleSpawnPointStatusUpdate ( class AR_Vehicle* veh );
	void GetVehicleSpawnPoints ( int Team, TArray< class AR_Vehicle* >* vehSpawns );
	void GetControlPointSpawnPoints ( int Team, TArray< class AR_Thrust_ControlPoint* >* allSpawns );
	void Timer ( );
	bool FindNextAvailableSpawn ( int curTeam, class AR_Thrust_ControlPoint** Obj );
	class AR_Thrust_ControlPoint* GetDefaultSpawn ( int curTeam );
	void CountTeamControlPoints ( );
	bool ControlPointTaken ( class AR_Thrust_ControlPoint* cp );
	bool CPsInitCheck ( );
	void eventReplicatedEvent ( struct FName VarName );
	class AR_Thrust_ControlPoint* GetTeamMainBase ( unsigned char teamIdx );
};

UClass* AR_GRI::pClassPointer = NULL;

// Class RavagedGame.R_VehicleFactory
// 0x0008 (0x02EC - 0x02E4)
class AR_VehicleFactory : public AUTVehicleFactory
{
public:
	unsigned long                                      bOverrideVehicleSpawnTime : 1;                    		// 0x02E4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              RespawnTimeOverride;                              		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79709 ];

		return pClassPointer;
	};

	bool GameIsReady ( );
	void PostBeginPlay ( );
};

UClass* AR_VehicleFactory::pClassPointer = NULL;

// Class RavagedGame.R_Objective_VehicleFactory
// 0x0008 (0x02F4 - 0x02EC)
class AR_Objective_VehicleFactory : public AR_VehicleFactory
{
public:
	class UClass*                                      VehicleClass_Resistance;                          		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      VehicleClass_Scavengers;                          		// 0x02F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79708 ];

		return pClassPointer;
	};

	void ChangeTeam ( unsigned char T );
};

UClass* AR_Objective_VehicleFactory::pClassPointer = NULL;

// Class RavagedGame.R_Thrust_ControlPoint
// 0x001C (0x0538 - 0x051C)
class AR_Thrust_ControlPoint : public AR_Objective_ControlPoint
{
public:
	int                                                ThrustOrder;                                      		// 0x051C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AR_Thrust_ControlPoint*                      NextParallelControlPoint;                         		// 0x0520 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsReady : 1;                                     		// 0x0524 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultSpawnPoint : 1;                           		// 0x0524 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              DistanceFromViewer;                               		// 0x0528 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AVolume*                                     MyReclaimVolume;                                  		// 0x052C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReclaimRadius;                                    		// 0x0530 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SpawnCampRadius;                                  		// 0x0534 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79829 ];

		return pClassPointer;
	};

	bool InObjectiveReclaimArea ( class APawn* P );
	void PostBeginPlay ( );
};

UClass* AR_Thrust_ControlPoint::pClassPointer = NULL;

// Class RavagedGame.R_TeamInfo
// 0x0000 (0x0254 - 0x0254)
class AR_TeamInfo : public AUTTeamInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79876 ];

		return pClassPointer;
	};

	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AR_TeamInfo::pClassPointer = NULL;

// Class RavagedGame.R_Message_Spawn
// 0x0020 (0x0084 - 0x0064)
class UR_Message_Spawn : public UUTLocalMessage
{
public:
	struct FString                                     MessageString[ 0x2 ];                             		// 0x0064 (0x0018) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              MessageSounds[ 0x2 ];                             		// 0x007C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79886 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UR_Message_Spawn::pClassPointer = NULL;

// Class RavagedGame.R_Message_TeamGame
// 0x0000 (0x00A4 - 0x00A4)
class UR_Message_TeamGame : public UUTTeamGameMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79949 ];

		return pClassPointer;
	};

};

UClass* UR_Message_TeamGame::pClassPointer = NULL;

// Class RavagedGame.R_Message_Thrust
// 0x0054 (0x00B8 - 0x0064)
class UR_Message_Thrust : public UUTLocalMessage
{
public:
	struct FString                                     PlayerCapturedObjective;                          		// 0x0064 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              ObjectiveCapturedSound[ 0x12 ];                   		// 0x0070 (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80019 ];

		return pClassPointer;
	};

	bool AddAnnouncement ( class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UR_Message_Thrust::pClassPointer = NULL;

// Class RavagedGame.R_sKillzComboType
// 0x0008 (0x0044 - 0x003C)
class UR_sKillzComboType : public UObject
{
public:
	int                                                PointsBonus;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                MessageIdx;                                       		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80066 ];

		return pClassPointer;
	};

};

UClass* UR_sKillzComboType::pClassPointer = NULL;

// Class RavagedGame.R_SpecPlayerController
// 0x0018 (0x0A8C - 0x0A74)
class AR_SpecPlayerController : public AR_PlayerController
{
public:
	unsigned long                                      b1PView : 1;                                      		// 0x0A74 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPlayerIsBehindView : 1;                          		// 0x0A74 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSpecFarBehindView : 1;                           		// 0x0A74 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bViewControlPoints : 1;                           		// 0x0A74 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bShowHelp : 1;                                    		// 0x0A74 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              SpecFarBehindDist;                                		// 0x0A78 (0x0004) [0x0000000000000000]              
	float                                              SpectatorCameraSpeedMax;                          		// 0x0A7C (0x0004) [0x0000000000000000]              
	float                                              SpectatorSprintCameraSpeed;                       		// 0x0A80 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                CurrentCPIndex;                                   		// 0x0A84 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AR_Objective_ControlPoint*                   CurrentCP;                                        		// 0x0A88 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80195 ];

		return pClassPointer;
	};

	void ToggleShowHelp ( );
	void DrawHUD ( class AHUD* H );
	void ServerUpdateCamera ( struct FVector CamLoc, int CamPitchAndYaw );
	void eventPostBeginPlay ( );
	void ServerJoinGame ( );
	void JoinGame ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation );
	void ProcessMove ( float DeltaTime, struct FVector newAccel, unsigned char DoubleClickMove, struct FRotator DeltaRot );
	void ClientUpdatePosition ( );
	void eventPlayerTick ( float DeltaTime );
	void SetBehindView ( unsigned long bNewBehindView );
	void CyclePerspective ( );
	void eventClientSetViewTarget ( class AActor* A, struct FViewTargetTransitionParams TransitionParams );
	void FollowNextPlayer ( );
	void FollowPreviousPlayer ( );
	void NextPlayerFollowFarViewDist ( float Amount );
	void NextCamSpeed ( );
	void UnSprintPressed ( );
	void SprintPressed ( );
	void SelectNextCP ( int Dir );
	void ToggleViewCPs ( );
};

UClass* AR_SpecPlayerController::pClassPointer = NULL;

// Class RavagedGame.R_LeaderboardDataWrite
// 0x0000 (0x0088 - 0x0088)
class UR_LeaderboardDataWrite : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80230 ];

		return pClassPointer;
	};

};

UClass* UR_LeaderboardDataWrite::pClassPointer = NULL;

// Class RavagedGame.R_KillAssistMessage
// 0x0018 (0x007C - 0x0064)
class UR_KillAssistMessage : public UUTWeaponKillMessage
{
public:
	struct FString                                     YouKillAssisted;                                  		// 0x0064 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     YouKillAssistedTrailer;                           		// 0x0070 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80297 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UR_KillAssistMessage::pClassPointer = NULL;

// Class RavagedGame.R_Weap_Spas12
// 0x0000 (0x084C - 0x084C)
class AR_Weap_Spas12 : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80386 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_Spas12::pClassPointer = NULL;

// Class RavagedGame.R_Message_TeamScore
// 0x0018 (0x007C - 0x0064)
class UR_Message_TeamScore : public UUTLocalMessage
{
public:
	class USoundNodeWave*                              TeamScoreSounds[ 0x6 ];                           		// 0x0064 (0x0018) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80387 ];

		return pClassPointer;
	};

	struct FColor GetColor ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
};

UClass* UR_Message_TeamScore::pClassPointer = NULL;

// Class RavagedGame.R_Message_Victory
// 0x0000 (0x007C - 0x007C)
class UR_Message_Victory : public UUTVictoryMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80388 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
};

UClass* UR_Message_Victory::pClassPointer = NULL;

// Class RavagedGame.R_Message_Death
// 0x0000 (0x0080 - 0x0080)
class UR_Message_Death : public UUTDeathMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80389 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UR_Message_Death::pClassPointer = NULL;

// Class RavagedGame.R_LeaderboardScoreWrite
// 0x0000 (0x0088 - 0x0088)
class UR_LeaderboardScoreWrite : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80390 ];

		return pClassPointer;
	};

};

UClass* UR_LeaderboardScoreWrite::pClassPointer = NULL;

// Class RavagedGame.R_GRI_CTR
// 0x0034 (0x02BC - 0x0288)
class AR_GRI_CTR : public AR_GRI
{
public:
	class AR_Thrust_ControlPoint*                      ClosestToScavengerFlag;                           		// 0x0288 (0x0004) [0x0000000000000000]              
	class AR_Thrust_ControlPoint*                      ClosestToResistanceFlag;                          		// 0x028C (0x0004) [0x0000000000000000]              
	TArray< class AR_Base_CTR* >                       CTRBases;                                         		// 0x0290 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AR_Object_CTR* >                     CTRResources;                                     		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bGotCTRBases : 1;                                 		// 0x02A8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bGotResouces : 1;                                 		// 0x02A8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bVehicleResourcesChanged : 1;                     		// 0x02A8 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned char                                      VehicleResourcesUpdate;                           		// 0x02AC (0x0001) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	TArray< class AR_Vehicle* >                        ResourcedVehicles;                                		// 0x02B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80406 ];

		return pClassPointer;
	};

	void VehicleResourcesUpdated ( class AR_Vehicle* veh );
	bool CollectControlPoints ( );
	bool CPsInitCheck ( );
	bool GetCTRBases ( );
	void GetResourcedVehicles ( );
	void RegisterResource ( class AR_Object_CTR* rsrc );
	void PostBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AR_GRI_CTR::pClassPointer = NULL;

// Class RavagedGame.R_MapInfo
// 0x001C (0x013C - 0x0120)
class UR_MapInfo : public UUTMapInfo
{
public:
	unsigned long                                      bCalcFromTerrain : 1;                             		// 0x0120 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCalcFromExtentVolume : 1;                        		// 0x0120 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class ATerrain*                                    MainTerrain;                                      		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MainTerrainExtentInset;                           		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   OffEdgeTexCoordsTopLeft;                          		// 0x012C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   OffEdgeTexCoordsBottomRight;                      		// 0x0134 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80440 ];

		return pClassPointer;
	};

	void VerifyMapExtent ( );
};

UClass* UR_MapInfo::pClassPointer = NULL;

// Class RavagedGame.R_MapInfoCTR
// 0x0008 (0x0144 - 0x013C)
class UR_MapInfoCTR : public UR_MapInfo
{
public:
	int                                                TeamPointsPerVehicleResource;                     		// 0x013C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                GoalScoreMult;                                    		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80439 ];

		return pClassPointer;
	};

};

UClass* UR_MapInfoCTR::pClassPointer = NULL;

// Class RavagedGame.R_Message_CTR
// 0x009C (0x0100 - 0x0064)
class UR_Message_CTR : public UUTLocalMessage
{
public:
	class USoundNodeWave*                              PlayerStoleResourceSound[ 0x6 ];                  		// 0x0064 (0x0018) [0x0000000000000000]              
	class USoundNodeWave*                              PlayerCapturedResourceSound[ 0x6 ];               		// 0x007C (0x0018) [0x0000000000000000]              
	class USoundNodeWave*                              PlayerDroppedResourceSound[ 0x6 ];                		// 0x0094 (0x0018) [0x0000000000000000]              
	struct FString                                     ForTheScavengers;                                 		// 0x00AC (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ForTheResistance;                                 		// 0x00B8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     StoleResource;                                    		// 0x00C4 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     CapturedResource;                                 		// 0x00D0 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DroppedResource;                                  		// 0x00DC (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     ReturnedResource;                                 		// 0x00E8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     AutoReturnedResource;                             		// 0x00F4 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80509 ];

		return pClassPointer;
	};

	bool AddAnnouncement ( class AUTAnnouncer* Announcer, int MessageIndex, class APlayerReplicationInfo* PRI, class UObject* OptionalObject );
	bool ShouldRemoveResourceAnnouncement ( int MyMessageIndex, class UClass* NewAnnouncementClass, int NewMessageIndex );
	bool ShouldBeRemoved ( class AUTQueuedAnnouncement* MyAnnouncement, class UClass* NewAnnouncementClass, int NewMessageIndex );
	unsigned char AnnouncementLevel ( unsigned char MessageIndex );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UR_Message_CTR::pClassPointer = NULL;

// Class RavagedGame.R_Message_VehicleCTR
// 0x0018 (0x0118 - 0x0100)
class UR_Message_VehicleCTR : public UR_Message_CTR
{
public:
	struct FString                                     LoadedResources;                                  		// 0x0100 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     UnloadedResources;                                		// 0x010C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80510 ];

		return pClassPointer;
	};

	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
};

UClass* UR_Message_VehicleCTR::pClassPointer = NULL;

// Class RavagedGame.R_TeamAI
// 0x0000 (0x0288 - 0x0288)
class AR_TeamAI : public AUTTeamAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80512 ];

		return pClassPointer;
	};

};

UClass* AR_TeamAI::pClassPointer = NULL;

// Class RavagedGame.R_TeamAI_CTR
// 0x000C (0x0294 - 0x0288)
class AR_TeamAI_CTR : public AR_TeamAI
{
public:
	class AR_Object_CTR*                               FriendlyFlag;                                     		// 0x0288 (0x0004) [0x0000000000000000]              
	class AR_Object_CTR*                               EnemyFlag;                                        		// 0x028C (0x0004) [0x0000000000000000]              
	float                                              LastGotFlag;                                      		// 0x0290 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80511 ];

		return pClassPointer;
	};

	class AUTGameObjective* GetPriorityFreelanceObjectiveFor ( class AUTSquadAI* InFreelanceSquad );
};

UClass* AR_TeamAI_CTR::pClassPointer = NULL;

// Class RavagedGame.R_HUD_CTR
// 0x0008 (0x077C - 0x0774)
class AR_HUD_CTR : public AR_HUD
{
public:
	float                                              ResourceFlashScale;                               		// 0x0774 (0x0004) [0x0000000000000000]              
	float                                              ResourceVehicleFlashScale;                        		// 0x0778 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80513 ];

		return pClassPointer;
	};

	void DrawHUD ( );
	void DrawResourcedVehicles ( int teamIdx );
	void DrawControlPoints ( int teamIdx );
	bool GRIisReady ( );
};

UClass* AR_HUD_CTR::pClassPointer = NULL;

// Class RavagedGame.R_Game_Thrust
// 0x0014 (0x067C - 0x0668)
class AR_Game_Thrust : public AR_Game
{
public:
	class AR_Thrust_ControlPoint*                      BaseToReclaim;                                    		// 0x0668 (0x0004) [0x0000000000000000]              
	class UR_ThrustMapInfo*                            MyThrustMapInfo;                                  		// 0x066C (0x0004) [0x0000000000000000]              
	unsigned char                                      ReclaimTimerCount;                                		// 0x0670 (0x0001) [0x0000000000000000]              
	unsigned long                                      debugEndReclaimPlayers : 1;                       		// 0x0674 (0x0004) [0x0000000000000000] [0x00000001] 
	class AUTPlayerReplicationInfo*                    PotentialWinnerPRI;                               		// 0x0678 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80514 ];

		return pClassPointer;
	};

	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	bool CheckEndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	float RatePlayerStart ( class APlayerStart* P, unsigned char Team, class AController* Player );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	void OnDestroy ( class USeqAct_Destroy* Action );
	void MatchStarting ( );
	void eventShutDown ( );
	void eventReset ( );
	void ReclaimTimeEnded ( );
	int ReclaimBaseTimer ( );
	void BaseWasTaken ( );
	void CalcTeamScores ( );
	void ObjectiveCaptured ( class AController* Scorer, class AR_Objective_ControlPoint* O, unsigned long bAnnounce );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	void eventGetSeamlessTravelActorList ( unsigned long bToEntry, TArray< class AActor* >* ActorList );
};

UClass* AR_Game_Thrust::pClassPointer = NULL;

// Class RavagedGame.R_ThrustMapInfo
// 0x0010 (0x014C - 0x013C)
class UR_ThrustMapInfo : public UR_MapInfo
{
public:
	unsigned long                                      bInstantDeath : 1;                                		// 0x013C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      RecoverBaseTimeLimit;                             		// 0x0140 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InBaseClockBehaviour;                             		// 0x0141 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                CapturedAllTeamPoints[ 0x2 ];                     		// 0x0144 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80519 ];

		return pClassPointer;
	};

};

UClass* UR_ThrustMapInfo::pClassPointer = NULL;

// Class RavagedGame.R_GRI_Thrust
// 0x0028 (0x02B0 - 0x0288)
class AR_GRI_Thrust : public AR_GRI
{
public:
	TArray< class AR_Thrust_ControlPoint* >            ThrustControlPoints;                              		// 0x0288 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      ReclaimCounter;                                   		// 0x0294 (0x0001) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class AR_Thrust_ControlPoint*                      ScavengerTarget;                                  		// 0x0298 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class AR_Thrust_ControlPoint*                      ResistanceTarget;                                 		// 0x029C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned long                                      bBaseAlert : 1;                                   		// 0x02A0 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	struct FScriptDelegate                             __ThrustOrderSort__Delegate;                      		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80525 ];

		return pClassPointer;
	};

	class AR_Thrust_ControlPoint* GetDefaultSpawn ( int curTeam );
	bool CPsInitCheck ( );
	bool VerifyThrustSetup ( );
	int ThrustOrderSort ( class AR_Thrust_ControlPoint* A, class AR_Thrust_ControlPoint* B );
	bool CollectControlPoints ( );
	bool UpdateControlPointPaths ( );
	bool OwnAllOnThrustOrder ( class AR_Thrust_ControlPoint* cp, unsigned char TeamNum );
	bool CanTakeAnyOnThrustOrder ( class AR_Thrust_ControlPoint* cp, unsigned char OtherTeam );
	bool ControlPointTaken ( class AR_Thrust_ControlPoint* cp );
	bool IsControlPointInChain ( class AR_Thrust_ControlPoint* cpChain, class AR_Thrust_ControlPoint* cpToFind );
	void ClientReclaimBaseTimer ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* AR_GRI_Thrust::pClassPointer = NULL;

// Class RavagedGame.R_HUD_Thrust
// 0x0008 (0x077C - 0x0774)
class AR_HUD_Thrust : public AR_HUD
{
public:
	unsigned long                                      bBaseAlert : 1;                                   		// 0x0774 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              BaseAlertFlashScale;                              		// 0x0778 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80608 ];

		return pClassPointer;
	};

	void DrawHUD ( );
	void DrawControlPoints ( int teamIdx );
	bool GRIisReady ( );
};

UClass* AR_HUD_Thrust::pClassPointer = NULL;

// Class RavagedGame.R_GFxChat
// 0x00B0 (0x0218 - 0x0168)
class UR_GFxChat : public UGFxMoviePlayer
{
public:
	class AWorldInfo*                                  ThisWorld;                                        		// 0x0168 (0x0004) [0x0000000000000000]              
	unsigned long                                      bChatting : 1;                                    		// 0x016C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitializeChat : 1;                              		// 0x016C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bChatDone : 1;                                    		// 0x016C (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     LSay;                                             		// 0x0170 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LTeamSay;                                         		// 0x017C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lWith;                                            		// 0x0188 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lKilled;                                          		// 0x0194 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lTeamKilled;                                      		// 0x01A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      ActiveChatType;                                   		// 0x01AC (0x0001) [0x0000000000000000]              
	class UGFxObject*                                  LogMC;                                            		// 0x01B0 (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxChat_FMessageRow >            Messages;                                         		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UR_GFxChat_FMessageRow >            FreeMessages;                                     		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              ChatInput;                                        		// 0x01CC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ChatInputBackgroundMC;                            		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AlphaBuildMC;                                     		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LogoMC;                                           		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RavLogoMC;                                        		// 0x01DC (0x0004) [0x0000000000000000]              
	float                                              MessageHeight;                                    		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              DeathMessageHeight;                               		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                NumMessages;                                      		// 0x01E8 (0x0004) [0x0000000000000000]              
	int                                                MaxMessages;                                      		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                MaxDeathMessages;                                 		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RootMC;                                           		// 0x01F4 (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxChat_FMessageRow >            DeathMessages;                                    		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UR_GFxChat_FMessageRow >            FreeDeathMessages;                                		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NumDeathMessages;                                 		// 0x0210 (0x0004) [0x0000000000000000]              
	class AUTGameReplicationInfo*                      GRI;                                              		// 0x0214 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80613 ];

		return pClassPointer;
	};

	void Spawn ( );
	void SendChatMessage ( struct FString ChatMessageFromHud );
	void ToggleChatting ( unsigned long bChat );
	void BeginChat ( );
	void InitializeChat ( unsigned char ChatType, unsigned long SpawnMenuOpen );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void AddDeathMessage ( class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Killed, class UClass* Dmg );
	void AddKillCrawlMessage ( struct FString Type, struct FString msg );
	void AddMessage ( struct FString Type, struct FString msg );
	void RemoveMessage ( );
	struct FString FormatTime ( int Seconds );
	void Init ( class ULocalPlayer* Player );
	class UGFxObject* InitDeathMessageRow ( );
	class UGFxObject* InitMessageRow ( );
	class UGFxObject* CreateMessageRow ( struct FString Type );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UR_GFxChat::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd
// 0x008C (0x01F4 - 0x0168)
class UR_GFxFrontEnd : public UGFxMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0168 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsPauseMenu : 1;                                 		// 0x016C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitialized : 1;                                 		// 0x016C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCaptureForBind : 1;                              		// 0x016C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTextBoxActive : 1;                               		// 0x016C (0x0004) [0x0000000000000000] [0x00000008] 
	class UGFxObject*                                  TopManagerMC;                                     		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VersionNumberMC;                                  		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ManagerMC;                                        		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BackgroundMC;                                     		// 0x017C (0x0004) [0x0000000000000000]              
	struct FName                                       CapturedKey;                                      		// 0x0180 (0x0008) [0x0000000000000000]              
	class UR_GFxFrontEnd_MainMenu*                     MainMenuView;                                     		// 0x0188 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_News*                         NewsView;                                         		// 0x018C (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_JoinGame*                     PlayView;                                         		// 0x0190 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_Account*                      AccountView;                                      		// 0x0194 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_Stats*                        StatsView;                                        		// 0x0198 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_Settings*                     SettingsView;                                     		// 0x019C (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_Credits*                      CreditsView;                                      		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_Quit*                         QuitView;                                         		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_InfoDialog*                   InfoDialog;                                       		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_KeyBindDialog*                KeyBindDialog;                                    		// 0x01AC (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_FilterDialog*                 FilterDialog;                                     		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_JoinDialog*                   JoinDialog;                                       		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_ErrorDialog*                  ErrorDialog;                                      		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_PasswordDialog*               PasswordDialog;                                   		// 0x01BC (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxFrontEnd_FViewInfo >          ViewData;                                         		// 0x01C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class UR_GFxFrontEnd_View* >               ViewStack;                                        		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UR_GFxFrontEnd_View*                         CurrentView;                                      		// 0x01D8 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             LoadedViews;                                      		// 0x01DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __EscapeDelegate__Delegate;                       		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80712 ];

		return pClassPointer;
	};

	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char InputEvent );
	void DestroyDependantViews ( struct FName InViewName );
	void LoadDependantViews ( struct FName InViewName );
	void ResetTopBarIndex ( );
	bool CheckErrorMessage ( );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool CheckLinkConnectionAndError ( struct FString AlternateTitle, struct FString AlternateMessage );
	void RestoreFocus ( );
	void PostWidgetInit ( );
	void ASShowCursor ( unsigned long bShowCursor );
	void ConfigureView ( class UR_GFxFrontEnd_View* InView, struct FName WidgetName, struct FName WidgetPath );
	void UpdateViewLayout ( );
	class UGFxObject* PopViewStub ( );
	class UGFxObject* PopView ( );
	void ReportViewData ( struct FString Label );
	void ASSetSelectionFocus ( class UGFxObject* MovieClip );
	void SetSelectionFocus ( class UGFxObject* MovieClip );
	void PushDialogView ( class UR_GFxFrontEnd_View* dialogView );
	void PushView ( class UR_GFxFrontEnd_View* TargetView );
	bool IsViewAllowed ( class UR_GFxFrontEnd_View* TargetView );
	void ConfigureTargetView ( class UR_GFxFrontEnd_View* TargetView );
	void ConfigureTargetDialog ( class UR_GFxFrontEnd_View* TargetDialog );
	class UR_GFxFrontEnd_Dialog* SpawnDialog ( struct FName TargetDialogName, class UR_GFxFrontEnd_Screen* ParentView );
	void PushViewByName ( struct FName TargetViewName );
	void SetEscapeDelegate ( struct FScriptDelegate InDelegate );
	bool IsViewLoaded ( struct FName InViewName );
	void LoadView ( struct UR_GFxFrontEnd_FViewInfo InViewInfo );
	void LoadViews ( );
	void ConfigFrontEnd ( );
	bool Start ( unsigned long StartPaused );
	void EscapeDelegate ( );
};

UClass* UR_GFxFrontEnd::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_View
// 0x000C (0x0088 - 0x007C)
class UR_GFxFrontEnd_View : public UGFxUIView
{
public:
	class UR_GFxFrontEnd*                              MenuManager;                                      		// 0x007C (0x0004) [0x0000000000000000]              
	struct FName                                       ViewName;                                         		// 0x0080 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80734 ];

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

UClass* UR_GFxFrontEnd_View::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Dialog
// 0x0020 (0x00A8 - 0x0088)
class UR_GFxFrontEnd_Dialog : public UR_GFxFrontEnd_View
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80741 ];

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

UClass* UR_GFxFrontEnd_Dialog::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_PasswordDialog
// 0x0040 (0x00E8 - 0x00A8)
class UR_GFxFrontEnd_PasswordDialog : public UR_GFxFrontEnd_Dialog
{
public:
	class UGFxClikWidget*                              PasswordRendererMC;                               		// 0x00A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PasswordTextField;                                		// 0x00AC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinBtn;                                          		// 0x00B0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              CancelBtn;                                        		// 0x00B4 (0x0004) [0x0000000000000000]              
	struct FString                                     lPasswordMessage;                                 		// 0x00B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lPassword;                                        		// 0x00C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lJoin;                                            		// 0x00D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lCancel;                                          		// 0x00DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80740 ];

		return pClassPointer;
	};

	void Select_Cancel ( struct FEventData ev );
	void SetCancelButton_OnPress ( struct FScriptDelegate EventListener );
	void SetCancelButton ( class UGFxObject* InBackButton );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void ClearPasswordRenderer ( );
	struct FString GetPassword ( );
	void SetOKButtonListener ( struct FScriptDelegate DelegateListener );
	void SetCancelButtonListener ( struct FScriptDelegate DelegateListener );
	void DisableSubComponents ( unsigned long bEnableComponents );
	void OnEscapeKeyPress ( );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
};

UClass* UR_GFxFrontEnd_PasswordDialog::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_ErrorDialog
// 0x000C (0x00B4 - 0x00A8)
class UR_GFxFrontEnd_ErrorDialog : public UR_GFxFrontEnd_Dialog
{
public:
	struct FString                                     lBack;                                            		// 0x00A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80743 ];

		return pClassPointer;
	};

	void SetBackButton ( class UGFxObject* InBackButton );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnEscapeKeyPress ( );
	void OnBackButtonPress ( struct FEventData ev );
	void OnViewClosed ( );
	void SetButtonLabel ( struct FString ButtonLabel );
	void SetBackButton_OnPress ( struct FScriptDelegate EventListener );
	void SetInfo ( struct FString Info );
	void SetTitle ( struct FString Title );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
};

UClass* UR_GFxFrontEnd_ErrorDialog::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_JoinDialog
// 0x0010 (0x00B8 - 0x00A8)
class UR_GFxFrontEnd_JoinDialog : public UR_GFxFrontEnd_Dialog
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80745 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetSpectateButtonPress ( struct FScriptDelegate SpectateButtonListener );
	void SetJoinButtonPress ( struct FScriptDelegate JoinButtonListener );
	void PopulateServerInfo ( class UOnlineGameSettings* GameSettings );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
};

UClass* UR_GFxFrontEnd_JoinDialog::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_FilterDialog
// 0x0034 (0x00DC - 0x00A8)
class UR_GFxFrontEnd_FilterDialog : public UR_GFxFrontEnd_Dialog
{
public:
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTDataStore_GameSearchDM*                   SearchDataStore;                                  		// 0x00AC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FilterListMC;                                     		// 0x00B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFiltersHaveChanged : 1;                          		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  DataProvider;                                     		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NetworkTypeOptionItem;                            		// 0x00BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameTypeOptionItem;                               		// 0x00C0 (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxFrontEnd_FilterDialog_FOption > ListOptions;                                      		// 0x00C4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSwitchedGameType__Delegate;                   		// 0x00D0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80747 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void PushFilterListUpdate ( );
	void SetupListDataProvider ( );
	void SetFilterNetworkType ( unsigned long bLAN, unsigned long bSkipUIUpdate );
	void OnFilterList_OptionChanged ( struct FEventData ev );
	struct FString GetGameClassByFriendlyName ( struct FString FriendlyName );
	void ValidateServerType ( );
	void SetBackButtonListener ( struct FScriptDelegate DelegateListener );
	void DisableSubComponents ( unsigned long bEnableComponents );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
	void OnSwitchedGameType ( );
};

UClass* UR_GFxFrontEnd_FilterDialog::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_KeyBindDialog
// 0x0000 (0x00A8 - 0x00A8)
class UR_GFxFrontEnd_KeyBindDialog : public UR_GFxFrontEnd_Dialog
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80749 ];

		return pClassPointer;
	};

	void SetInfo ( struct FString Info );
	void SetTitle ( struct FString Title );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewClosed ( );
};

UClass* UR_GFxFrontEnd_KeyBindDialog::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_InfoDialog
// 0x0000 (0x00A8 - 0x00A8)
class UR_GFxFrontEnd_InfoDialog : public UR_GFxFrontEnd_Dialog
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80751 ];

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

UClass* UR_GFxFrontEnd_InfoDialog::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Screen
// 0x0054 (0x00DC - 0x0088)
class UR_GFxFrontEnd_Screen : public UR_GFxFrontEnd_View
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80754 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void UpdateHelpButtonImages ( );
	void FocusIn_BackButton ( struct FEventData ev );
};

UClass* UR_GFxFrontEnd_Screen::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Quit
// 0x0014 (0x00F0 - 0x00DC)
class UR_GFxFrontEnd_Quit : public UR_GFxFrontEnd_Screen
{
public:
	TArray< struct UR_GFxFrontEnd_Quit_FOption >       ListOptions;                                      		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              MiddleButtonBarMC;                                		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80753 ];

		return pClassPointer;
	};

	void Select_Exit_Desktop ( );
	void Select_Quit ( );
	void Select_Stay ( );
	void OnListChange ( struct FEventData ev );
	void SetList ( class UGFxObject* InList );
	void UpdateMiddleBarListDataProvider ( );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void OnViewActivated ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_Quit::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Credits
// 0x0010 (0x00EC - 0x00DC)
class UR_GFxFrontEnd_Credits : public UR_GFxFrontEnd_Screen
{
public:
	int                                                CreditSpawnRate;                                  		// 0x00DC (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           lCredits;                                         		// 0x00E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80756 ];

		return pClassPointer;
	};

	void StartRoll ( int ASCreditSpawnRate );
	void PopulateCredits ( TArray< struct FString > passCredits );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewActivated ( );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_Credits::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Settings
// 0x01E8 (0x02C4 - 0x00DC)
class UR_GFxFrontEnd_Settings : public UR_GFxFrontEnd_Screen
{
public:
	TArray< struct FGameOption >                       GameOptions;                                      		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct UR_GFxFrontEnd_Settings_FOption >   ListOptions;                                      		// 0x00E8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< class UGFxClikWidget* >                    ListButtons;                                      		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              SettingsMiddleButtonBarMC;                        		// 0x0100 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x0104 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              KeybindListMC;                                    		// 0x0108 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsListMC;                                   		// 0x010C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SettingsContainerMC;                              		// 0x0110 (0x0004) [0x0000000000000000]              
	TArray< class UUTUIDataProvider_KeyBinding* >      KeyB;                                             		// 0x0114 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  KeybindMenuMC;                                    		// 0x0120 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              keyButtonMC;                                      		// 0x0124 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              optionStepperMC;                                  		// 0x0128 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              optionButtonMC;                                   		// 0x012C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              checkBoxMC;                                       		// 0x0130 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              dropDownMC;                                       		// 0x0134 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              textInputMC;                                      		// 0x0138 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              sliderMC;                                         		// 0x013C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              defaultsButtonMC;                                 		// 0x0140 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              applyButtonMC;                                    		// 0x0144 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              restButtonMC;                                     		// 0x0148 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FOVInputMC;                                       		// 0x014C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FOVSliderMC;                                      		// 0x0150 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MouseSensitivitySliderMC;                         		// 0x0154 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MouseSensitivityInputMC;                          		// 0x0158 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              LVSteeringSensitivityMC;                          		// 0x015C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              AVSteeringSensitivityMC;                          		// 0x0160 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              LVSteeringSensitivityInputMC;                     		// 0x0164 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              AVSteeringSensitivityInputMC;                     		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MouseSmoothingMC;                                 		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              InvertMouseMC;                                    		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              InvertAirVehiclesMC;                              		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              LandVehicleMouseSteeringMC;                       		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              AirVehicleYawSmoothingMC;                         		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              AirMouseInputPowerCurveMC;                        		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ShowHUDMC;                                        		// 0x0184 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ToggleCrouchMC;                                   		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ToggleZoomMC;                                     		// 0x018C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              DisableGamepadMC;                                 		// 0x0190 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              DisplayResolutionMC;                              		// 0x0194 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              AspectRatioMC;                                    		// 0x0198 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ScreenModeMC;                                     		// 0x019C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              OverallQualityMC;                                 		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              GammaMC;                                          		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MSAALevelMC;                                      		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FXAALevelMC;                                      		// 0x01AC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              AFLevelMC;                                        		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              TextureDetailMC;                                  		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PostProcessMC;                                    		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ShowDecalsMC;                                     		// 0x01BC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SyncFramesMC;                                     		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              LockFPSMC;                                        		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ShadowDetailMC;                                   		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MasterVolumeMC;                                   		// 0x01CC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MusicVolumeMC;                                    		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SFXVolumeMC;                                      		// 0x01D4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              VehicleVolumeMC;                                  		// 0x01D8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ChatterVolumeMC;                                  		// 0x01DC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              DialogVolumeMC;                                   		// 0x01E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWaitingForBind : 1;                              		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDirty : 1;                                       		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUpdatingSetting : 1;                             		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bFirstActivation : 1;                             		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      EnableSettingsLogging : 1;                        		// 0x01E4 (0x0004) [0x0000000000004000] [0x00000010] ( CPF_Config )
	struct FString                                     CommandName;                                      		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       OldKeyBind;                                       		// 0x01F4 (0x0008) [0x0000000000000000]              
	int                                                KeyBindNumber;                                    		// 0x01FC (0x0004) [0x0000000000000000]              
	struct FString                                     ApplyButtonText;                                  		// 0x0200 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     DefaultsButtonText;                               		// 0x020C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RemapKeyTitle;                                    		// 0x0218 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RemapKeyInstructions;                             		// 0x0224 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UR_DisplayHandler*                           displayHandler;                                   		// 0x0230 (0x0004) [0x0000000000000000]              
	struct FString                                     currentFilter;                                    		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedGameOption;                               		// 0x0240 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DataProvider;                                     		// 0x0244 (0x0004) [0x0000000000000000]              
	class AR_PlayerController*                         localPlayerController;                            		// 0x0248 (0x0004) [0x0000000000000000]              
	float                                              MinFOV;                                           		// 0x024C (0x0004) [0x0000000000000000]              
	float                                              MaxFOV;                                           		// 0x0250 (0x0004) [0x0000000000000000]              
	float                                              MinMouseSensitivity;                              		// 0x0254 (0x0004) [0x0000000000000000]              
	float                                              MaxMouseSensitivity;                              		// 0x0258 (0x0004) [0x0000000000000000]              
	float                                              MaxMouseSnapInterval;                             		// 0x025C (0x0004) [0x0000000000000000]              
	float                                              MinLVSensitivity;                                 		// 0x0260 (0x0004) [0x0000000000000000]              
	float                                              MaxLVSensitivity;                                 		// 0x0264 (0x0004) [0x0000000000000000]              
	float                                              LVSnapInterval;                                   		// 0x0268 (0x0004) [0x0000000000000000]              
	float                                              MinAVSensitivity;                                 		// 0x026C (0x0004) [0x0000000000000000]              
	float                                              MaxAVSensitivity;                                 		// 0x0270 (0x0004) [0x0000000000000000]              
	float                                              AVSnapInterval;                                   		// 0x0274 (0x0004) [0x0000000000000000]              
	float                                              MinGamma;                                         		// 0x0278 (0x0004) [0x0000000000000000]              
	float                                              MaxGamma;                                         		// 0x027C (0x0004) [0x0000000000000000]              
	float                                              gammaSnapInterval;                                		// 0x0280 (0x0004) [0x0000000000000000]              
	int                                                MouseAdjustment;                                  		// 0x0284 (0x0004) [0x0000000000000000]              
	struct FString                                     CurrentTabSelection;                              		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSettingWidget >                    GeneralSettings;                                  		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSettingWidget >                    GeneralGfxSettings;                               		// 0x02A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSettingWidget >                    AdvancedGfxSettings;                              		// 0x02AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSettingWidget >                    AudioSettings;                                    		// 0x02B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80758 ];

		return pClassPointer;
	};

	void ApplyOptions ( struct FEventData ev );
	void RevertOptions ( unsigned long bRevertAdvanced );
	void ResetOptionDefaults ( struct FEventData ev );
	void SetGeneralTabDefaults ( );
	void ChatterVolumeUpdated ( struct FEventData ev );
	void VehicleVolumeUpdated ( struct FEventData ev );
	void SoundEffectsVolumeUpdated ( struct FEventData ev );
	void DialogVolumeUpdated ( struct FEventData ev );
	void MusicVolumeUpdated ( struct FEventData ev );
	void MasterVolumeUpdated ( struct FEventData ev );
	void FoliageUpdated ( struct FEventData ev );
	void PostProcessUpdated ( struct FEventData ev );
	void LockFPSUpdated ( struct FEventData ev );
	void ShowDecalsUpdated ( struct FEventData ev );
	void ShadowsUpdated ( struct FEventData ev );
	void SyncFramesUpdated ( struct FEventData ev );
	void TextureQualityUpdated ( struct FEventData ev );
	void GammaUpdated ( struct FEventData ev );
	void OverallQualityUpdated ( struct FEventData ev );
	void SetMSAAQuality ( int mvalue );
	void SetDefaultAudioValues ( );
	void SetDefaultGeneralValues ( );
	void SetDefaultValues ( );
	void AnisotropicFilteringUpdated ( struct FEventData ev );
	void PostProcessAntiAliasingUpdated ( struct FEventData ev );
	void AntiAliasingUpdated ( struct FEventData ev );
	void ScreenModeUpdated ( struct FEventData ev );
	void DisplayResolutionUpdated ( struct FEventData ev );
	void AspectRatioUpdated ( struct FEventData ev );
	void DisableGamepadUpdated ( struct FEventData ev );
	void ToggleSprintUpdated ( struct FEventData ev );
	void ToggleZoomUpdated ( struct FEventData ev );
	void ToggleCrouchUpdated ( struct FEventData ev );
	void ShowHUDUpdated ( struct FEventData ev );
	void AVSensitivityInputUpdated ( struct FEventData ev );
	void LVSensitivityInputUpdated ( struct FEventData ev );
	void AVSensitivityUpdated ( struct FEventData ev );
	void LVSensitivityUpdated ( struct FEventData ev );
	void AirMouseInputPowerCurveUpdated ( struct FEventData ev );
	void LandVehicleMouseSteeringUpdated ( struct FEventData ev );
	void AirSmoothingUpdated ( struct FEventData ev );
	void InvertMouseUpdated ( struct FEventData ev );
	void InvertAirVehiclesUpdated ( struct FEventData ev );
	void MouseSensitivityUpdated ( struct FEventData ev );
	void MouseSensitivityInputUpdated ( struct FEventData ev );
	void MouseSmoothingUpdated ( struct FEventData ev );
	void FOVInputUpdated ( struct FEventData ev );
	void FOVUpdated ( struct FEventData ev );
	void OnSettingChanged ( struct FEventData ev );
	bool GetCheckBoxValue ( struct FEventData ev );
	void SetupScreenMode ( );
	struct FString GetWidgetValue ( struct FString WidgetName );
	int GetSelectedDisplayResolutionIndex ( );
	int GetSelectedARIndex ( );
	struct FString GetSelectedAR ( );
	void GetAvailableResolutions ( struct FString AspectRatio );
	void ClearResolutionOptions ( );
	void SpewAvailableResolutions ( int resIndex );
	void PopulateDynamicData ( );
	bool GetGameOptionByName ( struct FString OptionName, struct FGameOption* outOption );
	bool HasGameOption ( struct FString str, struct FGameOption inOption );
	void SetupDefaultValue ( struct FString WidgetName, class UGFxObject* Widget );
	int TranslateAFLevelToIndex ( int af );
	void PopulateOptionData ( TArray< struct FString > OptionData, class UGFxObject** RendererDataProvider );
	void InitializeGameOptions ( struct FString WidgetName, class UGFxObject* Widget, unsigned long disableSettingsUpdate );
	void DeactivateTextBox ( struct FEventData ev );
	void ActivateTextBox ( struct FEventData ev );
	bool UnbindKey ( struct FName BindName, int keyNumber );
	void BindKey ( struct FName KeyName, struct FString Command, int keyNumber );
	void RemapKey ( int buttonIndex );
	void UpdateListDataProvider ( unsigned long RememberIndex, unsigned long UseDefaults );
	void OnViewLoaded ( );
	void SetAllSceneComponentsEnabled ( unsigned long Enabled );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void EnableCurrentTab ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
	void InitLocalPC ( );
	void Select_KeyBindings ( );
	void Select_AudioOptions ( );
	void Select_AdvancedDisplayOptions ( );
	void Select_DisplayOptions ( );
	void Select_GeneralOptions ( );
	void OnPressRemapButton1 ( struct FEventData ev );
	void OnPressRemapButton0 ( struct FEventData ev );
	void OnListChange ( struct FEventData ev );
	void Changed ( struct FEventData ev );
	void SetList ( class UGFxObject* InList );
	void UpdateMiddleBarListDataProvider ( );
	void SetKeybindWidgetEnabled ( unsigned long Enabled );
	void SetKeybindButtonsEnabled ( unsigned long Enabled, unsigned long Visible );
	void SetAudioWidgetEnabled ( unsigned long Enabled );
	void SetAdvancedDisplayWidgetEnabled ( unsigned long Enabled );
	void SetDisplayWidgetEnabled ( unsigned long Enabled );
	void SetGeneralWidgetEnabled ( unsigned long Enabled );
	void SetWidgetVisible ( class UGFxObject* Widget, unsigned long Enabled );
	void SetWidgetEnabled ( class UGFxObject* Widget, unsigned long Enabled );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SettingsLog ( struct FString S );
};

UClass* UR_GFxFrontEnd_Settings::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Stats
// 0x00AC (0x0188 - 0x00DC)
class UR_GFxFrontEnd_Stats : public UR_GFxFrontEnd_Screen
{
public:
	TArray< struct UR_GFxFrontEnd_Stats_FOption >      ListOptions;                                      		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              MiddleButtonBarMC;                                		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ContainerMC;                                      		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ScrollbarMC;                                      		// 0x00F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00F4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RootMC;                                           		// 0x00F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LeaderboardMC;                                    		// 0x00FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  OverlayMC;                                        		// 0x0100 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LTitleMC;                                         		// 0x0104 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListMC;                                           		// 0x0108 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CountMC;                                          		// 0x010C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CountTF;                                          		// 0x0110 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Title_TitleGMC;                                   		// 0x0114 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleTF;                                          		// 0x0118 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleGMC;                                         		// 0x011C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListHeaderMC;                                     		// 0x0120 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListScoreTF;                                      		// 0x0124 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListTitleTF;                                      		// 0x0128 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  lFooterMC;                                        		// 0x012C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FooterItemMC;                                     		// 0x0130 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayerRow;                                        		// 0x0134 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayerRowTween : 1;                              		// 0x0138 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitialized : 1;                                 		// 0x0138 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bResolvingLocalPlayer : 1;                        		// 0x0138 (0x0004) [0x0000000000000000] [0x00000004] 
	class UGFxObject*                                  Footer_NameTF;                                    		// 0x013C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreLabelTF;                              		// 0x0140 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_KillsTF;                                   		// 0x0144 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_DeathsTF;                                  		// 0x0148 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreTF;                                   		// 0x014C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_RankLabelTF;                               		// 0x0150 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_RankTF;                                    		// 0x0154 (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxFrontEnd_Stats_FListRow >     ListItems;                                        		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LeaderboardReadCount;                             		// 0x0164 (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxFrontEnd_Stats_FUILeaderboardEntry > LeaderboardData;                                  		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineStatsInterface*                       OSI;                                              		// 0x0174 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0178 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UR_LeaderboardScoreRead*                     LeaderboardStatsRead;                             		// 0x017C (0x0004) [0x0000000000000000]              
	float                                              LastInitialReadAttempt;                           		// 0x0180 (0x0004) [0x0000000000000000]              
	int                                                ReadAttemptCount;                                 		// 0x0184 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80760 ];

		return pClassPointer;
	};

	void ReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	void OnlineCleanup ( );
	void DoInitialLeaderboardRead ( );
	void OnlineInit ( );
	void OnOpenAnimComplete ( );
	void OnCloseAnimComplete ( );
	void UpdateFooter ( struct UR_GFxFrontEnd_Stats_FUILeaderboardEntry FooterData );
	void UpdateHeaders ( );
	void SetPlayerRow ( class UGFxObject* UpdatedPlayerRow );
	void UpdateRow ( struct UR_GFxFrontEnd_Stats_FListRow CurRow, struct UR_GFxFrontEnd_Stats_FUILeaderboardEntry CurData );
	void UpdateLeaderboardLists ( );
	void Draw ( );
	void SetupList ( );
	void ConfigLeaderboard ( );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	int GetLocalPlayerOwnerIndex ( );
	void Select_Leaderboard ( );
	void Select_PlayerStats ( );
	void OnListChange ( struct FEventData ev );
	void SetList ( class UGFxObject* InList );
	void UpdateMiddleBarListDataProvider ( );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void OnViewActivated ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_Stats::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Account
// 0x0004 (0x00E0 - 0x00DC)
class UR_GFxFrontEnd_Account : public UR_GFxFrontEnd_Screen
{
public:
	class UGFxObject*                                  BottomManagerMC;                                  		// 0x00DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80762 ];

		return pClassPointer;
	};

	void OnViewActivated ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_Account::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Join
// 0x0140 (0x021C - 0x00DC)
class UR_GFxFrontEnd_Join : public UR_GFxFrontEnd_Screen
{
public:
	class UUDKDataStore_GameSearchBase*                SearchDataStore;                                  		// 0x00DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTUIDataStore_StringList*                   StringListDataStore;                              		// 0x00E0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UUTDataStore_GameSearchDM*                   SearchDMDataStore;                                		// 0x00E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FOnlineGameSearchResult >           ServerInfoList;                                   		// 0x00E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UUTUIDataStore_MenuItems*                    MenuItemDataStore;                                		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineSubsystemSteamworks*                  OnlineSub;                                        		// 0x00F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UOnlineGameInterface*                        GameInterface;                                    		// 0x00FC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0100 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      bGametypeOutdated : 1;                            		// 0x0104 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bSpectate : 1;                                    		// 0x0104 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bIssuedInitialQuery : 1;                          		// 0x0104 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bQueryDialogShowing : 1;                          		// 0x0104 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bJoinDialogShowing : 1;                           		// 0x0104 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      bProcessingJoin : 1;                              		// 0x0104 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	struct FName                                       SearchDSName;                                     		// 0x0108 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UR_GFxFrontEnd_PasswordDialog*               PasswordDialog;                                   		// 0x0110 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UR_GFxFrontEnd_JoinDialog*                   JoinDialogMC;                                     		// 0x0114 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      QueryCompletionAction;                            		// 0x0118 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      CurrentSortMode;                                  		// 0x0119 (0x0001) [0x0000000000000000]              
	struct FString                                     ServerPassword;                                   		// 0x011C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                LastServerAdded;                                  		// 0x0128 (0x0004) [0x0000000000000000]              
	TArray< class UUDKUIDataProvider_SearchResult* >   ServerListData;                                   		// 0x012C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  MenuMC;                                           		// 0x0138 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerListMC;                                     		// 0x013C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              RefreshBtnMC;                                     		// 0x0140 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              CancelBtnMC;                                      		// 0x0144 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinStatusMC;                                     		// 0x0148 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinBtnMC;                                        		// 0x014C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              JoinLabelMC;                                      		// 0x0150 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              JoiningLabelMC;                                   		// 0x0154 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SpectateBtn;                                      		// 0x0158 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HeaderBarMC;                                      		// 0x015C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FlagsHeaderBtn;                                   		// 0x0160 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerHeaderBtn;                                  		// 0x0164 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MapHeaderBtn;                                     		// 0x0168 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PlayersHeaderBtn;                                 		// 0x016C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PingHeaderBtn;                                    		// 0x0170 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FilterMatchTypeTxt;                               		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FilterGameModeTxt;                                		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatusTxt;                                        		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LoadingTickerMC;                                  		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ServerCountTxt;                                   		// 0x0184 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FilterBtnMC;                                      		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapNameMC;                                        		// 0x018C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ServerNameMC;                                     		// 0x0190 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameInfoMC;                                       		// 0x0194 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MOTDMC;                                           		// 0x0198 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapPreviewImage;                                  		// 0x019C (0x0004) [0x0000000000000000]              
	int                                                SelectedIndex;                                    		// 0x01A0 (0x0004) [0x0000000000000000]              
	TArray< class UUDKUIDataProvider_MapInfo* >        MapList;                                          		// 0x01A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     lJoin;                                            		// 0x01B0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lSpectate;                                        		// 0x01BC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lRefresh;                                         		// 0x01C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lRefreshing;                                      		// 0x01D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lCancel;                                          		// 0x01E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lJoining;                                         		// 0x01EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lJoinFailed;                                      		// 0x01F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FServerList >                       CurrentServers;                                   		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FServerList >                       FilteredServers;                                  		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80765 ];

		return pClassPointer;
	};

	void ClearInspectorAssets ( );
	void SetRefreshing ( unsigned long IsRefreshing );
	void ShowJoinStatusWindow ( unsigned long bShow );
	void CancelJoin ( struct FEventData ev );
	void OnGameTypeChanged ( int PlayerIndex );
	void ForceLANOption ( );
	void OnServerListItemPress ( struct FEventData ev );
	void NotifyGameTypeChanged ( );
	void OnCancelSearchComplete ( unsigned long bWasSuccessful );
	void CancelQuery ( unsigned char DesiredCancelAction );
	bool AllowJoinServer ( );
	void OnJoinGameComplete ( struct FName SessionName, unsigned long bSuccessful );
	void ProcessJoin ( );
	void JoinServer ( );
	void JoinServerClikListener ( struct FEventData ev );
	void SpectateServer ( struct FEventData ev );
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
	void ConditionalRefreshServerList ( int PlayerIndex );
	void UpdateFilterButton ( );
	void Cleanup ( );
	struct FString GetImageMarkupFromMapName ( struct FString MapName );
	void ValidateServerType ( );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void DisableJoinControls ( unsigned long bDisableComponents );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewClosed ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_Join::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_JoinGame
// 0x0110 (0x032C - 0x021C)
class UR_GFxFrontEnd_JoinGame : public UR_GFxFrontEnd_Join
{
public:
	struct FString                                     lFlags;                                           		// 0x021C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lPing;                                            		// 0x0228 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lServerName;                                      		// 0x0234 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lMap;                                             		// 0x0240 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lGameMode;                                        		// 0x024C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lPlayers;                                         		// 0x0258 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lPrivateSlots;                                    		// 0x0264 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lServerInfo;                                      		// 0x0270 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lAddToFavorites;                                  		// 0x027C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lGetFull;                                         		// 0x0288 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lGetEmpty;                                        		// 0x0294 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UGFxClikWidget*                              GameModeBtn;                                      		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerPingFilterMC;                               		// 0x02A4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerNameFilterMC;                               		// 0x02A8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MapNameFilterMC;                                  		// 0x02AC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              GameModeNameFilterMC;                             		// 0x02B0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerPlayerFilterMC;                             		// 0x02B4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ChkBxEmptyServersMC;                              		// 0x02B8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ChkBxFullServersMC;                               		// 0x02BC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              BrowserDropDownConnectionType;                    		// 0x02C0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              FavoritesButtonMC;                                		// 0x02C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayContainerMC;                                  		// 0x02C8 (0x0004) [0x0000000000000000]              
	class UR_GFxFrontEnd_JoinDialog*                   rJoinDialogMC;                                    		// 0x02CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  GlobalPlayerCountTxt;                             		// 0x02D0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MiddleButtonBarMC;                                		// 0x02D4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x02D8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ListMC;                                           		// 0x02DC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ServerInfo;                                       		// 0x02E0 (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxFrontEnd_JoinGame_FOption >   ListOptions;                                      		// 0x02E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bFilterFullServers : 1;                           		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFilterEmptyServers : 1;                          		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFilterPlayers : 1;                               		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bFilterMapName : 1;                               		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bFilterGameMode : 1;                              		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFilterServerName : 1;                            		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bFilterPing : 1;                                  		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bFiltersActive : 1;                               		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPingSort : 1;                                    		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bPlayersSort : 1;                                 		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bServerNameSort : 1;                              		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bMapNameSort : 1;                                 		// 0x02F0 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bGameModeSort : 1;                                		// 0x02F0 (0x0004) [0x0000000000000000] [0x00001000] 
	struct FString                                     FilterMapName;                                    		// 0x02F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FilterGameMode;                                   		// 0x0300 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FilterServerName;                                 		// 0x030C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                FilterPlayers;                                    		// 0x0318 (0x0004) [0x0000000000000000]              
	int                                                FilterPing;                                       		// 0x031C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __ListSort__Delegate;                             		// 0x0320 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80764 ];

		return pClassPointer;
	};

	void SetRefreshing ( unsigned long IsRefreshing );
	void OnGameModeHeaderPress ( struct FEventData ev );
	void OnMapHeaderPress ( struct FEventData ev );
	void OnServerHeaderPress ( struct FEventData ev );
	void OnPlayersHeaderPress ( struct FEventData ev );
	void OnPingHeaderPress ( struct FEventData ev );
	void CheckPendingError ( );
	void OnGameTypeChanged ( int PlayerIndex );
	void OnViewClosed ( );
	void Select_QuickPlay ( );
	void Select_ServerBrowser ( );
	void AddToFavorites ( struct FEventData ev );
	void OnListChange ( struct FEventData ev );
	void SetList ( class UGFxObject* InList );
	void UpdateMiddleBarListDataProvider ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void UpdatePlayerCount ( int GlobalPlayerCount );
	void InitiateBrowser ( );
	void FilterEmptyServers ( struct FEventData ev );
	void FilterFullServers ( struct FEventData ev );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void OnServerListItemPress ( struct FEventData ev );
	int ListSort ( struct FServerList A, struct FServerList B );
	bool AddServer ( int I );
	void FilterList ( );
	void ResortList ( );
	void UpdateListDataProvider ( );
	int GetGameTypeSearchProviderIndex ( struct FString GameClassName );
	void ClearServerList ( );
	void OnFindOnlineGamesCompleteDelegate ( unsigned long bWasSuccessful );
	void SubmitServerListQuery ( int PlayerIndex );
	void UpdatePlayersFilter ( struct FEventData ev );
	void UpdateGameTypeFilter ( struct FEventData ev );
	void UpdateMapFilter ( struct FEventData ev );
	void UpdateServerNameFilter ( struct FEventData ev );
	void UpdatePingFilter ( struct FEventData ev );
	void RefreshServerList ( int InPlayerIndex, int MaxResults );
	void InitializeMapFilters ( );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_JoinGame::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_News
// 0x0038 (0x0114 - 0x00DC)
class UR_GFxFrontEnd_News : public UR_GFxFrontEnd_Screen
{
public:
	class UGFxObject*                                  NewsMC;                                           		// 0x00DC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              NewsImageMC;                                      		// 0x00E0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              BuyButtonMC;                                      		// 0x00E4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              DemoLabelMC;                                      		// 0x00E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShowBetaNews : 1;                                		// 0x00EC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bShowBuyButton : 1;                               		// 0x00EC (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	struct FString                                     lNews;                                            		// 0x00F0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lBuyButton;                                       		// 0x00FC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lDemoVersionLabel;                                		// 0x0108 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80767 ];

		return pClassPointer;
	};

	void eventOnClose ( );
	void BuyButtonPressed ( struct FEventData ev );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void DownloadNews ( struct FString URL );
	void NewsDownloadComplete ( unsigned long bWasSuccessful, unsigned char NewsType );
	void UpdateNews ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnViewActivated ( );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_News::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_MainMenu
// 0x0025 (0x0101 - 0x00DC)
class UR_GFxFrontEnd_MainMenu : public UR_GFxFrontEnd_Screen
{
public:
	TArray< struct UR_GFxFrontEnd_MainMenu_FOption >   ListOptions;                                      		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              TopButtonBarMC;                                   		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              HomeButtonMC;                                     		// 0x00F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00F4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  UserLabelTxt;                                     		// 0x00F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  UserNameTxt;                                      		// 0x00FC (0x0004) [0x0000000000000000]              
	unsigned char                                      LastSelectedIndex;                                		// 0x0100 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80769 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void OnEscapeKeyPress ( );
	void SetList ( class UGFxObject* InList );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void Select_QuitGame ( );
	void Select_Credits ( );
	void Select_Settings ( );
	void Select_Stats ( );
	void Select_Play ( );
	void Select_Home ( struct FEventData ev );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewActivated ( );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_MainMenu::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_ChooseControlSettingType
// 0x0018 (0x00F4 - 0x00DC)
class UR_GFxFrontEnd_ChooseControlSettingType : public UR_GFxFrontEnd_Screen
{
public:
	TArray< struct UR_GFxFrontEnd_ChooseControlSettingType_FOption > ListOptions;                                      		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x00F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80910 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetList ( class UGFxObject* InList );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void Select_KeyBindings ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_ChooseControlSettingType::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_ChooseSettingType
// 0x0018 (0x00F4 - 0x00DC)
class UR_GFxFrontEnd_ChooseSettingType : public UR_GFxFrontEnd_Screen
{
public:
	TArray< struct UR_GFxFrontEnd_ChooseSettingType_FOption > ListOptions;                                      		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x00F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80948 ];

		return pClassPointer;
	};

	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void SetList ( class UGFxObject* InList );
	void UpdateListDataProvider ( );
	void UpdateDescription ( );
	void OnListChange ( struct FEventData ev );
	void OnListItemPress ( struct FEventData ev );
	void Select_GameSettings ( );
	void Select_ChooseControlSettingType ( );
	void Select_DisplaySettings ( );
	void DisableSubComponents ( unsigned long bDisableComponents );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_ChooseSettingType::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Controls
// 0x0000 (0x00DC - 0x00DC)
class UR_GFxFrontEnd_Controls : public UR_GFxFrontEnd_Screen
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80988 ];

		return pClassPointer;
	};

	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_Controls::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_ControlSettings
// 0x0000 (0x00DC - 0x00DC)
class UR_GFxFrontEnd_ControlSettings : public UR_GFxFrontEnd_Screen
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 80993 ];

		return pClassPointer;
	};

};

UClass* UR_GFxFrontEnd_ControlSettings::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Customize
// 0x0000 (0x00DC - 0x00DC)
class UR_GFxFrontEnd_Customize : public UR_GFxFrontEnd_Screen
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81011 ];

		return pClassPointer;
	};

	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewClosed ( );
	void OnViewLoaded ( );
	void OnViewActivated ( );
};

UClass* UR_GFxFrontEnd_Customize::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_DisplaySettings
// 0x0024 (0x0100 - 0x00DC)
class UR_GFxFrontEnd_DisplaySettings : public UR_GFxFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              ListMC;                                           		// 0x00DC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00E0 (0x0004) [0x0000000000000000]              
	struct FString                                     Resolution;                                       		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Fullscreen : 1;                                   		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDirty : 1;                                       		// 0x00F0 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct UR_GFxFrontEnd_DisplaySettings_FSetting > DisplaySettings;                                  		// 0x00F4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81046 ];

		return pClassPointer;
	};

	void SaveState ( );
	void UpdateDescription ( );
	void OnSettingChanged ( struct FEventData ev );
	void OnListChange ( struct FEventData ev );
	void MoveBackImpl ( );
	void Select_Back ( struct FEventData ev );
	void PopulateSettingData ( TArray< struct FString > SettingData, class UGFxObject** RendererDataProvider );
	void initializeSettings ( );
	void SetList ( class UGFxObject* InList );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_DisplaySettings::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_GameMode
// 0x003C (0x0118 - 0x00DC)
class UR_GFxFrontEnd_GameMode : public UR_GFxFrontEnd_Screen
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81196 ];

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

UClass* UR_GFxFrontEnd_GameMode::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_MapSelect
// 0x0020 (0x00FC - 0x00DC)
class UR_GFxFrontEnd_MapSelect : public UR_GFxFrontEnd_Screen
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81222 ];

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

UClass* UR_GFxFrontEnd_MapSelect::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Mutators
// 0x0040 (0x011C - 0x00DC)
class UR_GFxFrontEnd_Mutators : public UR_GFxFrontEnd_Screen
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81225 ];

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

UClass* UR_GFxFrontEnd_Mutators::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_LaunchGame
// 0x00A4 (0x0180 - 0x00DC)
class UR_GFxFrontEnd_LaunchGame : public UR_GFxFrontEnd_Screen
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
	TArray< struct UR_GFxFrontEnd_LaunchGame_FOption > ListOptions;                                      		// 0x0124 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81246 ];

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

UClass* UR_GFxFrontEnd_LaunchGame::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_GameplaySettings
// 0x0018 (0x00F4 - 0x00DC)
class UR_GFxFrontEnd_GameplaySettings : public UR_GFxFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              ListMC;                                           		// 0x00DC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDirty : 1;                                       		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct UR_GFxFrontEnd_GameplaySettings_FSetting > GameSettings;                                     		// 0x00E8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81259 ];

		return pClassPointer;
	};

	void SaveState ( );
	void UpdateDescription ( );
	void OnSettingChanged ( struct FEventData ev );
	void OnListChange ( struct FEventData ev );
	void MoveBackImpl ( );
	void Select_Back ( struct FEventData ev );
	void PopulateSettingData ( TArray< struct FString > SettingData, class UGFxObject** RendererDataProvider );
	void initializeSettings ( );
	void SetList ( class UGFxObject* InList );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_GameplaySettings::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_HostGame
// 0x0000 (0x0180 - 0x0180)
class UR_GFxFrontEnd_HostGame : public UR_GFxFrontEnd_LaunchGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81399 ];

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

UClass* UR_GFxFrontEnd_HostGame::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_InstantAction
// 0x0000 (0x0180 - 0x0180)
class UR_GFxFrontEnd_InstantAction : public UR_GFxFrontEnd_LaunchGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81482 ];

		return pClassPointer;
	};

	void OnStartGame_Confirm ( );
	void OnViewActivated ( );
};

UClass* UR_GFxFrontEnd_InstantAction::pClassPointer = NULL;

// Class RavagedGame.R_UTUIDataStore_MenuItems
// 0x0000 (0x00D8 - 0x00D8)
class UR_UTUIDataStore_MenuItems : public UUTUIDataStore_MenuItems
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81818 ];

		return pClassPointer;
	};

};

UClass* UR_UTUIDataStore_MenuItems::pClassPointer = NULL;

// Class RavagedGame.R_UTUIDataProvider_MapInfo
// 0x0000 (0x00B4 - 0x00B4)
class UR_UTUIDataProvider_MapInfo : public UUTUIDataProvider_MapInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 81819 ];

		return pClassPointer;
	};

};

UClass* UR_UTUIDataProvider_MapInfo::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Multiplayer
// 0x0018 (0x00F4 - 0x00DC)
class UR_GFxFrontEnd_Multiplayer : public UR_GFxFrontEnd_Screen
{
public:
	TArray< struct UR_GFxFrontEnd_Multiplayer_FOption > ListOptions;                                      		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UGFxClikWidget*                              ListMC;                                           		// 0x00E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListDataProvider;                                 		// 0x00EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MenuMC;                                           		// 0x00F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82092 ];

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

UClass* UR_GFxFrontEnd_Multiplayer::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Play
// 0x0004 (0x00E0 - 0x00DC)
class UR_GFxFrontEnd_Play : public UR_GFxFrontEnd_Screen
{
public:
	class UGFxObject*                                  BottomManagerMC;                                  		// 0x00DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82298 ];

		return pClassPointer;
	};

	void OnViewActivated ( );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_Play::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_QuickPlay
// 0x0000 (0x00DC - 0x00DC)
class UR_GFxFrontEnd_QuickPlay : public UR_GFxFrontEnd_Screen
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82311 ];

		return pClassPointer;
	};

	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_QuickPlay::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_SettingsBase
// 0x0028 (0x0104 - 0x00DC)
class UR_GFxFrontEnd_SettingsBase : public UR_GFxFrontEnd_Screen
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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82352 ];

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

UClass* UR_GFxFrontEnd_SettingsBase::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_ServerSettings
// 0x0004 (0x0108 - 0x0104)
class UR_GFxFrontEnd_ServerSettings : public UR_GFxFrontEnd_SettingsBase
{
public:
	unsigned long                                      bDataChangedByReqs : 1;                           		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82418 ];

		return pClassPointer;
	};

	struct FString FindControlByUTClassName ( unsigned char UTUIControlClass );
	void PopulateOptionDataProviderForIndex ( int Index, class UGFxObject** OutDataProvider, struct FString* OutDefaultValue, int* OutDefaultIndex );
	void UpdateListDataProvider ( );
	void SaveState ( );
	void OnOptionChanged ( struct FEventData ev );
	void SetSelectedOptionSet ( );
};

UClass* UR_GFxFrontEnd_ServerSettings::pClassPointer = NULL;

// Class RavagedGame.R_LeaderboardScoreRead
// 0x0000 (0x0088 - 0x0088)
class UR_LeaderboardScoreRead : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82901 ];

		return pClassPointer;
	};

	int GetAssists ( struct FUniqueNetId Player );
	int GetKills ( struct FUniqueNetId Player );
	int GetDeaths ( struct FUniqueNetId Player );
	int GetScore ( struct FUniqueNetId Player );
};

UClass* UR_LeaderboardScoreRead::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_SystemSettings
// 0x0000 (0x0104 - 0x0104)
class UR_GFxFrontEnd_SystemSettings : public UR_GFxFrontEnd_SettingsBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83024 ];

		return pClassPointer;
	};

};

UClass* UR_GFxFrontEnd_SystemSettings::pClassPointer = NULL;

// Class RavagedGame.R_GFxFrontEnd_Upgrades
// 0x0000 (0x00DC - 0x00DC)
class UR_GFxFrontEnd_Upgrades : public UR_GFxFrontEnd_Screen
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83026 ];

		return pClassPointer;
	};

	void OnTopMostView ( unsigned long bPlayOpenAnimation );
	void OnViewLoaded ( );
};

UClass* UR_GFxFrontEnd_Upgrades::pClassPointer = NULL;

// Class RavagedGame.R_GFxHUD
// 0x0230 (0x0398 - 0x0168)
class UR_GFxHUD : public UGFxMoviePlayer
{
public:
	class AWorldInfo*                                  ThisWorld;                                        		// 0x0168 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x016C (0x0004) [0x0000000000000000]              
	float                                              CurZoomf;                                         		// 0x0170 (0x0004) [0x0000000000000000]              
	float                                              NormalZoomf;                                      		// 0x0174 (0x0004) [0x0000000000000000]              
	float                                              MaxZoomf;                                         		// 0x0178 (0x0004) [0x0000000000000000]              
	float                                              MinZoomf;                                         		// 0x017C (0x0004) [0x0000000000000000]              
	int                                                LastTeam;                                         		// 0x0180 (0x0004) [0x0000000000000000]              
	float                                              KillMessageHeight;                                		// 0x0184 (0x0004) [0x0000000000000000]              
	int                                                MaxKillMessages;                                  		// 0x0188 (0x0004) [0x0000000000000000]              
	int                                                NumMessages;                                      		// 0x018C (0x0004) [0x0000000000000000]              
	int                                                MaxMessages;                                      		// 0x0190 (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxChat_FMessageRow >            KillMessages;                                     		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UR_GFxChat_FMessageRow >            FreeKillMessages;                                 		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     lWith;                                            		// 0x01AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lSeat;                                            		// 0x01B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lKilled;                                          		// 0x01C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lTeamKilled;                                      		// 0x01D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lYouKilled;                                       		// 0x01DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lYouTeamKilled;                                   		// 0x01E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned char                                      ActiveStance;                                     		// 0x01F4 (0x0001) [0x0000000000000000]              
	unsigned char                                      ActivePawnType;                                   		// 0x01F5 (0x0001) [0x0000000000000000]              
	unsigned char                                      LastPawnType;                                     		// 0x01F6 (0x0001) [0x0000000000000000]              
	unsigned char                                      LastFlagHome[ 0x2 ];                              		// 0x01F7 (0x0002) [0x0000000000000000]              
	class UGFxObject*                                  MOTDMC;                                           		// 0x01FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MotDTF;                                           		// 0x0200 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LogMC;                                            		// 0x0204 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillMessageMC;                                    		// 0x0208 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RightPanelMC;                                     		// 0x020C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LeftPanelMC;                                      		// 0x0210 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamStatsMC;                                      		// 0x0214 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VehicleHealthBarMC;                               		// 0x0218 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VehicleAmmoMC;                                    		// 0x021C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VehicleMagCountMC;                                		// 0x0220 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  clipTypeMC;                                       		// 0x0224 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MagCountMC;                                       		// 0x0228 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  teamIndicatorMC;                                  		// 0x022C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CaptureIndicatorMC;                               		// 0x0230 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CaptureIndicatorBarMC;                            		// 0x0234 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamBlueCaptureMC;                                		// 0x0238 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TeamRedCaptureMC;                                 		// 0x023C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CPNameTF;                                         		// 0x0240 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CapturingTeamMC;                                  		// 0x0244 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameNameMC;                                       		// 0x0248 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameNameTF;                                       		// 0x024C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameDescriptionMC;                                		// 0x0250 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  GameDescriptionTF;                                		// 0x0254 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapNameMC;                                        		// 0x0258 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapNameTF;                                        		// 0x025C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RavagedLogoMC;                                    		// 0x0260 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AmmoCount1MC;                                     		// 0x0264 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MagCount1MC;                                      		// 0x0268 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AmmoCount2MC;                                     		// 0x026C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MagCount2MC;                                      		// 0x0270 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AmmoBarMC;                                        		// 0x0274 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  clipType1MC;                                      		// 0x0278 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  clipType2MC;                                      		// 0x027C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  playerListMC;                                     		// 0x0280 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HealthTF;                                         		// 0x0284 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HealthBarMC;                                      		// 0x0288 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AmmoCountTF;                                      		// 0x028C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MaxAmmoMC;                                        		// 0x0290 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ArmorTF;                                          		// 0x0294 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ArmorMC;                                          		// 0x0298 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VArmorMC;                                         		// 0x029C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  VArmorTF;                                         		// 0x02A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimeTF;                                           		// 0x02A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StanceIndicatorMC;                                		// 0x02A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  WeaponMC;                                         		// 0x02AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ArmorPercTF;                                      		// 0x02B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CenterTextMC;                                     		// 0x02B4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CenterTextTF;                                     		// 0x02B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  skillzMC;                                         		// 0x02BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  skillzTF;                                         		// 0x02C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ToolTipTextMC;                                    		// 0x02C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ToolTipTextTF;                                    		// 0x02C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CountDownTextMC;                                  		// 0x02CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CountDownTextTF;                                  		// 0x02D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreBarMC[ 0x2 ];                                		// 0x02D4 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTF[ 0x2 ];                                   		// 0x02DC (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  GoalMC;                                           		// 0x02E4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FlagCarrierMC[ 0x2 ];                             		// 0x02E8 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  FlagCarrierTF[ 0x2 ];                             		// 0x02F0 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  EnemyNameTF;                                      		// 0x02F8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ResourceIndicatorMC;                              		// 0x02FC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  HitLocMC[ 0x8 ];                                  		// 0x0300 (0x0020) [0x0000000000000000]              
	class UGFxObject*                                  MultiKillN_TF;                                    		// 0x0320 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MultiKillMsg_TF;                                  		// 0x0324 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MultiKillMC;                                      		// 0x0328 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ReticuleMC;                                       		// 0x032C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RBotMC;                                           		// 0x0330 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RRightMC;                                         		// 0x0334 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RTopMC;                                           		// 0x0338 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RLeftMC;                                          		// 0x033C (0x0004) [0x0000000000000000]              
	class AR_Vehicle*                                  LastVehicle;                                      		// 0x0340 (0x0004) [0x0000000000000000]              
	class AUTWeapon*                                   LastWeapon;                                       		// 0x0344 (0x0004) [0x0000000000000000]              
	class AUTWeapon*                                   NewWeapon;                                        		// 0x0348 (0x0004) [0x0000000000000000]              
	float                                              LastHealth;                                       		// 0x034C (0x0004) [0x0000000000000000]              
	float                                              LastArmor;                                        		// 0x0350 (0x0004) [0x0000000000000000]              
	float                                              LastVehicleHealth;                                		// 0x0354 (0x0004) [0x0000000000000000]              
	int                                                LastAmmoCount;                                    		// 0x0358 (0x0004) [0x0000000000000000]              
	int                                                LastMagCount;                                     		// 0x035C (0x0004) [0x0000000000000000]              
	int                                                LastAmmoCount1;                                   		// 0x0360 (0x0004) [0x0000000000000000]              
	int                                                LastMagCount1;                                    		// 0x0364 (0x0004) [0x0000000000000000]              
	int                                                LastAmmoCount2;                                   		// 0x0368 (0x0004) [0x0000000000000000]              
	int                                                LastMagCount2;                                    		// 0x036C (0x0004) [0x0000000000000000]              
	int                                                LastVehicleAmmo;                                  		// 0x0370 (0x0004) [0x0000000000000000]              
	int                                                LastVehicleMagCount;                              		// 0x0374 (0x0004) [0x0000000000000000]              
	int                                                LastGrenadeCount;                                 		// 0x0378 (0x0004) [0x0000000000000000]              
	int                                                LastScore[ 0x2 ];                                 		// 0x037C (0x0008) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    LastEnemy;                                        		// 0x0384 (0x0004) [0x0000000000000000]              
	class AUTPlayerReplicationInfo*                    LastFlagCarrier[ 0x2 ];                           		// 0x0388 (0x0008) [0x0000000000000000]              
	class AR_GRI*                                      GRI;                                              		// 0x0390 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIsCTR : 1;                                       		// 0x0394 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bIsTeamHUD : 1;                                   		// 0x0394 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDrawWeaponCrosshairs : 1;                        		// 0x0394 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83031 ];

		return pClassPointer;
	};

	class UGFxObject* InitKillMessageRow ( );
	class UGFxObject* CreateMessageRow ( struct FString Type );
	void ShowKillMessage ( struct FString Type, struct FString msg, unsigned long bTKill );
	void AddKillMessage ( class APlayerReplicationInfo* Killer, class APlayerReplicationInfo* Killed, struct FString Message, class UClass* InMessageClass );
	struct FString GetRank ( class APlayerReplicationInfo* PRI );
	void SetMotD ( struct FString Text );
	void SetReadyText ( struct FString Text );
	void SetCountDownText ( struct FString Text );
	void SetSkillzText ( struct FString Text );
	void SetToolTipText ( struct FString Message );
	void SetCenterText ( struct FString Message );
	void ShowMultiKill ( int N, struct FString msg );
	void DisplayHit ( struct FVector HitDir, int Damage, class UClass* DamageType );
	void MinimapZoomIn ( );
	void MinimapZoomOut ( );
	void ToggleCrosshair ( unsigned long bToggle );
	void ResetAmmoDisplay ( );
	void UpdateVehicleMagCount ( class AR_VehicleWeapon* VehicleWeapon );
	void UpdateVehicleAmmoCount ( class AR_VehicleWeapon* VehicleWeapon );
	void ShowSecondaryAmmo ( unsigned long bShow );
	void ShowPrimaryAmmo ( unsigned long bShow );
	void ShowPlayerHealth ( unsigned long bShow );
	void UpdateVehicleHealthBar ( class AUTVehicle* UTV );
	void DrawVehicleOccupants ( class AR_Vehicle* rVeh );
	void UpdateCaptureIndicator ( int Team, float Amount );
	void TickHud ( float DeltaTime );
	void UpdateGameHUD ( class AUTPlayerReplicationInfo* PRI );
	void RemoveMessage ( );
	void ClearStats ( unsigned long clearScores );
	struct FString FormatTime ( int Seconds );
	void Init ( class ULocalPlayer* Player );
	void FlagSelectTest ( struct FEventData ev );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UR_GFxHUD::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_Seat_Horn
// 0x0004 (0x0748 - 0x0744)
class AR_VWeap_Seat_Horn : public AR_VehicleWeapon
{
public:
	float                                              LastHornTime;                                     		// 0x0744 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83192 ];

		return pClassPointer;
	};

	void ServerPlayHorn ( );
	void ServerSetMouseSteering ( unsigned long bMouseSteering );
	void StartFire ( unsigned char FireModeNum );
	void EndFire ( unsigned char FireModeNum );
	void DrawWeaponCrosshair ( class AHUD* HUD );
};

UClass* AR_VWeap_Seat_Horn::pClassPointer = NULL;

// Class RavagedGame.R_GFxSpawnMenu
// 0x0240 (0x03A8 - 0x0168)
class UR_GFxSpawnMenu : public UGFxMoviePlayer
{
public:
	struct FString                                     LDeployButtonLabel;                               		// 0x0168 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LDeployButtonLabel2;                              		// 0x0174 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LDeployButtonLabel3;                              		// 0x0180 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LSpectateLabel;                                   		// 0x018C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LJoinGameLabel;                                   		// 0x0198 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LChangeTeamLabel;                                 		// 0x01A4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LSuicideLabel;                                    		// 0x01B0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LThe;                                             		// 0x01BC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LPlayAs;                                          		// 0x01C8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LResistance;                                      		// 0x01D4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LScavengers;                                      		// 0x01E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UGFxClikWidget*                              Class_Button;                                     		// 0x01EC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              Class_Button01;                                   		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              Class_Button02;                                   		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              Class_Button03;                                   		// 0x01F8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              Class_Button04;                                   		// 0x01FC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PrimaryWeaponButtonMC;                            		// 0x0200 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SecondaryWeaponButtonMC;                          		// 0x0204 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MeleeWeaponButtonMC;                              		// 0x0208 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ThrowableWeaponButtonMC;                          		// 0x020C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              PrimaryWeaponImage;                               		// 0x0210 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SecondaryWeaponImage;                             		// 0x0214 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MeleeWeaponImage;                                 		// 0x0218 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ThrowableWeaponImage;                             		// 0x021C (0x0004) [0x0000000000000000]              
	TArray< class UUTUIDataProvider_GameModeInfo* >    GameModeList;                                     		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              MapNameLabelMC;                                   		// 0x022C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              DeployButtonMC;                                   		// 0x0230 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SpectateButtonMC;                                 		// 0x0234 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              SuicideButtonMC;                                  		// 0x0238 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              DeployButtonMessageMC;                            		// 0x023C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              DeployButtonBackgroundMC;                         		// 0x0240 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ChangeTeamButtonMC;                               		// 0x0244 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              TeamNameLabelMC;                                  		// 0x0248 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ClassNameMC;                                      		// 0x024C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InspectorItemType;                                		// 0x0250 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MapInspectorMC;                                   		// 0x0254 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSpawnMenuDone : 1;                               		// 0x0258 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClassMenuVisible : 1;                            		// 0x0258 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bFirstRun : 1;                                    		// 0x0258 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSuppressClassChangeEvents : 1;                   		// 0x0258 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	class AR_PlayerController*                         rController;                                      		// 0x025C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  teamClasses;                                      		// 0x0260 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  primaryWeaponList;                                		// 0x0264 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  secondaryWeaponList;                              		// 0x0268 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  meleeWeaponList;                                  		// 0x026C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  throwableWeaponList;                              		// 0x0270 (0x0004) [0x0000000000000000]              
	TArray< class UClass* >                            PrimaryWeapons;                                   		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            SecondaryWeapons;                                 		// 0x0280 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            MeleeWeapons;                                     		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UClass* >                            ThrowableWeapons;                                 		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              CharImage;                                        		// 0x02A4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              itemListMC;                                       		// 0x02A8 (0x0004) [0x0000000000000000]              
	int                                                SelectedClassIdx;                                 		// 0x02AC (0x0004) [0x0000000000000000]              
	int                                                SelectedPrimaryIdx;                               		// 0x02B0 (0x0004) [0x0000000000000000]              
	int                                                SelectedSecondaryIdx;                             		// 0x02B4 (0x0004) [0x0000000000000000]              
	int                                                SelectedMeleeIdx;                                 		// 0x02B8 (0x0004) [0x0000000000000000]              
	int                                                SelectedThrowableIdx;                             		// 0x02BC (0x0004) [0x0000000000000000]              
	int                                                CurrentTeam;                                      		// 0x02C0 (0x0004) [0x0000000000000000]              
	class AWorldInfo*                                  ThisWorld;                                        		// 0x02C4 (0x0004) [0x0000000000000000]              
	class AGameInfo*                                   ThisGame;                                         		// 0x02C8 (0x0004) [0x0000000000000000]              
	class UUTMapInfo*                                  ThisMap;                                          		// 0x02CC (0x0004) [0x0000000000000000]              
	class AUTGameReplicationInfo*                      GRI;                                              		// 0x02D0 (0x0004) [0x0000000000000000]              
	float                                              ScrollListBuffer;                                 		// 0x02D4 (0x0004) [0x0000000000000000]              
	TArray< unsigned long >                            ClassStatus;                                      		// 0x02D8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      ItemPnlWeaponType;                                		// 0x02E4 (0x0001) [0x0000000000000000]              
	struct FClassLoadOutsSelections                    TeamLoadOutSelections[ 0x2 ];                     		// 0x02E8 (0x00A0) [0x0000000000000000]              
	int                                                LastSelectedTeamClassIdx[ 0x2 ];                  		// 0x0388 (0x0008) [0x0000000000000000]              
	class UR_GFxSpawnMenuMap*                          SpawnMap;                                         		// 0x0390 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0394 (0x0004) [0x0000000000000000]              
	float                                              CurZoomf;                                         		// 0x0398 (0x0004) [0x0000000000000000]              
	float                                              NormalZoomf;                                      		// 0x039C (0x0004) [0x0000000000000000]              
	float                                              MaxZoomf;                                         		// 0x03A0 (0x0004) [0x0000000000000000]              
	float                                              MinZoomf;                                         		// 0x03A4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83287 ];

		return pClassPointer;
	};

	void UpdateSelectedWeaponImage ( int Idx );
	void UpdateSelectedWeapon ( struct FEventData ev );
	void HideWeaponList ( );
	void ShowWeaponsList ( TArray< class UClass* > rWeapClasses );
	void ShowThrowableWeaponList ( struct FEventData ev );
	void ShowMeleeWeaponList ( struct FEventData ev );
	void ShowSecondaryWeaponList ( struct FEventData ev );
	void ShowPrimaryWeaponList ( struct FEventData ev );
	void SpawnWidgetPressed ( struct FEventData ev );
	void registerSpawnMapView ( class UR_GFxSpawnMenuMap* MC, float R );
	void QuitPress ( struct FEventData ev );
	void StatsPress ( struct FEventData ev );
	void LoadoutPress ( struct FEventData ev );
	void MapPress ( struct FEventData ev );
	void AddCaptureKeys ( );
	void toggleSpawnMenu ( struct FEventData ev );
	void SetSpawnMenuVisibility ( unsigned long bIsVis );
	void ASShowCursor ( unsigned long bShowCursor );
	void ASDebug ( struct FString Message );
	void FinalizeChangeClass ( );
	void SaveCurrentLoadoutSelection ( int curTeam, int curClass );
	void changeViewBtnPressed ( );
	void SpawnMenuMinimized ( unsigned long bIsMin );
	void nextObjectiveBtnPressed ( );
	void spawnAtBaseBtnPressed ( );
	void spawnUpFrontBtnPressed ( );
	void SpectateButtonPressed ( struct FEventData ev );
	void SuicideButtonPressed ( struct FEventData ev );
	void DeployButtonPressed ( );
	void CollectClassData ( );
	void UpdateCurrentLoadoutSelection ( );
	void TogglePlayerClass ( int classIdx );
	void SetThrowableWeapon ( float WeapIdx );
	void ShowThrowableWeapons ( TArray< class UClass* > rWeapClasses );
	void PopulateThrowableWeapons ( TArray< struct FString > throwNames );
	void SetMeleeWeapon ( float WeapIdx );
	void ShowMeleeWeapons ( TArray< class UClass* > rWeapClasses );
	void PopulateMeleeWeapons ( TArray< struct FString > meleeNames );
	void SetSecondaryWeapon ( float WeapIdx );
	void ShowSecondaryWeapons ( TArray< class UClass* > rWeapClasses );
	void PopulateSecondaryWeapons ( TArray< struct FString > secondaryNames );
	void SetPrimaryWeapon ( float WeapIdx );
	void ShowPrimaryWeapons ( TArray< class UClass* > rWeapClasses );
	void PopulatePrimaryWeapons ( TArray< struct FString > primaryNames );
	void selectedClassChanged ( float fClassIdx );
	void UpdateClassPortrait ( int nTeam, int newClassIdx );
	void SetPlayerClass ( float classIdx );
	void RequestTeam ( int currentTeamNum );
	void ASSetTeam ( int TeamNum );
	void UpdateTeamSizes ( );
	void UpdateSelectedSpawnHealth ( int ItemHealth );
	void UpdateSelectedSpawnDescription ( struct FString SpawnDesc );
	void UpdateSelectedSpawnInspector ( class UTexture* ImageTexture, struct FString SpawnType, int ItemHealth );
	void SetTeam ( int TeamNum );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool Start ( unsigned long StartPaused );
};

UClass* UR_GFxSpawnMenu::pClassPointer = NULL;

// Class RavagedGame.R_GFxSpawnMenuMap
// 0x00F4 (0x016C - 0x0078)
class UR_GFxSpawnMenuMap : public UGFxObject
{
public:
	class UR_GFxSpawnMenu*                             HUD;                                              		// 0x0078 (0x0004) [0x0000000000000000]              
	class AWorldInfo*                                  ThisWorld;                                        		// 0x007C (0x0004) [0x0000000000000000]              
	class UUTMapInfo*                                  MapInfo;                                          		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                MapTexSize;                                       		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              SpawnMapSize;                                     		// 0x0088 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNeedsUpdateData : 1;                             		// 0x008C (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  PlayerIcon;                                       		// 0x0090 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  MapMC;                                            		// 0x0094 (0x0004) [0x0000000000000000]              
	TArray< class UGFxObject* >                        EnemyIcons;                                       		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        MyTeamIcons;                                      		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        FlagIcons;                                        		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        SpawnPointIcons;                                  		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        ObjectiveIcons;                                   		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned long >                            SpawnPointNotPlaying;                             		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMatrix                                     IconMatrix;                                       		// 0x00E0 (0x0040) [0x0000000000000000]              
	class UGFxObject*                                  IconsRedMC;                                       		// 0x0120 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  IconsBlueMC;                                      		// 0x0124 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  IconsFlagMC;                                      		// 0x0128 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  IconSpawn;                                        		// 0x012C (0x0004) [0x0000000000000000]              
	int                                                IconsRedCount;                                    		// 0x0130 (0x0004) [0x0000000000000000]              
	int                                                IconsBlueCount;                                   		// 0x0134 (0x0004) [0x0000000000000000]              
	int                                                IconsFlagCount;                                   		// 0x0138 (0x0004) [0x0000000000000000]              
	int                                                WidgetCount;                                      		// 0x013C (0x0004) [0x0000000000000000]              
	int                                                bShowDebugCount;                                  		// 0x0140 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BlinkTimeCount;                                   		// 0x0144 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BlinkRate;                                        		// 0x0148 (0x0004) [0x0000000000000000]              
	int                                                SpawnPointPlaying;                                		// 0x014C (0x0004) [0x0000000000000000]              
	TArray< class AUTGameObjective* >                  Objectives;                                       		// 0x0150 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSpawnPointActor >                  SpawnPoints;                                      		// 0x015C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedSpawnPointIdx;                            		// 0x0168 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83306 ];

		return pClassPointer;
	};

	void Update ( float DeltaTime );
	void UpdateIcons ( unsigned long bIsRedIconType, TArray< class AActor* >* Actors, TArray< class UGFxObject* >* ActorIcons );
	TArray< class UGFxObject* > GenFlagIcons ( int N );
	TArray< class UGFxObject* > GenEnemyIcons ( int N );
	TArray< class UGFxObject* > GenFriendIcons ( int N );
	TArray< class UGFxObject* > GenSpawnIcons ( int N );
	void UpdateData ( );
	void Init ( class UR_GFxSpawnMenu* H );
	void SetCurrentSpawn ( class AActor* SelectedSpawn );
	void WidgetPressed ( class UGFxObject* Widget );
	void UpdateSpawnPoints ( TArray< class AR_Thrust_ControlPoint* >* spawnObjs, TArray< class AR_Vehicle* >* spawnVehs );
};

UClass* UR_GFxSpawnMenuMap::pClassPointer = NULL;

// Class RavagedGame.R_GFxUILeaderboard
// 0x0090 (0x0204 - 0x0174)
class UR_GFxUILeaderboard : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  LeaderboardMC;                                    		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  OverlayMC;                                        		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleMC;                                          		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListMC;                                           		// 0x0184 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CountMC;                                          		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CountTF;                                          		// 0x018C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Title_TitleGMC;                                   		// 0x0190 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleTF;                                          		// 0x0194 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleGMC;                                         		// 0x0198 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListHeaderMC;                                     		// 0x019C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListScoreTF;                                      		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ListTitleTF;                                      		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FooterMC;                                         		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FooterItemMC;                                     		// 0x01AC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlayerRow;                                        		// 0x01B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayerRowTween : 1;                              		// 0x01B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInitialized : 1;                                 		// 0x01B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bResolvingLocalPlayer : 1;                        		// 0x01B4 (0x0004) [0x0000000000000000] [0x00000004] 
	class UGFxObject*                                  Footer_NameTF;                                    		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreLabelTF;                              		// 0x01BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_KillsTF;                                   		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_DeathsTF;                                  		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreTF;                                   		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_RankLabelTF;                               		// 0x01CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_RankTF;                                    		// 0x01D0 (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxUILeaderboard_FListRow >      ListItems;                                        		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LeaderboardReadCount;                             		// 0x01E0 (0x0004) [0x0000000000000000]              
	TArray< struct UR_GFxUILeaderboard_FUILeaderboardEntry > LeaderboardData;                                  		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineStatsInterface*                       OSI;                                              		// 0x01F0 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x01F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UR_LeaderboardScoreRead*                     LeaderboardStatsRead;                             		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              LastInitialReadAttempt;                           		// 0x01FC (0x0004) [0x0000000000000000]              
	int                                                ReadAttemptCount;                                 		// 0x0200 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83699 ];

		return pClassPointer;
	};

	void ReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	void OnlineCleanup ( );
	void Tick ( float DeltaTime );
	void DoInitialLeaderboardRead ( );
	void OnlineInit ( );
	void OnOpenAnimComplete ( );
	void OnCloseAnimComplete ( );
	void ProcessTweenCallback ( struct FString Callback, class UGFxObject* TargetMC );
	void TweenPlayerRow ( class UGFxObject* RowMC );
	void FloatLeaderboardAnimationY ( unsigned long Direction );
	void FloatLeaderboardAnimationX ( unsigned long Direction );
	void UpdateFooter ( struct UR_GFxUILeaderboard_FUILeaderboardEntry FooterData );
	void UpdateHeaders ( );
	void SetPlayerRow ( class UGFxObject* UpdatedPlayerRow );
	void UpdateRow ( struct UR_GFxUILeaderboard_FListRow CurRow, struct UR_GFxUILeaderboard_FUILeaderboardEntry CurData );
	void UpdateLeaderboardLists ( );
	void Draw ( );
	void SetupList ( );
	void ConfigLeaderboard ( );
	void PlayCloseAnimation ( );
	void PlayOpenAnimation ( );
	bool Start ( unsigned long StartPaused );
};

UClass* UR_GFxUILeaderboard::pClassPointer = NULL;

// Class RavagedGame.R_GFxUIScoreboard
// 0x1398 (0x150C - 0x0174)
class UR_GFxUIScoreboard : public UUTGFxTweenableMoviePlayer
{
public:
	class UGFxObject*                                  RootMC;                                           		// 0x0174 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreboardMC;                                     		// 0x0178 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  OverlayMC;                                        		// 0x017C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleMC;                                          		// 0x0180 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlueTeamMC;                                       		// 0x0184 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RedTeamMC;                                        		// 0x0188 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimeMC;                                           		// 0x018C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TimeTF;                                           		// 0x0190 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Title_TitleGMC;                                   		// 0x0194 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleTF;                                          		// 0x0198 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TitleGMC;                                         		// 0x019C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SelectionBoxMC;                                   		// 0x01A0 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ScoreboardItemMC;                                 		// 0x01A4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              KickButtonMC;                                     		// 0x01A8 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              InviteButtonMC;                                   		// 0x01AC (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              MuteButtonMC;                                     		// 0x01B0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlueHeaderMC;                                     		// 0x01B4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlueScoreTF;                                      		// 0x01B8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BlueTitleTF;                                      		// 0x01BC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RedHeaderMC;                                      		// 0x01C0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RedScoreTF;                                       		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RedTitleTF;                                       		// 0x01C8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  victoryTitleMC;                                   		// 0x01CC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  victoryTitleTF;                                   		// 0x01D0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  victoryTitleShadowTF;                             		// 0x01D4 (0x0004) [0x0000000000000000]              
	TArray< class UGFxClikWidget* >                    ListButtons;                                      		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxClikWidget*                              RedListMC;                                        		// 0x01E4 (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              BlueListMC;                                       		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DataProvider;                                     		// 0x01EC (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FooterMC;                                         		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  FooterItemMC;                                     		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  BackgroundMC;                                     		// 0x01F8 (0x0004) [0x0000000000000000]              
	int                                                SelectedPlayer;                                   		// 0x01FC (0x0004) [0x0000000000000000]              
	class AR_PlayerReplicationInfo*                    SelectedPlayerPRI;                                		// 0x0200 (0x0004) [0x0000000000000000]              
	unsigned char                                      RedTeamIndex;                                     		// 0x0204 (0x0001) [0x0000000000000000]              
	unsigned char                                      BlueTeamIndex;                                    		// 0x0205 (0x0001) [0x0000000000000000]              
	class UGFxObject*                                  PlayerRow;                                        		// 0x0208 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayerRowTween : 1;                              		// 0x020C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBackgroundShowing : 1;                           		// 0x020C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTeamGame : 1;                                    		// 0x020C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEndMatch : 1;                                    		// 0x020C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bInitialized : 1;                                 		// 0x020C (0x0004) [0x0000000000000000] [0x00000010] 
	struct FrScoreEntry                                RedEntries[ 0x20 ];                               		// 0x0210 (0x0900) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FrScoreEntry                                BlueEntries[ 0x20 ];                              		// 0x0B10 (0x0900) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct UR_GFxUIScoreboard_FScoreboardState         PreviousState;                                    		// 0x1410 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FrScoreRow >                        BlueItems;                                        		// 0x1458 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FrScoreRow >                        RedItems;                                         		// 0x1464 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NameCnt;                                          		// 0x1470 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UGFxObject*                                  Footer_NameTF;                                    		// 0x1474 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_PlaceLabelTF;                              		// 0x1478 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_PlaceTF;                                   		// 0x147C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreLabelTF;                              		// 0x1480 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_ScoreTF;                                   		// 0x1484 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_DeathsLabelTF;                             		// 0x1488 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  Footer_DeathsTF;                                  		// 0x148C (0x0004) [0x0000000000000000]              
	class UGFxClikWidget*                              ScavengerBGMC;                                    		// 0x1490 (0x0004) [0x0000000000000000]              
	struct FString                                     LResistance;                                      		// 0x1494 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LScavengers;                                      		// 0x14A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lResistanceWins;                                  		// 0x14AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lScavengersWin;                                   		// 0x14B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lKick;                                            		// 0x14C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lMute;                                            		// 0x14D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lInvite;                                          		// 0x14DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LPlayer;                                          		// 0x14E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lScore;                                           		// 0x14F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     lDraw;                                            		// 0x1500 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 83808 ];

		return pClassPointer;
	};

	struct FString GetTimeOnline ( class AUTPlayerReplicationInfo* PRI );
	bool IsValidScoreboardPlayer ( class AUTPlayerReplicationInfo* PRI );
	void ProcessTweenCallback ( struct FString Callback, class UGFxObject* TargetMC );
	void TweenPlayerRow ( class UGFxObject* RowMC );
	void FloatScoreboardAnimationY ( unsigned long Direction );
	void FloatScoreboardAnimationX ( unsigned long Direction );
	void ShowBackground ( unsigned long bShow );
	void UpdateFooter ( class AUTGameReplicationInfo* GRI, class AUTPlayerReplicationInfo* LocalPlayerPRI, unsigned char PRIIndex );
	void UpdateHeaders ( class AUTGameReplicationInfo* GRI );
	struct FString FormatTime ( int Seconds );
	void UpdatePreviousState ( class AUTGameReplicationInfo* GRI );
	void SetPlayerRow ( class UGFxObject* UpdatedPlayerRow );
	void Tick ( float DeltaTime );
	void UpdateRow ( struct FrScoreRow ThisRow, class AR_PlayerReplicationInfo* ThisPRI, int PlayerCount, struct FrScoreEntry* ThisEntry );
	void ClearRow ( struct FrScoreRow ThisRow );
	void UpdatePRILists ( class AUTGameReplicationInfo* GRI );
	void Draw ( );
	void SetupRedTeam ( );
	void SetupBlueTeam ( );
	void ConfigScoreboard ( );
	void PlayCloseAnimation ( );
	void InvitePlayer ( struct FEventData ev );
	void MutePlayer ( struct FEventData ev );
	void KickPlayer ( struct FEventData ev );
	void BluePlayerSelected ( struct FEventData ev );
	void RedPlayerSelected ( struct FEventData ev );
	void PlayOpenAnimation ( );
	void SetList ( class UGFxClikWidget* InList );
	bool Start ( unsigned long StartPaused );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
};

UClass* UR_GFxUIScoreboard::pClassPointer = NULL;

// Class RavagedGame.R_Message_Timer
// 0x0000 (0x0070 - 0x0070)
class UR_Message_Timer : public UUTTimerMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84086 ];

		return pClassPointer;
	};

};

UClass* UR_Message_Timer::pClassPointer = NULL;

// Class RavagedGame.R_HandGrenadeEffects
// 0x0000 (0x0220 - 0x0220)
class AR_HandGrenadeEffects : public AR_ExplosionEffects
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84182 ];

		return pClassPointer;
	};

};

UClass* AR_HandGrenadeEffects::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Pad
// 0x0024 (0x02FC - 0x02D8)
class AR_Vehicle_Pad : public AR_Supply_Object
{
public:
	class UStaticMeshComponent*                        PadMesh;                                          		// 0x02D8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UClass*                                      VehicleBaseClass;                                 		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            VehicleClasses;                                   		// 0x02E0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              HealthRegenRate;                                  		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AmmoRegenRate;                                    		// 0x02F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectRadius;                                     		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      HealClass;                                        		// 0x02F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84185 ];

		return pClassPointer;
	};

	void RegenVehicle ( class AR_Vehicle* veh, float DT );
	bool CheckPawns ( );
};

UClass* AR_Vehicle_Pad::pClassPointer = NULL;

// Class RavagedGame.R_Heli_Pad
// 0x0000 (0x02FC - 0x02FC)
class AR_Heli_Pad : public AR_Vehicle_Pad
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84215 ];

		return pClassPointer;
	};

};

UClass* AR_Heli_Pad::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Helicopter
// 0x0018 (0x0D48 - 0x0D30)
class AR_Vehicle_Helicopter : public AR_Vehicle_Air
{
public:
	TArray< int >                                      JetEffectIndices;                                 		// 0x0D30 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UUTSkelControl_JetThruster*                  JetControl;                                       		// 0x0D3C (0x0004) [0x0000000000000000]              
	struct FName                                       JetScalingParam;                                  		// 0x0D40 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84218 ];

		return pClassPointer;
	};

	void IdleUpEngineTimer ( );
	void DrivingStatusChanged ( );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void SitDriver ( class AUTPawn* UTP, int SeatIndex );
	bool PassengerEnter ( class APawn* P, int SeatIndex );
	void PassengerLeave ( int SeatIndex );
	void DriverLeft ( );
	void ResetTurningSpeed ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void eventTick ( float DeltaTime );
	void PostBeginPlay ( );
	void SetAirInputParams ( float NewSensitivity, unsigned long bMousePowerCurve, unsigned long bIsServer );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
};

UClass* AR_Vehicle_Helicopter::pClassPointer = NULL;

// Class RavagedGame.R_OutOfBoundsArrowComponent
// 0x0010 (0x0264 - 0x0254)
class UR_OutOfBoundsArrowComponent : public UStaticMeshComponent
{
public:
	unsigned long                                      bActive : 1;                                      		// 0x0254 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     HUDOffset;                                        		// 0x0258 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84219 ];

		return pClassPointer;
	};

	void Update ( class APlayerController* PC );
};

UClass* UR_OutOfBoundsArrowComponent::pClassPointer = NULL;

// Class RavagedGame.R_UTGFxTeamHUD
// 0x0004 (0x039C - 0x0398)
class UR_UTGFxTeamHUD : public UR_GFxHUD
{
public:
	unsigned long                                      bGoalSet : 1;                                     		// 0x0398 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasResource : 1;                                 		// 0x0398 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84480 ];

		return pClassPointer;
	};

	struct FString GetRank ( class APlayerReplicationInfo* PRI );
	void UpdateGameHUD ( class AUTPlayerReplicationInfo* PRI );
};

UClass* UR_UTGFxTeamHUD::pClassPointer = NULL;

// Class RavagedGame.R_MusicManager
// 0x0000 (0x0218 - 0x0218)
class AR_MusicManager : public AUTMusicManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84481 ];

		return pClassPointer;
	};

	void ChangeTrack ( unsigned char NewState );
	void Tick ( float DeltaTime );
	void ProcessMusicEvent ( );
	void MusicEvent ( int NewEventIndex );
	class UAudioComponent* CreateNewTrack ( class USoundCue* MusicCue );
	void IntroFinished ( class UAudioComponent* AC );
	void StartMusic ( );
	void eventPostBeginPlay ( );
};

UClass* AR_MusicManager::pClassPointer = NULL;

// Class RavagedGame.R_InventoryItem_Ammo
// 0x0000 (0x0218 - 0x0218)
class AR_InventoryItem_Ammo : public AUTInventory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84531 ];

		return pClassPointer;
	};

};

UClass* AR_InventoryItem_Ammo::pClassPointer = NULL;

// Class RavagedGame.R_InventoryItem_Ammo_MagWeap
// 0x0000 (0x0218 - 0x0218)
class AR_InventoryItem_Ammo_MagWeap : public AR_InventoryItem_Ammo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84533 ];

		return pClassPointer;
	};

};

UClass* AR_InventoryItem_Ammo_MagWeap::pClassPointer = NULL;

// Class RavagedGame.R_LeaderboardDataRead
// 0x0000 (0x0088 - 0x0088)
class UR_LeaderboardDataRead : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84586 ];

		return pClassPointer;
	};

	int GetData ( struct FUniqueNetId Player );
};

UClass* UR_LeaderboardDataRead::pClassPointer = NULL;

// Class RavagedGame.R_MapExtentVolume
// 0x0000 (0x01F4 - 0x01F4)
class AR_MapExtentVolume : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84607 ];

		return pClassPointer;
	};

	bool GetCenterAndEdgeSize ( struct FVector* VolumeCenter, float* LargestEdge );
};

UClass* AR_MapExtentVolume::pClassPointer = NULL;

// Class RavagedGame.R_Melee_Animation_Info
// 0x0028 (0x0064 - 0x003C)
class UR_Melee_Animation_Info : public UObject
{
public:
	struct FName                                       AnimName;                                         		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeScale;                                        		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TotalSwingTime;                                   		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              WindupTime;                                       		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectiveSwingTime;                               		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CheckHitTimePeriod;                               		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FVector >                           LocalPositions;                                   		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84653 ];

		return pClassPointer;
	};

};

UClass* UR_Melee_Animation_Info::pClassPointer = NULL;

// Class RavagedGame.R_Message_CombatZone
// 0x0030 (0x0094 - 0x0064)
class UR_Message_CombatZone : public UUTLocalMessage
{
public:
	struct FString                                     MessageString[ 0x3 ];                             		// 0x0064 (0x0024) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class USoundNodeWave*                              MessageSounds[ 0x3 ];                             		// 0x0088 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84663 ];

		return pClassPointer;
	};

	class USoundNodeWave* AnnouncementSound ( int MessageIndex, class UObject* OptionalObject, class APlayerController* PC );
	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetString ( int Switch, unsigned long bPRI1HUD, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
};

UClass* UR_Message_CombatZone::pClassPointer = NULL;

// Class RavagedGame.R_Message_MatchAchievement
// 0x0090 (0x00F4 - 0x0064)
class UR_Message_MatchAchievement : public UUTLocalMessage
{
public:
	struct FString                                     RewardString[ 0x6 ];                              		// 0x0064 (0x0048) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     RewardPost[ 0x6 ];                                		// 0x00AC (0x0048) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84767 ];

		return pClassPointer;
	};

	void ClientReceive ( class APlayerController* P, int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01, class UObject* OptionalObject );
	struct FString GetCustomString ( int Switch, class APlayerReplicationInfo* RelatedPRI, struct FString StatStr );
};

UClass* UR_Message_MatchAchievement::pClassPointer = NULL;

// Class RavagedGame.R_PhysicalMaterialPropertyBase
// 0x0000 (0x0044 - 0x0044)
class UR_PhysicalMaterialPropertyBase : public UUTPhysicalMaterialProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 85685 ];

		return pClassPointer;
	};

};

UClass* UR_PhysicalMaterialPropertyBase::pClassPointer = NULL;

// Class RavagedGame.R_PickupFactory_AssaultRifle
// 0x0000 (0x039C - 0x039C)
class AR_PickupFactory_AssaultRifle : public AUTPowerupPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 85687 ];

		return pClassPointer;
	};

};

UClass* AR_PickupFactory_AssaultRifle::pClassPointer = NULL;

// Class RavagedGame.R_PickupFactory_SniperRifle
// 0x0000 (0x039C - 0x039C)
class AR_PickupFactory_SniperRifle : public AUTPowerupPickupFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 85693 ];

		return pClassPointer;
	};

};

UClass* AR_PickupFactory_SniperRifle::pClassPointer = NULL;

// Class RavagedGame.R_Player_Attribute_Modifier
// 0x0018 (0x0054 - 0x003C)
class UR_Player_Attribute_Modifier : public UObject
{
public:
	float                                              HealthBonus;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              HealthMaxBonus;                                   		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              GroundSpeedBonus;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              WaterSpeedBonus;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              AirSpeedBonus;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              JumpZBonus;                                       		// 0x0050 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 85699 ];

		return pClassPointer;
	};

	void ApplyModifiersToPawn ( class AR_Pawn* RP );
};

UClass* UR_Player_Attribute_Modifier::pClassPointer = NULL;

// Class RavagedGame.R_VehicleCantCarryResourceMessage
// 0x0000 (0x0074 - 0x0074)
class UR_VehicleCantCarryResourceMessage : public UUTVehicleCantCarryFlagMessage
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86149 ];

		return pClassPointer;
	};

};

UClass* UR_VehicleCantCarryResourceMessage::pClassPointer = NULL;

// Class RavagedGame.R_PlayerInput_Spectator
// 0x0000 (0x04C4 - 0x04C4)
class UR_PlayerInput_Spectator : public UR_PlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86314 ];

		return pClassPointer;
	};

	void NextWeapon ( );
	void PrevWeapon ( );
	void reload ( );
	void Use ( );
	void NextCamSpeed ( );
	void UnSprint ( );
	void Sprint ( );
	void ToggleViewCPs ( );
};

UClass* UR_PlayerInput_Spectator::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Arrow
// 0x0000 (0x02C4 - 0x02C4)
class AR_Proj_Arrow : public AR_Projectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86436 ];

		return pClassPointer;
	};

	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

UClass* AR_Proj_Arrow::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Cleaver
// 0x0000 (0x02C4 - 0x02C4)
class AR_Proj_Cleaver : public AR_Projectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86454 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_Cleaver::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Crossbow
// 0x0000 (0x02C4 - 0x02C4)
class AR_Proj_Crossbow : public AR_Projectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86458 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_Crossbow::pClassPointer = NULL;

// Class RavagedGame.R_Proj_FastAndFalls
// 0x0010 (0x02D4 - 0x02C4)
class AR_Proj_FastAndFalls : public AR_Projectile
{
public:
	unsigned long                                      bPostExplode : 1;                                 		// 0x02C4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	float                                              DropAmount;                                       		// 0x02C8 (0x0004) [0x0000000000000000]              
	float                                              FlightTimeAccumulation;                           		// 0x02CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DropFrequency;                                    		// 0x02D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86462 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Tick ( float DeltaTime );
};

UClass* AR_Proj_FastAndFalls::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Throwable
// 0x0018 (0x02DC - 0x02C4)
class AR_Proj_Throwable : public AR_Projectile
{
public:
	unsigned long                                      bExplodeOnPawnTouch : 1;                          		// 0x02C4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExplodeOnAnyImpact : 1;                          		// 0x02C4 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              BounceAmount;                                     		// 0x02C8 (0x0004) [0x0000000000000000]              
	float                                              SlowZBounce;                                      		// 0x02CC (0x0004) [0x0000000000000000]              
	float                                              SlowZBounceAmount;                                		// 0x02D0 (0x0004) [0x0000000000000000]              
	float                                              StartSpin;                                        		// 0x02D4 (0x0004) [0x0000000000000000]              
	float                                              WaterVelocityFactor;                              		// 0x02D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86474 ];

		return pClassPointer;
	};

	void PhysicsVolumeChange ( class APhysicsVolume* NewVolume );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void Init ( struct FVector Direction );
	void PostBeginPlay ( );
};

UClass* AR_Proj_Throwable::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Fused
// 0x0000 (0x02DC - 0x02DC)
class AR_Proj_Fused : public AR_Proj_Throwable
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86493 ];

		return pClassPointer;
	};

	void ExplodeTimer ( );
	void InitThrown ( float ChargeRemaining );
};

UClass* AR_Proj_Fused::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Gknife
// 0x0000 (0x02C4 - 0x02C4)
class AR_Proj_Gknife : public AR_Projectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86499 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_Gknife::pClassPointer = NULL;

// Class RavagedGame.R_Proj_GrenadeLauncher
// 0x0000 (0x02C4 - 0x02C4)
class AR_Proj_GrenadeLauncher : public AR_Projectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86503 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_GrenadeLauncher::pClassPointer = NULL;

// Class RavagedGame.R_RocketEffects
// 0x0000 (0x0220 - 0x0220)
class AR_RocketEffects : public AR_ExplosionEffects
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86506 ];

		return pClassPointer;
	};

};

UClass* AR_RocketEffects::pClassPointer = NULL;

// Class RavagedGame.R_Proj_GrenadeLauncher_M19
// 0x0000 (0x02C4 - 0x02C4)
class AR_Proj_GrenadeLauncher_M19 : public AR_Projectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86510 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_GrenadeLauncher_M19::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Harpoon
// 0x0000 (0x02C4 - 0x02C4)
class AR_Proj_Harpoon : public AR_Projectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86513 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_Harpoon::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Rocket
// 0x0034 (0x02F8 - 0x02C4)
class AR_Proj_Rocket : public AR_Projectile
{
public:
	unsigned long                                      bSquirlyFlightPath : 1;                           		// 0x02C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLastSquirlyWasUp : 1;                            		// 0x02C4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bLastSquirlyWasLeft : 1;                          		// 0x02C4 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bNotFirstUp : 1;                                  		// 0x02C4 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bNotFirstSideways : 1;                            		// 0x02C4 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	float                                              MaxYSquirlyness;                                  		// 0x02C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxXSquirlyness;                                  		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SquirlynessUpdatePeriod;                          		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Sideways;                                         		// 0x02D4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Forward;                                          		// 0x02E0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Up;                                               		// 0x02EC (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86516 ];

		return pClassPointer;
	};

	void UpdateSquirlyPath ( );
	void PostBeginPlay ( );
};

UClass* AR_Proj_Rocket::pClassPointer = NULL;

// Class RavagedGame.R_Proj_LAW
// 0x0000 (0x02F8 - 0x02F8)
class AR_Proj_LAW : public AR_Proj_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86534 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_LAW::pClassPointer = NULL;

// Class RavagedGame.R_Proj_M26Grenade
// 0x0000 (0x02DC - 0x02DC)
class AR_Proj_M26Grenade : public AR_Proj_Fused
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86537 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_M26Grenade::pClassPointer = NULL;

// Class RavagedGame.R_Proj_M79
// 0x0000 (0x02C4 - 0x02C4)
class AR_Proj_M79 : public AR_Projectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86541 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_M79::pClassPointer = NULL;

// Class RavagedGame.R_Proj_PodRocket
// 0x0000 (0x02F8 - 0x02F8)
class AR_Proj_PodRocket : public AR_Proj_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86544 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_PodRocket::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Proximity_Rocket
// 0x0040 (0x0338 - 0x02F8)
class AR_Proj_Proximity_Rocket : public AR_Proj_Rocket
{
public:
	float                                              ArmingDistSqStart;                                		// 0x02F8 (0x0004) [0x0000000000000000]              
	float                                              ArmingDistSqEnd;                                  		// 0x02FC (0x0004) [0x0000000000000000]              
	float                                              ArmingRampTravelSqStart;                          		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              ArmingRampTravelSqEnd;                            		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              CurrentArmingDistSq;                              		// 0x0308 (0x0004) [0x0000000000000000]              
	struct FVector                                     StartPos;                                         		// 0x030C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class APawn*                                       ArmedToVehicle;                                   		// 0x0318 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastArmedDistSq;                                  		// 0x031C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              AutoDetonateDistSq;                               		// 0x0320 (0x0004) [0x0000000000000000]              
	float                                              SlowTimerPeriod;                                  		// 0x0324 (0x0004) [0x0000000000000000]              
	float                                              GeneralAreaMinDist;                               		// 0x0328 (0x0004) [0x0000000000000000]              
	float                                              FastTimerPeriod;                                  		// 0x032C (0x0004) [0x0000000000000000]              
	unsigned long                                      bFastTimer : 1;                                   		// 0x0330 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	class UClass*                                      VehicleTargetClass;                               		// 0x0334 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86547 ];

		return pClassPointer;
	};

	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void VehicleCheckTimer ( );
	void PostBeginPlay ( );
};

UClass* AR_Proj_Proximity_Rocket::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Stinger
// 0x0000 (0x0338 - 0x0338)
class AR_Proj_Stinger : public AR_Proj_Proximity_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86580 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_Stinger::pClassPointer = NULL;

// Class RavagedGame.R_Proj_PodRocketStinger
// 0x0000 (0x0338 - 0x0338)
class AR_Proj_PodRocketStinger : public AR_Proj_Stinger
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86584 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_PodRocketStinger::pClassPointer = NULL;

// Class RavagedGame.R_Proj_RocketArtillery
// 0x0000 (0x02F8 - 0x02F8)
class AR_Proj_RocketArtillery : public AR_Proj_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86587 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_RocketArtillery::pClassPointer = NULL;

// Class RavagedGame.R_RocketEffects_Artillery
// 0x0000 (0x0220 - 0x0220)
class AR_RocketEffects_Artillery : public AR_ExplosionEffects
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86590 ];

		return pClassPointer;
	};

};

UClass* AR_RocketEffects_Artillery::pClassPointer = NULL;

// Class RavagedGame.R_Proj_RPG
// 0x0000 (0x02F8 - 0x02F8)
class AR_Proj_RPG : public AR_Proj_Rocket
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86593 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_RPG::pClassPointer = NULL;

// Class RavagedGame.R_Proj_SodaBomb
// 0x0000 (0x02DC - 0x02DC)
class AR_Proj_SodaBomb : public AR_Proj_Fused
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86596 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_SodaBomb::pClassPointer = NULL;

// Class RavagedGame.R_Proj_Stryker_Cannon
// 0x0000 (0x02D4 - 0x02D4)
class AR_Proj_Stryker_Cannon : public AR_Proj_FastAndFalls
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86600 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_Stryker_Cannon::pClassPointer = NULL;

// Class RavagedGame.R_Proj_TennisBallBomb
// 0x0000 (0x02DC - 0x02DC)
class AR_Proj_TennisBallBomb : public AR_Proj_Fused
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86603 ];

		return pClassPointer;
	};

};

UClass* AR_Proj_TennisBallBomb::pClassPointer = NULL;

// Class RavagedGame.R_Resource_Depot
// 0x0030 (0x0308 - 0x02D8)
class AR_Resource_Depot : public AR_Supply_Object
{
public:
	class UClass*                                      VehicleBaseClass;                                 		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UClass* >                            VehicleClasses;                                   		// 0x02DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              EffectRadiusSmall;                                		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AR_Vehicle*                                  ServicingVehicle;                                 		// 0x02EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ServicingStartTime;                               		// 0x02F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LoadAccumulation;                                 		// 0x02F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              UnLoadAccumulation;                               		// 0x02F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      LoadsVehiclesForTeam;                             		// 0x02FC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnloadsVehiclesForTeam;                           		// 0x02FD (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              LoadRate;                                         		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              UnLoadRate;                                       		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86607 ];

		return pClassPointer;
	};

	bool CheckPawns ( );
};

UClass* AR_Resource_Depot::pClassPointer = NULL;

// Class RavagedGame.R_sKillzComboTypeSuperAwesomeKill
// 0x0000 (0x0044 - 0x0044)
class UR_sKillzComboTypeSuperAwesomeKill : public UR_sKillzComboType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86660 ];

		return pClassPointer;
	};

};

UClass* UR_sKillzComboTypeSuperAwesomeKill::pClassPointer = NULL;

// Class RavagedGame.R_SquadAI
// 0x0000 (0x0294 - 0x0294)
class AR_SquadAI : public AUTSquadAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86753 ];

		return pClassPointer;
	};

};

UClass* AR_SquadAI::pClassPointer = NULL;

// Class RavagedGame.R_StaticMesh
// 0x0003 (0x01D4 - 0x01D1)
class AR_StaticMesh : public AStaticMeshActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86755 ];

		return pClassPointer;
	};

};

UClass* AR_StaticMesh::pClassPointer = NULL;

// Class RavagedGame.R_TC_SquadAI
// 0x0000 (0x0294 - 0x0294)
class AR_TC_SquadAI : public AUTSquadAI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86758 ];

		return pClassPointer;
	};

};

UClass* AR_TC_SquadAI::pClassPointer = NULL;

// Class RavagedGame.R_TracerProjectile_50Cal
// 0x0000 (0x02C4 - 0x02C4)
class AR_TracerProjectile_50Cal : public AR_TracerProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86802 ];

		return pClassPointer;
	};

};

UClass* AR_TracerProjectile_50Cal::pClassPointer = NULL;

// Class RavagedGame.R_TracerProjectile_Minigun
// 0x0000 (0x02C4 - 0x02C4)
class AR_TracerProjectile_Minigun : public AR_TracerProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86806 ];

		return pClassPointer;
	};

};

UClass* AR_TracerProjectile_Minigun::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Wheel
// 0x0000 (0x0120 - 0x0120)
class UR_Vehicle_Wheel : public UUDKVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87588 ];

		return pClassPointer;
	};

};

UClass* UR_Vehicle_Wheel::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Motorcycle
// 0x001C (0x0DD8 - 0x0DBC)
class AR_Vehicle_Motorcycle : public AR_Vehicle_Land_Leaning
{
public:
	class AUTPawn*                                     OldDriverRag;                                     		// 0x0DBC (0x0004) [0x0000000000000000]              
	float                                              SteerSpeed;                                       		// 0x0DC0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              curSteer;                                         		// 0x0DC4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FinalSteer;                                       		// 0x0DC8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                FallingDamageRagdollThreshold;                    		// 0x0DCC (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TurretBeamTemplate;                               		// 0x0DD0 (0x0004) [0x0000000000000000]              
	float                                              RagdollMinContactPenetration;                     		// 0x0DD4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87738 ];

		return pClassPointer;
	};

	void VehicleWeaponImpactEffects ( struct FVector HitLocation, int SeatIndex );
	void SitDriver ( class AUTPawn* UTP, int SeatIndex );
	void AttachDriver ( class APawn* P );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* RigidCollisionData );
	void CheckForces ( );
	void ServerSteer ( );
	void UpdateSteeringWheel ( );
	void SetInputsCycle ( float InForward, float InStrafe, float InUp, float aRoll );
	void eventTickSpecial ( float DT );
	void Timer ( );
};

UClass* AR_Vehicle_Motorcycle::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_StationaryWeapon
// 0x0000 (0x0D18 - 0x0D18)
class AR_Vehicle_StationaryWeapon : public AR_Vehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87802 ];

		return pClassPointer;
	};

};

UClass* AR_Vehicle_StationaryWeapon::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Truck_Wheel
// 0x0000 (0x0120 - 0x0120)
class UR_Vehicle_Truck_Wheel : public UR_Vehicle_Wheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87811 ];

		return pClassPointer;
	};

};

UClass* UR_Vehicle_Truck_Wheel::pClassPointer = NULL;

// Class RavagedGame.R_Vehicle_Wheel_Buggy
// 0x0000 (0x0120 - 0x0120)
class UR_Vehicle_Wheel_Buggy : public UR_Vehicle_Wheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 87813 ];

		return pClassPointer;
	};

};

UClass* UR_Vehicle_Wheel_Buggy::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_GrenadeLauncher
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_GrenadeLauncher : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88033 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_GrenadeLauncher::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_MotorCycleGun
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_MotorCycleGun : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88057 ];

		return pClassPointer;
	};

	struct FRotator GetAdjustedAim ( struct FVector StartFireLoc );
};

UClass* AR_VWeap_MotorCycleGun::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_RearMG
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_RearMG : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88068 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_RearMG::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_RocketPodStinger
// 0x0000 (0x0744 - 0x0744)
class AR_VWeap_RocketPodStinger : public AR_VehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88084 ];

		return pClassPointer;
	};

};

UClass* AR_VWeap_RocketPodStinger::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_Seat
// 0x0000 (0x066C - 0x066C)
class AR_VWeap_Seat : public AUTVehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88091 ];

		return pClassPointer;
	};

	void EndFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void DrawWeaponCrosshair ( class AHUD* HUD );
};

UClass* AR_VWeap_Seat::pClassPointer = NULL;

// Class RavagedGame.R_VWeap_Seat_Lean
// 0x0000 (0x066C - 0x066C)
class AR_VWeap_Seat_Lean : public AR_VWeap_Seat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88118 ];

		return pClassPointer;
	};

	void EndFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
};

UClass* AR_VWeap_Seat_Lean::pClassPointer = NULL;

// Class RavagedGame.R_Weap_BotRifle
// 0x0000 (0x0800 - 0x0800)
class AR_Weap_BotRifle : public AR_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88830 ];

		return pClassPointer;
	};

	unsigned char BestMode ( );
	bool RecommendRangedAttack ( );
	float GetAIRating ( );
	float SuggestDefenseStyle ( );
	float SuggestAttackStyle ( );
};

UClass* AR_Weap_BotRifle::pClassPointer = NULL;

// Class RavagedGame.R_Weap_DWRevolver
// 0x0000 (0x084C - 0x084C)
class AR_Weap_DWRevolver : public AR_Weapon_SemiAuto
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88988 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_DWRevolver::pClassPointer = NULL;

// Class RavagedGame.R_WeaponAttachment_G36C
// 0x0000 (0x02F0 - 0x02F0)
class AR_WeaponAttachment_G36C : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88998 ];

		return pClassPointer;
	};

};

UClass* AR_WeaponAttachment_G36C::pClassPointer = NULL;

// Class RavagedGame.R_Weap_M14
// 0x0000 (0x084C - 0x084C)
class AR_Weap_M14 : public AR_Weapon_MagType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89043 ];

		return pClassPointer;
	};

};

UClass* AR_Weap_M14::pClassPointer = NULL;

// Class RavagedGame.R_WeaponAttachment_HeavyAssault
// 0x0000 (0x02F0 - 0x02F0)
class AR_WeaponAttachment_HeavyAssault : public AR_WeaponAttachment_Tracer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89235 ];

		return pClassPointer;
	};

};

UClass* AR_WeaponAttachment_HeavyAssault::pClassPointer = NULL;

// Class RavagedGame.R_WeaponLocker
// 0x0000 (0x0424 - 0x0424)
class AR_WeaponLocker : public AUTWeaponLocker
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89239 ];

		return pClassPointer;
	};

};

UClass* AR_WeaponLocker::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif