/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPW_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnRetrieveGameSettingsForIPDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnRetrieveGameSettingsForIPDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnRetrieveGameSettingsForIPDelegate = NULL;

	if ( ! pFnClearOnRetrieveGameSettingsForIPDelegate )
		pFnClearOnRetrieveGameSettingsForIPDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39479 ];

	UOnlineSubsystemPW_execClearOnRetrieveGameSettingsForIPDelegate_Parms ClearOnRetrieveGameSettingsForIPDelegate_Parms;
	memcpy ( &ClearOnRetrieveGameSettingsForIPDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnRetrieveGameSettingsForIPDelegate, &ClearOnRetrieveGameSettingsForIPDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnRetrieveGameSettingsForIPDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnRetrieveGameSettingsForIPDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnRetrieveGameSettingsForIPDelegate = NULL;

	if ( ! pFnAddOnRetrieveGameSettingsForIPDelegate )
		pFnAddOnRetrieveGameSettingsForIPDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39477 ];

	UOnlineSubsystemPW_execAddOnRetrieveGameSettingsForIPDelegate_Parms AddOnRetrieveGameSettingsForIPDelegate_Parms;
	memcpy ( &AddOnRetrieveGameSettingsForIPDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnRetrieveGameSettingsForIPDelegate, &AddOnRetrieveGameSettingsForIPDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRetrievedGameSettingsForIP
// [0x00520000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )
// struct FOnlineGameSearchResult ConnectResult                  ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineSubsystemPW::OnRetrievedGameSettingsForIP ( unsigned long bSuccessful, struct FOnlineGameSearchResult* ConnectResult )
{
	static UFunction* pFnOnRetrievedGameSettingsForIP = NULL;

	if ( ! pFnOnRetrievedGameSettingsForIP )
		pFnOnRetrievedGameSettingsForIP = (UFunction*) UObject::GObjObjects()->Data[ 37512 ];

	UOnlineSubsystemPW_execOnRetrievedGameSettingsForIP_Parms OnRetrievedGameSettingsForIP_Parms;
	OnRetrievedGameSettingsForIP_Parms.bSuccessful = bSuccessful;

	this->ProcessEvent ( pFnOnRetrievedGameSettingsForIP, &OnRetrievedGameSettingsForIP_Parms, NULL );

	if ( ConnectResult )
		memcpy ( ConnectResult, &OnRetrievedGameSettingsForIP_Parms.ConnectResult, 0x8 );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RetrieveGameSettingsForIP
// [0x00020000] 
// Parameters infos:
// struct FString                 IPAddress                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::RetrieveGameSettingsForIP ( struct FString IPAddress )
{
	static UFunction* pFnRetrieveGameSettingsForIP = NULL;

	if ( ! pFnRetrieveGameSettingsForIP )
		pFnRetrieveGameSettingsForIP = (UFunction*) UObject::GObjObjects()->Data[ 39473 ];

	UOnlineSubsystemPW_execRetrieveGameSettingsForIP_Parms RetrieveGameSettingsForIP_Parms;
	memcpy ( &RetrieveGameSettingsForIP_Parms.IPAddress, &IPAddress, 0xC );

	this->ProcessEvent ( pFnRetrieveGameSettingsForIP, &RetrieveGameSettingsForIP_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReregisterLocalPlayers
// [0x00020000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )

void UOnlineSubsystemPW::ReregisterLocalPlayers ( struct FName SessionName )
{
	static UFunction* pFnReregisterLocalPlayers = NULL;

	if ( ! pFnReregisterLocalPlayers )
		pFnReregisterLocalPlayers = (UFunction*) UObject::GObjObjects()->Data[ 39471 ];

	UOnlineSubsystemPW_execReregisterLocalPlayers_Parms ReregisterLocalPlayers_Parms;
	memcpy ( &ReregisterLocalPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnReregisterLocalPlayers, &ReregisterLocalPlayers_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFullVersionUnlockDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearFullVersionUnlockDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearFullVersionUnlockDelegate = NULL;

	if ( ! pFnClearFullVersionUnlockDelegate )
		pFnClearFullVersionUnlockDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39468 ];

	UOnlineSubsystemPW_execClearFullVersionUnlockDelegate_Parms ClearFullVersionUnlockDelegate_Parms;
	ClearFullVersionUnlockDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFullVersionUnlockDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearFullVersionUnlockDelegate, &ClearFullVersionUnlockDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFullVersionUnlockDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddFullVersionUnlockDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddFullVersionUnlockDelegate = NULL;

	if ( ! pFnAddFullVersionUnlockDelegate )
		pFnAddFullVersionUnlockDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39465 ];

	UOnlineSubsystemPW_execAddFullVersionUnlockDelegate_Parms AddFullVersionUnlockDelegate_Parms;
	AddFullVersionUnlockDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFullVersionUnlockDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddFullVersionUnlockDelegate, &AddFullVersionUnlockDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFullVersionUnlock
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnFullVersionUnlock ( )
{
	static UFunction* pFnOnFullVersionUnlock = NULL;

	if ( ! pFnOnFullVersionUnlock )
		pFnOnFullVersionUnlock = (UFunction*) UObject::GObjObjects()->Data[ 37514 ];

	UOnlineSubsystemPW_execOnFullVersionUnlock_Parms OnFullVersionUnlock_Parms;

	this->ProcessEvent ( pFnOnFullVersionUnlock, &OnFullVersionUnlock_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CancelNATNegotiation
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPW::CancelNATNegotiation ( )
{
	static UFunction* pFnCancelNATNegotiation = NULL;

	if ( ! pFnCancelNATNegotiation )
		pFnCancelNATNegotiation = (UFunction*) UObject::GObjObjects()->Data[ 39464 ];

	UOnlineSubsystemPW_execCancelNATNegotiation_Parms CancelNATNegotiation_Parms;

	this->ProcessEvent ( pFnCancelNATNegotiation, &CancelNATNegotiation_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetArbitratedPlayers
// [0x00020000] 
// Parameters infos:
// TArray< struct FOnlineArbitrationRegistrant > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   SessionName                    ( CPF_Parm )

TArray< struct FOnlineArbitrationRegistrant > UOnlineSubsystemPW::GetArbitratedPlayers ( struct FName SessionName )
{
	static UFunction* pFnGetArbitratedPlayers = NULL;

	if ( ! pFnGetArbitratedPlayers )
		pFnGetArbitratedPlayers = (UFunction*) UObject::GObjObjects()->Data[ 39460 ];

	UOnlineSubsystemPW_execGetArbitratedPlayers_Parms GetArbitratedPlayers_Parms;
	memcpy ( &GetArbitratedPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetArbitratedPlayers, &GetArbitratedPlayers_Parms, NULL );

	return GetArbitratedPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnClearArbitrationRegistrationCompleteDelegate )
		pFnClearArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39458 ];

	UOnlineSubsystemPW_execClearArbitrationRegistrationCompleteDelegate_Parms ClearArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &ClearArbitrationRegistrationCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnAddArbitrationRegistrationCompleteDelegate )
		pFnAddArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39456 ];

	UOnlineSubsystemPW_execAddArbitrationRegistrationCompleteDelegate_Parms AddArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &AddArbitrationRegistrationCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnArbitrationRegistrationComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnArbitrationRegistrationComplete = NULL;

	if ( ! pFnOnArbitrationRegistrationComplete )
		pFnOnArbitrationRegistrationComplete = (UFunction*) UObject::GObjObjects()->Data[ 37516 ];

	UOnlineSubsystemPW_execOnArbitrationRegistrationComplete_Parms OnArbitrationRegistrationComplete_Parms;
	memcpy ( &OnArbitrationRegistrationComplete_Parms.SessionName, &SessionName, 0x8 );
	OnArbitrationRegistrationComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterForArbitration
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemPW::RegisterForArbitration ( struct FName SessionName )
{
	static UFunction* pFnRegisterForArbitration = NULL;

	if ( ! pFnRegisterForArbitration )
		pFnRegisterForArbitration = (UFunction*) UObject::GObjObjects()->Data[ 39451 ];

	UOnlineSubsystemPW_execRegisterForArbitration_Parms RegisterForArbitration_Parms;
	memcpy ( &RegisterForArbitration_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterForArbitration, &RegisterForArbitration_Parms, NULL );

	return RegisterForArbitration_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryNonAdvertisedData
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineSubsystemPW::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 39447 ];

	UOnlineSubsystemPW_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnPartyPublicGameReadyDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnPartyPublicGameReadyDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnPartyPublicGameReadyDelegate = NULL;

	if ( ! pFnClearOnPartyPublicGameReadyDelegate )
		pFnClearOnPartyPublicGameReadyDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39444 ];

	UOnlineSubsystemPW_execClearOnPartyPublicGameReadyDelegate_Parms ClearOnPartyPublicGameReadyDelegate_Parms;
	memcpy ( &ClearOnPartyPublicGameReadyDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnPartyPublicGameReadyDelegate, &ClearOnPartyPublicGameReadyDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnPartyPublicGameReadyDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnPartyPublicGameReadyDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnPartyPublicGameReadyDelegate = NULL;

	if ( ! pFnAddOnPartyPublicGameReadyDelegate )
		pFnAddOnPartyPublicGameReadyDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39442 ];

	UOnlineSubsystemPW_execAddOnPartyPublicGameReadyDelegate_Parms AddOnPartyPublicGameReadyDelegate_Parms;
	memcpy ( &AddOnPartyPublicGameReadyDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnPartyPublicGameReadyDelegate, &AddOnPartyPublicGameReadyDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyPublicGameReady
// [0x00120000] 
// Parameters infos:
// struct FString                 ConnectString                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnPartyPublicGameReady ( struct FString ConnectString )
{
	static UFunction* pFnOnPartyPublicGameReady = NULL;

	if ( ! pFnOnPartyPublicGameReady )
		pFnOnPartyPublicGameReady = (UFunction*) UObject::GObjObjects()->Data[ 37361 ];

	UOnlineSubsystemPW_execOnPartyPublicGameReady_Parms OnPartyPublicGameReady_Parms;
	memcpy ( &OnPartyPublicGameReady_Parms.ConnectString, &ConnectString, 0xC );

	this->ProcessEvent ( pFnOnPartyPublicGameReady, &OnPartyPublicGameReady_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnPartyRankedGameReadyDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnPartyRankedGameReadyDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnPartyRankedGameReadyDelegate = NULL;

	if ( ! pFnClearOnPartyRankedGameReadyDelegate )
		pFnClearOnPartyRankedGameReadyDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39438 ];

	UOnlineSubsystemPW_execClearOnPartyRankedGameReadyDelegate_Parms ClearOnPartyRankedGameReadyDelegate_Parms;
	memcpy ( &ClearOnPartyRankedGameReadyDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnPartyRankedGameReadyDelegate, &ClearOnPartyRankedGameReadyDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnPartyRankedGameReadyDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnPartyRankedGameReadyDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnPartyRankedGameReadyDelegate = NULL;

	if ( ! pFnAddOnPartyRankedGameReadyDelegate )
		pFnAddOnPartyRankedGameReadyDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39436 ];

	UOnlineSubsystemPW_execAddOnPartyRankedGameReadyDelegate_Parms AddOnPartyRankedGameReadyDelegate_Parms;
	memcpy ( &AddOnPartyRankedGameReadyDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnPartyRankedGameReadyDelegate, &AddOnPartyRankedGameReadyDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyRankedGameReady
// [0x00520000] 
// Parameters infos:
// class UOnlineGameSearch*       SearchResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineSubsystemPW::OnPartyRankedGameReady ( class UOnlineGameSearch** SearchResult )
{
	static UFunction* pFnOnPartyRankedGameReady = NULL;

	if ( ! pFnOnPartyRankedGameReady )
		pFnOnPartyRankedGameReady = (UFunction*) UObject::GObjObjects()->Data[ 37358 ];

	UOnlineSubsystemPW_execOnPartyRankedGameReady_Parms OnPartyRankedGameReady_Parms;

	this->ProcessEvent ( pFnOnPartyRankedGameReady, &OnPartyRankedGameReady_Parms, NULL );

	if ( SearchResult )
		*SearchResult = OnPartyRankedGameReady_Parms.SearchResult;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnPartyJoinedQueueDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnPartyJoinedQueueDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnPartyJoinedQueueDelegate = NULL;

	if ( ! pFnClearOnPartyJoinedQueueDelegate )
		pFnClearOnPartyJoinedQueueDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39432 ];

	UOnlineSubsystemPW_execClearOnPartyJoinedQueueDelegate_Parms ClearOnPartyJoinedQueueDelegate_Parms;
	memcpy ( &ClearOnPartyJoinedQueueDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnPartyJoinedQueueDelegate, &ClearOnPartyJoinedQueueDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnPartyJoinedQueueDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnPartyJoinedQueueDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnPartyJoinedQueueDelegate = NULL;

	if ( ! pFnAddOnPartyJoinedQueueDelegate )
		pFnAddOnPartyJoinedQueueDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39430 ];

	UOnlineSubsystemPW_execAddOnPartyJoinedQueueDelegate_Parms AddOnPartyJoinedQueueDelegate_Parms;
	memcpy ( &AddOnPartyJoinedQueueDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnPartyJoinedQueueDelegate, &AddOnPartyJoinedQueueDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyJoinedQueue
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnPartyJoinedQueue ( )
{
	static UFunction* pFnOnPartyJoinedQueue = NULL;

	if ( ! pFnOnPartyJoinedQueue )
		pFnOnPartyJoinedQueue = (UFunction*) UObject::GObjObjects()->Data[ 37355 ];

	UOnlineSubsystemPW_execOnPartyJoinedQueue_Parms OnPartyJoinedQueue_Parms;

	this->ProcessEvent ( pFnOnPartyJoinedQueue, &OnPartyJoinedQueue_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNotifyPartyDisbandedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearNotifyPartyDisbandedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearNotifyPartyDisbandedDelegate = NULL;

	if ( ! pFnClearNotifyPartyDisbandedDelegate )
		pFnClearNotifyPartyDisbandedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39427 ];

	UOnlineSubsystemPW_execClearNotifyPartyDisbandedDelegate_Parms ClearNotifyPartyDisbandedDelegate_Parms;
	memcpy ( &ClearNotifyPartyDisbandedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearNotifyPartyDisbandedDelegate, &ClearNotifyPartyDisbandedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNotifyPartyDisbandedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddNotifyPartyDisbandedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddNotifyPartyDisbandedDelegate = NULL;

	if ( ! pFnAddNotifyPartyDisbandedDelegate )
		pFnAddNotifyPartyDisbandedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39425 ];

	UOnlineSubsystemPW_execAddNotifyPartyDisbandedDelegate_Parms AddNotifyPartyDisbandedDelegate_Parms;
	memcpy ( &AddNotifyPartyDisbandedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddNotifyPartyDisbandedDelegate, &AddNotifyPartyDisbandedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNotifyPartyDisbanded
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnNotifyPartyDisbanded ( )
{
	static UFunction* pFnOnNotifyPartyDisbanded = NULL;

	if ( ! pFnOnNotifyPartyDisbanded )
		pFnOnNotifyPartyDisbanded = (UFunction*) UObject::GObjObjects()->Data[ 37352 ];

	UOnlineSubsystemPW_execOnNotifyPartyDisbanded_Parms OnNotifyPartyDisbanded_Parms;

	this->ProcessEvent ( pFnOnNotifyPartyDisbanded, &OnNotifyPartyDisbanded_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNotifyPartyMembersUpdatedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearNotifyPartyMembersUpdatedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearNotifyPartyMembersUpdatedDelegate = NULL;

	if ( ! pFnClearNotifyPartyMembersUpdatedDelegate )
		pFnClearNotifyPartyMembersUpdatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39422 ];

	UOnlineSubsystemPW_execClearNotifyPartyMembersUpdatedDelegate_Parms ClearNotifyPartyMembersUpdatedDelegate_Parms;
	memcpy ( &ClearNotifyPartyMembersUpdatedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearNotifyPartyMembersUpdatedDelegate, &ClearNotifyPartyMembersUpdatedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNotifyPartyMembersUpdatedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddNotifyPartyMembersUpdatedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddNotifyPartyMembersUpdatedDelegate = NULL;

	if ( ! pFnAddNotifyPartyMembersUpdatedDelegate )
		pFnAddNotifyPartyMembersUpdatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39420 ];

	UOnlineSubsystemPW_execAddNotifyPartyMembersUpdatedDelegate_Parms AddNotifyPartyMembersUpdatedDelegate_Parms;
	memcpy ( &AddNotifyPartyMembersUpdatedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddNotifyPartyMembersUpdatedDelegate, &AddNotifyPartyMembersUpdatedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNotifyPartyMembersUpdated
// [0x00120000] 
// Parameters infos:
// TArray< struct FOnlineFriend > UpdatedMembers                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnNotifyPartyMembersUpdated ( TArray< struct FOnlineFriend > UpdatedMembers )
{
	static UFunction* pFnOnNotifyPartyMembersUpdated = NULL;

	if ( ! pFnOnNotifyPartyMembersUpdated )
		pFnOnNotifyPartyMembersUpdated = (UFunction*) UObject::GObjObjects()->Data[ 37349 ];

	UOnlineSubsystemPW_execOnNotifyPartyMembersUpdated_Parms OnNotifyPartyMembersUpdated_Parms;
	memcpy ( &OnNotifyPartyMembersUpdated_Parms.UpdatedMembers, &UpdatedMembers, 0xC );

	this->ProcessEvent ( pFnOnNotifyPartyMembersUpdated, &OnNotifyPartyMembersUpdated_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNotifyPartyMembersAddedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearNotifyPartyMembersAddedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearNotifyPartyMembersAddedDelegate = NULL;

	if ( ! pFnClearNotifyPartyMembersAddedDelegate )
		pFnClearNotifyPartyMembersAddedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39415 ];

	UOnlineSubsystemPW_execClearNotifyPartyMembersAddedDelegate_Parms ClearNotifyPartyMembersAddedDelegate_Parms;
	memcpy ( &ClearNotifyPartyMembersAddedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearNotifyPartyMembersAddedDelegate, &ClearNotifyPartyMembersAddedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNotifyPartyMembersAddedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddNotifyPartyMembersAddedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddNotifyPartyMembersAddedDelegate = NULL;

	if ( ! pFnAddNotifyPartyMembersAddedDelegate )
		pFnAddNotifyPartyMembersAddedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39413 ];

	UOnlineSubsystemPW_execAddNotifyPartyMembersAddedDelegate_Parms AddNotifyPartyMembersAddedDelegate_Parms;
	memcpy ( &AddNotifyPartyMembersAddedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddNotifyPartyMembersAddedDelegate, &AddNotifyPartyMembersAddedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNotifyPartyMembersAdded
// [0x00120000] 
// Parameters infos:
// TArray< struct FOnlineFriend > AddedMembers                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnNotifyPartyMembersAdded ( TArray< struct FOnlineFriend > AddedMembers )
{
	static UFunction* pFnOnNotifyPartyMembersAdded = NULL;

	if ( ! pFnOnNotifyPartyMembersAdded )
		pFnOnNotifyPartyMembersAdded = (UFunction*) UObject::GObjObjects()->Data[ 37346 ];

	UOnlineSubsystemPW_execOnNotifyPartyMembersAdded_Parms OnNotifyPartyMembersAdded_Parms;
	memcpy ( &OnNotifyPartyMembersAdded_Parms.AddedMembers, &AddedMembers, 0xC );

	this->ProcessEvent ( pFnOnNotifyPartyMembersAdded, &OnNotifyPartyMembersAdded_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNotifyPartyMemberRemovedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearNotifyPartyMemberRemovedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearNotifyPartyMemberRemovedDelegate = NULL;

	if ( ! pFnClearNotifyPartyMemberRemovedDelegate )
		pFnClearNotifyPartyMemberRemovedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39408 ];

	UOnlineSubsystemPW_execClearNotifyPartyMemberRemovedDelegate_Parms ClearNotifyPartyMemberRemovedDelegate_Parms;
	memcpy ( &ClearNotifyPartyMemberRemovedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearNotifyPartyMemberRemovedDelegate, &ClearNotifyPartyMemberRemovedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNotifyPartyMemberRemovedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddNotifyPartyMemberRemovedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddNotifyPartyMemberRemovedDelegate = NULL;

	if ( ! pFnAddNotifyPartyMemberRemovedDelegate )
		pFnAddNotifyPartyMemberRemovedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39406 ];

	UOnlineSubsystemPW_execAddNotifyPartyMemberRemovedDelegate_Parms AddNotifyPartyMemberRemovedDelegate_Parms;
	memcpy ( &AddNotifyPartyMemberRemovedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddNotifyPartyMemberRemovedDelegate, &AddNotifyPartyMemberRemovedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNotifyPartyMemberRemoved
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Remover                        ( CPF_Parm )
// struct FUniqueNetId            RemovedPlayer                  ( CPF_Parm )

void UOnlineSubsystemPW::OnNotifyPartyMemberRemoved ( struct FUniqueNetId Remover, struct FUniqueNetId RemovedPlayer )
{
	static UFunction* pFnOnNotifyPartyMemberRemoved = NULL;

	if ( ! pFnOnNotifyPartyMemberRemoved )
		pFnOnNotifyPartyMemberRemoved = (UFunction*) UObject::GObjObjects()->Data[ 37343 ];

	UOnlineSubsystemPW_execOnNotifyPartyMemberRemoved_Parms OnNotifyPartyMemberRemoved_Parms;
	memcpy ( &OnNotifyPartyMemberRemoved_Parms.Remover, &Remover, 0x8 );
	memcpy ( &OnNotifyPartyMemberRemoved_Parms.RemovedPlayer, &RemovedPlayer, 0x8 );

	this->ProcessEvent ( pFnOnNotifyPartyMemberRemoved, &OnNotifyPartyMemberRemoved_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPartyInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearPartyInviteReceivedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearPartyInviteReceivedDelegate = NULL;

	if ( ! pFnClearPartyInviteReceivedDelegate )
		pFnClearPartyInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39401 ];

	UOnlineSubsystemPW_execClearPartyInviteReceivedDelegate_Parms ClearPartyInviteReceivedDelegate_Parms;
	memcpy ( &ClearPartyInviteReceivedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearPartyInviteReceivedDelegate, &ClearPartyInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPartyInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddPartyInviteReceivedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddPartyInviteReceivedDelegate = NULL;

	if ( ! pFnAddPartyInviteReceivedDelegate )
		pFnAddPartyInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39399 ];

	UOnlineSubsystemPW_execAddPartyInviteReceivedDelegate_Parms AddPartyInviteReceivedDelegate_Parms;
	memcpy ( &AddPartyInviteReceivedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddPartyInviteReceivedDelegate, &AddPartyInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyInviteReceived
// [0x00120000] 
// Parameters infos:
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnPartyInviteReceived ( struct FString InviterName )
{
	static UFunction* pFnOnPartyInviteReceived = NULL;

	if ( ! pFnOnPartyInviteReceived )
		pFnOnPartyInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 37328 ];

	UOnlineSubsystemPW_execOnPartyInviteReceived_Parms OnPartyInviteReceived_Parms;
	memcpy ( &OnPartyInviteReceived_Parms.InviterName, &InviterName, 0xC );

	this->ProcessEvent ( pFnOnPartyInviteReceived, &OnPartyInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.NotifyPartyMembersOfPublicGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ConnectString                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::NotifyPartyMembersOfPublicGame ( struct FString ConnectString )
{
	static UFunction* pFnNotifyPartyMembersOfPublicGame = NULL;

	if ( ! pFnNotifyPartyMembersOfPublicGame )
		pFnNotifyPartyMembersOfPublicGame = (UFunction*) UObject::GObjObjects()->Data[ 39396 ];

	UOnlineSubsystemPW_execNotifyPartyMembersOfPublicGame_Parms NotifyPartyMembersOfPublicGame_Parms;
	memcpy ( &NotifyPartyMembersOfPublicGame_Parms.ConnectString, &ConnectString, 0xC );

	pFnNotifyPartyMembersOfPublicGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyPartyMembersOfPublicGame, &NotifyPartyMembersOfPublicGame_Parms, NULL );

	pFnNotifyPartyMembersOfPublicGame->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPartyGameSearchCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearPartyGameSearchCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearPartyGameSearchCompleteDelegate = NULL;

	if ( ! pFnClearPartyGameSearchCompleteDelegate )
		pFnClearPartyGameSearchCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39393 ];

	UOnlineSubsystemPW_execClearPartyGameSearchCompleteDelegate_Parms ClearPartyGameSearchCompleteDelegate_Parms;
	memcpy ( &ClearPartyGameSearchCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearPartyGameSearchCompleteDelegate, &ClearPartyGameSearchCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPartyGameSearchCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddPartyGameSearchCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddPartyGameSearchCompleteDelegate = NULL;

	if ( ! pFnAddPartyGameSearchCompleteDelegate )
		pFnAddPartyGameSearchCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39391 ];

	UOnlineSubsystemPW_execAddPartyGameSearchCompleteDelegate_Parms AddPartyGameSearchCompleteDelegate_Parms;
	memcpy ( &AddPartyGameSearchCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddPartyGameSearchCompleteDelegate, &AddPartyGameSearchCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SearchForGameAsParty
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::SearchForGameAsParty ( )
{
	static UFunction* pFnSearchForGameAsParty = NULL;

	if ( ! pFnSearchForGameAsParty )
		pFnSearchForGameAsParty = (UFunction*) UObject::GObjObjects()->Data[ 39389 ];

	UOnlineSubsystemPW_execSearchForGameAsParty_Parms SearchForGameAsParty_Parms;

	pFnSearchForGameAsParty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSearchForGameAsParty, &SearchForGameAsParty_Parms, NULL );

	pFnSearchForGameAsParty->FunctionFlags |= 0x400;

	return SearchForGameAsParty_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyGameSearchComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )

void UOnlineSubsystemPW::OnPartyGameSearchComplete ( unsigned long bSuccessful )
{
	static UFunction* pFnOnPartyGameSearchComplete = NULL;

	if ( ! pFnOnPartyGameSearchComplete )
		pFnOnPartyGameSearchComplete = (UFunction*) UObject::GObjObjects()->Data[ 37340 ];

	UOnlineSubsystemPW_execOnPartyGameSearchComplete_Parms OnPartyGameSearchComplete_Parms;
	OnPartyGameSearchComplete_Parms.bSuccessful = bSuccessful;

	this->ProcessEvent ( pFnOnPartyGameSearchComplete, &OnPartyGameSearchComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPromoteNewLeaderCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearPromoteNewLeaderCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearPromoteNewLeaderCompleteDelegate = NULL;

	if ( ! pFnClearPromoteNewLeaderCompleteDelegate )
		pFnClearPromoteNewLeaderCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39385 ];

	UOnlineSubsystemPW_execClearPromoteNewLeaderCompleteDelegate_Parms ClearPromoteNewLeaderCompleteDelegate_Parms;
	memcpy ( &ClearPromoteNewLeaderCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearPromoteNewLeaderCompleteDelegate, &ClearPromoteNewLeaderCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPromoteNewLeaderCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddPromoteNewLeaderCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddPromoteNewLeaderCompleteDelegate = NULL;

	if ( ! pFnAddPromoteNewLeaderCompleteDelegate )
		pFnAddPromoteNewLeaderCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39383 ];

	UOnlineSubsystemPW_execAddPromoteNewLeaderCompleteDelegate_Parms AddPromoteNewLeaderCompleteDelegate_Parms;
	memcpy ( &AddPromoteNewLeaderCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddPromoteNewLeaderCompleteDelegate, &AddPromoteNewLeaderCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.PromoteNewLeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            NewLeaderId                    ( CPF_Parm )

bool UOnlineSubsystemPW::PromoteNewLeader ( struct FUniqueNetId NewLeaderId )
{
	static UFunction* pFnPromoteNewLeader = NULL;

	if ( ! pFnPromoteNewLeader )
		pFnPromoteNewLeader = (UFunction*) UObject::GObjObjects()->Data[ 39380 ];

	UOnlineSubsystemPW_execPromoteNewLeader_Parms PromoteNewLeader_Parms;
	memcpy ( &PromoteNewLeader_Parms.NewLeaderId, &NewLeaderId, 0x8 );

	pFnPromoteNewLeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPromoteNewLeader, &PromoteNewLeader_Parms, NULL );

	pFnPromoteNewLeader->FunctionFlags |= 0x400;

	return PromoteNewLeader_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyPromote
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )
// unsigned char                  ResponseCode                   ( CPF_Parm )

void UOnlineSubsystemPW::OnPartyPromote ( unsigned long bSuccessful, unsigned char ResponseCode )
{
	static UFunction* pFnOnPartyPromote = NULL;

	if ( ! pFnOnPartyPromote )
		pFnOnPartyPromote = (UFunction*) UObject::GObjObjects()->Data[ 37337 ];

	UOnlineSubsystemPW_execOnPartyPromote_Parms OnPartyPromote_Parms;
	OnPartyPromote_Parms.bSuccessful = bSuccessful;
	OnPartyPromote_Parms.ResponseCode = ResponseCode;

	this->ProcessEvent ( pFnOnPartyPromote, &OnPartyPromote_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRemovePartyMemberCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearRemovePartyMemberCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearRemovePartyMemberCompleteDelegate = NULL;

	if ( ! pFnClearRemovePartyMemberCompleteDelegate )
		pFnClearRemovePartyMemberCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39375 ];

	UOnlineSubsystemPW_execClearRemovePartyMemberCompleteDelegate_Parms ClearRemovePartyMemberCompleteDelegate_Parms;
	memcpy ( &ClearRemovePartyMemberCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearRemovePartyMemberCompleteDelegate, &ClearRemovePartyMemberCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRemovePartyMemberCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddRemovePartyMemberCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddRemovePartyMemberCompleteDelegate = NULL;

	if ( ! pFnAddRemovePartyMemberCompleteDelegate )
		pFnAddRemovePartyMemberCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39373 ];

	UOnlineSubsystemPW_execAddRemovePartyMemberCompleteDelegate_Parms AddRemovePartyMemberCompleteDelegate_Parms;
	memcpy ( &AddRemovePartyMemberCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddRemovePartyMemberCompleteDelegate, &AddRemovePartyMemberCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RemovePartyMember
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyMemberId                  ( CPF_Parm )

bool UOnlineSubsystemPW::RemovePartyMember ( struct FUniqueNetId PartyMemberId )
{
	static UFunction* pFnRemovePartyMember = NULL;

	if ( ! pFnRemovePartyMember )
		pFnRemovePartyMember = (UFunction*) UObject::GObjObjects()->Data[ 39370 ];

	UOnlineSubsystemPW_execRemovePartyMember_Parms RemovePartyMember_Parms;
	memcpy ( &RemovePartyMember_Parms.PartyMemberId, &PartyMemberId, 0x8 );

	pFnRemovePartyMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemovePartyMember, &RemovePartyMember_Parms, NULL );

	pFnRemovePartyMember->FunctionFlags |= 0x400;

	return RemovePartyMember_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRemovePartyMember
// [0x00120000] 
// Parameters infos:
// unsigned long                  Successful                     ( CPF_Parm )
// unsigned char                  ResponseCode                   ( CPF_Parm )

void UOnlineSubsystemPW::OnRemovePartyMember ( unsigned long Successful, unsigned char ResponseCode )
{
	static UFunction* pFnOnRemovePartyMember = NULL;

	if ( ! pFnOnRemovePartyMember )
		pFnOnRemovePartyMember = (UFunction*) UObject::GObjObjects()->Data[ 37334 ];

	UOnlineSubsystemPW_execOnRemovePartyMember_Parms OnRemovePartyMember_Parms;
	OnRemovePartyMember_Parms.Successful = Successful;
	OnRemovePartyMember_Parms.ResponseCode = ResponseCode;

	this->ProcessEvent ( pFnOnRemovePartyMember, &OnRemovePartyMember_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRespondToPartyInviteCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearRespondToPartyInviteCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearRespondToPartyInviteCompleteDelegate = NULL;

	if ( ! pFnClearRespondToPartyInviteCompleteDelegate )
		pFnClearRespondToPartyInviteCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39365 ];

	UOnlineSubsystemPW_execClearRespondToPartyInviteCompleteDelegate_Parms ClearRespondToPartyInviteCompleteDelegate_Parms;
	memcpy ( &ClearRespondToPartyInviteCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearRespondToPartyInviteCompleteDelegate, &ClearRespondToPartyInviteCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRespondToPartyInviteCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddRespondToPartyInviteCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddRespondToPartyInviteCompleteDelegate = NULL;

	if ( ! pFnAddRespondToPartyInviteCompleteDelegate )
		pFnAddRespondToPartyInviteCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39363 ];

	UOnlineSubsystemPW_execAddRespondToPartyInviteCompleteDelegate_Parms AddRespondToPartyInviteCompleteDelegate_Parms;
	memcpy ( &AddRespondToPartyInviteCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddRespondToPartyInviteCompleteDelegate, &AddRespondToPartyInviteCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RespondToPartyInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bAccept                        ( CPF_Parm )

bool UOnlineSubsystemPW::RespondToPartyInvite ( unsigned long bAccept )
{
	static UFunction* pFnRespondToPartyInvite = NULL;

	if ( ! pFnRespondToPartyInvite )
		pFnRespondToPartyInvite = (UFunction*) UObject::GObjObjects()->Data[ 39360 ];

	UOnlineSubsystemPW_execRespondToPartyInvite_Parms RespondToPartyInvite_Parms;
	RespondToPartyInvite_Parms.bAccept = bAccept;

	pFnRespondToPartyInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRespondToPartyInvite, &RespondToPartyInvite_Parms, NULL );

	pFnRespondToPartyInvite->FunctionFlags |= 0x400;

	return RespondToPartyInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPartyInviteRespond
// [0x00120000] 
// Parameters infos:
// unsigned long                  Successful                     ( CPF_Parm )
// unsigned char                  ResponseCode                   ( CPF_Parm )

void UOnlineSubsystemPW::OnPartyInviteRespond ( unsigned long Successful, unsigned char ResponseCode )
{
	static UFunction* pFnOnPartyInviteRespond = NULL;

	if ( ! pFnOnPartyInviteRespond )
		pFnOnPartyInviteRespond = (UFunction*) UObject::GObjObjects()->Data[ 37331 ];

	UOnlineSubsystemPW_execOnPartyInviteRespond_Parms OnPartyInviteRespond_Parms;
	OnPartyInviteRespond_Parms.Successful = Successful;
	OnPartyInviteRespond_Parms.ResponseCode = ResponseCode;

	this->ProcessEvent ( pFnOnPartyInviteRespond, &OnPartyInviteRespond_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearInviteToPartyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearInviteToPartyCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearInviteToPartyCompleteDelegate = NULL;

	if ( ! pFnClearInviteToPartyCompleteDelegate )
		pFnClearInviteToPartyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39355 ];

	UOnlineSubsystemPW_execClearInviteToPartyCompleteDelegate_Parms ClearInviteToPartyCompleteDelegate_Parms;
	memcpy ( &ClearInviteToPartyCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearInviteToPartyCompleteDelegate, &ClearInviteToPartyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddInviteToPartyCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddInviteToPartyCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddInviteToPartyCompleteDelegate = NULL;

	if ( ! pFnAddInviteToPartyCompleteDelegate )
		pFnAddInviteToPartyCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39353 ];

	UOnlineSubsystemPW_execAddInviteToPartyCompleteDelegate_Parms AddInviteToPartyCompleteDelegate_Parms;
	memcpy ( &AddInviteToPartyCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddInviteToPartyCompleteDelegate, &AddInviteToPartyCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.InviteToParty
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            InvitePlayerId                 ( CPF_Parm )

bool UOnlineSubsystemPW::InviteToParty ( struct FUniqueNetId InvitePlayerId )
{
	static UFunction* pFnInviteToParty = NULL;

	if ( ! pFnInviteToParty )
		pFnInviteToParty = (UFunction*) UObject::GObjObjects()->Data[ 39350 ];

	UOnlineSubsystemPW_execInviteToParty_Parms InviteToParty_Parms;
	memcpy ( &InviteToParty_Parms.InvitePlayerId, &InvitePlayerId, 0x8 );

	pFnInviteToParty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInviteToParty, &InviteToParty_Parms, NULL );

	pFnInviteToParty->FunctionFlags |= 0x400;

	return InviteToParty_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnInviteToParty
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )
// unsigned char                  ResponseCode                   ( CPF_Parm )

void UOnlineSubsystemPW::OnInviteToParty ( unsigned long bSuccessful, unsigned char ResponseCode )
{
	static UFunction* pFnOnInviteToParty = NULL;

	if ( ! pFnOnInviteToParty )
		pFnOnInviteToParty = (UFunction*) UObject::GObjObjects()->Data[ 37325 ];

	UOnlineSubsystemPW_execOnInviteToParty_Parms OnInviteToParty_Parms;
	OnInviteToParty_Parms.bSuccessful = bSuccessful;
	OnInviteToParty_Parms.ResponseCode = ResponseCode;

	this->ProcessEvent ( pFnOnInviteToParty, &OnInviteToParty_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPartyMembers
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FOnlineFriend > OutPartyMembers                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::GetPartyMembers ( TArray< struct FOnlineFriend >* OutPartyMembers )
{
	static UFunction* pFnGetPartyMembers = NULL;

	if ( ! pFnGetPartyMembers )
		pFnGetPartyMembers = (UFunction*) UObject::GObjObjects()->Data[ 39345 ];

	UOnlineSubsystemPW_execGetPartyMembers_Parms GetPartyMembers_Parms;

	pFnGetPartyMembers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPartyMembers, &GetPartyMembers_Parms, NULL );

	pFnGetPartyMembers->FunctionFlags |= 0x400;

	if ( OutPartyMembers )
		memcpy ( OutPartyMembers, &GetPartyMembers_Parms.OutPartyMembers, 0xC );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39341 ];

	UOnlineSubsystemPW_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendInviteReceivedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39338 ];

	UOnlineSubsystemPW_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendInviteReceivedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 37175 ];

	UOnlineSubsystemPW_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );
	memcpy ( &OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0xC );
	memcpy ( &OnFriendInviteReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemPW::DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 39330 ];

	UOnlineSubsystemPW_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	pFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemPW::AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 39326 ];

	UOnlineSubsystemPW_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	pFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39322 ];

	UOnlineSubsystemPW_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendsChangeDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39319 ];

	UOnlineSubsystemPW_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendsChangeDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RemoveFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemPW::RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->Data[ 39315 ];

	UOnlineSubsystemPW_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x8 );

	pFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	pFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39311 ];

	UOnlineSubsystemPW_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAddFriendByNameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39308 ];

	UOnlineSubsystemPW_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAddFriendByNameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnAddFriendByNameComplete
// [0x00124000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// unsigned char                  ResponseCode                   ( CPF_Parm )
// struct FOnlineFriend           FriendItem                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnAddFriendByNameComplete ( unsigned long bWasSuccessful, unsigned char ResponseCode, struct FOnlineFriend FriendItem )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37172 ];

	UOnlineSubsystemPW_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;
	OnAddFriendByNameComplete_Parms.ResponseCode = ResponseCode;
	memcpy ( &OnAddFriendByNameComplete_Parms.FriendItem, &FriendItem, 0x84 );

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriendByName
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->Data[ 39300 ];

	UOnlineSubsystemPW_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendByName_Parms.FriendName, &FriendName, 0xC );
	memcpy ( &AddFriendByName_Parms.Message, &Message, 0xC );

	pFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	pFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->Data[ 39295 ];

	UOnlineSubsystemPW_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriend_Parms.NewFriend, &NewFriend, 0x8 );
	memcpy ( &AddFriend_Parms.Message, &Message, 0xC );

	pFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	pFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetFriendsList
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemPW::GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 39288 ];

	UOnlineSubsystemPW_execGetFriendsList_Parms GetFriendsList_Parms;
	GetFriendsList_Parms.LocalUserNum = LocalUserNum;
	GetFriendsList_Parms.Count = Count;
	GetFriendsList_Parms.StartingAt = StartingAt;

	pFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );

	pFnGetFriendsList->FunctionFlags |= 0x400;

	if ( Friends )
		memcpy ( Friends, &GetFriendsList_Parms.Friends, 0xC );

	return GetFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39284 ];

	UOnlineSubsystemPW_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadFriendsCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39281 ];

	UOnlineSubsystemPW_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadFriendsCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnReadFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->Data[ 37166 ];

	UOnlineSubsystemPW_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadFriendsList
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 39275 ];

	UOnlineSubsystemPW_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	pFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnClearGetNumberOfCurrentPlayersCompleteDelegate )
		pFnClearGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39273 ];

	UOnlineSubsystemPW_execClearGetNumberOfCurrentPlayersCompleteDelegate_Parms ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddGetNumberOfCurrentPlayersCompleteDelegate = NULL;

	if ( ! pFnAddGetNumberOfCurrentPlayersCompleteDelegate )
		pFnAddGetNumberOfCurrentPlayersCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39271 ];

	UOnlineSubsystemPW_execAddGetNumberOfCurrentPlayersCompleteDelegate_Parms AddGetNumberOfCurrentPlayersCompleteDelegate_Parms;
	memcpy ( &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetNumberOfCurrentPlayersCached
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemPW::GetNumberOfCurrentPlayersCached ( )
{
	static UFunction* pFnGetNumberOfCurrentPlayersCached = NULL;

	if ( ! pFnGetNumberOfCurrentPlayersCached )
		pFnGetNumberOfCurrentPlayersCached = (UFunction*) UObject::GObjObjects()->Data[ 39269 ];

	UOnlineSubsystemPW_execGetNumberOfCurrentPlayersCached_Parms GetNumberOfCurrentPlayersCached_Parms;

	this->ProcessEvent ( pFnGetNumberOfCurrentPlayersCached, &GetNumberOfCurrentPlayersCached_Parms, NULL );

	return GetNumberOfCurrentPlayersCached_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetNumberOfCurrentPlayersComplete
// [0x00120000] 
// Parameters infos:
// int                            NumTotalPlayers                ( CPF_Parm )

void UOnlineSubsystemPW::OnGetNumberOfCurrentPlayersComplete ( int NumTotalPlayers )
{
	static UFunction* pFnOnGetNumberOfCurrentPlayersComplete = NULL;

	if ( ! pFnOnGetNumberOfCurrentPlayersComplete )
		pFnOnGetNumberOfCurrentPlayersComplete = (UFunction*) UObject::GObjObjects()->Data[ 37534 ];

	UOnlineSubsystemPW_execOnGetNumberOfCurrentPlayersComplete_Parms OnGetNumberOfCurrentPlayersComplete_Parms;
	OnGetNumberOfCurrentPlayersComplete_Parms.NumTotalPlayers = NumTotalPlayers;

	this->ProcessEvent ( pFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetNumberOfCurrentPlayers
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::GetNumberOfCurrentPlayers ( )
{
	static UFunction* pFnGetNumberOfCurrentPlayers = NULL;

	if ( ! pFnGetNumberOfCurrentPlayers )
		pFnGetNumberOfCurrentPlayers = (UFunction*) UObject::GObjObjects()->Data[ 39266 ];

	UOnlineSubsystemPW_execGetNumberOfCurrentPlayers_Parms GetNumberOfCurrentPlayers_Parms;

	this->ProcessEvent ( pFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Parms, NULL );

	return GetNumberOfCurrentPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearJoinMigratedOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinMigratedOnlineGameCompleteDelegate )
		pFnClearJoinMigratedOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39264 ];

	UOnlineSubsystemPW_execClearJoinMigratedOnlineGameCompleteDelegate_Parms ClearJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinMigratedOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinMigratedOnlineGameCompleteDelegate, &ClearJoinMigratedOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddJoinMigratedOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinMigratedOnlineGameCompleteDelegate )
		pFnAddJoinMigratedOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39262 ];

	UOnlineSubsystemPW_execAddJoinMigratedOnlineGameCompleteDelegate_Parms AddJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddJoinMigratedOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinMigratedOnlineGameCompleteDelegate, &AddJoinMigratedOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnJoinMigratedOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnJoinMigratedOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinMigratedOnlineGameComplete = NULL;

	if ( ! pFnOnJoinMigratedOnlineGameComplete )
		pFnOnJoinMigratedOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37536 ];

	UOnlineSubsystemPW_execOnJoinMigratedOnlineGameComplete_Parms OnJoinMigratedOnlineGameComplete_Parms;
	memcpy ( &OnJoinMigratedOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinMigratedOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinMigratedOnlineGameComplete, &OnJoinMigratedOnlineGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinMigratedOnlineGame
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPW::JoinMigratedOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinMigratedOnlineGame = NULL;

	if ( ! pFnJoinMigratedOnlineGame )
		pFnJoinMigratedOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 39255 ];

	UOnlineSubsystemPW_execJoinMigratedOnlineGame_Parms JoinMigratedOnlineGame_Parms;
	JoinMigratedOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinMigratedOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnJoinMigratedOnlineGame, &JoinMigratedOnlineGame_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinMigratedOnlineGame_Parms.DesiredGame, 0x8 );

	return JoinMigratedOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearMigrateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearMigrateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearMigrateOnlineGameCompleteDelegate )
		pFnClearMigrateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39253 ];

	UOnlineSubsystemPW_execClearMigrateOnlineGameCompleteDelegate_Parms ClearMigrateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearMigrateOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearMigrateOnlineGameCompleteDelegate, &ClearMigrateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddMigrateOnlineGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddMigrateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddMigrateOnlineGameCompleteDelegate )
		pFnAddMigrateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39251 ];

	UOnlineSubsystemPW_execAddMigrateOnlineGameCompleteDelegate_Parms AddMigrateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddMigrateOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddMigrateOnlineGameCompleteDelegate, &AddMigrateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnMigrateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnMigrateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnMigrateOnlineGameComplete = NULL;

	if ( ! pFnOnMigrateOnlineGameComplete )
		pFnOnMigrateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37538 ];

	UOnlineSubsystemPW_execOnMigrateOnlineGameComplete_Parms OnMigrateOnlineGameComplete_Parms;
	memcpy ( &OnMigrateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnMigrateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnMigrateOnlineGameComplete, &OnMigrateOnlineGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.MigrateOnlineGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemPW::MigrateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName )
{
	static UFunction* pFnMigrateOnlineGame = NULL;

	if ( ! pFnMigrateOnlineGame )
		pFnMigrateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 39245 ];

	UOnlineSubsystemPW_execMigrateOnlineGame_Parms MigrateOnlineGame_Parms;
	MigrateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &MigrateOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnMigrateOnlineGame, &MigrateOnlineGame_Parms, NULL );

	return MigrateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearRecalculateSkillRatingCompleteDelegate = NULL;

	if ( ! pFnClearRecalculateSkillRatingCompleteDelegate )
		pFnClearRecalculateSkillRatingCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39243 ];

	UOnlineSubsystemPW_execClearRecalculateSkillRatingCompleteDelegate_Parms ClearRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy ( &ClearRecalculateSkillRatingCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearRecalculateSkillRatingCompleteDelegate, &ClearRecalculateSkillRatingCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddRecalculateSkillRatingCompleteDelegate = NULL;

	if ( ! pFnAddRecalculateSkillRatingCompleteDelegate )
		pFnAddRecalculateSkillRatingCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39241 ];

	UOnlineSubsystemPW_execAddRecalculateSkillRatingCompleteDelegate_Parms AddRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy ( &AddRecalculateSkillRatingCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddRecalculateSkillRatingCompleteDelegate, &AddRecalculateSkillRatingCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRecalculateSkillRatingComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnRecalculateSkillRatingComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRecalculateSkillRatingComplete = NULL;

	if ( ! pFnOnRecalculateSkillRatingComplete )
		pFnOnRecalculateSkillRatingComplete = (UFunction*) UObject::GObjObjects()->Data[ 37540 ];

	UOnlineSubsystemPW_execOnRecalculateSkillRatingComplete_Parms OnRecalculateSkillRatingComplete_Parms;
	memcpy ( &OnRecalculateSkillRatingComplete_Parms.SessionName, &SessionName, 0x8 );
	OnRecalculateSkillRatingComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRecalculateSkillRatingComplete, &OnRecalculateSkillRatingComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RecalculateSkillRating
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRecalculateSkillRating = NULL;

	if ( ! pFnRecalculateSkillRating )
		pFnRecalculateSkillRating = (UFunction*) UObject::GObjObjects()->Data[ 39234 ];

	UOnlineSubsystemPW_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;
	memcpy ( &RecalculateSkillRating_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRecalculateSkillRating, &RecalculateSkillRating_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RecalculateSkillRating_Parms.Players, 0xC );

	return RecalculateSkillRating_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AcceptGameInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemPW::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 39230 ];

	UOnlineSubsystemPW_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearGameInviteAcceptedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39227 ];

	UOnlineSubsystemPW_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGameInviteAcceptedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39224 ];

	UOnlineSubsystemPW_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineSubsystemPW::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 37542 ];

	UOnlineSubsystemPW_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x8 );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearDestroyOnlineGameCompleteDelegate )
		pFnClearDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39220 ];

	UOnlineSubsystemPW_execClearDestroyOnlineGameCompleteDelegate_Parms ClearDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearDestroyOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddDestroyOnlineGameCompleteDelegate )
		pFnAddDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39218 ];

	UOnlineSubsystemPW_execAddDestroyOnlineGameCompleteDelegate_Parms AddDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddDestroyOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnDestroyOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDestroyOnlineGameComplete = NULL;

	if ( ! pFnOnDestroyOnlineGameComplete )
		pFnOnDestroyOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37391 ];

	UOnlineSubsystemPW_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy ( &OnDestroyOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemPW::DestroyOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnDestroyOnlineGame = NULL;

	if ( ! pFnDestroyOnlineGame )
		pFnDestroyOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 39213 ];

	UOnlineSubsystemPW_execDestroyOnlineGame_Parms DestroyOnlineGame_Parms;
	memcpy ( &DestroyOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnDestroyOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyOnlineGame, &DestroyOnlineGame_Parms, NULL );

	pFnDestroyOnlineGame->FunctionFlags |= 0x400;

	return DestroyOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearEndOnlineGameCompleteDelegate )
		pFnClearEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39210 ];

	UOnlineSubsystemPW_execClearEndOnlineGameCompleteDelegate_Parms ClearEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearEndOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddEndOnlineGameCompleteDelegate )
		pFnAddEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39208 ];

	UOnlineSubsystemPW_execAddEndOnlineGameCompleteDelegate_Parms AddEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddEndOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnEndOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnEndOnlineGameComplete = NULL;

	if ( ! pFnOnEndOnlineGameComplete )
		pFnOnEndOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37388 ];

	UOnlineSubsystemPW_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy ( &OnEndOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.EndOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemPW::EndOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnEndOnlineGame = NULL;

	if ( ! pFnEndOnlineGame )
		pFnEndOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 39203 ];

	UOnlineSubsystemPW_execEndOnlineGame_Parms EndOnlineGame_Parms;
	memcpy ( &EndOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnEndOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndOnlineGame, &EndOnlineGame_Parms, NULL );

	pFnEndOnlineGame->FunctionFlags |= 0x400;

	return EndOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearStartOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearStartOnlineGameCompleteDelegate )
		pFnClearStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39200 ];

	UOnlineSubsystemPW_execClearStartOnlineGameCompleteDelegate_Parms ClearStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearStartOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddStartOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddStartOnlineGameCompleteDelegate )
		pFnAddStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39198 ];

	UOnlineSubsystemPW_execAddStartOnlineGameCompleteDelegate_Parms AddStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddStartOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnStartOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnStartOnlineGameComplete = NULL;

	if ( ! pFnOnStartOnlineGameComplete )
		pFnOnStartOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37385 ];

	UOnlineSubsystemPW_execOnStartOnlineGameComplete_Parms OnStartOnlineGameComplete_Parms;
	memcpy ( &OnStartOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnStartOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StartOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemPW::StartOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnStartOnlineGame = NULL;

	if ( ! pFnStartOnlineGame )
		pFnStartOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 39193 ];

	UOnlineSubsystemPW_execStartOnlineGame_Parms StartOnlineGame_Parms;
	memcpy ( &StartOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnStartOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartOnlineGame, &StartOnlineGame_Parms, NULL );

	pFnStartOnlineGame->FunctionFlags |= 0x400;

	return StartOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39191 ];

	UOnlineSubsystemPW_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39189 ];

	UOnlineSubsystemPW_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 37547 ];

	UOnlineSubsystemPW_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnregisterPlayers
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::UnregisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnUnregisterPlayers = NULL;

	if ( ! pFnUnregisterPlayers )
		pFnUnregisterPlayers = (UFunction*) UObject::GObjObjects()->Data[ 39181 ];

	UOnlineSubsystemPW_execUnregisterPlayers_Parms UnregisterPlayers_Parms;
	memcpy ( &UnregisterPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnUnregisterPlayers, &UnregisterPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &UnregisterPlayers_Parms.Players, 0xC );

	return UnregisterPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPW::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 39177 ];

	UOnlineSubsystemPW_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39175 ];

	UOnlineSubsystemPW_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39173 ];

	UOnlineSubsystemPW_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 37549 ];

	UOnlineSubsystemPW_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterPlayers
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::RegisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRegisterPlayers = NULL;

	if ( ! pFnRegisterPlayers )
		pFnRegisterPlayers = (UFunction*) UObject::GObjObjects()->Data[ 39165 ];

	UOnlineSubsystemPW_execRegisterPlayers_Parms RegisterPlayers_Parms;
	memcpy ( &RegisterPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterPlayers, &RegisterPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RegisterPlayers_Parms.Players, 0xC );

	return RegisterPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineSubsystemPW::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 39160 ];

	UOnlineSubsystemPW_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FreeSearchResults
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameSearch*       Search                         ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::FreeSearchResults ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnFreeSearchResults = NULL;

	if ( ! pFnFreeSearchResults )
		pFnFreeSearchResults = (UFunction*) UObject::GObjObjects()->Data[ 39157 ];

	UOnlineSubsystemPW_execFreeSearchResults_Parms FreeSearchResults_Parms;
	FreeSearchResults_Parms.Search = Search;

	pFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeSearchResults, &FreeSearchResults_Parms, NULL );

	pFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetGameSearch
// [0x00020002] 
// Parameters infos:
// class UOnlineGameSearch*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UOnlineGameSearch* UOnlineSubsystemPW::GetGameSearch ( )
{
	static UFunction* pFnGetGameSearch = NULL;

	if ( ! pFnGetGameSearch )
		pFnGetGameSearch = (UFunction*) UObject::GObjObjects()->Data[ 39155 ];

	UOnlineSubsystemPW_execGetGameSearch_Parms GetGameSearch_Parms;

	this->ProcessEvent ( pFnGetGameSearch, &GetGameSearch_Parms, NULL );

	return GetGameSearch_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.BindPlatformSpecificSessionToSearch
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

bool UOnlineSubsystemPW::BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = NULL;

	if ( ! pFnBindPlatformSpecificSessionToSearch )
		pFnBindPlatformSpecificSessionToSearch = (UFunction*) UObject::GObjObjects()->Data[ 39150 ];

	UOnlineSubsystemPW_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	BindPlatformSpecificSessionToSearch_Parms.SearchSettings = SearchSettings;
	memcpy ( &BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	this->ProcessEvent ( pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, NULL );

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPW::ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfoBySessionName )
		pFnReadPlatformSpecificSessionInfoBySessionName = (UFunction*) UObject::GObjObjects()->Data[ 39146 ];

	UOnlineSubsystemPW_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy ( &ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadPlatformSpecificSessionInfo
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPW::ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfo )
		pFnReadPlatformSpecificSessionInfo = (UFunction*) UObject::GObjObjects()->Data[ 39142 ];

	UOnlineSubsystemPW_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0x8 );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQosStatusChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearQosStatusChangedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearQosStatusChangedDelegate = NULL;

	if ( ! pFnClearQosStatusChangedDelegate )
		pFnClearQosStatusChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39140 ];

	UOnlineSubsystemPW_execClearQosStatusChangedDelegate_Parms ClearQosStatusChangedDelegate_Parms;
	memcpy ( &ClearQosStatusChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearQosStatusChangedDelegate, &ClearQosStatusChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQosStatusChangedDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddQosStatusChangedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddQosStatusChangedDelegate = NULL;

	if ( ! pFnAddQosStatusChangedDelegate )
		pFnAddQosStatusChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39138 ];

	UOnlineSubsystemPW_execAddQosStatusChangedDelegate_Parms AddQosStatusChangedDelegate_Parms;
	memcpy ( &AddQosStatusChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddQosStatusChangedDelegate, &AddQosStatusChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQosStatusChanged
// [0x00120000] 
// Parameters infos:
// int                            NumComplete                    ( CPF_Parm )
// int                            NumTotal                       ( CPF_Parm )

void UOnlineSubsystemPW::OnQosStatusChanged ( int NumComplete, int NumTotal )
{
	static UFunction* pFnOnQosStatusChanged = NULL;

	if ( ! pFnOnQosStatusChanged )
		pFnOnQosStatusChanged = (UFunction*) UObject::GObjObjects()->Data[ 37551 ];

	UOnlineSubsystemPW_execOnQosStatusChanged_Parms OnQosStatusChanged_Parms;
	OnQosStatusChanged_Parms.NumComplete = NumComplete;
	OnQosStatusChanged_Parms.NumTotal = NumTotal;

	this->ProcessEvent ( pFnOnQosStatusChanged, &OnQosStatusChanged_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FindPartyRankedMatch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::FindPartyRankedMatch ( )
{
	static UFunction* pFnFindPartyRankedMatch = NULL;

	if ( ! pFnFindPartyRankedMatch )
		pFnFindPartyRankedMatch = (UFunction*) UObject::GObjObjects()->Data[ 39134 ];

	UOnlineSubsystemPW_execFindPartyRankedMatch_Parms FindPartyRankedMatch_Parms;

	pFnFindPartyRankedMatch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindPartyRankedMatch, &FindPartyRankedMatch_Parms, NULL );

	pFnFindPartyRankedMatch->FunctionFlags |= 0x400;

	return FindPartyRankedMatch_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CancelRankedMatchSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::CancelRankedMatchSearch ( )
{
	static UFunction* pFnCancelRankedMatchSearch = NULL;

	if ( ! pFnCancelRankedMatchSearch )
		pFnCancelRankedMatchSearch = (UFunction*) UObject::GObjObjects()->Data[ 39132 ];

	UOnlineSubsystemPW_execCancelRankedMatchSearch_Parms CancelRankedMatchSearch_Parms;

	pFnCancelRankedMatchSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelRankedMatchSearch, &CancelRankedMatchSearch_Parms, NULL );

	pFnCancelRankedMatchSearch->FunctionFlags |= 0x400;

	return CancelRankedMatchSearch_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnRankedMatchFindCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnRankedMatchFindCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnRankedMatchFindCompleteDelegate = NULL;

	if ( ! pFnClearOnRankedMatchFindCompleteDelegate )
		pFnClearOnRankedMatchFindCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39129 ];

	UOnlineSubsystemPW_execClearOnRankedMatchFindCompleteDelegate_Parms ClearOnRankedMatchFindCompleteDelegate_Parms;
	memcpy ( &ClearOnRankedMatchFindCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnRankedMatchFindCompleteDelegate, &ClearOnRankedMatchFindCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnRankedMatchFindCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnRankedMatchFindCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnRankedMatchFindCompleteDelegate = NULL;

	if ( ! pFnAddOnRankedMatchFindCompleteDelegate )
		pFnAddOnRankedMatchFindCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39127 ];

	UOnlineSubsystemPW_execAddOnRankedMatchFindCompleteDelegate_Parms AddOnRankedMatchFindCompleteDelegate_Parms;
	memcpy ( &AddOnRankedMatchFindCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnRankedMatchFindCompleteDelegate, &AddOnRankedMatchFindCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRankedMatchFindComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )

void UOnlineSubsystemPW::OnRankedMatchFindComplete ( unsigned long bSuccessful )
{
	static UFunction* pFnOnRankedMatchFindComplete = NULL;

	if ( ! pFnOnRankedMatchFindComplete )
		pFnOnRankedMatchFindComplete = (UFunction*) UObject::GObjObjects()->Data[ 37238 ];

	UOnlineSubsystemPW_execOnRankedMatchFindComplete_Parms OnRankedMatchFindComplete_Parms;
	OnRankedMatchFindComplete_Parms.bSuccessful = bSuccessful;

	this->ProcessEvent ( pFnOnRankedMatchFindComplete, &OnRankedMatchFindComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FindRankedMatch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::FindRankedMatch ( )
{
	static UFunction* pFnFindRankedMatch = NULL;

	if ( ! pFnFindRankedMatch )
		pFnFindRankedMatch = (UFunction*) UObject::GObjObjects()->Data[ 39124 ];

	UOnlineSubsystemPW_execFindRankedMatch_Parms FindRankedMatch_Parms;

	pFnFindRankedMatch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindRankedMatch, &FindRankedMatch_Parms, NULL );

	pFnFindRankedMatch->FunctionFlags |= 0x400;

	return FindRankedMatch_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetPartyRankedMatchSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineGameSearch*       RankedSearch                   ( CPF_Parm )

void UOnlineSubsystemPW::SetPartyRankedMatchSearch ( class UOnlineGameSearch* RankedSearch )
{
	static UFunction* pFnSetPartyRankedMatchSearch = NULL;

	if ( ! pFnSetPartyRankedMatchSearch )
		pFnSetPartyRankedMatchSearch = (UFunction*) UObject::GObjObjects()->Data[ 39122 ];

	UOnlineSubsystemPW_execSetPartyRankedMatchSearch_Parms SetPartyRankedMatchSearch_Parms;
	SetPartyRankedMatchSearch_Parms.RankedSearch = RankedSearch;

	pFnSetPartyRankedMatchSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPartyRankedMatchSearch, &SetPartyRankedMatchSearch_Parms, NULL );

	pFnSetPartyRankedMatchSearch->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetRankedMatchSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineGameSearch*       RankedSearch                   ( CPF_Parm )

void UOnlineSubsystemPW::SetRankedMatchSearch ( class UOnlineGameSearch* RankedSearch )
{
	static UFunction* pFnSetRankedMatchSearch = NULL;

	if ( ! pFnSetRankedMatchSearch )
		pFnSetRankedMatchSearch = (UFunction*) UObject::GObjObjects()->Data[ 39120 ];

	UOnlineSubsystemPW_execSetRankedMatchSearch_Parms SetRankedMatchSearch_Parms;
	SetRankedMatchSearch_Parms.RankedSearch = RankedSearch;

	pFnSetRankedMatchSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRankedMatchSearch, &SetRankedMatchSearch_Parms, NULL );

	pFnSetRankedMatchSearch->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryRankForPlayerDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearQueryRankForPlayerDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearQueryRankForPlayerDelegate = NULL;

	if ( ! pFnClearQueryRankForPlayerDelegate )
		pFnClearQueryRankForPlayerDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39117 ];

	UOnlineSubsystemPW_execClearQueryRankForPlayerDelegate_Parms ClearQueryRankForPlayerDelegate_Parms;
	memcpy ( &ClearQueryRankForPlayerDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryRankForPlayerDelegate, &ClearQueryRankForPlayerDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryRankForPlayerDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddQueryRankForPlayerDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddQueryRankForPlayerDelegate = NULL;

	if ( ! pFnAddQueryRankForPlayerDelegate )
		pFnAddQueryRankForPlayerDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39115 ];

	UOnlineSubsystemPW_execAddQueryRankForPlayerDelegate_Parms AddQueryRankForPlayerDelegate_Parms;
	memcpy ( &AddQueryRankForPlayerDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryRankForPlayerDelegate, &AddQueryRankForPlayerDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQueryRankForPlayer
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForPlayer                      ( CPF_Parm )
// int                            Rank                           ( CPF_Parm )

void UOnlineSubsystemPW::OnQueryRankForPlayer ( struct FUniqueNetId ForPlayer, int Rank )
{
	static UFunction* pFnOnQueryRankForPlayer = NULL;

	if ( ! pFnOnQueryRankForPlayer )
		pFnOnQueryRankForPlayer = (UFunction*) UObject::GObjObjects()->Data[ 37241 ];

	UOnlineSubsystemPW_execOnQueryRankForPlayer_Parms OnQueryRankForPlayer_Parms;
	memcpy ( &OnQueryRankForPlayer_Parms.ForPlayer, &ForPlayer, 0x8 );
	OnQueryRankForPlayer_Parms.Rank = Rank;

	this->ProcessEvent ( pFnOnQueryRankForPlayer, &OnQueryRankForPlayer_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryRankForPlayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FUniqueNetId >  ForPlayers                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::QueryRankForPlayers ( TArray< struct FUniqueNetId > ForPlayers )
{
	static UFunction* pFnQueryRankForPlayers = NULL;

	if ( ! pFnQueryRankForPlayers )
		pFnQueryRankForPlayers = (UFunction*) UObject::GObjObjects()->Data[ 39109 ];

	UOnlineSubsystemPW_execQueryRankForPlayers_Parms QueryRankForPlayers_Parms;
	memcpy ( &QueryRankForPlayers_Parms.ForPlayers, &ForPlayers, 0xC );

	pFnQueryRankForPlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryRankForPlayers, &QueryRankForPlayers_Parms, NULL );

	pFnQueryRankForPlayers->FunctionFlags |= 0x400;

	return QueryRankForPlayers_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRankedMatchJoinQueueDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearRankedMatchJoinQueueDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearRankedMatchJoinQueueDelegate = NULL;

	if ( ! pFnClearRankedMatchJoinQueueDelegate )
		pFnClearRankedMatchJoinQueueDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39106 ];

	UOnlineSubsystemPW_execClearRankedMatchJoinQueueDelegate_Parms ClearRankedMatchJoinQueueDelegate_Parms;
	memcpy ( &ClearRankedMatchJoinQueueDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearRankedMatchJoinQueueDelegate, &ClearRankedMatchJoinQueueDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRankedMatchJoinQueueDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddRankedMatchJoinQueueDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddRankedMatchJoinQueueDelegate = NULL;

	if ( ! pFnAddRankedMatchJoinQueueDelegate )
		pFnAddRankedMatchJoinQueueDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39104 ];

	UOnlineSubsystemPW_execAddRankedMatchJoinQueueDelegate_Parms AddRankedMatchJoinQueueDelegate_Parms;
	memcpy ( &AddRankedMatchJoinQueueDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddRankedMatchJoinQueueDelegate, &AddRankedMatchJoinQueueDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRankedMatchJoinQueue
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// int                            QueuePlacement                 ( CPF_Parm )
// int                            EstimatedWaitSeconds           ( CPF_Parm )

void UOnlineSubsystemPW::OnRankedMatchJoinQueue ( unsigned long bSuccess, int QueuePlacement, int EstimatedWaitSeconds )
{
	static UFunction* pFnOnRankedMatchJoinQueue = NULL;

	if ( ! pFnOnRankedMatchJoinQueue )
		pFnOnRankedMatchJoinQueue = (UFunction*) UObject::GObjObjects()->Data[ 37235 ];

	UOnlineSubsystemPW_execOnRankedMatchJoinQueue_Parms OnRankedMatchJoinQueue_Parms;
	OnRankedMatchJoinQueue_Parms.bSuccess = bSuccess;
	OnRankedMatchJoinQueue_Parms.QueuePlacement = QueuePlacement;
	OnRankedMatchJoinQueue_Parms.EstimatedWaitSeconds = EstimatedWaitSeconds;

	this->ProcessEvent ( pFnOnRankedMatchJoinQueue, &OnRankedMatchJoinQueue_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo )
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if ( ! pFnGetResolvedConnectString )
		pFnGetResolvedConnectString = (UFunction*) UObject::GObjObjects()->Data[ 39097 ];

	UOnlineSubsystemPW_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy ( &GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8 );

	pFnGetResolvedConnectString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL );

	pFnGetResolvedConnectString->FunctionFlags |= 0x400;

	if ( ConnectInfo )
		memcpy ( ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0xC );

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinOnlineGameCompleteDelegate )
		pFnClearJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39094 ];

	UOnlineSubsystemPW_execClearJoinOnlineGameCompleteDelegate_Parms ClearJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinOnlineGameCompleteDelegate )
		pFnAddJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39092 ];

	UOnlineSubsystemPW_execAddJoinOnlineGameCompleteDelegate_Parms AddJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddJoinOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnJoinOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinOnlineGameComplete = NULL;

	if ( ! pFnOnJoinOnlineGameComplete )
		pFnOnJoinOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37229 ];

	UOnlineSubsystemPW_execOnJoinOnlineGameComplete_Parms OnJoinOnlineGameComplete_Parms;
	memcpy ( &OnJoinOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinOnlineGameByIP
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FString                 ConnectIP                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ConnectPort                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::JoinOnlineGameByIP ( unsigned char PlayerNum, struct FString ConnectIP, struct FString ConnectPort )
{
	static UFunction* pFnJoinOnlineGameByIP = NULL;

	if ( ! pFnJoinOnlineGameByIP )
		pFnJoinOnlineGameByIP = (UFunction*) UObject::GObjObjects()->Data[ 39085 ];

	UOnlineSubsystemPW_execJoinOnlineGameByIP_Parms JoinOnlineGameByIP_Parms;
	JoinOnlineGameByIP_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinOnlineGameByIP_Parms.ConnectIP, &ConnectIP, 0xC );
	memcpy ( &JoinOnlineGameByIP_Parms.ConnectPort, &ConnectPort, 0xC );

	pFnJoinOnlineGameByIP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinOnlineGameByIP, &JoinOnlineGameByIP_Parms, NULL );

	pFnJoinOnlineGameByIP->FunctionFlags |= 0x400;

	return JoinOnlineGameByIP_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPW::JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinOnlineGame = NULL;

	if ( ! pFnJoinOnlineGame )
		pFnJoinOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 39080 ];

	UOnlineSubsystemPW_execJoinOnlineGame_Parms JoinOnlineGame_Parms;
	JoinOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnJoinOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinOnlineGame, &JoinOnlineGame_Parms, NULL );

	pFnJoinOnlineGame->FunctionFlags |= 0x400;

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinOnlineGame_Parms.DesiredGame, 0x8 );

	return JoinOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearCancelFindOnlineGamesCompleteDelegate )
		pFnClearCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39077 ];

	UOnlineSubsystemPW_execClearCancelFindOnlineGamesCompleteDelegate_Parms ClearCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearCancelFindOnlineGamesCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddCancelFindOnlineGamesCompleteDelegate )
		pFnAddCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39075 ];

	UOnlineSubsystemPW_execAddCancelFindOnlineGamesCompleteDelegate_Parms AddCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddCancelFindOnlineGamesCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnCancelFindOnlineGamesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCancelFindOnlineGamesComplete = NULL;

	if ( ! pFnOnCancelFindOnlineGamesComplete )
		pFnOnCancelFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 37394 ];

	UOnlineSubsystemPW_execOnCancelFindOnlineGamesComplete_Parms OnCancelFindOnlineGamesComplete_Parms;
	OnCancelFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::CancelFindOnlineGames ( )
{
	static UFunction* pFnCancelFindOnlineGames = NULL;

	if ( ! pFnCancelFindOnlineGames )
		pFnCancelFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 39072 ];

	UOnlineSubsystemPW_execCancelFindOnlineGames_Parms CancelFindOnlineGames_Parms;

	pFnCancelFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelFindOnlineGames, &CancelFindOnlineGames_Parms, NULL );

	pFnCancelFindOnlineGames->FunctionFlags |= 0x400;

	return CancelFindOnlineGames_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearFindOnlineGamesCompleteDelegate )
		pFnClearFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39069 ];

	UOnlineSubsystemPW_execClearFindOnlineGamesCompleteDelegate_Parms ClearFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearFindOnlineGamesCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddFindOnlineGamesCompleteDelegate )
		pFnAddFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39067 ];

	UOnlineSubsystemPW_execAddFindOnlineGamesCompleteDelegate_Parms AddFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddFindOnlineGamesCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFindOnlineGamesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFindOnlineGamesComplete = NULL;

	if ( ! pFnOnFindOnlineGamesComplete )
		pFnOnFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 37226 ];

	UOnlineSubsystemPW_execOnFindOnlineGamesComplete_Parms OnFindOnlineGamesComplete_Parms;
	OnFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )

bool UOnlineSubsystemPW::FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings )
{
	static UFunction* pFnFindOnlineGames = NULL;

	if ( ! pFnFindOnlineGames )
		pFnFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 39062 ];

	UOnlineSubsystemPW_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.SearchingPlayerNum = SearchingPlayerNum;
	FindOnlineGames_Parms.SearchSettings = SearchSettings;

	pFnFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindOnlineGames, &FindOnlineGames_Parms, NULL );

	pFnFindOnlineGames->FunctionFlags |= 0x400;

	return FindOnlineGames_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetServerTimeString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemPW::GetServerTimeString ( )
{
	static UFunction* pFnGetServerTimeString = NULL;

	if ( ! pFnGetServerTimeString )
		pFnGetServerTimeString = (UFunction*) UObject::GObjObjects()->Data[ 39060 ];

	UOnlineSubsystemPW_execGetServerTimeString_Parms GetServerTimeString_Parms;

	pFnGetServerTimeString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetServerTimeString, &GetServerTimeString_Parms, NULL );

	pFnGetServerTimeString->FunctionFlags |= 0x400;

	return GetServerTimeString_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetGameSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineSubsystemPW::GetGameSettings ( struct FName SessionName )
{
	static UFunction* pFnGetGameSettings = NULL;

	if ( ! pFnGetGameSettings )
		pFnGetGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 39056 ];

	UOnlineSubsystemPW_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy ( &GetGameSettings_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetGameSettings, &GetGameSettings_Parms, NULL );

	return GetGameSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendPlayerList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< class APlayerReplicationInfo* > Players                        ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::SendPlayerList ( TArray< class APlayerReplicationInfo* > Players )
{
	static UFunction* pFnSendPlayerList = NULL;

	if ( ! pFnSendPlayerList )
		pFnSendPlayerList = (UFunction*) UObject::GObjObjects()->Data[ 39052 ];

	UOnlineSubsystemPW_execSendPlayerList_Parms SendPlayerList_Parms;
	memcpy ( &SendPlayerList_Parms.Players, &Players, 0xC );

	pFnSendPlayerList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendPlayerList, &SendPlayerList_Parms, NULL );

	pFnSendPlayerList->FunctionFlags |= 0x400;

	return SendPlayerList_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearUpdateOnlineGameCompleteDelegate )
		pFnClearUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39049 ];

	UOnlineSubsystemPW_execClearUpdateOnlineGameCompleteDelegate_Parms ClearUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearUpdateOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddUpdateOnlineGameCompleteDelegate )
		pFnAddUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39047 ];

	UOnlineSubsystemPW_execAddUpdateOnlineGameCompleteDelegate_Parms AddUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddUpdateOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnUpdateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUpdateOnlineGameComplete = NULL;

	if ( ! pFnOnUpdateOnlineGameComplete )
		pFnOnUpdateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37223 ];

	UOnlineSubsystemPW_execOnUpdateOnlineGameComplete_Parms OnUpdateOnlineGameComplete_Parms;
	memcpy ( &OnUpdateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnUpdateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 39040 ];

	UOnlineSubsystemPW_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearCreateOnlineGameCompleteDelegate )
		pFnClearCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39037 ];

	UOnlineSubsystemPW_execClearCreateOnlineGameCompleteDelegate_Parms ClearCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearCreateOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddCreateOnlineGameCompleteDelegate )
		pFnAddCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39035 ];

	UOnlineSubsystemPW_execAddCreateOnlineGameCompleteDelegate_Parms AddCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddCreateOnlineGameCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnCreateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateOnlineGameComplete = NULL;

	if ( ! pFnOnCreateOnlineGameComplete )
		pFnOnCreateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37220 ];

	UOnlineSubsystemPW_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy ( &OnCreateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineSubsystemPW::CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings )
{
	static UFunction* pFnCreateOnlineGame = NULL;

	if ( ! pFnCreateOnlineGame )
		pFnCreateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 39028 ];

	UOnlineSubsystemPW_execCreateOnlineGame_Parms CreateOnlineGame_Parms;
	CreateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &CreateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	CreateOnlineGame_Parms.NewGameSettings = NewGameSettings;

	pFnCreateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOnlineGame, &CreateOnlineGame_Parms, NULL );

	pFnCreateOnlineGame->FunctionFlags |= 0x400;

	return CreateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDownloadedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileName                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ClearDownloadedFile ( struct FString FileName )
{
	static UFunction* pFnClearDownloadedFile = NULL;

	if ( ! pFnClearDownloadedFile )
		pFnClearDownloadedFile = (UFunction*) UObject::GObjObjects()->Data[ 39025 ];

	UOnlineSubsystemPW_execClearDownloadedFile_Parms ClearDownloadedFile_Parms;
	memcpy ( &ClearDownloadedFile_Parms.FileName, &FileName, 0xC );

	pFnClearDownloadedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearDownloadedFile, &ClearDownloadedFile_Parms, NULL );

	pFnClearDownloadedFile->FunctionFlags |= 0x400;

	return ClearDownloadedFile_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::ClearDownloadedFiles ( )
{
	static UFunction* pFnClearDownloadedFiles = NULL;

	if ( ! pFnClearDownloadedFiles )
		pFnClearDownloadedFiles = (UFunction*) UObject::GObjObjects()->Data[ 39023 ];

	UOnlineSubsystemPW_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	pFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, NULL );

	pFnClearDownloadedFiles->FunctionFlags |= 0x400;

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTitleFileState
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileName                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemPW::GetTitleFileState ( struct FString FileName )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 39020 ];

	UOnlineSubsystemPW_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.FileName, &FileName, 0xC );

	pFnGetTitleFileState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	pFnGetTitleFileState->FunctionFlags |= 0x400;

	return GetTitleFileState_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileName                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::GetTitleFileContents ( struct FString FileName, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 39015 ];

	UOnlineSubsystemPW_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.FileName, &FileName, 0xC );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39012 ];

	UOnlineSubsystemPW_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 39010 ];

	UOnlineSubsystemPW_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 FileName                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString FileName )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 37397 ];

	UOnlineSubsystemPW_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.FileName, &FileName, 0xC );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ReadTitleFile ( struct FString FileToRead )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 39005 ];

	UOnlineSubsystemPW_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC );

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ServerLogMessage
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 EventName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EventData                      ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ServerLogMessage ( struct FUniqueNetId PlayerID, struct FString EventName, struct FString EventData )
{
	static UFunction* pFnServerLogMessage = NULL;

	if ( ! pFnServerLogMessage )
		pFnServerLogMessage = (UFunction*) UObject::GObjObjects()->Data[ 39000 ];

	UOnlineSubsystemPW_execServerLogMessage_Parms ServerLogMessage_Parms;
	memcpy ( &ServerLogMessage_Parms.PlayerID, &PlayerID, 0x8 );
	memcpy ( &ServerLogMessage_Parms.EventName, &EventName, 0xC );
	memcpy ( &ServerLogMessage_Parms.EventData, &EventData, 0xC );

	pFnServerLogMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnServerLogMessage, &ServerLogMessage_Parms, NULL );

	pFnServerLogMessage->FunctionFlags |= 0x400;

	return ServerLogMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClientLogMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InMessage                      ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ClientLogMessage ( struct FString InMessage )
{
	static UFunction* pFnClientLogMessage = NULL;

	if ( ! pFnClientLogMessage )
		pFnClientLogMessage = (UFunction*) UObject::GObjObjects()->Data[ 38997 ];

	UOnlineSubsystemPW_execClientLogMessage_Parms ClientLogMessage_Parms;
	memcpy ( &ClientLogMessage_Parms.InMessage, &InMessage, 0xC );

	pFnClientLogMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientLogMessage, &ClientLogMessage_Parms, NULL );

	pFnClientLogMessage->FunctionFlags |= 0x400;

	return ClientLogMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFuseInventoryCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearFuseInventoryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearFuseInventoryCompleteDelegate = NULL;

	if ( ! pFnClearFuseInventoryCompleteDelegate )
		pFnClearFuseInventoryCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38993 ];

	UOnlineSubsystemPW_execClearFuseInventoryCompleteDelegate_Parms ClearFuseInventoryCompleteDelegate_Parms;
	ClearFuseInventoryCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFuseInventoryCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearFuseInventoryCompleteDelegate, &ClearFuseInventoryCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFuseInventoryCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddFuseInventoryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddFuseInventoryCompleteDelegate = NULL;

	if ( ! pFnAddFuseInventoryCompleteDelegate )
		pFnAddFuseInventoryCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38990 ];

	UOnlineSubsystemPW_execAddFuseInventoryCompleteDelegate_Parms AddFuseInventoryCompleteDelegate_Parms;
	AddFuseInventoryCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFuseInventoryCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddFuseInventoryCompleteDelegate, &AddFuseInventoryCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFuseInventoryComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FString                 ResultGuid                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnFuseInventoryComplete ( unsigned long bSuccess, struct FString ResultGuid )
{
	static UFunction* pFnOnFuseInventoryComplete = NULL;

	if ( ! pFnOnFuseInventoryComplete )
		pFnOnFuseInventoryComplete = (UFunction*) UObject::GObjObjects()->Data[ 37214 ];

	UOnlineSubsystemPW_execOnFuseInventoryComplete_Parms OnFuseInventoryComplete_Parms;
	OnFuseInventoryComplete_Parms.bSuccess = bSuccess;
	memcpy ( &OnFuseInventoryComplete_Parms.ResultGuid, &ResultGuid, 0xC );

	this->ProcessEvent ( pFnOnFuseInventoryComplete, &OnFuseInventoryComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FuseInventory
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 DataNodeAGuid                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DataNodeBGuid                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 AdditionalFuseInfo             ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::FuseInventory ( struct FString DataNodeAGuid, struct FString DataNodeBGuid, struct FString AdditionalFuseInfo )
{
	static UFunction* pFnFuseInventory = NULL;

	if ( ! pFnFuseInventory )
		pFnFuseInventory = (UFunction*) UObject::GObjObjects()->Data[ 38983 ];

	UOnlineSubsystemPW_execFuseInventory_Parms FuseInventory_Parms;
	memcpy ( &FuseInventory_Parms.DataNodeAGuid, &DataNodeAGuid, 0xC );
	memcpy ( &FuseInventory_Parms.DataNodeBGuid, &DataNodeBGuid, 0xC );
	memcpy ( &FuseInventory_Parms.AdditionalFuseInfo, &AdditionalFuseInfo, 0xC );

	pFnFuseInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFuseInventory, &FuseInventory_Parms, NULL );

	pFnFuseInventory->FunctionFlags |= 0x400;

	return FuseInventory_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRegionChangeCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearRegionChangeCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearRegionChangeCompleteDelegate = NULL;

	if ( ! pFnClearRegionChangeCompleteDelegate )
		pFnClearRegionChangeCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38979 ];

	UOnlineSubsystemPW_execClearRegionChangeCompleteDelegate_Parms ClearRegionChangeCompleteDelegate_Parms;
	ClearRegionChangeCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRegionChangeCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegionChangeCompleteDelegate, &ClearRegionChangeCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRegionChangeCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddRegionChangeCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddRegionChangeCompleteDelegate = NULL;

	if ( ! pFnAddRegionChangeCompleteDelegate )
		pFnAddRegionChangeCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38976 ];

	UOnlineSubsystemPW_execAddRegionChangeCompleteDelegate_Parms AddRegionChangeCompleteDelegate_Parms;
	AddRegionChangeCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRegionChangeCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegionChangeCompleteDelegate, &AddRegionChangeCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRegionChangeComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnRegionChangeComplete ( unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnRegionChangeComplete = NULL;

	if ( ! pFnOnRegionChangeComplete )
		pFnOnRegionChangeComplete = (UFunction*) UObject::GObjObjects()->Data[ 37379 ];

	UOnlineSubsystemPW_execOnRegionChangeComplete_Parms OnRegionChangeComplete_Parms;
	OnRegionChangeComplete_Parms.LocalUserNum = LocalUserNum;
	OnRegionChangeComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnRegionChangeComplete, &OnRegionChangeComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegionChange
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  NewRegion                      ( CPF_Parm )
// unsigned long                  bFullChange                    ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::RegionChange ( unsigned char NewRegion, unsigned long bFullChange )
{
	static UFunction* pFnRegionChange = NULL;

	if ( ! pFnRegionChange )
		pFnRegionChange = (UFunction*) UObject::GObjObjects()->Data[ 38970 ];

	UOnlineSubsystemPW_execRegionChange_Parms RegionChange_Parms;
	RegionChange_Parms.NewRegion = NewRegion;
	RegionChange_Parms.bFullChange = bFullChange;

	pFnRegionChange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegionChange, &RegionChange_Parms, NULL );

	pFnRegionChange->FunctionFlags |= 0x400;

	return RegionChange_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetCurrentRegion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemPW::GetCurrentRegion ( )
{
	static UFunction* pFnGetCurrentRegion = NULL;

	if ( ! pFnGetCurrentRegion )
		pFnGetCurrentRegion = (UFunction*) UObject::GObjObjects()->Data[ 38968 ];

	UOnlineSubsystemPW_execGetCurrentRegion_Parms GetCurrentRegion_Parms;

	pFnGetCurrentRegion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentRegion, &GetCurrentRegion_Parms, NULL );

	pFnGetCurrentRegion->FunctionFlags |= 0x400;

	return GetCurrentRegion_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearMailNotificationDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearMailNotificationDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearMailNotificationDelegate = NULL;

	if ( ! pFnClearMailNotificationDelegate )
		pFnClearMailNotificationDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38964 ];

	UOnlineSubsystemPW_execClearMailNotificationDelegate_Parms ClearMailNotificationDelegate_Parms;
	ClearMailNotificationDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearMailNotificationDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearMailNotificationDelegate, &ClearMailNotificationDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddMailNotificationDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddMailNotificationDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddMailNotificationDelegate = NULL;

	if ( ! pFnAddMailNotificationDelegate )
		pFnAddMailNotificationDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38961 ];

	UOnlineSubsystemPW_execAddMailNotificationDelegate_Parms AddMailNotificationDelegate_Parms;
	AddMailNotificationDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddMailNotificationDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddMailNotificationDelegate, &AddMailNotificationDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnMailNotification
// [0x00120000] 
// Parameters infos:
// struct FString                 MailData                       ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnMailNotification ( struct FString MailData )
{
	static UFunction* pFnOnMailNotification = NULL;

	if ( ! pFnOnMailNotification )
		pFnOnMailNotification = (UFunction*) UObject::GObjObjects()->Data[ 37382 ];

	UOnlineSubsystemPW_execOnMailNotification_Parms OnMailNotification_Parms;
	memcpy ( &OnMailNotification_Parms.MailData, &MailData, 0xC );

	this->ProcessEvent ( pFnOnMailNotification, &OnMailNotification_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearMarkMailReadCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearMarkMailReadCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearMarkMailReadCompleteDelegate = NULL;

	if ( ! pFnClearMarkMailReadCompleteDelegate )
		pFnClearMarkMailReadCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38956 ];

	UOnlineSubsystemPW_execClearMarkMailReadCompleteDelegate_Parms ClearMarkMailReadCompleteDelegate_Parms;
	ClearMarkMailReadCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearMarkMailReadCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearMarkMailReadCompleteDelegate, &ClearMarkMailReadCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddMarkMailReadCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddMarkMailReadCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddMarkMailReadCompleteDelegate = NULL;

	if ( ! pFnAddMarkMailReadCompleteDelegate )
		pFnAddMarkMailReadCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38953 ];

	UOnlineSubsystemPW_execAddMarkMailReadCompleteDelegate_Parms AddMarkMailReadCompleteDelegate_Parms;
	AddMarkMailReadCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddMarkMailReadCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddMarkMailReadCompleteDelegate, &AddMarkMailReadCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnMarkMailReadComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnMarkMailReadComplete ( unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnMarkMailReadComplete = NULL;

	if ( ! pFnOnMarkMailReadComplete )
		pFnOnMarkMailReadComplete = (UFunction*) UObject::GObjObjects()->Data[ 37376 ];

	UOnlineSubsystemPW_execOnMarkMailReadComplete_Parms OnMarkMailReadComplete_Parms;
	OnMarkMailReadComplete_Parms.LocalUserNum = LocalUserNum;
	OnMarkMailReadComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnMarkMailReadComplete, &OnMarkMailReadComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.MarkMailRead
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MailID                         ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::MarkMailRead ( struct FString MailID )
{
	static UFunction* pFnMarkMailRead = NULL;

	if ( ! pFnMarkMailRead )
		pFnMarkMailRead = (UFunction*) UObject::GObjObjects()->Data[ 38948 ];

	UOnlineSubsystemPW_execMarkMailRead_Parms MarkMailRead_Parms;
	memcpy ( &MarkMailRead_Parms.MailID, &MailID, 0xC );

	pFnMarkMailRead->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMarkMailRead, &MarkMailRead_Parms, NULL );

	pFnMarkMailRead->FunctionFlags |= 0x400;

	return MarkMailRead_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOpenMailCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOpenMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOpenMailCompleteDelegate = NULL;

	if ( ! pFnClearOpenMailCompleteDelegate )
		pFnClearOpenMailCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38944 ];

	UOnlineSubsystemPW_execClearOpenMailCompleteDelegate_Parms ClearOpenMailCompleteDelegate_Parms;
	ClearOpenMailCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearOpenMailCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOpenMailCompleteDelegate, &ClearOpenMailCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOpenMailCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOpenMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOpenMailCompleteDelegate = NULL;

	if ( ! pFnAddOpenMailCompleteDelegate )
		pFnAddOpenMailCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38941 ];

	UOnlineSubsystemPW_execAddOpenMailCompleteDelegate_Parms AddOpenMailCompleteDelegate_Parms;
	AddOpenMailCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddOpenMailCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOpenMailCompleteDelegate, &AddOpenMailCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnOpenMailComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnOpenMailComplete ( unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnOpenMailComplete = NULL;

	if ( ! pFnOnOpenMailComplete )
		pFnOnOpenMailComplete = (UFunction*) UObject::GObjObjects()->Data[ 37367 ];

	UOnlineSubsystemPW_execOnOpenMailComplete_Parms OnOpenMailComplete_Parms;
	OnOpenMailComplete_Parms.LocalUserNum = LocalUserNum;
	OnOpenMailComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnOpenMailComplete, &OnOpenMailComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OpenMail
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MailID                         ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::OpenMail ( struct FString MailID )
{
	static UFunction* pFnOpenMail = NULL;

	if ( ! pFnOpenMail )
		pFnOpenMail = (UFunction*) UObject::GObjObjects()->Data[ 38936 ];

	UOnlineSubsystemPW_execOpenMail_Parms OpenMail_Parms;
	memcpy ( &OpenMail_Parms.MailID, &MailID, 0xC );

	pFnOpenMail->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenMail, &OpenMail_Parms, NULL );

	pFnOpenMail->FunctionFlags |= 0x400;

	return OpenMail_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearSendMailCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearSendMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearSendMailCompleteDelegate = NULL;

	if ( ! pFnClearSendMailCompleteDelegate )
		pFnClearSendMailCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38932 ];

	UOnlineSubsystemPW_execClearSendMailCompleteDelegate_Parms ClearSendMailCompleteDelegate_Parms;
	ClearSendMailCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearSendMailCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearSendMailCompleteDelegate, &ClearSendMailCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddSendMailCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddSendMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddSendMailCompleteDelegate = NULL;

	if ( ! pFnAddSendMailCompleteDelegate )
		pFnAddSendMailCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38929 ];

	UOnlineSubsystemPW_execAddSendMailCompleteDelegate_Parms AddSendMailCompleteDelegate_Parms;
	AddSendMailCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddSendMailCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddSendMailCompleteDelegate, &AddSendMailCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnSendMailComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnSendMailComplete ( unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnSendMailComplete = NULL;

	if ( ! pFnOnSendMailComplete )
		pFnOnSendMailComplete = (UFunction*) UObject::GObjObjects()->Data[ 37373 ];

	UOnlineSubsystemPW_execOnSendMailComplete_Parms OnSendMailComplete_Parms;
	OnSendMailComplete_Parms.LocalUserNum = LocalUserNum;
	OnSendMailComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnSendMailComplete, &OnSendMailComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendMail
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ToPlayer                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Subject                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ItemA                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ItemB                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ItemC                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ItemD                          ( CPF_Parm | CPF_NeedCtorLink )
// int                            GPAmount                       ( CPF_Parm )
// int                            ZPAmount                       ( CPF_Parm )

bool UOnlineSubsystemPW::SendMail ( struct FString ToPlayer, struct FString Subject, struct FString Message, struct FString ItemA, struct FString ItemB, struct FString ItemC, struct FString ItemD, int GPAmount, int ZPAmount )
{
	static UFunction* pFnSendMail = NULL;

	if ( ! pFnSendMail )
		pFnSendMail = (UFunction*) UObject::GObjObjects()->Data[ 38916 ];

	UOnlineSubsystemPW_execSendMail_Parms SendMail_Parms;
	memcpy ( &SendMail_Parms.ToPlayer, &ToPlayer, 0xC );
	memcpy ( &SendMail_Parms.Subject, &Subject, 0xC );
	memcpy ( &SendMail_Parms.Message, &Message, 0xC );
	memcpy ( &SendMail_Parms.ItemA, &ItemA, 0xC );
	memcpy ( &SendMail_Parms.ItemB, &ItemB, 0xC );
	memcpy ( &SendMail_Parms.ItemC, &ItemC, 0xC );
	memcpy ( &SendMail_Parms.ItemD, &ItemD, 0xC );
	SendMail_Parms.GPAmount = GPAmount;
	SendMail_Parms.ZPAmount = ZPAmount;

	pFnSendMail->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMail, &SendMail_Parms, NULL );

	pFnSendMail->FunctionFlags |= 0x400;

	return SendMail_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDestroyMailCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearDestroyMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearDestroyMailCompleteDelegate = NULL;

	if ( ! pFnClearDestroyMailCompleteDelegate )
		pFnClearDestroyMailCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38912 ];

	UOnlineSubsystemPW_execClearDestroyMailCompleteDelegate_Parms ClearDestroyMailCompleteDelegate_Parms;
	ClearDestroyMailCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearDestroyMailCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearDestroyMailCompleteDelegate, &ClearDestroyMailCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddDestroyMailCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddDestroyMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddDestroyMailCompleteDelegate = NULL;

	if ( ! pFnAddDestroyMailCompleteDelegate )
		pFnAddDestroyMailCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38909 ];

	UOnlineSubsystemPW_execAddDestroyMailCompleteDelegate_Parms AddDestroyMailCompleteDelegate_Parms;
	AddDestroyMailCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddDestroyMailCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddDestroyMailCompleteDelegate, &AddDestroyMailCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnDestroyMailComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnDestroyMailComplete ( unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnDestroyMailComplete = NULL;

	if ( ! pFnOnDestroyMailComplete )
		pFnOnDestroyMailComplete = (UFunction*) UObject::GObjObjects()->Data[ 37370 ];

	UOnlineSubsystemPW_execOnDestroyMailComplete_Parms OnDestroyMailComplete_Parms;
	OnDestroyMailComplete_Parms.LocalUserNum = LocalUserNum;
	OnDestroyMailComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnDestroyMailComplete, &OnDestroyMailComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DestroyMail
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MailID                         ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::DestroyMail ( struct FString MailID )
{
	static UFunction* pFnDestroyMail = NULL;

	if ( ! pFnDestroyMail )
		pFnDestroyMail = (UFunction*) UObject::GObjObjects()->Data[ 38904 ];

	UOnlineSubsystemPW_execDestroyMail_Parms DestroyMail_Parms;
	memcpy ( &DestroyMail_Parms.MailID, &MailID, 0xC );

	pFnDestroyMail->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyMail, &DestroyMail_Parms, NULL );

	pFnDestroyMail->FunctionFlags |= 0x400;

	return DestroyMail_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryMailCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearQueryMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearQueryMailCompleteDelegate = NULL;

	if ( ! pFnClearQueryMailCompleteDelegate )
		pFnClearQueryMailCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38900 ];

	UOnlineSubsystemPW_execClearQueryMailCompleteDelegate_Parms ClearQueryMailCompleteDelegate_Parms;
	ClearQueryMailCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearQueryMailCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryMailCompleteDelegate, &ClearQueryMailCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryMailCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddQueryMailCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddQueryMailCompleteDelegate = NULL;

	if ( ! pFnAddQueryMailCompleteDelegate )
		pFnAddQueryMailCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38897 ];

	UOnlineSubsystemPW_execAddQueryMailCompleteDelegate_Parms AddQueryMailCompleteDelegate_Parms;
	AddQueryMailCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddQueryMailCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryMailCompleteDelegate, &AddQueryMailCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQueryMailComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MailData                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnQueryMailComplete ( unsigned char LocalUserNum, struct FString MailData )
{
	static UFunction* pFnOnQueryMailComplete = NULL;

	if ( ! pFnOnQueryMailComplete )
		pFnOnQueryMailComplete = (UFunction*) UObject::GObjObjects()->Data[ 37364 ];

	UOnlineSubsystemPW_execOnQueryMailComplete_Parms OnQueryMailComplete_Parms;
	OnQueryMailComplete_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnQueryMailComplete_Parms.MailData, &MailData, 0xC );

	this->ProcessEvent ( pFnOnQueryMailComplete, &OnQueryMailComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryMail
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::QueryMail ( )
{
	static UFunction* pFnQueryMail = NULL;

	if ( ! pFnQueryMail )
		pFnQueryMail = (UFunction*) UObject::GObjObjects()->Data[ 38893 ];

	UOnlineSubsystemPW_execQueryMail_Parms QueryMail_Parms;

	pFnQueryMail->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryMail, &QueryMail_Parms, NULL );

	pFnQueryMail->FunctionFlags |= 0x400;

	return QueryMail_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearCharacterCreatedCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearCharacterCreatedCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearCharacterCreatedCompleteDelegate = NULL;

	if ( ! pFnClearCharacterCreatedCompleteDelegate )
		pFnClearCharacterCreatedCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38889 ];

	UOnlineSubsystemPW_execClearCharacterCreatedCompleteDelegate_Parms ClearCharacterCreatedCompleteDelegate_Parms;
	ClearCharacterCreatedCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearCharacterCreatedCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearCharacterCreatedCompleteDelegate, &ClearCharacterCreatedCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddCharacterCreatedCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddCharacterCreatedCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddCharacterCreatedCompleteDelegate = NULL;

	if ( ! pFnAddCharacterCreatedCompleteDelegate )
		pFnAddCharacterCreatedCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38886 ];

	UOnlineSubsystemPW_execAddCharacterCreatedCompleteDelegate_Parms AddCharacterCreatedCompleteDelegate_Parms;
	AddCharacterCreatedCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddCharacterCreatedCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddCharacterCreatedCompleteDelegate, &AddCharacterCreatedCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnCharacterCreated
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUseNum                    ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnCharacterCreated ( unsigned char LocalUseNum, unsigned long bSuccess )
{
	static UFunction* pFnOnCharacterCreated = NULL;

	if ( ! pFnOnCharacterCreated )
		pFnOnCharacterCreated = (UFunction*) UObject::GObjObjects()->Data[ 37247 ];

	UOnlineSubsystemPW_execOnCharacterCreated_Parms OnCharacterCreated_Parms;
	OnCharacterCreated_Parms.LocalUseNum = LocalUseNum;
	OnCharacterCreated_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnCharacterCreated, &OnCharacterCreated_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CreateCharacter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NewName                        ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bNewGender                     ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::CreateCharacter ( struct FString NewName, unsigned long bNewGender )
{
	static UFunction* pFnCreateCharacter = NULL;

	if ( ! pFnCreateCharacter )
		pFnCreateCharacter = (UFunction*) UObject::GObjObjects()->Data[ 38880 ];

	UOnlineSubsystemPW_execCreateCharacter_Parms CreateCharacter_Parms;
	memcpy ( &CreateCharacter_Parms.NewName, &NewName, 0xC );
	CreateCharacter_Parms.bNewGender = bNewGender;

	pFnCreateCharacter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateCharacter, &CreateCharacter_Parms, NULL );

	pFnCreateCharacter->FunctionFlags |= 0x400;

	return CreateCharacter_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearNameChangedCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearNameChangedCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearNameChangedCompleteDelegate = NULL;

	if ( ! pFnClearNameChangedCompleteDelegate )
		pFnClearNameChangedCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38876 ];

	UOnlineSubsystemPW_execClearNameChangedCompleteDelegate_Parms ClearNameChangedCompleteDelegate_Parms;
	ClearNameChangedCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearNameChangedCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearNameChangedCompleteDelegate, &ClearNameChangedCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddNameChangedCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddNameChangedCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddNameChangedCompleteDelegate = NULL;

	if ( ! pFnAddNameChangedCompleteDelegate )
		pFnAddNameChangedCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38873 ];

	UOnlineSubsystemPW_execAddNameChangedCompleteDelegate_Parms AddNameChangedCompleteDelegate_Parms;
	AddNameChangedCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddNameChangedCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddNameChangedCompleteDelegate, &AddNameChangedCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnNameChanged
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnNameChanged ( unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnNameChanged = NULL;

	if ( ! pFnOnNameChanged )
		pFnOnNameChanged = (UFunction*) UObject::GObjObjects()->Data[ 37244 ];

	UOnlineSubsystemPW_execOnNameChanged_Parms OnNameChanged_Parms;
	OnNameChanged_Parms.LocalUserNum = LocalUserNum;
	OnNameChanged_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnNameChanged, &OnNameChanged_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ChangeName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NewName                        ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ChangeName ( struct FString NewName )
{
	static UFunction* pFnChangeName = NULL;

	if ( ! pFnChangeName )
		pFnChangeName = (UFunction*) UObject::GObjObjects()->Data[ 38868 ];

	UOnlineSubsystemPW_execChangeName_Parms ChangeName_Parms;
	memcpy ( &ChangeName_Parms.NewName, &NewName, 0xC );

	pFnChangeName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeName, &ChangeName_Parms, NULL );

	pFnChangeName->FunctionFlags |= 0x400;

	return ChangeName_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearXPAddCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearXPAddCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearXPAddCompleteDelegate = NULL;

	if ( ! pFnClearXPAddCompleteDelegate )
		pFnClearXPAddCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38865 ];

	UOnlineSubsystemPW_execClearXPAddCompleteDelegate_Parms ClearXPAddCompleteDelegate_Parms;
	ClearXPAddCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearXPAddCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearXPAddCompleteDelegate, &ClearXPAddCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddXPAddCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddXPAddCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddXPAddCompleteDelegate = NULL;

	if ( ! pFnAddXPAddCompleteDelegate )
		pFnAddXPAddCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38862 ];

	UOnlineSubsystemPW_execAddXPAddCompleteDelegate_Parms AddXPAddCompleteDelegate_Parms;
	AddXPAddCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddXPAddCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddXPAddCompleteDelegate, &AddXPAddCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnXPAdded
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnXPAdded ( struct FUniqueNetId ForId, unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnXPAdded = NULL;

	if ( ! pFnOnXPAdded )
		pFnOnXPAdded = (UFunction*) UObject::GObjObjects()->Data[ 37572 ];

	UOnlineSubsystemPW_execOnXPAdded_Parms OnXPAdded_Parms;
	memcpy ( &OnXPAdded_Parms.ForId, &ForId, 0x8 );
	OnXPAdded_Parms.LocalUserNum = LocalUserNum;
	OnXPAdded_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnXPAdded, &OnXPAdded_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddXP
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// int                            Amount                         ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::AddXP ( struct FUniqueNetId ForId, int Amount )
{
	static UFunction* pFnAddXP = NULL;

	if ( ! pFnAddXP )
		pFnAddXP = (UFunction*) UObject::GObjObjects()->Data[ 38855 ];

	UOnlineSubsystemPW_execAddXP_Parms AddXP_Parms;
	memcpy ( &AddXP_Parms.ForId, &ForId, 0x8 );
	AddXP_Parms.Amount = Amount;

	pFnAddXP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddXP, &AddXP_Parms, NULL );

	pFnAddXP->FunctionFlags |= 0x400;

	return AddXP_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDestroyItemCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearDestroyItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearDestroyItemCompleteDelegate = NULL;

	if ( ! pFnClearDestroyItemCompleteDelegate )
		pFnClearDestroyItemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38851 ];

	UOnlineSubsystemPW_execClearDestroyItemCompleteDelegate_Parms ClearDestroyItemCompleteDelegate_Parms;
	ClearDestroyItemCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearDestroyItemCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearDestroyItemCompleteDelegate, &ClearDestroyItemCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddDestroyItemCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddDestroyItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddDestroyItemCompleteDelegate = NULL;

	if ( ! pFnAddDestroyItemCompleteDelegate )
		pFnAddDestroyItemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38848 ];

	UOnlineSubsystemPW_execAddDestroyItemCompleteDelegate_Parms AddDestroyItemCompleteDelegate_Parms;
	AddDestroyItemCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddDestroyItemCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddDestroyItemCompleteDelegate, &AddDestroyItemCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnDestroyItem
// [0x00120000] 
// Parameters infos:
// struct FString                 ItemGuid                       ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bResult                        ( CPF_Const | CPF_Parm )

void UOnlineSubsystemPW::OnDestroyItem ( struct FString ItemGuid, unsigned long bResult )
{
	static UFunction* pFnOnDestroyItem = NULL;

	if ( ! pFnOnDestroyItem )
		pFnOnDestroyItem = (UFunction*) UObject::GObjObjects()->Data[ 37268 ];

	UOnlineSubsystemPW_execOnDestroyItem_Parms OnDestroyItem_Parms;
	memcpy ( &OnDestroyItem_Parms.ItemGuid, &ItemGuid, 0xC );
	OnDestroyItem_Parms.bResult = bResult;

	this->ProcessEvent ( pFnOnDestroyItem, &OnDestroyItem_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DestroyItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ItemGuid                       ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::DestroyItem ( struct FString ItemGuid )
{
	static UFunction* pFnDestroyItem = NULL;

	if ( ! pFnDestroyItem )
		pFnDestroyItem = (UFunction*) UObject::GObjObjects()->Data[ 38843 ];

	UOnlineSubsystemPW_execDestroyItem_Parms DestroyItem_Parms;
	memcpy ( &DestroyItem_Parms.ItemGuid, &ItemGuid, 0xC );

	pFnDestroyItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyItem, &DestroyItem_Parms, NULL );

	pFnDestroyItem->FunctionFlags |= 0x400;

	return DestroyItem_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRenewItemCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearRenewItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearRenewItemCompleteDelegate = NULL;

	if ( ! pFnClearRenewItemCompleteDelegate )
		pFnClearRenewItemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38839 ];

	UOnlineSubsystemPW_execClearRenewItemCompleteDelegate_Parms ClearRenewItemCompleteDelegate_Parms;
	ClearRenewItemCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRenewItemCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearRenewItemCompleteDelegate, &ClearRenewItemCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRenewItemCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddRenewItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddRenewItemCompleteDelegate = NULL;

	if ( ! pFnAddRenewItemCompleteDelegate )
		pFnAddRenewItemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38836 ];

	UOnlineSubsystemPW_execAddRenewItemCompleteDelegate_Parms AddRenewItemCompleteDelegate_Parms;
	AddRenewItemCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRenewItemCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddRenewItemCompleteDelegate, &AddRenewItemCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRenewItem
// [0x00120000] 
// Parameters infos:
// unsigned char                  eResult                        ( CPF_Const | CPF_Parm )
// struct FString                 ItemGuid                       ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnRenewItem ( unsigned char eResult, struct FString ItemGuid )
{
	static UFunction* pFnOnRenewItem = NULL;

	if ( ! pFnOnRenewItem )
		pFnOnRenewItem = (UFunction*) UObject::GObjObjects()->Data[ 37265 ];

	UOnlineSubsystemPW_execOnRenewItem_Parms OnRenewItem_Parms;
	OnRenewItem_Parms.eResult = eResult;
	memcpy ( &OnRenewItem_Parms.ItemGuid, &ItemGuid, 0xC );

	this->ProcessEvent ( pFnOnRenewItem, &OnRenewItem_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RenewItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ItemGuid                       ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PurchaseLength                 ( CPF_Const | CPF_Parm )
// unsigned char                  FromLocation                   ( CPF_Const | CPF_Parm )
// unsigned char                  Currency                       ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::RenewItem ( struct FString ItemGuid, unsigned char PurchaseLength, unsigned char FromLocation, unsigned char Currency )
{
	static UFunction* pFnRenewItem = NULL;

	if ( ! pFnRenewItem )
		pFnRenewItem = (UFunction*) UObject::GObjObjects()->Data[ 38828 ];

	UOnlineSubsystemPW_execRenewItem_Parms RenewItem_Parms;
	memcpy ( &RenewItem_Parms.ItemGuid, &ItemGuid, 0xC );
	RenewItem_Parms.PurchaseLength = PurchaseLength;
	RenewItem_Parms.FromLocation = FromLocation;
	RenewItem_Parms.Currency = Currency;

	pFnRenewItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRenewItem, &RenewItem_Parms, NULL );

	pFnRenewItem->FunctionFlags |= 0x400;

	return RenewItem_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPurchaseItemCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearPurchaseItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearPurchaseItemCompleteDelegate = NULL;

	if ( ! pFnClearPurchaseItemCompleteDelegate )
		pFnClearPurchaseItemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38824 ];

	UOnlineSubsystemPW_execClearPurchaseItemCompleteDelegate_Parms ClearPurchaseItemCompleteDelegate_Parms;
	ClearPurchaseItemCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearPurchaseItemCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearPurchaseItemCompleteDelegate, &ClearPurchaseItemCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPurchaseItemCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddPurchaseItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddPurchaseItemCompleteDelegate = NULL;

	if ( ! pFnAddPurchaseItemCompleteDelegate )
		pFnAddPurchaseItemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38821 ];

	UOnlineSubsystemPW_execAddPurchaseItemCompleteDelegate_Parms AddPurchaseItemCompleteDelegate_Parms;
	AddPurchaseItemCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddPurchaseItemCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddPurchaseItemCompleteDelegate, &AddPurchaseItemCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPurchaseItem
// [0x00120000] 
// Parameters infos:
// unsigned char                  eResult                        ( CPF_Const | CPF_Parm )
// struct FString                 ItemGuid                       ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnPurchaseItem ( unsigned char eResult, struct FString ItemGuid )
{
	static UFunction* pFnOnPurchaseItem = NULL;

	if ( ! pFnOnPurchaseItem )
		pFnOnPurchaseItem = (UFunction*) UObject::GObjObjects()->Data[ 37202 ];

	UOnlineSubsystemPW_execOnPurchaseItem_Parms OnPurchaseItem_Parms;
	OnPurchaseItem_Parms.eResult = eResult;
	memcpy ( &OnPurchaseItem_Parms.ItemGuid, &ItemGuid, 0xC );

	this->ProcessEvent ( pFnOnPurchaseItem, &OnPurchaseItem_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.PurchaseItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ItemGuid                       ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  PurchaseCount                  ( CPF_Const | CPF_Parm )
// unsigned char                  PurchaseLength                 ( CPF_Const | CPF_Parm )
// unsigned char                  FromLocation                   ( CPF_Const | CPF_Parm )
// unsigned char                  Currency                       ( CPF_Const | CPF_Parm )
// unsigned char                  PurchaseType                   ( CPF_Const | CPF_Parm )
// struct FString                 Recipient                      ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ActivationData                 ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::PurchaseItem ( struct FString ItemGuid, unsigned char PurchaseCount, unsigned char PurchaseLength, unsigned char FromLocation, unsigned char Currency, unsigned char PurchaseType, struct FString Recipient, struct FString ActivationData )
{
	static UFunction* pFnPurchaseItem = NULL;

	if ( ! pFnPurchaseItem )
		pFnPurchaseItem = (UFunction*) UObject::GObjObjects()->Data[ 38809 ];

	UOnlineSubsystemPW_execPurchaseItem_Parms PurchaseItem_Parms;
	memcpy ( &PurchaseItem_Parms.ItemGuid, &ItemGuid, 0xC );
	PurchaseItem_Parms.PurchaseCount = PurchaseCount;
	PurchaseItem_Parms.PurchaseLength = PurchaseLength;
	PurchaseItem_Parms.FromLocation = FromLocation;
	PurchaseItem_Parms.Currency = Currency;
	PurchaseItem_Parms.PurchaseType = PurchaseType;
	memcpy ( &PurchaseItem_Parms.Recipient, &Recipient, 0xC );
	memcpy ( &PurchaseItem_Parms.ActivationData, &ActivationData, 0xC );

	pFnPurchaseItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPurchaseItem, &PurchaseItem_Parms, NULL );

	pFnPurchaseItem->FunctionFlags |= 0x400;

	return PurchaseItem_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryStoreCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearQueryStoreCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearQueryStoreCompleteDelegate = NULL;

	if ( ! pFnClearQueryStoreCompleteDelegate )
		pFnClearQueryStoreCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38805 ];

	UOnlineSubsystemPW_execClearQueryStoreCompleteDelegate_Parms ClearQueryStoreCompleteDelegate_Parms;
	ClearQueryStoreCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearQueryStoreCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryStoreCompleteDelegate, &ClearQueryStoreCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryStoreCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddQueryStoreCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddQueryStoreCompleteDelegate = NULL;

	if ( ! pFnAddQueryStoreCompleteDelegate )
		pFnAddQueryStoreCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38802 ];

	UOnlineSubsystemPW_execAddQueryStoreCompleteDelegate_Parms AddQueryStoreCompleteDelegate_Parms;
	AddQueryStoreCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddQueryStoreCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryStoreCompleteDelegate, &AddQueryStoreCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQueryStore
// [0x00120000] 
// Parameters infos:
// struct FString                 StoreData                      ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnQueryStore ( struct FString StoreData )
{
	static UFunction* pFnOnQueryStore = NULL;

	if ( ! pFnOnQueryStore )
		pFnOnQueryStore = (UFunction*) UObject::GObjObjects()->Data[ 37199 ];

	UOnlineSubsystemPW_execOnQueryStore_Parms OnQueryStore_Parms;
	memcpy ( &OnQueryStore_Parms.StoreData, &StoreData, 0xC );

	this->ProcessEvent ( pFnOnQueryStore, &OnQueryStore_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryStore
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filter                         ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::QueryStore ( struct FString Filter )
{
	static UFunction* pFnQueryStore = NULL;

	if ( ! pFnQueryStore )
		pFnQueryStore = (UFunction*) UObject::GObjObjects()->Data[ 38798 ];

	UOnlineSubsystemPW_execQueryStore_Parms QueryStore_Parms;
	memcpy ( &QueryStore_Parms.Filter, &Filter, 0xC );

	pFnQueryStore->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryStore, &QueryStore_Parms, NULL );

	pFnQueryStore->FunctionFlags |= 0x400;

	return QueryStore_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearInventoryUpdatedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearInventoryUpdatedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearInventoryUpdatedDelegate = NULL;

	if ( ! pFnClearInventoryUpdatedDelegate )
		pFnClearInventoryUpdatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38794 ];

	UOnlineSubsystemPW_execClearInventoryUpdatedDelegate_Parms ClearInventoryUpdatedDelegate_Parms;
	ClearInventoryUpdatedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearInventoryUpdatedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearInventoryUpdatedDelegate, &ClearInventoryUpdatedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddInventoryUpdatedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddInventoryUpdatedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddInventoryUpdatedDelegate = NULL;

	if ( ! pFnAddInventoryUpdatedDelegate )
		pFnAddInventoryUpdatedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38791 ];

	UOnlineSubsystemPW_execAddInventoryUpdatedDelegate_Parms AddInventoryUpdatedDelegate_Parms;
	AddInventoryUpdatedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddInventoryUpdatedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddInventoryUpdatedDelegate, &AddInventoryUpdatedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnInventoryUpdated
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// struct FString                 InventoryData                  ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnInventoryUpdated ( struct FUniqueNetId ForId, struct FString InventoryData )
{
	static UFunction* pFnOnInventoryUpdated = NULL;

	if ( ! pFnOnInventoryUpdated )
		pFnOnInventoryUpdated = (UFunction*) UObject::GObjObjects()->Data[ 37211 ];

	UOnlineSubsystemPW_execOnInventoryUpdated_Parms OnInventoryUpdated_Parms;
	memcpy ( &OnInventoryUpdated_Parms.ForId, &ForId, 0x8 );
	memcpy ( &OnInventoryUpdated_Parms.InventoryData, &InventoryData, 0xC );

	this->ProcessEvent ( pFnOnInventoryUpdated, &OnInventoryUpdated_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryInventoryCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearQueryInventoryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearQueryInventoryCompleteDelegate = NULL;

	if ( ! pFnClearQueryInventoryCompleteDelegate )
		pFnClearQueryInventoryCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38785 ];

	UOnlineSubsystemPW_execClearQueryInventoryCompleteDelegate_Parms ClearQueryInventoryCompleteDelegate_Parms;
	ClearQueryInventoryCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearQueryInventoryCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryInventoryCompleteDelegate, &ClearQueryInventoryCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryInventoryCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddQueryInventoryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddQueryInventoryCompleteDelegate = NULL;

	if ( ! pFnAddQueryInventoryCompleteDelegate )
		pFnAddQueryInventoryCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38782 ];

	UOnlineSubsystemPW_execAddQueryInventoryCompleteDelegate_Parms AddQueryInventoryCompleteDelegate_Parms;
	AddQueryInventoryCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddQueryInventoryCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryInventoryCompleteDelegate, &AddQueryInventoryCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnQueryInventory
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// unsigned long                  bResult                        ( CPF_Const | CPF_Parm )
// struct FString                 InventoryData                  ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnQueryInventory ( struct FUniqueNetId ForId, unsigned long bResult, struct FString InventoryData )
{
	static UFunction* pFnOnQueryInventory = NULL;

	if ( ! pFnOnQueryInventory )
		pFnOnQueryInventory = (UFunction*) UObject::GObjObjects()->Data[ 37208 ];

	UOnlineSubsystemPW_execOnQueryInventory_Parms OnQueryInventory_Parms;
	memcpy ( &OnQueryInventory_Parms.ForId, &ForId, 0x8 );
	OnQueryInventory_Parms.bResult = bResult;
	memcpy ( &OnQueryInventory_Parms.InventoryData, &InventoryData, 0xC );

	this->ProcessEvent ( pFnOnQueryInventory, &OnQueryInventory_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryInventory
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ForId                          ( CPF_Parm )
// unsigned long                  bInvalidateCached              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::QueryInventory ( struct FUniqueNetId ForId, unsigned long bInvalidateCached )
{
	static UFunction* pFnQueryInventory = NULL;

	if ( ! pFnQueryInventory )
		pFnQueryInventory = (UFunction*) UObject::GObjObjects()->Data[ 38775 ];

	UOnlineSubsystemPW_execQueryInventory_Parms QueryInventory_Parms;
	memcpy ( &QueryInventory_Parms.ForId, &ForId, 0x8 );
	QueryInventory_Parms.bInvalidateCached = bInvalidateCached;

	pFnQueryInventory->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryInventory, &QueryInventory_Parms, NULL );

	pFnQueryInventory->FunctionFlags |= 0x400;

	return QueryInventory_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearValidatePlayerNameDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearValidatePlayerNameDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearValidatePlayerNameDelegate = NULL;

	if ( ! pFnClearValidatePlayerNameDelegate )
		pFnClearValidatePlayerNameDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38771 ];

	UOnlineSubsystemPW_execClearValidatePlayerNameDelegate_Parms ClearValidatePlayerNameDelegate_Parms;
	ClearValidatePlayerNameDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearValidatePlayerNameDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearValidatePlayerNameDelegate, &ClearValidatePlayerNameDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddValidatePlayerNameDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddValidatePlayerNameDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddValidatePlayerNameDelegate = NULL;

	if ( ! pFnAddValidatePlayerNameDelegate )
		pFnAddValidatePlayerNameDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38768 ];

	UOnlineSubsystemPW_execAddValidatePlayerNameDelegate_Parms AddValidatePlayerNameDelegate_Parms;
	AddValidatePlayerNameDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddValidatePlayerNameDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddValidatePlayerNameDelegate, &AddValidatePlayerNameDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnValidatePlayerNameComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Const | CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )
// unsigned char                  InvalidReason                  ( CPF_Const | CPF_Parm )

void UOnlineSubsystemPW::OnValidatePlayerNameComplete ( struct FUniqueNetId NetId, unsigned long bSuccess, unsigned char InvalidReason )
{
	static UFunction* pFnOnValidatePlayerNameComplete = NULL;

	if ( ! pFnOnValidatePlayerNameComplete )
		pFnOnValidatePlayerNameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37160 ];

	UOnlineSubsystemPW_execOnValidatePlayerNameComplete_Parms OnValidatePlayerNameComplete_Parms;
	memcpy ( &OnValidatePlayerNameComplete_Parms.NetId, &NetId, 0x8 );
	OnValidatePlayerNameComplete_Parms.bSuccess = bSuccess;
	OnValidatePlayerNameComplete_Parms.InvalidReason = InvalidReason;

	this->ProcessEvent ( pFnOnValidatePlayerNameComplete, &OnValidatePlayerNameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ValidatePlayerName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            NetId                          ( CPF_Const | CPF_Parm )
// struct FString                 PlayerName                     ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ValidatePlayerName ( struct FUniqueNetId NetId, struct FString PlayerName )
{
	static UFunction* pFnValidatePlayerName = NULL;

	if ( ! pFnValidatePlayerName )
		pFnValidatePlayerName = (UFunction*) UObject::GObjObjects()->Data[ 38761 ];

	UOnlineSubsystemPW_execValidatePlayerName_Parms ValidatePlayerName_Parms;
	memcpy ( &ValidatePlayerName_Parms.NetId, &NetId, 0x8 );
	memcpy ( &ValidatePlayerName_Parms.PlayerName, &PlayerName, 0xC );

	pFnValidatePlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnValidatePlayerName, &ValidatePlayerName_Parms, NULL );

	pFnValidatePlayerName->FunctionFlags |= 0x400;

	return ValidatePlayerName_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetProfileFlag
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  FlagIndex                      ( CPF_Const | CPF_Parm )

void UOnlineSubsystemPW::SetProfileFlag ( unsigned char FlagIndex )
{
	static UFunction* pFnSetProfileFlag = NULL;

	if ( ! pFnSetProfileFlag )
		pFnSetProfileFlag = (UFunction*) UObject::GObjObjects()->Data[ 38759 ];

	UOnlineSubsystemPW_execSetProfileFlag_Parms SetProfileFlag_Parms;
	SetProfileFlag_Parms.FlagIndex = FlagIndex;

	pFnSetProfileFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetProfileFlag, &SetProfileFlag_Parms, NULL );

	pFnSetProfileFlag->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetProfileFlag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FlagIndex                      ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::GetProfileFlag ( unsigned char FlagIndex )
{
	static UFunction* pFnGetProfileFlag = NULL;

	if ( ! pFnGetProfileFlag )
		pFnGetProfileFlag = (UFunction*) UObject::GObjObjects()->Data[ 38756 ];

	UOnlineSubsystemPW_execGetProfileFlag_Parms GetProfileFlag_Parms;
	GetProfileFlag_Parms.FlagIndex = FlagIndex;

	pFnGetProfileFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetProfileFlag, &GetProfileFlag_Parms, NULL );

	pFnGetProfileFlag->FunctionFlags |= 0x400;

	return GetProfileFlag_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.HasProfileFlagToggled
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FlagIndex                      ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::HasProfileFlagToggled ( unsigned char FlagIndex )
{
	static UFunction* pFnHasProfileFlagToggled = NULL;

	if ( ! pFnHasProfileFlagToggled )
		pFnHasProfileFlagToggled = (UFunction*) UObject::GObjObjects()->Data[ 38753 ];

	UOnlineSubsystemPW_execHasProfileFlagToggled_Parms HasProfileFlagToggled_Parms;
	HasProfileFlagToggled_Parms.FlagIndex = FlagIndex;

	this->ProcessEvent ( pFnHasProfileFlagToggled, &HasProfileFlagToggled_Parms, NULL );

	return HasProfileFlagToggled_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearToggleProfileFlagCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearToggleProfileFlagCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearToggleProfileFlagCompleteDelegate = NULL;

	if ( ! pFnClearToggleProfileFlagCompleteDelegate )
		pFnClearToggleProfileFlagCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38749 ];

	UOnlineSubsystemPW_execClearToggleProfileFlagCompleteDelegate_Parms ClearToggleProfileFlagCompleteDelegate_Parms;
	ClearToggleProfileFlagCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearToggleProfileFlagCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearToggleProfileFlagCompleteDelegate, &ClearToggleProfileFlagCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddToggleProfileFlagCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddToggleProfileFlagCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddToggleProfileFlagCompleteDelegate = NULL;

	if ( ! pFnAddToggleProfileFlagCompleteDelegate )
		pFnAddToggleProfileFlagCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38746 ];

	UOnlineSubsystemPW_execAddToggleProfileFlagCompleteDelegate_Parms AddToggleProfileFlagCompleteDelegate_Parms;
	AddToggleProfileFlagCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddToggleProfileFlagCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddToggleProfileFlagCompleteDelegate, &AddToggleProfileFlagCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnToggleProfileFlagComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  FlagIndex                      ( CPF_Const | CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnToggleProfileFlagComplete ( unsigned char LocalUserNum, unsigned char FlagIndex, unsigned long bSuccess )
{
	static UFunction* pFnOnToggleProfileFlagComplete = NULL;

	if ( ! pFnOnToggleProfileFlagComplete )
		pFnOnToggleProfileFlagComplete = (UFunction*) UObject::GObjObjects()->Data[ 37157 ];

	UOnlineSubsystemPW_execOnToggleProfileFlagComplete_Parms OnToggleProfileFlagComplete_Parms;
	OnToggleProfileFlagComplete_Parms.LocalUserNum = LocalUserNum;
	OnToggleProfileFlagComplete_Parms.FlagIndex = FlagIndex;
	OnToggleProfileFlagComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnToggleProfileFlagComplete, &OnToggleProfileFlagComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ToggleProfileFlag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  FlagIndex                      ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::ToggleProfileFlag ( unsigned char FlagIndex )
{
	static UFunction* pFnToggleProfileFlag = NULL;

	if ( ! pFnToggleProfileFlag )
		pFnToggleProfileFlag = (UFunction*) UObject::GObjObjects()->Data[ 38740 ];

	UOnlineSubsystemPW_execToggleProfileFlag_Parms ToggleProfileFlag_Parms;
	ToggleProfileFlag_Parms.FlagIndex = FlagIndex;

	pFnToggleProfileFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleProfileFlag, &ToggleProfileFlag_Parms, NULL );

	pFnToggleProfileFlag->FunctionFlags |= 0x400;

	return ToggleProfileFlag_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTitle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemPW::GetTitle ( )
{
	static UFunction* pFnGetTitle = NULL;

	if ( ! pFnGetTitle )
		pFnGetTitle = (UFunction*) UObject::GObjObjects()->Data[ 38738 ];

	UOnlineSubsystemPW_execGetTitle_Parms GetTitle_Parms;

	pFnGetTitle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitle, &GetTitle_Parms, NULL );

	pFnGetTitle->FunctionFlags |= 0x400;

	return GetTitle_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetTitle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            NewTitle                       ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::SetTitle ( int NewTitle )
{
	static UFunction* pFnSetTitle = NULL;

	if ( ! pFnSetTitle )
		pFnSetTitle = (UFunction*) UObject::GObjObjects()->Data[ 38735 ];

	UOnlineSubsystemPW_execSetTitle_Parms SetTitle_Parms;
	SetTitle_Parms.NewTitle = NewTitle;

	pFnSetTitle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTitle, &SetTitle_Parms, NULL );

	pFnSetTitle->FunctionFlags |= 0x400;

	return SetTitle_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetEmblem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FQWord                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FQWord UOnlineSubsystemPW::GetEmblem ( )
{
	static UFunction* pFnGetEmblem = NULL;

	if ( ! pFnGetEmblem )
		pFnGetEmblem = (UFunction*) UObject::GObjObjects()->Data[ 38733 ];

	UOnlineSubsystemPW_execGetEmblem_Parms GetEmblem_Parms;

	pFnGetEmblem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEmblem, &GetEmblem_Parms, NULL );

	pFnGetEmblem->FunctionFlags |= 0x400;

	return GetEmblem_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetEmblem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQWord                  NewEmblem                      ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::SetEmblem ( struct FQWord NewEmblem )
{
	static UFunction* pFnSetEmblem = NULL;

	if ( ! pFnSetEmblem )
		pFnSetEmblem = (UFunction*) UObject::GObjObjects()->Data[ 38730 ];

	UOnlineSubsystemPW_execSetEmblem_Parms SetEmblem_Parms;
	memcpy ( &SetEmblem_Parms.NewEmblem, &NewEmblem, 0x8 );

	pFnSetEmblem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEmblem, &SetEmblem_Parms, NULL );

	pFnSetEmblem->FunctionFlags |= 0x400;

	return SetEmblem_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerGender
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemPW::GetPlayerGender ( )
{
	static UFunction* pFnGetPlayerGender = NULL;

	if ( ! pFnGetPlayerGender )
		pFnGetPlayerGender = (UFunction*) UObject::GObjObjects()->Data[ 38728 ];

	UOnlineSubsystemPW_execGetPlayerGender_Parms GetPlayerGender_Parms;

	this->ProcessEvent ( pFnGetPlayerGender, &GetPlayerGender_Parms, NULL );

	return GetPlayerGender_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearChangeGenderCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearChangeGenderCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearChangeGenderCompleteDelegate = NULL;

	if ( ! pFnClearChangeGenderCompleteDelegate )
		pFnClearChangeGenderCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38724 ];

	UOnlineSubsystemPW_execClearChangeGenderCompleteDelegate_Parms ClearChangeGenderCompleteDelegate_Parms;
	ClearChangeGenderCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearChangeGenderCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearChangeGenderCompleteDelegate, &ClearChangeGenderCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddChangeGenderCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddChangeGenderCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddChangeGenderCompleteDelegate = NULL;

	if ( ! pFnAddChangeGenderCompleteDelegate )
		pFnAddChangeGenderCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38721 ];

	UOnlineSubsystemPW_execAddChangeGenderCompleteDelegate_Parms AddChangeGenderCompleteDelegate_Parms;
	AddChangeGenderCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddChangeGenderCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddChangeGenderCompleteDelegate, &AddChangeGenderCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnChangeGenderComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnChangeGenderComplete ( unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnChangeGenderComplete = NULL;

	if ( ! pFnOnChangeGenderComplete )
		pFnOnChangeGenderComplete = (UFunction*) UObject::GObjObjects()->Data[ 37154 ];

	UOnlineSubsystemPW_execOnChangeGenderComplete_Parms OnChangeGenderComplete_Parms;
	OnChangeGenderComplete_Parms.LocalUserNum = LocalUserNum;
	OnChangeGenderComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnChangeGenderComplete, &OnChangeGenderComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ChangeGender
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bCurrentGender                 ( CPF_Const | CPF_Parm )
// unsigned long                  bNewGender                     ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::ChangeGender ( unsigned long bCurrentGender, unsigned long bNewGender )
{
	static UFunction* pFnChangeGender = NULL;

	if ( ! pFnChangeGender )
		pFnChangeGender = (UFunction*) UObject::GObjObjects()->Data[ 38715 ];

	UOnlineSubsystemPW_execChangeGender_Parms ChangeGender_Parms;
	ChangeGender_Parms.bCurrentGender = bCurrentGender;
	ChangeGender_Parms.bNewGender = bNewGender;

	pFnChangeGender->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeGender, &ChangeGender_Parms, NULL );

	pFnChangeGender->FunctionFlags |= 0x400;

	return ChangeGender_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearSkillUpdateCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearSkillUpdateCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearSkillUpdateCompleteDelegate = NULL;

	if ( ! pFnClearSkillUpdateCompleteDelegate )
		pFnClearSkillUpdateCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38711 ];

	UOnlineSubsystemPW_execClearSkillUpdateCompleteDelegate_Parms ClearSkillUpdateCompleteDelegate_Parms;
	ClearSkillUpdateCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearSkillUpdateCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearSkillUpdateCompleteDelegate, &ClearSkillUpdateCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddSkillUpdateCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddSkillUpdateCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddSkillUpdateCompleteDelegate = NULL;

	if ( ! pFnAddSkillUpdateCompleteDelegate )
		pFnAddSkillUpdateCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38708 ];

	UOnlineSubsystemPW_execAddSkillUpdateCompleteDelegate_Parms AddSkillUpdateCompleteDelegate_Parms;
	AddSkillUpdateCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddSkillUpdateCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddSkillUpdateCompleteDelegate, &AddSkillUpdateCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnSkillUpdateComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnSkillUpdateComplete ( unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnSkillUpdateComplete = NULL;

	if ( ! pFnOnSkillUpdateComplete )
		pFnOnSkillUpdateComplete = (UFunction*) UObject::GObjObjects()->Data[ 37151 ];

	UOnlineSubsystemPW_execOnSkillUpdateComplete_Parms OnSkillUpdateComplete_Parms;
	OnSkillUpdateComplete_Parms.LocalUserNum = LocalUserNum;
	OnSkillUpdateComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnSkillUpdateComplete, &OnSkillUpdateComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UpdateSkills
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< unsigned char >        SkillData                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::UpdateSkills ( TArray< unsigned char >* SkillData )
{
	static UFunction* pFnUpdateSkills = NULL;

	if ( ! pFnUpdateSkills )
		pFnUpdateSkills = (UFunction*) UObject::GObjObjects()->Data[ 38702 ];

	UOnlineSubsystemPW_execUpdateSkills_Parms UpdateSkills_Parms;

	pFnUpdateSkills->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSkills, &UpdateSkills_Parms, NULL );

	pFnUpdateSkills->FunctionFlags |= 0x400;

	if ( SkillData )
		memcpy ( SkillData, &UpdateSkills_Parms.SkillData, 0xC );

	return UpdateSkills_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearSkillQueryCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearSkillQueryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearSkillQueryCompleteDelegate = NULL;

	if ( ! pFnClearSkillQueryCompleteDelegate )
		pFnClearSkillQueryCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38698 ];

	UOnlineSubsystemPW_execClearSkillQueryCompleteDelegate_Parms ClearSkillQueryCompleteDelegate_Parms;
	ClearSkillQueryCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearSkillQueryCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearSkillQueryCompleteDelegate, &ClearSkillQueryCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddSkillQueryCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddSkillQueryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddSkillQueryCompleteDelegate = NULL;

	if ( ! pFnAddSkillQueryCompleteDelegate )
		pFnAddSkillQueryCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38695 ];

	UOnlineSubsystemPW_execAddSkillQueryCompleteDelegate_Parms AddSkillQueryCompleteDelegate_Parms;
	AddSkillQueryCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddSkillQueryCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddSkillQueryCompleteDelegate, &AddSkillQueryCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnSkillQueryComplete
// [0x00520000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )
// TArray< unsigned char >        SkillData                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnSkillQueryComplete ( struct FUniqueNetId ForId, unsigned char LocalUserNum, unsigned long bSuccess, TArray< unsigned char >* SkillData )
{
	static UFunction* pFnOnSkillQueryComplete = NULL;

	if ( ! pFnOnSkillQueryComplete )
		pFnOnSkillQueryComplete = (UFunction*) UObject::GObjObjects()->Data[ 37148 ];

	UOnlineSubsystemPW_execOnSkillQueryComplete_Parms OnSkillQueryComplete_Parms;
	memcpy ( &OnSkillQueryComplete_Parms.ForId, &ForId, 0x8 );
	OnSkillQueryComplete_Parms.LocalUserNum = LocalUserNum;
	OnSkillQueryComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnSkillQueryComplete, &OnSkillQueryComplete_Parms, NULL );

	if ( SkillData )
		memcpy ( SkillData, &OnSkillQueryComplete_Parms.SkillData, 0xC );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QuerySkills
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ForId                          ( CPF_Parm )

bool UOnlineSubsystemPW::QuerySkills ( struct FUniqueNetId ForId )
{
	static UFunction* pFnQuerySkills = NULL;

	if ( ! pFnQuerySkills )
		pFnQuerySkills = (UFunction*) UObject::GObjObjects()->Data[ 38687 ];

	UOnlineSubsystemPW_execQuerySkills_Parms QuerySkills_Parms;
	memcpy ( &QuerySkills_Parms.ForId, &ForId, 0x8 );

	pFnQuerySkills->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuerySkills, &QuerySkills_Parms, NULL );

	pFnQuerySkills->FunctionFlags |= 0x400;

	return QuerySkills_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearXPQueryCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearXPQueryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearXPQueryCompleteDelegate = NULL;

	if ( ! pFnClearXPQueryCompleteDelegate )
		pFnClearXPQueryCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38683 ];

	UOnlineSubsystemPW_execClearXPQueryCompleteDelegate_Parms ClearXPQueryCompleteDelegate_Parms;
	ClearXPQueryCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearXPQueryCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearXPQueryCompleteDelegate, &ClearXPQueryCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddXPQueryCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddXPQueryCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddXPQueryCompleteDelegate = NULL;

	if ( ! pFnAddXPQueryCompleteDelegate )
		pFnAddXPQueryCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38680 ];

	UOnlineSubsystemPW_execAddXPQueryCompleteDelegate_Parms AddXPQueryCompleteDelegate_Parms;
	AddXPQueryCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddXPQueryCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddXPQueryCompleteDelegate, &AddXPQueryCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnXPQueryComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            XPAmount                       ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnXPQueryComplete ( struct FUniqueNetId ForId, unsigned char LocalUserNum, int XPAmount, unsigned long bSuccess )
{
	static UFunction* pFnOnXPQueryComplete = NULL;

	if ( ! pFnOnXPQueryComplete )
		pFnOnXPQueryComplete = (UFunction*) UObject::GObjObjects()->Data[ 37142 ];

	UOnlineSubsystemPW_execOnXPQueryComplete_Parms OnXPQueryComplete_Parms;
	memcpy ( &OnXPQueryComplete_Parms.ForId, &ForId, 0x8 );
	OnXPQueryComplete_Parms.LocalUserNum = LocalUserNum;
	OnXPQueryComplete_Parms.XPAmount = XPAmount;
	OnXPQueryComplete_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnXPQueryComplete, &OnXPQueryComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryXP
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ForId                          ( CPF_Parm )

bool UOnlineSubsystemPW::QueryXP ( struct FUniqueNetId ForId )
{
	static UFunction* pFnQueryXP = NULL;

	if ( ! pFnQueryXP )
		pFnQueryXP = (UFunction*) UObject::GObjObjects()->Data[ 38673 ];

	UOnlineSubsystemPW_execQueryXP_Parms QueryXP_Parms;
	memcpy ( &QueryXP_Parms.ForId, &ForId, 0x8 );

	pFnQueryXP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryXP, &QueryXP_Parms, NULL );

	pFnQueryXP->FunctionFlags |= 0x400;

	return QueryXP_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearQueryBasicProfileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearQueryBasicProfileCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearQueryBasicProfileCompleteDelegate = NULL;

	if ( ! pFnClearQueryBasicProfileCompleteDelegate )
		pFnClearQueryBasicProfileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38669 ];

	UOnlineSubsystemPW_execClearQueryBasicProfileCompleteDelegate_Parms ClearQueryBasicProfileCompleteDelegate_Parms;
	ClearQueryBasicProfileCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearQueryBasicProfileCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryBasicProfileCompleteDelegate, &ClearQueryBasicProfileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddQueryBasicProfileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddQueryBasicProfileCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddQueryBasicProfileCompleteDelegate = NULL;

	if ( ! pFnAddQueryBasicProfileCompleteDelegate )
		pFnAddQueryBasicProfileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38666 ];

	UOnlineSubsystemPW_execAddQueryBasicProfileCompleteDelegate_Parms AddQueryBasicProfileCompleteDelegate_Parms;
	AddQueryBasicProfileCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddQueryBasicProfileCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryBasicProfileCompleteDelegate, &AddQueryBasicProfileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnBasicProfileQueryComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            Experience                     ( CPF_Parm )
// unsigned long                  bFemaleChar                    ( CPF_Parm )
// struct FQWord                  BadgeData                      ( CPF_Parm )
// int                            TitleIndex                     ( CPF_Parm )
// struct FString                 LastSeenTime                   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnBasicProfileQueryComplete ( struct FUniqueNetId ForId, unsigned long bSuccess, struct FString PlayerName, int Experience, unsigned long bFemaleChar, struct FQWord BadgeData, int TitleIndex, struct FString LastSeenTime )
{
	static UFunction* pFnOnBasicProfileQueryComplete = NULL;

	if ( ! pFnOnBasicProfileQueryComplete )
		pFnOnBasicProfileQueryComplete = (UFunction*) UObject::GObjObjects()->Data[ 37145 ];

	UOnlineSubsystemPW_execOnBasicProfileQueryComplete_Parms OnBasicProfileQueryComplete_Parms;
	memcpy ( &OnBasicProfileQueryComplete_Parms.ForId, &ForId, 0x8 );
	OnBasicProfileQueryComplete_Parms.bSuccess = bSuccess;
	memcpy ( &OnBasicProfileQueryComplete_Parms.PlayerName, &PlayerName, 0xC );
	OnBasicProfileQueryComplete_Parms.Experience = Experience;
	OnBasicProfileQueryComplete_Parms.bFemaleChar = bFemaleChar;
	memcpy ( &OnBasicProfileQueryComplete_Parms.BadgeData, &BadgeData, 0x8 );
	OnBasicProfileQueryComplete_Parms.TitleIndex = TitleIndex;
	memcpy ( &OnBasicProfileQueryComplete_Parms.LastSeenTime, &LastSeenTime, 0xC );

	this->ProcessEvent ( pFnOnBasicProfileQueryComplete, &OnBasicProfileQueryComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryBasicProfile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ForId                          ( CPF_Parm )

bool UOnlineSubsystemPW::QueryBasicProfile ( struct FUniqueNetId ForId )
{
	static UFunction* pFnQueryBasicProfile = NULL;

	if ( ! pFnQueryBasicProfile )
		pFnQueryBasicProfile = (UFunction*) UObject::GObjObjects()->Data[ 38655 ];

	UOnlineSubsystemPW_execQueryBasicProfile_Parms QueryBasicProfile_Parms;
	memcpy ( &QueryBasicProfile_Parms.ForId, &ForId, 0x8 );

	pFnQueryBasicProfile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryBasicProfile, &QueryBasicProfile_Parms, NULL );

	pFnQueryBasicProfile->FunctionFlags |= 0x400;

	return QueryBasicProfile_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearZPBalanceChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearZPBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearZPBalanceChangedDelegate = NULL;

	if ( ! pFnClearZPBalanceChangedDelegate )
		pFnClearZPBalanceChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38651 ];

	UOnlineSubsystemPW_execClearZPBalanceChangedDelegate_Parms ClearZPBalanceChangedDelegate_Parms;
	ClearZPBalanceChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearZPBalanceChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearZPBalanceChangedDelegate, &ClearZPBalanceChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddZPBalanceChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddZPBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddZPBalanceChangedDelegate = NULL;

	if ( ! pFnAddZPBalanceChangedDelegate )
		pFnAddZPBalanceChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38648 ];

	UOnlineSubsystemPW_execAddZPBalanceChangedDelegate_Parms AddZPBalanceChangedDelegate_Parms;
	AddZPBalanceChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddZPBalanceChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddZPBalanceChangedDelegate, &AddZPBalanceChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnZPBalanceChanged
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            NewZPBalance                   ( CPF_Parm )

void UOnlineSubsystemPW::OnZPBalanceChanged ( struct FUniqueNetId ForId, unsigned char LocalUserNum, int NewZPBalance )
{
	static UFunction* pFnOnZPBalanceChanged = NULL;

	if ( ! pFnOnZPBalanceChanged )
		pFnOnZPBalanceChanged = (UFunction*) UObject::GObjObjects()->Data[ 37139 ];

	UOnlineSubsystemPW_execOnZPBalanceChanged_Parms OnZPBalanceChanged_Parms;
	memcpy ( &OnZPBalanceChanged_Parms.ForId, &ForId, 0x8 );
	OnZPBalanceChanged_Parms.LocalUserNum = LocalUserNum;
	OnZPBalanceChanged_Parms.NewZPBalance = NewZPBalance;

	this->ProcessEvent ( pFnOnZPBalanceChanged, &OnZPBalanceChanged_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryFundsZP
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ForId                          ( CPF_Parm )

bool UOnlineSubsystemPW::QueryFundsZP ( struct FUniqueNetId ForId )
{
	static UFunction* pFnQueryFundsZP = NULL;

	if ( ! pFnQueryFundsZP )
		pFnQueryFundsZP = (UFunction*) UObject::GObjObjects()->Data[ 38642 ];

	UOnlineSubsystemPW_execQueryFundsZP_Parms QueryFundsZP_Parms;
	memcpy ( &QueryFundsZP_Parms.ForId, &ForId, 0x8 );

	pFnQueryFundsZP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryFundsZP, &QueryFundsZP_Parms, NULL );

	pFnQueryFundsZP->FunctionFlags |= 0x400;

	return QueryFundsZP_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearGPBalanceChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearGPBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearGPBalanceChangedDelegate = NULL;

	if ( ! pFnClearGPBalanceChangedDelegate )
		pFnClearGPBalanceChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38638 ];

	UOnlineSubsystemPW_execClearGPBalanceChangedDelegate_Parms ClearGPBalanceChangedDelegate_Parms;
	ClearGPBalanceChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGPBalanceChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearGPBalanceChangedDelegate, &ClearGPBalanceChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGPBalanceChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddGPBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddGPBalanceChangedDelegate = NULL;

	if ( ! pFnAddGPBalanceChangedDelegate )
		pFnAddGPBalanceChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38635 ];

	UOnlineSubsystemPW_execAddGPBalanceChangedDelegate_Parms AddGPBalanceChangedDelegate_Parms;
	AddGPBalanceChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGPBalanceChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddGPBalanceChangedDelegate, &AddGPBalanceChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGPBalanceChanged
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            NewGPBalance                   ( CPF_Parm )

void UOnlineSubsystemPW::OnGPBalanceChanged ( struct FUniqueNetId ForId, unsigned char LocalUserNum, int NewGPBalance )
{
	static UFunction* pFnOnGPBalanceChanged = NULL;

	if ( ! pFnOnGPBalanceChanged )
		pFnOnGPBalanceChanged = (UFunction*) UObject::GObjObjects()->Data[ 37136 ];

	UOnlineSubsystemPW_execOnGPBalanceChanged_Parms OnGPBalanceChanged_Parms;
	memcpy ( &OnGPBalanceChanged_Parms.ForId, &ForId, 0x8 );
	OnGPBalanceChanged_Parms.LocalUserNum = LocalUserNum;
	OnGPBalanceChanged_Parms.NewGPBalance = NewGPBalance;

	this->ProcessEvent ( pFnOnGPBalanceChanged, &OnGPBalanceChanged_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryFundsGP
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ForId                          ( CPF_Parm )

bool UOnlineSubsystemPW::QueryFundsGP ( struct FUniqueNetId ForId )
{
	static UFunction* pFnQueryFundsGP = NULL;

	if ( ! pFnQueryFundsGP )
		pFnQueryFundsGP = (UFunction*) UObject::GObjObjects()->Data[ 38629 ];

	UOnlineSubsystemPW_execQueryFundsGP_Parms QueryFundsGP_Parms;
	memcpy ( &QueryFundsGP_Parms.ForId, &ForId, 0x8 );

	pFnQueryFundsGP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryFundsGP, &QueryFundsGP_Parms, NULL );

	pFnQueryFundsGP->FunctionFlags |= 0x400;

	return QueryFundsGP_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearBalanceChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearBalanceChangedDelegate = NULL;

	if ( ! pFnClearBalanceChangedDelegate )
		pFnClearBalanceChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38625 ];

	UOnlineSubsystemPW_execClearBalanceChangedDelegate_Parms ClearBalanceChangedDelegate_Parms;
	ClearBalanceChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearBalanceChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearBalanceChangedDelegate, &ClearBalanceChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddBalanceChangedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddBalanceChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddBalanceChangedDelegate = NULL;

	if ( ! pFnAddBalanceChangedDelegate )
		pFnAddBalanceChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38622 ];

	UOnlineSubsystemPW_execAddBalanceChangedDelegate_Parms AddBalanceChangedDelegate_Parms;
	AddBalanceChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddBalanceChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddBalanceChangedDelegate, &AddBalanceChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnBalanceChanged
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            NewZPBalance                   ( CPF_Parm )
// int                            NewGPBalance                   ( CPF_Parm )

void UOnlineSubsystemPW::OnBalanceChanged ( struct FUniqueNetId ForId, unsigned char LocalUserNum, int NewZPBalance, int NewGPBalance )
{
	static UFunction* pFnOnBalanceChanged = NULL;

	if ( ! pFnOnBalanceChanged )
		pFnOnBalanceChanged = (UFunction*) UObject::GObjObjects()->Data[ 37133 ];

	UOnlineSubsystemPW_execOnBalanceChanged_Parms OnBalanceChanged_Parms;
	memcpy ( &OnBalanceChanged_Parms.ForId, &ForId, 0x8 );
	OnBalanceChanged_Parms.LocalUserNum = LocalUserNum;
	OnBalanceChanged_Parms.NewZPBalance = NewZPBalance;
	OnBalanceChanged_Parms.NewGPBalance = NewGPBalance;

	this->ProcessEvent ( pFnOnBalanceChanged, &OnBalanceChanged_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QueryFunds
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ForId                          ( CPF_Parm )

bool UOnlineSubsystemPW::QueryFunds ( struct FUniqueNetId ForId )
{
	static UFunction* pFnQueryFunds = NULL;

	if ( ! pFnQueryFunds )
		pFnQueryFunds = (UFunction*) UObject::GObjObjects()->Data[ 38615 ];

	UOnlineSubsystemPW_execQueryFunds_Parms QueryFunds_Parms;
	memcpy ( &QueryFunds_Parms.ForId, &ForId, 0x8 );

	pFnQueryFunds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryFunds, &QueryFunds_Parms, NULL );

	pFnQueryFunds->FunctionFlags |= 0x400;

	return QueryFunds_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearActivateItemCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearActivateItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearActivateItemCompleteDelegate = NULL;

	if ( ! pFnClearActivateItemCompleteDelegate )
		pFnClearActivateItemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38611 ];

	UOnlineSubsystemPW_execClearActivateItemCompleteDelegate_Parms ClearActivateItemCompleteDelegate_Parms;
	ClearActivateItemCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearActivateItemCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearActivateItemCompleteDelegate, &ClearActivateItemCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddActivateItemCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddActivateItemCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddActivateItemCompleteDelegate = NULL;

	if ( ! pFnAddActivateItemCompleteDelegate )
		pFnAddActivateItemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38608 ];

	UOnlineSubsystemPW_execAddActivateItemCompleteDelegate_Parms AddActivateItemCompleteDelegate_Parms;
	AddActivateItemCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddActivateItemCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddActivateItemCompleteDelegate, &AddActivateItemCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnItemActivated
// [0x00120000] 
// Parameters infos:
// unsigned long                  bResult                        ( CPF_Const | CPF_Parm )
// unsigned char                  eResult                        ( CPF_Const | CPF_Parm )

void UOnlineSubsystemPW::OnItemActivated ( unsigned long bResult, unsigned char eResult )
{
	static UFunction* pFnOnItemActivated = NULL;

	if ( ! pFnOnItemActivated )
		pFnOnItemActivated = (UFunction*) UObject::GObjObjects()->Data[ 37205 ];

	UOnlineSubsystemPW_execOnItemActivated_Parms OnItemActivated_Parms;
	OnItemActivated_Parms.bResult = bResult;
	OnItemActivated_Parms.eResult = eResult;

	this->ProcessEvent ( pFnOnItemActivated, &OnItemActivated_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ActivateItem
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ItemGuid                       ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ActivationData                 ( CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ActivateItem ( struct FString ItemGuid, struct FString ActivationData )
{
	static UFunction* pFnActivateItem = NULL;

	if ( ! pFnActivateItem )
		pFnActivateItem = (UFunction*) UObject::GObjObjects()->Data[ 38602 ];

	UOnlineSubsystemPW_execActivateItem_Parms ActivateItem_Parms;
	memcpy ( &ActivateItem_Parms.ItemGuid, &ItemGuid, 0xC );
	memcpy ( &ActivateItem_Parms.ActivationData, &ActivationData, 0xC );

	pFnActivateItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActivateItem, &ActivateItem_Parms, NULL );

	pFnActivateItem->FunctionFlags |= 0x400;

	return ActivateItem_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearGPAddCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearGPAddCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearGPAddCompleteDelegate = NULL;

	if ( ! pFnClearGPAddCompleteDelegate )
		pFnClearGPAddCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38599 ];

	UOnlineSubsystemPW_execClearGPAddCompleteDelegate_Parms ClearGPAddCompleteDelegate_Parms;
	ClearGPAddCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGPAddCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearGPAddCompleteDelegate, &ClearGPAddCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGPAddCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddGPAddCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddGPAddCompleteDelegate = NULL;

	if ( ! pFnAddGPAddCompleteDelegate )
		pFnAddGPAddCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38596 ];

	UOnlineSubsystemPW_execAddGPAddCompleteDelegate_Parms AddGPAddCompleteDelegate_Parms;
	AddGPAddCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGPAddCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddGPAddCompleteDelegate, &AddGPAddCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGPAdded
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            ForId                          ( CPF_Const | CPF_Parm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bSuccess                       ( CPF_Parm )

void UOnlineSubsystemPW::OnGPAdded ( struct FUniqueNetId ForId, unsigned char LocalUserNum, unsigned long bSuccess )
{
	static UFunction* pFnOnGPAdded = NULL;

	if ( ! pFnOnGPAdded )
		pFnOnGPAdded = (UFunction*) UObject::GObjObjects()->Data[ 37591 ];

	UOnlineSubsystemPW_execOnGPAdded_Parms OnGPAdded_Parms;
	memcpy ( &OnGPAdded_Parms.ForId, &ForId, 0x8 );
	OnGPAdded_Parms.LocalUserNum = LocalUserNum;
	OnGPAdded_Parms.bSuccess = bSuccess;

	this->ProcessEvent ( pFnOnGPAdded, &OnGPAdded_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddGP
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ForId                          ( CPF_Parm )
// int                            Amount                         ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::AddGP ( struct FUniqueNetId ForId, int Amount )
{
	static UFunction* pFnAddGP = NULL;

	if ( ! pFnAddGP )
		pFnAddGP = (UFunction*) UObject::GObjObjects()->Data[ 38589 ];

	UOnlineSubsystemPW_execAddGP_Parms AddGP_Parms;
	memcpy ( &AddGP_Parms.ForId, &ForId, 0x8 );
	AddGP_Parms.Amount = Amount;

	pFnAddGP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddGP, &AddGP_Parms, NULL );

	pFnAddGP->FunctionFlags |= 0x400;

	return AddGP_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowCustomMessageUI
// [0x00424000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 MessageTitle                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NonEditableMessage             ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EditableMessage                ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Recipients                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ShowCustomMessageUI ( unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients )
{
	static UFunction* pFnShowCustomMessageUI = NULL;

	if ( ! pFnShowCustomMessageUI )
		pFnShowCustomMessageUI = (UFunction*) UObject::GObjObjects()->Data[ 38581 ];

	UOnlineSubsystemPW_execShowCustomMessageUI_Parms ShowCustomMessageUI_Parms;
	ShowCustomMessageUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowCustomMessageUI_Parms.MessageTitle, &MessageTitle, 0xC );
	memcpy ( &ShowCustomMessageUI_Parms.NonEditableMessage, &NonEditableMessage, 0xC );
	memcpy ( &ShowCustomMessageUI_Parms.EditableMessage, &EditableMessage, 0xC );

	this->ProcessEvent ( pFnShowCustomMessageUI, &ShowCustomMessageUI_Parms, NULL );

	if ( Recipients )
		memcpy ( Recipients, &ShowCustomMessageUI_Parms.Recipients, 0xC );

	return ShowCustomMessageUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemPW::ClearCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnClearCrossTitleProfileSettings = NULL;

	if ( ! pFnClearCrossTitleProfileSettings )
		pFnClearCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 38578 ];

	UOnlineSubsystemPW_execClearCrossTitleProfileSettings_Parms ClearCrossTitleProfileSettings_Parms;
	ClearCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ClearCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemPW::GetCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId )
{
	static UFunction* pFnGetCrossTitleProfileSettings = NULL;

	if ( ! pFnGetCrossTitleProfileSettings )
		pFnGetCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 38574 ];

	UOnlineSubsystemPW_execGetCrossTitleProfileSettings_Parms GetCrossTitleProfileSettings_Parms;
	GetCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	GetCrossTitleProfileSettings_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Parms, NULL );

	return GetCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadCrossTitleProfileSettingsCompleteDelegate )
		pFnClearReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38571 ];

	UOnlineSubsystemPW_execClearReadCrossTitleProfileSettingsCompleteDelegate_Parms ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddReadCrossTitleProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadCrossTitleProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadCrossTitleProfileSettingsCompleteDelegate )
		pFnAddReadCrossTitleProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38568 ];

	UOnlineSubsystemPW_execAddReadCrossTitleProfileSettingsCompleteDelegate_Parms AddReadCrossTitleProfileSettingsCompleteDelegate_Parms;
	AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnReadCrossTitleProfileSettingsComplete ( unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadCrossTitleProfileSettingsComplete = NULL;

	if ( ! pFnOnReadCrossTitleProfileSettingsComplete )
		pFnOnReadCrossTitleProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 37593 ];

	UOnlineSubsystemPW_execOnReadCrossTitleProfileSettingsComplete_Parms OnReadCrossTitleProfileSettingsComplete_Parms;
	OnReadCrossTitleProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadCrossTitleProfileSettingsComplete_Parms.TitleId = TitleId;
	OnReadCrossTitleProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadCrossTitleProfileSettings
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemPW::ReadCrossTitleProfileSettings ( unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadCrossTitleProfileSettings = NULL;

	if ( ! pFnReadCrossTitleProfileSettings )
		pFnReadCrossTitleProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 38560 ];

	UOnlineSubsystemPW_execReadCrossTitleProfileSettings_Parms ReadCrossTitleProfileSettings_Parms;
	ReadCrossTitleProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadCrossTitleProfileSettings_Parms.TitleId = TitleId;
	ReadCrossTitleProfileSettings_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent ( pFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Parms, NULL );

	return ReadCrossTitleProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnlockAvatarAward
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AvatarItemId                   ( CPF_Parm )

bool UOnlineSubsystemPW::UnlockAvatarAward ( unsigned char LocalUserNum, int AvatarItemId )
{
	static UFunction* pFnUnlockAvatarAward = NULL;

	if ( ! pFnUnlockAvatarAward )
		pFnUnlockAvatarAward = (UFunction*) UObject::GObjObjects()->Data[ 38556 ];

	UOnlineSubsystemPW_execUnlockAvatarAward_Parms UnlockAvatarAward_Parms;
	UnlockAvatarAward_Parms.LocalUserNum = LocalUserNum;
	UnlockAvatarAward_Parms.AvatarItemId = AvatarItemId;

	this->ProcessEvent ( pFnUnlockAvatarAward, &UnlockAvatarAward_Parms, NULL );

	return UnlockAvatarAward_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowCustomPlayersUI
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Description                    ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ShowCustomPlayersUI ( unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnShowCustomPlayersUI = NULL;

	if ( ! pFnShowCustomPlayersUI )
		pFnShowCustomPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 38549 ];

	UOnlineSubsystemPW_execShowCustomPlayersUI_Parms ShowCustomPlayersUI_Parms;
	ShowCustomPlayersUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowCustomPlayersUI_Parms.Title, &Title, 0xC );
	memcpy ( &ShowCustomPlayersUI_Parms.Description, &Description, 0xC );

	this->ProcessEvent ( pFnShowCustomPlayersUI, &ShowCustomPlayersUI_Parms, NULL );

	if ( Players )
		memcpy ( Players, &ShowCustomPlayersUI_Parms.Players, 0xC );

	return ShowCustomPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowPlayersUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::ShowPlayersUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowPlayersUI = NULL;

	if ( ! pFnShowPlayersUI )
		pFnShowPlayersUI = (UFunction*) UObject::GObjObjects()->Data[ 38546 ];

	UOnlineSubsystemPW_execShowPlayersUI_Parms ShowPlayersUI_Parms;
	ShowPlayersUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowPlayersUI, &ShowPlayersUI_Parms, NULL );

	return ShowPlayersUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowFriendsInviteUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPW::ShowFriendsInviteUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFriendsInviteUI = NULL;

	if ( ! pFnShowFriendsInviteUI )
		pFnShowFriendsInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 38542 ];

	UOnlineSubsystemPW_execShowFriendsInviteUI_Parms ShowFriendsInviteUI_Parms;
	ShowFriendsInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFriendsInviteUI_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnShowFriendsInviteUI, &ShowFriendsInviteUI_Parms, NULL );

	return ShowFriendsInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearProfileDataChangedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnClearProfileDataChangedDelegate = NULL;

	if ( ! pFnClearProfileDataChangedDelegate )
		pFnClearProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38539 ];

	UOnlineSubsystemPW_execClearProfileDataChangedDelegate_Parms ClearProfileDataChangedDelegate_Parms;
	ClearProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0xC );

	this->ProcessEvent ( pFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddProfileDataChangedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ProfileDataChangedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddProfileDataChangedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate )
{
	static UFunction* pFnAddProfileDataChangedDelegate = NULL;

	if ( ! pFnAddProfileDataChangedDelegate )
		pFnAddProfileDataChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38536 ];

	UOnlineSubsystemPW_execAddProfileDataChangedDelegate_Parms AddProfileDataChangedDelegate_Parms;
	AddProfileDataChangedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddProfileDataChangedDelegate_Parms.ProfileDataChangedDelegate, &ProfileDataChangedDelegate, 0xC );

	this->ProcessEvent ( pFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnProfileDataChanged
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnProfileDataChanged ( )
{
	static UFunction* pFnOnProfileDataChanged = NULL;

	if ( ! pFnOnProfileDataChanged )
		pFnOnProfileDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37595 ];

	UOnlineSubsystemPW_execOnProfileDataChanged_Parms OnProfileDataChanged_Parms;

	this->ProcessEvent ( pFnOnProfileDataChanged, &OnProfileDataChanged_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnlockGamerPicture
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            PictureId                      ( CPF_Parm )

bool UOnlineSubsystemPW::UnlockGamerPicture ( unsigned char LocalUserNum, int PictureId )
{
	static UFunction* pFnUnlockGamerPicture = NULL;

	if ( ! pFnUnlockGamerPicture )
		pFnUnlockGamerPicture = (UFunction*) UObject::GObjObjects()->Data[ 38532 ];

	UOnlineSubsystemPW_execUnlockGamerPicture_Parms UnlockGamerPicture_Parms;
	UnlockGamerPicture_Parms.LocalUserNum = LocalUserNum;
	UnlockGamerPicture_Parms.PictureId = PictureId;

	this->ProcessEvent ( pFnUnlockGamerPicture, &UnlockGamerPicture_Parms, NULL );

	return UnlockGamerPicture_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsDeviceValid
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            DeviceID                       ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::IsDeviceValid ( int DeviceID, int SizeNeeded )
{
	static UFunction* pFnIsDeviceValid = NULL;

	if ( ! pFnIsDeviceValid )
		pFnIsDeviceValid = (UFunction*) UObject::GObjObjects()->Data[ 38528 ];

	UOnlineSubsystemPW_execIsDeviceValid_Parms IsDeviceValid_Parms;
	IsDeviceValid_Parms.DeviceID = DeviceID;
	IsDeviceValid_Parms.SizeNeeded = SizeNeeded;

	this->ProcessEvent ( pFnIsDeviceValid, &IsDeviceValid_Parms, NULL );

	return IsDeviceValid_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetDeviceSelectionResults
// [0x00420000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 DeviceName                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UOnlineSubsystemPW::GetDeviceSelectionResults ( unsigned char LocalUserNum, struct FString* DeviceName )
{
	static UFunction* pFnGetDeviceSelectionResults = NULL;

	if ( ! pFnGetDeviceSelectionResults )
		pFnGetDeviceSelectionResults = (UFunction*) UObject::GObjObjects()->Data[ 38524 ];

	UOnlineSubsystemPW_execGetDeviceSelectionResults_Parms GetDeviceSelectionResults_Parms;
	GetDeviceSelectionResults_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Parms, NULL );

	if ( DeviceName )
		memcpy ( DeviceName, &GetDeviceSelectionResults_Parms.DeviceName, 0xC );

	return GetDeviceSelectionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearDeviceSelectionDoneDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnClearDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnClearDeviceSelectionDoneDelegate )
		pFnClearDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38521 ];

	UOnlineSubsystemPW_execClearDeviceSelectionDoneDelegate_Parms ClearDeviceSelectionDoneDelegate_Parms;
	ClearDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0xC );

	this->ProcessEvent ( pFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddDeviceSelectionDoneDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         DeviceDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddDeviceSelectionDoneDelegate ( unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate )
{
	static UFunction* pFnAddDeviceSelectionDoneDelegate = NULL;

	if ( ! pFnAddDeviceSelectionDoneDelegate )
		pFnAddDeviceSelectionDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38518 ];

	UOnlineSubsystemPW_execAddDeviceSelectionDoneDelegate_Parms AddDeviceSelectionDoneDelegate_Parms;
	AddDeviceSelectionDoneDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddDeviceSelectionDoneDelegate_Parms.DeviceDelegate, &DeviceDelegate, 0xC );

	this->ProcessEvent ( pFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnDeviceSelectionComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnDeviceSelectionComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDeviceSelectionComplete = NULL;

	if ( ! pFnOnDeviceSelectionComplete )
		pFnOnDeviceSelectionComplete = (UFunction*) UObject::GObjObjects()->Data[ 37597 ];

	UOnlineSubsystemPW_execOnDeviceSelectionComplete_Parms OnDeviceSelectionComplete_Parms;
	OnDeviceSelectionComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowDeviceSelectionUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            SizeNeeded                     ( CPF_Parm )
// unsigned long                  bManageStorage                 ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::ShowDeviceSelectionUI ( unsigned char LocalUserNum, int SizeNeeded, unsigned long bManageStorage )
{
	static UFunction* pFnShowDeviceSelectionUI = NULL;

	if ( ! pFnShowDeviceSelectionUI )
		pFnShowDeviceSelectionUI = (UFunction*) UObject::GObjObjects()->Data[ 38512 ];

	UOnlineSubsystemPW_execShowDeviceSelectionUI_Parms ShowDeviceSelectionUI_Parms;
	ShowDeviceSelectionUI_Parms.LocalUserNum = LocalUserNum;
	ShowDeviceSelectionUI_Parms.SizeNeeded = SizeNeeded;
	ShowDeviceSelectionUI_Parms.bManageStorage = bManageStorage;

	this->ProcessEvent ( pFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Parms, NULL );

	return ShowDeviceSelectionUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowMembershipMarketplaceUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::ShowMembershipMarketplaceUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMembershipMarketplaceUI = NULL;

	if ( ! pFnShowMembershipMarketplaceUI )
		pFnShowMembershipMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 38509 ];

	UOnlineSubsystemPW_execShowMembershipMarketplaceUI_Parms ShowMembershipMarketplaceUI_Parms;
	ShowMembershipMarketplaceUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Parms, NULL );

	return ShowMembershipMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowContentMarketplaceUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            CategoryMask                   ( CPF_OptionalParm | CPF_Parm )
// int                            OfferId                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId )
{
	static UFunction* pFnShowContentMarketplaceUI = NULL;

	if ( ! pFnShowContentMarketplaceUI )
		pFnShowContentMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 38504 ];

	UOnlineSubsystemPW_execShowContentMarketplaceUI_Parms ShowContentMarketplaceUI_Parms;
	ShowContentMarketplaceUI_Parms.LocalUserNum = LocalUserNum;
	ShowContentMarketplaceUI_Parms.CategoryMask = CategoryMask;
	ShowContentMarketplaceUI_Parms.OfferId = OfferId;

	this->ProcessEvent ( pFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Parms, NULL );

	return ShowContentMarketplaceUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowInviteUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviteText                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ShowInviteUI ( unsigned char LocalUserNum, struct FString InviteText )
{
	static UFunction* pFnShowInviteUI = NULL;

	if ( ! pFnShowInviteUI )
		pFnShowInviteUI = (UFunction*) UObject::GObjObjects()->Data[ 38500 ];

	UOnlineSubsystemPW_execShowInviteUI_Parms ShowInviteUI_Parms;
	ShowInviteUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowInviteUI_Parms.InviteText, &InviteText, 0xC );

	this->ProcessEvent ( pFnShowInviteUI, &ShowInviteUI_Parms, NULL );

	return ShowInviteUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowAchievementsUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::ShowAchievementsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowAchievementsUI = NULL;

	if ( ! pFnShowAchievementsUI )
		pFnShowAchievementsUI = (UFunction*) UObject::GObjObjects()->Data[ 38497 ];

	UOnlineSubsystemPW_execShowAchievementsUI_Parms ShowAchievementsUI_Parms;
	ShowAchievementsUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowAchievementsUI, &ShowAchievementsUI_Parms, NULL );

	return ShowAchievementsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowMessagesUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::ShowMessagesUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowMessagesUI = NULL;

	if ( ! pFnShowMessagesUI )
		pFnShowMessagesUI = (UFunction*) UObject::GObjObjects()->Data[ 38494 ];

	UOnlineSubsystemPW_execShowMessagesUI_Parms ShowMessagesUI_Parms;
	ShowMessagesUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowMessagesUI, &ShowMessagesUI_Parms, NULL );

	return ShowMessagesUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowGamerCardUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPW::ShowGamerCardUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowGamerCardUI = NULL;

	if ( ! pFnShowGamerCardUI )
		pFnShowGamerCardUI = (UFunction*) UObject::GObjObjects()->Data[ 38490 ];

	UOnlineSubsystemPW_execShowGamerCardUI_Parms ShowGamerCardUI_Parms;
	ShowGamerCardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowGamerCardUI_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnShowGamerCardUI, &ShowGamerCardUI_Parms, NULL );

	return ShowGamerCardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowFeedbackUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPW::ShowFeedbackUI ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnShowFeedbackUI = NULL;

	if ( ! pFnShowFeedbackUI )
		pFnShowFeedbackUI = (UFunction*) UObject::GObjObjects()->Data[ 38486 ];

	UOnlineSubsystemPW_execShowFeedbackUI_Parms ShowFeedbackUI_Parms;
	ShowFeedbackUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowFeedbackUI_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnShowFeedbackUI, &ShowFeedbackUI_Parms, NULL );

	return ShowFeedbackUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowWebPageUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ShowWebPageUI ( struct FString URL )
{
	static UFunction* pFnShowWebPageUI = NULL;

	if ( ! pFnShowWebPageUI )
		pFnShowWebPageUI = (UFunction*) UObject::GObjObjects()->Data[ 38483 ];

	UOnlineSubsystemPW_execShowWebPageUI_Parms ShowWebPageUI_Parms;
	memcpy ( &ShowWebPageUI_Parms.URL, &URL, 0xC );

	pFnShowWebPageUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowWebPageUI, &ShowWebPageUI_Parms, NULL );

	pFnShowWebPageUI->FunctionFlags |= 0x400;

	return ShowWebPageUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsLoginInProcess
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::IsLoginInProcess ( )
{
	static UFunction* pFnIsLoginInProcess = NULL;

	if ( ! pFnIsLoginInProcess )
		pFnIsLoginInProcess = (UFunction*) UObject::GObjObjects()->Data[ 38481 ];

	UOnlineSubsystemPW_execIsLoginInProcess_Parms IsLoginInProcess_Parms;

	this->ProcessEvent ( pFnIsLoginInProcess, &IsLoginInProcess_Parms, NULL );

	return IsLoginInProcess_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetAchievements
// [0x00424000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemPW::GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->Data[ 38475 ];

	UOnlineSubsystemPW_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	if ( Achievements )
		memcpy ( Achievements, &GetAchievements_Parms.Achievements, 0xC );

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38472 ];

	UOnlineSubsystemPW_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38469 ];

	UOnlineSubsystemPW_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemPW::OnReadAchievementsComplete ( int TitleId )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->Data[ 37599 ];

	UOnlineSubsystemPW_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadAchievements
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->Data[ 38462 ];

	UOnlineSubsystemPW_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38459 ];

	UOnlineSubsystemPW_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38456 ];

	UOnlineSubsystemPW_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnUnlockAchievementComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->Data[ 37601 ];

	UOnlineSubsystemPW_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnlockAchievement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )

bool UOnlineSubsystemPW::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->Data[ 38451 ];

	UOnlineSubsystemPW_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	pFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DeleteMessage
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemPW::DeleteMessage ( unsigned char LocalUserNum, int MessageIndex )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 38447 ];

	UOnlineSubsystemPW_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnmuteAll
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::UnmuteAll ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->Data[ 38444 ];

	UOnlineSubsystemPW_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.MuteAll
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAllowFriends                  ( CPF_Parm )

bool UOnlineSubsystemPW::MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->Data[ 38440 ];

	UOnlineSubsystemPW_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38437 ];

	UOnlineSubsystemPW_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38434 ];

	UOnlineSubsystemPW_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->Data[ 37603 ];

	UOnlineSubsystemPW_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x8 );
	memcpy ( &OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0xC );
	memcpy ( &OnFriendMessageReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetFriendMessages
// [0x00420000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->Data[ 38426 ];

	UOnlineSubsystemPW_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );

	if ( FriendMessages )
		memcpy ( FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0xC );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38424 ];

	UOnlineSubsystemPW_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38422 ];

	UOnlineSubsystemPW_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnJoinFriendGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37605 ];

	UOnlineSubsystemPW_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinFriendGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemPW::JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->Data[ 38417 ];

	UOnlineSubsystemPW_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinFriendGame_Parms.Friend, &Friend, 0x8 );

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38413 ];

	UOnlineSubsystemPW_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReceivedGameInviteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38410 ];

	UOnlineSubsystemPW_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReceivedGameInviteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 37232 ];

	UOnlineSubsystemPW_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnReceivedGameInvite_Parms.InviterName, &InviterName, 0xC );

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->Data[ 38402 ];

	UOnlineSubsystemPW_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriends_Parms.Friends, &Friends, 0xC );
	memcpy ( &SendGameInviteToFriends_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	pFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->Data[ 38397 ];

	UOnlineSubsystemPW_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	pFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UpdateOnlineStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            StatusID                       ( CPF_Parm )
// struct FString                 PresenceContext                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::UpdateOnlineStatus ( int StatusID, struct FString PresenceContext )
{
	static UFunction* pFnUpdateOnlineStatus = NULL;

	if ( ! pFnUpdateOnlineStatus )
		pFnUpdateOnlineStatus = (UFunction*) UObject::GObjObjects()->Data[ 38394 ];

	UOnlineSubsystemPW_execUpdateOnlineStatus_Parms UpdateOnlineStatus_Parms;
	UpdateOnlineStatus_Parms.StatusID = StatusID;
	memcpy ( &UpdateOnlineStatus_Parms.PresenceContext, &PresenceContext, 0xC );

	pFnUpdateOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOnlineStatus, &UpdateOnlineStatus_Parms, NULL );

	pFnUpdateOnlineStatus->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnFriendInfoChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnFriendInfoChangedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnFriendInfoChangedDelegate = NULL;

	if ( ! pFnClearOnFriendInfoChangedDelegate )
		pFnClearOnFriendInfoChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38391 ];

	UOnlineSubsystemPW_execClearOnFriendInfoChangedDelegate_Parms ClearOnFriendInfoChangedDelegate_Parms;
	memcpy ( &ClearOnFriendInfoChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnFriendInfoChangedDelegate, &ClearOnFriendInfoChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnFriendInfoChangedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnFriendInfoChangedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnFriendInfoChangedDelegate = NULL;

	if ( ! pFnAddOnFriendInfoChangedDelegate )
		pFnAddOnFriendInfoChangedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38389 ];

	UOnlineSubsystemPW_execAddOnFriendInfoChangedDelegate_Parms AddOnFriendInfoChangedDelegate_Parms;
	memcpy ( &AddOnFriendInfoChangedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnFriendInfoChangedDelegate, &AddOnFriendInfoChangedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFriendInfoChanged
// [0x00120000] 
// Parameters infos:
// struct FOnlineFriend           OldFriendInfo                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FOnlineFriend           NewFriendInfo                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnFriendInfoChanged ( struct FOnlineFriend OldFriendInfo, struct FOnlineFriend NewFriendInfo )
{
	static UFunction* pFnOnFriendInfoChanged = NULL;

	if ( ! pFnOnFriendInfoChanged )
		pFnOnFriendInfoChanged = (UFunction*) UObject::GObjObjects()->Data[ 37322 ];

	UOnlineSubsystemPW_execOnFriendInfoChanged_Parms OnFriendInfoChanged_Parms;
	memcpy ( &OnFriendInfoChanged_Parms.OldFriendInfo, &OldFriendInfo, 0x84 );
	memcpy ( &OnFriendInfoChanged_Parms.NewFriendInfo, &NewFriendInfo, 0x84 );

	this->ProcessEvent ( pFnOnFriendInfoChanged, &OnFriendInfoChanged_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnGetUniqueIdOfPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnGetUniqueIdOfPlayerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnGetUniqueIdOfPlayerCompleteDelegate = NULL;

	if ( ! pFnClearOnGetUniqueIdOfPlayerCompleteDelegate )
		pFnClearOnGetUniqueIdOfPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38384 ];

	UOnlineSubsystemPW_execClearOnGetUniqueIdOfPlayerCompleteDelegate_Parms ClearOnGetUniqueIdOfPlayerCompleteDelegate_Parms;
	memcpy ( &ClearOnGetUniqueIdOfPlayerCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnGetUniqueIdOfPlayerCompleteDelegate, &ClearOnGetUniqueIdOfPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnGetUniqueIdOfPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnGetUniqueIdOfPlayerCompleteDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnGetUniqueIdOfPlayerCompleteDelegate = NULL;

	if ( ! pFnAddOnGetUniqueIdOfPlayerCompleteDelegate )
		pFnAddOnGetUniqueIdOfPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38382 ];

	UOnlineSubsystemPW_execAddOnGetUniqueIdOfPlayerCompleteDelegate_Parms AddOnGetUniqueIdOfPlayerCompleteDelegate_Parms;
	memcpy ( &AddOnGetUniqueIdOfPlayerCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnGetUniqueIdOfPlayerCompleteDelegate, &AddOnGetUniqueIdOfPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetUniqueIdOfPlayerComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FUniqueNetId            ResultId                       ( CPF_Const | CPF_Parm )

void UOnlineSubsystemPW::OnGetUniqueIdOfPlayerComplete ( unsigned long bSuccess, struct FUniqueNetId ResultId )
{
	static UFunction* pFnOnGetUniqueIdOfPlayerComplete = NULL;

	if ( ! pFnOnGetUniqueIdOfPlayerComplete )
		pFnOnGetUniqueIdOfPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 37319 ];

	UOnlineSubsystemPW_execOnGetUniqueIdOfPlayerComplete_Parms OnGetUniqueIdOfPlayerComplete_Parms;
	OnGetUniqueIdOfPlayerComplete_Parms.bSuccess = bSuccess;
	memcpy ( &OnGetUniqueIdOfPlayerComplete_Parms.ResultId, &ResultId, 0x8 );

	this->ProcessEvent ( pFnOnGetUniqueIdOfPlayerComplete, &OnGetUniqueIdOfPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetUniqueIdOfPlayerByName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::GetUniqueIdOfPlayerByName ( struct FString PlayerName )
{
	static UFunction* pFnGetUniqueIdOfPlayerByName = NULL;

	if ( ! pFnGetUniqueIdOfPlayerByName )
		pFnGetUniqueIdOfPlayerByName = (UFunction*) UObject::GObjObjects()->Data[ 38377 ];

	UOnlineSubsystemPW_execGetUniqueIdOfPlayerByName_Parms GetUniqueIdOfPlayerByName_Parms;
	memcpy ( &GetUniqueIdOfPlayerByName_Parms.PlayerName, &PlayerName, 0xC );

	pFnGetUniqueIdOfPlayerByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUniqueIdOfPlayerByName, &GetUniqueIdOfPlayerByName_Parms, NULL );

	pFnGetUniqueIdOfPlayerByName->FunctionFlags |= 0x400;

	return GetUniqueIdOfPlayerByName_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnPlayerSearchComplete
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnPlayerSearchComplete ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnPlayerSearchComplete = NULL;

	if ( ! pFnClearOnPlayerSearchComplete )
		pFnClearOnPlayerSearchComplete = (UFunction*) UObject::GObjObjects()->Data[ 38374 ];

	UOnlineSubsystemPW_execClearOnPlayerSearchComplete_Parms ClearOnPlayerSearchComplete_Parms;
	memcpy ( &ClearOnPlayerSearchComplete_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnPlayerSearchComplete, &ClearOnPlayerSearchComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnPlayerSearchComplete
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnPlayerSearchComplete ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnPlayerSearchComplete = NULL;

	if ( ! pFnAddOnPlayerSearchComplete )
		pFnAddOnPlayerSearchComplete = (UFunction*) UObject::GObjObjects()->Data[ 38372 ];

	UOnlineSubsystemPW_execAddOnPlayerSearchComplete_Parms AddOnPlayerSearchComplete_Parms;
	memcpy ( &AddOnPlayerSearchComplete_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnPlayerSearchComplete, &AddOnPlayerSearchComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPlayerSearchComplete
// [0x00120000] 
// Parameters infos:
// TArray< struct FString >       ReturnedNames                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnPlayerSearchComplete ( TArray< struct FString > ReturnedNames )
{
	static UFunction* pFnOnPlayerSearchComplete = NULL;

	if ( ! pFnOnPlayerSearchComplete )
		pFnOnPlayerSearchComplete = (UFunction*) UObject::GObjObjects()->Data[ 37316 ];

	UOnlineSubsystemPW_execOnPlayerSearchComplete_Parms OnPlayerSearchComplete_Parms;
	memcpy ( &OnPlayerSearchComplete_Parms.ReturnedNames, &ReturnedNames, 0xC );

	this->ProcessEvent ( pFnOnPlayerSearchComplete, &OnPlayerSearchComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SearchForPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SearchName                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::SearchForPlayer ( struct FString SearchName )
{
	static UFunction* pFnSearchForPlayer = NULL;

	if ( ! pFnSearchForPlayer )
		pFnSearchForPlayer = (UFunction*) UObject::GObjObjects()->Data[ 38367 ];

	UOnlineSubsystemPW_execSearchForPlayer_Parms SearchForPlayer_Parms;
	memcpy ( &SearchForPlayer_Parms.SearchName, &SearchName, 0xC );

	pFnSearchForPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSearchForPlayer, &SearchForPlayer_Parms, NULL );

	pFnSearchForPlayer->FunctionFlags |= 0x400;

	return SearchForPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearClanGameInviteExpiredDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearClanGameInviteExpiredDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearClanGameInviteExpiredDelegate = NULL;

	if ( ! pFnClearClanGameInviteExpiredDelegate )
		pFnClearClanGameInviteExpiredDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38364 ];

	UOnlineSubsystemPW_execClearClanGameInviteExpiredDelegate_Parms ClearClanGameInviteExpiredDelegate_Parms;
	memcpy ( &ClearClanGameInviteExpiredDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearClanGameInviteExpiredDelegate, &ClearClanGameInviteExpiredDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddClanGameInviteExpiredDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddClanGameInviteExpiredDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddClanGameInviteExpiredDelegate = NULL;

	if ( ! pFnAddClanGameInviteExpiredDelegate )
		pFnAddClanGameInviteExpiredDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38362 ];

	UOnlineSubsystemPW_execAddClanGameInviteExpiredDelegate_Parms AddClanGameInviteExpiredDelegate_Parms;
	memcpy ( &AddClanGameInviteExpiredDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddClanGameInviteExpiredDelegate, &AddClanGameInviteExpiredDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanGameInviteExpired
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            InviterId                      ( CPF_Parm )

void UOnlineSubsystemPW::OnClanGameInviteExpired ( struct FUniqueNetId InviterId )
{
	static UFunction* pFnOnClanGameInviteExpired = NULL;

	if ( ! pFnOnClanGameInviteExpired )
		pFnOnClanGameInviteExpired = (UFunction*) UObject::GObjObjects()->Data[ 37313 ];

	UOnlineSubsystemPW_execOnClanGameInviteExpired_Parms OnClanGameInviteExpired_Parms;
	memcpy ( &OnClanGameInviteExpired_Parms.InviterId, &InviterId, 0x8 );

	this->ProcessEvent ( pFnOnClanGameInviteExpired, &OnClanGameInviteExpired_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearClanGameInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearClanGameInviteReceivedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearClanGameInviteReceivedDelegate = NULL;

	if ( ! pFnClearClanGameInviteReceivedDelegate )
		pFnClearClanGameInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38358 ];

	UOnlineSubsystemPW_execClearClanGameInviteReceivedDelegate_Parms ClearClanGameInviteReceivedDelegate_Parms;
	memcpy ( &ClearClanGameInviteReceivedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearClanGameInviteReceivedDelegate, &ClearClanGameInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddClanGameInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddClanGameInviteReceivedDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddClanGameInviteReceivedDelegate = NULL;

	if ( ! pFnAddClanGameInviteReceivedDelegate )
		pFnAddClanGameInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38356 ];

	UOnlineSubsystemPW_execAddClanGameInviteReceivedDelegate_Parms AddClanGameInviteReceivedDelegate_Parms;
	memcpy ( &AddClanGameInviteReceivedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddClanGameInviteReceivedDelegate, &AddClanGameInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanGameInviteReceived
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            InviterId                      ( CPF_Parm )

void UOnlineSubsystemPW::OnClanGameInviteReceived ( struct FUniqueNetId InviterId )
{
	static UFunction* pFnOnClanGameInviteReceived = NULL;

	if ( ! pFnOnClanGameInviteReceived )
		pFnOnClanGameInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 37310 ];

	UOnlineSubsystemPW_execOnClanGameInviteReceived_Parms OnClanGameInviteReceived_Parms;
	memcpy ( &OnClanGameInviteReceived_Parms.InviterId, &InviterId, 0x8 );

	this->ProcessEvent ( pFnOnClanGameInviteReceived, &OnClanGameInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ChangeMemberRank
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned char                  NewRank                        ( CPF_Parm )

bool UOnlineSubsystemPW::ChangeMemberRank ( struct FUniqueNetId PlayerID, unsigned char NewRank )
{
	static UFunction* pFnChangeMemberRank = NULL;

	if ( ! pFnChangeMemberRank )
		pFnChangeMemberRank = (UFunction*) UObject::GObjObjects()->Data[ 38351 ];

	UOnlineSubsystemPW_execChangeMemberRank_Parms ChangeMemberRank_Parms;
	memcpy ( &ChangeMemberRank_Parms.PlayerID, &PlayerID, 0x8 );
	ChangeMemberRank_Parms.NewRank = NewRank;

	pFnChangeMemberRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeMemberRank, &ChangeMemberRank_Parms, NULL );

	pFnChangeMemberRank->FunctionFlags |= 0x400;

	return ChangeMemberRank_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnGetClanInfo
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnGetClanInfo ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnGetClanInfo = NULL;

	if ( ! pFnClearOnGetClanInfo )
		pFnClearOnGetClanInfo = (UFunction*) UObject::GObjObjects()->Data[ 38348 ];

	UOnlineSubsystemPW_execClearOnGetClanInfo_Parms ClearOnGetClanInfo_Parms;
	memcpy ( &ClearOnGetClanInfo_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnGetClanInfo, &ClearOnGetClanInfo_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnGetClanInfo
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnGetClanInfo ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnGetClanInfo = NULL;

	if ( ! pFnAddOnGetClanInfo )
		pFnAddOnGetClanInfo = (UFunction*) UObject::GObjObjects()->Data[ 38346 ];

	UOnlineSubsystemPW_execAddOnGetClanInfo_Parms AddOnGetClanInfo_Parms;
	memcpy ( &AddOnGetClanInfo_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnGetClanInfo, &AddOnGetClanInfo_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetClanInfo
// [0x00120000] 
// Parameters infos:
// struct FString                 ClanInfo                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnGetClanInfo ( struct FString ClanInfo )
{
	static UFunction* pFnOnGetClanInfo = NULL;

	if ( ! pFnOnGetClanInfo )
		pFnOnGetClanInfo = (UFunction*) UObject::GObjObjects()->Data[ 37295 ];

	UOnlineSubsystemPW_execOnGetClanInfo_Parms OnGetClanInfo_Parms;
	memcpy ( &OnGetClanInfo_Parms.ClanInfo, &ClanInfo, 0xC );

	this->ProcessEvent ( pFnOnGetClanInfo, &OnGetClanInfo_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetClanInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ClanTag                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::GetClanInfo ( struct FString ClanTag )
{
	static UFunction* pFnGetClanInfo = NULL;

	if ( ! pFnGetClanInfo )
		pFnGetClanInfo = (UFunction*) UObject::GObjObjects()->Data[ 38342 ];

	UOnlineSubsystemPW_execGetClanInfo_Parms GetClanInfo_Parms;
	memcpy ( &GetClanInfo_Parms.ClanTag, &ClanTag, 0xC );

	pFnGetClanInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetClanInfo, &GetClanInfo_Parms, NULL );

	pFnGetClanInfo->FunctionFlags |= 0x400;

	return GetClanInfo_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnValidateClanInfo
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnValidateClanInfo ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnValidateClanInfo = NULL;

	if ( ! pFnClearOnValidateClanInfo )
		pFnClearOnValidateClanInfo = (UFunction*) UObject::GObjObjects()->Data[ 38339 ];

	UOnlineSubsystemPW_execClearOnValidateClanInfo_Parms ClearOnValidateClanInfo_Parms;
	memcpy ( &ClearOnValidateClanInfo_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnValidateClanInfo, &ClearOnValidateClanInfo_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnValidateClanInfo
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnValidateClanInfo ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnValidateClanInfo = NULL;

	if ( ! pFnAddOnValidateClanInfo )
		pFnAddOnValidateClanInfo = (UFunction*) UObject::GObjObjects()->Data[ 38337 ];

	UOnlineSubsystemPW_execAddOnValidateClanInfo_Parms AddOnValidateClanInfo_Parms;
	memcpy ( &AddOnValidateClanInfo_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnValidateClanInfo, &AddOnValidateClanInfo_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnValidateClanInfo
// [0x00120000] 
// Parameters infos:
// int                            InfoType                       ( CPF_Parm )
// unsigned long                  IsAvail                        ( CPF_Parm )

void UOnlineSubsystemPW::OnValidateClanInfo ( int InfoType, unsigned long IsAvail )
{
	static UFunction* pFnOnValidateClanInfo = NULL;

	if ( ! pFnOnValidateClanInfo )
		pFnOnValidateClanInfo = (UFunction*) UObject::GObjObjects()->Data[ 37271 ];

	UOnlineSubsystemPW_execOnValidateClanInfo_Parms OnValidateClanInfo_Parms;
	OnValidateClanInfo_Parms.InfoType = InfoType;
	OnValidateClanInfo_Parms.IsAvail = IsAvail;

	this->ProcessEvent ( pFnOnValidateClanInfo, &OnValidateClanInfo_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ValidateClanInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            InfoType                       ( CPF_Parm )
// struct FString                 Info                           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ValidateClanInfo ( int InfoType, struct FString Info )
{
	static UFunction* pFnValidateClanInfo = NULL;

	if ( ! pFnValidateClanInfo )
		pFnValidateClanInfo = (UFunction*) UObject::GObjObjects()->Data[ 38332 ];

	UOnlineSubsystemPW_execValidateClanInfo_Parms ValidateClanInfo_Parms;
	ValidateClanInfo_Parms.InfoType = InfoType;
	memcpy ( &ValidateClanInfo_Parms.Info, &Info, 0xC );

	pFnValidateClanInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnValidateClanInfo, &ValidateClanInfo_Parms, NULL );

	pFnValidateClanInfo->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanMemberUpdate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnClanMemberUpdate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnClanMemberUpdate = NULL;

	if ( ! pFnClearOnClanMemberUpdate )
		pFnClearOnClanMemberUpdate = (UFunction*) UObject::GObjObjects()->Data[ 38329 ];

	UOnlineSubsystemPW_execClearOnClanMemberUpdate_Parms ClearOnClanMemberUpdate_Parms;
	memcpy ( &ClearOnClanMemberUpdate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnClanMemberUpdate, &ClearOnClanMemberUpdate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanMemberUpdate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnClanMemberUpdate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnClanMemberUpdate = NULL;

	if ( ! pFnAddOnClanMemberUpdate )
		pFnAddOnClanMemberUpdate = (UFunction*) UObject::GObjObjects()->Data[ 38327 ];

	UOnlineSubsystemPW_execAddOnClanMemberUpdate_Parms AddOnClanMemberUpdate_Parms;
	memcpy ( &AddOnClanMemberUpdate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnClanMemberUpdate, &AddOnClanMemberUpdate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanMemberUpdate
// [0x00120000] 
// Parameters infos:
// unsigned char                  UpdateType                     ( CPF_Parm )
// struct FString                 MemberInfo                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnClanMemberUpdate ( unsigned char UpdateType, struct FString MemberInfo )
{
	static UFunction* pFnOnClanMemberUpdate = NULL;

	if ( ! pFnOnClanMemberUpdate )
		pFnOnClanMemberUpdate = (UFunction*) UObject::GObjObjects()->Data[ 37277 ];

	UOnlineSubsystemPW_execOnClanMemberUpdate_Parms OnClanMemberUpdate_Parms;
	OnClanMemberUpdate_Parms.UpdateType = UpdateType;
	memcpy ( &OnClanMemberUpdate_Parms.MemberInfo, &MemberInfo, 0xC );

	this->ProcessEvent ( pFnOnClanMemberUpdate, &OnClanMemberUpdate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnGetClanTag
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnGetClanTag ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnGetClanTag = NULL;

	if ( ! pFnClearOnGetClanTag )
		pFnClearOnGetClanTag = (UFunction*) UObject::GObjObjects()->Data[ 38322 ];

	UOnlineSubsystemPW_execClearOnGetClanTag_Parms ClearOnGetClanTag_Parms;
	memcpy ( &ClearOnGetClanTag_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnGetClanTag, &ClearOnGetClanTag_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnGetClanTag
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnGetClanTag ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnGetClanTag = NULL;

	if ( ! pFnAddOnGetClanTag )
		pFnAddOnGetClanTag = (UFunction*) UObject::GObjObjects()->Data[ 38320 ];

	UOnlineSubsystemPW_execAddOnGetClanTag_Parms AddOnGetClanTag_Parms;
	memcpy ( &AddOnGetClanTag_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnGetClanTag, &AddOnGetClanTag_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetClanTag
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 ClanTag                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnGetClanTag ( struct FUniqueNetId PlayerID, struct FString ClanTag )
{
	static UFunction* pFnOnGetClanTag = NULL;

	if ( ! pFnOnGetClanTag )
		pFnOnGetClanTag = (UFunction*) UObject::GObjObjects()->Data[ 37274 ];

	UOnlineSubsystemPW_execOnGetClanTag_Parms OnGetClanTag_Parms;
	memcpy ( &OnGetClanTag_Parms.PlayerID, &PlayerID, 0x8 );
	memcpy ( &OnGetClanTag_Parms.ClanTag, &ClanTag, 0xC );

	this->ProcessEvent ( pFnOnGetClanTag, &OnGetClanTag_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetClanTag
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

void UOnlineSubsystemPW::GetClanTag ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnGetClanTag = NULL;

	if ( ! pFnGetClanTag )
		pFnGetClanTag = (UFunction*) UObject::GObjObjects()->Data[ 38316 ];

	UOnlineSubsystemPW_execGetClanTag_Parms GetClanTag_Parms;
	memcpy ( &GetClanTag_Parms.PlayerID, &PlayerID, 0x8 );

	pFnGetClanTag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetClanTag, &GetClanTag_Parms, NULL );

	pFnGetClanTag->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetMyClanTag
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemPW::GetMyClanTag ( )
{
	static UFunction* pFnGetMyClanTag = NULL;

	if ( ! pFnGetMyClanTag )
		pFnGetMyClanTag = (UFunction*) UObject::GObjObjects()->Data[ 38315 ];

	UOnlineSubsystemPW_execGetMyClanTag_Parms GetMyClanTag_Parms;

	pFnGetMyClanTag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMyClanTag, &GetMyClanTag_Parms, NULL );

	pFnGetMyClanTag->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnSetClanMOTD
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnSetClanMOTD ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnSetClanMOTD = NULL;

	if ( ! pFnClearOnSetClanMOTD )
		pFnClearOnSetClanMOTD = (UFunction*) UObject::GObjObjects()->Data[ 38312 ];

	UOnlineSubsystemPW_execClearOnSetClanMOTD_Parms ClearOnSetClanMOTD_Parms;
	memcpy ( &ClearOnSetClanMOTD_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnSetClanMOTD, &ClearOnSetClanMOTD_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnSetClanMOTD
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnSetClanMOTD ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnSetClanMOTD = NULL;

	if ( ! pFnAddOnSetClanMOTD )
		pFnAddOnSetClanMOTD = (UFunction*) UObject::GObjObjects()->Data[ 38310 ];

	UOnlineSubsystemPW_execAddOnSetClanMOTD_Parms AddOnSetClanMOTD_Parms;
	memcpy ( &AddOnSetClanMOTD_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnSetClanMOTD, &AddOnSetClanMOTD_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnSetClanMOTD
// [0x00120000] 
// Parameters infos:
// unsigned long                  Success                        ( CPF_Parm )
// struct FString                 NewMOTD                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnSetClanMOTD ( unsigned long Success, struct FString NewMOTD )
{
	static UFunction* pFnOnSetClanMOTD = NULL;

	if ( ! pFnOnSetClanMOTD )
		pFnOnSetClanMOTD = (UFunction*) UObject::GObjObjects()->Data[ 37280 ];

	UOnlineSubsystemPW_execOnSetClanMOTD_Parms OnSetClanMOTD_Parms;
	OnSetClanMOTD_Parms.Success = Success;
	memcpy ( &OnSetClanMOTD_Parms.NewMOTD, &NewMOTD, 0xC );

	this->ProcessEvent ( pFnOnSetClanMOTD, &OnSetClanMOTD_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetClanMOTD
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::SetClanMOTD ( struct FString Message )
{
	static UFunction* pFnSetClanMOTD = NULL;

	if ( ! pFnSetClanMOTD )
		pFnSetClanMOTD = (UFunction*) UObject::GObjObjects()->Data[ 38306 ];

	UOnlineSubsystemPW_execSetClanMOTD_Parms SetClanMOTD_Parms;
	memcpy ( &SetClanMOTD_Parms.Message, &Message, 0xC );

	pFnSetClanMOTD->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetClanMOTD, &SetClanMOTD_Parms, NULL );

	pFnSetClanMOTD->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanQuit
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnClanQuit ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnClanQuit = NULL;

	if ( ! pFnClearOnClanQuit )
		pFnClearOnClanQuit = (UFunction*) UObject::GObjObjects()->Data[ 38303 ];

	UOnlineSubsystemPW_execClearOnClanQuit_Parms ClearOnClanQuit_Parms;
	memcpy ( &ClearOnClanQuit_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnClanQuit, &ClearOnClanQuit_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanQuit
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnClanQuit ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnClanQuit = NULL;

	if ( ! pFnAddOnClanQuit )
		pFnAddOnClanQuit = (UFunction*) UObject::GObjObjects()->Data[ 38301 ];

	UOnlineSubsystemPW_execAddOnClanQuit_Parms AddOnClanQuit_Parms;
	memcpy ( &AddOnClanQuit_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnClanQuit, &AddOnClanQuit_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanQuit
// [0x00120000] 
// Parameters infos:
// unsigned long                  Success                        ( CPF_Parm )

void UOnlineSubsystemPW::OnClanQuit ( unsigned long Success )
{
	static UFunction* pFnOnClanQuit = NULL;

	if ( ! pFnOnClanQuit )
		pFnOnClanQuit = (UFunction*) UObject::GObjObjects()->Data[ 37292 ];

	UOnlineSubsystemPW_execOnClanQuit_Parms OnClanQuit_Parms;
	OnClanQuit_Parms.Success = Success;

	this->ProcessEvent ( pFnOnClanQuit, &OnClanQuit_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.QuitClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemPW::QuitClan ( )
{
	static UFunction* pFnQuitClan = NULL;

	if ( ! pFnQuitClan )
		pFnQuitClan = (UFunction*) UObject::GObjObjects()->Data[ 38299 ];

	UOnlineSubsystemPW_execQuitClan_Parms QuitClan_Parms;

	pFnQuitClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQuitClan, &QuitClan_Parms, NULL );

	pFnQuitClan->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanJoin
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnClanJoin ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnClanJoin = NULL;

	if ( ! pFnClearOnClanJoin )
		pFnClearOnClanJoin = (UFunction*) UObject::GObjObjects()->Data[ 38296 ];

	UOnlineSubsystemPW_execClearOnClanJoin_Parms ClearOnClanJoin_Parms;
	memcpy ( &ClearOnClanJoin_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnClanJoin, &ClearOnClanJoin_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanJoin
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnClanJoin ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnClanJoin = NULL;

	if ( ! pFnAddOnClanJoin )
		pFnAddOnClanJoin = (UFunction*) UObject::GObjObjects()->Data[ 38294 ];

	UOnlineSubsystemPW_execAddOnClanJoin_Parms AddOnClanJoin_Parms;
	memcpy ( &AddOnClanJoin_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnClanJoin, &AddOnClanJoin_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanJoin
// [0x00124000] 
// Parameters infos:
// unsigned long                  Success                        ( CPF_Parm )
// struct FString                 ClanTag                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnClanJoin ( unsigned long Success, struct FString ClanTag )
{
	static UFunction* pFnOnClanJoin = NULL;

	if ( ! pFnOnClanJoin )
		pFnOnClanJoin = (UFunction*) UObject::GObjObjects()->Data[ 37289 ];

	UOnlineSubsystemPW_execOnClanJoin_Parms OnClanJoin_Parms;
	OnClanJoin_Parms.Success = Success;
	memcpy ( &OnClanJoin_Parms.ClanTag, &ClanTag, 0xC );

	this->ProcessEvent ( pFnOnClanJoin, &OnClanJoin_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ClanID                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::JoinClan ( struct FString ClanID )
{
	static UFunction* pFnJoinClan = NULL;

	if ( ! pFnJoinClan )
		pFnJoinClan = (UFunction*) UObject::GObjObjects()->Data[ 38290 ];

	UOnlineSubsystemPW_execJoinClan_Parms JoinClan_Parms;
	memcpy ( &JoinClan_Parms.ClanID, &ClanID, 0xC );

	pFnJoinClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinClan, &JoinClan_Parms, NULL );

	pFnJoinClan->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanKickResponse
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnClanKickResponse ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnClanKickResponse = NULL;

	if ( ! pFnClearOnClanKickResponse )
		pFnClearOnClanKickResponse = (UFunction*) UObject::GObjObjects()->Data[ 38287 ];

	UOnlineSubsystemPW_execClearOnClanKickResponse_Parms ClearOnClanKickResponse_Parms;
	memcpy ( &ClearOnClanKickResponse_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnClanKickResponse, &ClearOnClanKickResponse_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanKickResponse
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnClanKickResponse ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnClanKickResponse = NULL;

	if ( ! pFnAddOnClanKickResponse )
		pFnAddOnClanKickResponse = (UFunction*) UObject::GObjObjects()->Data[ 38285 ];

	UOnlineSubsystemPW_execAddOnClanKickResponse_Parms AddOnClanKickResponse_Parms;
	memcpy ( &AddOnClanKickResponse_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnClanKickResponse, &AddOnClanKickResponse_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanKickResponse
// [0x00120000] 
// Parameters infos:
// unsigned long                  Success                        ( CPF_Parm )
// unsigned char                  FailReason                     ( CPF_Parm )

void UOnlineSubsystemPW::OnClanKickResponse ( unsigned long Success, unsigned char FailReason )
{
	static UFunction* pFnOnClanKickResponse = NULL;

	if ( ! pFnOnClanKickResponse )
		pFnOnClanKickResponse = (UFunction*) UObject::GObjObjects()->Data[ 37307 ];

	UOnlineSubsystemPW_execOnClanKickResponse_Parms OnClanKickResponse_Parms;
	OnClanKickResponse_Parms.Success = Success;
	OnClanKickResponse_Parms.FailReason = FailReason;

	this->ProcessEvent ( pFnOnClanKickResponse, &OnClanKickResponse_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanKick
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnClanKick ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnClanKick = NULL;

	if ( ! pFnClearOnClanKick )
		pFnClearOnClanKick = (UFunction*) UObject::GObjObjects()->Data[ 38280 ];

	UOnlineSubsystemPW_execClearOnClanKick_Parms ClearOnClanKick_Parms;
	memcpy ( &ClearOnClanKick_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnClanKick, &ClearOnClanKick_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanKick
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnClanKick ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnClanKick = NULL;

	if ( ! pFnAddOnClanKick )
		pFnAddOnClanKick = (UFunction*) UObject::GObjObjects()->Data[ 38278 ];

	UOnlineSubsystemPW_execAddOnClanKick_Parms AddOnClanKick_Parms;
	memcpy ( &AddOnClanKick_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnClanKick, &AddOnClanKick_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanKick
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnClanKick ( )
{
	static UFunction* pFnOnClanKick = NULL;

	if ( ! pFnOnClanKick )
		pFnOnClanKick = (UFunction*) UObject::GObjObjects()->Data[ 37304 ];

	UOnlineSubsystemPW_execOnClanKick_Parms OnClanKick_Parms;

	this->ProcessEvent ( pFnOnClanKick, &OnClanKick_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.KickFromClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

void UOnlineSubsystemPW::KickFromClan ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnKickFromClan = NULL;

	if ( ! pFnKickFromClan )
		pFnKickFromClan = (UFunction*) UObject::GObjObjects()->Data[ 38276 ];

	UOnlineSubsystemPW_execKickFromClan_Parms KickFromClan_Parms;
	memcpy ( &KickFromClan_Parms.PlayerID, &PlayerID, 0x8 );

	pFnKickFromClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKickFromClan, &KickFromClan_Parms, NULL );

	pFnKickFromClan->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanInviteResponse
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnClanInviteResponse ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnClanInviteResponse = NULL;

	if ( ! pFnClearOnClanInviteResponse )
		pFnClearOnClanInviteResponse = (UFunction*) UObject::GObjObjects()->Data[ 38273 ];

	UOnlineSubsystemPW_execClearOnClanInviteResponse_Parms ClearOnClanInviteResponse_Parms;
	memcpy ( &ClearOnClanInviteResponse_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnClanInviteResponse, &ClearOnClanInviteResponse_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanInviteResponse
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnClanInviteResponse ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnClanInviteResponse = NULL;

	if ( ! pFnAddOnClanInviteResponse )
		pFnAddOnClanInviteResponse = (UFunction*) UObject::GObjObjects()->Data[ 38271 ];

	UOnlineSubsystemPW_execAddOnClanInviteResponse_Parms AddOnClanInviteResponse_Parms;
	memcpy ( &AddOnClanInviteResponse_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnClanInviteResponse, &AddOnClanInviteResponse_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanInviteResponse
// [0x00120000] 
// Parameters infos:
// unsigned long                  Success                        ( CPF_Parm )
// unsigned char                  FailReason                     ( CPF_Parm )

void UOnlineSubsystemPW::OnClanInviteResponse ( unsigned long Success, unsigned char FailReason )
{
	static UFunction* pFnOnClanInviteResponse = NULL;

	if ( ! pFnOnClanInviteResponse )
		pFnOnClanInviteResponse = (UFunction*) UObject::GObjObjects()->Data[ 37301 ];

	UOnlineSubsystemPW_execOnClanInviteResponse_Parms OnClanInviteResponse_Parms;
	OnClanInviteResponse_Parms.Success = Success;
	OnClanInviteResponse_Parms.FailReason = FailReason;

	this->ProcessEvent ( pFnOnClanInviteResponse, &OnClanInviteResponse_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanInvite
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnClanInvite ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnClanInvite = NULL;

	if ( ! pFnClearOnClanInvite )
		pFnClearOnClanInvite = (UFunction*) UObject::GObjObjects()->Data[ 38266 ];

	UOnlineSubsystemPW_execClearOnClanInvite_Parms ClearOnClanInvite_Parms;
	memcpy ( &ClearOnClanInvite_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnClanInvite, &ClearOnClanInvite_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanInvite
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnClanInvite ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnClanInvite = NULL;

	if ( ! pFnAddOnClanInvite )
		pFnAddOnClanInvite = (UFunction*) UObject::GObjObjects()->Data[ 38264 ];

	UOnlineSubsystemPW_execAddOnClanInvite_Parms AddOnClanInvite_Parms;
	memcpy ( &AddOnClanInvite_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnClanInvite, &AddOnClanInvite_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanInvite
// [0x00120000] 
// Parameters infos:
// struct FString                 ClanName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ClanTag                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Founded                        ( CPF_Parm | CPF_NeedCtorLink )
// int                            MemberCount                    ( CPF_Parm )
// struct FString                 WhoInvited                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ClanID                         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnClanInvite ( struct FString ClanName, struct FString ClanTag, struct FString Founded, int MemberCount, struct FString WhoInvited, struct FString ClanID )
{
	static UFunction* pFnOnClanInvite = NULL;

	if ( ! pFnOnClanInvite )
		pFnOnClanInvite = (UFunction*) UObject::GObjObjects()->Data[ 37298 ];

	UOnlineSubsystemPW_execOnClanInvite_Parms OnClanInvite_Parms;
	memcpy ( &OnClanInvite_Parms.ClanName, &ClanName, 0xC );
	memcpy ( &OnClanInvite_Parms.ClanTag, &ClanTag, 0xC );
	memcpy ( &OnClanInvite_Parms.Founded, &Founded, 0xC );
	OnClanInvite_Parms.MemberCount = MemberCount;
	memcpy ( &OnClanInvite_Parms.WhoInvited, &WhoInvited, 0xC );
	memcpy ( &OnClanInvite_Parms.ClanID, &ClanID, 0xC );

	this->ProcessEvent ( pFnOnClanInvite, &OnClanInvite_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.InviteToClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

void UOnlineSubsystemPW::InviteToClan ( struct FString PlayerName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnInviteToClan = NULL;

	if ( ! pFnInviteToClan )
		pFnInviteToClan = (UFunction*) UObject::GObjObjects()->Data[ 38255 ];

	UOnlineSubsystemPW_execInviteToClan_Parms InviteToClan_Parms;
	memcpy ( &InviteToClan_Parms.PlayerName, &PlayerName, 0xC );
	memcpy ( &InviteToClan_Parms.PlayerID, &PlayerID, 0x8 );

	pFnInviteToClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInviteToClan, &InviteToClan_Parms, NULL );

	pFnInviteToClan->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanDisband
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnClanDisband ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnClanDisband = NULL;

	if ( ! pFnClearOnClanDisband )
		pFnClearOnClanDisband = (UFunction*) UObject::GObjObjects()->Data[ 38252 ];

	UOnlineSubsystemPW_execClearOnClanDisband_Parms ClearOnClanDisband_Parms;
	memcpy ( &ClearOnClanDisband_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnClanDisband, &ClearOnClanDisband_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanDisband
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnClanDisband ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnClanDisband = NULL;

	if ( ! pFnAddOnClanDisband )
		pFnAddOnClanDisband = (UFunction*) UObject::GObjObjects()->Data[ 38250 ];

	UOnlineSubsystemPW_execAddOnClanDisband_Parms AddOnClanDisband_Parms;
	memcpy ( &AddOnClanDisband_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnClanDisband, &AddOnClanDisband_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanDisband
// [0x00120000] 
// Parameters infos:
// unsigned long                  Success                        ( CPF_Parm )

void UOnlineSubsystemPW::OnClanDisband ( unsigned long Success )
{
	static UFunction* pFnOnClanDisband = NULL;

	if ( ! pFnOnClanDisband )
		pFnOnClanDisband = (UFunction*) UObject::GObjObjects()->Data[ 37286 ];

	UOnlineSubsystemPW_execOnClanDisband_Parms OnClanDisband_Parms;
	OnClanDisband_Parms.Success = Success;

	this->ProcessEvent ( pFnOnClanDisband, &OnClanDisband_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.DisbandClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemPW::DisbandClan ( )
{
	static UFunction* pFnDisbandClan = NULL;

	if ( ! pFnDisbandClan )
		pFnDisbandClan = (UFunction*) UObject::GObjObjects()->Data[ 38248 ];

	UOnlineSubsystemPW_execDisbandClan_Parms DisbandClan_Parms;

	pFnDisbandClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisbandClan, &DisbandClan_Parms, NULL );

	pFnDisbandClan->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnClanCreate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnClanCreate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnClanCreate = NULL;

	if ( ! pFnClearOnClanCreate )
		pFnClearOnClanCreate = (UFunction*) UObject::GObjObjects()->Data[ 38245 ];

	UOnlineSubsystemPW_execClearOnClanCreate_Parms ClearOnClanCreate_Parms;
	memcpy ( &ClearOnClanCreate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnClanCreate, &ClearOnClanCreate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnClanCreate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnClanCreate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnClanCreate = NULL;

	if ( ! pFnAddOnClanCreate )
		pFnAddOnClanCreate = (UFunction*) UObject::GObjObjects()->Data[ 38243 ];

	UOnlineSubsystemPW_execAddOnClanCreate_Parms AddOnClanCreate_Parms;
	memcpy ( &AddOnClanCreate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnClanCreate, &AddOnClanCreate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnClanCreate
// [0x00120000] 
// Parameters infos:
// unsigned long                  Success                        ( CPF_Parm )

void UOnlineSubsystemPW::OnClanCreate ( unsigned long Success )
{
	static UFunction* pFnOnClanCreate = NULL;

	if ( ! pFnOnClanCreate )
		pFnOnClanCreate = (UFunction*) UObject::GObjObjects()->Data[ 37283 ];

	UOnlineSubsystemPW_execOnClanCreate_Parms OnClanCreate_Parms;
	OnClanCreate_Parms.Success = Success;

	this->ProcessEvent ( pFnOnClanCreate, &OnClanCreate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnGetChatList
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnGetChatList ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnGetChatList = NULL;

	if ( ! pFnClearOnGetChatList )
		pFnClearOnGetChatList = (UFunction*) UObject::GObjObjects()->Data[ 38239 ];

	UOnlineSubsystemPW_execClearOnGetChatList_Parms ClearOnGetChatList_Parms;
	memcpy ( &ClearOnGetChatList_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnGetChatList, &ClearOnGetChatList_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnGetChatList
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnGetChatList ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnGetChatList = NULL;

	if ( ! pFnAddOnGetChatList )
		pFnAddOnGetChatList = (UFunction*) UObject::GObjObjects()->Data[ 38237 ];

	UOnlineSubsystemPW_execAddOnGetChatList_Parms AddOnGetChatList_Parms;
	memcpy ( &AddOnGetChatList_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnGetChatList, &AddOnGetChatList_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnGetChatList
// [0x00120000] 
// Parameters infos:
// struct FString                 ChatList                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnGetChatList ( struct FString ChatList )
{
	static UFunction* pFnOnGetChatList = NULL;

	if ( ! pFnOnGetChatList )
		pFnOnGetChatList = (UFunction*) UObject::GObjObjects()->Data[ 37262 ];

	UOnlineSubsystemPW_execOnGetChatList_Parms OnGetChatList_Parms;
	memcpy ( &OnGetChatList_Parms.ChatList, &ChatList, 0xC );

	this->ProcessEvent ( pFnOnGetChatList, &OnGetChatList_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetChatList
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemPW::GetChatList ( )
{
	static UFunction* pFnGetChatList = NULL;

	if ( ! pFnGetChatList )
		pFnGetChatList = (UFunction*) UObject::GObjObjects()->Data[ 38235 ];

	UOnlineSubsystemPW_execGetChatList_Parms GetChatList_Parms;

	pFnGetChatList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetChatList, &GetChatList_Parms, NULL );

	pFnGetChatList->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearChatChannelDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearChatChannelDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearChatChannelDelegate = NULL;

	if ( ! pFnClearChatChannelDelegate )
		pFnClearChatChannelDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38232 ];

	UOnlineSubsystemPW_execClearChatChannelDelegate_Parms ClearChatChannelDelegate_Parms;
	memcpy ( &ClearChatChannelDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearChatChannelDelegate, &ClearChatChannelDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddChatChannelDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddChatChannelDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddChatChannelDelegate = NULL;

	if ( ! pFnAddChatChannelDelegate )
		pFnAddChatChannelDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38230 ];

	UOnlineSubsystemPW_execAddChatChannelDelegate_Parms AddChatChannelDelegate_Parms;
	memcpy ( &AddChatChannelDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddChatChannelDelegate, &AddChatChannelDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnChatChannelChange
// [0x00120000] 
// Parameters infos:
// int                            ChannelID                      ( CPF_Parm )
// struct FString                 ChannelName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnChatChannelChange ( int ChannelID, struct FString ChannelName )
{
	static UFunction* pFnOnChatChannelChange = NULL;

	if ( ! pFnOnChatChannelChange )
		pFnOnChatChannelChange = (UFunction*) UObject::GObjObjects()->Data[ 37259 ];

	UOnlineSubsystemPW_execOnChatChannelChange_Parms OnChatChannelChange_Parms;
	OnChatChannelChange_Parms.ChannelID = ChannelID;
	memcpy ( &OnChatChannelChange_Parms.ChannelName, &ChannelName, 0xC );

	this->ProcessEvent ( pFnOnChatChannelChange, &OnChatChannelChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.LeaveChatChannel
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Channel                        ( CPF_Parm )

void UOnlineSubsystemPW::LeaveChatChannel ( int Channel )
{
	static UFunction* pFnLeaveChatChannel = NULL;

	if ( ! pFnLeaveChatChannel )
		pFnLeaveChatChannel = (UFunction*) UObject::GObjObjects()->Data[ 38226 ];

	UOnlineSubsystemPW_execLeaveChatChannel_Parms LeaveChatChannel_Parms;
	LeaveChatChannel_Parms.Channel = Channel;

	pFnLeaveChatChannel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLeaveChatChannel, &LeaveChatChannel_Parms, NULL );

	pFnLeaveChatChannel->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinChatChannelByID
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ChannelID                      ( CPF_Parm )

void UOnlineSubsystemPW::JoinChatChannelByID ( int ChannelID )
{
	static UFunction* pFnJoinChatChannelByID = NULL;

	if ( ! pFnJoinChatChannelByID )
		pFnJoinChatChannelByID = (UFunction*) UObject::GObjObjects()->Data[ 38224 ];

	UOnlineSubsystemPW_execJoinChatChannelByID_Parms JoinChatChannelByID_Parms;
	JoinChatChannelByID_Parms.ChannelID = ChannelID;

	pFnJoinChatChannelByID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinChatChannelByID, &JoinChatChannelByID_Parms, NULL );

	pFnJoinChatChannelByID->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.JoinChatChannelByName
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::JoinChatChannelByName ( struct FString Channel )
{
	static UFunction* pFnJoinChatChannelByName = NULL;

	if ( ! pFnJoinChatChannelByName )
		pFnJoinChatChannelByName = (UFunction*) UObject::GObjObjects()->Data[ 38222 ];

	UOnlineSubsystemPW_execJoinChatChannelByName_Parms JoinChatChannelByName_Parms;
	memcpy ( &JoinChatChannelByName_Parms.Channel, &Channel, 0xC );

	pFnJoinChatChannelByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinChatChannelByName, &JoinChatChannelByName_Parms, NULL );

	pFnJoinChatChannelByName->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnReceiveWhisperDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnReceiveWhisperDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnReceiveWhisperDelegate = NULL;

	if ( ! pFnClearOnReceiveWhisperDelegate )
		pFnClearOnReceiveWhisperDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38219 ];

	UOnlineSubsystemPW_execClearOnReceiveWhisperDelegate_Parms ClearOnReceiveWhisperDelegate_Parms;
	memcpy ( &ClearOnReceiveWhisperDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnReceiveWhisperDelegate, &ClearOnReceiveWhisperDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnReceiveWhisperDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnReceiveWhisperDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnReceiveWhisperDelegate = NULL;

	if ( ! pFnAddOnReceiveWhisperDelegate )
		pFnAddOnReceiveWhisperDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38217 ];

	UOnlineSubsystemPW_execAddOnReceiveWhisperDelegate_Parms AddOnReceiveWhisperDelegate_Parms;
	memcpy ( &AddOnReceiveWhisperDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnReceiveWhisperDelegate, &AddOnReceiveWhisperDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReceiveWhisper
// [0x00120000] 
// Parameters infos:
// unsigned long                  Success                        ( CPF_Parm )
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnReceiveWhisper ( unsigned long Success, struct FString PlayerName, struct FString Message )
{
	static UFunction* pFnOnReceiveWhisper = NULL;

	if ( ! pFnOnReceiveWhisper )
		pFnOnReceiveWhisper = (UFunction*) UObject::GObjObjects()->Data[ 37250 ];

	UOnlineSubsystemPW_execOnReceiveWhisper_Parms OnReceiveWhisper_Parms;
	OnReceiveWhisper_Parms.Success = Success;
	memcpy ( &OnReceiveWhisper_Parms.PlayerName, &PlayerName, 0xC );
	memcpy ( &OnReceiveWhisper_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnReceiveWhisper, &OnReceiveWhisper_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendWhisper
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::SendWhisper ( struct FString Channel, struct FString Message )
{
	static UFunction* pFnSendWhisper = NULL;

	if ( ! pFnSendWhisper )
		pFnSendWhisper = (UFunction*) UObject::GObjObjects()->Data[ 38211 ];

	UOnlineSubsystemPW_execSendWhisper_Parms SendWhisper_Parms;
	memcpy ( &SendWhisper_Parms.Channel, &Channel, 0xC );
	memcpy ( &SendWhisper_Parms.Message, &Message, 0xC );

	pFnSendWhisper->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendWhisper, &SendWhisper_Parms, NULL );

	pFnSendWhisper->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnReceiveAdminMessageDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnReceiveAdminMessageDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnReceiveAdminMessageDelegate = NULL;

	if ( ! pFnClearOnReceiveAdminMessageDelegate )
		pFnClearOnReceiveAdminMessageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38208 ];

	UOnlineSubsystemPW_execClearOnReceiveAdminMessageDelegate_Parms ClearOnReceiveAdminMessageDelegate_Parms;
	memcpy ( &ClearOnReceiveAdminMessageDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnReceiveAdminMessageDelegate, &ClearOnReceiveAdminMessageDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnReceiveAdminMessageDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnReceiveAdminMessageDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnReceiveAdminMessageDelegate = NULL;

	if ( ! pFnAddOnReceiveAdminMessageDelegate )
		pFnAddOnReceiveAdminMessageDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38206 ];

	UOnlineSubsystemPW_execAddOnReceiveAdminMessageDelegate_Parms AddOnReceiveAdminMessageDelegate_Parms;
	memcpy ( &AddOnReceiveAdminMessageDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnReceiveAdminMessageDelegate, &AddOnReceiveAdminMessageDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReceiveAdminMessage
// [0x00120000] 
// Parameters infos:
// struct FString                 Line1                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Line2                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Line3                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  IsMajorBroadcast               ( CPF_Parm )

void UOnlineSubsystemPW::OnReceiveAdminMessage ( struct FString Line1, struct FString Line2, struct FString Line3, unsigned long IsMajorBroadcast )
{
	static UFunction* pFnOnReceiveAdminMessage = NULL;

	if ( ! pFnOnReceiveAdminMessage )
		pFnOnReceiveAdminMessage = (UFunction*) UObject::GObjObjects()->Data[ 37256 ];

	UOnlineSubsystemPW_execOnReceiveAdminMessage_Parms OnReceiveAdminMessage_Parms;
	memcpy ( &OnReceiveAdminMessage_Parms.Line1, &Line1, 0xC );
	memcpy ( &OnReceiveAdminMessage_Parms.Line2, &Line2, 0xC );
	memcpy ( &OnReceiveAdminMessage_Parms.Line3, &Line3, 0xC );
	OnReceiveAdminMessage_Parms.IsMajorBroadcast = IsMajorBroadcast;

	this->ProcessEvent ( pFnOnReceiveAdminMessage, &OnReceiveAdminMessage_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendAdminMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::SendAdminMessage ( struct FString Message )
{
	static UFunction* pFnSendAdminMessage = NULL;

	if ( ! pFnSendAdminMessage )
		pFnSendAdminMessage = (UFunction*) UObject::GObjObjects()->Data[ 38200 ];

	UOnlineSubsystemPW_execSendAdminMessage_Parms SendAdminMessage_Parms;
	memcpy ( &SendAdminMessage_Parms.Message, &Message, 0xC );

	pFnSendAdminMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendAdminMessage, &SendAdminMessage_Parms, NULL );

	pFnSendAdminMessage->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearOnReceiveChatDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearOnReceiveChatDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearOnReceiveChatDelegate = NULL;

	if ( ! pFnClearOnReceiveChatDelegate )
		pFnClearOnReceiveChatDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38197 ];

	UOnlineSubsystemPW_execClearOnReceiveChatDelegate_Parms ClearOnReceiveChatDelegate_Parms;
	memcpy ( &ClearOnReceiveChatDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnReceiveChatDelegate, &ClearOnReceiveChatDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddOnReceiveChatDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddOnReceiveChatDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddOnReceiveChatDelegate = NULL;

	if ( ! pFnAddOnReceiveChatDelegate )
		pFnAddOnReceiveChatDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38195 ];

	UOnlineSubsystemPW_execAddOnReceiveChatDelegate_Parms AddOnReceiveChatDelegate_Parms;
	memcpy ( &AddOnReceiveChatDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnReceiveChatDelegate, &AddOnReceiveChatDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReceiveChat
// [0x00120000] 
// Parameters infos:
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Messaage                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::OnReceiveChat ( struct FString Channel, struct FString PlayerName, struct FString Messaage )
{
	static UFunction* pFnOnReceiveChat = NULL;

	if ( ! pFnOnReceiveChat )
		pFnOnReceiveChat = (UFunction*) UObject::GObjObjects()->Data[ 37253 ];

	UOnlineSubsystemPW_execOnReceiveChat_Parms OnReceiveChat_Parms;
	memcpy ( &OnReceiveChat_Parms.Channel, &Channel, 0xC );
	memcpy ( &OnReceiveChat_Parms.PlayerName, &PlayerName, 0xC );
	memcpy ( &OnReceiveChat_Parms.Messaage, &Messaage, 0xC );

	this->ProcessEvent ( pFnOnReceiveChat, &OnReceiveChat_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendChat
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::SendChat ( struct FString Channel, struct FString Message )
{
	static UFunction* pFnSendChat = NULL;

	if ( ! pFnSendChat )
		pFnSendChat = (UFunction*) UObject::GObjObjects()->Data[ 38189 ];

	UOnlineSubsystemPW_execSendChat_Parms SendChat_Parms;
	memcpy ( &SendChat_Parms.Channel, &Channel, 0xC );
	memcpy ( &SendChat_Parms.Message, &Message, 0xC );

	pFnSendChat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendChat, &SendChat_Parms, NULL );

	pFnSendChat->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SendMessageToFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->Data[ 38184 ];

	UOnlineSubsystemPW_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendMessageToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendMessageToFriend_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38181 ];

	UOnlineSubsystemPW_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WritePlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 38176 ];

	UOnlineSubsystemPW_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerStorage
// [0x00020002] 
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemPW::GetPlayerStorage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 38173 ];

	UOnlineSubsystemPW_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38170 ];

	UOnlineSubsystemPW_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38167 ];

	UOnlineSubsystemPW_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 37631 ];

	UOnlineSubsystemPW_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 38160 ];

	UOnlineSubsystemPW_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38157 ];

	UOnlineSubsystemPW_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemPW::ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->Data[ 38152 ];

	UOnlineSubsystemPW_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x8 );
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38149 ];

	UOnlineSubsystemPW_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->Data[ 37633 ];

	UOnlineSubsystemPW_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy ( &OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x8 );
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38144 ];

	UOnlineSubsystemPW_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 37635 ];

	UOnlineSubsystemPW_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetKeyboardInputResults
// [0x00420000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemPW::GetKeyboardInputResults ( unsigned char* bWasCanceled )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->Data[ 38139 ];

	UOnlineSubsystemPW_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );

	if ( bWasCanceled )
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38137 ];

	UOnlineSubsystemPW_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy ( &ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38135 ];

	UOnlineSubsystemPW_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy ( &AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnKeyboardInputComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->Data[ 37637 ];

	UOnlineSubsystemPW_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowKeyboardUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsGamerTag                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bIsGamerTag, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 38124 ];

	UOnlineSubsystemPW_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.TitleText, &TitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0xC );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bIsGamerTag = bIsGamerTag;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0xC );
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetOnlineStatus
// [0x00420000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            StatusID                       ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > LocalizedStringSettings        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > Properties                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::SetOnlineStatus ( unsigned char LocalUserNum, int StatusID, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->Data[ 38117 ];

	UOnlineSubsystemPW_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	SetOnlineStatus_Parms.StatusID = StatusID;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );

	if ( LocalizedStringSettings )
		memcpy ( LocalizedStringSettings, &SetOnlineStatus_Parms.LocalizedStringSettings, 0xC );

	if ( Properties )
		memcpy ( Properties, &SetOnlineStatus_Parms.Properties, 0xC );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38115 ];

	UOnlineSubsystemPW_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy ( &ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38113 ];

	UOnlineSubsystemPW_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy ( &AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->Data[ 37639 ];

	UOnlineSubsystemPW_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetLocale
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemPW::GetLocale ( )
{
	static UFunction* pFnGetLocale = NULL;

	if ( ! pFnGetLocale )
		pFnGetLocale = (UFunction*) UObject::GObjObjects()->Data[ 38111 ];

	UOnlineSubsystemPW_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent ( pFnGetLocale, &GetLocale_Parms, NULL );

	return GetLocale_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetNATType
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemPW::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->Data[ 38109 ];

	UOnlineSubsystemPW_execGetNATType_Parms GetNATType_Parms;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38106 ];

	UOnlineSubsystemPW_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy ( &ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38103 ];

	UOnlineSubsystemPW_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy ( &AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void UOnlineSubsystemPW::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 37217 ];

	UOnlineSubsystemPW_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsControllerConnected
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

bool UOnlineSubsystemPW::IsControllerConnected ( int ControllerId )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->Data[ 38099 ];

	UOnlineSubsystemPW_execIsControllerConnected_Parms IsControllerConnected_Parms;
	IsControllerConnected_Parms.ControllerId = ControllerId;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearControllerChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38097 ];

	UOnlineSubsystemPW_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy ( &ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddControllerChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38095 ];

	UOnlineSubsystemPW_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy ( &AddControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnControllerChange
// [0x00120000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemPW::OnControllerChange ( int ControllerId, unsigned long bIsConnected )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->Data[ 37642 ];

	UOnlineSubsystemPW_execOnControllerChange_Parms OnControllerChange_Parms;
	OnControllerChange_Parms.ControllerId = ControllerId;
	OnControllerChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetNetworkNotificationPosition
// [0x00020000] 
// Parameters infos:
// unsigned char                  NewPos                         ( CPF_Parm )

void UOnlineSubsystemPW::SetNetworkNotificationPosition ( unsigned char NewPos )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 38091 ];

	UOnlineSubsystemPW_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetNetworkNotificationPosition
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemPW::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 38089 ];

	UOnlineSubsystemPW_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38087 ];

	UOnlineSubsystemPW_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy ( &ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38085 ];

	UOnlineSubsystemPW_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy ( &AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnExternalUIChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsOpening                     ( CPF_Parm )

void UOnlineSubsystemPW::OnExternalUIChange ( unsigned long bIsOpening )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->Data[ 37644 ];

	UOnlineSubsystemPW_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLinkStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38082 ];

	UOnlineSubsystemPW_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy ( &ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLinkStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38080 ];

	UOnlineSubsystemPW_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy ( &AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemPW::OnLinkStatusChange ( unsigned long bIsConnected )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 37646 ];

	UOnlineSubsystemPW_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.HasLinkConnection
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->Data[ 38077 ];

	UOnlineSubsystemPW_execHasLinkConnection_Parms HasLinkConnection_Parms;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerUniqueNetIdFromIndex
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            UserIndex                      ( CPF_Parm )

struct FUniqueNetId UOnlineSubsystemPW::eventGetPlayerUniqueNetIdFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerUniqueNetIdFromIndex = NULL;

	if ( ! pFnGetPlayerUniqueNetIdFromIndex )
		pFnGetPlayerUniqueNetIdFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 38073 ];

	UOnlineSubsystemPW_eventGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
	GetPlayerUniqueNetIdFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, NULL );

	return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemPW::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 38070 ];

	UOnlineSubsystemPW_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CalcAggregateSkill
// [0x00420000] 
// Parameters infos:
// TArray< struct FDouble >       Mus                            ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FDouble >       Sigmas                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FDouble                 OutAggregateMu                 ( CPF_Parm | CPF_OutParm )
// struct FDouble                 OutAggregateSigma              ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemPW::CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma )
{
	static UFunction* pFnCalcAggregateSkill = NULL;

	if ( ! pFnCalcAggregateSkill )
		pFnCalcAggregateSkill = (UFunction*) UObject::GObjObjects()->Data[ 38063 ];

	UOnlineSubsystemPW_execCalcAggregateSkill_Parms CalcAggregateSkill_Parms;
	memcpy ( &CalcAggregateSkill_Parms.Mus, &Mus, 0xC );
	memcpy ( &CalcAggregateSkill_Parms.Sigmas, &Sigmas, 0xC );

	this->ProcessEvent ( pFnCalcAggregateSkill, &CalcAggregateSkill_Parms, NULL );

	if ( OutAggregateMu )
		memcpy ( OutAggregateMu, &CalcAggregateSkill_Parms.OutAggregateMu, 0x8 );

	if ( OutAggregateSigma )
		memcpy ( OutAggregateSigma, &CalcAggregateSkill_Parms.OutAggregateSigma, 0x8 );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTrueSkillValue
// [0x00020000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UOnlineSubsystemPW::GetTrueSkillValue ( )
{
	static UFunction* pFnGetTrueSkillValue = NULL;

	if ( ! pFnGetTrueSkillValue )
		pFnGetTrueSkillValue = (UFunction*) UObject::GObjObjects()->Data[ 38061 ];

	UOnlineSubsystemPW_execGetTrueSkillValue_Parms GetTrueSkillValue_Parms;

	this->ProcessEvent ( pFnGetTrueSkillValue, &GetTrueSkillValue_Parms, NULL );

	return GetTrueSkillValue_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterStatGuid
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 ClientStatGuid                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid )
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if ( ! pFnRegisterStatGuid )
		pFnRegisterStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 38057 ];

	UOnlineSubsystemPW_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy ( &RegisterStatGuid_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL );

	if ( ClientStatGuid )
		memcpy ( ClientStatGuid, &RegisterStatGuid_Parms.ClientStatGuid, 0xC );

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetClientStatGuid
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemPW::GetClientStatGuid ( )
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if ( ! pFnGetClientStatGuid )
		pFnGetClientStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 38055 ];

	UOnlineSubsystemPW_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	this->ProcessEvent ( pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL );

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if ( ! pFnClearRegisterHostStatGuidCompleteDelegateDelegate )
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38053 ];

	UOnlineSubsystemPW_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy ( &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if ( ! pFnAddRegisterHostStatGuidCompleteDelegate )
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38051 ];

	UOnlineSubsystemPW_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy ( &AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRegisterHostStatGuidComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if ( ! pFnOnRegisterHostStatGuidComplete )
		pFnOnRegisterHostStatGuidComplete = (UFunction*) UObject::GObjObjects()->Data[ 37648 ];

	UOnlineSubsystemPW_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterHostStatGuid
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HostStatGuid                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::RegisterHostStatGuid ( struct FString* HostStatGuid )
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if ( ! pFnRegisterHostStatGuid )
		pFnRegisterHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 38047 ];

	UOnlineSubsystemPW_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	this->ProcessEvent ( pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL );

	if ( HostStatGuid )
		memcpy ( HostStatGuid, &RegisterHostStatGuid_Parms.HostStatGuid, 0xC );

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetHostStatGuid
// [0x00020000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemPW::GetHostStatGuid ( )
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if ( ! pFnGetHostStatGuid )
		pFnGetHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 38045 ];

	UOnlineSubsystemPW_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	this->ProcessEvent ( pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL );

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WriteOnlinePlayerScores
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// int                            LeaderboardId                  ( CPF_Parm )
// TArray< struct FOnlinePlayerScore > PlayerScores                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores )
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if ( ! pFnWriteOnlinePlayerScores )
		pFnWriteOnlinePlayerScores = (UFunction*) UObject::GObjObjects()->Data[ 38039 ];

	UOnlineSubsystemPW_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy ( &WriteOnlinePlayerScores_Parms.SessionName, &SessionName, 0x8 );
	WriteOnlinePlayerScores_Parms.LeaderboardId = LeaderboardId;

	this->ProcessEvent ( pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );

	if ( PlayerScores )
		memcpy ( PlayerScores, &WriteOnlinePlayerScores_Parms.PlayerScores, 0xC );

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearFlushOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearFlushOnlineStatsCompleteDelegate )
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38037 ];

	UOnlineSubsystemPW_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddFlushOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddFlushOnlineStatsCompleteDelegate )
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38035 ];

	UOnlineSubsystemPW_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFlushOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if ( ! pFnOnFlushOnlineStatsComplete )
		pFnOnFlushOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 37650 ];

	UOnlineSubsystemPW_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy ( &OnFlushOnlineStatsComplete_Parms.SessionName, &SessionName, 0x8 );
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FlushOnlineStats
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemPW::FlushOnlineStats ( struct FName SessionName )
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if ( ! pFnFlushOnlineStats )
		pFnFlushOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 38030 ];

	UOnlineSubsystemPW_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy ( &FlushOnlineStats_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL );

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WriteOnlineRankedStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< class UOnlineStatsWrite* > StatsArray                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::WriteOnlineRankedStats ( TArray< class UOnlineStatsWrite* > StatsArray )
{
	static UFunction* pFnWriteOnlineRankedStats = NULL;

	if ( ! pFnWriteOnlineRankedStats )
		pFnWriteOnlineRankedStats = (UFunction*) UObject::GObjObjects()->Data[ 38026 ];

	UOnlineSubsystemPW_execWriteOnlineRankedStats_Parms WriteOnlineRankedStats_Parms;
	memcpy ( &WriteOnlineRankedStats_Parms.StatsArray, &StatsArray, 0xC );

	pFnWriteOnlineRankedStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlineRankedStats, &WriteOnlineRankedStats_Parms, NULL );

	pFnWriteOnlineRankedStats->FunctionFlags |= 0x400;

	return WriteOnlineRankedStats_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class APlayerReplicationInfo*  Player                         ( CPF_Parm )
// class UOnlineStatsWrite*       StatsWrite                     ( CPF_Parm )

bool UOnlineSubsystemPW::WriteOnlineStats ( struct FName SessionName, class APlayerReplicationInfo* Player, class UOnlineStatsWrite* StatsWrite )
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if ( ! pFnWriteOnlineStats )
		pFnWriteOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 38021 ];

	UOnlineSubsystemPW_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy ( &WriteOnlineStats_Parms.SessionName, &SessionName, 0x8 );
	WriteOnlineStats_Parms.Player = Player;
	WriteOnlineStats_Parms.StatsWrite = StatsWrite;

	pFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );

	pFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.FreeStats
// [0x00020000] 
// Parameters infos:
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

void UOnlineSubsystemPW::FreeStats ( class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnFreeStats = NULL;

	if ( ! pFnFreeStats )
		pFnFreeStats = (UFunction*) UObject::GObjObjects()->Data[ 38019 ];

	UOnlineSubsystemPW_execFreeStats_Parms FreeStats_Parms;
	FreeStats_Parms.StatsRead = StatsRead;

	this->ProcessEvent ( pFnFreeStats, &FreeStats_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineStatsCompleteDelegate )
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38016 ];

	UOnlineSubsystemPW_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineStatsCompleteDelegate )
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38013 ];

	UOnlineSubsystemPW_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadOnlineStatsByRankAroundPlayer
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            NumRows                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows )
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if ( ! pFnReadOnlineStatsByRankAroundPlayer )
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*) UObject::GObjObjects()->Data[ 38008 ];

	UOnlineSubsystemPW_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRankAroundPlayer_Parms.NumRows = NumRows;

	this->ProcessEvent ( pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL );

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadOnlineStatsByRank
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            StartIndex                     ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::ReadOnlineStatsByRank ( class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead )
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if ( ! pFnReadOnlineStatsByRank )
		pFnReadOnlineStatsByRank = (UFunction*) UObject::GObjObjects()->Data[ 38003 ];

	UOnlineSubsystemPW_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRank_Parms.StartIndex = StartIndex;
	ReadOnlineStatsByRank_Parms.NumToRead = NumToRead;

	this->ProcessEvent ( pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL );

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadOnlineStatsForFriends
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemPW::ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnReadOnlineStatsForFriends = NULL;

	if ( ! pFnReadOnlineStatsForFriends )
		pFnReadOnlineStatsForFriends = (UFunction*) UObject::GObjObjects()->Data[ 37999 ];

	UOnlineSubsystemPW_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsForFriends_Parms.StatsRead = StatsRead;

	this->ProcessEvent ( pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, NULL );

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadMyOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemPW::ReadMyOnlineStats ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnReadMyOnlineStats = NULL;

	if ( ! pFnReadMyOnlineStats )
		pFnReadMyOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 37995 ];

	UOnlineSubsystemPW_execReadMyOnlineStats_Parms ReadMyOnlineStats_Parms;
	ReadMyOnlineStats_Parms.LocalUserNum = LocalUserNum;
	ReadMyOnlineStats_Parms.StatsRead = StatsRead;

	pFnReadMyOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadMyOnlineStats, &ReadMyOnlineStats_Parms, NULL );

	pFnReadMyOnlineStats->FunctionFlags |= 0x400;

	return ReadMyOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadOnlineStats
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::ReadOnlineStats ( class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnReadOnlineStats = NULL;

	if ( ! pFnReadOnlineStats )
		pFnReadOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 37990 ];

	UOnlineSubsystemPW_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.StatsRead = StatsRead;

	this->ProcessEvent ( pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL );

	if ( Players )
		memcpy ( Players, &ReadOnlineStats_Parms.Players, 0xC );

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnReadOnlineStatsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if ( ! pFnOnReadOnlineStatsComplete )
		pFnOnReadOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 37400 ];

	UOnlineSubsystemPW_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetSpeechRecognitionObject
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class USpeechRecognition*      SpeechRecogObj                 ( CPF_Parm )

bool UOnlineSubsystemPW::SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->Data[ 37985 ];

	UOnlineSubsystemPW_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	SetSpeechRecognitionObject_Parms.SpeechRecogObj = SpeechRecogObj;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SelectVocabulary
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            VocabularyId                   ( CPF_Parm )

bool UOnlineSubsystemPW::SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->Data[ 37981 ];

	UOnlineSubsystemPW_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	SelectVocabulary_Parms.VocabularyId = VocabularyId;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37977 ];

	UOnlineSubsystemPW_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37974 ];

	UOnlineSubsystemPW_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->Data[ 37163 ];

	UOnlineSubsystemPW_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetRecognitionResults
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSpeechRecognizedWord > Words                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->Data[ 37969 ];

	UOnlineSubsystemPW_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );

	if ( Words )
		memcpy ( Words, &GetRecognitionResults_Parms.Words, 0xC );

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StopSpeechRecognition
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::StopSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 37966 ];

	UOnlineSubsystemPW_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StartSpeechRecognition
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::StartSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 37963 ];

	UOnlineSubsystemPW_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemPW::StopNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 37961 ];

	UOnlineSubsystemPW_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemPW::StartNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 37959 ];

	UOnlineSubsystemPW_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 37954 ];

	UOnlineSubsystemPW_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnmuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	UnmuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 37949 ];

	UOnlineSubsystemPW_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &MuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	MuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.SetRemoteTalkerPriority
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )

bool UOnlineSubsystemPW::SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->Data[ 37944 ];

	UOnlineSubsystemPW_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetRemoteTalkerPriority_Parms.PlayerID, &PlayerID, 0x8 );
	SetRemoteTalkerPriority_Parms.Priority = Priority;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsHeadsetPresent
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::IsHeadsetPresent ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->Data[ 37941 ];

	UOnlineSubsystemPW_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPW::IsRemotePlayerTalking ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 37938 ];

	UOnlineSubsystemPW_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy ( &IsRemotePlayerTalking_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::IsLocalPlayerTalking ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 37935 ];

	UOnlineSubsystemPW_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPW::UnregisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 37932 ];

	UOnlineSubsystemPW_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy ( &UnregisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterRemoteTalkerWithVoipId
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// int                            VoipId                         ( CPF_Parm )

bool UOnlineSubsystemPW::RegisterRemoteTalkerWithVoipId ( struct FUniqueNetId UniqueId, int VoipId )
{
	static UFunction* pFnRegisterRemoteTalkerWithVoipId = NULL;

	if ( ! pFnRegisterRemoteTalkerWithVoipId )
		pFnRegisterRemoteTalkerWithVoipId = (UFunction*) UObject::GObjObjects()->Data[ 37928 ];

	UOnlineSubsystemPW_execRegisterRemoteTalkerWithVoipId_Parms RegisterRemoteTalkerWithVoipId_Parms;
	memcpy ( &RegisterRemoteTalkerWithVoipId_Parms.UniqueId, &UniqueId, 0x8 );
	RegisterRemoteTalkerWithVoipId_Parms.VoipId = VoipId;

	pFnRegisterRemoteTalkerWithVoipId->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterRemoteTalkerWithVoipId, &RegisterRemoteTalkerWithVoipId_Parms, NULL );

	pFnRegisterRemoteTalkerWithVoipId->FunctionFlags |= 0x400;

	return RegisterRemoteTalkerWithVoipId_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterRemoteTalker
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPW::RegisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 37925 ];

	UOnlineSubsystemPW_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy ( &RegisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::UnregisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 37922 ];

	UOnlineSubsystemPW_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::RegisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 37919 ];

	UOnlineSubsystemPW_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.RefreshCommunicationPrivelage
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPW::RefreshCommunicationPrivelage ( )
{
	static UFunction* pFnRefreshCommunicationPrivelage = NULL;

	if ( ! pFnRefreshCommunicationPrivelage )
		pFnRefreshCommunicationPrivelage = (UFunction*) UObject::GObjObjects()->Data[ 37918 ];

	UOnlineSubsystemPW_execRefreshCommunicationPrivelage_Parms RefreshCommunicationPrivelage_Parms;

	this->ProcessEvent ( pFnRefreshCommunicationPrivelage, &RefreshCommunicationPrivelage_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPartyList
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriend > Members                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::GetPartyList ( unsigned char LocalUserNum, TArray< struct FOnlineFriend >* Members )
{
	static UFunction* pFnGetPartyList = NULL;

	if ( ! pFnGetPartyList )
		pFnGetPartyList = (UFunction*) UObject::GObjObjects()->Data[ 37913 ];

	UOnlineSubsystemPW_execGetPartyList_Parms GetPartyList_Parms;
	GetPartyList_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPartyList, &GetPartyList_Parms, NULL );

	if ( Members )
		memcpy ( Members, &GetPartyList_Parms.Members, 0xC );

	return GetPartyList_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemPW::ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37910 ];

	UOnlineSubsystemPW_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy ( &ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemPW::AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37907 ];

	UOnlineSubsystemPW_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy ( &AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemPW::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 37654 ];

	UOnlineSubsystemPW_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37901 ];

	UOnlineSubsystemPW_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWriteProfileSettingsCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37898 ];

	UOnlineSubsystemPW_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWriteProfileSettingsCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 37130 ];

	UOnlineSubsystemPW_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsProfileAvailable
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::IsProfileAvailable ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsProfileAvailable = NULL;

	if ( ! pFnIsProfileAvailable )
		pFnIsProfileAvailable = (UFunction*) UObject::GObjObjects()->Data[ 37893 ];

	UOnlineSubsystemPW_execIsProfileAvailable_Parms IsProfileAvailable_Parms;
	IsProfileAvailable_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsProfileAvailable, &IsProfileAvailable_Parms, NULL );

	return IsProfileAvailable_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemPW::WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 37889 ];

	UOnlineSubsystemPW_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetProfileSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemPW::GetProfileSettings ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 37886 ];

	UOnlineSubsystemPW_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37882 ];

	UOnlineSubsystemPW_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadProfileSettingsCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37879 ];

	UOnlineSubsystemPW_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadProfileSettingsCompleteDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 37127 ];

	UOnlineSubsystemPW_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemPW::ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 37873 ];

	UOnlineSubsystemPW_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37870 ];

	UOnlineSubsystemPW_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy ( &ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37868 ];

	UOnlineSubsystemPW_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy ( &AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsGuestLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::IsGuestLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->Data[ 37865 ];

	UOnlineSubsystemPW_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsLocalLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::IsLocalLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->Data[ 37862 ];

	UOnlineSubsystemPW_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );

	return IsLocalLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37860 ];

	UOnlineSubsystemPW_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy ( &ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37858 ];

	UOnlineSubsystemPW_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy ( &AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowFriendsUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::ShowFriendsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 37855 ];

	UOnlineSubsystemPW_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsMuted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPW::IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->Data[ 37851 ];

	UOnlineSubsystemPW_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsMuted_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsMuted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );

	pFnIsMuted->FunctionFlags |= 0x400;

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AreAnyFriends
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->Data[ 37846 ];

	UOnlineSubsystemPW_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	if ( Query )
		memcpy ( Query, &AreAnyFriends_Parms.Query, 0xC );

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.IsFriend
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemPW::IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->Data[ 37842 ];

	UOnlineSubsystemPW_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsFriend_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanShowPresenceInformation
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemPW::CanShowPresenceInformation ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 37839 ];

	UOnlineSubsystemPW_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanViewPlayerProfiles
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemPW::CanViewPlayerProfiles ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 37836 ];

	UOnlineSubsystemPW_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanPurchaseContent
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemPW::CanPurchaseContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 37833 ];

	UOnlineSubsystemPW_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanDownloadUserContent
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemPW::CanDownloadUserContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 37830 ];

	UOnlineSubsystemPW_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanCommunicate
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemPW::CanCommunicate ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 37827 ];

	UOnlineSubsystemPW_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CanPlayOnline
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemPW::CanPlayOnline ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 37824 ];

	UOnlineSubsystemPW_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetPlayerNickname
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemPW::GetPlayerNickname ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->Data[ 37821 ];

	UOnlineSubsystemPW_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetSecondaryUniquePlayerId
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            OutID                          ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPW::GetSecondaryUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* OutID )
{
	static UFunction* pFnGetSecondaryUniquePlayerId = NULL;

	if ( ! pFnGetSecondaryUniquePlayerId )
		pFnGetSecondaryUniquePlayerId = (UFunction*) UObject::GObjObjects()->Data[ 37817 ];

	UOnlineSubsystemPW_execGetSecondaryUniquePlayerId_Parms GetSecondaryUniquePlayerId_Parms;
	GetSecondaryUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetSecondaryUniquePlayerId, &GetSecondaryUniquePlayerId_Parms, NULL );

	if ( OutID )
		memcpy ( OutID, &GetSecondaryUniquePlayerId_Parms.OutID, 0x8 );

	return GetSecondaryUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetUniquePlayerId
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemPW::GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->Data[ 37813 ];

	UOnlineSubsystemPW_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x8 );

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetLoginStatus
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemPW::GetLoginStatus ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 37810 ];

	UOnlineSubsystemPW_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPingServerDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearPingServerDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearPingServerDelegate = NULL;

	if ( ! pFnClearPingServerDelegate )
		pFnClearPingServerDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37807 ];

	UOnlineSubsystemPW_execClearPingServerDelegate_Parms ClearPingServerDelegate_Parms;
	memcpy ( &ClearPingServerDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearPingServerDelegate, &ClearPingServerDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPingServerDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddPingServerDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddPingServerDelegate = NULL;

	if ( ! pFnAddPingServerDelegate )
		pFnAddPingServerDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37805 ];

	UOnlineSubsystemPW_execAddPingServerDelegate_Parms AddPingServerDelegate_Parms;
	memcpy ( &AddPingServerDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddPingServerDelegate, &AddPingServerDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnServerPing
// [0x00120000] 
// Parameters infos:
// struct FString                 Address                        ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
// struct FDouble                 RecvTime                       ( CPF_Const | CPF_Parm )

void UOnlineSubsystemPW::OnServerPing ( struct FString Address, struct FDouble RecvTime )
{
	static UFunction* pFnOnServerPing = NULL;

	if ( ! pFnOnServerPing )
		pFnOnServerPing = (UFunction*) UObject::GObjObjects()->Data[ 37196 ];

	UOnlineSubsystemPW_execOnServerPing_Parms OnServerPing_Parms;
	memcpy ( &OnServerPing_Parms.Address, &Address, 0xC );
	memcpy ( &OnServerPing_Parms.RecvTime, &RecvTime, 0x8 );

	this->ProcessEvent ( pFnOnServerPing, &OnServerPing_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.PingServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Address                        ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::PingServer ( struct FString Address )
{
	static UFunction* pFnPingServer = NULL;

	if ( ! pFnPingServer )
		pFnPingServer = (UFunction*) UObject::GObjObjects()->Data[ 37800 ];

	UOnlineSubsystemPW_execPingServer_Parms PingServer_Parms;
	memcpy ( &PingServer_Parms.Address, &Address, 0xC );

	pFnPingServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPingServer, &PingServer_Parms, NULL );

	pFnPingServer->FunctionFlags |= 0x400;

	return PingServer_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37796 ];

	UOnlineSubsystemPW_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLogoutCompletedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37793 ];

	UOnlineSubsystemPW_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLogoutCompletedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemPW::OnLogoutCompleted ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->Data[ 37193 ];

	UOnlineSubsystemPW_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.Logout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemPW::Logout ( unsigned char LocalUserNum )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 37789 ];

	UOnlineSubsystemPW_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	pFnLogout->FunctionFlags |= 0x400;

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37785 ];

	UOnlineSubsystemPW_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLoginFailedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37782 ];

	UOnlineSubsystemPW_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLoginFailedDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginFailed
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemPW::OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 37187 ];

	UOnlineSubsystemPW_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginQueueDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearLoginQueueDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearLoginQueueDelegate = NULL;

	if ( ! pFnClearLoginQueueDelegate )
		pFnClearLoginQueueDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37777 ];

	UOnlineSubsystemPW_execClearLoginQueueDelegate_Parms ClearLoginQueueDelegate_Parms;
	memcpy ( &ClearLoginQueueDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginQueueDelegate, &ClearLoginQueueDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginQueueDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddLoginQueueDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddLoginQueueDelegate = NULL;

	if ( ! pFnAddLoginQueueDelegate )
		pFnAddLoginQueueDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37775 ];

	UOnlineSubsystemPW_execAddLoginQueueDelegate_Parms AddLoginQueueDelegate_Parms;
	memcpy ( &AddLoginQueueDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginQueueDelegate, &AddLoginQueueDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginQueue
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            NumPlayers                     ( CPF_Parm )
// int                            PositionInQueue                ( CPF_Parm )
// int                            WaitTime                       ( CPF_Parm )

void UOnlineSubsystemPW::OnLoginQueue ( unsigned char LocalUserNum, int NumPlayers, int PositionInQueue, int WaitTime )
{
	static UFunction* pFnOnLoginQueue = NULL;

	if ( ! pFnOnLoginQueue )
		pFnOnLoginQueue = (UFunction*) UObject::GObjObjects()->Data[ 37190 ];

	UOnlineSubsystemPW_execOnLoginQueue_Parms OnLoginQueue_Parms;
	OnLoginQueue_Parms.LocalUserNum = LocalUserNum;
	OnLoginQueue_Parms.NumPlayers = NumPlayers;
	OnLoginQueue_Parms.PositionInQueue = PositionInQueue;
	OnLoginQueue_Parms.WaitTime = WaitTime;

	this->ProcessEvent ( pFnOnLoginQueue, &OnLoginQueue_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CheckLoginQueue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 AccountName                    ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::CheckLoginQueue ( unsigned char LocalUserNum, struct FString AccountName )
{
	static UFunction* pFnCheckLoginQueue = NULL;

	if ( ! pFnCheckLoginQueue )
		pFnCheckLoginQueue = (UFunction*) UObject::GObjObjects()->Data[ 37767 ];

	UOnlineSubsystemPW_execCheckLoginQueue_Parms CheckLoginQueue_Parms;
	CheckLoginQueue_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &CheckLoginQueue_Parms.AccountName, &AccountName, 0xC );

	pFnCheckLoginQueue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckLoginQueue, &CheckLoginQueue_Parms, NULL );

	pFnCheckLoginQueue->FunctionFlags |= 0x400;

	return CheckLoginQueue_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearLoginChangeDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37764 ];

	UOnlineSubsystemPW_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy ( &ClearLoginChangeDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddLoginChangeDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37762 ];

	UOnlineSubsystemPW_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy ( &AddLoginChangeDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemPW::OnLoginChange ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->Data[ 37184 ];

	UOnlineSubsystemPW_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AutoLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->Data[ 37759 ];

	UOnlineSubsystemPW_execAutoLogin_Parms AutoLogin_Parms;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearServerAvailabilityDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearServerAvailabilityDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnClearServerAvailabilityDelegate = NULL;

	if ( ! pFnClearServerAvailabilityDelegate )
		pFnClearServerAvailabilityDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37756 ];

	UOnlineSubsystemPW_execClearServerAvailabilityDelegate_Parms ClearServerAvailabilityDelegate_Parms;
	memcpy ( &ClearServerAvailabilityDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnClearServerAvailabilityDelegate, &ClearServerAvailabilityDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddServerAvailabilityDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InDelegate                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddServerAvailabilityDelegate ( struct FScriptDelegate InDelegate )
{
	static UFunction* pFnAddServerAvailabilityDelegate = NULL;

	if ( ! pFnAddServerAvailabilityDelegate )
		pFnAddServerAvailabilityDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37754 ];

	UOnlineSubsystemPW_execAddServerAvailabilityDelegate_Parms AddServerAvailabilityDelegate_Parms;
	memcpy ( &AddServerAvailabilityDelegate_Parms.InDelegate, &InDelegate, 0xC );

	this->ProcessEvent ( pFnAddServerAvailabilityDelegate, &AddServerAvailabilityDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnServerAvailability
// [0x00124000] 
// Parameters infos:
// unsigned char                  RegionID                       ( CPF_Parm )
// unsigned char                  AvailabilityCode               ( CPF_Parm )
// int                            iParam1                        ( CPF_OptionalParm | CPF_Parm )
// int                            iParam2                        ( CPF_OptionalParm | CPF_Parm )

void UOnlineSubsystemPW::OnServerAvailability ( unsigned char RegionID, unsigned char AvailabilityCode, int iParam1, int iParam2 )
{
	static UFunction* pFnOnServerAvailability = NULL;

	if ( ! pFnOnServerAvailability )
		pFnOnServerAvailability = (UFunction*) UObject::GObjObjects()->Data[ 37181 ];

	UOnlineSubsystemPW_execOnServerAvailability_Parms OnServerAvailability_Parms;
	OnServerAvailability_Parms.RegionID = RegionID;
	OnServerAvailability_Parms.AvailabilityCode = AvailabilityCode;
	OnServerAvailability_Parms.iParam1 = iParam1;
	OnServerAvailability_Parms.iParam2 = iParam2;

	this->ProcessEvent ( pFnOnServerAvailability, &OnServerAvailability_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.CheckServerAvailability
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  RegionID                       ( CPF_Const | CPF_Parm )

bool UOnlineSubsystemPW::CheckServerAvailability ( unsigned char RegionID )
{
	static UFunction* pFnCheckServerAvailability = NULL;

	if ( ! pFnCheckServerAvailability )
		pFnCheckServerAvailability = (UFunction*) UObject::GObjObjects()->Data[ 37747 ];

	UOnlineSubsystemPW_execCheckServerAvailability_Parms CheckServerAvailability_Parms;
	CheckServerAvailability_Parms.RegionID = RegionID;

	pFnCheckServerAvailability->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckServerAvailability, &CheckServerAvailability_Parms, NULL );

	pFnCheckServerAvailability->FunctionFlags |= 0x400;

	return CheckServerAvailability_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddServerToWhiteList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  RegionID                       ( CPF_Const | CPF_Parm )

void UOnlineSubsystemPW::AddServerToWhiteList ( unsigned char RegionID )
{
	static UFunction* pFnAddServerToWhiteList = NULL;

	if ( ! pFnAddServerToWhiteList )
		pFnAddServerToWhiteList = (UFunction*) UObject::GObjObjects()->Data[ 37745 ];

	UOnlineSubsystemPW_execAddServerToWhiteList_Parms AddServerToWhiteList_Parms;
	AddServerToWhiteList_Parms.RegionID = RegionID;

	pFnAddServerToWhiteList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddServerToWhiteList, &AddServerToWhiteList_Parms, NULL );

	pFnAddServerToWhiteList->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.LoginHashed
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 LoginName                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 HashedToken                    ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::LoginHashed ( struct FString* LoginName, struct FString* HashedToken )
{
	static UFunction* pFnLoginHashed = NULL;

	if ( ! pFnLoginHashed )
		pFnLoginHashed = (UFunction*) UObject::GObjObjects()->Data[ 37741 ];

	UOnlineSubsystemPW_execLoginHashed_Parms LoginHashed_Parms;

	pFnLoginHashed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoginHashed, &LoginHashed_Parms, NULL );

	pFnLoginHashed->FunctionFlags |= 0x400;

	if ( LoginName )
		memcpy ( LoginName, &LoginHashed_Parms.LoginName, 0xC );

	if ( HashedToken )
		memcpy ( HashedToken, &LoginHashed_Parms.HashedToken, 0xC );

	return LoginHashed_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.Login
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Const | CPF_Parm )
// unsigned long                  bWantsLocalOnly                ( CPF_Const | CPF_OptionalParm | CPF_Parm )
// struct FString                 LoginName                      ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemPW::Login ( unsigned char LocalUserNum, unsigned long bWantsLocalOnly, struct FString* LoginName, struct FString* Password )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 37735 ];

	UOnlineSubsystemPW_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	pFnLogin->FunctionFlags |= 0x400;

	if ( LoginName )
		memcpy ( LoginName, &Login_Parms.LoginName, 0xC );

	if ( Password )
		memcpy ( Password, &Login_Parms.Password, 0xC );

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ShowLoginUI
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemPW::ShowLoginUI ( unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 37732 ];

	UOnlineSubsystemPW_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->Data[ 37169 ];

	UOnlineSubsystemPW_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.ClearPlayerTalkingDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if ( ! pFnClearPlayerTalkingDelegate )
		pFnClearPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37730 ];

	UOnlineSubsystemPW_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy ( &ClearPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.AddPlayerTalkingDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemPW::AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if ( ! pFnAddPlayerTalkingDelegate )
		pFnAddPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37728 ];

	UOnlineSubsystemPW_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy ( &AddPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnPlayerTalkingStateChange
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void UOnlineSubsystemPW::OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking )
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if ( ! pFnOnPlayerTalkingStateChange )
		pFnOnPlayerTalkingStateChange = (UFunction*) UObject::GObjObjects()->Data[ 37665 ];

	UOnlineSubsystemPW_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy ( &OnPlayerTalkingStateChange_Parms.Player, &Player, 0x8 );
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent ( pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->Data[ 37178 ];

	UOnlineSubsystemPW_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPW::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->Data[ 37668 ];

	UOnlineSubsystemPW_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemPW::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37724 ];

	UOnlineSubsystemPW_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};

// Function OnlineSubsystemPW.OnlineSubsystemPW.GetTitleString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemPW::GetTitleString ( )
{
	static UFunction* pFnGetTitleString = NULL;

	if ( ! pFnGetTitleString )
		pFnGetTitleString = (UFunction*) UObject::GObjObjects()->Data[ 37722 ];

	UOnlineSubsystemPW_execGetTitleString_Parms GetTitleString_Parms;

	pFnGetTitleString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleString, &GetTitleString_Parms, NULL );

	pFnGetTitleString->FunctionFlags |= 0x400;

	return GetTitleString_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif