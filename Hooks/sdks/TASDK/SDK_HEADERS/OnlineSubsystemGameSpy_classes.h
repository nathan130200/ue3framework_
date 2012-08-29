/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemGameSpy_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.EPlayerStatType
/*enum EPlayerStatType
{
	EPST_PLAYER_STAT                                   = 0,
	EPST_GAME_STAT                                     = 1,
	EPST_TEAM_STAT                                     = 2,
	EPST_MAX                                           = 3
};*/

// Enum OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.EFriendshipStatus
/*enum EFriendshipStatus
{
	EBuddy_Friend                                      = 0,
	EBuddy_Removed                                     = 1,
	EBuddy_Ignored                                     = 2,
	EBuddy_MAX                                         = 3
};*/

// Enum OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.EMuteType
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

// Class OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy
// 0x00B0 (0x027C - 0x01CC)
class UOnlineGameInterfaceGameSpy : public UOnlineGameInterfaceImpl
{
public:
	struct FString                                     PublicAddress;                                    		// 0x01CC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FPointer                                    QR2Handle;                                        		// 0x01D8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    SBHandle;                                         		// 0x01DC (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                QR2OwningPlayerIdKeyId;                           		// 0x01E0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                QR2FirstDataBindableKeyId;                        		// 0x01E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                QR2NumDataBindableKeys;                           		// 0x01E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FName >                             QR2DataBindableKeyNames;                          		// 0x01EC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                QR2FirstSettingKeyId;                             		// 0x01F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                QR2NumSettingKeys;                                		// 0x01FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                QR2FirstPropertyKeyId;                            		// 0x0200 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                QR2NumPropertyKeys;                               		// 0x0204 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                QR2NpIdKeyId;                                     		// 0x0208 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     QR2NpIdString;                                    		// 0x020C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GameInviteAcceptedDelegates;                      		// 0x0218 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSearch*                           InviteGameSearch;                                 		// 0x0224 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     InviteLocationUrl;                                		// 0x0228 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSBServer >                         ServersPendingInfo;                               		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1325 ];

		return pClassPointer;
	};

	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
};

UClass* UOnlineGameInterfaceGameSpy::pClassPointer = NULL;

// Class OnlineSubsystemGameSpy.OnlineSubsystemGameSpy
// 0x0820 (0x0924 - 0x0104)
class UOnlineSubsystemGameSpy : public UOnlineSubsystemCommonImpl
{
public:
	class UOnlineGameInterfaceGameSpy*                 CachedGameInt;                                    		// 0x0104 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LocalProfileName;                                 		// 0x0108 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LoggedInPlayerName;                               		// 0x0114 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x0120 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsLoginInProcess : 1;                            		// 0x0128 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bIsManualLogout : 1;                              		// 0x0128 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bReconnecting : 1;                                		// 0x0128 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeedsKeyboardTicking : 1;                        		// 0x0128 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      bLastHasConnection : 1;                           		// 0x0128 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bIsStatsSessionOk : 1;                            		// 0x0128 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasGameSpyAccount : 1;                           		// 0x0128 (0x0004) [0x0000000000004002] [0x00000040] ( CPF_Const | CPF_Config )
	unsigned long                                      bShouldUseMcp : 1;                                		// 0x0128 (0x0004) [0x0000000000004002] [0x00000080] ( CPF_Const | CPF_Config )
	unsigned long                                      bShouldStatsReadsRequestTotals : 1;               		// 0x0128 (0x0004) [0x0000000000004000] [0x00000100] ( CPF_Config )
	struct FString                                     LoggedInPlayerPassword;                           		// 0x012C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                LoggedInPlayerNum;                                		// 0x0138 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LoggedInStatus;                                   		// 0x013C (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x013D (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     RemoteAuthToken;                                  		// 0x0140 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     RemoteAuthPartnerChallenge;                       		// 0x014C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FPointer >                          AsyncTasks;                                       		// 0x0158 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     ProfileDataDirectory;                             		// 0x0164 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x0170 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              IgnoreHoursLimit;                                 		// 0x017C (0x0004) [0x0000000000000000]              
	float                                              RetryConnectInterval;                             		// 0x0180 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              NextRetryTime;                                    		// 0x0184 (0x0004) [0x0000000000000000]              
	struct FPerUserProfileDelegates                    PerUserReadProfileSettings[ 0x4 ];                		// 0x0188 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x01B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x01C4 (0x0004) [0x0000000000000000]              
	class UOnlinePlayerStorage*                        PlayerStorageCache[ 0x4 ];                        		// 0x01C8 (0x0010) [0x0000000000000000]              
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
	TArray< struct FScriptDelegate >                   PlayerTalkingDelegates;                           		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadOnlineStatsCompleteDelegates;                 		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FlushOnlineStatsDelegates;                        		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x0280 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ControllerChangeDelegates;                        		// 0x028C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LinkStatusDelegates;                              		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x02A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadAchievementsCompleteDelegates;                		// 0x02B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnlockAchievementCompleteDelegates;               		// 0x02BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SearchFriendsDelegates;                           		// 0x02C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CreateBuddyAuthorizationDelegates;                		// 0x02D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadBuddyAuthorizationListDelegates;              		// 0x02E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemoveBuddyAuthorizationDelegates;                		// 0x02EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CreateBuddyRequestDelegates;                      		// 0x02F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadBuddyRequestListDelegates;                    		// 0x0304 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemoveBuddyRequestDelegates;                      		// 0x0310 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CreateBuddyImageIndexDelegates;                   		// 0x031C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetBuddyImageIndexDelegates;                      		// 0x0328 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UpdateBuddyFriendshipDelegates;                   		// 0x0334 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetFriendshipListDelegates;                       		// 0x0340 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetBuddyListImageIndexDelegates;                  		// 0x034C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ChatConnectedDelegates;                           		// 0x0358 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ChatDisconnectedDelegates;                        		// 0x0364 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ChatMessageReceivedDelegates;                     		// 0x0370 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ChatEnterChannelCompleteDelegates;                		// 0x037C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_ConnectedChatChannels;                          		// 0x0388 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ChatUserJoinedDelegates;                          		// 0x0394 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ChatUserPartedDelegates;                          		// 0x03A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadByteDataCompleteDelegatesArray;               		// 0x03AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteByteDataCompleteDelegatesArray;              		// 0x03B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            m_CurrentData;                                    		// 0x03C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nSakeCurrentByteDataRecordID;                   		// 0x03D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FScriptDelegate >                   OnValidateAndSaveKeyDelegates;                    		// 0x03D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLocalTalkerGS                              CurrentLocalTalker;                               		// 0x03E0 (0x0008) [0x0000000000000000]              
	TArray< struct FString >                           CurrentSearchFriendsResult;                       		// 0x03E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           CurrentBuddyAuthorizationListResult;              		// 0x03F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRequestEntry >                     CurrentBuddyRequestListResult;                    		// 0x0400 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           CurrentIgnorerListResult;                         		// 0x040C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTBuddyFriendship >                 FriendshipList;                                   		// 0x0418 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurrentDeleteNickAuthorization;                   		// 0x0424 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurrentDeleteNickRequest;                         		// 0x0430 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FRequestEntry                               CurrentRequestEntry;                              		// 0x043C (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CurrentCreateBuddyImageNickName;                  		// 0x0458 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentCreateBuddyImageImageIndex;                		// 0x0464 (0x0004) [0x0000000000000000]              
	struct FBuddyImageIndexContainer                   CurrentBuddyImageIndexContainer;                  		// 0x0468 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FBuddyImageIndexContainer >         m_LastBuddyImageContainerArray;                   		// 0x0478 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRemoteTalker >                     RemoteTalkers;                                    		// 0x0484 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    GPHandle;                                         		// 0x0490 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    SakeHandle;                                       		// 0x0494 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    SCHandle;                                         		// 0x0498 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    ChatHandle;                                       		// 0x049C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FString                                     PublicAddress;                                    		// 0x04A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    LoginCertificate;                                 		// 0x04AC (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    LoginPrivateData;                                 		// 0x04B0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                SakeProfileRecordID;                              		// 0x04B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                GameID;                                           		// 0x04B8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                ProductID;                                        		// 0x04BC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                NamespaceID;                                      		// 0x04C0 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                PartnerID;                                        		// 0x04C4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	struct FString                                     GameName;                                         		// 0x04C8 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	int                                                DistributionID;                                   		// 0x04D4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x04D8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                StatsVersion;                                     		// 0x04DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NickStatsKeyId;                                   		// 0x04E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PlaceStatsKeyId;                                  		// 0x04E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FViewPropertyToKeyId >              StatsKeyMappings;                                 		// 0x04E8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPendingPlayerStats >               PendingStats;                                     		// 0x04F4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     KeyboardResultsString;                            		// 0x0500 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   KeyboardInputDelegates;                           		// 0x050C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendInviteReceivedDelegates;                    		// 0x0518 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendMessageReceivedDelegates;                   		// 0x0524 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendMessageSentDelegates;                       		// 0x0530 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AddFriendByNameCompleteDelegates;                 		// 0x053C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CachedFriendMessage;                              		// 0x0548 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FString >                           LocationUrlsForInvites;                           		// 0x0554 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LocationUrl;                                      		// 0x0560 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReceivedGameInviteDelegates;                      		// 0x056C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinFriendGameCompleteDelegates;                  		// 0x0578 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterHostStatGuidCompleteDelegates;            		// 0x0584 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineFriendMessage >              CachedFriendMessages;                             		// 0x0590 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineStatusMapping >              StatusMappings;                                   		// 0x059C (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DefaultStatus;                                    		// 0x05A8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GameInviteMessage;                                		// 0x05B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FPointer                                    NpData;                                           		// 0x05C0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FControllerConnectionState                  ControllerStates[ 0x4 ];                          		// 0x05C4 (0x0020) [0x0000000000000000]              
	float                                              ConnectionPresenceTimeInterval;                   		// 0x05E4 (0x0004) [0x0000000000000000]              
	float                                              ConnectionPresenceElapsedTime;                    		// 0x05E8 (0x0004) [0x0000000000000000]              
	struct FString                                     EncryptedProductKey;                              		// 0x05EC (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	int                                                NextAuthId;                                       		// 0x05F8 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     ServerChallenge;                                  		// 0x05FC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ServerResponse;                                   		// 0x0608 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                ServerLocalId;                                    		// 0x0614 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FUniqueNetId >                      MuteList;                                         		// 0x0618 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   QueryUpdatesDelegates;                            		// 0x0624 (0x000C) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FScriptDelegate >                   QueryUpdatesDownloadCompletedDelegates;           		// 0x0630 (0x000C) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FScriptDelegate >                   QueryUpdatesDownloadProgressDelegates;            		// 0x063C (0x000C) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FScriptDelegate >                   QueryUpdatesDownloadCancelDelegates;              		// 0x0648 (0x000C) [0x0000000000001000]              ( CPF_Native )
	int                                                NewUpdatesCount;                                  		// 0x0654 (0x0004) [0x0000000000000000]              
	int                                                AGGHTTPRequest;                                   		// 0x0658 (0x0004) [0x0000000000000000]              
	float                                              UpdatesProgressStatus;                            		// 0x065C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x0660 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x066C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x0678 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x0684 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x0690 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x069C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x06A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x06B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x06C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x06CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x06D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x06E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x06F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x06FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0708 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0714 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0720 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x072C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x0738 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x0744 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x0750 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x075C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0768 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;       		// 0x0774 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x0780 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x078C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0798 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x07A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x07B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x07BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageSent__Delegate;                  		// 0x07C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x07D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x07E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x07EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableUpdatesComplete__Delegate;      		// 0x07F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableUpdatesDownloadComplete__Delegate;		// 0x0804 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableUpdatesDownloadProgress__Delegate;		// 0x0810 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableUpdatesDownloadCancel__Delegate;		// 0x081C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSearchFriendsComplete__Delegate;              		// 0x0828 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateBuddyAuthorizationComplete__Delegate;   		// 0x0834 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadBuddyAuthorizationListComplete__Delegate; 		// 0x0840 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRemoveBuddyAuthorizationComplete__Delegate;   		// 0x084C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateBuddyRequestComplete__Delegate;         		// 0x0858 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadBuddyRequestListComplete__Delegate;       		// 0x0864 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRemoveBuddyRequestComplete__Delegate;         		// 0x0870 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateBuddyImageIndexComplete__Delegate;      		// 0x087C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetBuddyImageIndexComplete__Delegate;         		// 0x0888 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatConnected__Delegate;                      		// 0x0894 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatDisconnected__Delegate;                   		// 0x08A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatEnterChannelComplete__Delegate;           		// 0x08AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatMessageReceived__Delegate;                		// 0x08B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatUserJoined__Delegate;                     		// 0x08C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatUserParted__Delegate;                     		// 0x08D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnValidateAndSaveKey__Delegate;                 		// 0x08DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadByteDataComplete__Delegate;               		// 0x08E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteByteDataComplete__Delegate;              		// 0x08F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetBuddyListImageIndexComplete__Delegate;     		// 0x0900 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateBuddyFriendshipComplete__Delegate;      		// 0x090C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetFriendshipListComplete__Delegate;          		// 0x0918 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1326 ];

		return pClassPointer;
	};

	void clearReconnection ( );
	bool JoinGameByURL ( unsigned char LocalUserNum, struct FString LocationString );
	void SetOnlineStatusPwd ( unsigned char LocalUserNum, int StatusId, unsigned long bPasswordServer );
	bool DisableVoice ( );
	bool EnableVoice ( );
	bool IsVoiceEnabled ( );
	bool GetFriendshipList ( );
	bool UpdateBuddyFriendship ( int RecordId, struct FString nick, int Status );
	void ClearGetFriendshipListDelegate ( struct FScriptDelegate GetFriendshipListDelegate );
	void AddGetFriendshipListDelegate ( struct FScriptDelegate GetFriendshipListDelegate );
	void ClearUpdateBuddyFriendshipCompleteDelegate ( struct FScriptDelegate UpdateBuddyFriendshipCompleteDelegate );
	void AddUpdateBuddyFriendshipCompleteDelegate ( struct FScriptDelegate UpdateBuddyFriendshipCompleteDelegate );
	void OnGetFriendshipListComplete ( unsigned long bWasSuccessful );
	void OnUpdateBuddyFriendshipComplete ( unsigned long bWasSuccessful, int RecordId, struct FString nick, int friendStatus );
	TArray< struct FBuddyImageIndexContainer > GetLastBuddyImageIndexArray ( );
	void ClearGetBuddyListImageIndexCompleteDelegate ( struct FScriptDelegate GetBuddyListImageIndexCompleteDelegate );
	void AddGetBuddyListImageIndexCompleteDelegate ( struct FScriptDelegate GetBuddyListImageIndexCompleteDelegate );
	void OnGetBuddyListImageIndexComplete ( unsigned long bWasSuccessful );
	bool GetBuddyListImageIndex ( TArray< struct FString > NickNames );
	void GetCurrentByteData ( TArray< unsigned char >* Data );
	void ClearWriteByteDataCompleteDelegate ( struct FScriptDelegate WriteByteDataCompleteDelegate );
	void AddWriteByteDataCompleteDelegate ( struct FScriptDelegate WriteByteDataCompleteDelegate );
	void OnWriteByteDataComplete ( unsigned long bWasSuccessful );
	bool WriteByteData ( unsigned char LocalUserNum, unsigned long bCreateNew, TArray< unsigned char >* Data, struct FString* table_name, struct FString* field_name );
	void ClearReadByteDataCompleteDelegate ( struct FScriptDelegate ReadByteDataCompleteDelegate );
	void AddReadByteDataCompleteDelegate ( struct FScriptDelegate ReadByteDataCompleteDelegate );
	void OnReadByteDataComplete ( unsigned long bWasSuccessful );
	bool ReadByteData ( unsigned char LocalUserNum, struct FString* table_name, struct FString* field_name );
	bool ValidateAndSaveKey ( struct FString CDKey );
	void ClearOnValidateAndSaveKeyDelegate ( struct FScriptDelegate OnValidateAndSaveKeyDelegate );
	void AddOnValidateAndSaveKeyDelegate ( struct FScriptDelegate OnValidateAndSaveKeyDelegate );
	void OnValidateAndSaveKey ( unsigned long bWasSuccessful );
	struct FString GetPublicAddress ( );
	void ChatSendMessage ( struct FString Channel, struct FString Message );
	void ClearOnChatUserPartedDelegate ( struct FScriptDelegate ChatUserPartedDelegate );
	void AddOnChatUserPartedDelegate ( struct FScriptDelegate ChatUserPartedDelegate );
	void OnChatUserParted ( struct FString Channel, struct FString NickName );
	void ClearOnChatUserJoinedDelegate ( struct FScriptDelegate ChatUserJoinedDelegate );
	void AddOnChatUserJoinedDelegate ( struct FScriptDelegate ChatUserJoinedDelegate );
	void OnChatUserJoined ( struct FString Channel, struct FString NickName );
	void ClearOnChatMessageReceivedDelegate ( struct FScriptDelegate ChatMessageReceivedDelegate );
	void AddOnChatMessageReceivedDelegate ( struct FScriptDelegate ChatMessageReceivedDelegate );
	void OnChatMessageReceived ( struct FString Channel, struct FString NickName, struct FString Message );
	void ChatLeaveChannel ( struct FString Channel );
	int ChatGetNumUsers ( struct FString Channel );
	void ClearChatEnterChannelCompleteDelegate ( struct FScriptDelegate ChatEnterChannelCompleteDelegate );
	void AddChatEnterChannelCompleteDelegate ( struct FScriptDelegate ChatEnterChannelCompleteDelegate );
	void OnChatEnterChannelComplete ( unsigned long bWasSuccessful );
	bool ChatEnterChannel ( struct FString Channel );
	void ChatDisconnect ( );
	void ClearChatDisconnectedDelegate ( struct FScriptDelegate ChatDisconnectedDelegate );
	void AddChatDisconnectedDelegate ( struct FScriptDelegate ChatDisconnectedDelegate );
	void OnChatDisconnected ( );
	void ClearChatConnectedDelegate ( struct FScriptDelegate ChatConnectedDelegate );
	void AddChatConnectedDelegate ( struct FScriptDelegate ChatConnectedDelegate );
	bool ChatConnect ( struct FString Server, struct FString NickName );
	bool IsChannelConnected ( struct FString sChannel );
	bool IsChatConnected ( );
	void OnChatConnected ( unsigned long bWasSuccessful );
	unsigned char ReturnBuddyImageIndex ( struct FBuddyImageIndexContainer* BuddyImageIndex );
	void ClearGetBuddyImageIndexCompleteDelegate ( struct FScriptDelegate GetBuddyImageIndexCompleteDelegate );
	void AddGetBuddyImageIndexCompleteDelegate ( struct FScriptDelegate GetBuddyImageIndexCompleteDelegate );
	void OnGetBuddyImageIndexComplete ( unsigned long bWasSuccessful );
	bool GetBuddyImageIndex ( struct FString NickName );
	void ClearCreateBuddyImageIndexCompleteDelegate ( struct FScriptDelegate CreateBuddyImageIndexCompleteDelegate );
	void AddCreateBuddyImageIndexCompleteDelegate ( struct FScriptDelegate CreateBuddyImageIndexCompleteDelegate );
	void OnCreateBuddyImageIndexComplete ( unsigned long bWasSuccessful );
	bool CreateBuddyImageIndex ( struct FString NickName, int ImageIndex );
	void ClearRemoveBuddyRequestCompleteDelegate ( struct FScriptDelegate RemoveBuddyRequestCompleteDelegate );
	void AddRemoveBuddyRequestCompleteDelegate ( struct FScriptDelegate RemoveBuddyRequestCompleteDelegate );
	void OnRemoveBuddyRequestComplete ( unsigned long bWasSuccessful );
	bool RemoveBuddyRequest ( struct FString NickName );
	unsigned char GetBuddyRequestList ( TArray< struct FRequestEntry >* RequestList );
	void ClearReadBuddyRequestListCompleteDelegate ( struct FScriptDelegate ReadBuddyRequestListCompleteDelegate );
	void AddReadBuddyRequestListCompleteDelegate ( struct FScriptDelegate ReadBuddyRequestListCompleteDelegate );
	void OnReadBuddyRequestListComplete ( unsigned long bWasSuccessful );
	bool ReadBuddyRequestList ( );
	void ClearCreateBuddyRequestCompleteDelegate ( struct FScriptDelegate CreateBuddyRequestCompleteDelegate );
	void AddCreateBuddyRequestCompleteDelegate ( struct FScriptDelegate CreateBuddyRequestCompleteDelegate );
	void OnCreateBuddyRequestComplete ( unsigned long bWasSuccessful, int RecordId, struct FString NickName, struct FUniqueNetId Id );
	bool CreateBuddyRequest ( struct FString NickName, struct FUniqueNetId Id );
	void ClearRemoveBuddyAuthorizationCompleteDelegate ( struct FScriptDelegate RemoveBuddyAuthorizationCompleteDelegate );
	void AddRemoveBuddyAuthorizationCompleteDelegate ( struct FScriptDelegate RemoveBuddyAuthorizationCompleteDelegate );
	void OnRemoveBuddyAuthorizationComplete ( unsigned long bWasSuccessful );
	bool RemoveBuddyAuthorization ( struct FString NickName );
	unsigned char GetBuddyAuthorizationList ( TArray< struct FString >* AuthorizationList );
	void ClearReadBuddyAuthorizationListCompleteDelegate ( struct FScriptDelegate ReadBuddyAuthorizationListCompleteDelegate );
	void AddReadBuddyAuthorizationListCompleteDelegate ( struct FScriptDelegate ReadBuddyAuthorizationListCompleteDelegate );
	void OnReadBuddyAuthorizationListComplete ( unsigned long bWasSuccessful );
	bool ReadBuddyAuthorizationList ( );
	void ClearCreateBuddyAuthorizationCompleteDelegate ( struct FScriptDelegate CreateBuddyAuthorizationCompleteDelegate );
	void AddCreateBuddyAuthorizationCompleteDelegate ( struct FScriptDelegate CreateBuddyAuthorizationCompleteDelegate );
	void OnCreateBuddyAuthorizationComplete ( unsigned long bWasSuccessful, int RecordId, struct FString NickName );
	bool CreateBuddyAuthorization ( struct FString NickName );
	unsigned char GetSearchFriendsList ( TArray< struct FString >* SearchResult );
	void ClearSearchFriendsCompleteDelegate ( struct FScriptDelegate SearchFriendsCompleteDelegate );
	void AddSearchFriendsCompleteDelegate ( struct FScriptDelegate SearchFriendsCompleteDelegate );
	void OnSearchFriendsComplete ( unsigned long bWasSuccessful );
	bool SearchFriends ( struct FString SearchNickName );
	struct FString GetVersion ( );
	void ClearQueryAvailableUpdatesDownloadCancel ( struct FScriptDelegate QueryUpdatesDelegate );
	void AddQueryAvailableUpdatesDownloadCancel ( struct FScriptDelegate QueryUpdatesDelegate );
	void ClearQueryAvailableUpdatesDownloadProgress ( struct FScriptDelegate QueryUpdatesDelegate );
	void AddQueryAvailableUpdatesDownloadProgress ( struct FScriptDelegate QueryUpdatesDelegate );
	void ClearQueryAvailableUpdatesDownloadComplete ( struct FScriptDelegate QueryUpdatesDelegate );
	void AddQueryAvailableUpdatesDownloadComplete ( struct FScriptDelegate QueryUpdatesDelegate );
	void GetAvailableUpdatesProgress ( float* fProgress );
	void GetAvailableUpdatesCounts ( int* NewUpdates );
	void ClearQueryAvailableUpdatesComplete ( struct FScriptDelegate QueryUpdatesDelegate );
	void AddQueryAvailableUpdatesComplete ( struct FScriptDelegate QueryUpdatesDelegate );
	void OnQueryAvailableUpdatesDownloadCancel ( unsigned long bWasSuccessful );
	void OnQueryAvailableUpdatesDownloadProgress ( unsigned long bWasSuccessful );
	void OnQueryAvailableUpdatesDownloadComplete ( unsigned long bWasSuccessful );
	void OnQueryAvailableUpdatesComplete ( unsigned long bWasSuccessful );
	bool QueryAvailableUpdatesDownloadCancel ( );
	bool QueryAvailableUpdatesDownload ( );
	bool QueryAvailableUpdates ( );
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
	int GetMessageIndex ( unsigned char LocalUserNum, struct FOnlineFriendMessage Message );
	bool UnmuteAll ( unsigned char LocalUserNum );
	bool MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends );
	void CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma );
	bool RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid );
	struct FString GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate );
	void OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful );
	bool RegisterHostStatGuid ( struct FString* HostStatGuid );
	struct FString GetHostStatGuid ( );
	void ClearFriendMessageSentDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void AddFriendMessageSentDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate );
	void OnFriendMessageSent ( unsigned char LocalUserNum, struct FUniqueNetId RecievedPlayer, struct FString Message );
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
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful, struct FString nick );
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
	unsigned char GetTitleFileState ( struct FString FileName );
	bool GetTitleFileContents ( struct FString FileName, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString FileName );
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
	bool UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
	bool MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide );
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
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
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
	void ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum );
	void OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId );
	void ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
	void AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate );
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
	bool LoginPreAuthenticated ( unsigned char LocalUserNum, struct FString Token, struct FString Challenge, unsigned long bWantsLocalOnly );
	bool Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
	bool eventInit ( );
};

UClass* UOnlineSubsystemGameSpy::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif