/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemGameSpy_structs.h
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

// ScriptStruct OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.SBServer
// 0x0004
struct FSBServer
{
	struct FPointer                                    Server;                                           		// 0x0000 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.TBuddyFriendship
// 0x0018
struct FTBuddyFriendship
{
	int                                                RecordId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     nick;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Status;                                           		// 0x0010 (0x0001) [0x0000000000000000]              
	float                                              RemoveDate;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ViewPropertyToKeyId
// 0x0010
struct FViewPropertyToKeyId
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PropertyId;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                KeyId;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.PlayerStat
// 0x0014
struct FPlayerStat
{
	int                                                KeyId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	struct FSettingsData                               Data;                                             		// 0x0008 (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.PendingPlayerStats
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

// ScriptStruct OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnlineStatusMapping
// 0x0010
struct FOnlineStatusMapping
{
	int                                                StatusId;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     StatusString;                                     		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int                                                bIsControllerConnected;                           		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                bLastIsControllerConnected;                       		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.PerUserProfileDelegates
// 0x000C
struct FPerUserProfileDelegates
{
	TArray< struct FScriptDelegate >                   Delegates;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.LocalTalkerGS
// 0x0001(0x0005 - 0x0004)
struct FLocalTalkerGS : FLocalTalker
{
	unsigned char                                      MuteType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif