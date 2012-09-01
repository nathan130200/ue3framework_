/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemGFWL_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemGFWL.ClientBeaconAddressResolverGFWL
// 0x0000 (0x0048 - 0x0048)
class UClientBeaconAddressResolverGFWL : public UClientBeaconAddressResolver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1787 ];

		return pClassPointer;
	};

};

UClass* UClientBeaconAddressResolverGFWL::pClassPointer = NULL;

// Class OnlineSubsystemGFWL.OnlineEventsInterfaceMcpGFWL
// 0x0000 (0x0068 - 0x0068)
class UOnlineEventsInterfaceMcpGFWL : public UOnlineEventsInterfaceMcp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1788 ];

		return pClassPointer;
	};

	bool UploadMatchmakingSessionData ( class UOnlineGameSettings* GameSettings, TArray< struct FPlayerReservation >* Players );
	bool UploadMatchmakingSearchData ( struct FUniqueNetId UniqueId, class UOnlineGameSearch* Search, int SelectedIndex, TArray< struct FPlayerReservation >* Players );
	bool UploadHardwareData ( struct FUniqueNetId UniqueId, struct FString PlayerNick );
};

UClass* UOnlineEventsInterfaceMcpGFWL::pClassPointer = NULL;

// Class OnlineSubsystemGFWL.OnlineSubsystemGFWL
// 0x0BDC (0x0CB8 - 0x00DC)
class UOnlineSubsystemGFWL : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    NotificationHandle;                               		// 0x00DC (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    XLocatorServiceHandle;                            		// 0x00E0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UOnlineGameSearch*                           GameSearch;                                       		// 0x00E4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LanBeaconState;                                   		// 0x00E8 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LanNonce[ 0x8 ];                                  		// 0x00E9 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentNotificationPosition;                      		// 0x00F1 (0x0001) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x00F2 (0x0001) [0x0000000000000000]              
	unsigned char                                      QoSPacket[ 0x200 ];                               		// 0x00F3 (0x0200) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      DelayedInviteUserMask;                            		// 0x02F3 (0x0001) [0x0000000000000000]              
	int                                                LiveSystemLinkPort;                               		// 0x02F4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanAnnouncePort;                                  		// 0x02F8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanGameUniqueId;                                  		// 0x02FC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanPacketPlatformMask;                            		// 0x0300 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              LanQueryTimeLeft;                                 		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              LanQueryTimeout;                                  		// 0x0308 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    LanBeacon;                                        		// 0x030C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                NumLogins;                                        		// 0x0310 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	TArray< struct FPointer >                          AsyncTasks;                                       		// 0x0314 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FFriendsListCache                           FriendsCache[ 0x4 ];                              		// 0x0320 (0x00A0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginChangeDelegates;                             		// 0x03C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLoginStatusDelegates                       PlayerLoginStatusDelegates[ 0x4 ];                		// 0x03CC (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   PartyChangeDelegates;                             		// 0x03FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCachedLoginState                           LastLoginState[ 0x4 ];                            		// 0x0408 (0x0170) [0x0000000000000002]              ( CPF_Const )
	struct FContentListCache                           ContentCache[ 0x4 ];                              		// 0x0578 (0x00F0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AnyContentChangeDelegates;                        		// 0x0668 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KeyboardInputResults;                             		// 0x0674 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FDeviceIdCache                              DeviceCache[ 0x4 ];                               		// 0x0680 (0x0070) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FProfileSettingsCache                       ProfileCache[ 0x4 ];                              		// 0x06F0 (0x00A0) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerStorage*                        PlayerStorageCache[ 0x4 ];                        		// 0x0790 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LocalPlayerStorageReadDelegates;                  		// 0x07A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LocalPlayerStorageWriteDelegates;                 		// 0x07AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemotePlayerStorageReadDelegates;                 		// 0x07B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLocalTalker                                LocalTalkers[ 0x4 ];                              		// 0x07C4 (0x0010) [0x0000000000000000]              
	TArray< struct FLiveRemoteTalker >                 RemoteTalkers;                                    		// 0x07D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TalkingDelegates;                                 		// 0x07E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPerUserDelegateLists                       PerUserDelegates[ 0x4 ];                          		// 0x07EC (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x087C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsInSignInUI : 1;                                		// 0x0880 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bShouldLogArbitrationData : 1;                    		// 0x0880 (0x0004) [0x0000000000004000] [0x00000002] ( CPF_Config )
	unsigned long                                      bShouldLogStatsData : 1;                          		// 0x0880 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      bShouldUseMcp : 1;                                		// 0x0880 (0x0004) [0x0000000000004000] [0x00000008] ( CPF_Config )
	unsigned long                                      bIsCountingDownSigninNotification : 1;            		// 0x0880 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	TArray< struct FScriptDelegate >                   LoginCancelledDelegates;                          		// 0x0884 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginFailedDelegates;                             		// 0x0890 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LogoutCompletedDelegates;                         		// 0x089C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CreateOnlineGameCompleteDelegates;                		// 0x08A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UpdateOnlineGameCompleteDelegates;                		// 0x08B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DestroyOnlineGameCompleteDelegates;               		// 0x08C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinOnlineGameCompleteDelegates;                  		// 0x08CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   StartOnlineGameCompleteDelegates;                 		// 0x08D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EndOnlineGameCompleteDelegates;                   		// 0x08E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FindOnlineGamesCompleteDelegates;                 		// 0x08F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CancelFindOnlineGamesCompleteDelegates;           		// 0x08FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x0908 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x0914 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ArbitrationRegistrationCompleteDelegates;         		// 0x0920 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadOnlineStatsCompleteDelegates;                 		// 0x092C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ExternalUIChangeDelegates;                        		// 0x0938 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ControllerChangeDelegates;                        		// 0x0944 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LastInputDeviceConnectedMask;                     		// 0x0950 (0x0004) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x0954 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   StorageDeviceChangeDelegates;                     		// 0x0960 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LinkStatusChangeDelegates;                        		// 0x096C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FlushOnlineStatsDelegates;                        		// 0x0978 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   KeyboardInputDelegates;                           		// 0x0984 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0990 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FServiceQosResult                           mServiceQosResult;                                		// 0x099C (0x001C) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   mServiceQosDelegates;                             		// 0x09B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FInviteData                                 InviteCache[ 0x4 ];                               		// 0x09C4 (0x0050) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x0A14 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinFriendGameCompleteDelegates;                  		// 0x0A20 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTitleFile >                        TitleManagedFiles;                                		// 0x0A2C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCachedAchievements >               AchievementList;                                  		// 0x0A38 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              SigninCountDownCounter;                           		// 0x0A44 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              SigninCountDownDelay;                             		// 0x0A48 (0x0004) [0x0000000000000000]              
	int                                                DebugLogLevel;                                    		// 0x0A4C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              VoiceNotificationDelta;                           		// 0x0A50 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x0A54 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x0A60 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x0A6C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x0A78 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x0A84 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x0A90 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x0A9C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x0AA8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0AB4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x0AC0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x0ACC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x0AD8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x0AE4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0AF0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x0AFC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x0B08 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x0B14 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x0B20 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x0B2C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x0B38 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0B44 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0B50 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x0B5C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0B68 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x0B74 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x0B80 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0B8C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0B98 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0BA4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x0BB0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x0BBC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x0BC8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x0BD4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0BE0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPartyChange__Delegate;                        		// 0x0BEC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0BF8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnContentChange__Delegate;                      		// 0x0C04 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadContentComplete__Delegate;                		// 0x0C10 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableDownloadsComplete__Delegate;    		// 0x0C1C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0C28 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0C34 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0C40 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0C4C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0C58 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0C64 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0C70 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0C7C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0C88 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0C94 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x0CA0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnServiceQosCheckComplete__Delegate;            		// 0x0CAC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1789 ];

		return pClassPointer;
	};

	void ClearServiceQosDelegate ( struct FScriptDelegate ServiceQosDelegate );
	void AddServiceQosDelegate ( struct FScriptDelegate ServiceQosDelegate );
	void OnServiceQosCheckComplete ( );
	void GetServiceQosResult ( struct FServiceQosResult* QosResult );
	void CheckServiceQos ( float TimeOut );
	void SetNATFilter ( unsigned long Enabled );
	bool IsNATFiltered ( );
	void SetDebugSpewLevel ( int DebugSpewLevel );
	void DumpVoiceRegistration ( );
	void DumpLiveSessionState ( );
	void DumpSessionState ( );
	int GetBuildUniqueId ( );
	bool ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players );
	unsigned char GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements );
	void ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate );
	void OnReadAchievementsComplete ( int TitleId );
	bool ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages );
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
	bool RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend );
	bool DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	bool AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer );
	void ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate );
	void OnAddFriendByNameComplete ( unsigned long bWasSuccessful );
	bool AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message );
	bool AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message );
	bool WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores );
	void ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate );
	void OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool FlushOnlineStats ( struct FName SessionName );
	bool WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite );
	void FreeStats ( class UOnlineStatsRead* StatsRead );
	void MulticastReadOnlineStatsComplete ( unsigned long bWasSuccessful );
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
	bool IsNetworkedVoiceEnabled ( unsigned char LocalUserNum );
	void StopNetworkedVoice ( unsigned char LocalUserNum );
	void StartNetworkedVoice ( unsigned char LocalUserNum );
	void ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate );
	void OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking );
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
	void GetAvailableDownloadCounts ( unsigned char LocalUserNum, int* NewDownloads, int* TotalDownloads );
	void ClearQueryAvailableDownloadsComplete ( unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate );
	void AddQueryAvailableDownloadsComplete ( unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate );
	void OnQueryAvailableDownloadsComplete ( unsigned long bWasSuccessful );
	bool QueryAvailableDownloads ( unsigned char LocalUserNum, int CategoryMask );
	unsigned char GetContentList ( unsigned char LocalUserNum, TArray< struct FOnlineContent >* ContentList );
	bool ReadContentList ( unsigned char LocalUserNum );
	void ClearReadContentComplete ( unsigned char LocalUserNum, struct FScriptDelegate ReadContentCompleteDelegate );
	void AddReadContentComplete ( unsigned char LocalUserNum, struct FScriptDelegate ReadContentCompleteDelegate );
	void OnReadContentComplete ( unsigned long bWasSuccessful );
	void ClearContentChangeDelegate ( struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum );
	void AddContentChangeDelegate ( struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum );
	void OnContentChange ( );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	unsigned char GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends );
	void ClearPartyChangeDelegate ( struct FScriptDelegate dgt );
	void AddPartyChangeDelegate ( struct FScriptDelegate dgt );
	void OnPartyChange ( );
	void ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	bool ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	TArray< struct FOnlineArbitrationRegistrant > GetArbitratedPlayers ( struct FName SessionName );
	void ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	void AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	void OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool RegisterForArbitration ( struct FName SessionName );
	void ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool EndOnlineGame ( struct FName SessionName );
	void ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool StartOnlineGame ( struct FName SessionName );
	void ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate );
	void OnProfileDataChanged ( );
	bool UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId );
	void ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate );
	void OnUnlockAchievementComplete ( unsigned long bWasSuccessful );
	bool UnlockAchievement ( unsigned char LocalUserNum, int AchievementId );
	bool IsDeviceValid ( int DeviceID, int SizeNeeded );
	int GetDeviceSelectionResults ( unsigned char LocalPlayerNum, struct FString* DeviceName );
	void ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate );
	void OnDeviceSelectionComplete ( unsigned long bWasSuccessful );
	bool ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShowUI, unsigned long bManageStorage );
	bool ShowMembershipMarketplaceUI ( unsigned char LocalUserNum );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId );
	bool ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText );
	void SetOnlineStatus ( unsigned char LocalUserNum, int PresenceMode, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties );
	void ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate );
	void OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	class UOnlinePlayerStorage* GetPlayerStorage ( unsigned char LocalUserNum );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate );
	void OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful );
	bool ReadPlayerStorageForNetId ( struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage );
	void ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate );
	void OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage );
	void ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate );
	void OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	class UOnlineProfileSettings* GetProfileSettings ( unsigned char LocalUserNum );
	void ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate );
	void OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful );
	bool ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings );
	bool RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo );
	void ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	bool FreeSearchResults ( class UOnlineGameSearch* Search );
	bool BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo );
	void ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	bool FindFriendGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings );
	bool CancelFindOnlineGames ( );
	void ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	void AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	bool FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings );
	void ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool DestroyOnlineGame ( struct FName SessionName );
	class UOnlineGameSettings* GetGameSettings ( struct FName SessionName );
	void ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
	void ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	class UOnlineGameSearch* GetGameSearch ( );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
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
	struct FString GetKeyboardInputResults ( unsigned char* bWasCanceled );
	void ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate );
	void OnKeyboardInputComplete ( unsigned long bWasSuccessful );
	bool ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength );
	bool ShowPlayersUI ( unsigned char LocalUserNum );
	bool ShowGuideUI ( );
	bool ShowAchievementsUI ( unsigned char LocalUserNum );
	bool ShowMessagesUI ( unsigned char LocalUserNum );
	bool ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
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
	bool eventShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID );
	bool IsInParty ( unsigned char LocalUserNum );
	bool ShowPartySessionsUI ( unsigned char LocalUserNum );
	bool ShowPartyUI ( unsigned char LocalUserNum );
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
	unsigned char GetLoginStatus ( unsigned char LocalUserNum, unsigned long useCache );
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
	void eventExit ( );
	bool eventInit ( );
	void OnFriendsChange ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( unsigned char LocalUserNum );
};

UClass* UOnlineSubsystemGFWL::pClassPointer = NULL;

// Class OnlineSubsystemGFWL.PgOnlineSubsystemGFWL
// 0x002C (0x0CE4 - 0x0CB8)
class UPgOnlineSubsystemGFWL : public UOnlineSubsystemGFWL
{
public:
	TArray< struct FScriptDelegate >                   ShowMarketplaceUICompleteDelegates;               		// 0x0CB8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mVersion;                                         		// 0x0CC4 (0x0004) [0x0000000000000000]              
	unsigned long                                      mFlushingStats : 1;                               		// 0x0CC8 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FName >                             mPendingSessionDestroyList;                       		// 0x0CCC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnShowMarketplaceUIComplete__Delegate;          		// 0x0CD8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1790 ];

		return pClassPointer;
	};

	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId );
	bool DestroyOnlineGame ( struct FName SessionName );
	bool EndOnlineGame ( struct FName SessionName );
	bool FlushOnlineStats ( struct FName SessionName );
	bool ShowLoginUI ( unsigned long bShowOnlineOnly );
	bool eventInit ( );
	void OnShowMarketplaceUIComplete ( unsigned long bWasSuccessful );
};

UClass* UPgOnlineSubsystemGFWL::pClassPointer = NULL;

// Class OnlineSubsystemGFWL.IpNetDriverLive
// 0x0008 (0x01A8 - 0x01A0)
class UIpNetDriverLive : public UTcpNetDriver
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x01A0 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1791 ];

		return pClassPointer;
	};

};

UClass* UIpNetDriverLive::pClassPointer = NULL;

// Class OnlineSubsystemGFWL.IpConnectionLive
// 0x0210 (0x51F0 - 0x4FE0)
class UIpConnectionLive : public UTcpipConnection
{
public:
	unsigned char                                      UnknownData00[ 0x210 ];                           		// 0x4FE0 (0x0210) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1792 ];

		return pClassPointer;
	};

};

UClass* UIpConnectionLive::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif