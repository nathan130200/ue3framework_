/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_functions.h
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

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerUniqueNetIdFromIndex
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            UserIndex                      ( CPF_Parm )

struct FUniqueNetId UOnlineSubsystemCommonImpl::eventGetPlayerUniqueNetIdFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerUniqueNetIdFromIndex = NULL;

	if ( ! pFnGetPlayerUniqueNetIdFromIndex )
		pFnGetPlayerUniqueNetIdFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 32835 ];

	UOnlineSubsystemCommonImpl_eventGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
	GetPlayerUniqueNetIdFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, NULL );

	return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 32832 ];

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = NULL;

	if ( ! pFnBindPlatformSpecificSessionToSearch )
		pFnBindPlatformSpecificSessionToSearch = (UFunction*) UObject::GObjObjects()->Data[ 32822 ];

	UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	BindPlatformSpecificSessionToSearch_Parms.SearchSettings = SearchSettings;
	memcpy ( &BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x40 );

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, NULL );

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= 0x400;

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfoBySessionName )
		pFnReadPlatformSpecificSessionInfoBySessionName = (UFunction*) UObject::GObjObjects()->Data[ 32818 ];

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy ( &ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x40 );

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfo )
		pFnReadPlatformSpecificSessionInfo = (UFunction*) UObject::GObjObjects()->Data[ 32814 ];

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, NULL );

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= 0x400;

	if ( DesiredGame )
		memcpy ( DesiredGame, &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0x8 );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x40 );

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 32810 ];

	UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRecalculateSkillRating = NULL;

	if ( ! pFnRecalculateSkillRating )
		pFnRecalculateSkillRating = (UFunction*) UObject::GObjObjects()->Data[ 32805 ];

	UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;
	memcpy ( &RecalculateSkillRating_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRecalculateSkillRating, &RecalculateSkillRating_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RecalculateSkillRating_Parms.Players, 0xC );

	return RecalculateSkillRating_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 32801 ];

	UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00120000] 
// Parameters infos:
// class UOnlineGameSettings*     GameInviteSettings             ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnGameInviteAccepted ( class UOnlineGameSettings* GameInviteSettings )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 32636 ];

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;
	OnGameInviteAccepted_Parms.GameInviteSettings = GameInviteSettings;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32797 ];

	UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32794 ];

	UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000] 
// Parameters infos:
// TArray< struct FOnlineArbitrationRegistrant > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   SessionName                    ( CPF_Parm )

TArray< struct FOnlineArbitrationRegistrant > UOnlineGameInterfaceImpl::GetArbitratedPlayers ( struct FName SessionName )
{
	static UFunction* pFnGetArbitratedPlayers = NULL;

	if ( ! pFnGetArbitratedPlayers )
		pFnGetArbitratedPlayers = (UFunction*) UObject::GObjObjects()->Data[ 32790 ];

	UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms GetArbitratedPlayers_Parms;
	memcpy ( &GetArbitratedPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetArbitratedPlayers, &GetArbitratedPlayers_Parms, NULL );

	return GetArbitratedPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnClearArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnClearArbitrationRegistrationCompleteDelegate )
		pFnClearArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32788 ];

	UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms ClearArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &ClearArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnAddArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnAddArbitrationRegistrationCompleteDelegate )
		pFnAddArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32786 ];

	UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms AddArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &AddArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnArbitrationRegistrationComplete = NULL;

	if ( ! pFnOnArbitrationRegistrationComplete )
		pFnOnArbitrationRegistrationComplete = (UFunction*) UObject::GObjObjects()->Data[ 32638 ];

	UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms OnArbitrationRegistrationComplete_Parms;
	memcpy ( &OnArbitrationRegistrationComplete_Parms.SessionName, &SessionName, 0x8 );
	OnArbitrationRegistrationComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterForArbitration ( struct FName SessionName )
{
	static UFunction* pFnRegisterForArbitration = NULL;

	if ( ! pFnRegisterForArbitration )
		pFnRegisterForArbitration = (UFunction*) UObject::GObjObjects()->Data[ 32781 ];

	UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms RegisterForArbitration_Parms;
	memcpy ( &RegisterForArbitration_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterForArbitration, &RegisterForArbitration_Parms, NULL );

	return RegisterForArbitration_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearEndOnlineGameCompleteDelegate )
		pFnClearEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32778 ];

	UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms ClearEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddEndOnlineGameCompleteDelegate )
		pFnAddEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32776 ];

	UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms AddEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnEndOnlineGameComplete = NULL;

	if ( ! pFnOnEndOnlineGameComplete )
		pFnOnEndOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 32628 ];

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy ( &OnEndOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::EndOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnEndOnlineGame = NULL;

	if ( ! pFnEndOnlineGame )
		pFnEndOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 32771 ];

	UOnlineGameInterfaceImpl_execEndOnlineGame_Parms EndOnlineGame_Parms;
	memcpy ( &EndOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnEndOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndOnlineGame, &EndOnlineGame_Parms, NULL );

	pFnEndOnlineGame->FunctionFlags |= 0x400;

	return EndOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearStartOnlineGameCompleteDelegate )
		pFnClearStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32768 ];

	UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms ClearStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddStartOnlineGameCompleteDelegate )
		pFnAddStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32766 ];

	UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms AddStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnStartOnlineGameComplete = NULL;

	if ( ! pFnOnStartOnlineGameComplete )
		pFnOnStartOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 32625 ];

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms OnStartOnlineGameComplete_Parms;
	memcpy ( &OnStartOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnStartOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::StartOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnStartOnlineGame = NULL;

	if ( ! pFnStartOnlineGame )
		pFnStartOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 32761 ];

	UOnlineGameInterfaceImpl_execStartOnlineGame_Parms StartOnlineGame_Parms;
	memcpy ( &StartOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnStartOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartOnlineGame, &StartOnlineGame_Parms, NULL );

	pFnStartOnlineGame->FunctionFlags |= 0x400;

	return StartOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32759 ];

	UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32757 ];

	UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 32642 ];

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceImpl::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 32751 ];

	UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32749 ];

	UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32747 ];

	UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 32644 ];

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 32740 ];

	UOnlineGameInterfaceImpl_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	return RegisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo )
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if ( ! pFnGetResolvedConnectString )
		pFnGetResolvedConnectString = (UFunction*) UObject::GObjObjects()->Data[ 32736 ];

	UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy ( &GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8 );

	pFnGetResolvedConnectString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL );

	pFnGetResolvedConnectString->FunctionFlags |= 0x400;

	if ( ConnectInfo )
		memcpy ( ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0xC );

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinOnlineGameCompleteDelegate )
		pFnClearJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32733 ];

	UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms ClearJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinOnlineGameCompleteDelegate )
		pFnAddJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32731 ];

	UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms AddJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinOnlineGameComplete = NULL;

	if ( ! pFnOnJoinOnlineGameComplete )
		pFnOnJoinOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 32622 ];

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms OnJoinOnlineGameComplete_Parms;
	memcpy ( &OnJoinOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinOnlineGame = NULL;

	if ( ! pFnJoinOnlineGame )
		pFnJoinOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 32724 ];

	UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms JoinOnlineGame_Parms;
	JoinOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnJoinOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinOnlineGame, &JoinOnlineGame_Parms, NULL );

	pFnJoinOnlineGame->FunctionFlags |= 0x400;

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinOnlineGame_Parms.DesiredGame, 0x8 );

	return JoinOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FreeSearchResults ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnFreeSearchResults = NULL;

	if ( ! pFnFreeSearchResults )
		pFnFreeSearchResults = (UFunction*) UObject::GObjObjects()->Data[ 32721 ];

	UOnlineGameInterfaceImpl_execFreeSearchResults_Parms FreeSearchResults_Parms;
	FreeSearchResults_Parms.Search = Search;

	pFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeSearchResults, &FreeSearchResults_Parms, NULL );

	pFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearCancelFindOnlineGamesCompleteDelegate )
		pFnClearCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32718 ];

	UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms ClearCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddCancelFindOnlineGamesCompleteDelegate )
		pFnAddCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32716 ];

	UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms AddCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCancelFindOnlineGamesComplete = NULL;

	if ( ! pFnOnCancelFindOnlineGamesComplete )
		pFnOnCancelFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 32634 ];

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms OnCancelFindOnlineGamesComplete_Parms;
	OnCancelFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames ( )
{
	static UFunction* pFnCancelFindOnlineGames = NULL;

	if ( ! pFnCancelFindOnlineGames )
		pFnCancelFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 32713 ];

	UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms CancelFindOnlineGames_Parms;

	pFnCancelFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCancelFindOnlineGames, &CancelFindOnlineGames_Parms, NULL );

	pFnCancelFindOnlineGames->FunctionFlags |= 0x400;

	return CancelFindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearFindOnlineGamesCompleteDelegate )
		pFnClearFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32710 ];

	UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms ClearFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddFindOnlineGamesCompleteDelegate )
		pFnAddFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32708 ];

	UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms AddFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings )
{
	static UFunction* pFnFindOnlineGames = NULL;

	if ( ! pFnFindOnlineGames )
		pFnFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 32704 ];

	UOnlineGameInterfaceImpl_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.SearchingPlayerNum = SearchingPlayerNum;
	FindOnlineGames_Parms.SearchSettings = SearchSettings;

	pFnFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindOnlineGames, &FindOnlineGames_Parms, NULL );

	pFnFindOnlineGames->FunctionFlags |= 0x400;

	return FindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearDestroyOnlineGameCompleteDelegate )
		pFnClearDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32701 ];

	UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms ClearDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddDestroyOnlineGameCompleteDelegate )
		pFnAddDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32699 ];

	UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms AddDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDestroyOnlineGameComplete = NULL;

	if ( ! pFnOnDestroyOnlineGameComplete )
		pFnOnDestroyOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 32619 ];

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy ( &OnDestroyOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::DestroyOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnDestroyOnlineGame = NULL;

	if ( ! pFnDestroyOnlineGame )
		pFnDestroyOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 32694 ];

	UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms DestroyOnlineGame_Parms;
	memcpy ( &DestroyOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	pFnDestroyOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDestroyOnlineGame, &DestroyOnlineGame_Parms, NULL );

	pFnDestroyOnlineGame->FunctionFlags |= 0x400;

	return DestroyOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearUpdateOnlineGameCompleteDelegate )
		pFnClearUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32691 ];

	UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms ClearUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddUpdateOnlineGameCompleteDelegate )
		pFnAddUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32689 ];

	UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms AddUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUpdateOnlineGameComplete = NULL;

	if ( ! pFnOnUpdateOnlineGameComplete )
		pFnOnUpdateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 32616 ];

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms OnUpdateOnlineGameComplete_Parms;
	memcpy ( &OnUpdateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnUpdateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceImpl::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 32682 ];

	UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearCreateOnlineGameCompleteDelegate )
		pFnClearCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32679 ];

	UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms ClearCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddCreateOnlineGameCompleteDelegate )
		pFnAddCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 32677 ];

	UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms AddCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateOnlineGameComplete = NULL;

	if ( ! pFnOnCreateOnlineGameComplete )
		pFnOnCreateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 32613 ];

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy ( &OnCreateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineGameInterfaceImpl::CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings )
{
	static UFunction* pFnCreateOnlineGame = NULL;

	if ( ! pFnCreateOnlineGame )
		pFnCreateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 32670 ];

	UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms CreateOnlineGame_Parms;
	CreateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &CreateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	CreateOnlineGame_Parms.NewGameSettings = NewGameSettings;

	pFnCreateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOnlineGame, &CreateOnlineGame_Parms, NULL );

	pFnCreateOnlineGame->FunctionFlags |= 0x400;

	return CreateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020002] 
// Parameters infos:
// class UOnlineGameSearch*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch ( )
{
	static UFunction* pFnGetGameSearch = NULL;

	if ( ! pFnGetGameSearch )
		pFnGetGameSearch = (UFunction*) UObject::GObjObjects()->Data[ 32668 ];

	UOnlineGameInterfaceImpl_execGetGameSearch_Parms GetGameSearch_Parms;

	this->ProcessEvent ( pFnGetGameSearch, &GetGameSearch_Parms, NULL );

	return GetGameSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings ( struct FName SessionName )
{
	static UFunction* pFnGetGameSettings = NULL;

	if ( ! pFnGetGameSettings )
		pFnGetGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 32665 ];

	UOnlineGameInterfaceImpl_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy ( &GetGameSettings_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetGameSettings, &GetGameSettings_Parms, NULL );

	return GetGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFindOnlineGamesComplete = NULL;

	if ( ! pFnOnFindOnlineGamesComplete )
		pFnOnFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 32631 ];

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms OnFindOnlineGamesComplete_Parms;
	OnFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif