/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPW_classes.h
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

#define CONST_GS_USERNAME_MAXLENGTH                              15
#define CONST_GS_PASSWORD_MAXLENGTH                              30
#define CONST_GS_MESSAGE_MAXLENGTH                               255
#define CONST_GS_EMAIL_MAXLENGTH                                 50
#define CONST_GS_CDKEY_PART_MAXLENGTH                            4
#define CONST_CONTEXT_PRESENCE_MENUPRESENCE                      0
#define CONST_CONTEXT_PRESENCE_PRESENCE_PLAYING                  1
#define CONST_CONTEXT_GAME_MODE                                  0x0000800B
#define CONST_CONTEXT_GAME_MODE_DM                               0
#define CONST_CONTEXT_GAME_MODE_TDM                              1
#define CONST_CONTEXT_GAME_MODE_CP                               2
#define CONST_CONTEXT_GAME_MODE_TKOTH                            3
#define CONST_CONTEXT_GAME_MODE_CTF                              4
#define CONST_CONTEXT_GAME_MODE_CTDM                             5
#define CONST_CONTEXT_GAME_MODE_EOTS                             6
#define CONST_CONTEXT_GAME_MODE_PL                               7
#define CONST_CONTEXT_GAME_MODE_KC                               8
#define CONST_CONTEXT_GAME_MODE_DETONATE                         1002
#define CONST_CONTEXT_GAME_MODE_LMS                              1003
#define CONST_CONTEXT_GAME_MODE_LTS                              1004
#define CONST_CONTEXT_GAME_MODE_BO                               1005
#define CONST_CONTEXT_LOCKEDSERVER                               1
#define CONST_CONTEXT_MAPNAME                                    2
#define CONST_CONTEXT_MAPNAME_CUSTOM                             0
#define CONST_CONTEXT_MAPNAME_BLACKMARKET                        1
#define CONST_CONTEXT_MAPNAME_BRUTALISM                          2
#define CONST_CONTEXT_MAPNAME_CURFEW                             3
#define CONST_CONTEXT_MAPNAME_DERAILER                           4
#define CONST_CONTEXT_MAPNAME_DROPZONE                           5
#define CONST_CONTEXT_MAPNAME_FLOODGATE                          6
#define CONST_CONTEXT_MAPNAME_MAUL                               7
#define CONST_CONTEXT_MAPNAME_PITFALL                            8
#define CONST_CONTEXT_MAPNAME_POSTALLEY                          9
#define CONST_CONTEXT_MAPNAME_SKYFIRE                            10
#define CONST_CONTEXT_MAPNAME_SLUMLORD                           11
#define CONST_CONTEXT_MAPNAME_WHARFARE                           12
#define CONST_CONTEXT_MAPNAME_ZEROPOINT                          13
#define CONST_CONTEXT_MAPNAME_STREETFIGHT                        14
#define CONST_CONTEXT_MAPNAME_TOURISTTRAP                        15
#define CONST_CONTEXT_MAPNAME_BURIALGROUND                       16
#define CONST_CONTEXT_MAPNAME_BRICKANDMORTAR                     17
#define CONST_CONTEXT_LOCKEDSERVER_NO                            0
#define CONST_CONTEXT_LOCKEDSERVER_YES                           1
#define CONST_PROPERTY_CUSTOMMAPNAME                             0x40000001
#define CONST_PROPERTY_CUSTOMGAMEMODE                            0x40000002
#define CONST_PROPERTY_SERVERDESCRIPTION                         0x40000003
#define CONST_PROPERTY_MAPNAME                                   0x40000004
#define CONST_PROPERTY_GAMETYPE                                  0x40000005
#define CONST_PROPERTY_GAMEPASSWORD                              0x40000006
#define CONST_PROPERTY_ADMINPASSWORD                             0x40000007
#define CONST_PROPERTY_OWNERNAME                                 0x40000008
#define CONST_PROPERTY_SERVERNAME                                0x40000009
#define CONST_PROPERTY_SERVERID                                  0x4000000A
#define CONST_PROPERTY_GAME_VERSION                              0x50000074
#define CONST_PROPERTY_GAME_PASSWORD                             0x10000075
#define CONST_PROPERTY_GAME_OPEN                                 0x10000076
#define CONST_PROPERTY_PUBLIC_GAME                               0x10000078
#define CONST_PROPERTY_PLAYLISTNAME                              0x10000079
#define CONST_PROPERTY_MAPINDEX                                  0x1000007A
#define CONST_PROPERTY_GAMEINDEX                                 0x1000007B
#define CONST_PROPERTY_MINLEVEL                                  0x1000007C
#define CONST_PROPERTY_MAXLEVEL                                  0x1000007D
#define CONST_PROPERTY_XPMULT                                    0x1000007E
#define CONST_PROPERTY_GPMULT                                    0x1000007F
#define CONST_PROPERTY_CPMULT                                    0x10000080
#define CONST_PROPERTY_GAMESTATE                                 0x10000081
#define CONST_PROPERTY_TIMEREMAINING                             0x10000082
#define CONST_PROPERTY_PLAYLISTINFO1                             0x10000083
#define CONST_PROPERTY_PLAYLISTINFO2                             0x10000084
#define CONST_PROPERTY_PLAYLISTINFO3                             0x10000085
#define CONST_PROPERTY_PLAYLISTINFO4                             0x10000086
#define CONST_PROPERTY_MAX_TICK_RATE                             0x10000087
#define CONST_PROPERTY_PREMIUMTOKENGUID                          0x10000088
#define CONST_PROPERTY_ADVERTISEDXPMULT                          0x10000089
#define CONST_PROPERTY_ADVERTISEDCPMULT                          0x1000008A
#define CONST_PROPERTY_ADVERTISEDGPMULT                          0x1000008B
#define CONST_PROPERTY_MUTATORTOGGLE                             0x1000008C
#define CONST_PROPERTY_NUM_BOTS                                  0x1000008D
#define CONST_PROPERTY_MAX_CP                                    0x1000008E
#define CONST_PROPERTY_STARTING_CP                               0x1000008F
#define CONST_PROPERTY_PING_THRESHOLD                            0x10000090
#define CONST_PROPERTY_TIME_LIMIT                                0x10000091
#define CONST_PROPERTY_GOALSCORE_MULT                            0x10000092
#define CONST_QUERY_DM                                           0
#define CONST_QUERY_TDM                                          1
#define CONST_QUERY_CP                                           2
#define CONST_QUERY_DETONATE                                     3
#define CONST_QUERY_CTF                                          4
#define CONST_QUERY_CTDM                                         5
#define CONST_QUERY_LMS                                          6
#define CONST_QUERY_LTS                                          7
#define CONST_QUERY_BO                                           8
#define CONST_QUERY_TKOTH                                        9
#define CONST_QUERY_EOTS                                         10
#define CONST_QUERY_PL                                           11
#define CONST_QUERY_KC                                           12
#define CONST_PROPERTY_LEADERBOARDRATING                         0x20000009
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME               1
#define CONST_STATS_VIEW_LEADERBOARD_RANKEDALLTIME               2
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME_DM            3
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME_TDM           4
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME_CTF           5
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME_CP            6
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME_DET           7
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME_LMS           8
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME_LTS           9
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME_BO            10
#define CONST_STATS_VIEW_LEADERBOARD_WEAPONSALLTIME              11
#define CONST_STATS_VIEW_LEADERBOARD_PLAYERALLTIME_PS3           12
#define CONST_STATS_VIEW_PROFILESTATS                            13

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

// Class OnlineSubsystemPW.OnlineSubsystemPW
// 0x0B10 (0x0C54 - 0x0144)
class UOnlineSubsystemPW : public UOnlineSubsystemCommonImpl
{
public:
	struct FString                                     LoggedInPlayerName;                               		// 0x0144 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x0150 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                LoggedInPlayerSteamId;                            		// 0x0158 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LoggedInPlayerGender;                             		// 0x0160 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LoggedInStatus;                                   		// 0x0161 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                LoggedInPlayerTitle;                              		// 0x0164 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FQWord                                      LoggedInPlayerEmblem;                             		// 0x0168 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ServerTimeString;                                 		// 0x0170 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                TeamspeakVoipID;                                  		// 0x017C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                CurrentGameRegion;                                		// 0x0180 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                TotalPlayers;                                     		// 0x0184 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FQWord                                      ProfileFlags;                                     		// 0x0188 (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FOnlineFriend >                     LoggedInPlayerFriends;                            		// 0x0190 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineFriend >                     PartyMembers;                                     		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInviteInfo >                       Invites;                                          		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStatOperation >                    SteamStatOperations;                              		// 0x01B4 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	float                                              InviteExpireTime;                                 		// 0x01C0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x01C4 (0x0004) [0x0000000000000000]              
	int                                                VoiceVirtualServerPort;                           		// 0x01C8 (0x0004) [0x0000000000000000]              
	struct FString                                     VoiceChannelName;                                 		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPointer >                          AsyncTasks;                                       		// 0x01D8 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      bPurgeAsyncTasks : 1;                             		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ProfileDataDirectory;                             		// 0x01E8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x01F4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FTitleFile >                        TitleFiles;                                       		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSearch*                           CurrentGameSearch;                                		// 0x020C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UOnlineGameSearch*                           CurrentRankedGameSearch;                          		// 0x0210 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UOnlineGameSearch*                           CurrentPartyGameSearch;                           		// 0x0214 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class UOnlineStatsRead*                            CurrentStats;                                     		// 0x0218 (0x0004) [0x0000000000000000]              
	TArray< struct FAchievementMappingInfo >           AchievementMappings;                              		// 0x021C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadProfileSettingsDelegates;                     		// 0x0228 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x0234 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   BalanceChangedDelegates;                          		// 0x0240 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GPBalanceChangedDelegates;                        		// 0x024C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ZPBalanceChangedDelegates;                        		// 0x0258 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   XPQueryCompleteDelegates;                         		// 0x0264 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   BasicProfileQueryCompleteDelegates;               		// 0x0270 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   QuerySkillsCompleteDelegates;                     		// 0x027C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UpdateSkillsCompleteDelegates;                    		// 0x0288 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ChangeGenderCompleteDelegates;                    		// 0x0294 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ToggleProfileFlagCompleteDelegates;               		// 0x02A0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ValidatePlayerNameCompleteDelegates;              		// 0x02AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x02B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x02C4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x02D0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AddFriendDelegates;                               		// 0x02DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendInviteReceivedDelegates;                    		// 0x02E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x02F4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ServerAvailabilityDelegates;                      		// 0x0300 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginChangeDelegates;                             		// 0x030C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginFailedDelegates;                             		// 0x0318 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginQueueDelegates;                              		// 0x0324 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LogoutCompletedDelegates;                         		// 0x0330 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PingServerDelegates;                              		// 0x033C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   QueryStoreDelegates;                              		// 0x0348 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PurchaseItemDelegates;                            		// 0x0354 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ActivateItemDelegates;                            		// 0x0360 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   QueryInventoryDelegates;                          		// 0x036C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   InventoryUpdatedDelegates;                        		// 0x0378 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FuseInventoryDelegates;                           		// 0x0384 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x0390 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CreateOnlineGameCompleteDelegates;                		// 0x039C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UpdateOnlineGameCompleteDelegates;                		// 0x03A8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FindOnlineGamesCompleteDelegates;                 		// 0x03B4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinOnlineGameCompleteDelegates;                  		// 0x03C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GameInviteReceivedDelegates;                      		// 0x03CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnRankedMatchJoinQueueDelegates;                  		// 0x03D8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnRankedMatchFoundDelegates;                      		// 0x03E4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnQueryRankForPlayerDelegates;                    		// 0x03F0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   NameChangedDelegates;                             		// 0x03FC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CharacterCreatedDelegates;                        		// 0x0408 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WhisperReceivedDelegates;                         		// 0x0414 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ChatReceivedDelegates;                            		// 0x0420 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AdminMessageReceievedDelegates;                   		// 0x042C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ChatChannelChangeDelegates;                       		// 0x0438 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetChatListDelegates;                             		// 0x0444 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RenewItemDelegates;                               		// 0x0450 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DestroyItemDelegates;                             		// 0x045C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ValidateClanInfoDelegates;                        		// 0x0468 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetClanTagDelegates;                              		// 0x0474 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanMemberUpdateDelegates;                        		// 0x0480 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SetClanMOTDDelegates;                             		// 0x048C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanCreateDelegates;                              		// 0x0498 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanDisbandDelegates;                             		// 0x04A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanJoinDelegates;                                		// 0x04B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanQuitDelegates;                                		// 0x04BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanInfoDelegates;                                		// 0x04C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanInviteDelegates;                              		// 0x04D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanInviteResponseDelegates;                      		// 0x04E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanKickDelegates;                                		// 0x04EC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanKickResponseDelegate;                         		// 0x04F8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanGameInviteRecieveDelegates;                   		// 0x0504 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClanGameInviteExpiredDelegates;                   		// 0x0510 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PlayerSearchDelegates;                            		// 0x051C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetIdByPlayerNameDelegates;                       		// 0x0528 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendInfoChangedDelegates;                       		// 0x0534 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   InviteToPartyDelegates;                           		// 0x0540 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PartyInviteReceivedDelegates;                     		// 0x054C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   InviteRespondDelegates;                           		// 0x0558 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemovePartyMemberDelegates;                       		// 0x0564 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PromotePartymemberDelegates;                      		// 0x0570 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PartyGameSearchDelegates;                         		// 0x057C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnPartyMemberRemovedDelegates;                    		// 0x0588 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnPartyMembersAddedDelegates;                     		// 0x0594 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnPartyMembersUpdatedDelegates;                   		// 0x05A0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnPartyDisbandedDelegates;                        		// 0x05AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnPartyJoinQueueDelegates;                        		// 0x05B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnPartyRankedGameReadyDelegates;                  		// 0x05C4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnPartyPublicGameReadyDelegates;                  		// 0x05D0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   QueryMailDelegates;                               		// 0x05DC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OpenMailDelegates;                                		// 0x05E8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DestroyMailDelegates;                             		// 0x05F4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SendMailDelegates;                                		// 0x0600 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MarkMailReadDelegates;                            		// 0x060C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegionChangeDelegates;                            		// 0x0618 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MailNotificationDelegates;                        		// 0x0624 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   StartOnlineGameCompleteDelegates;                 		// 0x0630 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EndOnlineGameCompleteDelegates;                   		// 0x063C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DestroyOnlineGameCompleteDelegates;               		// 0x0648 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CancelFindOnlineGamesCompleteDelegates;           		// 0x0654 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0660 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   OnQueryStatsDelegate;                             		// 0x066C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x0678 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x0684 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0690 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x069C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnServerAvailability__Delegate;                 		// 0x06A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x06B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginQueue__Delegate;                         		// 0x06C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x06CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x06D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnServerPing__Delegate;                         		// 0x06E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x06F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x06FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x0708 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0714 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0720 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x072C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0738 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0744 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x0750 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x075C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x0768 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x0774 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x0780 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x078C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x0798 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x07A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceiveChat__Delegate;                        		// 0x07B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceiveAdminMessage__Delegate;                		// 0x07BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceiveWhisper__Delegate;                     		// 0x07C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatChannelChange__Delegate;                  		// 0x07D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetChatList__Delegate;                        		// 0x07E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanCreate__Delegate;                         		// 0x07EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanDisband__Delegate;                        		// 0x07F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanInvite__Delegate;                         		// 0x0804 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanInviteResponse__Delegate;                 		// 0x0810 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanKick__Delegate;                           		// 0x081C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanKickResponse__Delegate;                   		// 0x0828 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanJoin__Delegate;                           		// 0x0834 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanQuit__Delegate;                           		// 0x0840 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSetClanMOTD__Delegate;                        		// 0x084C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetClanTag__Delegate;                         		// 0x0858 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanMemberUpdate__Delegate;                   		// 0x0864 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnValidateClanInfo__Delegate;                   		// 0x0870 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetClanInfo__Delegate;                        		// 0x087C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanGameInviteReceived__Delegate;             		// 0x0888 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClanGameInviteExpired__Delegate;              		// 0x0894 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerSearchComplete__Delegate;               		// 0x08A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUniqueIdOfPlayerComplete__Delegate;        		// 0x08AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInfoChanged__Delegate;                  		// 0x08B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x08C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x08D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x08DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x08E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x08F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0900 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x090C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;		// 0x0918 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGPAdded__Delegate;                            		// 0x0924 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnItemActivated__Delegate;                      		// 0x0930 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnBalanceChanged__Delegate;                     		// 0x093C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGPBalanceChanged__Delegate;                   		// 0x0948 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnZPBalanceChanged__Delegate;                   		// 0x0954 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnBasicProfileQueryComplete__Delegate;          		// 0x0960 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnXPQueryComplete__Delegate;                    		// 0x096C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSkillQueryComplete__Delegate;                 		// 0x0978 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSkillUpdateComplete__Delegate;                		// 0x0984 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChangeGenderComplete__Delegate;               		// 0x0990 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnToggleProfileFlagComplete__Delegate;          		// 0x099C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnValidatePlayerNameComplete__Delegate;         		// 0x09A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryInventory__Delegate;                     		// 0x09B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnInventoryUpdated__Delegate;                   		// 0x09C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryStore__Delegate;                         		// 0x09CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPurchaseItem__Delegate;                       		// 0x09D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRenewItem__Delegate;                          		// 0x09E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyItem__Delegate;                        		// 0x09F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnXPAdded__Delegate;                            		// 0x09FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnNameChanged__Delegate;                        		// 0x0A08 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCharacterCreated__Delegate;                   		// 0x0A14 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryMailComplete__Delegate;                  		// 0x0A20 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyMailComplete__Delegate;                		// 0x0A2C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSendMailComplete__Delegate;                   		// 0x0A38 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnOpenMailComplete__Delegate;                   		// 0x0A44 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMarkMailReadComplete__Delegate;               		// 0x0A50 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMailNotification__Delegate;                   		// 0x0A5C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegionChangeComplete__Delegate;               		// 0x0A68 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFuseInventoryComplete__Delegate;              		// 0x0A74 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0A80 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x0A8C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x0A98 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x0AA4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x0AB0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x0ABC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRankedMatchJoinQueue__Delegate;               		// 0x0AC8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryRankForPlayer__Delegate;                 		// 0x0AD4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRankedMatchFindComplete__Delegate;            		// 0x0AE0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                   		// 0x0AEC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0AF8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0B04 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x0B10 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x0B1C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x0B28 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0B34 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;     		// 0x0B40 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;          		// 0x0B4C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;     		// 0x0B58 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x0B64 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0B70 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0B7C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0B88 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnInviteToParty__Delegate;                      		// 0x0B94 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPartyInviteRespond__Delegate;                 		// 0x0BA0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRemovePartyMember__Delegate;                  		// 0x0BAC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPartyPromote__Delegate;                       		// 0x0BB8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPartyGameSearchComplete__Delegate;            		// 0x0BC4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPartyInviteReceived__Delegate;                		// 0x0BD0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnNotifyPartyMemberRemoved__Delegate;           		// 0x0BDC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnNotifyPartyMembersAdded__Delegate;            		// 0x0BE8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnNotifyPartyMembersUpdated__Delegate;          		// 0x0BF4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnNotifyPartyDisbanded__Delegate;               		// 0x0C00 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPartyJoinedQueue__Delegate;                   		// 0x0C0C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPartyRankedGameReady__Delegate;               		// 0x0C18 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPartyPublicGameReady__Delegate;               		// 0x0C24 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x0C30 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFullVersionUnlock__Delegate;                  		// 0x0C3C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRetrievedGameSettingsForIP__Delegate;         		// 0x0C48 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1417 ];

		return pClassPointer;
	};

	void ClearOnRetrieveGameSettingsForIPDelegate ( struct FScriptDelegate InDelegate );
	void AddOnRetrieveGameSettingsForIPDelegate ( struct FScriptDelegate InDelegate );
	void OnRetrievedGameSettingsForIP ( unsigned long bSuccessful, struct FOnlineGameSearchResult* ConnectResult );
	void RetrieveGameSettingsForIP ( struct FString IPAddress );
	void ReregisterLocalPlayers ( struct FName SessionName );
	void ClearFullVersionUnlockDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddFullVersionUnlockDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnFullVersionUnlock ( );
	void CancelNATNegotiation ( );
	TArray< struct FOnlineArbitrationRegistrant > GetArbitratedPlayers ( struct FName SessionName );
	void ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool RegisterForArbitration ( struct FName SessionName );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	void ClearOnPartyPublicGameReadyDelegate ( struct FScriptDelegate InDelegate );
	void AddOnPartyPublicGameReadyDelegate ( struct FScriptDelegate InDelegate );
	void OnPartyPublicGameReady ( struct FString ConnectString );
	void ClearOnPartyRankedGameReadyDelegate ( struct FScriptDelegate InDelegate );
	void AddOnPartyRankedGameReadyDelegate ( struct FScriptDelegate InDelegate );
	void OnPartyRankedGameReady ( class UOnlineGameSearch** SearchResult );
	void ClearOnPartyJoinedQueueDelegate ( struct FScriptDelegate InDelegate );
	void AddOnPartyJoinedQueueDelegate ( struct FScriptDelegate InDelegate );
	void OnPartyJoinedQueue ( );
	void ClearNotifyPartyDisbandedDelegate ( struct FScriptDelegate InDelegate );
	void AddNotifyPartyDisbandedDelegate ( struct FScriptDelegate InDelegate );
	void OnNotifyPartyDisbanded ( );
	void ClearNotifyPartyMembersUpdatedDelegate ( struct FScriptDelegate InDelegate );
	void AddNotifyPartyMembersUpdatedDelegate ( struct FScriptDelegate InDelegate );
	void OnNotifyPartyMembersUpdated ( TArray< struct FOnlineFriend > UpdatedMembers );
	void ClearNotifyPartyMembersAddedDelegate ( struct FScriptDelegate InDelegate );
	void AddNotifyPartyMembersAddedDelegate ( struct FScriptDelegate InDelegate );
	void OnNotifyPartyMembersAdded ( TArray< struct FOnlineFriend > AddedMembers );
	void ClearNotifyPartyMemberRemovedDelegate ( struct FScriptDelegate InDelegate );
	void AddNotifyPartyMemberRemovedDelegate ( struct FScriptDelegate InDelegate );
	void OnNotifyPartyMemberRemoved ( struct FUniqueNetId Remover, struct FUniqueNetId RemovedPlayer );
	void ClearPartyInviteReceivedDelegate ( struct FScriptDelegate InDelegate );
	void AddPartyInviteReceivedDelegate ( struct FScriptDelegate InDelegate );
	void OnPartyInviteReceived ( struct FString InviterName );
	void NotifyPartyMembersOfPublicGame ( struct FString ConnectString );
	void ClearPartyGameSearchCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddPartyGameSearchCompleteDelegate ( struct FScriptDelegate InDelegate );
	bool SearchForGameAsParty ( );
	void OnPartyGameSearchComplete ( unsigned long bSuccessful );
	void ClearPromoteNewLeaderCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddPromoteNewLeaderCompleteDelegate ( struct FScriptDelegate InDelegate );
	bool PromoteNewLeader ( struct FUniqueNetId NewLeaderId );
	void OnPartyPromote ( unsigned long bSuccessful, unsigned char ResponseCode );
	void ClearRemovePartyMemberCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddRemovePartyMemberCompleteDelegate ( struct FScriptDelegate InDelegate );
	bool RemovePartyMember ( struct FUniqueNetId PartyMemberId );
	void OnRemovePartyMember ( unsigned long Successful, unsigned char ResponseCode );
	void ClearRespondToPartyInviteCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddRespondToPartyInviteCompleteDelegate ( struct FScriptDelegate InDelegate );
	bool RespondToPartyInvite ( unsigned long bAccept );
	void OnPartyInviteRespond ( unsigned long Successful, unsigned char ResponseCode );
	void ClearInviteToPartyCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddInviteToPartyCompleteDelegate ( struct FScriptDelegate InDelegate );
	bool InviteToParty ( struct FUniqueNetId InvitePlayerId );
	void OnInviteToParty ( unsigned long bSuccessful, unsigned char ResponseCode );
	void GetPartyMembers ( TArray< struct FOnlineFriend >* OutPartyMembers );
	void ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	void ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful, unsigned char ResponseCode, struct FOnlineFriend FriendItem );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	void ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate InDelegate );
	int GetNumberOfCurrentPlayersCached ( );
	void OnGetNumberOfCurrentPlayersComplete ( int NumTotalPlayers );
	bool GetNumberOfCurrentPlayers ( );
	void ClearJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnJoinMigratedOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool JoinMigratedOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	void ClearMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnMigrateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool MigrateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName );
	void ClearRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnRecalculateSkillRatingComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool DestroyOnlineGame ( struct FName SessionName );
	void ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool EndOnlineGame ( struct FName SessionName );
	void ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool StartOnlineGame ( struct FName SessionName );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool FreeSearchResults ( class UOnlineGameSearch* Search );
	class UOnlineGameSearch* GetGameSearch ( );
	bool BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo );
	void ClearQosStatusChangedDelegate ( struct FScriptDelegate InDelegate );
	void AddQosStatusChangedDelegate ( struct FScriptDelegate InDelegate );
	void OnQosStatusChanged ( int NumComplete, int NumTotal );
	bool FindPartyRankedMatch ( );
	bool CancelRankedMatchSearch ( );
	void ClearOnRankedMatchFindCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddOnRankedMatchFindCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnRankedMatchFindComplete ( unsigned long bSuccessful );
	bool FindRankedMatch ( );
	void SetPartyRankedMatchSearch ( class UOnlineGameSearch* RankedSearch );
	void SetRankedMatchSearch ( class UOnlineGameSearch* RankedSearch );
	void ClearQueryRankForPlayerDelegate ( struct FScriptDelegate InDelegate );
	void AddQueryRankForPlayerDelegate ( struct FScriptDelegate InDelegate );
	void OnQueryRankForPlayer ( struct FUniqueNetId ForPlayer, int Rank );
	bool QueryRankForPlayers ( TArray< struct FUniqueNetId > ForPlayers );
	void ClearRankedMatchJoinQueueDelegate ( struct FScriptDelegate InDelegate );
	void AddRankedMatchJoinQueueDelegate ( struct FScriptDelegate InDelegate );
	void OnRankedMatchJoinQueue ( unsigned long bSuccess, int QueuePlacement, int EstimatedWaitSeconds );
	bool GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo );
	void ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool JoinOnlineGameByIP ( unsigned char PlayerNum, struct FString ConnectIP, struct FString ConnectPort );
	bool JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	void ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	bool CancelFindOnlineGames ( );
	void ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	bool FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings );
	struct FString GetServerTimeString ( );
	class UOnlineGameSettings* GetGameSettings ( struct FName SessionName );
	bool SendPlayerList ( TArray< class APlayerReplicationInfo* > Players );
	void ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
	void ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	bool ClearDownloadedFile ( struct FString FileName );
	bool ClearDownloadedFiles ( );
	unsigned char GetTitleFileState ( struct FString FileName );
	bool GetTitleFileContents ( struct FString FileName, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString FileName );
	bool ReadTitleFile ( struct FString FileToRead );
	bool ServerLogMessage ( struct FUniqueNetId PlayerID, struct FString EventName, struct FString EventData );
	bool ClientLogMessage ( struct FString InMessage );
	void ClearFuseInventoryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddFuseInventoryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnFuseInventoryComplete ( unsigned long bSuccess, struct FString ResultGuid );
	bool FuseInventory ( struct FString DataNodeAGuid, struct FString DataNodeBGuid, struct FString AdditionalFuseInfo );
	void ClearRegionChangeCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddRegionChangeCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnRegionChangeComplete ( unsigned char LocalUserNum, unsigned long bSuccess );
	bool RegionChange ( unsigned char NewRegion, unsigned long bFullChange );
	unsigned char GetCurrentRegion ( );
	void ClearMailNotificationDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddMailNotificationDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnMailNotification ( struct FString MailData );
	void ClearMarkMailReadCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddMarkMailReadCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnMarkMailReadComplete ( unsigned char LocalUserNum, unsigned long bSuccess );
	bool MarkMailRead ( struct FString MailID );
	void ClearOpenMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddOpenMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnOpenMailComplete ( unsigned char LocalUserNum, unsigned long bSuccess );
	bool OpenMail ( struct FString MailID );
	void ClearSendMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddSendMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnSendMailComplete ( unsigned char LocalUserNum, unsigned long bSuccess );
	bool SendMail ( struct FString ToPlayer, struct FString Subject, struct FString Message, struct FString ItemA, struct FString ItemB, struct FString ItemC, struct FString ItemD, int GPAmount, int ZPAmount );
	void ClearDestroyMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddDestroyMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnDestroyMailComplete ( unsigned char LocalUserNum, unsigned long bSuccess );
	bool DestroyMail ( struct FString MailID );
	void ClearQueryMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddQueryMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnQueryMailComplete ( unsigned char LocalUserNum, struct FString MailData );
	bool QueryMail ( );
	void ClearCharacterCreatedCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddCharacterCreatedCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnCharacterCreated ( unsigned char LocalUseNum, unsigned long bSuccess );
	bool CreateCharacter ( struct FString NewName, unsigned long bNewGender );
	void ClearNameChangedCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddNameChangedCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnNameChanged ( unsigned char LocalUserNum, unsigned long bSuccess );
	bool ChangeName ( struct FString NewName );
	void ClearXPAddCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddXPAddCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnXPAdded ( struct FUniqueNetId ForId, unsigned char LocalUserNum, unsigned long bSuccess );
	bool AddXP ( struct FUniqueNetId ForId, int Amount );
	void ClearDestroyItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddDestroyItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnDestroyItem ( struct FString ItemGuid, unsigned long bResult );
	bool DestroyItem ( struct FString ItemGuid );
	void ClearRenewItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddRenewItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnRenewItem ( unsigned char eResult, struct FString ItemGuid );
	bool RenewItem ( struct FString ItemGuid, unsigned char PurchaseLength, unsigned char FromLocation, unsigned char Currency );
	void ClearPurchaseItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddPurchaseItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnPurchaseItem ( unsigned char eResult, struct FString ItemGuid );
	bool PurchaseItem ( struct FString ItemGuid, unsigned char PurchaseCount, unsigned char PurchaseLength, unsigned char FromLocation, unsigned char Currency, unsigned char PurchaseType, struct FString Recipient, struct FString ActivationData );
	void ClearQueryStoreCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddQueryStoreCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnQueryStore ( struct FString StoreData );
	bool QueryStore ( struct FString Filter );
	void ClearInventoryUpdatedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddInventoryUpdatedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnInventoryUpdated ( struct FUniqueNetId ForId, struct FString InventoryData );
	void ClearQueryInventoryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddQueryInventoryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnQueryInventory ( struct FUniqueNetId ForId, unsigned long bResult, struct FString InventoryData );
	bool QueryInventory ( struct FUniqueNetId ForId, unsigned long bInvalidateCached );
	void ClearValidatePlayerNameDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddValidatePlayerNameDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnValidatePlayerNameComplete ( struct FUniqueNetId NetId, unsigned long bSuccess, unsigned char InvalidReason );
	bool ValidatePlayerName ( struct FUniqueNetId NetId, struct FString PlayerName );
	void SetProfileFlag ( unsigned char FlagIndex );
	bool GetProfileFlag ( unsigned char FlagIndex );
	bool HasProfileFlagToggled ( unsigned char FlagIndex );
	void ClearToggleProfileFlagCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddToggleProfileFlagCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnToggleProfileFlagComplete ( unsigned char LocalUserNum, unsigned char FlagIndex, unsigned long bSuccess );
	bool ToggleProfileFlag ( unsigned char FlagIndex );
	int GetTitle ( );
	bool SetTitle ( int NewTitle );
	struct FQWord GetEmblem ( );
	bool SetEmblem ( struct FQWord NewEmblem );
	unsigned char GetPlayerGender ( );
	void ClearChangeGenderCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddChangeGenderCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnChangeGenderComplete ( unsigned char LocalUserNum, unsigned long bSuccess );
	bool ChangeGender ( unsigned long bCurrentGender, unsigned long bNewGender );
	void ClearSkillUpdateCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddSkillUpdateCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnSkillUpdateComplete ( unsigned char LocalUserNum, unsigned long bSuccess );
	bool UpdateSkills ( TArray< unsigned char >* SkillData );
	void ClearSkillQueryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddSkillQueryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnSkillQueryComplete ( struct FUniqueNetId ForId, unsigned char LocalUserNum, unsigned long bSuccess, TArray< unsigned char >* SkillData );
	bool QuerySkills ( struct FUniqueNetId ForId );
	void ClearXPQueryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddXPQueryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnXPQueryComplete ( struct FUniqueNetId ForId, unsigned char LocalUserNum, int XPAmount, unsigned long bSuccess );
	bool QueryXP ( struct FUniqueNetId ForId );
	void ClearQueryBasicProfileCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddQueryBasicProfileCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnBasicProfileQueryComplete ( struct FUniqueNetId ForId, unsigned long bSuccess, struct FString PlayerName, int Experience, unsigned long bFemaleChar, struct FQWord BadgeData, int TitleIndex, struct FString LastSeenTime );
	bool QueryBasicProfile ( struct FUniqueNetId ForId );
	void ClearZPBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddZPBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnZPBalanceChanged ( struct FUniqueNetId ForId, unsigned char LocalUserNum, int NewZPBalance );
	bool QueryFundsZP ( struct FUniqueNetId ForId );
	void ClearGPBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddGPBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnGPBalanceChanged ( struct FUniqueNetId ForId, unsigned char LocalUserNum, int NewGPBalance );
	bool QueryFundsGP ( struct FUniqueNetId ForId );
	void ClearBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnBalanceChanged ( struct FUniqueNetId ForId, unsigned char LocalUserNum, int NewZPBalance, int NewGPBalance );
	bool QueryFunds ( struct FUniqueNetId ForId );
	void ClearActivateItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddActivateItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnItemActivated ( unsigned long bResult, unsigned char eResult );
	bool ActivateItem ( struct FString ItemGuid, struct FString ActivationData );
	void ClearGPAddCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddGPAddCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnGPAdded ( struct FUniqueNetId ForId, unsigned char LocalUserNum, unsigned long bSuccess );
	bool AddGP ( struct FUniqueNetId ForId, int Amount );
	bool ShowCustomMessageUI ( unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients );
	void ClearCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId );
	class UOnlineProfileSettings* GetCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId );
	void ClearReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadCrossTitleProfileSettingsComplete ( unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful );
	bool ReadCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings );
	bool UnlockAvatarAward ( unsigned char LocalUserNum, int AvatarItemId );
	bool ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players );
	bool ShowPlayersUI ( unsigned char LocalUserNum );
	bool ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	void ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void OnProfileDataChanged ( );
	bool UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId );
	bool IsDeviceValid ( int DeviceID, int SizeNeeded );
	int GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName );
	void ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void OnDeviceSelectionComplete ( unsigned long bWasSuccessful );
	bool ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage );
	bool ShowMembershipMarketplaceUI ( unsigned char LocalUserNum );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	bool ShowAchievementsUI ( unsigned char LocalUserNum );
	bool ShowMessagesUI ( unsigned char LocalUserNum );
	bool ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowWebPageUI ( struct FString URL );
	bool IsLoginInProcess ( );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId );
	bool DeleteMessage ( unsigned char LocalUserNum, int MessageIndex );
	bool UnmuteAll ( unsigned char LocalUserNum );
	bool MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends );
	void ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message );
	void GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages );
	void ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate );
	void OnJoinFriendGameComplete ( unsigned long bWasSuccessful );
	bool JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend );
	void ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName );
	bool SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text );
	bool SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text );
	void UpdateOnlineStatus ( int StatusID, struct FString PresenceContext );
	void ClearOnFriendInfoChangedDelegate ( struct FScriptDelegate InDelegate );
	void AddOnFriendInfoChangedDelegate ( struct FScriptDelegate InDelegate );
	void OnFriendInfoChanged ( struct FOnlineFriend OldFriendInfo, struct FOnlineFriend NewFriendInfo );
	void ClearOnGetUniqueIdOfPlayerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void AddOnGetUniqueIdOfPlayerCompleteDelegate ( struct FScriptDelegate InDelegate );
	void OnGetUniqueIdOfPlayerComplete ( unsigned long bSuccess, struct FUniqueNetId ResultId );
	bool GetUniqueIdOfPlayerByName ( struct FString PlayerName );
	void ClearOnPlayerSearchComplete ( struct FScriptDelegate InDelegate );
	void AddOnPlayerSearchComplete ( struct FScriptDelegate InDelegate );
	void OnPlayerSearchComplete ( TArray< struct FString > ReturnedNames );
	bool SearchForPlayer ( struct FString SearchName );
	void ClearClanGameInviteExpiredDelegate ( struct FScriptDelegate InDelegate );
	void AddClanGameInviteExpiredDelegate ( struct FScriptDelegate InDelegate );
	void OnClanGameInviteExpired ( struct FUniqueNetId InviterId );
	void ClearClanGameInviteReceivedDelegate ( struct FScriptDelegate InDelegate );
	void AddClanGameInviteReceivedDelegate ( struct FScriptDelegate InDelegate );
	void OnClanGameInviteReceived ( struct FUniqueNetId InviterId );
	bool ChangeMemberRank ( struct FUniqueNetId PlayerID, unsigned char NewRank );
	void ClearOnGetClanInfo ( struct FScriptDelegate InDelegate );
	void AddOnGetClanInfo ( struct FScriptDelegate InDelegate );
	void OnGetClanInfo ( struct FString ClanInfo );
	bool GetClanInfo ( struct FString ClanTag );
	void ClearOnValidateClanInfo ( struct FScriptDelegate InDelegate );
	void AddOnValidateClanInfo ( struct FScriptDelegate InDelegate );
	void OnValidateClanInfo ( int InfoType, unsigned long IsAvail );
	void ValidateClanInfo ( int InfoType, struct FString Info );
	void ClearOnClanMemberUpdate ( struct FScriptDelegate InDelegate );
	void AddOnClanMemberUpdate ( struct FScriptDelegate InDelegate );
	void OnClanMemberUpdate ( unsigned char UpdateType, struct FString MemberInfo );
	void ClearOnGetClanTag ( struct FScriptDelegate InDelegate );
	void AddOnGetClanTag ( struct FScriptDelegate InDelegate );
	void OnGetClanTag ( struct FUniqueNetId PlayerID, struct FString ClanTag );
	void GetClanTag ( struct FUniqueNetId PlayerID );
	void GetMyClanTag ( );
	void ClearOnSetClanMOTD ( struct FScriptDelegate InDelegate );
	void AddOnSetClanMOTD ( struct FScriptDelegate InDelegate );
	void OnSetClanMOTD ( unsigned long Success, struct FString NewMOTD );
	void SetClanMOTD ( struct FString Message );
	void ClearOnClanQuit ( struct FScriptDelegate InDelegate );
	void AddOnClanQuit ( struct FScriptDelegate InDelegate );
	void OnClanQuit ( unsigned long Success );
	void QuitClan ( );
	void ClearOnClanJoin ( struct FScriptDelegate InDelegate );
	void AddOnClanJoin ( struct FScriptDelegate InDelegate );
	void OnClanJoin ( unsigned long Success, struct FString ClanTag );
	void JoinClan ( struct FString ClanID );
	void ClearOnClanKickResponse ( struct FScriptDelegate InDelegate );
	void AddOnClanKickResponse ( struct FScriptDelegate InDelegate );
	void OnClanKickResponse ( unsigned long Success, unsigned char FailReason );
	void ClearOnClanKick ( struct FScriptDelegate InDelegate );
	void AddOnClanKick ( struct FScriptDelegate InDelegate );
	void OnClanKick ( );
	void KickFromClan ( struct FUniqueNetId PlayerID );
	void ClearOnClanInviteResponse ( struct FScriptDelegate InDelegate );
	void AddOnClanInviteResponse ( struct FScriptDelegate InDelegate );
	void OnClanInviteResponse ( unsigned long Success, unsigned char FailReason );
	void ClearOnClanInvite ( struct FScriptDelegate InDelegate );
	void AddOnClanInvite ( struct FScriptDelegate InDelegate );
	void OnClanInvite ( struct FString ClanName, struct FString ClanTag, struct FString Founded, int MemberCount, struct FString WhoInvited, struct FString ClanID );
	void InviteToClan ( struct FString PlayerName, struct FUniqueNetId PlayerID );
	void ClearOnClanDisband ( struct FScriptDelegate InDelegate );
	void AddOnClanDisband ( struct FScriptDelegate InDelegate );
	void OnClanDisband ( unsigned long Success );
	void DisbandClan ( );
	void ClearOnClanCreate ( struct FScriptDelegate InDelegate );
	void AddOnClanCreate ( struct FScriptDelegate InDelegate );
	void OnClanCreate ( unsigned long Success );
	void ClearOnGetChatList ( struct FScriptDelegate InDelegate );
	void AddOnGetChatList ( struct FScriptDelegate InDelegate );
	void OnGetChatList ( struct FString ChatList );
	void GetChatList ( );
	void ClearChatChannelDelegate ( struct FScriptDelegate InDelegate );
	void AddChatChannelDelegate ( struct FScriptDelegate InDelegate );
	void OnChatChannelChange ( int ChannelID, struct FString ChannelName );
	void LeaveChatChannel ( int Channel );
	void JoinChatChannelByID ( int ChannelID );
	void JoinChatChannelByName ( struct FString Channel );
	void ClearOnReceiveWhisperDelegate ( struct FScriptDelegate InDelegate );
	void AddOnReceiveWhisperDelegate ( struct FScriptDelegate InDelegate );
	void OnReceiveWhisper ( unsigned long Success, struct FString PlayerName, struct FString Message );
	void SendWhisper ( struct FString Channel, struct FString Message );
	void ClearOnReceiveAdminMessageDelegate ( struct FScriptDelegate InDelegate );
	void AddOnReceiveAdminMessageDelegate ( struct FScriptDelegate InDelegate );
	void OnReceiveAdminMessage ( struct FString Line1, struct FString Line2, struct FString Line3, unsigned long IsMajorBroadcast );
	void SendAdminMessage ( struct FString Message );
	void ClearOnReceiveChatDelegate ( struct FScriptDelegate InDelegate );
	void AddOnReceiveChatDelegate ( struct FScriptDelegate InDelegate );
	void OnReceiveChat ( struct FString Channel, struct FString PlayerName, struct FString Messaage );
	void SendChat ( struct FString Channel, struct FString Message );
	bool SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	bool ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bIsGamerTag, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	void SetOnlineStatus ( unsigned char LocalUserNum, int StatusID, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties );
	void ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate );
	void OnStorageDeviceChange ( );
	int GetLocale ( );
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
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex ( int UserIndex );
	struct FString eventGetPlayerNicknameFromIndex ( int UserIndex );
	void CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma );
	float GetTrueSkillValue ( );
	bool RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid );
	struct FString GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful );
	bool RegisterHostStatGuid ( struct FString* HostStatGuid );
	struct FString GetHostStatGuid ( );
	bool WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores );
	void ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool FlushOnlineStats ( struct FName SessionName );
	bool WriteOnlineRankedStats ( TArray< class UOnlineStatsWrite* > StatsArray );
	bool WriteOnlineStats ( struct FName SessionName, class APlayerReplicationInfo* Player, class UOnlineStatsWrite* StatsWrite );
	void FreeStats ( class UOnlineStatsRead* StatsRead );
	void ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	void AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate );
	bool ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows );
	bool ReadOnlineStatsByRank ( class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead );
	bool ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	bool ReadMyOnlineStats ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead );
	bool ReadOnlineStats ( class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players );
	void OnReadOnlineStatsComplete ( unsigned long bWasSuccessful );
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
	bool UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority );
	bool IsHeadsetPresent ( unsigned char LocalUserNum );
	bool IsRemotePlayerTalking ( struct FUniqueNetId PlayerID );
	bool IsLocalPlayerTalking ( unsigned char LocalUserNum );
	bool UnregisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool RegisterRemoteTalkerWithVoipId ( struct FUniqueNetId UniqueId, int VoipId );
	bool RegisterRemoteTalker ( struct FUniqueNetId PlayerID );
	bool UnregisterLocalTalker ( unsigned char LocalUserNum );
	bool RegisterLocalTalker ( unsigned char LocalUserNum );
	void RefreshCommunicationPrivelage ( );
	bool GetPartyList ( unsigned char LocalUserNum, TArray< struct FOnlineFriend >* Members );
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool IsProfileAvailable ( unsigned char LocalUserNum );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	void ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	void AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate );
	bool IsGuestLogin ( unsigned char LocalUserNum );
	bool IsLocalLogin ( unsigned char LocalUserNum );
	void ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	void AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate );
	bool ShowFriendsUI ( unsigned char LocalUserNum );
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
	bool GetSecondaryUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* OutID );
	bool GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum );
	void ClearPingServerDelegate ( struct FScriptDelegate InDelegate );
	void AddPingServerDelegate ( struct FScriptDelegate InDelegate );
	void OnServerPing ( struct FString Address, struct FDouble RecvTime );
	bool PingServer ( struct FString Address );
	void ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnLogoutCompleted ( unsigned long bWasSuccessful );
	bool Logout ( unsigned char LocalUserNum );
	void ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate );
	void OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode );
	void ClearLoginQueueDelegate ( struct FScriptDelegate InDelegate );
	void AddLoginQueueDelegate ( struct FScriptDelegate InDelegate );
	void OnLoginQueue ( unsigned char LocalUserNum, int NumPlayers, int PositionInQueue, int WaitTime );
	bool CheckLoginQueue ( unsigned char LocalUserNum, struct FString AccountName );
	void ClearLoginChangeDelegate ( struct FScriptDelegate InDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate InDelegate );
	void OnLoginChange ( unsigned char LocalUserNum );
	bool AutoLogin ( );
	void ClearServerAvailabilityDelegate ( struct FScriptDelegate InDelegate );
	void AddServerAvailabilityDelegate ( struct FScriptDelegate InDelegate );
	void OnServerAvailability ( unsigned char RegionID, unsigned char AvailabilityCode, int iParam1, int iParam2 );
	bool CheckServerAvailability ( unsigned char RegionID );
	void AddServerToWhiteList ( unsigned char RegionID );
	bool LoginHashed ( struct FString* LoginName, struct FString* HashedToken );
	bool Login ( unsigned char LocalUserNum, unsigned long bWantsLocalOnly, struct FString* LoginName, struct FString* Password );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	void OnFriendsChange ( );
	void ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	bool eventInit ( );
	struct FString GetTitleString ( );
};

UClass* UOnlineSubsystemPW::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif