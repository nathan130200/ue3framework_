/*
#############################################################################################
# Bullet Run (Unknown) SDK
# ========================================================================================= #
# File: OnlineSubsystemGameSpy_classes.h
# ========================================================================================= #
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy
// 0x00B4 (0x0280 - 0x01CC)
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
	unsigned long                                      bShowAllServers : 1;                              		// 0x024C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FSBServer >                         ServersPendingInfo;                               		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0268 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0274 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
};

// Class OnlineSubsystemGameSpy.OnlineSubsystemGameSpy
// 0x082C (0x0930 - 0x0104)
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
	struct FString                                     StationHandle;                                    		// 0x0660 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x066C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x0678 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x0684 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x0690 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x069C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x06A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x06B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x06C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x06CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x06D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x06E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x06F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x06FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0708 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0714 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0720 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x072C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0738 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x0744 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x0750 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x075C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x0768 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0774 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;       		// 0x0780 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x078C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0798 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x07A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x07B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x07BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x07C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageSent__Delegate;                  		// 0x07D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x07E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x07EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x07F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableUpdatesComplete__Delegate;      		// 0x0804 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableUpdatesDownloadComplete__Delegate;		// 0x0810 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableUpdatesDownloadProgress__Delegate;		// 0x081C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableUpdatesDownloadCancel__Delegate;		// 0x0828 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSearchFriendsComplete__Delegate;              		// 0x0834 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateBuddyAuthorizationComplete__Delegate;   		// 0x0840 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadBuddyAuthorizationListComplete__Delegate; 		// 0x084C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRemoveBuddyAuthorizationComplete__Delegate;   		// 0x0858 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateBuddyRequestComplete__Delegate;         		// 0x0864 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadBuddyRequestListComplete__Delegate;       		// 0x0870 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRemoveBuddyRequestComplete__Delegate;         		// 0x087C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateBuddyImageIndexComplete__Delegate;      		// 0x0888 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetBuddyImageIndexComplete__Delegate;         		// 0x0894 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatConnected__Delegate;                      		// 0x08A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatDisconnected__Delegate;                   		// 0x08AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatEnterChannelComplete__Delegate;           		// 0x08B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatMessageReceived__Delegate;                		// 0x08C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatUserJoined__Delegate;                     		// 0x08D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnChatUserParted__Delegate;                     		// 0x08DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnValidateAndSaveKey__Delegate;                 		// 0x08E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadByteDataComplete__Delegate;               		// 0x08F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteByteDataComplete__Delegate;              		// 0x0900 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetBuddyListImageIndexComplete__Delegate;     		// 0x090C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateBuddyFriendshipComplete__Delegate;      		// 0x0918 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetFriendshipListComplete__Delegate;          		// 0x0924 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif