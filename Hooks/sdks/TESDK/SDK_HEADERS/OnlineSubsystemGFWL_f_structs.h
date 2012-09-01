/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemGFWL_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function OnlineSubsystemGFWL.OnlineEventsInterfaceMcpGFWL.UploadMatchmakingSessionData
// [0x00420400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcpGFWL_execUploadMatchmakingSessionData_Parms
{
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPlayerReservation >                Players;                                          		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineEventsInterfaceMcpGFWL.UploadMatchmakingSearchData
// [0x00420400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcpGFWL_execUploadMatchmakingSearchData_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           Search;                                           		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SelectedIndex;                                    		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPlayerReservation >                Players;                                          		// 0x0034 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineEventsInterfaceMcpGFWL.UploadHardwareData
// [0x00020400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcpGFWL_execUploadHardwareData_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     PlayerNick;                                       		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearServiceQosDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearServiceQosDelegate_Parms
{
	struct FScriptDelegate                             ServiceQosDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddServiceQosDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddServiceQosDelegate_Parms
{
	struct FScriptDelegate                             ServiceQosDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnServiceQosCheckComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnServiceQosCheckComplete_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetServiceQosResult
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetServiceQosResult_Parms
{
	struct FServiceQosResult                           QosResult;                                        		// 0x0000 (0x001C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.CheckServiceQos
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execCheckServiceQos_Parms
{
	float                                              TimeOut;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SetNATFilter
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSetNATFilter_Parms
{
	unsigned long                                      Enabled : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsNATFiltered
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsNATFiltered_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SetDebugSpewLevel
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSetDebugSpewLevel_Parms
{
	int                                                DebugSpewLevel;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.DumpVoiceRegistration
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execDumpVoiceRegistration_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.DumpLiveSessionState
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execDumpLiveSessionState_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.DumpSessionState
// [0x00020002] 
struct UOnlineSubsystemGFWL_execDumpSessionState_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetBuildUniqueId
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetBuildUniqueId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowCustomPlayersUI
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowCustomPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetAchievements
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FAchievementDetails >               Achievements;                                     		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TitleId;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0014 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnReadAchievementsComplete_Parms
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadAchievements
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.DeleteMessage
// [0x00020000] 
struct UOnlineSubsystemGFWL_execDeleteMessage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.UnmuteAll
// [0x00020000] 
struct UOnlineSubsystemGFWL_execUnmuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.MuteAll
// [0x00020000] 
struct UOnlineSubsystemGFWL_execMuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.RegisterStatGuid
// [0x00420000] 
struct UOnlineSubsystemGFWL_execRegisterStatGuid_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ClientStatGuid;                                   		// 0x002C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetClientStatGuid
// [0x00020000] 
struct UOnlineSubsystemGFWL_execGetClientStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execAddRegisterHostStatGuidCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnRegisterHostStatGuidComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnRegisterHostStatGuidComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.RegisterHostStatGuid
// [0x00420000] 
struct UOnlineSubsystemGFWL_execRegisterHostStatGuid_Parms
{
	struct FString                                     HostStatGuid;                                     		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetHostStatGuid
// [0x00020000] 
struct UOnlineSubsystemGFWL_execGetHostStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execClearFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execAddFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnFriendMessageReceived
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnFriendMessageReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SendingNick;                                      		// 0x0030 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x003C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetFriendMessages
// [0x00420000] 
struct UOnlineSubsystemGFWL_execGetFriendMessages_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriendMessage >              FriendMessages;                                   		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnJoinFriendGameComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnJoinFriendGameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.JoinFriendGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execJoinFriendGame_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearReceivedGameInviteDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execClearReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddReceivedGameInviteDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execAddReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnReceivedGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviterName;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSendGameInviteToFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Friends;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSendGameInviteToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Text;                                             		// 0x0030 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSendMessageToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0030 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearFriendInviteReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execClearFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddFriendInviteReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execAddFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnFriendInviteReceived
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnFriendInviteReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     RequestingNick;                                   		// 0x0030 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x003C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.RemoveFriend
// [0x00020002] 
struct UOnlineSubsystemGFWL_execRemoveFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.DenyFriendInvite
// [0x00020000] 
struct UOnlineSubsystemGFWL_execDenyFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AcceptFriendInvite
// [0x00020000] 
struct UOnlineSubsystemGFWL_execAcceptFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execClearAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemGFWL_execAddAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnAddFriendByNameComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnAddFriendByNameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddFriendByName
// [0x00024000] 
struct UOnlineSubsystemGFWL_execAddFriendByName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     FriendName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddFriend
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execAddFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewFriend;                                        		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x0030 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x003C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execWriteOnlinePlayerScores_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlinePlayerScore >                PlayerScores;                                     		// 0x000C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnFlushOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnFlushOnlineStatsComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execFlushOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execWriteOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Player;                                           		// 0x0008 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0034 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.FreeStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execFreeStats_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.MulticastReadOnlineStatsComplete
// [0x00020002] 
struct UOnlineSubsystemGFWL_execMulticastReadOnlineStatsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// int                                             Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          Subscriber;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnReadOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnReadOnlineStatsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadOnlineStatsByRankAroundPlayer_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumRows;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadOnlineStatsByRank_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                StartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumToRead;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadOnlineStatsForFriends
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadOnlineStatsForFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadOnlineStats_Parms
{
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSetSpeechRecognitionObject_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SelectVocabulary
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSelectVocabulary_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnRecognitionComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnRecognitionComplete_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetRecognitionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FSpeechRecognizedWord >             Words;                                            		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execStopSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execStartSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsNetworkedVoiceEnabled
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsNetworkedVoiceEnabled_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execStopNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execStartNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnPlayerTalkingStateChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnPlayerTalkingStateChange_Parms
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTalking : 1;                                   		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.UnmuteRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execUnmuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.MuteRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execMuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSetRemoteTalkerPriority_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Priority;                                         		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsHeadsetPresent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsRemotePlayerTalking_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsLocalPlayerTalking_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execUnregisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execRegisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execUnregisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execRegisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetAvailableDownloadCounts
// [0x00420002] 
struct UOnlineSubsystemGFWL_execGetAvailableDownloadCounts_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewDownloads;                                     		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                TotalDownloads;                                   		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearQueryAvailableDownloadsComplete
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearQueryAvailableDownloadsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             QueryDownloadsDelegate;                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddQueryAvailableDownloadsComplete
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddQueryAvailableDownloadsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             QueryDownloadsDelegate;                           		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnQueryAvailableDownloadsComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnQueryAvailableDownloadsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.QueryAvailableDownloads
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execQueryAvailableDownloads_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetContentList
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetContentList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineContent >                    ContentList;                                      		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadContentList
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadContentList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearReadContentComplete
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearReadContentComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadContentCompleteDelegate;                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddReadContentComplete
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddReadContentComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadContentCompleteDelegate;                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnReadContentComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnReadContentComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearContentChangeDelegate
// [0x00024002] 
struct UOnlineSubsystemGFWL_execClearContentChangeDelegate_Parms
{
	struct FScriptDelegate                             ContentDelegate;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddContentChangeDelegate
// [0x00024002] 
struct UOnlineSubsystemGFWL_execAddContentChangeDelegate_Parms
{
	struct FScriptDelegate                             ContentDelegate;                                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnContentChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnContentChange_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineSubsystemGFWL_execOnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriend >                     Friends;                                          		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearPartyChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearPartyChangeDelegate_Parms
{
	struct FScriptDelegate                             dgt;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddPartyChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddPartyChangeDelegate_Parms
{
	struct FScriptDelegate                             dgt;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnPartyChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnPartyChange_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AcceptGameInvite
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execAcceptGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetArbitratedPlayers
// [0x00020000] 
struct UOnlineSubsystemGFWL_execGetArbitratedPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineArbitrationRegistrant >      ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearArbitrationRegistrationCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddArbitrationRegistrationCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnArbitrationRegistrationComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnArbitrationRegistrationComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.RegisterForArbitration
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execRegisterForArbitration_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnEndOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnEndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.EndOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execEndOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnStartOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnStartOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.StartOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execStartOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearProfileDataChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddProfileDataChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnProfileDataChanged
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnProfileDataChanged_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.UnlockGamerPicture
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execUnlockGamerPicture_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnUnlockAchievementComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.UnlockAchievement
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execUnlockAchievement_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsDeviceValid
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsDeviceValid_Parms
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetDeviceSelectionResults
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetDeviceSelectionResults_Parms
{
	unsigned char                                      LocalPlayerNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     DeviceName;                                       		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddDeviceSelectionDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnDeviceSelectionComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnDeviceSelectionComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowDeviceSelectionUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceShowUI : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bManageStorage : 1;                               		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowMembershipMarketplaceUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowMembershipMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowContentMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                OfferId;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowInviteUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                PresenceMode;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FLocalizedStringSetting >           LocalizedStringSettings;                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSettingsProperty >                 Properties;                                       		// 0x0014 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnWritePlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.WritePlayerStorage
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execWritePlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetPlayerStorage
// [0x00020002] 
struct UOnlineSubsystemGFWL_execGetPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnReadPlayerStorageForNetIdComplete_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x002C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadPlayerStorageForNetId
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadPlayerStorageForNetId_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnReadPlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadPlayerStorage
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnWriteProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execWriteProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetProfileSettings
// [0x00020002] 
struct UOnlineSubsystemGFWL_execGetProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.RecalculateSkillRating
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execRecalculateSkillRating_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnUnregisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0034 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execUnregisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnRegisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0034 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.RegisterPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execRegisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasInvited : 1;                                  		// 0x0034 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetResolvedConnectString_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ConnectInfo;                                      		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnJoinOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnJoinOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execJoinOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x000C (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.QueryNonAdvertisedData
// [0x00020002] 
struct UOnlineSubsystemGFWL_execQueryNonAdvertisedData_Parms
{
	int                                                StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.FreeSearchResults
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execFreeSearchResults_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execBindPlatformSpecificSessionToSearch_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x44 ];                     		// 0x0008 (0x0044) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x004C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadPlatformSpecificSessionInfoBySessionName_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x44 ];                     		// 0x0008 (0x0044) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x004C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadPlatformSpecificSessionInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadPlatformSpecificSessionInfo_Parms
{
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      PlatformSpecificInfo[ 0x44 ];                     		// 0x0008 (0x0044) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x004C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnCancelFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.FindFriendGames
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execFindFriendGames_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execCancelFindOnlineGames_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.FindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execFindOnlineGames_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execDestroyOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetGameSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetGameSettings_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnUpdateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execUpdateOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldRefreshOnlineData : 1;                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnCreateOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execCreateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         NewGameSettings;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetGameSearch
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetGameSearch_Parms
{
	class UOnlineGameSearch*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetTitleFileState
// [0x00020002] 
struct UOnlineSubsystemGFWL_execGetTitleFileState_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FileIndex;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetTitleFileContents_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< unsigned char >                            FileContents;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ReadTitleFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execReadTitleFile_Parms
{
	struct FString                                     FileToRead;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearStorageDeviceChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddStorageDeviceChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnStorageDeviceChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnStorageDeviceChange_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetNATType
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetNATType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnConnectionStatusChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsControllerConnected
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsControllerConnected_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearControllerChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddControllerChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnControllerChange_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execSetNetworkNotificationPosition_Parms
{
	unsigned char                                      NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetNetworkNotificationPosition
// [0x00020002] 
struct UOnlineSubsystemGFWL_execGetNetworkNotificationPosition_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearExternalUIChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddExternalUIChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnExternalUIChange_Parms
{
	unsigned long                                      bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnLinkStatusChange_Parms
{
	unsigned long                                      bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.HasLinkConnection
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execHasLinkConnection_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetKeyboardInputResults
// [0x00420002] 
struct UOnlineSubsystemGFWL_execGetKeyboardInputResults_Parms
{
	unsigned char                                      bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearKeyboardInputDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddKeyboardInputDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnKeyboardInputComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TitleText;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowPlayersUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowGuideUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowGuideUI_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowAchievementsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowMessagesUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowMessagesUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowGamerCardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowFeedbackUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearLoginCancelledDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddLoginCancelledDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearLoginStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddLoginStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowFriendsInviteUI
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UOnlineSubsystemGFWL_eventShowFriendsInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsInParty
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsInParty_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowPartySessionsUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowPartySessionsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowPartyUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowPartyUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowFriendsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsMuted
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AreAnyFriends
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execAreAnyFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FFriendsQuery >                     Query;                                            		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsFriend
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execCanShowPresenceInformation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execCanPurchaseContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execCanDownloadUserContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execCanCommunicate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execCanPlayOnline_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetPlayerNickname
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetUniquePlayerId
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x002C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsLocalLogin
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsLocalLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.IsGuestLogin
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execIsGuestLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.GetLoginStatus
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      useCache : 1;                                     		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnLogoutCompleted_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.Logout
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execLogout_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ClearLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execClearLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AddLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemGFWL_execAddLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnLoginFailed_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.AutoLogin
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execAutoLogin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.Login
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     LoginName;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWantsLocalOnly : 1;                              		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGFWL_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UOnlineSubsystemGFWL_eventExit_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UOnlineSubsystemGFWL_eventInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnFriendsChange_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnMutingChange_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnLoginCancelled_Parms
{
};

// Function OnlineSubsystemGFWL.OnlineSubsystemGFWL.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemGFWL_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGFWL.PgOnlineSubsystemGFWL.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
struct UPgOnlineSubsystemGFWL_execUpdateOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldRefreshOnlineData : 1;                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.PgOnlineSubsystemGFWL.ShowContentMarketplaceUI
// [0x00024400] ( FUNC_Native )
struct UPgOnlineSubsystemGFWL_execShowContentMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                OfferId;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.PgOnlineSubsystemGFWL.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSubsystemGFWL_execDestroyOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.PgOnlineSubsystemGFWL.EndOnlineGame
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSubsystemGFWL_execEndOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.PgOnlineSubsystemGFWL.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
struct UPgOnlineSubsystemGFWL_execFlushOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.PgOnlineSubsystemGFWL.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct UPgOnlineSubsystemGFWL_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.PgOnlineSubsystemGFWL.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPgOnlineSubsystemGFWL_eventInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGFWL.PgOnlineSubsystemGFWL.OnShowMarketplaceUIComplete
// [0x00120000] 
struct UPgOnlineSubsystemGFWL_execOnShowMarketplaceUIComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif