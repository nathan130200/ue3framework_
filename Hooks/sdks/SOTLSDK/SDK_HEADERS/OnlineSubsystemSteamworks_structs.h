/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0008
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Response;                                         		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0008
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Response;                                         		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001(0x0005 - 0x0004)
struct FLocalTalkerSteam : FLocalTalker
{
	unsigned char                                      MuteType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x001C
struct FPlayerStat
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       ViewName;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                ColumnId;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FSettingsData                               Data;                                             		// 0x0010 (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x0048
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     StatGuid;                                         		// 0x0014 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FPlayerStat >                       Stats;                                            		// 0x0020 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FOnlinePlayerScore                          Score;                                            		// 0x002C (0x0010) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Place;                                            		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderBoardData
// 0x0074
struct FLeaderBoardData
{
	struct FName                                       LeaderboardName;                                  		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                Player;                                           		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     PlayerName;                                       		// 0x0010 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AdditionalScores[ 0x14 ];                         		// 0x0020 (0x0050) [0x0000000000000002]              ( CPF_Const )
	int                                                AdditionalCount;                                  		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadDelegates;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteDelegates;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ProfileDataChangedDelegates;                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x001C
struct FDeviceIdCache
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             DeviceSelectionMulticast;                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeviceSelectionDelegates;                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0010
struct FOnlineStatusMapping
{
	int                                                StatusId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     StatusString;                                     		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int                                                bIsControllerConnected;                           		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                bLastIsControllerConnected;                       		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x001C
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumberOfAttempts;                                 		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0008 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0010 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamID
// 0x0008
struct FSteamID
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif