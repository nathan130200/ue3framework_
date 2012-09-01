/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_classes.h
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

// Enum IpDrv.InternetLink.ELinkMode
/*enum ELinkMode
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_MAX                                           = 3
};*/

// Enum IpDrv.InternetLink.EReceiveMode
/*enum EReceiveMode
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_MAX                                          = 2
};*/

// Enum IpDrv.InternetLink.ELineMode
/*enum ELineMode
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_MAX                                          = 4
};*/

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
/*enum EEventUploadType
{
	EUT_GenericStats                                   = 0,
	EUT_ProfileData                                    = 1,
	EUT_HardwareData                                   = 2,
	EUT_MatchmakingData                                = 3,
	EUT_MAX                                            = 4
};*/

// Enum IpDrv.PartyBeacon.EPartyReservationResult
/*enum EPartyReservationResult
{
	PRR_GeneralError                                   = 0,
	PRR_PartyLimitReached                              = 1,
	PRR_IncorrectPlayerCount                           = 2,
	PRR_RequestTimedOut                                = 3,
	PRR_ReservationDuplicate                           = 4,
	PRR_ReservationNotFound                            = 5,
	PRR_ReservationAccepted                            = 6,
	PRR_MAX                                            = 7
};*/

// Enum IpDrv.PartyBeacon.EReservationPacketType
/*enum EReservationPacketType
{
	RPT_UnknownPacketType                              = 0,
	RPT_ClientReservationRequest                       = 1,
	RPT_ClientReservationUpdateRequest                 = 2,
	RPT_ClientCancellationRequest                      = 3,
	RPT_HostReservationResponse                        = 4,
	RPT_HostCancellationResponse                       = 5,
	RPT_HostReservationCountUpdate                     = 6,
	RPT_HostTravelRequest                              = 7,
	RPT_HostIsReady                                    = 8,
	RPT_HostHasCancelled                               = 9,
	RPT_Heartbeat                                      = 10,
	RPT_MAX                                            = 11
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
/*enum EPartyBeaconClientRequest
{
	PBClientRequest_NewReservation                     = 0,
	PBClientRequest_UpdateReservation                  = 1,
	PBClientRequest_MAX                                = 2
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
/*enum EPartyBeaconClientState
{
	PBCS_None                                          = 0,
	PBCS_Connecting                                    = 1,
	PBCS_Connected                                     = 2,
	PBCS_ConnectionFailed                              = 3,
	PBCS_AwaitingResponse                              = 4,
	PBCS_Closed                                        = 5,
	PBCS_MAX                                           = 6
};*/

// Enum IpDrv.TcpLink.ELinkState
/*enum ELinkState
{
	STATE_Initialized                                  = 0,
	STATE_Ready                                        = 1,
	STATE_Listening                                    = 2,
	STATE_Connecting                                   = 3,
	STATE_Connected                                    = 4,
	STATE_ListenClosePending                           = 5,
	STATE_ConnectClosePending                          = 6,
	STATE_ListenClosing                                = 7,
	STATE_ConnectClosing                               = 8,
	STATE_MAX                                          = 9
};*/

// Enum IpDrv.WebRequest.ERequestType
/*enum ERequestType
{
	Request_GET                                        = 0,
	Request_POST                                       = 1,
	Request_MAX                                        = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0048 - 0x003C)
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	struct FName                                       BeaconName;                                       		// 0x0040 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1355 ];

		return pClassPointer;
	};

};

UClass* UClientBeaconAddressResolver::pClassPointer = NULL;

// Class IpDrv.HTTPDownload
// 0x00F8 (0x0B68 - 0x0A70)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                  		// 0x0A70 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                ProxyServerPort;                                  		// 0x0A7C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      MaxRedirection : 1;                               		// 0x0A80 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	float                                              ConnectionTimeout;                                		// 0x0A84 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData00[ 0xE0 ];                            		// 0x0A88 (0x00E0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1356 ];

		return pClassPointer;
	};

};

UClass* UHTTPDownload::pClassPointer = NULL;

// Class IpDrv.InternetLink
// 0x0018 (0x01FC - 0x01E4)
class AInternetLink : public AInfo
{
public:
	unsigned char                                      LinkMode;                                         		// 0x01E4 (0x0001) [0x0000000000000000]              
	unsigned char                                      InLineMode;                                       		// 0x01E5 (0x0001) [0x0000000000000000]              
	unsigned char                                      OutLineMode;                                      		// 0x01E6 (0x0001) [0x0000000000000000]              
	unsigned char                                      ReceiveMode;                                      		// 0x01E7 (0x0001) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x01E8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Port;                                             		// 0x01EC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    RemoteSocket;                                     		// 0x01F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    PrivateResolveInfo;                               		// 0x01F4 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                DataPending;                                      		// 0x01F8 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1357 ];

		return pClassPointer;
	};

	void eventResolveFailed ( );
	void eventResolved ( struct FIpAddr Addr );
	void GetLocalIP ( struct FIpAddr* Arg );
	bool StringToIpAddr ( struct FString Str, struct FIpAddr* Addr );
	struct FString IpAddrToString ( struct FIpAddr Arg );
	int GetLastError ( );
	void Resolve ( struct FString Domain );
	bool ParseURL ( struct FString URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName );
	bool IsDataPending ( );
};

UClass* AInternetLink::pClassPointer = NULL;

// Class IpDrv.TcpLink
// 0x0028 (0x0224 - 0x01FC)
class ATcpLink : public AInternetLink
{
public:
	unsigned char                                      LinkState;                                        		// 0x01FC (0x0001) [0x0000000000000000]              
	struct FIpAddr                                     RemoteAddr;                                       		// 0x0200 (0x0008) [0x0000000000000000]              
	class UClass*                                      AcceptClass;                                      		// 0x0208 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            SendFIFO;                                         		// 0x020C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     RecvBuf;                                          		// 0x0218 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1358 ];

		return pClassPointer;
	};

	void eventReceivedBinary ( int Count, unsigned char* B );
	void eventReceivedLine ( struct FString Line );
	void eventReceivedText ( struct FString Text );
	void eventClosed ( );
	void eventOpened ( );
	void eventAccepted ( );
	int ReadBinary ( int Count, unsigned char* B );
	int ReadText ( struct FString* Str );
	int SendBinary ( int Count, unsigned char* B );
	int SendText ( struct FString Str );
	bool IsConnected ( );
	bool Close ( );
	bool Open ( struct FIpAddr Addr );
	bool Listen ( );
	int BindPort ( int PortNum, unsigned long bUseNextAvailable );
};

UClass* ATcpLink::pClassPointer = NULL;

// Class IpDrv.MCPBase
// 0x0004 (0x0040 - 0x003C)
class UMCPBase : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1359 ];

		return pClassPointer;
	};

};

UClass* UMCPBase::pClassPointer = NULL;

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0028 (0x0068 - 0x0040)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray< struct FEventUploadConfig >                EventUploadConfigs;                               		// 0x0040 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPointer >                          HttpPostObjects;                                  		// 0x004C (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< unsigned char >                            DisabledUploadTypes;                              		// 0x0058 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bBinaryStats : 1;                                 		// 0x0064 (0x0004) [0x0000000000004002] [0x00000001] ( CPF_Const | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1360 ];

		return pClassPointer;
	};

	bool UploadMatchmakingSessionData ( class UOnlineGameSettings* GameSettings, TArray< struct FPlayerReservation >* Players );
	bool UploadMatchmakingSearchData ( struct FUniqueNetId UniqueId, class UOnlineGameSearch* Search, int SelectedIndex, TArray< struct FPlayerReservation >* Players );
	bool UploadHardwareData ( struct FUniqueNetId UniqueId, struct FString PlayerNick );
	bool UploadGameplayEventsData ( class UOnlineGameplayEvents* Events );
	bool UploadProfileData ( struct FUniqueNetId UniqueId, struct FString PlayerNick, class UOnlineProfileSettings* ProfileSettings );
};

UClass* UOnlineEventsInterfaceMcp::pClassPointer = NULL;

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0028 (0x0068 - 0x0040)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray< struct FNewsCacheEntry >                   NewsItems;                                        		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadNewsDelegates;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNeedsTicking : 1;                                		// 0x0058 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                  		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1361 ];

		return pClassPointer;
	};

	struct FString GetNews ( unsigned char LocalUserNum, unsigned char NewsType );
	void ClearReadNewsCompletedDelegate ( struct FScriptDelegate ReadGameNewsDelegate );
	void AddReadNewsCompletedDelegate ( struct FScriptDelegate ReadNewsDelegate );
	void OnReadNewsCompleted ( unsigned long bWasSuccessful, unsigned char NewsType );
	bool ReadNews ( unsigned char LocalUserNum, unsigned char NewsType );
};

UClass* UOnlineNewsInterfaceMcp::pClassPointer = NULL;

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x003C (0x007C - 0x0040)
class UOnlineTitleFileDownloadMcp : public UMCPBase
{
public:
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTitleFile >                        TitleFiles;                                       		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    HttpDownloader;                                   		// 0x0058 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                CurrentIndex;                                     		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     BaseUrl;                                          		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              TimeOut;                                          		// 0x006C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1362 ];

		return pClassPointer;
	};

	bool ClearDownloadedFiles ( );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
};

UClass* UOnlineTitleFileDownloadMcp::pClassPointer = NULL;

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0014 (0x00DC - 0x00C8)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                      		// 0x00C8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                MaxLocalTalkers;                                  		// 0x00CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxRemoteTalkers;                                 		// 0x00D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bIsUsingSpeechRecognition : 1;                    		// 0x00D4 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                		// 0x00D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1363 ];

		return pClassPointer;
	};

	bool IsPlayerInSession ( struct FName SessionName, struct FUniqueNetId PlayerID );
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex ( int UserIndex );
	struct FString eventGetPlayerNicknameFromIndex ( int UserIndex );
};

UClass* UOnlineSubsystemCommonImpl::pClassPointer = NULL;

// Class IpDrv.OnlineGameInterfaceImpl
// 0x0124 (0x0160 - 0x003C)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UOnlineGameSearch*                           GameSearch;                                       		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentGameState;                                 		// 0x0048 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LanBeaconState;                                   		// 0x0049 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LanNonce[ 0x8 ];                                  		// 0x004A (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FScriptDelegate >                   CreateOnlineGameCompleteDelegates;                		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UpdateOnlineGameCompleteDelegates;                		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DestroyOnlineGameCompleteDelegates;               		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinOnlineGameCompleteDelegates;                  		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   StartOnlineGameCompleteDelegates;                 		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EndOnlineGameCompleteDelegates;                   		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FindOnlineGamesCompleteDelegates;                 		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CancelFindOnlineGamesCompleteDelegates;           		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LanAnnouncePort;                                  		// 0x00B4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanGameUniqueId;                                  		// 0x00B8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanPacketPlatformMask;                            		// 0x00BC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              LanQueryTimeLeft;                                 		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              LanQueryTimeout;                                  		// 0x00C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    LanBeacon;                                        		// 0x00C8 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    SessionInfo;                                      		// 0x00CC (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x0124 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1364 ];

		return pClassPointer;
	};

	bool BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	bool RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
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
	bool FreeSearchResults ( class UOnlineGameSearch* Search );
	void ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	bool CancelFindOnlineGames ( );
	void ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	void AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	bool FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings );
	void ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool DestroyOnlineGame ( struct FName SessionName );
	void ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
	void ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	class UOnlineGameSearch* GetGameSearch ( );
	class UOnlineGameSettings* GetGameSettings ( struct FName SessionName );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
};

UClass* UOnlineGameInterfaceImpl::pClassPointer = NULL;

// Class IpDrv.PartyBeacon
// 0x0020 (0x005C - 0x003C)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                PartyBeaconPort;                                  		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    Socket;                                           		// 0x0044 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bIsInTick : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsDeferredDestroy : 1;                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShouldTick : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                                 		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ElapsedHeartbeatTime;                             		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FName                                       BeaconName;                                       		// 0x0054 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1365 ];

		return pClassPointer;
	};

	void eventDestroyBeacon ( );
};

UClass* UPartyBeacon::pClassPointer = NULL;

// Class IpDrv.PartyBeaconClient
// 0x00B8 (0x0114 - 0x005C)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                               		// 0x005C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FPartyReservation                           PendingRequest;                                   		// 0x0064 (0x003C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ClientBeaconState;                                		// 0x00A0 (0x0001) [0x0000000000000000]              
	unsigned char                                      ClientBeaconRequestType;                          		// 0x00A1 (0x0001) [0x0000000000000000]              
	float                                              ReservationRequestTimeout;                        		// 0x00A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ReservationRequestElapsedTime;                    		// 0x00A8 (0x0004) [0x0000000000000000]              
	struct FString                                     ResolverClassName;                                		// 0x00AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ResolverClass;                                    		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UClientBeaconAddressResolver*                Resolver;                                         		// 0x00BC (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;         		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationUpdateRequestComplete__Delegate;   		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancellationRequestComplete__Delegate;        		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;            		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;              		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                        		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                   		// 0x0108 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1366 ];

		return pClassPointer;
	};

	void eventDestroyBeacon ( );
	bool CancelReservation ( struct FUniqueNetId CancellingPartyLeader );
	bool RequestReservationUpdate ( struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* PlayersToAdd );
	bool RequestReservation ( struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* Players );
	void OnHostHasCancelled ( );
	void OnHostIsReady ( );
	void OnTravelRequestReceived ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void OnReservationCountUpdated ( int ReservationRemaining );
	void OnCancellationRequestComplete ( );
	void OnReservationUpdateRequestComplete ( unsigned char ReservationResult );
	void OnReservationRequestComplete ( unsigned char ReservationResult );
};

UClass* UPartyBeaconClient::pClassPointer = NULL;

// Class IpDrv.PartyBeaconHost
// 0x005C (0x00B8 - 0x005C)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray< struct FClientBeaconConnection >           Clients;                                          		// 0x005C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                NumTeams;                                         		// 0x0068 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumPlayersPerTeam;                                		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumReservations;                                  		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumConsumedReservations;                          		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPartyReservation >                 Reservations;                                     		// 0x0078 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FName                                       OnlineSessionName;                                		// 0x0084 (0x0008) [0x0000000000000000]              
	int                                                ConnectionBacklog;                                		// 0x008C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ReservedHostTeamNum;                              		// 0x0090 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             __OnReservationChange__Delegate;                  		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                   		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;         		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1367 ];

		return pClassPointer;
	};

	int GetMaxAvailableTeamSize ( );
	void GetPlayers ( TArray< struct FUniqueNetId >* Players );
	void AppendReservationSkillsToSearch ( class UOnlineGameSearch* Search );
	void eventUnregisterParty ( struct FUniqueNetId PartyLeader );
	void eventUnregisterPartyMembers ( );
	void eventRegisterPartyMembers ( );
	void TellClientsHostHasCancelled ( );
	void TellClientsHostIsReady ( );
	void TellClientsToTravel ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void eventDestroyBeacon ( );
	void OnClientCancellationReceived ( struct FUniqueNetId PartyLeader );
	void OnReservationsFull ( );
	void OnReservationChange ( );
	void HandlePlayerLogout ( struct FUniqueNetId PlayerID, unsigned long bMaintainParty );
	unsigned char UpdatePartyReservationEntry ( struct FUniqueNetId PartyLeader, TArray< struct FPlayerReservation >* PlayerMembers );
	unsigned char AddPartyReservationEntry ( struct FUniqueNetId PartyLeader, int TeamNum, unsigned long bIsHost, TArray< struct FPlayerReservation >* PlayerMembers );
	bool InitHostBeacon ( int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, struct FName InSessionName );
};

UClass* UPartyBeaconHost::pClassPointer = NULL;

// Class IpDrv.TcpipConnection
// 0x001C (0x4FE0 - 0x4FC4)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x4FC4 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1368 ];

		return pClassPointer;
	};

};

UClass* UTcpipConnection::pClassPointer = NULL;

// Class IpDrv.TcpNetDriver
// 0x001C (0x01A0 - 0x0184)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                       		// 0x0184 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      LogPortUnreach : 1;                               		// 0x0188 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x018C (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1369 ];

		return pClassPointer;
	};

};

UClass* UTcpNetDriver::pClassPointer = NULL;

// Class IpDrv.WebRequest
// 0x00BC (0x00F8 - 0x003C)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URI;                                              		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UserName;                                         		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ContentLength;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	struct FString                                     ContentType;                                      		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      RequestType;                                      		// 0x007C (0x0001) [0x0000000000000000]              
	struct FMap_Mirror                                 HeaderMap;                                        		// 0x0080 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMap_Mirror                                 VariableMap;                                      		// 0x00BC (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1370 ];

		return pClassPointer;
	};

	int GetHexDigit ( struct FString D );
	void DecodeFormData ( struct FString Data );
	void ProcessHeaderString ( struct FString S );
	void Dump ( );
	void GetVariables ( TArray< struct FString >* varNames );
	struct FString GetVariableNumber ( struct FString VariableName, int Number, struct FString DefaultValue );
	int GetVariableCount ( struct FString VariableName );
	struct FString GetVariable ( struct FString VariableName, struct FString DefaultValue );
	void AddVariable ( struct FString VariableName, struct FString Value );
	void GetHeaders ( TArray< struct FString >* headers );
	struct FString GetHeader ( struct FString HeaderName, struct FString DefaultValue );
	void AddHeader ( struct FString HeaderName, struct FString Value );
	struct FString EncodeBase64 ( struct FString Decoded );
	struct FString DecodeBase64 ( struct FString Encoded );
};

UClass* UWebRequest::pClassPointer = NULL;

// Class IpDrv.WebResponse
// 0x0068 (0x00A4 - 0x003C)
class UWebResponse : public UObject
{
public:
	TArray< struct FString >                           headers;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMap_Mirror                                 ReplacementMap;                                   		// 0x0048 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     IncludePath;                                      		// 0x0084 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CharSet;                                          		// 0x0090 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class AWebConnection*                              Connection;                                       		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSentText : 1;                                    		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSentResponse : 1;                                		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1371 ];

		return pClassPointer;
	};

	bool SentResponse ( );
	bool SentText ( );
	void Redirect ( struct FString URL );
	void SendStandardHeaders ( struct FString ContentType, unsigned long bCache );
	void HTTPError ( int ErrorNum, struct FString Data );
	void SendHeaders ( );
	void AddHeader ( struct FString Header, unsigned long bReplace );
	void HTTPHeader ( struct FString Header );
	void HTTPResponse ( struct FString Header );
	void FailAuthentication ( struct FString Realm );
	bool SendCachedFile ( struct FString Filename, struct FString ContentType );
	void eventSendBinary ( int Count, unsigned char* B );
	void eventSendText ( struct FString Text, unsigned long bNoCRLF );
	void Dump ( );
	struct FString GetHTTPExpiration ( int OffsetSeconds );
	struct FString LoadParsedUHTM ( struct FString Filename );
	bool IncludeBinaryFile ( struct FString Filename );
	bool IncludeUHTM ( struct FString Filename );
	void ClearSubst ( );
	void Subst ( struct FString Variable, struct FString Value, unsigned long bClear );
	bool FileExists ( struct FString Filename );
};

UClass* UWebResponse::pClassPointer = NULL;

// Class IpDrv.WebApplication
// 0x0014 (0x0050 - 0x003C)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	class AWebServer*                                  WebServer;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     Path;                                             		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37915 ];

		return pClassPointer;
	};

	void PostQuery ( class UWebRequest* Request, class UWebResponse* Response );
	void Query ( class UWebRequest* Request, class UWebResponse* Response );
	bool PreQuery ( class UWebRequest* Request, class UWebResponse* Response );
	void CleanupApp ( );
	void Cleanup ( );
	void Init ( );
};

UClass* UWebApplication::pClassPointer = NULL;

// Class IpDrv.WebServer
// 0x014C (0x0370 - 0x0224)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                       		// 0x0224 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Applications[ 0xA ];                              		// 0x0230 (0x0078) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ApplicationPaths[ 0xA ];                          		// 0x02A8 (0x0078) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bEnabled : 1;                                     		// 0x0320 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	int                                                ListenPort;                                       		// 0x0324 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxConnections;                                   		// 0x0328 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefaultApplication;                               		// 0x032C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ExpirationSeconds;                                		// 0x0330 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ServerURL;                                        		// 0x0334 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWebApplication*                             ApplicationObjects[ 0xA ];                        		// 0x0340 (0x0028) [0x0000000000000000]              
	int                                                ConnectionCount;                                  		// 0x0368 (0x0004) [0x0000000000000000]              
	int                                                ConnId;                                           		// 0x036C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37918 ];

		return pClassPointer;
	};

	class UWebApplication* GetApplication ( struct FString URI, struct FString* SubURI );
	void eventLostChild ( class AActor* C );
	void eventGainedChild ( class AActor* C );
	void eventDestroyed ( );
	void PostBeginPlay ( );
};

UClass* AWebServer::pClassPointer = NULL;

// Class IpDrv.HelloWeb
// 0x0000 (0x0050 - 0x0050)
class UHelloWeb : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37934 ];

		return pClassPointer;
	};

	void eventQuery ( class UWebRequest* Request, class UWebResponse* Response );
	void Init ( );
};

UClass* UHelloWeb::pClassPointer = NULL;

// Class IpDrv.ImageServer
// 0x0000 (0x0050 - 0x0050)
class UImageServer : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37953 ];

		return pClassPointer;
	};

	void eventQuery ( class UWebRequest* Request, class UWebResponse* Response );
};

UClass* UImageServer::pClassPointer = NULL;

// Class IpDrv.IniLocPatcherMcp
// 0x000C (0x0068 - 0x005C)
class UIniLocPatcherMcp : public UIniLocPatcher
{
public:
	struct FName                                       McpDownloaderName;                                		// 0x005C (0x0008) [0x0000000000004000]              ( CPF_Config )
	class UOnlineTitleFileDownloadMcp*                 Downloader;                                       		// 0x0064 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37963 ];

		return pClassPointer;
	};

	void ClearReadFileDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadFileDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void OnReadFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void DownloadFiles ( );
	void Init ( );
};

UClass* UIniLocPatcherMcp::pClassPointer = NULL;

// Class IpDrv.WebConnection
// 0x0030 (0x0254 - 0x0224)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                        		// 0x0224 (0x0004) [0x0000000000000000]              
	struct FString                                     ReceivedData;                                     		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWebRequest*                                 Request;                                          		// 0x0234 (0x0004) [0x0000000000000000]              
	class UWebResponse*                                Response;                                         		// 0x0238 (0x0004) [0x0000000000000000]              
	class UWebApplication*                             Application;                                      		// 0x023C (0x0004) [0x0000000000000000]              
	unsigned long                                      bDelayCleanup : 1;                                		// 0x0240 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                RawBytesExpecting;                                		// 0x0244 (0x0004) [0x0000000000000000]              
	int                                                MaxValueLength;                                   		// 0x0248 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxLineLength;                                    		// 0x024C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ConnId;                                           		// 0x0250 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38547 ];

		return pClassPointer;
	};

	bool IsHanging ( );
	void Cleanup ( );
	void CheckRawBytes ( );
	void EndOfHeaders ( );
	void CreateResponseObject ( );
	void ProcessPost ( struct FString S );
	void ProcessGet ( struct FString S );
	void ProcessHead ( struct FString S );
	void ReceivedLine ( struct FString S );
	void eventReceivedText ( struct FString Text );
	void eventTimer ( );
	void eventClosed ( );
	void eventAccepted ( );
};

UClass* AWebConnection::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif