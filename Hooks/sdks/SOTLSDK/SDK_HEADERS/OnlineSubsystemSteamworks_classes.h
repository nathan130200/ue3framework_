/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.h
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

#define CONST_PROPERTY_VOICECHATENABLED                          0x5000000C
#define CONST_PROPERTY_SANDALWAYSON                              0x5000000B
#define CONST_PROPERTY_NOPERKS                                   0x5000000A
#define CONST_PROPERTY_HEADSHOTSONLY                             0x50000009
#define CONST_PROPERTY_TEAMKILLPENALTY                           0x50000008
#define CONST_PROPERTY_HUDON                                     0x50000007
#define CONST_PROPERTY_HIGHLIGHTALLIES                           0x50000006
#define CONST_PROPERTY_KILLCAM                                   0x50000005
#define CONST_PROPERTY_PLAYERHEALTHMODIFIER                      0x50000004
#define CONST_PROPERTY_REVENGE                                   0x50000003
#define CONST_PROPERTY_FRIENDLYFIRE                              0x50000002
#define CONST_PROPERTY_NUMROUNDS                                 0x50000001
#define CONST_PROPERTY_CUSTOMMAPDIFFICULITY                      0x40000007
#define CONST_PROPERTY_OWNERFULLNAME                             0x40000006
#define CONST_PROPERTY_OWNERCLANTAG                              0x40000005
#define CONST_PROPERTY_CUSTOMMUTATORS                            0x40000004
#define CONST_PROPERTY_SERVERDESCRIPTION                         0x40000003
#define CONST_PROPERTY_CUSTOMGAMEMODE                            0x40000002
#define CONST_PROPERTY_CUSTOMMAPNAME                             0x40000001
#define CONST_PROPERTY_EPICMUTATORS                              0x10000105
#define CONST_PROPERTY_TIMELIMIT                                 0x100000F9
#define CONST_PROPERTY_GOALSCORE                                 0x100000F8
#define CONST_PROPERTY_AUTO_BOTRANK                              0x100000FA
#define CONST_PROPERTY_NUMBOTS                                   0x100000F7
#define CONST_CONTEXT_TIMELIMIT                                  4
#define CONST_CONTEXT_TIMELIMIT01                                3
#define CONST_CONTEXT_TIMELIMIT02                                2
#define CONST_CONTEXT_TIMELIMIT03                                1
#define CONST_CONTEXT_TIMELIMIT04                                0
#define CONST_CONTEXT_NUMBOTS                                    8
#define CONST_CONTEXT_NUMBOTS01                                  7
#define CONST_CONTEXT_NUMBOTS02                                  6
#define CONST_CONTEXT_NUMBOTS03                                  5
#define CONST_CONTEXT_NUMBOTS04                                  4
#define CONST_CONTEXT_NUMBOTS05                                  3
#define CONST_CONTEXT_NUMBOTS06                                  2
#define CONST_CONTEXT_NUMBOTS07                                  1
#define CONST_CONTEXT_NUMBOTS08                                  0
#define CONST_CONTEXT_GOALSCORE                                  4
#define CONST_CONTEXT_GOALSCORE01                                3
#define CONST_CONTEXT_GOALSCORE02                                2
#define CONST_CONTEXT_GOALSCORE03                                1
#define CONST_CONTEXT_GOALSCORE04                                0
#define CONST_CONTEXT_MAPNAME_CUSTOM                             0
#define CONST_PROPERTY_TUNINGMASK                                0x1000002E
#define CONST_PROPERTY_PLAYLISTID                                0x1000002D
#define CONST_PROPERTY_EXODUSMODE                                0x10000026
#define CONST_PROPERTY_ISRANKED                                  0x10000025
#define CONST_PROPERTY_EXPERIENCE                                0x10000024
#define CONST_PROPERTY_ISFRIENDPARTY                             0x10000011
#define CONST_PROPERTY_FACTIONNAME                               0x10000010
#define CONST_PROPERTY_KONRADS_FREESLOTS                         0x1000000F
#define CONST_PROPERTY_SPECOPS_FREESLOTS                         0x1000000E
#define CONST_PROPERTY_MAX_TEAM_FREESLOTS                        0x1000000D
#define CONST_PROPERTY_MAX_FREESLOTS                             0x1000000C
#define CONST_SESSION_MATCH_QUERY_ANYPUBLICMATCH_COOP            15
#define CONST_SESSION_MATCH_QUERY_KONRADSANYMATCH                10
#define CONST_SESSION_MATCH_QUERY_KONRADSBESTMATCH               8
#define CONST_SESSION_MATCH_QUERY_SPECOPSANYMATCH                9
#define CONST_SESSION_MATCH_QUERY_SPECOPSBESTMATCH               5
#define CONST_SESSION_MATCH_QUERY_ANYFACTIONANYMATCHWITHPARTYSPLIT 7
#define CONST_SESSION_MATCH_QUERY_ANYFACTIONANYMATCHNOSPLIT      6
#define CONST_SESSION_MATCH_QUERY_ANYFACTIONBESTMATCHNOSPLIT     2
#define CONST_SESSION_MATCH_QUERY_ANYMATCH                       11
#define CONST_SESSION_MATCH_QUERY_ANYPUBLICMATCH                 12
#define CONST_SESSION_MATCH_QUERY_ANY                            4
#define CONST_CONTEXT_PRESENCE_COOPERATIVEPRESENCE               5
#define CONST_CONTEXT_PRESENCE_CAMPAIGNPRESENCE                  4
#define CONST_CONTEXT_PRESENCE_MENUPRESENCE                      3
#define CONST_CONTEXT_PRESENCE_CROSSPLAYERPRESENCE               2
#define CONST_CONTEXT_PRESENCE_COMPETITIVEPRESENCE               1
#define CONST_CONTEXT_PRESENCE_DEFAULTPRESENCE                   0
#define CONST_CONTEXT_FACTIONNAME_ANYFACTION                     2
#define CONST_CONTEXT_FACTIONNAME_KONRADS                        1
#define CONST_CONTEXT_FACTIONNAME_SPECOPS                        0
#define CONST_CONTEXT_AI_DIFFICULTY_ANY_DIFFICULTY               5
#define CONST_CONTEXT_AI_DIFFICULTY_INSANE                       4
#define CONST_CONTEXT_AI_DIFFICULTY_HARD                         3
#define CONST_CONTEXT_AI_DIFFICULTY_NORMAL                       2
#define CONST_CONTEXT_AI_DIFFICULTY_EASY                         1
#define CONST_CONTEXT_AI_DIFFICULTY_NO_DIFFICULTY                0
#define CONST_CONTEXT_CAMPAIGN_ANYCAMPAIGN                       5
#define CONST_CONTEXT_CAMPAIGN_CAMPAIGN04                        4
#define CONST_CONTEXT_CAMPAIGN_CAMPAIGN03                        3
#define CONST_CONTEXT_CAMPAIGN_CAMPAIGN02                        2
#define CONST_CONTEXT_CAMPAIGN_CAMPAIGN01                        1
#define CONST_CONTEXT_CAMPAIGN_NOCAMPAIGN                        0
#define CONST_CONTEXT_FACTION_KONRAD                             1
#define CONST_CONTEXT_FACTION_SPECOPS                            0
#define CONST_CONTEXT_MAPNAME_ANY                                9
#define CONST_CONTEXT_MAPNAME_TANKER                             8
#define CONST_CONTEXT_MAPNAME_MUSEUM                             7
#define CONST_CONTEXT_MAPNAME_SUNKEN                             6
#define CONST_CONTEXT_MAPNAME_ROOFTOPS                           5
#define CONST_CONTEXT_MAPNAME_WINDGATES                          4
#define CONST_CONTEXT_MAPNAME_CITY                               3
#define CONST_CONTEXT_MAPNAME_ATRIUM                             2
#define CONST_CONTEXT_MAPNAME_TOWER                              1
#define CONST_CONTEXT_MAPNAME_NOMAP                              0
#define CONST_CONTEXT_ANYPLAYLIST                                99
#define CONST_CONTEXT_MULTIPLAYERMODE_COOP                       14
#define CONST_CONTEXT_MULTIPLAYERMODE_OFFLINE                    13
#define CONST_CONTEXT_MULTIPLAYERMODE_SPECIALDELIVERY            12
#define CONST_CONTEXT_MULTIPLAYERMODE_DELIVERY                   11
#define CONST_CONTEXT_MULTIPLAYERMODE_CHOPPERATTACK              10
#define CONST_CONTEXT_MULTIPLAYERMODE_SPOILSOFWAR                9
#define CONST_CONTEXT_MULTIPLAYERMODE_BURIED                     8
#define CONST_CONTEXT_MULTIPLAYERMODE_ANYMODE                    7
#define CONST_CONTEXT_MULTIPLAYERMODE_RALLYPOINT                 6
#define CONST_CONTEXT_MULTIPLAYERMODE_SQUADDEATHMATCH            5
#define CONST_CONTEXT_MULTIPLAYERMODE_HOLDANDDESTROY             4
#define CONST_CONTEXT_MULTIPLAYERMODE_TEAMDEATHMATCH             3
#define CONST_CONTEXT_MULTIPLAYERMODE_TEAMELIMINATION            2
#define CONST_CONTEXT_MULTIPLAYERMODE_DEATHMATCH                 1
#define CONST_CONTEXT_MULTIPLAYERMODE_NOMODE                     0
#define CONST_CONTEXT_MISSION                                    23
#define CONST_CONTEXT_CHAPTER                                    22
#define CONST_CONTEXT_AI_DIFFICULTY                              21
#define CONST_CONTEXT_CAMPAIGN                                   20
#define CONST_CONTEXT_FACTION                                    19
#define CONST_CONTEXT_MAPNAME                                    11
#define CONST_CONTEXT_MULTIPLAYERMODE                            10
#define CONST_CONTEXT_GAME_MODE_MULTIPLAYER                      0
#define CONST_CONTEXT_GAME_MODE                                  0x0000800B
#define CONST_STATS_SKILL_SIGMA_DEFAULT                          1.0
#define CONST_STATS_SKILL_MU_DEFAULT                             3.0
#define CONST_STATS_SKILL_RANK_DEFAULT                           0
#define CONST_STATS_COLUMN_VERSION                               32
#define CONST_STATS_COLUMN_LEVEL                                 31
#define CONST_STATS_COLUMN_CROSSPLAYER_RATIO                     30
#define CONST_STATS_COLUMN_RANKING                               29
#define CONST_STATS_COLUMN_CROSSPLAYER_LEVELKONRAD               5
#define CONST_STATS_COLUMN_CROSSPLAYER_LEVELSPECOPS              4
#define CONST_STATS_COLUMN_CROSSPLAYER_STREAK                    3
#define CONST_STATS_COLUMN_CROSSPLAYER_DEFEATS                   2
#define CONST_STATS_COLUMN_CROSSPLAYER_VICTORIES                 1
#define CONST_STATS_COLUMN_KILLS_RATIO                           30
#define CONST_STATS_COLUMN_KILLS_STREAK                          3
#define CONST_STATS_COLUMN_KILLS_DEATHS                          2
#define CONST_STATS_COLUMN_KILLS_KILLS                           1
#define CONST_STATS_COLUMN_CLANTAGS_CLAN_TAGS                    1
#define CONST_STATS_COLUMN_SIGMA                                 64
#define CONST_STATS_COLUMN_MU                                    63
#define CONST_STATS_COLUMN_GAMESPLAYED                           62
#define CONST_STATS_COLUMN_SKILL                                 61
#define CONST_STATS_VIEW_CHOPPER                                 35
#define CONST_STATS_VIEW_SPOILS                                  48
#define CONST_STATS_VIEW_SPECIALDELIVERY                         45
#define CONST_STATS_VIEW_OFFLINE                                 42
#define CONST_STATS_VIEW_BURIED                                  32
#define CONST_STATS_VIEW_DELIVERY                                39
#define CONST_STATS_VIEW_RALLYPOINT                              24
#define CONST_STATS_VIEW_SQUADDEATHMATCH                         21
#define CONST_STATS_VIEW_DEATHMATCH                              20
#define CONST_STATS_VIEW_HOLDANDDESTROY                          18
#define CONST_STATS_VIEW_TEAMDEATHMATCH                          15
#define CONST_STATS_VIEW_KILLS                                   4
#define CONST_STATS_VIEW_TEAMELIMINATION                         1
#define CONST_STATS_VIEW_SKILL_RANKED_MULTIPLAYER                0xFFFF0000
#define CONST_STATS_VIEW_SKILL_STANDARD_MULTIPLAYER              0xFFFE0000
#define CONST_VERSION_NUM                                        2
#define CONST_PROPERTY_VERSION                                   0x20000016
#define CONST_PROPERTY_LEADERBOARDRATING                         0x20000015
#define CONST_PROPERTY_CLANID                                    0x2000000B
#define CONST_PROPERTY_CLANTAG                                   0x20000008
#define CONST_PROPERTY_LEVEL                                     0x10000027
#define CONST_PROPERTY_RATIO                                     0x10000023
#define CONST_PROPERTY_STREAK                                    0x10000022
#define CONST_PROPERTY_DEFEATS                                   0x10000021
#define CONST_PROPERTY_VICTORIES                                 0x10000020
#define CONST_PROPERTY_MISSES                                    0x10000018
#define CONST_PROPERTY_HITS                                      0x10000017
#define CONST_PROPERTY_DEATHS                                    0x10000013
#define CONST_PROPERTY_KILLS                                     0x10000012

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
/*enum ESteamMatchmakingType
{
	SMT_Invalid                                        = 0,
	SMT_LAN                                            = 1,
	SMT_Internet                                       = 2,
	SMT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
/*enum EMuteType
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_MAX                                           = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.ClientBeaconAddressResolverSteam
// 0x0000 (0x0048 - 0x0048)
class UClientBeaconAddressResolverSteam : public UClientBeaconAddressResolver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1399 ];

		return pClassPointer;
	};

};

UClass* UClientBeaconAddressResolverSteam::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x00B4 (0x025C - 0x01A8)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	TArray< struct FServerQueryToRulesResponseMapping > QueryToRulesResponseMap;                          		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FServerQueryToPingResponseMapping > QueryToPingResponseMap;                           		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    ServerListResponse;                               		// 0x01C0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      CurrentMatchmakingType;                           		// 0x01C4 (0x0001) [0x0000000000000000]              
	struct FPointer                                    CurrentMatchmakingQuery;                          		// 0x01C8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FScriptDelegate >                   GameInviteAcceptedDelegates;                      		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSearch*                           InviteGameSearch;                                 		// 0x01D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     InviteLocationUrl;                                		// 0x01DC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSettings*                         PartySettings;                                    		// 0x0200 (0x0004) [0x0000000000000000]              
	struct FPointer                                    PartySessionInfo;                                 		// 0x0204 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned long                                      m_bWorkingOnPartySession : 1;                     		// 0x0208 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_isProcessingPendingInvite : 1;                  		// 0x0208 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_OnlineServiceReachableAsyncTaskStartTime;       		// 0x020C (0x0004) [0x0000000000000000]              
	float                                              m_OnlineServiceReachableQueryTimeOut;             		// 0x0210 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	TArray< struct FScriptDelegate >                   OnlineServiceReachableDelegates;                  		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWantsToAcceptGameInvite__Delegate;            		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnOnlineServiceReachableComplete__Delegate;     		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1400 ];

		return pClassPointer;
	};

	bool AcceptPendingInvite ( );
	bool IsProcessingPendingInvite ( );
	bool HasPendingInvite ( );
	bool BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo );
	void DestroyPartySession ( struct FName SessionName, unsigned long bWasSuccessful );
	void CleanupOnlineSubsystemComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool CleanupOnlineSubsystem ( );
	bool GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	void ClearOnlineServiceReachableCompleteDelegate ( struct FScriptDelegate OnlineServiceReachableCompleteDelegate );
	void AddOnlineServiceReachableCompleteDelegate ( struct FScriptDelegate OnlineServiceReachableCompleteDelegate );
	void OnOnlineServiceReachableComplete ( unsigned long bWasSuccessful, float timeLeftUntilNextQuery );
	void StartOnlineServiceReachableRequestInGame ( );
	void StartOnlineServiceReachableRequestForMatchMaking ( class UObject* requestingObject );
	bool IsOnlineServiceReachable ( float TimeOut );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void ClearWantsToAcceptGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WantsToAcceptGameInviteDelegate );
	void AddWantsToAcceptGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WantsToAcceptGameInviteDelegate );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void OnWantsToAcceptGameInvite ( struct FString InAsyncTaskName );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	bool FreeSearchResults ( class UOnlineGameSearch* Search );
	class UOnlineGameSettings* GetGameSettings ( struct FName SessionName );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
};

UClass* UOnlineGameInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x0540 (0x06A0 - 0x0160)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	int                                                LeaderboardStartIndex;                            		// 0x0160 (0x0004) [0x0000000000000000]              
	int                                                LeaderboardNumToRead;                             		// 0x0164 (0x0004) [0x0000000000000000]              
	float                                              m_OnlineServiceReachableAsyncTaskEndTime;         		// 0x0168 (0x0004) [0x0000000000000000]              
	struct FPointer                                    CallbackBridge;                                   		// 0x016C (0x0004) [0x0000000000001000]              ( CPF_Native )
	unsigned long                                      bStoringAchievement : 1;                          		// 0x0170 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bGSStatsStoresSuccess : 1;                        		// 0x0170 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedsKeyboardTicking : 1;                        		// 0x0170 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bLastHasConnection : 1;                           		// 0x0170 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bIsStatsSessionOk : 1;                            		// 0x0170 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHasSteamworksAccount : 1;                        		// 0x0170 (0x0004) [0x0000000000004002] [0x00000020] ( CPF_Const | CPF_Config )
	unsigned long                                      bShouldUseMcp : 1;                                		// 0x0170 (0x0004) [0x0000000000004002] [0x00000040] ( CPF_Const | CPF_Config )
	int                                                TotalGSStatsStoresPending;                        		// 0x0174 (0x0004) [0x0000000000000000]              
	unsigned char                                      UserStatsReceivedState;                           		// 0x0178 (0x0001) [0x0000000000000000]              
	unsigned char                                      LoggedInStatus;                                   		// 0x0179 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x017A (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentNotificationPosition;                      		// 0x017B (0x0001) [0x0000000000004000]              ( CPF_Config )
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                    		// 0x017C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LocalProfileName;                                 		// 0x0180 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LoggedInPlayerName;                               		// 0x018C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x0198 (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                LoggedInPlayerNum;                                		// 0x01A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ProfileDataDirectory;                             		// 0x01A4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x01B0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x01BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ExternalUIChangeDelegates;                        		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x01D4 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LocalPlayerStorageReadDelegates;                  		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LocalPlayerStorageWriteDelegates;                 		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemotePlayerStorageReadDelegates;                 		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginChangeDelegates;                             		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginFailedDelegates;                             		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LogoutCompletedDelegates;                         		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AccountCreateDelegates;                           		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TalkingDelegates;                                 		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadOnlineStatsCompleteDelegates;                 		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FlushOnlineStatsDelegates;                        		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x0280 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ControllerChangeDelegates;                        		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LinkStatusDelegates;                              		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   InitializationCompleteDelegates;                  		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x02B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementDelegates;                             		// 0x02BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementReadDelegates;                         		// 0x02C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CreateOnlineGameCompleteDelegates;                		// 0x02D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CleanupOnlineSubsystemCompleteDelegates;          		// 0x02E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLocalTalkerSteam                           CurrentLocalTalker;                               		// 0x02EC (0x0008) [0x0000000000000000]              
	TArray< struct FRemoteTalker >                     RemoteTalkers;                                    		// 0x02F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameID;                                           		// 0x0300 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x0304 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPendingPlayerStats >               PendingStats;                                     		// 0x0308 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FLeaderBoardData >                  m_leaderboardsData;                               		// 0x0314 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     KeyboardResultsString;                            		// 0x0320 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   KeyboardInputDelegates;                           		// 0x032C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendInviteReceivedDelegates;                    		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendMessageReceivedDelegates;                   		// 0x0344 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AddFriendByNameCompleteDelegates;                 		// 0x0350 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FProfileSettingsCache                       ProfileCache;                                     		// 0x035C (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerStorage*                        PlayerStorageCache;                               		// 0x0384 (0x0004) [0x0000000000000000]              
	struct FString                                     CachedFriendMessage;                              		// 0x0388 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FDeviceIdCache                              DeviceCache;                                      		// 0x0394 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           LocationUrlsForInvites;                           		// 0x03B0 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LocationUrl;                                      		// 0x03BC (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReceivedGameInviteDelegates;                      		// 0x03C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinFriendGameCompleteDelegates;                  		// 0x03D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetNumberOfCurrentPlayersCompleteDelegates;       		// 0x03E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterHostStatGuidCompleteDelegates;            		// 0x03EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineFriendMessage >              CachedFriendMessages;                             		// 0x03F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineStatusMapping >              StatusMappings;                                   		// 0x0404 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DefaultStatus;                                    		// 0x0410 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GameInviteMessage;                                		// 0x041C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FControllerConnectionState                  ControllerStates[ 0x4 ];                          		// 0x0428 (0x0020) [0x0000000000000000]              
	float                                              ConnectionPresenceTimeInterval;                   		// 0x0448 (0x0004) [0x0000000000000000]              
	float                                              ConnectionPresenceElapsedTime;                    		// 0x044C (0x0004) [0x0000000000000000]              
	struct FString                                     EncryptedProductKey;                              		// 0x0450 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	int                                                NextAuthId;                                       		// 0x045C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     ServerChallenge;                                  		// 0x0460 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ServerResponse;                                   		// 0x046C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                ServerLocalId;                                    		// 0x0478 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FUniqueNetId >                      MuteList;                                         		// 0x047C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FQueuedAvatarRequest >              QueuedAvatarRequests;                             		// 0x0488 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FSteamID                                    m_CurrentGameID;                                  		// 0x0494 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x049C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x04A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x04B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x04C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x04CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x04D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x04E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x04F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginUIComplete__Delegate;                    		// 0x04FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x0508 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0514 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x0520 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x052C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0538 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0544 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0550 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x055C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0568 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0574 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0580 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x058C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x0598 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x05A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x05B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x05BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;       		// 0x05C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x05D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x05E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x05EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x05F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0604 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0610 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x061C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0628 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0634 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x0640 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x064C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;           		// 0x0658 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x0664 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnInitializationComplete__Delegate;             		// 0x0670 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCleanupOnlineSubsystemComplete__Delegate;     		// 0x067C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConfirmGameInvite__Delegate;                  		// 0x0688 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPingNamedSessionFinished__Delegate;           		// 0x0694 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1401 ];

		return pClassPointer;
	};

	void NotifyVOIPPlaybackFinished ( class UAudioComponent* VOIPAudioComponent );
	void OnVOIPPlaybackFinished ( class UAudioComponent* AC );
	bool PingNamedSession ( struct FName SessionName, struct FScriptDelegate finishedDelegate );
	void OnPingNamedSessionFinished ( struct FName SessionName, int milliSeconds );
	void CancelPendingInvite ( );
	bool ConfirmGameInvite ( );
	void ClearConfirmGameInviteDelegate ( struct FScriptDelegate ConfirmGameInviteDelegate );
	void AddConfirmGameInviteDelegate ( struct FScriptDelegate ConfirmGameInviteDelegate );
	void OnConfirmGameInvite ( unsigned long confirmed );
	void ClearCleanupOnlineSubsystemCompleteDelegate ( struct FScriptDelegate CleanupOnlineSubsystemCompleteDelegate );
	void AddCleanupOnlineSubsystemCompleteDelegate ( struct FScriptDelegate CleanupOnlineSubsystemCompleteDelegate );
	void OnCleanupOnlineSubsystemComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void ClearInitializationCompleteDelegate ( struct FScriptDelegate InitializationCompleteDelegate );
	void TriggerKeyboardInputComplete ( struct FString InputString, unsigned long bWasCancelled );
	void ShowKeyboardInputComplete ( struct FString InputString, unsigned long bWasCancelled );
	void ShowKeyboardInputDialog ( class AGameReplicationInfo* GameRepInfo, int LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void AddInitializationCompleteDelegate ( struct FScriptDelegate InitializationCompleteDelegate );
	void OnInitializationComplete ( unsigned long bSuccess );
	void AsyncOnlineSubInitializationCheck ( );
	void ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers );
	bool GetNumberOfCurrentPlayers ( );
	void ReadOnlineAvatar ( struct FUniqueNetId PlayerNetId, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate );
	void OnReadOnlineAvatarComplete ( struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar );
	bool ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	bool ShowPlayersUI ( unsigned char LocalUserNum );
	bool ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
	void ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void OnProfileDataChanged ( );
	bool UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId );
	bool IsDeviceValid ( int DeviceID, int SizeNeeded );
	int GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName );
	void ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void OnDeviceSelectionComplete ( unsigned long bWasSuccessful );
	bool ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShowUI, unsigned long bManageStorage );
	bool ShowMembershipMarketplaceUI ( unsigned char LocalUserNum );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowReceivedInviteUI ( unsigned char LocalUserNum );
	bool ShowAchievementsUI ( unsigned char LocalUserNum );
	bool ShowMessagesUI ( unsigned char LocalUserNum );
	bool ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	bool UnmuteAll ( unsigned char LocalUserNum );
	bool MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends );
	bool RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid );
	struct FString GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful );
	bool RegisterHostStatGuid ( struct FString* HostStatGuid );
	struct FString GetHostStatGuid ( );
	void ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages );
	void ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void OnJoinFriendGameComplete ( unsigned long bWasSuccessful );
	bool JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend );
	void ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate );
	void OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName );
	bool SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text );
	bool SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text );
	bool SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message );
	void ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties );
	bool GetLocalAccountNames ( TArray< struct FString >* Accounts );
	bool DeleteLocalAccount ( struct FString UserName, struct FString Password );
	bool RenameLocalAccount ( struct FString NewUserName, struct FString OldUserName, struct FString Password );
	bool CreateLocalAccount ( struct FString UserName, struct FString Password );
	void ClearCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate );
	void AddCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate );
	void OnCreateOnlineAccountCompleted ( unsigned char ErrorStatus );
	bool CreateOnlineAccount ( struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void OnStorageDeviceChange ( );
	unsigned char GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	bool IsControllerConnected ( int ControllerId );
	void ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate );
	void OnControllerChange ( int ControllerId, unsigned long bIsConnected );
	void SetNetworkNotificationPosition ( unsigned char NewPos );
	unsigned char GetNetworkNotificationPosition ( );
	void ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate );
	void OnExternalUIChange ( unsigned long bIsOpening );
	void ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate );
	void OnLinkStatusChange ( unsigned long bIsConnected );
	bool HasLinkConnection ( );
	struct FUniqueNetId GetPlayerUniqueNetIdFromIndex ( int UserIndex );
	struct FString GetPlayerNicknameFromIndex ( int UserIndex );
	bool WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores );
	void ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool FlushOnlineStats ( struct FName SessionName );
	bool WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite );
	void FreeStats ( class UOnlineStatsRead* StatsRead );
	void ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void OnReadOnlineStatsComplete ( unsigned long bWasSuccessful );
	bool ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows );
	bool ReadOnlineStatsByRank ( class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead );
	bool ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	bool ReadOnlineStats ( class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players );
	bool SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj );
	bool SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId );
	void ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate );
	void OnRecognitionComplete ( );
	bool GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words );
	bool StopSpeechRecognition ( unsigned char LocalUserNum );
	bool StartSpeechRecognition ( unsigned char LocalUserNum );
	void StopNetworkedVoice ( unsigned char LocalUserNum );
	void StartNetworkedVoice ( unsigned char LocalUserNum );
	void ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking );
	bool UpdateVolumes ( );
	bool UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority );
	bool IsHeadsetPresent ( unsigned char LocalUserNum );
	bool IsRemotePlayerTalking ( struct FUniqueNetId PlayerID );
	bool IsLocalPlayerTalking ( unsigned char LocalUserNum );
	bool UnregisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool RegisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool UnregisterLocalTalker ( unsigned char LocalUserNum );
	bool RegisterLocalTalker ( unsigned char LocalUserNum );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings, unsigned long forValidation );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	void ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate );
	void ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void ClearLoginUICompleteDelegate ( struct FScriptDelegate LoginUICompleteDelegate );
	void AddLoginUICompleteDelegate ( struct FScriptDelegate LoginUICompleteDelegate );
	void OnLoginUIComplete ( unsigned long Success );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	bool IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query );
	bool IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	unsigned char CanShowPresenceInformation ( unsigned char LocalUserNum );
	unsigned char CanViewPlayerProfiles ( unsigned char LocalUserNum );
	unsigned char CanPurchaseContent ( unsigned char LocalUserNum );
	unsigned char CanDownloadUserContent ( unsigned char LocalUserNum );
	unsigned char CanCommunicate ( unsigned char LocalUserNum );
	unsigned char CanPlayOnline ( unsigned char LocalUserNum );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	bool AutoLogin ( );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	void AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	bool CheckForBootInvite ( );
	bool Init ( );
};

UClass* UOnlineSubsystemSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.NetConnectionSteam
// 0x0008 (0x5010 - 0x5008)
class UNetConnectionSteam : public UTcpipConnection
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x5008 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1402 ];

		return pClassPointer;
	};

};

UClass* UNetConnectionSteam::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetDriverSteam
// 0x0000 (0x0194 - 0x0194)
class UIpNetDriverSteam : public UTcpNetDriver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1403 ];

		return pClassPointer;
	};

};

UClass* UIpNetDriverSteam::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.PartyBeaconClientSteamworks
// 0x0000 (0x00F8 - 0x00F8)
class UPartyBeaconClientSteamworks : public UPartyBeaconClient
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 118175 ];

		return pClassPointer;
	};

};

UClass* UPartyBeaconClientSteamworks::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif