/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemGFWL_structs.h
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

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.TalkerPriority
// 0x0008
struct FTalkerPriority
{
	int                                                CurrentPriority;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LastPriority;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.LiveRemoteTalker
// 0x0020(0x0054 - 0x0034)
struct FLiveRemoteTalker : FRemoteTalker
{
	struct FTalkerPriority                             LocalPriorities[ 0x4 ];                           		// 0x0034 (0x0020) [0x0000000000000000]              
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.CachedAchievements
// 0x001C
struct FCachedAchievements
{
	int                                                PlayerNum;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct FAchievementDetails >               Achievements;                                     		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ReadState;                                        		// 0x0014 (0x0001) [0x0000000000000000]              
	class USurface*                                    TempImage;                                        		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.InviteData
// 0x0014
struct FInviteData
{
	TArray< struct FScriptDelegate >                   InviteDelegates;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    InviteData;                                       		// 0x000C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UOnlineGameSearch*                           InviteSearch;                                     		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.PerUserDelegateLists
// 0x0024
struct FPerUserDelegateLists
{
	TArray< struct FScriptDelegate >                   SpeechRecognitionDelegates;                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementDelegates;                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementReadDelegates;                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadDelegates;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteDelegates;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ProfileDataChangedDelegates;                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.DeviceIdCache
// 0x001C
struct FDeviceIdCache
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             DeviceSelectionMulticast;                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeviceSelectionDelegates;                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.ContentListCache
// 0x003C
struct FContentListCache
{
	TArray< struct FOnlineContent >                    Content;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ReadState;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ContentChangeDelegates;                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadCompleteDelegates;                            		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                NewDownloadCount;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                TotalDownloadCount;                               		// 0x002C (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   QueryDownloadsDelegates;                          		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.CachedLoginState
// 0x005C
struct FCachedLoginState
{
	unsigned char                                      LoginStatus;                                      		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                OnlineXuid;                                       		// 0x0004 (0x002C) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                OfflineXuid;                                      		// 0x0030 (0x002C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.LoginStatusDelegates
// 0x000C
struct FLoginStatusDelegates
{
	TArray< struct FScriptDelegate >                   Delegates;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemGFWL.OnlineSubsystemGFWL.FriendsListCache
// 0x0028
struct FFriendsListCache
{
	TArray< struct FOnlineFriend >                     Friends;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ReadState;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif