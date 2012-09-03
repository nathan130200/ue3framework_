/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPW_f_structs.h
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

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnRetrieveGameSettingsForIPDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearOnRetrieveGameSettingsForIPDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnRetrieveGameSettingsForIPDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddOnRetrieveGameSettingsForIPDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRetrievedGameSettingsForIP
// [0x00520000] 
struct UOnlineSubsystemPW_execOnRetrievedGameSettingsForIP_Parms
{
	unsigned long                                      bSuccessful : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FOnlineGameSearchResult                     ConnectResult;                                    		// 0x0004 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RetrieveGameSettingsForIP
// [0x00020000] 
struct UOnlineSubsystemPW_execRetrieveGameSettingsForIP_Parms
{
	struct FString                                     IPAddress;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReregisterLocalPlayers
// [0x00020000] 
struct UOnlineSubsystemPW_execReregisterLocalPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFullVersionUnlockDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearFullVersionUnlockDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFullVersionUnlockDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddFullVersionUnlockDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFullVersionUnlock
// [0x00120000] 
struct UOnlineSubsystemPW_execOnFullVersionUnlock_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CancelNATNegotiation
// [0x00020000] 
struct UOnlineSubsystemPW_execCancelNATNegotiation_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetArbitratedPlayers
// [0x00020000] 
struct UOnlineSubsystemPW_execGetArbitratedPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineArbitrationRegistrant >      ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnArbitrationRegistrationComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnArbitrationRegistrationComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterForArbitration
// [0x00020002] 
struct UOnlineSubsystemPW_execRegisterForArbitration_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryNonAdvertisedData
// [0x00020002] 
struct UOnlineSubsystemPW_execQueryNonAdvertisedData_Parms
{
	int                                                StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnPartyPublicGameReadyDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnPartyPublicGameReadyDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnPartyPublicGameReadyDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnPartyPublicGameReadyDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyPublicGameReady
// [0x00120000] 
struct UOnlineSubsystemPW_execOnPartyPublicGameReady_Parms
{
	struct FString                                     ConnectString;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnPartyRankedGameReadyDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnPartyRankedGameReadyDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnPartyRankedGameReadyDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnPartyRankedGameReadyDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyRankedGameReady
// [0x00520000] 
struct UOnlineSubsystemPW_execOnPartyRankedGameReady_Parms
{
	class UOnlineGameSearch*                           SearchResult;                                     		// 0x0000 (0x0004) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnPartyJoinedQueueDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnPartyJoinedQueueDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnPartyJoinedQueueDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnPartyJoinedQueueDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyJoinedQueue
// [0x00120000] 
struct UOnlineSubsystemPW_execOnPartyJoinedQueue_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNotifyPartyDisbandedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearNotifyPartyDisbandedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNotifyPartyDisbandedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddNotifyPartyDisbandedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNotifyPartyDisbanded
// [0x00120000] 
struct UOnlineSubsystemPW_execOnNotifyPartyDisbanded_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNotifyPartyMembersUpdatedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearNotifyPartyMembersUpdatedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNotifyPartyMembersUpdatedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddNotifyPartyMembersUpdatedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNotifyPartyMembersUpdated
// [0x00120000] 
struct UOnlineSubsystemPW_execOnNotifyPartyMembersUpdated_Parms
{
	TArray< struct FOnlineFriend >                     UpdatedMembers;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNotifyPartyMembersAddedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearNotifyPartyMembersAddedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNotifyPartyMembersAddedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddNotifyPartyMembersAddedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNotifyPartyMembersAdded
// [0x00120000] 
struct UOnlineSubsystemPW_execOnNotifyPartyMembersAdded_Parms
{
	TArray< struct FOnlineFriend >                     AddedMembers;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNotifyPartyMemberRemovedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearNotifyPartyMemberRemovedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNotifyPartyMemberRemovedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddNotifyPartyMemberRemovedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNotifyPartyMemberRemoved
// [0x00120000] 
struct UOnlineSubsystemPW_execOnNotifyPartyMemberRemoved_Parms
{
	struct FUniqueNetId                                Remover;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RemovedPlayer;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPartyInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearPartyInviteReceivedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPartyInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddPartyInviteReceivedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyInviteReceived
// [0x00120000] 
struct UOnlineSubsystemPW_execOnPartyInviteReceived_Parms
{
	struct FString                                     InviterName;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.NotifyPartyMembersOfPublicGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execNotifyPartyMembersOfPublicGame_Parms
{
	struct FString                                     ConnectString;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPartyGameSearchCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearPartyGameSearchCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPartyGameSearchCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddPartyGameSearchCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SearchForGameAsParty
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSearchForGameAsParty_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyGameSearchComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnPartyGameSearchComplete_Parms
{
	unsigned long                                      bSuccessful : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPromoteNewLeaderCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearPromoteNewLeaderCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPromoteNewLeaderCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddPromoteNewLeaderCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.PromoteNewLeader
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execPromoteNewLeader_Parms
{
	struct FUniqueNetId                                NewLeaderId;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyPromote
// [0x00120000] 
struct UOnlineSubsystemPW_execOnPartyPromote_Parms
{
	unsigned long                                      bSuccessful : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      ResponseCode;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRemovePartyMemberCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearRemovePartyMemberCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRemovePartyMemberCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddRemovePartyMemberCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RemovePartyMember
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execRemovePartyMember_Parms
{
	struct FUniqueNetId                                PartyMemberId;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRemovePartyMember
// [0x00120000] 
struct UOnlineSubsystemPW_execOnRemovePartyMember_Parms
{
	unsigned long                                      Successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      ResponseCode;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRespondToPartyInviteCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearRespondToPartyInviteCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRespondToPartyInviteCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddRespondToPartyInviteCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RespondToPartyInvite
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execRespondToPartyInvite_Parms
{
	unsigned long                                      bAccept : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyInviteRespond
// [0x00120000] 
struct UOnlineSubsystemPW_execOnPartyInviteRespond_Parms
{
	unsigned long                                      Successful : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      ResponseCode;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearInviteToPartyCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearInviteToPartyCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddInviteToPartyCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddInviteToPartyCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.InviteToParty
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execInviteToParty_Parms
{
	struct FUniqueNetId                                InvitePlayerId;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnInviteToParty
// [0x00120000] 
struct UOnlineSubsystemPW_execOnInviteToParty_Parms
{
	unsigned long                                      bSuccessful : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      ResponseCode;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPartyMembers
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetPartyMembers_Parms
{
	TArray< struct FOnlineFriend >                     OutPartyMembers;                                  		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFriendInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriendInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFriendInviteReceived
// [0x00120000] 
struct UOnlineSubsystemPW_execOnFriendInviteReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     RequestingNick;                                   		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execDenyFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execAcceptFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RemoveFriend
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execRemoveFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnAddFriendByNameComplete
// [0x00124000] 
struct UOnlineSubsystemPW_execOnAddFriendByNameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      ResponseCode;                                     		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FOnlineFriend                               FriendItem;                                       		// 0x0008 (0x0084) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriendByName
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execAddFriendByName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     FriendName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriend
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execAddFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewFriend;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriend >                     Friends;                                          		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0018 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetNumberOfCurrentPlayersCached
// [0x00020002] 
struct UOnlineSubsystemPW_execGetNumberOfCurrentPlayersCached_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnGetNumberOfCurrentPlayersComplete_Parms
{
	int                                                NumTotalPlayers;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetNumberOfCurrentPlayers
// [0x00020000] 
struct UOnlineSubsystemPW_execGetNumberOfCurrentPlayers_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearJoinMigratedOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddJoinMigratedOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnJoinMigratedOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnJoinMigratedOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinMigratedOnlineGame
// [0x00420000] 
struct UOnlineSubsystemPW_execJoinMigratedOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x000C (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearMigrateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearMigrateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddMigrateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddMigrateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnMigrateOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnMigrateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.MigrateOnlineGame
// [0x00020000] 
struct UOnlineSubsystemPW_execMigrateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearRecalculateSkillRatingCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddRecalculateSkillRatingCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRecalculateSkillRatingComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnRecalculateSkillRatingComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RecalculateSkillRating
// [0x00420000] 
struct UOnlineSubsystemPW_execRecalculateSkillRating_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AcceptGameInvite
// [0x00020000] 
struct UOnlineSubsystemPW_execAcceptGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineSubsystemPW_execOnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execDestroyOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnEndOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnEndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.EndOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execEndOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnStartOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnStartOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StartOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execStartOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnUnregisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnregisterPlayers
// [0x00420000] 
struct UOnlineSubsystemPW_execUnregisterPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execUnregisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnRegisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterPlayers
// [0x00420000] 
struct UOnlineSubsystemPW_execRegisterPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execRegisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasInvited : 1;                                  		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FreeSearchResults
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execFreeSearchResults_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetGameSearch
// [0x00020002] 
struct UOnlineSubsystemPW_execGetGameSearch_Parms
{
	class UOnlineGameSearch*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.BindPlatformSpecificSessionToSearch
// [0x00020000] 
struct UOnlineSubsystemPW_execBindPlatformSpecificSessionToSearch_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
struct UOnlineSubsystemPW_execReadPlatformSpecificSessionInfoBySessionName_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadPlatformSpecificSessionInfo
// [0x00420000] 
struct UOnlineSubsystemPW_execReadPlatformSpecificSessionInfo_Parms
{
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearQosStatusChangedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddQosStatusChangedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQosStatusChanged
// [0x00120000] 
struct UOnlineSubsystemPW_execOnQosStatusChanged_Parms
{
	int                                                NumComplete;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumTotal;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FindPartyRankedMatch
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execFindPartyRankedMatch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CancelRankedMatchSearch
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execCancelRankedMatchSearch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnRankedMatchFindCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnRankedMatchFindCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnRankedMatchFindCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnRankedMatchFindCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRankedMatchFindComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnRankedMatchFindComplete_Parms
{
	unsigned long                                      bSuccessful : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FindRankedMatch
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execFindRankedMatch_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetPartyRankedMatchSearch
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSetPartyRankedMatchSearch_Parms
{
	class UOnlineGameSearch*                           RankedSearch;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetRankedMatchSearch
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSetRankedMatchSearch_Parms
{
	class UOnlineGameSearch*                           RankedSearch;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryRankForPlayerDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearQueryRankForPlayerDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryRankForPlayerDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddQueryRankForPlayerDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQueryRankForPlayer
// [0x00120000] 
struct UOnlineSubsystemPW_execOnQueryRankForPlayer_Parms
{
	struct FUniqueNetId                                ForPlayer;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Rank;                                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryRankForPlayers
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQueryRankForPlayers_Parms
{
	TArray< struct FUniqueNetId >                      ForPlayers;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRankedMatchJoinQueueDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearRankedMatchJoinQueueDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRankedMatchJoinQueueDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddRankedMatchJoinQueueDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRankedMatchJoinQueue
// [0x00120000] 
struct UOnlineSubsystemPW_execOnRankedMatchJoinQueue_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	int                                                QueuePlacement;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                EstimatedWaitSeconds;                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetResolvedConnectString_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ConnectInfo;                                      		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnJoinOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnJoinOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinOnlineGameByIP
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execJoinOnlineGameByIP_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ConnectIP;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ConnectPort;                                      		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemPW_execJoinOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x000C (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnCancelFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execCancelFindOnlineGames_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execFindOnlineGames_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetServerTimeString
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetServerTimeString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetGameSettings
// [0x00020002] 
struct UOnlineSubsystemPW_execGetGameSettings_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             SessionIndex;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendPlayerList
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSendPlayerList_Parms
{
	TArray< class APlayerReplicationInfo* >            Players;                                          		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnUpdateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execUpdateOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldRefreshOnlineData : 1;                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnCreateOnlineGameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execCreateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         NewGameSettings;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDownloadedFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execClearDownloadedFile_Parms
{
	struct FString                                     FileName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execClearDownloadedFiles_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTitleFileState
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetTitleFileState_Parms
{
	struct FString                                     FileName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetTitleFileContents_Parms
{
	struct FString                                     FileName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< unsigned char >                            FileContents;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     FileName;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadTitleFile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execReadTitleFile_Parms
{
	struct FString                                     FileToRead;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ServerLogMessage
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execServerLogMessage_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     EventName;                                        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     EventData;                                        		// 0x0014 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClientLogMessage
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execClientLogMessage_Parms
{
	struct FString                                     InMessage;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFuseInventoryCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearFuseInventoryCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFuseInventoryCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddFuseInventoryCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFuseInventoryComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnFuseInventoryComplete_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ResultGuid;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FuseInventory
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execFuseInventory_Parms
{
	struct FString                                     DataNodeAGuid;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DataNodeBGuid;                                    		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     AdditionalFuseInfo;                               		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRegionChangeCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearRegionChangeCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRegionChangeCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddRegionChangeCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRegionChangeComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnRegionChangeComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegionChange
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execRegionChange_Parms
{
	unsigned char                                      NewRegion;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFullChange : 1;                                  		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetCurrentRegion
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetCurrentRegion_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearMailNotificationDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearMailNotificationDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddMailNotificationDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddMailNotificationDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnMailNotification
// [0x00120000] 
struct UOnlineSubsystemPW_execOnMailNotification_Parms
{
	struct FString                                     MailData;                                         		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearMarkMailReadCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearMarkMailReadCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddMarkMailReadCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddMarkMailReadCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnMarkMailReadComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnMarkMailReadComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.MarkMailRead
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execMarkMailRead_Parms
{
	struct FString                                     MailID;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOpenMailCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOpenMailCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOpenMailCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOpenMailCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnOpenMailComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnOpenMailComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OpenMail
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execOpenMail_Parms
{
	struct FString                                     MailID;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearSendMailCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearSendMailCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddSendMailCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddSendMailCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnSendMailComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnSendMailComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendMail
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSendMail_Parms
{
	struct FString                                     ToPlayer;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Subject;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ItemA;                                            		// 0x0024 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ItemB;                                            		// 0x0030 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ItemC;                                            		// 0x003C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ItemD;                                            		// 0x0048 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                GPAmount;                                         		// 0x0054 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ZPAmount;                                         		// 0x0058 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x005C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDestroyMailCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearDestroyMailCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddDestroyMailCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddDestroyMailCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnDestroyMailComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnDestroyMailComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DestroyMail
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execDestroyMail_Parms
{
	struct FString                                     MailID;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryMailCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearQueryMailCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryMailCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddQueryMailCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQueryMailComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnQueryMailComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MailData;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryMail
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQueryMail_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearCharacterCreatedCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearCharacterCreatedCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddCharacterCreatedCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddCharacterCreatedCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnCharacterCreated
// [0x00120000] 
struct UOnlineSubsystemPW_execOnCharacterCreated_Parms
{
	unsigned char                                      LocalUseNum;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CreateCharacter
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execCreateCharacter_Parms
{
	struct FString                                     NewName;                                          		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bNewGender : 1;                                   		// 0x000C (0x0004) [0x0000000000000082] [0x00000001] ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNameChangedCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearNameChangedCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNameChangedCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddNameChangedCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNameChanged
// [0x00120000] 
struct UOnlineSubsystemPW_execOnNameChanged_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ChangeName
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execChangeName_Parms
{
	struct FString                                     NewName;                                          		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearXPAddCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearXPAddCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddXPAddCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddXPAddCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnXPAdded
// [0x00120000] 
struct UOnlineSubsystemPW_execOnXPAdded_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddXP
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execAddXP_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	int                                                Amount;                                           		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDestroyItemCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearDestroyItemCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddDestroyItemCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddDestroyItemCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnDestroyItem
// [0x00120000] 
struct UOnlineSubsystemPW_execOnDestroyItem_Parms
{
	struct FString                                     ItemGuid;                                         		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bResult : 1;                                      		// 0x000C (0x0004) [0x0000000000000082] [0x00000001] ( CPF_Const | CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DestroyItem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execDestroyItem_Parms
{
	struct FString                                     ItemGuid;                                         		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRenewItemCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearRenewItemCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRenewItemCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddRenewItemCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRenewItem
// [0x00120000] 
struct UOnlineSubsystemPW_execOnRenewItem_Parms
{
	unsigned char                                      eResult;                                          		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     ItemGuid;                                         		// 0x0004 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RenewItem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execRenewItem_Parms
{
	struct FString                                     ItemGuid;                                         		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      PurchaseLength;                                   		// 0x000C (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      FromLocation;                                     		// 0x000D (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      Currency;                                         		// 0x000E (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPurchaseItemCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearPurchaseItemCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPurchaseItemCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddPurchaseItemCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPurchaseItem
// [0x00120000] 
struct UOnlineSubsystemPW_execOnPurchaseItem_Parms
{
	unsigned char                                      eResult;                                          		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     ItemGuid;                                         		// 0x0004 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.PurchaseItem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execPurchaseItem_Parms
{
	struct FString                                     ItemGuid;                                         		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      PurchaseCount;                                    		// 0x000C (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      PurchaseLength;                                   		// 0x000D (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      FromLocation;                                     		// 0x000E (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      Currency;                                         		// 0x000F (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      PurchaseType;                                     		// 0x0010 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     Recipient;                                        		// 0x0014 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ActivationData;                                   		// 0x0020 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryStoreCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearQueryStoreCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryStoreCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddQueryStoreCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQueryStore
// [0x00120000] 
struct UOnlineSubsystemPW_execOnQueryStore_Parms
{
	struct FString                                     StoreData;                                        		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryStore
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQueryStore_Parms
{
	struct FString                                     Filter;                                           		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearInventoryUpdatedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearInventoryUpdatedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddInventoryUpdatedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddInventoryUpdatedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnInventoryUpdated
// [0x00120000] 
struct UOnlineSubsystemPW_execOnInventoryUpdated_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     InventoryData;                                    		// 0x0008 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryInventoryCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearQueryInventoryCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryInventoryCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddQueryInventoryCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQueryInventory
// [0x00120000] 
struct UOnlineSubsystemPW_execOnQueryInventory_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      bResult : 1;                                      		// 0x0008 (0x0004) [0x0000000000000082] [0x00000001] ( CPF_Const | CPF_Parm )
	struct FString                                     InventoryData;                                    		// 0x000C (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryInventory
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQueryInventory_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bInvalidateCached : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearValidatePlayerNameDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearValidatePlayerNameDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddValidatePlayerNameDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddValidatePlayerNameDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnValidatePlayerNameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnValidatePlayerNameComplete_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      InvalidReason;                                    		// 0x000C (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ValidatePlayerName
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execValidatePlayerName_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetProfileFlag
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct UOnlineSubsystemPW_execSetProfileFlag_Parms
{
	unsigned char                                      FlagIndex;                                        		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetProfileFlag
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetProfileFlag_Parms
{
	unsigned char                                      FlagIndex;                                        		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.HasProfileFlagToggled
// [0x00020002] 
struct UOnlineSubsystemPW_execHasProfileFlagToggled_Parms
{
	unsigned char                                      FlagIndex;                                        		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearToggleProfileFlagCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearToggleProfileFlagCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddToggleProfileFlagCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddToggleProfileFlagCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnToggleProfileFlagComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnToggleProfileFlagComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FlagIndex;                                        		// 0x0001 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ToggleProfileFlag
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execToggleProfileFlag_Parms
{
	unsigned char                                      FlagIndex;                                        		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTitle
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetTitle_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetTitle
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSetTitle_Parms
{
	int                                                NewTitle;                                         		// 0x0000 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetEmblem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetEmblem_Parms
{
	struct FQWord                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetEmblem
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSetEmblem_Parms
{
	struct FQWord                                      NewEmblem;                                        		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerGender
// [0x00020002] 
struct UOnlineSubsystemPW_execGetPlayerGender_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearChangeGenderCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearChangeGenderCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddChangeGenderCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddChangeGenderCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnChangeGenderComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnChangeGenderComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ChangeGender
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execChangeGender_Parms
{
	unsigned long                                      bCurrentGender : 1;                               		// 0x0000 (0x0004) [0x0000000000000082] [0x00000001] ( CPF_Const | CPF_Parm )
	unsigned long                                      bNewGender : 1;                                   		// 0x0004 (0x0004) [0x0000000000000082] [0x00000001] ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearSkillUpdateCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearSkillUpdateCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddSkillUpdateCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddSkillUpdateCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnSkillUpdateComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnSkillUpdateComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UpdateSkills
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemPW_execUpdateSkills_Parms
{
	TArray< unsigned char >                            SkillData;                                        		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearSkillQueryCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearSkillQueryCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddSkillQueryCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddSkillQueryCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnSkillQueryComplete
// [0x00520000] 
struct UOnlineSubsystemPW_execOnSkillQueryComplete_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< unsigned char >                            SkillData;                                        		// 0x0010 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QuerySkills
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQuerySkills_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearXPQueryCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearXPQueryCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddXPQueryCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddXPQueryCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnXPQueryComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnXPQueryComplete_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                XPAmount;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryXP
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQueryXP_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryBasicProfileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearQueryBasicProfileCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryBasicProfileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddQueryBasicProfileCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnBasicProfileQueryComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnBasicProfileQueryComplete_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Experience;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFemaleChar : 1;                                  		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FQWord                                      BadgeData;                                        		// 0x0020 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleIndex;                                       		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     LastSeenTime;                                     		// 0x002C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryBasicProfile
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQueryBasicProfile_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearZPBalanceChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearZPBalanceChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddZPBalanceChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddZPBalanceChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnZPBalanceChanged
// [0x00120000] 
struct UOnlineSubsystemPW_execOnZPBalanceChanged_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewZPBalance;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryFundsZP
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQueryFundsZP_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearGPBalanceChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearGPBalanceChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGPBalanceChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddGPBalanceChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGPBalanceChanged
// [0x00120000] 
struct UOnlineSubsystemPW_execOnGPBalanceChanged_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewGPBalance;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryFundsGP
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQueryFundsGP_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearBalanceChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearBalanceChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddBalanceChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddBalanceChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnBalanceChanged
// [0x00120000] 
struct UOnlineSubsystemPW_execOnBalanceChanged_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewZPBalance;                                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewGPBalance;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryFunds
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQueryFunds_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearActivateItemCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearActivateItemCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddActivateItemCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddActivateItemCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnItemActivated
// [0x00120000] 
struct UOnlineSubsystemPW_execOnItemActivated_Parms
{
	unsigned long                                      bResult : 1;                                      		// 0x0000 (0x0004) [0x0000000000000082] [0x00000001] ( CPF_Const | CPF_Parm )
	unsigned char                                      eResult;                                          		// 0x0004 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ActivateItem
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execActivateItem_Parms
{
	struct FString                                     ItemGuid;                                         		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ActivationData;                                   		// 0x000C (0x000C) [0x0000000000400092]              ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearGPAddCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearGPAddCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGPAddCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddGPAddCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGPAdded
// [0x00120000] 
struct UOnlineSubsystemPW_execOnGPAdded_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned char                                      LocalUserNum;                                     		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSuccess : 1;                                     		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGP
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execAddGP_Parms
{
	struct FUniqueNetId                                ForId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Amount;                                           		// 0x0008 (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowCustomMessageUI
// [0x00424000] 
struct UOnlineSubsystemPW_execShowCustomMessageUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Recipients;                                       		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     MessageTitle;                                     		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     NonEditableMessage;                               		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     EditableMessage;                                  		// 0x0028 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemPW_execClearCrossTitleProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemPW_execGetCrossTitleProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReadCrossTitleProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemPW_execReadCrossTitleProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnlockAvatarAward
// [0x00020000] 
struct UOnlineSubsystemPW_execUnlockAvatarAward_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AvatarItemId;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowCustomPlayersUI
// [0x00420000] 
struct UOnlineSubsystemPW_execShowCustomPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x001C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowPlayersUI
// [0x00020000] 
struct UOnlineSubsystemPW_execShowPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowFriendsInviteUI
// [0x00020000] 
struct UOnlineSubsystemPW_execShowFriendsInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearProfileDataChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddProfileDataChangedDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnProfileDataChanged
// [0x00120000] 
struct UOnlineSubsystemPW_execOnProfileDataChanged_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnlockGamerPicture
// [0x00020000] 
struct UOnlineSubsystemPW_execUnlockGamerPicture_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsDeviceValid
// [0x00024000] 
struct UOnlineSubsystemPW_execIsDeviceValid_Parms
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetDeviceSelectionResults
// [0x00420000] 
struct UOnlineSubsystemPW_execGetDeviceSelectionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     DeviceName;                                       		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDeviceSelectionDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddDeviceSelectionDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnDeviceSelectionComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnDeviceSelectionComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowDeviceSelectionUI
// [0x00024000] 
struct UOnlineSubsystemPW_execShowDeviceSelectionUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bManageStorage : 1;                               		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowMembershipMarketplaceUI
// [0x00020000] 
struct UOnlineSubsystemPW_execShowMembershipMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowContentMarketplaceUI
// [0x00024000] 
struct UOnlineSubsystemPW_execShowContentMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                OfferId;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowInviteUI
// [0x00024000] 
struct UOnlineSubsystemPW_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowAchievementsUI
// [0x00020000] 
struct UOnlineSubsystemPW_execShowAchievementsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowMessagesUI
// [0x00020000] 
struct UOnlineSubsystemPW_execShowMessagesUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowGamerCardUI
// [0x00020000] 
struct UOnlineSubsystemPW_execShowGamerCardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowFeedbackUI
// [0x00020000] 
struct UOnlineSubsystemPW_execShowFeedbackUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowWebPageUI
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execShowWebPageUI_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsLoginInProcess
// [0x00020002] 
struct UOnlineSubsystemPW_execIsLoginInProcess_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetAchievements
// [0x00424000] 
struct UOnlineSubsystemPW_execGetAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FAchievementDetails >               Achievements;                                     		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TitleId;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0014 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadAchievementsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadAchievementsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReadAchievementsComplete_Parms
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadAchievements
// [0x00024000] 
struct UOnlineSubsystemPW_execReadAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadText : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadImages : 1;                            		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearUnlockAchievementCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddUnlockAchievementCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnUnlockAchievementComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnlockAchievement
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execUnlockAchievement_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DeleteMessage
// [0x00020000] 
struct UOnlineSubsystemPW_execDeleteMessage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnmuteAll
// [0x00020000] 
struct UOnlineSubsystemPW_execUnmuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.MuteAll
// [0x00020000] 
struct UOnlineSubsystemPW_execMuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAllowFriends : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFriendMessageReceived
// [0x00120000] 
struct UOnlineSubsystemPW_execOnFriendMessageReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SendingNick;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetFriendMessages
// [0x00420000] 
struct UOnlineSubsystemPW_execGetFriendMessages_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriendMessage >              FriendMessages;                                   		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnJoinFriendGameComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnJoinFriendGameComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinFriendGame
// [0x00020000] 
struct UOnlineSubsystemPW_execJoinFriendGame_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReceivedGameInviteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReceivedGameInviteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReceivedGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviterName;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSendGameInviteToFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Friends;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSendGameInviteToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Text;                                             		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UpdateOnlineStatus
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execUpdateOnlineStatus_Parms
{
	int                                                StatusID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     PresenceContext;                                  		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnFriendInfoChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnFriendInfoChangedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnFriendInfoChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnFriendInfoChangedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFriendInfoChanged
// [0x00120000] 
struct UOnlineSubsystemPW_execOnFriendInfoChanged_Parms
{
	struct FOnlineFriend                               OldFriendInfo;                                    		// 0x0000 (0x0084) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FOnlineFriend                               NewFriendInfo;                                    		// 0x0084 (0x0084) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnGetUniqueIdOfPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnGetUniqueIdOfPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnGetUniqueIdOfPlayerCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnGetUniqueIdOfPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetUniqueIdOfPlayerComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnGetUniqueIdOfPlayerComplete_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FUniqueNetId                                ResultId;                                         		// 0x0004 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetUniqueIdOfPlayerByName
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetUniqueIdOfPlayerByName_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnPlayerSearchComplete
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnPlayerSearchComplete_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnPlayerSearchComplete
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnPlayerSearchComplete_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPlayerSearchComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnPlayerSearchComplete_Parms
{
	TArray< struct FString >                           ReturnedNames;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SearchForPlayer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSearchForPlayer_Parms
{
	struct FString                                     SearchName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearClanGameInviteExpiredDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearClanGameInviteExpiredDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddClanGameInviteExpiredDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddClanGameInviteExpiredDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanGameInviteExpired
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanGameInviteExpired_Parms
{
	struct FUniqueNetId                                InviterId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearClanGameInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearClanGameInviteReceivedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddClanGameInviteReceivedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddClanGameInviteReceivedDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanGameInviteReceived
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanGameInviteReceived_Parms
{
	struct FUniqueNetId                                InviterId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ChangeMemberRank
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execChangeMemberRank_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewRank;                                          		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnGetClanInfo
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnGetClanInfo_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnGetClanInfo
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnGetClanInfo_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetClanInfo
// [0x00120000] 
struct UOnlineSubsystemPW_execOnGetClanInfo_Parms
{
	struct FString                                     ClanInfo;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetClanInfo
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetClanInfo_Parms
{
	struct FString                                     ClanTag;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnValidateClanInfo
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnValidateClanInfo_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnValidateClanInfo
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnValidateClanInfo_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnValidateClanInfo
// [0x00120000] 
struct UOnlineSubsystemPW_execOnValidateClanInfo_Parms
{
	int                                                InfoType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      IsAvail : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ValidateClanInfo
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execValidateClanInfo_Parms
{
	int                                                InfoType;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Info;                                             		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanMemberUpdate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnClanMemberUpdate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanMemberUpdate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnClanMemberUpdate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanMemberUpdate
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanMemberUpdate_Parms
{
	unsigned char                                      UpdateType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     MemberInfo;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnGetClanTag
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnGetClanTag_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnGetClanTag
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnGetClanTag_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetClanTag
// [0x00120000] 
struct UOnlineSubsystemPW_execOnGetClanTag_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ClanTag;                                          		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetClanTag
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetClanTag_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetMyClanTag
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetMyClanTag_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnSetClanMOTD
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnSetClanMOTD_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnSetClanMOTD
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnSetClanMOTD_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnSetClanMOTD
// [0x00120000] 
struct UOnlineSubsystemPW_execOnSetClanMOTD_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     NewMOTD;                                          		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetClanMOTD
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSetClanMOTD_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanQuit
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnClanQuit_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanQuit
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnClanQuit_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanQuit
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanQuit_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QuitClan
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execQuitClan_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanJoin
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnClanJoin_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanJoin
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnClanJoin_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanJoin
// [0x00124000] 
struct UOnlineSubsystemPW_execOnClanJoin_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     ClanTag;                                          		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinClan
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execJoinClan_Parms
{
	struct FString                                     ClanID;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanKickResponse
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnClanKickResponse_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanKickResponse
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnClanKickResponse_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanKickResponse
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanKickResponse_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      FailReason;                                       		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanKick
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnClanKick_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanKick
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnClanKick_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanKick
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanKick_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.KickFromClan
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execKickFromClan_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanInviteResponse
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnClanInviteResponse_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanInviteResponse
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnClanInviteResponse_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanInviteResponse
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanInviteResponse_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      FailReason;                                       		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanInvite
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnClanInvite_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanInvite
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnClanInvite_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanInvite
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanInvite_Parms
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ClanTag;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Founded;                                          		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                MemberCount;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     WhoInvited;                                       		// 0x0028 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ClanID;                                           		// 0x0034 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.InviteToClan
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execInviteToClan_Parms
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                PlayerID;                                         		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanDisband
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnClanDisband_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanDisband
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnClanDisband_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanDisband
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanDisband_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DisbandClan
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execDisbandClan_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanCreate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnClanCreate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanCreate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnClanCreate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanCreate
// [0x00120000] 
struct UOnlineSubsystemPW_execOnClanCreate_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnGetChatList
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnGetChatList_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnGetChatList
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnGetChatList_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetChatList
// [0x00120000] 
struct UOnlineSubsystemPW_execOnGetChatList_Parms
{
	struct FString                                     ChatList;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetChatList
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetChatList_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearChatChannelDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearChatChannelDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddChatChannelDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddChatChannelDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnChatChannelChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnChatChannelChange_Parms
{
	int                                                ChannelID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ChannelName;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.LeaveChatChannel
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execLeaveChatChannel_Parms
{
	int                                                Channel;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinChatChannelByID
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execJoinChatChannelByID_Parms
{
	int                                                ChannelID;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinChatChannelByName
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execJoinChatChannelByName_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnReceiveWhisperDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnReceiveWhisperDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnReceiveWhisperDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnReceiveWhisperDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReceiveWhisper
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReceiveWhisper_Parms
{
	unsigned long                                      Success : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     PlayerName;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendWhisper
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSendWhisper_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnReceiveAdminMessageDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnReceiveAdminMessageDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnReceiveAdminMessageDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnReceiveAdminMessageDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReceiveAdminMessage
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReceiveAdminMessage_Parms
{
	struct FString                                     Line1;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Line2;                                            		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Line3;                                            		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      IsMajorBroadcast : 1;                             		// 0x0024 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendAdminMessage
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSendAdminMessage_Parms
{
	struct FString                                     Message;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnReceiveChatDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearOnReceiveChatDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnReceiveChatDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddOnReceiveChatDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReceiveChat
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReceiveChat_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Messaage;                                         		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendChat
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execSendChat_Parms
{
	struct FString                                     Channel;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendMessageToFriend
// [0x00020000] 
struct UOnlineSubsystemPW_execSendMessageToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearWritePlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WritePlayerStorage
// [0x00024000] 
struct UOnlineSubsystemPW_execWritePlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeviceID;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerStorage
// [0x00020002] 
struct UOnlineSubsystemPW_execGetPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadPlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadPlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReadPlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadPlayerStorage
// [0x00024000] 
struct UOnlineSubsystemPW_execReadPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                DeviceID;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadPlayerStorageForNetId
// [0x00020000] 
struct UOnlineSubsystemPW_execReadPlayerStorageForNetId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NetId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReadPlayerStorageForNetIdComplete_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddWritePlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnWritePlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetKeyboardInputResults
// [0x00420000] 
struct UOnlineSubsystemPW_execGetKeyboardInputResults_Parms
{
	unsigned char                                      bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnKeyboardInputComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowKeyboardUI
// [0x00024000] 
struct UOnlineSubsystemPW_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TitleText;                                        		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword : 1;                                  		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bIsGamerTag : 1;                                  		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate : 1;                              		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x0028 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x0034 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetOnlineStatus
// [0x00420000] 
struct UOnlineSubsystemPW_execSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatusID;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FLocalizedStringSetting >           LocalizedStringSettings;                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FSettingsProperty >                 Properties;                                       		// 0x0014 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnStorageDeviceChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnStorageDeviceChange_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetLocale
// [0x00020002] 
struct UOnlineSubsystemPW_execGetLocale_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetNATType
// [0x00020002] 
struct UOnlineSubsystemPW_execGetNATType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnConnectionStatusChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsControllerConnected
// [0x00020002] 
struct UOnlineSubsystemPW_execIsControllerConnected_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearControllerChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddControllerChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnControllerChange_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsConnected : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetNetworkNotificationPosition
// [0x00020000] 
struct UOnlineSubsystemPW_execSetNetworkNotificationPosition_Parms
{
	unsigned char                                      NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetNetworkNotificationPosition
// [0x00020000] 
struct UOnlineSubsystemPW_execGetNetworkNotificationPosition_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnExternalUIChange_Parms
{
	unsigned long                                      bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLinkStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLinkStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnLinkStatusChange_Parms
{
	unsigned long                                      bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.HasLinkConnection
// [0x00020002] 
struct UOnlineSubsystemPW_execHasLinkConnection_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerUniqueNetIdFromIndex
// [0x00820802] ( FUNC_Event )
struct UOnlineSubsystemPW_eventGetPlayerUniqueNetIdFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FUniqueNetId                             Zero;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
struct UOnlineSubsystemPW_eventGetPlayerNicknameFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CalcAggregateSkill
// [0x00420000] 
struct UOnlineSubsystemPW_execCalcAggregateSkill_Parms
{
	TArray< struct FDouble >                           Mus;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FDouble >                           Sigmas;                                           		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FDouble                                     OutAggregateMu;                                   		// 0x0018 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FDouble                                     OutAggregateSigma;                                		// 0x0020 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTrueSkillValue
// [0x00020000] 
struct UOnlineSubsystemPW_execGetTrueSkillValue_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterStatGuid
// [0x00420000] 
struct UOnlineSubsystemPW_execRegisterStatGuid_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ClientStatGuid;                                   		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetClientStatGuid
// [0x00020000] 
struct UOnlineSubsystemPW_execGetClientStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddRegisterHostStatGuidCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRegisterHostStatGuidComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnRegisterHostStatGuidComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterHostStatGuid
// [0x00420000] 
struct UOnlineSubsystemPW_execRegisterHostStatGuid_Parms
{
	struct FString                                     HostStatGuid;                                     		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetHostStatGuid
// [0x00020000] 
struct UOnlineSubsystemPW_execGetHostStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WriteOnlinePlayerScores
// [0x00420000] 
struct UOnlineSubsystemPW_execWriteOnlinePlayerScores_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlinePlayerScore >                PlayerScores;                                     		// 0x000C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFlushOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFlushOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFlushOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnFlushOnlineStatsComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FlushOnlineStats
// [0x00020000] 
struct UOnlineSubsystemPW_execFlushOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WriteOnlineRankedStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execWriteOnlineRankedStats_Parms
{
	TArray< class UOnlineStatsWrite* >                 StatsArray;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execWriteOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APlayerReplicationInfo*                      Player;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FreeStats
// [0x00020000] 
struct UOnlineSubsystemPW_execFreeStats_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadOnlineStatsByRankAroundPlayer
// [0x00024000] 
struct UOnlineSubsystemPW_execReadOnlineStatsByRankAroundPlayer_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumRows;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadOnlineStatsByRank
// [0x00024000] 
struct UOnlineSubsystemPW_execReadOnlineStatsByRank_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                StartIndex;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumToRead;                                        		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadOnlineStatsForFriends
// [0x00020000] 
struct UOnlineSubsystemPW_execReadOnlineStatsForFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadMyOnlineStats
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execReadMyOnlineStats_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadOnlineStats
// [0x00420000] 
struct UOnlineSubsystemPW_execReadOnlineStats_Parms
{
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReadOnlineStatsComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetSpeechRecognitionObject
// [0x00020000] 
struct UOnlineSubsystemPW_execSetSpeechRecognitionObject_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SelectVocabulary
// [0x00020000] 
struct UOnlineSubsystemPW_execSelectVocabulary_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRecognitionComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnRecognitionComplete_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetRecognitionResults
// [0x00420000] 
struct UOnlineSubsystemPW_execGetRecognitionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FSpeechRecognizedWord >             Words;                                            		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StopSpeechRecognition
// [0x00020000] 
struct UOnlineSubsystemPW_execStopSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StartSpeechRecognition
// [0x00020000] 
struct UOnlineSubsystemPW_execStartSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execStopNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execStartNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execUnmuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSystemWide : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
struct UOnlineSubsystemPW_execMuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsSystemWide : 1;                                		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetRemoteTalkerPriority
// [0x00020000] 
struct UOnlineSubsystemPW_execSetRemoteTalkerPriority_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Priority;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsHeadsetPresent
// [0x00020000] 
struct UOnlineSubsystemPW_execIsHeadsetPresent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execIsRemotePlayerTalking_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execIsLocalPlayerTalking_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execUnregisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterRemoteTalkerWithVoipId
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execRegisterRemoteTalkerWithVoipId_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                VoipId;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterRemoteTalker
// [0x00020000] 
struct UOnlineSubsystemPW_execRegisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execUnregisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execRegisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RefreshCommunicationPrivelage
// [0x00020000] 
struct UOnlineSubsystemPW_execRefreshCommunicationPrivelage_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPartyList
// [0x00420002] 
struct UOnlineSubsystemPW_execGetPartyList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineFriend >                     Members;                                          		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnWriteProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsProfileAvailable
// [0x00020002] 
struct UOnlineSubsystemPW_execIsProfileAvailable_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execWriteProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetProfileSettings
// [0x00020002] 
struct UOnlineSubsystemPW_execGetProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemPW_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execReadProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsGuestLogin
// [0x00020000] 
struct UOnlineSubsystemPW_execIsGuestLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsLocalLogin
// [0x00020000] 
struct UOnlineSubsystemPW_execIsLocalLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowFriendsUI
// [0x00020000] 
struct UOnlineSubsystemPW_execShowFriendsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsMuted
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execIsMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AreAnyFriends
// [0x00420000] 
struct UOnlineSubsystemPW_execAreAnyFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FFriendsQuery >                     Query;                                            		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsFriend
// [0x00020000] 
struct UOnlineSubsystemPW_execIsFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanShowPresenceInformation
// [0x00020000] 
struct UOnlineSubsystemPW_execCanShowPresenceInformation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanViewPlayerProfiles
// [0x00020000] 
struct UOnlineSubsystemPW_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanPurchaseContent
// [0x00020000] 
struct UOnlineSubsystemPW_execCanPurchaseContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanDownloadUserContent
// [0x00020000] 
struct UOnlineSubsystemPW_execCanDownloadUserContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanCommunicate
// [0x00020000] 
struct UOnlineSubsystemPW_execCanCommunicate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanPlayOnline
// [0x00020000] 
struct UOnlineSubsystemPW_execCanPlayOnline_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerNickname
// [0x00020002] 
struct UOnlineSubsystemPW_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetSecondaryUniquePlayerId
// [0x00420002] 
struct UOnlineSubsystemPW_execGetSecondaryUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                OutID;                                            		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetUniquePlayerId
// [0x00420002] 
struct UOnlineSubsystemPW_execGetUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetLoginStatus
// [0x00020002] 
struct UOnlineSubsystemPW_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPingServerDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearPingServerDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPingServerDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddPingServerDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnServerPing
// [0x00120000] 
struct UOnlineSubsystemPW_execOnServerPing_Parms
{
	struct FString                                     Address;                                          		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	struct FDouble                                     RecvTime;                                         		// 0x000C (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.PingServer
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execPingServer_Parms
{
	struct FString                                     Address;                                          		// 0x0000 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemPW_execOnLogoutCompleted_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.Logout
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execLogout_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InDelegate;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemPW_execOnLoginFailed_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ErrorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginQueueDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearLoginQueueDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginQueueDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddLoginQueueDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginQueue
// [0x00120000] 
struct UOnlineSubsystemPW_execOnLoginQueue_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                PositionInQueue;                                  		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                WaitTime;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CheckLoginQueue
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execCheckLoginQueue_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     AccountName;                                      		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AutoLogin
// [0x00020000] 
struct UOnlineSubsystemPW_execAutoLogin_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearServerAvailabilityDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execClearServerAvailabilityDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddServerAvailabilityDelegate
// [0x00020002] 
struct UOnlineSubsystemPW_execAddServerAvailabilityDelegate_Parms
{
	struct FScriptDelegate                             InDelegate;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnServerAvailability
// [0x00124000] 
struct UOnlineSubsystemPW_execOnServerAvailability_Parms
{
	unsigned char                                      RegionID;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      AvailabilityCode;                                 		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                iParam1;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                iParam2;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CheckServerAvailability
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execCheckServerAvailability_Parms
{
	unsigned char                                      RegionID;                                         		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddServerToWhiteList
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execAddServerToWhiteList_Parms
{
	unsigned char                                      RegionID;                                         		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.LoginHashed
// [0x00420400] ( FUNC_Native )
struct UOnlineSubsystemPW_execLoginHashed_Parms
{
	struct FString                                     LoginName;                                        		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     HashedToken;                                      		// 0x000C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.Login
// [0x00424400] ( FUNC_Native )
struct UOnlineSubsystemPW_execLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     LoginName;                                        		// 0x0004 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bWantsLocalOnly : 1;                              		// 0x001C (0x0004) [0x0000000000000092] [0x00000001] ( CPF_Const | CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowLoginUI
// [0x00024000] 
struct UOnlineSubsystemPW_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly : 1;                              		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnFriendsChange_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPlayerTalkingDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execClearPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPlayerTalkingDelegate
// [0x00020000] 
struct UOnlineSubsystemPW_execAddPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPlayerTalkingStateChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnPlayerTalkingStateChange_Parms
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTalking : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemPW_execOnMutingChange_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemPW_execOnLoginCancelled_Parms
{
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UOnlineSubsystemPW_eventInit_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTitleString
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemPW_execGetTitleString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif