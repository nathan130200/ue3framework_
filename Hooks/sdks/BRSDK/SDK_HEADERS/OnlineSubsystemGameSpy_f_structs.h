/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemGameSpy_f_structs.h
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

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.QueryNonAdvertisedData
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceGameSpy_execQueryNonAdvertisedData_Parms
{
	int                                                StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceGameSpy_execClearUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceGameSpy_execAddUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceGameSpy_execOnUnregisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceGameSpy_execUnregisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceGameSpy_execClearRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceGameSpy_execAddRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceGameSpy_execOnRegisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.RegisterPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceGameSpy_execRegisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasInvited : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.AcceptGameInvite
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceGameSpy_execAcceptGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceGameSpy_execOnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.ClearGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineGameInterfaceGameSpy_execClearGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.AddGameInviteAcceptedDelegate
// [0x00020002] 
struct UOnlineGameInterfaceGameSpy_execAddGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
struct UOnlineGameInterfaceGameSpy_execUpdateOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldRefreshOnlineData : 1;                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.clearReconnection
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execclearReconnection_Parms
{
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.JoinGameByURL
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execJoinGameByURL_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     LocationString;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetOnlineStatusPwd
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execSetOnlineStatusPwd_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bPasswordServer : 1;                              		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.DisableVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execDisableVoice_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.EnableVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execEnableVoice_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsVoiceEnabled
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execIsVoiceEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetFriendshipList
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetFriendshipList_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UpdateBuddyFriendship
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execUpdateBuddyFriendship_Parms
{
	int                                                RecordId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     nick;                                             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Status;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearGetFriendshipListDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearGetFriendshipListDelegate_Parms
{
	struct FScriptDelegate                             GetFriendshipListDelegate;                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddGetFriendshipListDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddGetFriendshipListDelegate_Parms
{
	struct FScriptDelegate                             GetFriendshipListDelegate;                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearUpdateBuddyFriendshipCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearUpdateBuddyFriendshipCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateBuddyFriendshipCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddUpdateBuddyFriendshipCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddUpdateBuddyFriendshipCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateBuddyFriendshipCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnGetFriendshipListComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnGetFriendshipListComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnUpdateBuddyFriendshipComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnUpdateBuddyFriendshipComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                RecordId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     nick;                                             		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                friendStatus;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetLastBuddyImageIndexArray
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execGetLastBuddyImageIndexArray_Parms
{
	TArray< struct FBuddyImageIndexContainer >         ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearGetBuddyListImageIndexCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearGetBuddyListImageIndexCompleteDelegate_Parms
{
	struct FScriptDelegate                             GetBuddyListImageIndexCompleteDelegate;           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddGetBuddyListImageIndexCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddGetBuddyListImageIndexCompleteDelegate_Parms
{
	struct FScriptDelegate                             GetBuddyListImageIndexCompleteDelegate;           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnGetBuddyListImageIndexComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnGetBuddyListImageIndexComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetBuddyListImageIndex
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetBuddyListImageIndex_Parms
{
	TArray< struct FString >                           NickNames;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetCurrentByteData
// [0x00420002] 
struct UOnlineSubsystemGameSpy_execGetCurrentByteData_Parms
{
	TArray< unsigned char >                            Data;                                             		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearWriteByteDataCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearWriteByteDataCompleteDelegate_Parms
{
	struct FScriptDelegate                             WriteByteDataCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddWriteByteDataCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddWriteByteDataCompleteDelegate_Parms
{
	struct FScriptDelegate                             WriteByteDataCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnWriteByteDataComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnWriteByteDataComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WriteByteData
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execWriteByteData_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< unsigned char >                            Data;                                             		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     table_name;                                       		// 0x0010 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     field_name;                                       		// 0x001C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bCreateNew : 1;                                   		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadByteDataCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadByteDataCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadByteDataCompleteDelegate;                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadByteDataCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadByteDataCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadByteDataCompleteDelegate;                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadByteDataComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadByteDataComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadByteData
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadByteData_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     table_name;                                       		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     field_name;                                       		// 0x0010 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ValidateAndSaveKey
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execValidateAndSaveKey_Parms
{
	struct FString                                     CDKey;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearOnValidateAndSaveKeyDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearOnValidateAndSaveKeyDelegate_Parms
{
	struct FScriptDelegate                             OnValidateAndSaveKeyDelegate;                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddOnValidateAndSaveKeyDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddOnValidateAndSaveKeyDelegate_Parms
{
	struct FScriptDelegate                             OnValidateAndSaveKeyDelegate;                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnValidateAndSaveKey
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnValidateAndSaveKey_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPublicAddress
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetPublicAddress_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatSendMessage
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execChatSendMessage_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearOnChatUserPartedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearOnChatUserPartedDelegate_Parms
{
	struct FScriptDelegate                             ChatUserPartedDelegate;                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddOnChatUserPartedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddOnChatUserPartedDelegate_Parms
{
	struct FScriptDelegate                             ChatUserPartedDelegate;                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatUserParted
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnChatUserParted_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearOnChatUserJoinedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearOnChatUserJoinedDelegate_Parms
{
	struct FScriptDelegate                             ChatUserJoinedDelegate;                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddOnChatUserJoinedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddOnChatUserJoinedDelegate_Parms
{
	struct FScriptDelegate                             ChatUserJoinedDelegate;                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatUserJoined
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnChatUserJoined_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearOnChatMessageReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearOnChatMessageReceivedDelegate_Parms
{
	struct FScriptDelegate                             ChatMessageReceivedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddOnChatMessageReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddOnChatMessageReceivedDelegate_Parms
{
	struct FScriptDelegate                             ChatMessageReceivedDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatMessageReceived
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnChatMessageReceived_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatLeaveChannel
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execChatLeaveChannel_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatGetNumUsers
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execChatGetNumUsers_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearChatEnterChannelCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearChatEnterChannelCompleteDelegate_Parms
{
	struct FScriptDelegate                             ChatEnterChannelCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddChatEnterChannelCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddChatEnterChannelCompleteDelegate_Parms
{
	struct FScriptDelegate                             ChatEnterChannelCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatEnterChannelComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnChatEnterChannelComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatEnterChannel
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execChatEnterChannel_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatDisconnect
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execChatDisconnect_Parms
{
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearChatDisconnectedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearChatDisconnectedDelegate_Parms
{
	struct FScriptDelegate                             ChatDisconnectedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddChatDisconnectedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddChatDisconnectedDelegate_Parms
{
	struct FScriptDelegate                             ChatDisconnectedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatDisconnected
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnChatDisconnected_Parms
{
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearChatConnectedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearChatConnectedDelegate_Parms
{
	struct FScriptDelegate                             ChatConnectedDelegate;                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddChatConnectedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddChatConnectedDelegate_Parms
{
	struct FScriptDelegate                             ChatConnectedDelegate;                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatConnect
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execChatConnect_Parms
{
	struct FString                                     Server;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NickName;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsChannelConnected
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execIsChannelConnected_Parms
{
	struct FString                                     sChannel;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsChatConnected
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execIsChatConnected_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatConnected
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnChatConnected_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReturnBuddyImageIndex
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReturnBuddyImageIndex_Parms
{
	struct FBuddyImageIndexContainer                   BuddyImageIndex;                                  		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearGetBuddyImageIndexCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearGetBuddyImageIndexCompleteDelegate_Parms
{
	struct FScriptDelegate                             GetBuddyImageIndexCompleteDelegate;               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddGetBuddyImageIndexCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddGetBuddyImageIndexCompleteDelegate_Parms
{
	struct FScriptDelegate                             GetBuddyImageIndexCompleteDelegate;               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnGetBuddyImageIndexComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnGetBuddyImageIndexComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetBuddyImageIndex
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetBuddyImageIndex_Parms
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearCreateBuddyImageIndexCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearCreateBuddyImageIndexCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateBuddyImageIndexCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddCreateBuddyImageIndexCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddCreateBuddyImageIndexCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateBuddyImageIndexCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnCreateBuddyImageIndexComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnCreateBuddyImageIndexComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateBuddyImageIndex
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execCreateBuddyImageIndex_Parms
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ImageIndex;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearRemoveBuddyRequestCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearRemoveBuddyRequestCompleteDelegate_Parms
{
	struct FScriptDelegate                             RemoveBuddyRequestCompleteDelegate;               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddRemoveBuddyRequestCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddRemoveBuddyRequestCompleteDelegate_Parms
{
	struct FScriptDelegate                             RemoveBuddyRequestCompleteDelegate;               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnRemoveBuddyRequestComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnRemoveBuddyRequestComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RemoveBuddyRequest
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execRemoveBuddyRequest_Parms
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetBuddyRequestList
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetBuddyRequestList_Parms
{
	TArray< struct FRequestEntry >                     RequestList;                                      		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadBuddyRequestListCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadBuddyRequestListCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadBuddyRequestListCompleteDelegate;             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadBuddyRequestListCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadBuddyRequestListCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadBuddyRequestListCompleteDelegate;             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadBuddyRequestListComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadBuddyRequestListComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadBuddyRequestList
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadBuddyRequestList_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearCreateBuddyRequestCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearCreateBuddyRequestCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateBuddyRequestCompleteDelegate;               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddCreateBuddyRequestCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddCreateBuddyRequestCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateBuddyRequestCompleteDelegate;               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnCreateBuddyRequestComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnCreateBuddyRequestComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                RecordId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NickName;                                         		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                Id;                                               		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateBuddyRequest
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execCreateBuddyRequest_Parms
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                Id;                                               		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearRemoveBuddyAuthorizationCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearRemoveBuddyAuthorizationCompleteDelegate_Parms
{
	struct FScriptDelegate                             RemoveBuddyAuthorizationCompleteDelegate;         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddRemoveBuddyAuthorizationCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddRemoveBuddyAuthorizationCompleteDelegate_Parms
{
	struct FScriptDelegate                             RemoveBuddyAuthorizationCompleteDelegate;         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnRemoveBuddyAuthorizationComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnRemoveBuddyAuthorizationComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RemoveBuddyAuthorization
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execRemoveBuddyAuthorization_Parms
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetBuddyAuthorizationList
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetBuddyAuthorizationList_Parms
{
	TArray< struct FString >                           AuthorizationList;                                		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadBuddyAuthorizationListCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadBuddyAuthorizationListCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadBuddyAuthorizationListCompleteDelegate;       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadBuddyAuthorizationListCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadBuddyAuthorizationListCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadBuddyAuthorizationListCompleteDelegate;       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadBuddyAuthorizationListComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadBuddyAuthorizationListComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadBuddyAuthorizationList
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadBuddyAuthorizationList_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearCreateBuddyAuthorizationCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearCreateBuddyAuthorizationCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateBuddyAuthorizationCompleteDelegate;         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddCreateBuddyAuthorizationCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddCreateBuddyAuthorizationCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateBuddyAuthorizationCompleteDelegate;         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnCreateBuddyAuthorizationComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnCreateBuddyAuthorizationComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                RecordId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     NickName;                                         		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateBuddyAuthorization
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execCreateBuddyAuthorization_Parms
{
	struct FString                                     NickName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetSearchFriendsList
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetSearchFriendsList_Parms
{
	TArray< struct FString >                           SearchResult;                                     		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearSearchFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearSearchFriendsCompleteDelegate_Parms
{
	struct FScriptDelegate                             SearchFriendsCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddSearchFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddSearchFriendsCompleteDelegate_Parms
{
	struct FScriptDelegate                             SearchFriendsCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnSearchFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnSearchFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SearchFriends
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execSearchFriends_Parms
{
	struct FString                                     SearchNickName;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetVersion
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetVersion_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearQueryAvailableUpdatesDownloadCancel
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearQueryAvailableUpdatesDownloadCancel_Parms
{
	struct FScriptDelegate                             QueryUpdatesDelegate;                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddQueryAvailableUpdatesDownloadCancel
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddQueryAvailableUpdatesDownloadCancel_Parms
{
	struct FScriptDelegate                             QueryUpdatesDelegate;                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearQueryAvailableUpdatesDownloadProgress
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearQueryAvailableUpdatesDownloadProgress_Parms
{
	struct FScriptDelegate                             QueryUpdatesDelegate;                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddQueryAvailableUpdatesDownloadProgress
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddQueryAvailableUpdatesDownloadProgress_Parms
{
	struct FScriptDelegate                             QueryUpdatesDelegate;                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearQueryAvailableUpdatesDownloadComplete
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearQueryAvailableUpdatesDownloadComplete_Parms
{
	struct FScriptDelegate                             QueryUpdatesDelegate;                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddQueryAvailableUpdatesDownloadComplete
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddQueryAvailableUpdatesDownloadComplete_Parms
{
	struct FScriptDelegate                             QueryUpdatesDelegate;                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetAvailableUpdatesProgress
// [0x00420002] 
struct UOnlineSubsystemGameSpy_execGetAvailableUpdatesProgress_Parms
{
	float                                              fProgress;                                        		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetAvailableUpdatesCounts
// [0x00420002] 
struct UOnlineSubsystemGameSpy_execGetAvailableUpdatesCounts_Parms
{
	int                                                NewUpdates;                                       		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearQueryAvailableUpdatesComplete
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearQueryAvailableUpdatesComplete_Parms
{
	struct FScriptDelegate                             QueryUpdatesDelegate;                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddQueryAvailableUpdatesComplete
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddQueryAvailableUpdatesComplete_Parms
{
	struct FScriptDelegate                             QueryUpdatesDelegate;                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnQueryAvailableUpdatesDownloadCancel
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnQueryAvailableUpdatesDownloadCancel_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnQueryAvailableUpdatesDownloadProgress
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnQueryAvailableUpdatesDownloadProgress_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnQueryAvailableUpdatesDownloadComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnQueryAvailableUpdatesDownloadComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnQueryAvailableUpdatesComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnQueryAvailableUpdatesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.QueryAvailableUpdatesDownloadCancel
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execQueryAvailableUpdatesDownloadCancel_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.QueryAvailableUpdatesDownload
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execQueryAvailableUpdatesDownload_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.QueryAvailableUpdates
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execQueryAvailableUpdates_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetAchievements
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FAchievementDetails >               Achievements;                                     		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TitleId;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0014 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadAchievementsComplete_Parms
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadAchievements
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnUnlockAchievementComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnlockAchievement
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execUnlockAchievement_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.DeleteMessage
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execDeleteMessage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetMessageIndex
// [0x00820002] 
struct UOnlineSubsystemGameSpy_execGetMessageIndex_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FOnlineFriendMessage                        Message;                                          		// 0x0004 (0x0030) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0034 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             I;                                                		// 0x0038 (0x0004) [0x0000000000000000]              
	// struct FOnlineFriendMessage                     msg;                                              		// 0x003C (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnmuteAll
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execUnmuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.MuteAll
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execMuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CalcAggregateSkill
// [0x00420000] 
struct UOnlineSubsystemGameSpy_execCalcAggregateSkill_Parms
{
	TArray< struct FDouble >                           Mus;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FDouble >                           Sigmas;                                           		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FDouble                                     OutAggregateMu;                                   		// 0x0018 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FDouble                                     OutAggregateSigma;                                		// 0x0020 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RegisterStatGuid
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execRegisterStatGuid_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ClientStatGuid;                                   		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetClientStatGuid
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetClientStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddRegisterHostStatGuidCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddRegisterHostStatGuidCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnRegisterHostStatGuidComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnRegisterHostStatGuidComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RegisterHostStatGuid
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execRegisterHostStatGuid_Parms
{
	struct FString                                     HostStatGuid;                                     		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetHostStatGuid
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetHostStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFriendMessageSentDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearFriendMessageSentDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendMessageSentDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddFriendMessageSentDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFriendMessageSent
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnFriendMessageSent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RecievedPlayer;                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFriendMessageReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendMessageReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFriendMessageReceived
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnFriendMessageReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SendingNick;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetFriendMessages
// [0x00420002] 
struct UOnlineSubsystemGameSpy_execGetFriendMessages_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriendMessage >              FriendMessages;                                   		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnJoinFriendGameComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnJoinFriendGameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.JoinFriendGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execJoinFriendGame_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReceivedGameInviteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReceivedGameInviteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReceivedGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviterName;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execSendGameInviteToFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Friends;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execSendGameInviteToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Text;                                             		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execSendMessageToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFriendInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFriendInviteReceived
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnFriendInviteReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     RequestingNick;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execDenyFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execAcceptFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RemoveFriend
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execRemoveFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnAddFriendByNameComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnAddFriendByNameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     nick;                                             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendByName
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execAddFriendByName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     FriendName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriend
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execAddFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewFriend;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetKeyboardInputResults
// [0x00420002] 
struct UOnlineSubsystemGameSpy_execGetKeyboardInputResults_Parms
{
	unsigned char                                      bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearKeyboardInputDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddKeyboardInputDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnKeyboardInputComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execShowKeyboardUI_Parms
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

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FLocalizedStringSetting >           LocalizedStringSettings;                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSettingsProperty >                 Properties;                                       		// 0x0014 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetLocalAccountNames
// [0x00420000] 
struct UOnlineSubsystemGameSpy_execGetLocalAccountNames_Parms
{
	TArray< struct FString >                           Accounts;                                         		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.DeleteLocalAccount
// [0x00024000] 
struct UOnlineSubsystemGameSpy_execDeleteLocalAccount_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RenameLocalAccount
// [0x00024000] 
struct UOnlineSubsystemGameSpy_execRenameLocalAccount_Parms
{
	struct FString                                     NewUserName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     OldUserName;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0018 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateLocalAccount
// [0x00024000] 
struct UOnlineSubsystemGameSpy_execCreateLocalAccount_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearCreateOnlineAccountCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearCreateOnlineAccountCompletedDelegate_Parms
{
	struct FScriptDelegate                             AccountCreateDelegate;                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddCreateOnlineAccountCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddCreateOnlineAccountCompletedDelegate_Parms
{
	struct FScriptDelegate                             AccountCreateDelegate;                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnCreateOnlineAccountCompleted
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnCreateOnlineAccountCompleted_Parms
{
	unsigned char                                      ErrorStatus;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateOnlineAccount
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execCreateOnlineAccount_Parms
{
	struct FString                                     UserName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     EmailAddress;                                     		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ProductKey;                                       		// 0x0024 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetTitleFileState
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execGetTitleFileState_Parms
{
	struct FString                                     FileName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetTitleFileContents_Parms
{
	struct FString                                     FileName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< unsigned char >                            FileContents;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadTitleFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadTitleFile_Parms
{
	struct FString                                     FileToRead;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     FileName;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execClearStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execAddStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnStorageDeviceChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnStorageDeviceChange_Parms
{
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetLocale
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execGetLocale_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetNATType
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetNATType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnConnectionStatusChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsControllerConnected
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execIsControllerConnected_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearControllerChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddControllerChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnControllerChange_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetNetworkNotificationPosition
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execSetNetworkNotificationPosition_Parms
{
	unsigned char                                      NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetNetworkNotificationPosition
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execGetNetworkNotificationPosition_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execClearExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execAddExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnExternalUIChange_Parms
{
	unsigned long                                      bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnLinkStatusChange_Parms
{
	unsigned long                                      bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.HasLinkConnection
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execHasLinkConnection_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPlayerUniqueNetIdFromIndex
// [0x00820802] ( FUNC_Event )
struct UOnlineSubsystemGameSpy_eventGetPlayerUniqueNetIdFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FUniqueNetId                             Zero;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
struct UOnlineSubsystemGameSpy_eventGetPlayerNicknameFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execWriteOnlinePlayerScores_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlinePlayerScore >                PlayerScores;                                     		// 0x000C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFlushOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnFlushOnlineStatsComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execFlushOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execWriteOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Player;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.FreeStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execFreeStats_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadOnlineStatsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadOnlineStatsByRankAroundPlayer_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumRows;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadOnlineStatsByRank_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                StartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumToRead;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadOnlineStatsForFriends
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadOnlineStatsForFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadOnlineStats_Parms
{
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execSetSpeechRecognitionObject_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SelectVocabulary
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execSelectVocabulary_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnRecognitionComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnRecognitionComplete_Parms
{
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetRecognitionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FSpeechRecognizedWord >             Words;                                            		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execStopSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execStartSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execStopNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execStartNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddPlayerTalkingDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnPlayerTalkingStateChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnPlayerTalkingStateChange_Parms
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTalking : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execUnmuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSystemWide : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execMuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSystemWide : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execSetRemoteTalkerPriority_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Priority;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execIsHeadsetPresent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execIsRemotePlayerTalking_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execIsLocalPlayerTalking_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execUnregisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execRegisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execUnregisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execRegisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriend >                     Friends;                                          		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnWritePlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WritePlayerStorage
// [0x00024000] 
struct UOnlineSubsystemGameSpy_execWritePlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeviceID;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPlayerStorage
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execGetPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadPlayerStorageForNetIdComplete_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadPlayerStorageForNetId
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execReadPlayerStorageForNetId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NetId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadPlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadPlayerStorage
// [0x00024000] 
struct UOnlineSubsystemGameSpy_execReadPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeviceID;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnWriteProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execWriteProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetProfileSettings
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execGetProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execReadProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execClearLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execAddLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execClearLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execAddLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ShowFriendsUI
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execShowFriendsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsMuted
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execIsMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AreAnyFriends
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execAreAnyFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FFriendsQuery >                     Query;                                            		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsFriend
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execIsFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanShowPresenceInformation
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execCanShowPresenceInformation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanViewPlayerProfiles
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanPurchaseContent
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execCanPurchaseContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanDownloadUserContent
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execCanDownloadUserContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execCanCommunicate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execCanPlayOnline_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPlayerNickname
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetUniquePlayerId
// [0x00420002] 
struct UOnlineSubsystemGameSpy_execGetUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsLocalLogin
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execIsLocalLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsGuestLogin
// [0x00020000] 
struct UOnlineSubsystemGameSpy_execIsGuestLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnLogoutCompleted_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.Logout
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execLogout_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execClearLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemGameSpy_execAddLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginFailedDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnLoginFailed_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AutoLogin
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execAutoLogin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.LoginPreAuthenticated
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execLoginPreAuthenticated_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Token;                                            		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Challenge;                                        		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWantsLocalOnly : 1;                              		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.Login
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     LoginName;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWantsLocalOnly : 1;                              		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemGameSpy_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnFriendsChange_Parms
{
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnMutingChange_Parms
{
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnLoginCancelled_Parms
{
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemGameSpy_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UOnlineSubsystemGameSpy_eventInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif