/*
#############################################################################################
# Bullet Run (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemGameSpy_functions.h
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

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.QueryNonAdvertisedData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceGameSpy::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 33353 ];

	UOnlineGameInterfaceGameSpy_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	pFnQueryNonAdvertisedData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	pFnQueryNonAdvertisedData->FunctionFlags |= 0x400;

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.ClearUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceGameSpy::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33350 ];

	UOnlineGameInterfaceGameSpy_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.AddUnregisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceGameSpy::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33348 ];

	UOnlineGameInterfaceGameSpy_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.OnUnregisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceGameSpy::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 33289 ];

	UOnlineGameInterfaceGameSpy_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceGameSpy::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 33341 ];

	UOnlineGameInterfaceGameSpy_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	pFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.ClearRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceGameSpy::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33338 ];

	UOnlineGameInterfaceGameSpy_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.AddRegisterPlayerCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceGameSpy::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33336 ];

	UOnlineGameInterfaceGameSpy_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.OnRegisterPlayerComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceGameSpy::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 33286 ];

	UOnlineGameInterfaceGameSpy_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.RegisterPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceGameSpy::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 33328 ];

	UOnlineGameInterfaceGameSpy_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	pFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	pFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.AcceptGameInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceGameSpy::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 33324 ];

	UOnlineGameInterfaceGameSpy_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	pFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	pFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.OnGameInviteAccepted
// [0x00520000] 
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceGameSpy::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 33283 ];

	UOnlineGameInterfaceGameSpy_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0xC );
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.ClearGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceGameSpy::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33319 ];

	UOnlineGameInterfaceGameSpy_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.AddGameInviteAcceptedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceGameSpy::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33316 ];

	UOnlineGameInterfaceGameSpy_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineGameInterfaceGameSpy.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceGameSpy::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 33311 ];

	UOnlineGameInterfaceGameSpy_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	pFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	pFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.clearReconnection
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemGameSpy::clearReconnection ( )
{
	static UFunction* pFnclearReconnection = NULL;

	if ( ! pFnclearReconnection )
		pFnclearReconnection = (UFunction*) UObject::GObjObjects()->Data[ 34428 ];

	UOnlineSubsystemGameSpy_execclearReconnection_Parms clearReconnection_Parms;

	this->ProcessEvent ( pFnclearReconnection, &clearReconnection_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.JoinGameByURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LocationString                 ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::JoinGameByURL ( unsigned char LocalUserNum, struct FString LocationString )
{
	static UFunction* pFnJoinGameByURL = NULL;

	if ( ! pFnJoinGameByURL )
		pFnJoinGameByURL = (UFunction*) UObject::GObjObjects()->Data[ 34424 ];

	UOnlineSubsystemGameSpy_execJoinGameByURL_Parms JoinGameByURL_Parms;
	JoinGameByURL_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinGameByURL_Parms.LocationString, &LocationString, 0xC );

	pFnJoinGameByURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinGameByURL, &JoinGameByURL_Parms, NULL );

	pFnJoinGameByURL->FunctionFlags |= 0x400;

	return JoinGameByURL_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetOnlineStatusPwd
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            StatusId                       ( CPF_Parm )
// unsigned long                  bPasswordServer                ( CPF_Parm )

void UOnlineSubsystemGameSpy::SetOnlineStatusPwd ( unsigned char LocalUserNum, int StatusId, unsigned long bPasswordServer )
{
	static UFunction* pFnSetOnlineStatusPwd = NULL;

	if ( ! pFnSetOnlineStatusPwd )
		pFnSetOnlineStatusPwd = (UFunction*) UObject::GObjObjects()->Data[ 34420 ];

	UOnlineSubsystemGameSpy_execSetOnlineStatusPwd_Parms SetOnlineStatusPwd_Parms;
	SetOnlineStatusPwd_Parms.LocalUserNum = LocalUserNum;
	SetOnlineStatusPwd_Parms.StatusId = StatusId;
	SetOnlineStatusPwd_Parms.bPasswordServer = bPasswordServer;

	pFnSetOnlineStatusPwd->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOnlineStatusPwd, &SetOnlineStatusPwd_Parms, NULL );

	pFnSetOnlineStatusPwd->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.DisableVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::DisableVoice ( )
{
	static UFunction* pFnDisableVoice = NULL;

	if ( ! pFnDisableVoice )
		pFnDisableVoice = (UFunction*) UObject::GObjObjects()->Data[ 34418 ];

	UOnlineSubsystemGameSpy_execDisableVoice_Parms DisableVoice_Parms;

	pFnDisableVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisableVoice, &DisableVoice_Parms, NULL );

	pFnDisableVoice->FunctionFlags |= 0x400;

	return DisableVoice_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.EnableVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::EnableVoice ( )
{
	static UFunction* pFnEnableVoice = NULL;

	if ( ! pFnEnableVoice )
		pFnEnableVoice = (UFunction*) UObject::GObjObjects()->Data[ 34416 ];

	UOnlineSubsystemGameSpy_execEnableVoice_Parms EnableVoice_Parms;

	pFnEnableVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableVoice, &EnableVoice_Parms, NULL );

	pFnEnableVoice->FunctionFlags |= 0x400;

	return EnableVoice_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsVoiceEnabled
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::IsVoiceEnabled ( )
{
	static UFunction* pFnIsVoiceEnabled = NULL;

	if ( ! pFnIsVoiceEnabled )
		pFnIsVoiceEnabled = (UFunction*) UObject::GObjObjects()->Data[ 34414 ];

	UOnlineSubsystemGameSpy_execIsVoiceEnabled_Parms IsVoiceEnabled_Parms;

	pFnIsVoiceEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsVoiceEnabled, &IsVoiceEnabled_Parms, NULL );

	pFnIsVoiceEnabled->FunctionFlags |= 0x400;

	return IsVoiceEnabled_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetFriendshipList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::GetFriendshipList ( )
{
	static UFunction* pFnGetFriendshipList = NULL;

	if ( ! pFnGetFriendshipList )
		pFnGetFriendshipList = (UFunction*) UObject::GObjObjects()->Data[ 34412 ];

	UOnlineSubsystemGameSpy_execGetFriendshipList_Parms GetFriendshipList_Parms;

	pFnGetFriendshipList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFriendshipList, &GetFriendshipList_Parms, NULL );

	pFnGetFriendshipList->FunctionFlags |= 0x400;

	return GetFriendshipList_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UpdateBuddyFriendship
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            RecordId                       ( CPF_Parm )
// struct FString                 nick                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Status                         ( CPF_Parm )

bool UOnlineSubsystemGameSpy::UpdateBuddyFriendship ( int RecordId, struct FString nick, int Status )
{
	static UFunction* pFnUpdateBuddyFriendship = NULL;

	if ( ! pFnUpdateBuddyFriendship )
		pFnUpdateBuddyFriendship = (UFunction*) UObject::GObjObjects()->Data[ 34407 ];

	UOnlineSubsystemGameSpy_execUpdateBuddyFriendship_Parms UpdateBuddyFriendship_Parms;
	UpdateBuddyFriendship_Parms.RecordId = RecordId;
	memcpy ( &UpdateBuddyFriendship_Parms.nick, &nick, 0xC );
	UpdateBuddyFriendship_Parms.Status = Status;

	pFnUpdateBuddyFriendship->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateBuddyFriendship, &UpdateBuddyFriendship_Parms, NULL );

	pFnUpdateBuddyFriendship->FunctionFlags |= 0x400;

	return UpdateBuddyFriendship_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearGetFriendshipListDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetFriendshipListDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearGetFriendshipListDelegate ( struct FScriptDelegate GetFriendshipListDelegate )
{
	static UFunction* pFnClearGetFriendshipListDelegate = NULL;

	if ( ! pFnClearGetFriendshipListDelegate )
		pFnClearGetFriendshipListDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34404 ];

	UOnlineSubsystemGameSpy_execClearGetFriendshipListDelegate_Parms ClearGetFriendshipListDelegate_Parms;
	memcpy ( &ClearGetFriendshipListDelegate_Parms.GetFriendshipListDelegate, &GetFriendshipListDelegate, 0xC );

	this->ProcessEvent ( pFnClearGetFriendshipListDelegate, &ClearGetFriendshipListDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddGetFriendshipListDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetFriendshipListDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddGetFriendshipListDelegate ( struct FScriptDelegate GetFriendshipListDelegate )
{
	static UFunction* pFnAddGetFriendshipListDelegate = NULL;

	if ( ! pFnAddGetFriendshipListDelegate )
		pFnAddGetFriendshipListDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34401 ];

	UOnlineSubsystemGameSpy_execAddGetFriendshipListDelegate_Parms AddGetFriendshipListDelegate_Parms;
	memcpy ( &AddGetFriendshipListDelegate_Parms.GetFriendshipListDelegate, &GetFriendshipListDelegate, 0xC );

	this->ProcessEvent ( pFnAddGetFriendshipListDelegate, &AddGetFriendshipListDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearUpdateBuddyFriendshipCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UpdateBuddyFriendshipCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearUpdateBuddyFriendshipCompleteDelegate ( struct FScriptDelegate UpdateBuddyFriendshipCompleteDelegate )
{
	static UFunction* pFnClearUpdateBuddyFriendshipCompleteDelegate = NULL;

	if ( ! pFnClearUpdateBuddyFriendshipCompleteDelegate )
		pFnClearUpdateBuddyFriendshipCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34398 ];

	UOnlineSubsystemGameSpy_execClearUpdateBuddyFriendshipCompleteDelegate_Parms ClearUpdateBuddyFriendshipCompleteDelegate_Parms;
	memcpy ( &ClearUpdateBuddyFriendshipCompleteDelegate_Parms.UpdateBuddyFriendshipCompleteDelegate, &UpdateBuddyFriendshipCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUpdateBuddyFriendshipCompleteDelegate, &ClearUpdateBuddyFriendshipCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddUpdateBuddyFriendshipCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         UpdateBuddyFriendshipCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddUpdateBuddyFriendshipCompleteDelegate ( struct FScriptDelegate UpdateBuddyFriendshipCompleteDelegate )
{
	static UFunction* pFnAddUpdateBuddyFriendshipCompleteDelegate = NULL;

	if ( ! pFnAddUpdateBuddyFriendshipCompleteDelegate )
		pFnAddUpdateBuddyFriendshipCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34395 ];

	UOnlineSubsystemGameSpy_execAddUpdateBuddyFriendshipCompleteDelegate_Parms AddUpdateBuddyFriendshipCompleteDelegate_Parms;
	memcpy ( &AddUpdateBuddyFriendshipCompleteDelegate_Parms.UpdateBuddyFriendshipCompleteDelegate, &UpdateBuddyFriendshipCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUpdateBuddyFriendshipCompleteDelegate, &AddUpdateBuddyFriendshipCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnGetFriendshipListComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnGetFriendshipListComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnGetFriendshipListComplete = NULL;

	if ( ! pFnOnGetFriendshipListComplete )
		pFnOnGetFriendshipListComplete = (UFunction*) UObject::GObjObjects()->Data[ 34393 ];

	UOnlineSubsystemGameSpy_execOnGetFriendshipListComplete_Parms OnGetFriendshipListComplete_Parms;
	OnGetFriendshipListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnGetFriendshipListComplete, &OnGetFriendshipListComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnUpdateBuddyFriendshipComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// int                            RecordId                       ( CPF_Parm )
// struct FString                 nick                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            friendStatus                   ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnUpdateBuddyFriendshipComplete ( unsigned long bWasSuccessful, int RecordId, struct FString nick, int friendStatus )
{
	static UFunction* pFnOnUpdateBuddyFriendshipComplete = NULL;

	if ( ! pFnOnUpdateBuddyFriendshipComplete )
		pFnOnUpdateBuddyFriendshipComplete = (UFunction*) UObject::GObjObjects()->Data[ 34388 ];

	UOnlineSubsystemGameSpy_execOnUpdateBuddyFriendshipComplete_Parms OnUpdateBuddyFriendshipComplete_Parms;
	OnUpdateBuddyFriendshipComplete_Parms.bWasSuccessful = bWasSuccessful;
	OnUpdateBuddyFriendshipComplete_Parms.RecordId = RecordId;
	memcpy ( &OnUpdateBuddyFriendshipComplete_Parms.nick, &nick, 0xC );
	OnUpdateBuddyFriendshipComplete_Parms.friendStatus = friendStatus;

	this->ProcessEvent ( pFnOnUpdateBuddyFriendshipComplete, &OnUpdateBuddyFriendshipComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetLastBuddyImageIndexArray
// [0x00020002] 
// Parameters infos:
// TArray< struct FBuddyImageIndexContainer > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FBuddyImageIndexContainer > UOnlineSubsystemGameSpy::GetLastBuddyImageIndexArray ( )
{
	static UFunction* pFnGetLastBuddyImageIndexArray = NULL;

	if ( ! pFnGetLastBuddyImageIndexArray )
		pFnGetLastBuddyImageIndexArray = (UFunction*) UObject::GObjObjects()->Data[ 34384 ];

	UOnlineSubsystemGameSpy_execGetLastBuddyImageIndexArray_Parms GetLastBuddyImageIndexArray_Parms;

	this->ProcessEvent ( pFnGetLastBuddyImageIndexArray, &GetLastBuddyImageIndexArray_Parms, NULL );

	return GetLastBuddyImageIndexArray_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearGetBuddyListImageIndexCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetBuddyListImageIndexCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearGetBuddyListImageIndexCompleteDelegate ( struct FScriptDelegate GetBuddyListImageIndexCompleteDelegate )
{
	static UFunction* pFnClearGetBuddyListImageIndexCompleteDelegate = NULL;

	if ( ! pFnClearGetBuddyListImageIndexCompleteDelegate )
		pFnClearGetBuddyListImageIndexCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34381 ];

	UOnlineSubsystemGameSpy_execClearGetBuddyListImageIndexCompleteDelegate_Parms ClearGetBuddyListImageIndexCompleteDelegate_Parms;
	memcpy ( &ClearGetBuddyListImageIndexCompleteDelegate_Parms.GetBuddyListImageIndexCompleteDelegate, &GetBuddyListImageIndexCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearGetBuddyListImageIndexCompleteDelegate, &ClearGetBuddyListImageIndexCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddGetBuddyListImageIndexCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetBuddyListImageIndexCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddGetBuddyListImageIndexCompleteDelegate ( struct FScriptDelegate GetBuddyListImageIndexCompleteDelegate )
{
	static UFunction* pFnAddGetBuddyListImageIndexCompleteDelegate = NULL;

	if ( ! pFnAddGetBuddyListImageIndexCompleteDelegate )
		pFnAddGetBuddyListImageIndexCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34378 ];

	UOnlineSubsystemGameSpy_execAddGetBuddyListImageIndexCompleteDelegate_Parms AddGetBuddyListImageIndexCompleteDelegate_Parms;
	memcpy ( &AddGetBuddyListImageIndexCompleteDelegate_Parms.GetBuddyListImageIndexCompleteDelegate, &GetBuddyListImageIndexCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddGetBuddyListImageIndexCompleteDelegate, &AddGetBuddyListImageIndexCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnGetBuddyListImageIndexComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnGetBuddyListImageIndexComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnGetBuddyListImageIndexComplete = NULL;

	if ( ! pFnOnGetBuddyListImageIndexComplete )
		pFnOnGetBuddyListImageIndexComplete = (UFunction*) UObject::GObjObjects()->Data[ 34376 ];

	UOnlineSubsystemGameSpy_execOnGetBuddyListImageIndexComplete_Parms OnGetBuddyListImageIndexComplete_Parms;
	OnGetBuddyListImageIndexComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnGetBuddyListImageIndexComplete, &OnGetBuddyListImageIndexComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetBuddyListImageIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       NickNames                      ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::GetBuddyListImageIndex ( TArray< struct FString > NickNames )
{
	static UFunction* pFnGetBuddyListImageIndex = NULL;

	if ( ! pFnGetBuddyListImageIndex )
		pFnGetBuddyListImageIndex = (UFunction*) UObject::GObjObjects()->Data[ 34372 ];

	UOnlineSubsystemGameSpy_execGetBuddyListImageIndex_Parms GetBuddyListImageIndex_Parms;
	memcpy ( &GetBuddyListImageIndex_Parms.NickNames, &NickNames, 0xC );

	pFnGetBuddyListImageIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBuddyListImageIndex, &GetBuddyListImageIndex_Parms, NULL );

	pFnGetBuddyListImageIndex->FunctionFlags |= 0x400;

	return GetBuddyListImageIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetCurrentByteData
// [0x00420002] 
// Parameters infos:
// TArray< unsigned char >        Data                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::GetCurrentByteData ( TArray< unsigned char >* Data )
{
	static UFunction* pFnGetCurrentByteData = NULL;

	if ( ! pFnGetCurrentByteData )
		pFnGetCurrentByteData = (UFunction*) UObject::GObjObjects()->Data[ 34368 ];

	UOnlineSubsystemGameSpy_execGetCurrentByteData_Parms GetCurrentByteData_Parms;

	this->ProcessEvent ( pFnGetCurrentByteData, &GetCurrentByteData_Parms, NULL );

	if ( Data )
		memcpy ( Data, &GetCurrentByteData_Parms.Data, 0xC );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearWriteByteDataCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteByteDataCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearWriteByteDataCompleteDelegate ( struct FScriptDelegate WriteByteDataCompleteDelegate )
{
	static UFunction* pFnClearWriteByteDataCompleteDelegate = NULL;

	if ( ! pFnClearWriteByteDataCompleteDelegate )
		pFnClearWriteByteDataCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34365 ];

	UOnlineSubsystemGameSpy_execClearWriteByteDataCompleteDelegate_Parms ClearWriteByteDataCompleteDelegate_Parms;
	memcpy ( &ClearWriteByteDataCompleteDelegate_Parms.WriteByteDataCompleteDelegate, &WriteByteDataCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWriteByteDataCompleteDelegate, &ClearWriteByteDataCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddWriteByteDataCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         WriteByteDataCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddWriteByteDataCompleteDelegate ( struct FScriptDelegate WriteByteDataCompleteDelegate )
{
	static UFunction* pFnAddWriteByteDataCompleteDelegate = NULL;

	if ( ! pFnAddWriteByteDataCompleteDelegate )
		pFnAddWriteByteDataCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34362 ];

	UOnlineSubsystemGameSpy_execAddWriteByteDataCompleteDelegate_Parms AddWriteByteDataCompleteDelegate_Parms;
	memcpy ( &AddWriteByteDataCompleteDelegate_Parms.WriteByteDataCompleteDelegate, &WriteByteDataCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWriteByteDataCompleteDelegate, &AddWriteByteDataCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnWriteByteDataComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnWriteByteDataComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteByteDataComplete = NULL;

	if ( ! pFnOnWriteByteDataComplete )
		pFnOnWriteByteDataComplete = (UFunction*) UObject::GObjObjects()->Data[ 34360 ];

	UOnlineSubsystemGameSpy_execOnWriteByteDataComplete_Parms OnWriteByteDataComplete_Parms;
	OnWriteByteDataComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteByteDataComplete, &OnWriteByteDataComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WriteByteData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bCreateNew                     ( CPF_Parm )
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 table_name                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 field_name                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::WriteByteData ( unsigned char LocalUserNum, unsigned long bCreateNew, TArray< unsigned char >* Data, struct FString* table_name, struct FString* field_name )
{
	static UFunction* pFnWriteByteData = NULL;

	if ( ! pFnWriteByteData )
		pFnWriteByteData = (UFunction*) UObject::GObjObjects()->Data[ 34352 ];

	UOnlineSubsystemGameSpy_execWriteByteData_Parms WriteByteData_Parms;
	WriteByteData_Parms.LocalUserNum = LocalUserNum;
	WriteByteData_Parms.bCreateNew = bCreateNew;

	pFnWriteByteData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteByteData, &WriteByteData_Parms, NULL );

	pFnWriteByteData->FunctionFlags |= 0x400;

	if ( Data )
		memcpy ( Data, &WriteByteData_Parms.Data, 0xC );

	if ( table_name )
		memcpy ( table_name, &WriteByteData_Parms.table_name, 0xC );

	if ( field_name )
		memcpy ( field_name, &WriteByteData_Parms.field_name, 0xC );

	return WriteByteData_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadByteDataCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadByteDataCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadByteDataCompleteDelegate ( struct FScriptDelegate ReadByteDataCompleteDelegate )
{
	static UFunction* pFnClearReadByteDataCompleteDelegate = NULL;

	if ( ! pFnClearReadByteDataCompleteDelegate )
		pFnClearReadByteDataCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34349 ];

	UOnlineSubsystemGameSpy_execClearReadByteDataCompleteDelegate_Parms ClearReadByteDataCompleteDelegate_Parms;
	memcpy ( &ClearReadByteDataCompleteDelegate_Parms.ReadByteDataCompleteDelegate, &ReadByteDataCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadByteDataCompleteDelegate, &ClearReadByteDataCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadByteDataCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadByteDataCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadByteDataCompleteDelegate ( struct FScriptDelegate ReadByteDataCompleteDelegate )
{
	static UFunction* pFnAddReadByteDataCompleteDelegate = NULL;

	if ( ! pFnAddReadByteDataCompleteDelegate )
		pFnAddReadByteDataCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34346 ];

	UOnlineSubsystemGameSpy_execAddReadByteDataCompleteDelegate_Parms AddReadByteDataCompleteDelegate_Parms;
	memcpy ( &AddReadByteDataCompleteDelegate_Parms.ReadByteDataCompleteDelegate, &ReadByteDataCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadByteDataCompleteDelegate, &AddReadByteDataCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadByteDataComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnReadByteDataComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadByteDataComplete = NULL;

	if ( ! pFnOnReadByteDataComplete )
		pFnOnReadByteDataComplete = (UFunction*) UObject::GObjObjects()->Data[ 34344 ];

	UOnlineSubsystemGameSpy_execOnReadByteDataComplete_Parms OnReadByteDataComplete_Parms;
	OnReadByteDataComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadByteDataComplete, &OnReadByteDataComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadByteData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 table_name                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 field_name                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::ReadByteData ( unsigned char LocalUserNum, struct FString* table_name, struct FString* field_name )
{
	static UFunction* pFnReadByteData = NULL;

	if ( ! pFnReadByteData )
		pFnReadByteData = (UFunction*) UObject::GObjObjects()->Data[ 34339 ];

	UOnlineSubsystemGameSpy_execReadByteData_Parms ReadByteData_Parms;
	ReadByteData_Parms.LocalUserNum = LocalUserNum;

	pFnReadByteData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadByteData, &ReadByteData_Parms, NULL );

	pFnReadByteData->FunctionFlags |= 0x400;

	if ( table_name )
		memcpy ( table_name, &ReadByteData_Parms.table_name, 0xC );

	if ( field_name )
		memcpy ( field_name, &ReadByteData_Parms.field_name, 0xC );

	return ReadByteData_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ValidateAndSaveKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 CDKey                          ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::ValidateAndSaveKey ( struct FString CDKey )
{
	static UFunction* pFnValidateAndSaveKey = NULL;

	if ( ! pFnValidateAndSaveKey )
		pFnValidateAndSaveKey = (UFunction*) UObject::GObjObjects()->Data[ 34336 ];

	UOnlineSubsystemGameSpy_execValidateAndSaveKey_Parms ValidateAndSaveKey_Parms;
	memcpy ( &ValidateAndSaveKey_Parms.CDKey, &CDKey, 0xC );

	pFnValidateAndSaveKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnValidateAndSaveKey, &ValidateAndSaveKey_Parms, NULL );

	pFnValidateAndSaveKey->FunctionFlags |= 0x400;

	return ValidateAndSaveKey_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearOnValidateAndSaveKeyDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         OnValidateAndSaveKeyDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearOnValidateAndSaveKeyDelegate ( struct FScriptDelegate OnValidateAndSaveKeyDelegate )
{
	static UFunction* pFnClearOnValidateAndSaveKeyDelegate = NULL;

	if ( ! pFnClearOnValidateAndSaveKeyDelegate )
		pFnClearOnValidateAndSaveKeyDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34333 ];

	UOnlineSubsystemGameSpy_execClearOnValidateAndSaveKeyDelegate_Parms ClearOnValidateAndSaveKeyDelegate_Parms;
	memcpy ( &ClearOnValidateAndSaveKeyDelegate_Parms.OnValidateAndSaveKeyDelegate, &OnValidateAndSaveKeyDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnValidateAndSaveKeyDelegate, &ClearOnValidateAndSaveKeyDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddOnValidateAndSaveKeyDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         OnValidateAndSaveKeyDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddOnValidateAndSaveKeyDelegate ( struct FScriptDelegate OnValidateAndSaveKeyDelegate )
{
	static UFunction* pFnAddOnValidateAndSaveKeyDelegate = NULL;

	if ( ! pFnAddOnValidateAndSaveKeyDelegate )
		pFnAddOnValidateAndSaveKeyDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34330 ];

	UOnlineSubsystemGameSpy_execAddOnValidateAndSaveKeyDelegate_Parms AddOnValidateAndSaveKeyDelegate_Parms;
	memcpy ( &AddOnValidateAndSaveKeyDelegate_Parms.OnValidateAndSaveKeyDelegate, &OnValidateAndSaveKeyDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnValidateAndSaveKeyDelegate, &AddOnValidateAndSaveKeyDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnValidateAndSaveKey
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnValidateAndSaveKey ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnValidateAndSaveKey = NULL;

	if ( ! pFnOnValidateAndSaveKey )
		pFnOnValidateAndSaveKey = (UFunction*) UObject::GObjObjects()->Data[ 34328 ];

	UOnlineSubsystemGameSpy_execOnValidateAndSaveKey_Parms OnValidateAndSaveKey_Parms;
	OnValidateAndSaveKey_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnValidateAndSaveKey, &OnValidateAndSaveKey_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPublicAddress
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemGameSpy::GetPublicAddress ( )
{
	static UFunction* pFnGetPublicAddress = NULL;

	if ( ! pFnGetPublicAddress )
		pFnGetPublicAddress = (UFunction*) UObject::GObjObjects()->Data[ 34326 ];

	UOnlineSubsystemGameSpy_execGetPublicAddress_Parms GetPublicAddress_Parms;

	pFnGetPublicAddress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPublicAddress, &GetPublicAddress_Parms, NULL );

	pFnGetPublicAddress->FunctionFlags |= 0x400;

	return GetPublicAddress_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatSendMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ChatSendMessage ( struct FString Channel, struct FString Message )
{
	static UFunction* pFnChatSendMessage = NULL;

	if ( ! pFnChatSendMessage )
		pFnChatSendMessage = (UFunction*) UObject::GObjObjects()->Data[ 34323 ];

	UOnlineSubsystemGameSpy_execChatSendMessage_Parms ChatSendMessage_Parms;
	memcpy ( &ChatSendMessage_Parms.Channel, &Channel, 0xC );
	memcpy ( &ChatSendMessage_Parms.Message, &Message, 0xC );

	pFnChatSendMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChatSendMessage, &ChatSendMessage_Parms, NULL );

	pFnChatSendMessage->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearOnChatUserPartedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatUserPartedDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearOnChatUserPartedDelegate ( struct FScriptDelegate ChatUserPartedDelegate )
{
	static UFunction* pFnClearOnChatUserPartedDelegate = NULL;

	if ( ! pFnClearOnChatUserPartedDelegate )
		pFnClearOnChatUserPartedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34320 ];

	UOnlineSubsystemGameSpy_execClearOnChatUserPartedDelegate_Parms ClearOnChatUserPartedDelegate_Parms;
	memcpy ( &ClearOnChatUserPartedDelegate_Parms.ChatUserPartedDelegate, &ChatUserPartedDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnChatUserPartedDelegate, &ClearOnChatUserPartedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddOnChatUserPartedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatUserPartedDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddOnChatUserPartedDelegate ( struct FScriptDelegate ChatUserPartedDelegate )
{
	static UFunction* pFnAddOnChatUserPartedDelegate = NULL;

	if ( ! pFnAddOnChatUserPartedDelegate )
		pFnAddOnChatUserPartedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34317 ];

	UOnlineSubsystemGameSpy_execAddOnChatUserPartedDelegate_Parms AddOnChatUserPartedDelegate_Parms;
	memcpy ( &AddOnChatUserPartedDelegate_Parms.ChatUserPartedDelegate, &ChatUserPartedDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnChatUserPartedDelegate, &AddOnChatUserPartedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatUserParted
// [0x00120000] 
// Parameters infos:
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnChatUserParted ( struct FString Channel, struct FString NickName )
{
	static UFunction* pFnOnChatUserParted = NULL;

	if ( ! pFnOnChatUserParted )
		pFnOnChatUserParted = (UFunction*) UObject::GObjObjects()->Data[ 34314 ];

	UOnlineSubsystemGameSpy_execOnChatUserParted_Parms OnChatUserParted_Parms;
	memcpy ( &OnChatUserParted_Parms.Channel, &Channel, 0xC );
	memcpy ( &OnChatUserParted_Parms.NickName, &NickName, 0xC );

	this->ProcessEvent ( pFnOnChatUserParted, &OnChatUserParted_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearOnChatUserJoinedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatUserJoinedDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearOnChatUserJoinedDelegate ( struct FScriptDelegate ChatUserJoinedDelegate )
{
	static UFunction* pFnClearOnChatUserJoinedDelegate = NULL;

	if ( ! pFnClearOnChatUserJoinedDelegate )
		pFnClearOnChatUserJoinedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34311 ];

	UOnlineSubsystemGameSpy_execClearOnChatUserJoinedDelegate_Parms ClearOnChatUserJoinedDelegate_Parms;
	memcpy ( &ClearOnChatUserJoinedDelegate_Parms.ChatUserJoinedDelegate, &ChatUserJoinedDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnChatUserJoinedDelegate, &ClearOnChatUserJoinedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddOnChatUserJoinedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatUserJoinedDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddOnChatUserJoinedDelegate ( struct FScriptDelegate ChatUserJoinedDelegate )
{
	static UFunction* pFnAddOnChatUserJoinedDelegate = NULL;

	if ( ! pFnAddOnChatUserJoinedDelegate )
		pFnAddOnChatUserJoinedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34308 ];

	UOnlineSubsystemGameSpy_execAddOnChatUserJoinedDelegate_Parms AddOnChatUserJoinedDelegate_Parms;
	memcpy ( &AddOnChatUserJoinedDelegate_Parms.ChatUserJoinedDelegate, &ChatUserJoinedDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnChatUserJoinedDelegate, &AddOnChatUserJoinedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatUserJoined
// [0x00120000] 
// Parameters infos:
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnChatUserJoined ( struct FString Channel, struct FString NickName )
{
	static UFunction* pFnOnChatUserJoined = NULL;

	if ( ! pFnOnChatUserJoined )
		pFnOnChatUserJoined = (UFunction*) UObject::GObjObjects()->Data[ 34305 ];

	UOnlineSubsystemGameSpy_execOnChatUserJoined_Parms OnChatUserJoined_Parms;
	memcpy ( &OnChatUserJoined_Parms.Channel, &Channel, 0xC );
	memcpy ( &OnChatUserJoined_Parms.NickName, &NickName, 0xC );

	this->ProcessEvent ( pFnOnChatUserJoined, &OnChatUserJoined_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearOnChatMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatMessageReceivedDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearOnChatMessageReceivedDelegate ( struct FScriptDelegate ChatMessageReceivedDelegate )
{
	static UFunction* pFnClearOnChatMessageReceivedDelegate = NULL;

	if ( ! pFnClearOnChatMessageReceivedDelegate )
		pFnClearOnChatMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34302 ];

	UOnlineSubsystemGameSpy_execClearOnChatMessageReceivedDelegate_Parms ClearOnChatMessageReceivedDelegate_Parms;
	memcpy ( &ClearOnChatMessageReceivedDelegate_Parms.ChatMessageReceivedDelegate, &ChatMessageReceivedDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnChatMessageReceivedDelegate, &ClearOnChatMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddOnChatMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatMessageReceivedDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddOnChatMessageReceivedDelegate ( struct FScriptDelegate ChatMessageReceivedDelegate )
{
	static UFunction* pFnAddOnChatMessageReceivedDelegate = NULL;

	if ( ! pFnAddOnChatMessageReceivedDelegate )
		pFnAddOnChatMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34299 ];

	UOnlineSubsystemGameSpy_execAddOnChatMessageReceivedDelegate_Parms AddOnChatMessageReceivedDelegate_Parms;
	memcpy ( &AddOnChatMessageReceivedDelegate_Parms.ChatMessageReceivedDelegate, &ChatMessageReceivedDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnChatMessageReceivedDelegate, &AddOnChatMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatMessageReceived
// [0x00120000] 
// Parameters infos:
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnChatMessageReceived ( struct FString Channel, struct FString NickName, struct FString Message )
{
	static UFunction* pFnOnChatMessageReceived = NULL;

	if ( ! pFnOnChatMessageReceived )
		pFnOnChatMessageReceived = (UFunction*) UObject::GObjObjects()->Data[ 34295 ];

	UOnlineSubsystemGameSpy_execOnChatMessageReceived_Parms OnChatMessageReceived_Parms;
	memcpy ( &OnChatMessageReceived_Parms.Channel, &Channel, 0xC );
	memcpy ( &OnChatMessageReceived_Parms.NickName, &NickName, 0xC );
	memcpy ( &OnChatMessageReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnChatMessageReceived, &OnChatMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatLeaveChannel
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ChatLeaveChannel ( struct FString Channel )
{
	static UFunction* pFnChatLeaveChannel = NULL;

	if ( ! pFnChatLeaveChannel )
		pFnChatLeaveChannel = (UFunction*) UObject::GObjObjects()->Data[ 34293 ];

	UOnlineSubsystemGameSpy_execChatLeaveChannel_Parms ChatLeaveChannel_Parms;
	memcpy ( &ChatLeaveChannel_Parms.Channel, &Channel, 0xC );

	pFnChatLeaveChannel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChatLeaveChannel, &ChatLeaveChannel_Parms, NULL );

	pFnChatLeaveChannel->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatGetNumUsers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )

int UOnlineSubsystemGameSpy::ChatGetNumUsers ( struct FString Channel )
{
	static UFunction* pFnChatGetNumUsers = NULL;

	if ( ! pFnChatGetNumUsers )
		pFnChatGetNumUsers = (UFunction*) UObject::GObjObjects()->Data[ 34290 ];

	UOnlineSubsystemGameSpy_execChatGetNumUsers_Parms ChatGetNumUsers_Parms;
	memcpy ( &ChatGetNumUsers_Parms.Channel, &Channel, 0xC );

	pFnChatGetNumUsers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChatGetNumUsers, &ChatGetNumUsers_Parms, NULL );

	pFnChatGetNumUsers->FunctionFlags |= 0x400;

	return ChatGetNumUsers_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearChatEnterChannelCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatEnterChannelCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearChatEnterChannelCompleteDelegate ( struct FScriptDelegate ChatEnterChannelCompleteDelegate )
{
	static UFunction* pFnClearChatEnterChannelCompleteDelegate = NULL;

	if ( ! pFnClearChatEnterChannelCompleteDelegate )
		pFnClearChatEnterChannelCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34287 ];

	UOnlineSubsystemGameSpy_execClearChatEnterChannelCompleteDelegate_Parms ClearChatEnterChannelCompleteDelegate_Parms;
	memcpy ( &ClearChatEnterChannelCompleteDelegate_Parms.ChatEnterChannelCompleteDelegate, &ChatEnterChannelCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearChatEnterChannelCompleteDelegate, &ClearChatEnterChannelCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddChatEnterChannelCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatEnterChannelCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddChatEnterChannelCompleteDelegate ( struct FScriptDelegate ChatEnterChannelCompleteDelegate )
{
	static UFunction* pFnAddChatEnterChannelCompleteDelegate = NULL;

	if ( ! pFnAddChatEnterChannelCompleteDelegate )
		pFnAddChatEnterChannelCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34284 ];

	UOnlineSubsystemGameSpy_execAddChatEnterChannelCompleteDelegate_Parms AddChatEnterChannelCompleteDelegate_Parms;
	memcpy ( &AddChatEnterChannelCompleteDelegate_Parms.ChatEnterChannelCompleteDelegate, &ChatEnterChannelCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddChatEnterChannelCompleteDelegate, &AddChatEnterChannelCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatEnterChannelComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnChatEnterChannelComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnChatEnterChannelComplete = NULL;

	if ( ! pFnOnChatEnterChannelComplete )
		pFnOnChatEnterChannelComplete = (UFunction*) UObject::GObjObjects()->Data[ 34282 ];

	UOnlineSubsystemGameSpy_execOnChatEnterChannelComplete_Parms OnChatEnterChannelComplete_Parms;
	OnChatEnterChannelComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnChatEnterChannelComplete, &OnChatEnterChannelComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatEnterChannel
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Channel                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::ChatEnterChannel ( struct FString Channel )
{
	static UFunction* pFnChatEnterChannel = NULL;

	if ( ! pFnChatEnterChannel )
		pFnChatEnterChannel = (UFunction*) UObject::GObjObjects()->Data[ 34279 ];

	UOnlineSubsystemGameSpy_execChatEnterChannel_Parms ChatEnterChannel_Parms;
	memcpy ( &ChatEnterChannel_Parms.Channel, &Channel, 0xC );

	pFnChatEnterChannel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChatEnterChannel, &ChatEnterChannel_Parms, NULL );

	pFnChatEnterChannel->FunctionFlags |= 0x400;

	return ChatEnterChannel_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatDisconnect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemGameSpy::ChatDisconnect ( )
{
	static UFunction* pFnChatDisconnect = NULL;

	if ( ! pFnChatDisconnect )
		pFnChatDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 34278 ];

	UOnlineSubsystemGameSpy_execChatDisconnect_Parms ChatDisconnect_Parms;

	pFnChatDisconnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChatDisconnect, &ChatDisconnect_Parms, NULL );

	pFnChatDisconnect->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearChatDisconnectedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatDisconnectedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearChatDisconnectedDelegate ( struct FScriptDelegate ChatDisconnectedDelegate )
{
	static UFunction* pFnClearChatDisconnectedDelegate = NULL;

	if ( ! pFnClearChatDisconnectedDelegate )
		pFnClearChatDisconnectedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34275 ];

	UOnlineSubsystemGameSpy_execClearChatDisconnectedDelegate_Parms ClearChatDisconnectedDelegate_Parms;
	memcpy ( &ClearChatDisconnectedDelegate_Parms.ChatDisconnectedDelegate, &ChatDisconnectedDelegate, 0xC );

	this->ProcessEvent ( pFnClearChatDisconnectedDelegate, &ClearChatDisconnectedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddChatDisconnectedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatDisconnectedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddChatDisconnectedDelegate ( struct FScriptDelegate ChatDisconnectedDelegate )
{
	static UFunction* pFnAddChatDisconnectedDelegate = NULL;

	if ( ! pFnAddChatDisconnectedDelegate )
		pFnAddChatDisconnectedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34272 ];

	UOnlineSubsystemGameSpy_execAddChatDisconnectedDelegate_Parms AddChatDisconnectedDelegate_Parms;
	memcpy ( &AddChatDisconnectedDelegate_Parms.ChatDisconnectedDelegate, &ChatDisconnectedDelegate, 0xC );

	this->ProcessEvent ( pFnAddChatDisconnectedDelegate, &AddChatDisconnectedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatDisconnected
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemGameSpy::OnChatDisconnected ( )
{
	static UFunction* pFnOnChatDisconnected = NULL;

	if ( ! pFnOnChatDisconnected )
		pFnOnChatDisconnected = (UFunction*) UObject::GObjObjects()->Data[ 34271 ];

	UOnlineSubsystemGameSpy_execOnChatDisconnected_Parms OnChatDisconnected_Parms;

	this->ProcessEvent ( pFnOnChatDisconnected, &OnChatDisconnected_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearChatConnectedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatConnectedDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearChatConnectedDelegate ( struct FScriptDelegate ChatConnectedDelegate )
{
	static UFunction* pFnClearChatConnectedDelegate = NULL;

	if ( ! pFnClearChatConnectedDelegate )
		pFnClearChatConnectedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34268 ];

	UOnlineSubsystemGameSpy_execClearChatConnectedDelegate_Parms ClearChatConnectedDelegate_Parms;
	memcpy ( &ClearChatConnectedDelegate_Parms.ChatConnectedDelegate, &ChatConnectedDelegate, 0xC );

	this->ProcessEvent ( pFnClearChatConnectedDelegate, &ClearChatConnectedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddChatConnectedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ChatConnectedDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddChatConnectedDelegate ( struct FScriptDelegate ChatConnectedDelegate )
{
	static UFunction* pFnAddChatConnectedDelegate = NULL;

	if ( ! pFnAddChatConnectedDelegate )
		pFnAddChatConnectedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34265 ];

	UOnlineSubsystemGameSpy_execAddChatConnectedDelegate_Parms AddChatConnectedDelegate_Parms;
	memcpy ( &AddChatConnectedDelegate_Parms.ChatConnectedDelegate, &ChatConnectedDelegate, 0xC );

	this->ProcessEvent ( pFnAddChatConnectedDelegate, &AddChatConnectedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ChatConnect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Server                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::ChatConnect ( struct FString Server, struct FString NickName )
{
	static UFunction* pFnChatConnect = NULL;

	if ( ! pFnChatConnect )
		pFnChatConnect = (UFunction*) UObject::GObjObjects()->Data[ 34261 ];

	UOnlineSubsystemGameSpy_execChatConnect_Parms ChatConnect_Parms;
	memcpy ( &ChatConnect_Parms.Server, &Server, 0xC );
	memcpy ( &ChatConnect_Parms.NickName, &NickName, 0xC );

	pFnChatConnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChatConnect, &ChatConnect_Parms, NULL );

	pFnChatConnect->FunctionFlags |= 0x400;

	return ChatConnect_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsChannelConnected
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sChannel                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::IsChannelConnected ( struct FString sChannel )
{
	static UFunction* pFnIsChannelConnected = NULL;

	if ( ! pFnIsChannelConnected )
		pFnIsChannelConnected = (UFunction*) UObject::GObjObjects()->Data[ 34257 ];

	UOnlineSubsystemGameSpy_execIsChannelConnected_Parms IsChannelConnected_Parms;
	memcpy ( &IsChannelConnected_Parms.sChannel, &sChannel, 0xC );

	this->ProcessEvent ( pFnIsChannelConnected, &IsChannelConnected_Parms, NULL );

	return IsChannelConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsChatConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::IsChatConnected ( )
{
	static UFunction* pFnIsChatConnected = NULL;

	if ( ! pFnIsChatConnected )
		pFnIsChatConnected = (UFunction*) UObject::GObjObjects()->Data[ 34255 ];

	UOnlineSubsystemGameSpy_execIsChatConnected_Parms IsChatConnected_Parms;

	pFnIsChatConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsChatConnected, &IsChatConnected_Parms, NULL );

	pFnIsChatConnected->FunctionFlags |= 0x400;

	return IsChatConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnChatConnected
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnChatConnected ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnChatConnected = NULL;

	if ( ! pFnOnChatConnected )
		pFnOnChatConnected = (UFunction*) UObject::GObjObjects()->Data[ 34253 ];

	UOnlineSubsystemGameSpy_execOnChatConnected_Parms OnChatConnected_Parms;
	OnChatConnected_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnChatConnected, &OnChatConnected_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReturnBuddyImageIndex
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FBuddyImageIndexContainer BuddyImageIndex                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemGameSpy::ReturnBuddyImageIndex ( struct FBuddyImageIndexContainer* BuddyImageIndex )
{
	static UFunction* pFnReturnBuddyImageIndex = NULL;

	if ( ! pFnReturnBuddyImageIndex )
		pFnReturnBuddyImageIndex = (UFunction*) UObject::GObjObjects()->Data[ 34250 ];

	UOnlineSubsystemGameSpy_execReturnBuddyImageIndex_Parms ReturnBuddyImageIndex_Parms;

	pFnReturnBuddyImageIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReturnBuddyImageIndex, &ReturnBuddyImageIndex_Parms, NULL );

	pFnReturnBuddyImageIndex->FunctionFlags |= 0x400;

	if ( BuddyImageIndex )
		memcpy ( BuddyImageIndex, &ReturnBuddyImageIndex_Parms.BuddyImageIndex, 0x10 );

	return ReturnBuddyImageIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearGetBuddyImageIndexCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetBuddyImageIndexCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearGetBuddyImageIndexCompleteDelegate ( struct FScriptDelegate GetBuddyImageIndexCompleteDelegate )
{
	static UFunction* pFnClearGetBuddyImageIndexCompleteDelegate = NULL;

	if ( ! pFnClearGetBuddyImageIndexCompleteDelegate )
		pFnClearGetBuddyImageIndexCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34247 ];

	UOnlineSubsystemGameSpy_execClearGetBuddyImageIndexCompleteDelegate_Parms ClearGetBuddyImageIndexCompleteDelegate_Parms;
	memcpy ( &ClearGetBuddyImageIndexCompleteDelegate_Parms.GetBuddyImageIndexCompleteDelegate, &GetBuddyImageIndexCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearGetBuddyImageIndexCompleteDelegate, &ClearGetBuddyImageIndexCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddGetBuddyImageIndexCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         GetBuddyImageIndexCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddGetBuddyImageIndexCompleteDelegate ( struct FScriptDelegate GetBuddyImageIndexCompleteDelegate )
{
	static UFunction* pFnAddGetBuddyImageIndexCompleteDelegate = NULL;

	if ( ! pFnAddGetBuddyImageIndexCompleteDelegate )
		pFnAddGetBuddyImageIndexCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34244 ];

	UOnlineSubsystemGameSpy_execAddGetBuddyImageIndexCompleteDelegate_Parms AddGetBuddyImageIndexCompleteDelegate_Parms;
	memcpy ( &AddGetBuddyImageIndexCompleteDelegate_Parms.GetBuddyImageIndexCompleteDelegate, &GetBuddyImageIndexCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddGetBuddyImageIndexCompleteDelegate, &AddGetBuddyImageIndexCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnGetBuddyImageIndexComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnGetBuddyImageIndexComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnGetBuddyImageIndexComplete = NULL;

	if ( ! pFnOnGetBuddyImageIndexComplete )
		pFnOnGetBuddyImageIndexComplete = (UFunction*) UObject::GObjObjects()->Data[ 34242 ];

	UOnlineSubsystemGameSpy_execOnGetBuddyImageIndexComplete_Parms OnGetBuddyImageIndexComplete_Parms;
	OnGetBuddyImageIndexComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnGetBuddyImageIndexComplete, &OnGetBuddyImageIndexComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetBuddyImageIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::GetBuddyImageIndex ( struct FString NickName )
{
	static UFunction* pFnGetBuddyImageIndex = NULL;

	if ( ! pFnGetBuddyImageIndex )
		pFnGetBuddyImageIndex = (UFunction*) UObject::GObjObjects()->Data[ 34239 ];

	UOnlineSubsystemGameSpy_execGetBuddyImageIndex_Parms GetBuddyImageIndex_Parms;
	memcpy ( &GetBuddyImageIndex_Parms.NickName, &NickName, 0xC );

	pFnGetBuddyImageIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBuddyImageIndex, &GetBuddyImageIndex_Parms, NULL );

	pFnGetBuddyImageIndex->FunctionFlags |= 0x400;

	return GetBuddyImageIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearCreateBuddyImageIndexCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateBuddyImageIndexCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearCreateBuddyImageIndexCompleteDelegate ( struct FScriptDelegate CreateBuddyImageIndexCompleteDelegate )
{
	static UFunction* pFnClearCreateBuddyImageIndexCompleteDelegate = NULL;

	if ( ! pFnClearCreateBuddyImageIndexCompleteDelegate )
		pFnClearCreateBuddyImageIndexCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34236 ];

	UOnlineSubsystemGameSpy_execClearCreateBuddyImageIndexCompleteDelegate_Parms ClearCreateBuddyImageIndexCompleteDelegate_Parms;
	memcpy ( &ClearCreateBuddyImageIndexCompleteDelegate_Parms.CreateBuddyImageIndexCompleteDelegate, &CreateBuddyImageIndexCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateBuddyImageIndexCompleteDelegate, &ClearCreateBuddyImageIndexCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddCreateBuddyImageIndexCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateBuddyImageIndexCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddCreateBuddyImageIndexCompleteDelegate ( struct FScriptDelegate CreateBuddyImageIndexCompleteDelegate )
{
	static UFunction* pFnAddCreateBuddyImageIndexCompleteDelegate = NULL;

	if ( ! pFnAddCreateBuddyImageIndexCompleteDelegate )
		pFnAddCreateBuddyImageIndexCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34233 ];

	UOnlineSubsystemGameSpy_execAddCreateBuddyImageIndexCompleteDelegate_Parms AddCreateBuddyImageIndexCompleteDelegate_Parms;
	memcpy ( &AddCreateBuddyImageIndexCompleteDelegate_Parms.CreateBuddyImageIndexCompleteDelegate, &CreateBuddyImageIndexCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateBuddyImageIndexCompleteDelegate, &AddCreateBuddyImageIndexCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnCreateBuddyImageIndexComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnCreateBuddyImageIndexComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateBuddyImageIndexComplete = NULL;

	if ( ! pFnOnCreateBuddyImageIndexComplete )
		pFnOnCreateBuddyImageIndexComplete = (UFunction*) UObject::GObjObjects()->Data[ 34231 ];

	UOnlineSubsystemGameSpy_execOnCreateBuddyImageIndexComplete_Parms OnCreateBuddyImageIndexComplete_Parms;
	OnCreateBuddyImageIndexComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateBuddyImageIndexComplete, &OnCreateBuddyImageIndexComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateBuddyImageIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )
// int                            ImageIndex                     ( CPF_Parm )

bool UOnlineSubsystemGameSpy::CreateBuddyImageIndex ( struct FString NickName, int ImageIndex )
{
	static UFunction* pFnCreateBuddyImageIndex = NULL;

	if ( ! pFnCreateBuddyImageIndex )
		pFnCreateBuddyImageIndex = (UFunction*) UObject::GObjObjects()->Data[ 34227 ];

	UOnlineSubsystemGameSpy_execCreateBuddyImageIndex_Parms CreateBuddyImageIndex_Parms;
	memcpy ( &CreateBuddyImageIndex_Parms.NickName, &NickName, 0xC );
	CreateBuddyImageIndex_Parms.ImageIndex = ImageIndex;

	pFnCreateBuddyImageIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateBuddyImageIndex, &CreateBuddyImageIndex_Parms, NULL );

	pFnCreateBuddyImageIndex->FunctionFlags |= 0x400;

	return CreateBuddyImageIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearRemoveBuddyRequestCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RemoveBuddyRequestCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearRemoveBuddyRequestCompleteDelegate ( struct FScriptDelegate RemoveBuddyRequestCompleteDelegate )
{
	static UFunction* pFnClearRemoveBuddyRequestCompleteDelegate = NULL;

	if ( ! pFnClearRemoveBuddyRequestCompleteDelegate )
		pFnClearRemoveBuddyRequestCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34224 ];

	UOnlineSubsystemGameSpy_execClearRemoveBuddyRequestCompleteDelegate_Parms ClearRemoveBuddyRequestCompleteDelegate_Parms;
	memcpy ( &ClearRemoveBuddyRequestCompleteDelegate_Parms.RemoveBuddyRequestCompleteDelegate, &RemoveBuddyRequestCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRemoveBuddyRequestCompleteDelegate, &ClearRemoveBuddyRequestCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddRemoveBuddyRequestCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RemoveBuddyRequestCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddRemoveBuddyRequestCompleteDelegate ( struct FScriptDelegate RemoveBuddyRequestCompleteDelegate )
{
	static UFunction* pFnAddRemoveBuddyRequestCompleteDelegate = NULL;

	if ( ! pFnAddRemoveBuddyRequestCompleteDelegate )
		pFnAddRemoveBuddyRequestCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34221 ];

	UOnlineSubsystemGameSpy_execAddRemoveBuddyRequestCompleteDelegate_Parms AddRemoveBuddyRequestCompleteDelegate_Parms;
	memcpy ( &AddRemoveBuddyRequestCompleteDelegate_Parms.RemoveBuddyRequestCompleteDelegate, &RemoveBuddyRequestCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRemoveBuddyRequestCompleteDelegate, &AddRemoveBuddyRequestCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnRemoveBuddyRequestComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnRemoveBuddyRequestComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRemoveBuddyRequestComplete = NULL;

	if ( ! pFnOnRemoveBuddyRequestComplete )
		pFnOnRemoveBuddyRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 34219 ];

	UOnlineSubsystemGameSpy_execOnRemoveBuddyRequestComplete_Parms OnRemoveBuddyRequestComplete_Parms;
	OnRemoveBuddyRequestComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRemoveBuddyRequestComplete, &OnRemoveBuddyRequestComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RemoveBuddyRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::RemoveBuddyRequest ( struct FString NickName )
{
	static UFunction* pFnRemoveBuddyRequest = NULL;

	if ( ! pFnRemoveBuddyRequest )
		pFnRemoveBuddyRequest = (UFunction*) UObject::GObjObjects()->Data[ 34216 ];

	UOnlineSubsystemGameSpy_execRemoveBuddyRequest_Parms RemoveBuddyRequest_Parms;
	memcpy ( &RemoveBuddyRequest_Parms.NickName, &NickName, 0xC );

	pFnRemoveBuddyRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveBuddyRequest, &RemoveBuddyRequest_Parms, NULL );

	pFnRemoveBuddyRequest->FunctionFlags |= 0x400;

	return RemoveBuddyRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetBuddyRequestList
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FRequestEntry > RequestList                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemGameSpy::GetBuddyRequestList ( TArray< struct FRequestEntry >* RequestList )
{
	static UFunction* pFnGetBuddyRequestList = NULL;

	if ( ! pFnGetBuddyRequestList )
		pFnGetBuddyRequestList = (UFunction*) UObject::GObjObjects()->Data[ 34212 ];

	UOnlineSubsystemGameSpy_execGetBuddyRequestList_Parms GetBuddyRequestList_Parms;

	pFnGetBuddyRequestList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBuddyRequestList, &GetBuddyRequestList_Parms, NULL );

	pFnGetBuddyRequestList->FunctionFlags |= 0x400;

	if ( RequestList )
		memcpy ( RequestList, &GetBuddyRequestList_Parms.RequestList, 0xC );

	return GetBuddyRequestList_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadBuddyRequestListCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadBuddyRequestListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadBuddyRequestListCompleteDelegate ( struct FScriptDelegate ReadBuddyRequestListCompleteDelegate )
{
	static UFunction* pFnClearReadBuddyRequestListCompleteDelegate = NULL;

	if ( ! pFnClearReadBuddyRequestListCompleteDelegate )
		pFnClearReadBuddyRequestListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34209 ];

	UOnlineSubsystemGameSpy_execClearReadBuddyRequestListCompleteDelegate_Parms ClearReadBuddyRequestListCompleteDelegate_Parms;
	memcpy ( &ClearReadBuddyRequestListCompleteDelegate_Parms.ReadBuddyRequestListCompleteDelegate, &ReadBuddyRequestListCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadBuddyRequestListCompleteDelegate, &ClearReadBuddyRequestListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadBuddyRequestListCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadBuddyRequestListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadBuddyRequestListCompleteDelegate ( struct FScriptDelegate ReadBuddyRequestListCompleteDelegate )
{
	static UFunction* pFnAddReadBuddyRequestListCompleteDelegate = NULL;

	if ( ! pFnAddReadBuddyRequestListCompleteDelegate )
		pFnAddReadBuddyRequestListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34206 ];

	UOnlineSubsystemGameSpy_execAddReadBuddyRequestListCompleteDelegate_Parms AddReadBuddyRequestListCompleteDelegate_Parms;
	memcpy ( &AddReadBuddyRequestListCompleteDelegate_Parms.ReadBuddyRequestListCompleteDelegate, &ReadBuddyRequestListCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadBuddyRequestListCompleteDelegate, &AddReadBuddyRequestListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadBuddyRequestListComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnReadBuddyRequestListComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadBuddyRequestListComplete = NULL;

	if ( ! pFnOnReadBuddyRequestListComplete )
		pFnOnReadBuddyRequestListComplete = (UFunction*) UObject::GObjObjects()->Data[ 34204 ];

	UOnlineSubsystemGameSpy_execOnReadBuddyRequestListComplete_Parms OnReadBuddyRequestListComplete_Parms;
	OnReadBuddyRequestListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadBuddyRequestListComplete, &OnReadBuddyRequestListComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadBuddyRequestList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::ReadBuddyRequestList ( )
{
	static UFunction* pFnReadBuddyRequestList = NULL;

	if ( ! pFnReadBuddyRequestList )
		pFnReadBuddyRequestList = (UFunction*) UObject::GObjObjects()->Data[ 34202 ];

	UOnlineSubsystemGameSpy_execReadBuddyRequestList_Parms ReadBuddyRequestList_Parms;

	pFnReadBuddyRequestList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadBuddyRequestList, &ReadBuddyRequestList_Parms, NULL );

	pFnReadBuddyRequestList->FunctionFlags |= 0x400;

	return ReadBuddyRequestList_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearCreateBuddyRequestCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateBuddyRequestCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearCreateBuddyRequestCompleteDelegate ( struct FScriptDelegate CreateBuddyRequestCompleteDelegate )
{
	static UFunction* pFnClearCreateBuddyRequestCompleteDelegate = NULL;

	if ( ! pFnClearCreateBuddyRequestCompleteDelegate )
		pFnClearCreateBuddyRequestCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34199 ];

	UOnlineSubsystemGameSpy_execClearCreateBuddyRequestCompleteDelegate_Parms ClearCreateBuddyRequestCompleteDelegate_Parms;
	memcpy ( &ClearCreateBuddyRequestCompleteDelegate_Parms.CreateBuddyRequestCompleteDelegate, &CreateBuddyRequestCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateBuddyRequestCompleteDelegate, &ClearCreateBuddyRequestCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddCreateBuddyRequestCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateBuddyRequestCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddCreateBuddyRequestCompleteDelegate ( struct FScriptDelegate CreateBuddyRequestCompleteDelegate )
{
	static UFunction* pFnAddCreateBuddyRequestCompleteDelegate = NULL;

	if ( ! pFnAddCreateBuddyRequestCompleteDelegate )
		pFnAddCreateBuddyRequestCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34196 ];

	UOnlineSubsystemGameSpy_execAddCreateBuddyRequestCompleteDelegate_Parms AddCreateBuddyRequestCompleteDelegate_Parms;
	memcpy ( &AddCreateBuddyRequestCompleteDelegate_Parms.CreateBuddyRequestCompleteDelegate, &CreateBuddyRequestCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateBuddyRequestCompleteDelegate, &AddCreateBuddyRequestCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnCreateBuddyRequestComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// int                            RecordId                       ( CPF_Parm )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            Id                             ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnCreateBuddyRequestComplete ( unsigned long bWasSuccessful, int RecordId, struct FString NickName, struct FUniqueNetId Id )
{
	static UFunction* pFnOnCreateBuddyRequestComplete = NULL;

	if ( ! pFnOnCreateBuddyRequestComplete )
		pFnOnCreateBuddyRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 34191 ];

	UOnlineSubsystemGameSpy_execOnCreateBuddyRequestComplete_Parms OnCreateBuddyRequestComplete_Parms;
	OnCreateBuddyRequestComplete_Parms.bWasSuccessful = bWasSuccessful;
	OnCreateBuddyRequestComplete_Parms.RecordId = RecordId;
	memcpy ( &OnCreateBuddyRequestComplete_Parms.NickName, &NickName, 0xC );
	memcpy ( &OnCreateBuddyRequestComplete_Parms.Id, &Id, 0x8 );

	this->ProcessEvent ( pFnOnCreateBuddyRequestComplete, &OnCreateBuddyRequestComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateBuddyRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            Id                             ( CPF_Parm )

bool UOnlineSubsystemGameSpy::CreateBuddyRequest ( struct FString NickName, struct FUniqueNetId Id )
{
	static UFunction* pFnCreateBuddyRequest = NULL;

	if ( ! pFnCreateBuddyRequest )
		pFnCreateBuddyRequest = (UFunction*) UObject::GObjObjects()->Data[ 34187 ];

	UOnlineSubsystemGameSpy_execCreateBuddyRequest_Parms CreateBuddyRequest_Parms;
	memcpy ( &CreateBuddyRequest_Parms.NickName, &NickName, 0xC );
	memcpy ( &CreateBuddyRequest_Parms.Id, &Id, 0x8 );

	pFnCreateBuddyRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateBuddyRequest, &CreateBuddyRequest_Parms, NULL );

	pFnCreateBuddyRequest->FunctionFlags |= 0x400;

	return CreateBuddyRequest_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearRemoveBuddyAuthorizationCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RemoveBuddyAuthorizationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearRemoveBuddyAuthorizationCompleteDelegate ( struct FScriptDelegate RemoveBuddyAuthorizationCompleteDelegate )
{
	static UFunction* pFnClearRemoveBuddyAuthorizationCompleteDelegate = NULL;

	if ( ! pFnClearRemoveBuddyAuthorizationCompleteDelegate )
		pFnClearRemoveBuddyAuthorizationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34184 ];

	UOnlineSubsystemGameSpy_execClearRemoveBuddyAuthorizationCompleteDelegate_Parms ClearRemoveBuddyAuthorizationCompleteDelegate_Parms;
	memcpy ( &ClearRemoveBuddyAuthorizationCompleteDelegate_Parms.RemoveBuddyAuthorizationCompleteDelegate, &RemoveBuddyAuthorizationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRemoveBuddyAuthorizationCompleteDelegate, &ClearRemoveBuddyAuthorizationCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddRemoveBuddyAuthorizationCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RemoveBuddyAuthorizationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddRemoveBuddyAuthorizationCompleteDelegate ( struct FScriptDelegate RemoveBuddyAuthorizationCompleteDelegate )
{
	static UFunction* pFnAddRemoveBuddyAuthorizationCompleteDelegate = NULL;

	if ( ! pFnAddRemoveBuddyAuthorizationCompleteDelegate )
		pFnAddRemoveBuddyAuthorizationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34181 ];

	UOnlineSubsystemGameSpy_execAddRemoveBuddyAuthorizationCompleteDelegate_Parms AddRemoveBuddyAuthorizationCompleteDelegate_Parms;
	memcpy ( &AddRemoveBuddyAuthorizationCompleteDelegate_Parms.RemoveBuddyAuthorizationCompleteDelegate, &RemoveBuddyAuthorizationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRemoveBuddyAuthorizationCompleteDelegate, &AddRemoveBuddyAuthorizationCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnRemoveBuddyAuthorizationComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnRemoveBuddyAuthorizationComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRemoveBuddyAuthorizationComplete = NULL;

	if ( ! pFnOnRemoveBuddyAuthorizationComplete )
		pFnOnRemoveBuddyAuthorizationComplete = (UFunction*) UObject::GObjObjects()->Data[ 34179 ];

	UOnlineSubsystemGameSpy_execOnRemoveBuddyAuthorizationComplete_Parms OnRemoveBuddyAuthorizationComplete_Parms;
	OnRemoveBuddyAuthorizationComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRemoveBuddyAuthorizationComplete, &OnRemoveBuddyAuthorizationComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RemoveBuddyAuthorization
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::RemoveBuddyAuthorization ( struct FString NickName )
{
	static UFunction* pFnRemoveBuddyAuthorization = NULL;

	if ( ! pFnRemoveBuddyAuthorization )
		pFnRemoveBuddyAuthorization = (UFunction*) UObject::GObjObjects()->Data[ 34176 ];

	UOnlineSubsystemGameSpy_execRemoveBuddyAuthorization_Parms RemoveBuddyAuthorization_Parms;
	memcpy ( &RemoveBuddyAuthorization_Parms.NickName, &NickName, 0xC );

	pFnRemoveBuddyAuthorization->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveBuddyAuthorization, &RemoveBuddyAuthorization_Parms, NULL );

	pFnRemoveBuddyAuthorization->FunctionFlags |= 0x400;

	return RemoveBuddyAuthorization_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetBuddyAuthorizationList
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       AuthorizationList              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemGameSpy::GetBuddyAuthorizationList ( TArray< struct FString >* AuthorizationList )
{
	static UFunction* pFnGetBuddyAuthorizationList = NULL;

	if ( ! pFnGetBuddyAuthorizationList )
		pFnGetBuddyAuthorizationList = (UFunction*) UObject::GObjObjects()->Data[ 34172 ];

	UOnlineSubsystemGameSpy_execGetBuddyAuthorizationList_Parms GetBuddyAuthorizationList_Parms;

	pFnGetBuddyAuthorizationList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBuddyAuthorizationList, &GetBuddyAuthorizationList_Parms, NULL );

	pFnGetBuddyAuthorizationList->FunctionFlags |= 0x400;

	if ( AuthorizationList )
		memcpy ( AuthorizationList, &GetBuddyAuthorizationList_Parms.AuthorizationList, 0xC );

	return GetBuddyAuthorizationList_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadBuddyAuthorizationListCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadBuddyAuthorizationListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadBuddyAuthorizationListCompleteDelegate ( struct FScriptDelegate ReadBuddyAuthorizationListCompleteDelegate )
{
	static UFunction* pFnClearReadBuddyAuthorizationListCompleteDelegate = NULL;

	if ( ! pFnClearReadBuddyAuthorizationListCompleteDelegate )
		pFnClearReadBuddyAuthorizationListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34169 ];

	UOnlineSubsystemGameSpy_execClearReadBuddyAuthorizationListCompleteDelegate_Parms ClearReadBuddyAuthorizationListCompleteDelegate_Parms;
	memcpy ( &ClearReadBuddyAuthorizationListCompleteDelegate_Parms.ReadBuddyAuthorizationListCompleteDelegate, &ReadBuddyAuthorizationListCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadBuddyAuthorizationListCompleteDelegate, &ClearReadBuddyAuthorizationListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadBuddyAuthorizationListCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadBuddyAuthorizationListCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadBuddyAuthorizationListCompleteDelegate ( struct FScriptDelegate ReadBuddyAuthorizationListCompleteDelegate )
{
	static UFunction* pFnAddReadBuddyAuthorizationListCompleteDelegate = NULL;

	if ( ! pFnAddReadBuddyAuthorizationListCompleteDelegate )
		pFnAddReadBuddyAuthorizationListCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34166 ];

	UOnlineSubsystemGameSpy_execAddReadBuddyAuthorizationListCompleteDelegate_Parms AddReadBuddyAuthorizationListCompleteDelegate_Parms;
	memcpy ( &AddReadBuddyAuthorizationListCompleteDelegate_Parms.ReadBuddyAuthorizationListCompleteDelegate, &ReadBuddyAuthorizationListCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadBuddyAuthorizationListCompleteDelegate, &AddReadBuddyAuthorizationListCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadBuddyAuthorizationListComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnReadBuddyAuthorizationListComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadBuddyAuthorizationListComplete = NULL;

	if ( ! pFnOnReadBuddyAuthorizationListComplete )
		pFnOnReadBuddyAuthorizationListComplete = (UFunction*) UObject::GObjObjects()->Data[ 34164 ];

	UOnlineSubsystemGameSpy_execOnReadBuddyAuthorizationListComplete_Parms OnReadBuddyAuthorizationListComplete_Parms;
	OnReadBuddyAuthorizationListComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadBuddyAuthorizationListComplete, &OnReadBuddyAuthorizationListComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadBuddyAuthorizationList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::ReadBuddyAuthorizationList ( )
{
	static UFunction* pFnReadBuddyAuthorizationList = NULL;

	if ( ! pFnReadBuddyAuthorizationList )
		pFnReadBuddyAuthorizationList = (UFunction*) UObject::GObjObjects()->Data[ 34162 ];

	UOnlineSubsystemGameSpy_execReadBuddyAuthorizationList_Parms ReadBuddyAuthorizationList_Parms;

	pFnReadBuddyAuthorizationList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadBuddyAuthorizationList, &ReadBuddyAuthorizationList_Parms, NULL );

	pFnReadBuddyAuthorizationList->FunctionFlags |= 0x400;

	return ReadBuddyAuthorizationList_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearCreateBuddyAuthorizationCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateBuddyAuthorizationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearCreateBuddyAuthorizationCompleteDelegate ( struct FScriptDelegate CreateBuddyAuthorizationCompleteDelegate )
{
	static UFunction* pFnClearCreateBuddyAuthorizationCompleteDelegate = NULL;

	if ( ! pFnClearCreateBuddyAuthorizationCompleteDelegate )
		pFnClearCreateBuddyAuthorizationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34159 ];

	UOnlineSubsystemGameSpy_execClearCreateBuddyAuthorizationCompleteDelegate_Parms ClearCreateBuddyAuthorizationCompleteDelegate_Parms;
	memcpy ( &ClearCreateBuddyAuthorizationCompleteDelegate_Parms.CreateBuddyAuthorizationCompleteDelegate, &CreateBuddyAuthorizationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateBuddyAuthorizationCompleteDelegate, &ClearCreateBuddyAuthorizationCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddCreateBuddyAuthorizationCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         CreateBuddyAuthorizationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddCreateBuddyAuthorizationCompleteDelegate ( struct FScriptDelegate CreateBuddyAuthorizationCompleteDelegate )
{
	static UFunction* pFnAddCreateBuddyAuthorizationCompleteDelegate = NULL;

	if ( ! pFnAddCreateBuddyAuthorizationCompleteDelegate )
		pFnAddCreateBuddyAuthorizationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34156 ];

	UOnlineSubsystemGameSpy_execAddCreateBuddyAuthorizationCompleteDelegate_Parms AddCreateBuddyAuthorizationCompleteDelegate_Parms;
	memcpy ( &AddCreateBuddyAuthorizationCompleteDelegate_Parms.CreateBuddyAuthorizationCompleteDelegate, &CreateBuddyAuthorizationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateBuddyAuthorizationCompleteDelegate, &AddCreateBuddyAuthorizationCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnCreateBuddyAuthorizationComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// int                            RecordId                       ( CPF_Parm )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnCreateBuddyAuthorizationComplete ( unsigned long bWasSuccessful, int RecordId, struct FString NickName )
{
	static UFunction* pFnOnCreateBuddyAuthorizationComplete = NULL;

	if ( ! pFnOnCreateBuddyAuthorizationComplete )
		pFnOnCreateBuddyAuthorizationComplete = (UFunction*) UObject::GObjObjects()->Data[ 34152 ];

	UOnlineSubsystemGameSpy_execOnCreateBuddyAuthorizationComplete_Parms OnCreateBuddyAuthorizationComplete_Parms;
	OnCreateBuddyAuthorizationComplete_Parms.bWasSuccessful = bWasSuccessful;
	OnCreateBuddyAuthorizationComplete_Parms.RecordId = RecordId;
	memcpy ( &OnCreateBuddyAuthorizationComplete_Parms.NickName, &NickName, 0xC );

	this->ProcessEvent ( pFnOnCreateBuddyAuthorizationComplete, &OnCreateBuddyAuthorizationComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateBuddyAuthorization
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NickName                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::CreateBuddyAuthorization ( struct FString NickName )
{
	static UFunction* pFnCreateBuddyAuthorization = NULL;

	if ( ! pFnCreateBuddyAuthorization )
		pFnCreateBuddyAuthorization = (UFunction*) UObject::GObjObjects()->Data[ 34149 ];

	UOnlineSubsystemGameSpy_execCreateBuddyAuthorization_Parms CreateBuddyAuthorization_Parms;
	memcpy ( &CreateBuddyAuthorization_Parms.NickName, &NickName, 0xC );

	pFnCreateBuddyAuthorization->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateBuddyAuthorization, &CreateBuddyAuthorization_Parms, NULL );

	pFnCreateBuddyAuthorization->FunctionFlags |= 0x400;

	return CreateBuddyAuthorization_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetSearchFriendsList
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       SearchResult                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemGameSpy::GetSearchFriendsList ( TArray< struct FString >* SearchResult )
{
	static UFunction* pFnGetSearchFriendsList = NULL;

	if ( ! pFnGetSearchFriendsList )
		pFnGetSearchFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 34145 ];

	UOnlineSubsystemGameSpy_execGetSearchFriendsList_Parms GetSearchFriendsList_Parms;

	pFnGetSearchFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSearchFriendsList, &GetSearchFriendsList_Parms, NULL );

	pFnGetSearchFriendsList->FunctionFlags |= 0x400;

	if ( SearchResult )
		memcpy ( SearchResult, &GetSearchFriendsList_Parms.SearchResult, 0xC );

	return GetSearchFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearSearchFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         SearchFriendsCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearSearchFriendsCompleteDelegate ( struct FScriptDelegate SearchFriendsCompleteDelegate )
{
	static UFunction* pFnClearSearchFriendsCompleteDelegate = NULL;

	if ( ! pFnClearSearchFriendsCompleteDelegate )
		pFnClearSearchFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34142 ];

	UOnlineSubsystemGameSpy_execClearSearchFriendsCompleteDelegate_Parms ClearSearchFriendsCompleteDelegate_Parms;
	memcpy ( &ClearSearchFriendsCompleteDelegate_Parms.SearchFriendsCompleteDelegate, &SearchFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearSearchFriendsCompleteDelegate, &ClearSearchFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddSearchFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         SearchFriendsCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddSearchFriendsCompleteDelegate ( struct FScriptDelegate SearchFriendsCompleteDelegate )
{
	static UFunction* pFnAddSearchFriendsCompleteDelegate = NULL;

	if ( ! pFnAddSearchFriendsCompleteDelegate )
		pFnAddSearchFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34139 ];

	UOnlineSubsystemGameSpy_execAddSearchFriendsCompleteDelegate_Parms AddSearchFriendsCompleteDelegate_Parms;
	memcpy ( &AddSearchFriendsCompleteDelegate_Parms.SearchFriendsCompleteDelegate, &SearchFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddSearchFriendsCompleteDelegate, &AddSearchFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnSearchFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnSearchFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnSearchFriendsComplete = NULL;

	if ( ! pFnOnSearchFriendsComplete )
		pFnOnSearchFriendsComplete = (UFunction*) UObject::GObjObjects()->Data[ 34137 ];

	UOnlineSubsystemGameSpy_execOnSearchFriendsComplete_Parms OnSearchFriendsComplete_Parms;
	OnSearchFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnSearchFriendsComplete, &OnSearchFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SearchFriends
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 SearchNickName                 ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::SearchFriends ( struct FString SearchNickName )
{
	static UFunction* pFnSearchFriends = NULL;

	if ( ! pFnSearchFriends )
		pFnSearchFriends = (UFunction*) UObject::GObjObjects()->Data[ 34134 ];

	UOnlineSubsystemGameSpy_execSearchFriends_Parms SearchFriends_Parms;
	memcpy ( &SearchFriends_Parms.SearchNickName, &SearchNickName, 0xC );

	pFnSearchFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSearchFriends, &SearchFriends_Parms, NULL );

	pFnSearchFriends->FunctionFlags |= 0x400;

	return SearchFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetVersion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemGameSpy::GetVersion ( )
{
	static UFunction* pFnGetVersion = NULL;

	if ( ! pFnGetVersion )
		pFnGetVersion = (UFunction*) UObject::GObjObjects()->Data[ 34132 ];

	UOnlineSubsystemGameSpy_execGetVersion_Parms GetVersion_Parms;

	pFnGetVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVersion, &GetVersion_Parms, NULL );

	pFnGetVersion->FunctionFlags |= 0x400;

	return GetVersion_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearQueryAvailableUpdatesDownloadCancel
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryUpdatesDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearQueryAvailableUpdatesDownloadCancel ( struct FScriptDelegate QueryUpdatesDelegate )
{
	static UFunction* pFnClearQueryAvailableUpdatesDownloadCancel = NULL;

	if ( ! pFnClearQueryAvailableUpdatesDownloadCancel )
		pFnClearQueryAvailableUpdatesDownloadCancel = (UFunction*) UObject::GObjObjects()->Data[ 34129 ];

	UOnlineSubsystemGameSpy_execClearQueryAvailableUpdatesDownloadCancel_Parms ClearQueryAvailableUpdatesDownloadCancel_Parms;
	memcpy ( &ClearQueryAvailableUpdatesDownloadCancel_Parms.QueryUpdatesDelegate, &QueryUpdatesDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryAvailableUpdatesDownloadCancel, &ClearQueryAvailableUpdatesDownloadCancel_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddQueryAvailableUpdatesDownloadCancel
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryUpdatesDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddQueryAvailableUpdatesDownloadCancel ( struct FScriptDelegate QueryUpdatesDelegate )
{
	static UFunction* pFnAddQueryAvailableUpdatesDownloadCancel = NULL;

	if ( ! pFnAddQueryAvailableUpdatesDownloadCancel )
		pFnAddQueryAvailableUpdatesDownloadCancel = (UFunction*) UObject::GObjObjects()->Data[ 34126 ];

	UOnlineSubsystemGameSpy_execAddQueryAvailableUpdatesDownloadCancel_Parms AddQueryAvailableUpdatesDownloadCancel_Parms;
	memcpy ( &AddQueryAvailableUpdatesDownloadCancel_Parms.QueryUpdatesDelegate, &QueryUpdatesDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryAvailableUpdatesDownloadCancel, &AddQueryAvailableUpdatesDownloadCancel_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearQueryAvailableUpdatesDownloadProgress
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryUpdatesDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearQueryAvailableUpdatesDownloadProgress ( struct FScriptDelegate QueryUpdatesDelegate )
{
	static UFunction* pFnClearQueryAvailableUpdatesDownloadProgress = NULL;

	if ( ! pFnClearQueryAvailableUpdatesDownloadProgress )
		pFnClearQueryAvailableUpdatesDownloadProgress = (UFunction*) UObject::GObjObjects()->Data[ 34123 ];

	UOnlineSubsystemGameSpy_execClearQueryAvailableUpdatesDownloadProgress_Parms ClearQueryAvailableUpdatesDownloadProgress_Parms;
	memcpy ( &ClearQueryAvailableUpdatesDownloadProgress_Parms.QueryUpdatesDelegate, &QueryUpdatesDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryAvailableUpdatesDownloadProgress, &ClearQueryAvailableUpdatesDownloadProgress_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddQueryAvailableUpdatesDownloadProgress
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryUpdatesDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddQueryAvailableUpdatesDownloadProgress ( struct FScriptDelegate QueryUpdatesDelegate )
{
	static UFunction* pFnAddQueryAvailableUpdatesDownloadProgress = NULL;

	if ( ! pFnAddQueryAvailableUpdatesDownloadProgress )
		pFnAddQueryAvailableUpdatesDownloadProgress = (UFunction*) UObject::GObjObjects()->Data[ 34120 ];

	UOnlineSubsystemGameSpy_execAddQueryAvailableUpdatesDownloadProgress_Parms AddQueryAvailableUpdatesDownloadProgress_Parms;
	memcpy ( &AddQueryAvailableUpdatesDownloadProgress_Parms.QueryUpdatesDelegate, &QueryUpdatesDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryAvailableUpdatesDownloadProgress, &AddQueryAvailableUpdatesDownloadProgress_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearQueryAvailableUpdatesDownloadComplete
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryUpdatesDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearQueryAvailableUpdatesDownloadComplete ( struct FScriptDelegate QueryUpdatesDelegate )
{
	static UFunction* pFnClearQueryAvailableUpdatesDownloadComplete = NULL;

	if ( ! pFnClearQueryAvailableUpdatesDownloadComplete )
		pFnClearQueryAvailableUpdatesDownloadComplete = (UFunction*) UObject::GObjObjects()->Data[ 34117 ];

	UOnlineSubsystemGameSpy_execClearQueryAvailableUpdatesDownloadComplete_Parms ClearQueryAvailableUpdatesDownloadComplete_Parms;
	memcpy ( &ClearQueryAvailableUpdatesDownloadComplete_Parms.QueryUpdatesDelegate, &QueryUpdatesDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryAvailableUpdatesDownloadComplete, &ClearQueryAvailableUpdatesDownloadComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddQueryAvailableUpdatesDownloadComplete
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryUpdatesDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddQueryAvailableUpdatesDownloadComplete ( struct FScriptDelegate QueryUpdatesDelegate )
{
	static UFunction* pFnAddQueryAvailableUpdatesDownloadComplete = NULL;

	if ( ! pFnAddQueryAvailableUpdatesDownloadComplete )
		pFnAddQueryAvailableUpdatesDownloadComplete = (UFunction*) UObject::GObjObjects()->Data[ 34114 ];

	UOnlineSubsystemGameSpy_execAddQueryAvailableUpdatesDownloadComplete_Parms AddQueryAvailableUpdatesDownloadComplete_Parms;
	memcpy ( &AddQueryAvailableUpdatesDownloadComplete_Parms.QueryUpdatesDelegate, &QueryUpdatesDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryAvailableUpdatesDownloadComplete, &AddQueryAvailableUpdatesDownloadComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetAvailableUpdatesProgress
// [0x00420002] 
// Parameters infos:
// float                          fProgress                      ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemGameSpy::GetAvailableUpdatesProgress ( float* fProgress )
{
	static UFunction* pFnGetAvailableUpdatesProgress = NULL;

	if ( ! pFnGetAvailableUpdatesProgress )
		pFnGetAvailableUpdatesProgress = (UFunction*) UObject::GObjObjects()->Data[ 34111 ];

	UOnlineSubsystemGameSpy_execGetAvailableUpdatesProgress_Parms GetAvailableUpdatesProgress_Parms;

	this->ProcessEvent ( pFnGetAvailableUpdatesProgress, &GetAvailableUpdatesProgress_Parms, NULL );

	if ( fProgress )
		*fProgress = GetAvailableUpdatesProgress_Parms.fProgress;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetAvailableUpdatesCounts
// [0x00420002] 
// Parameters infos:
// int                            NewUpdates                     ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemGameSpy::GetAvailableUpdatesCounts ( int* NewUpdates )
{
	static UFunction* pFnGetAvailableUpdatesCounts = NULL;

	if ( ! pFnGetAvailableUpdatesCounts )
		pFnGetAvailableUpdatesCounts = (UFunction*) UObject::GObjObjects()->Data[ 34108 ];

	UOnlineSubsystemGameSpy_execGetAvailableUpdatesCounts_Parms GetAvailableUpdatesCounts_Parms;

	this->ProcessEvent ( pFnGetAvailableUpdatesCounts, &GetAvailableUpdatesCounts_Parms, NULL );

	if ( NewUpdates )
		*NewUpdates = GetAvailableUpdatesCounts_Parms.NewUpdates;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearQueryAvailableUpdatesComplete
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryUpdatesDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearQueryAvailableUpdatesComplete ( struct FScriptDelegate QueryUpdatesDelegate )
{
	static UFunction* pFnClearQueryAvailableUpdatesComplete = NULL;

	if ( ! pFnClearQueryAvailableUpdatesComplete )
		pFnClearQueryAvailableUpdatesComplete = (UFunction*) UObject::GObjObjects()->Data[ 34105 ];

	UOnlineSubsystemGameSpy_execClearQueryAvailableUpdatesComplete_Parms ClearQueryAvailableUpdatesComplete_Parms;
	memcpy ( &ClearQueryAvailableUpdatesComplete_Parms.QueryUpdatesDelegate, &QueryUpdatesDelegate, 0xC );

	this->ProcessEvent ( pFnClearQueryAvailableUpdatesComplete, &ClearQueryAvailableUpdatesComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddQueryAvailableUpdatesComplete
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         QueryUpdatesDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddQueryAvailableUpdatesComplete ( struct FScriptDelegate QueryUpdatesDelegate )
{
	static UFunction* pFnAddQueryAvailableUpdatesComplete = NULL;

	if ( ! pFnAddQueryAvailableUpdatesComplete )
		pFnAddQueryAvailableUpdatesComplete = (UFunction*) UObject::GObjObjects()->Data[ 34102 ];

	UOnlineSubsystemGameSpy_execAddQueryAvailableUpdatesComplete_Parms AddQueryAvailableUpdatesComplete_Parms;
	memcpy ( &AddQueryAvailableUpdatesComplete_Parms.QueryUpdatesDelegate, &QueryUpdatesDelegate, 0xC );

	this->ProcessEvent ( pFnAddQueryAvailableUpdatesComplete, &AddQueryAvailableUpdatesComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnQueryAvailableUpdatesDownloadCancel
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnQueryAvailableUpdatesDownloadCancel ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryAvailableUpdatesDownloadCancel = NULL;

	if ( ! pFnOnQueryAvailableUpdatesDownloadCancel )
		pFnOnQueryAvailableUpdatesDownloadCancel = (UFunction*) UObject::GObjObjects()->Data[ 34100 ];

	UOnlineSubsystemGameSpy_execOnQueryAvailableUpdatesDownloadCancel_Parms OnQueryAvailableUpdatesDownloadCancel_Parms;
	OnQueryAvailableUpdatesDownloadCancel_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryAvailableUpdatesDownloadCancel, &OnQueryAvailableUpdatesDownloadCancel_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnQueryAvailableUpdatesDownloadProgress
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnQueryAvailableUpdatesDownloadProgress ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryAvailableUpdatesDownloadProgress = NULL;

	if ( ! pFnOnQueryAvailableUpdatesDownloadProgress )
		pFnOnQueryAvailableUpdatesDownloadProgress = (UFunction*) UObject::GObjObjects()->Data[ 34098 ];

	UOnlineSubsystemGameSpy_execOnQueryAvailableUpdatesDownloadProgress_Parms OnQueryAvailableUpdatesDownloadProgress_Parms;
	OnQueryAvailableUpdatesDownloadProgress_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryAvailableUpdatesDownloadProgress, &OnQueryAvailableUpdatesDownloadProgress_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnQueryAvailableUpdatesDownloadComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnQueryAvailableUpdatesDownloadComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryAvailableUpdatesDownloadComplete = NULL;

	if ( ! pFnOnQueryAvailableUpdatesDownloadComplete )
		pFnOnQueryAvailableUpdatesDownloadComplete = (UFunction*) UObject::GObjObjects()->Data[ 34096 ];

	UOnlineSubsystemGameSpy_execOnQueryAvailableUpdatesDownloadComplete_Parms OnQueryAvailableUpdatesDownloadComplete_Parms;
	OnQueryAvailableUpdatesDownloadComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryAvailableUpdatesDownloadComplete, &OnQueryAvailableUpdatesDownloadComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnQueryAvailableUpdatesComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnQueryAvailableUpdatesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnQueryAvailableUpdatesComplete = NULL;

	if ( ! pFnOnQueryAvailableUpdatesComplete )
		pFnOnQueryAvailableUpdatesComplete = (UFunction*) UObject::GObjObjects()->Data[ 34094 ];

	UOnlineSubsystemGameSpy_execOnQueryAvailableUpdatesComplete_Parms OnQueryAvailableUpdatesComplete_Parms;
	OnQueryAvailableUpdatesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnQueryAvailableUpdatesComplete, &OnQueryAvailableUpdatesComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.QueryAvailableUpdatesDownloadCancel
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::QueryAvailableUpdatesDownloadCancel ( )
{
	static UFunction* pFnQueryAvailableUpdatesDownloadCancel = NULL;

	if ( ! pFnQueryAvailableUpdatesDownloadCancel )
		pFnQueryAvailableUpdatesDownloadCancel = (UFunction*) UObject::GObjObjects()->Data[ 34092 ];

	UOnlineSubsystemGameSpy_execQueryAvailableUpdatesDownloadCancel_Parms QueryAvailableUpdatesDownloadCancel_Parms;

	pFnQueryAvailableUpdatesDownloadCancel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryAvailableUpdatesDownloadCancel, &QueryAvailableUpdatesDownloadCancel_Parms, NULL );

	pFnQueryAvailableUpdatesDownloadCancel->FunctionFlags |= 0x400;

	return QueryAvailableUpdatesDownloadCancel_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.QueryAvailableUpdatesDownload
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::QueryAvailableUpdatesDownload ( )
{
	static UFunction* pFnQueryAvailableUpdatesDownload = NULL;

	if ( ! pFnQueryAvailableUpdatesDownload )
		pFnQueryAvailableUpdatesDownload = (UFunction*) UObject::GObjObjects()->Data[ 34090 ];

	UOnlineSubsystemGameSpy_execQueryAvailableUpdatesDownload_Parms QueryAvailableUpdatesDownload_Parms;

	pFnQueryAvailableUpdatesDownload->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryAvailableUpdatesDownload, &QueryAvailableUpdatesDownload_Parms, NULL );

	pFnQueryAvailableUpdatesDownload->FunctionFlags |= 0x400;

	return QueryAvailableUpdatesDownload_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.QueryAvailableUpdates
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::QueryAvailableUpdates ( )
{
	static UFunction* pFnQueryAvailableUpdates = NULL;

	if ( ! pFnQueryAvailableUpdates )
		pFnQueryAvailableUpdates = (UFunction*) UObject::GObjObjects()->Data[ 34088 ];

	UOnlineSubsystemGameSpy_execQueryAvailableUpdates_Parms QueryAvailableUpdates_Parms;

	pFnQueryAvailableUpdates->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnQueryAvailableUpdates, &QueryAvailableUpdates_Parms, NULL );

	pFnQueryAvailableUpdates->FunctionFlags |= 0x400;

	return QueryAvailableUpdates_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetAchievements
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FAchievementDetails > Achievements                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemGameSpy::GetAchievements ( unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->Data[ 34082 ];

	UOnlineSubsystemGameSpy_execGetAchievements_Parms GetAchievements_Parms;
	GetAchievements_Parms.LocalUserNum = LocalUserNum;
	GetAchievements_Parms.TitleId = TitleId;

	pFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );

	pFnGetAchievements->FunctionFlags |= 0x400;

	if ( Achievements )
		memcpy ( Achievements, &GetAchievements_Parms.Achievements, 0xC );

	return GetAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34078 ];

	UOnlineSubsystemGameSpy_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;
	ClearReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadAchievementsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadAchievementsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadAchievementsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34074 ];

	UOnlineSubsystemGameSpy_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;
	AddReadAchievementsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadAchievementsCompleteDelegate_Parms.ReadAchievementsCompleteDelegate, &ReadAchievementsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:
// int                            TitleId                        ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnReadAchievementsComplete ( int TitleId )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->Data[ 34072 ];

	UOnlineSubsystemGameSpy_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;
	OnReadAchievementsComplete_Parms.TitleId = TitleId;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadAchievements
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            TitleId                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadText                ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldReadImages              ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::ReadAchievements ( unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->Data[ 34066 ];

	UOnlineSubsystemGameSpy_execReadAchievements_Parms ReadAchievements_Parms;
	ReadAchievements_Parms.LocalUserNum = LocalUserNum;
	ReadAchievements_Parms.TitleId = TitleId;
	ReadAchievements_Parms.bShouldReadText = bShouldReadText;
	ReadAchievements_Parms.bShouldReadImages = bShouldReadImages;

	pFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );

	pFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34062 ];

	UOnlineSubsystemGameSpy_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;
	ClearUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         UnlockAchievementCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddUnlockAchievementCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34058 ];

	UOnlineSubsystemGameSpy_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;
	AddUnlockAchievementCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddUnlockAchievementCompleteDelegate_Parms.UnlockAchievementCompleteDelegate, &UnlockAchievementCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnUnlockAchievementComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->Data[ 34056 ];

	UOnlineSubsystemGameSpy_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;
	OnUnlockAchievementComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnlockAchievement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            AchievementId                  ( CPF_Parm )

bool UOnlineSubsystemGameSpy::UnlockAchievement ( unsigned char LocalUserNum, int AchievementId )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->Data[ 34052 ];

	UOnlineSubsystemGameSpy_execUnlockAchievement_Parms UnlockAchievement_Parms;
	UnlockAchievement_Parms.LocalUserNum = LocalUserNum;
	UnlockAchievement_Parms.AchievementId = AchievementId;

	pFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );

	pFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.DeleteMessage
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            MessageIndex                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::DeleteMessage ( unsigned char LocalUserNum, int MessageIndex )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 34048 ];

	UOnlineSubsystemGameSpy_execDeleteMessage_Parms DeleteMessage_Parms;
	DeleteMessage_Parms.LocalUserNum = LocalUserNum;
	DeleteMessage_Parms.MessageIndex = MessageIndex;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );

	return DeleteMessage_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetMessageIndex
// [0x00820002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FOnlineFriendMessage    Message                        ( CPF_Parm | CPF_NeedCtorLink )

int UOnlineSubsystemGameSpy::GetMessageIndex ( unsigned char LocalUserNum, struct FOnlineFriendMessage Message )
{
	static UFunction* pFnGetMessageIndex = NULL;

	if ( ! pFnGetMessageIndex )
		pFnGetMessageIndex = (UFunction*) UObject::GObjObjects()->Data[ 34042 ];

	UOnlineSubsystemGameSpy_execGetMessageIndex_Parms GetMessageIndex_Parms;
	GetMessageIndex_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &GetMessageIndex_Parms.Message, &Message, 0x30 );

	this->ProcessEvent ( pFnGetMessageIndex, &GetMessageIndex_Parms, NULL );

	return GetMessageIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnmuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::UnmuteAll ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->Data[ 34039 ];

	UOnlineSubsystemGameSpy_execUnmuteAll_Parms UnmuteAll_Parms;
	UnmuteAll_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );

	return UnmuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.MuteAll
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bAllowFriends                  ( CPF_Parm )

bool UOnlineSubsystemGameSpy::MuteAll ( unsigned char LocalUserNum, unsigned long bAllowFriends )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->Data[ 34032 ];

	UOnlineSubsystemGameSpy_execMuteAll_Parms MuteAll_Parms;
	MuteAll_Parms.LocalUserNum = LocalUserNum;
	MuteAll_Parms.bAllowFriends = bAllowFriends;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );

	return MuteAll_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CalcAggregateSkill
// [0x00420000] 
// Parameters infos:
// TArray< struct FDouble >       Mus                            ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FDouble >       Sigmas                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FDouble                 OutAggregateMu                 ( CPF_Parm | CPF_OutParm )
// struct FDouble                 OutAggregateSigma              ( CPF_Parm | CPF_OutParm )

void UOnlineSubsystemGameSpy::CalcAggregateSkill ( TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma )
{
	static UFunction* pFnCalcAggregateSkill = NULL;

	if ( ! pFnCalcAggregateSkill )
		pFnCalcAggregateSkill = (UFunction*) UObject::GObjObjects()->Data[ 34025 ];

	UOnlineSubsystemGameSpy_execCalcAggregateSkill_Parms CalcAggregateSkill_Parms;
	memcpy ( &CalcAggregateSkill_Parms.Mus, &Mus, 0xC );
	memcpy ( &CalcAggregateSkill_Parms.Sigmas, &Sigmas, 0xC );

	this->ProcessEvent ( pFnCalcAggregateSkill, &CalcAggregateSkill_Parms, NULL );

	if ( OutAggregateMu )
		memcpy ( OutAggregateMu, &CalcAggregateSkill_Parms.OutAggregateMu, 0x8 );

	if ( OutAggregateSigma )
		memcpy ( OutAggregateSigma, &CalcAggregateSkill_Parms.OutAggregateSigma, 0x8 );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RegisterStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// struct FString                 ClientStatGuid                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::RegisterStatGuid ( struct FUniqueNetId PlayerID, struct FString* ClientStatGuid )
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if ( ! pFnRegisterStatGuid )
		pFnRegisterStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 34021 ];

	UOnlineSubsystemGameSpy_execRegisterStatGuid_Parms RegisterStatGuid_Parms;
	memcpy ( &RegisterStatGuid_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL );

	pFnRegisterStatGuid->FunctionFlags |= 0x400;

	if ( ClientStatGuid )
		memcpy ( ClientStatGuid, &RegisterStatGuid_Parms.ClientStatGuid, 0xC );

	return RegisterStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetClientStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemGameSpy::GetClientStatGuid ( )
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if ( ! pFnGetClientStatGuid )
		pFnGetClientStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 34019 ];

	UOnlineSubsystemGameSpy_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	pFnGetClientStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL );

	pFnGetClientStatGuid->FunctionFlags |= 0x400;

	return GetClientStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearRegisterHostStatGuidCompleteDelegateDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if ( ! pFnClearRegisterHostStatGuidCompleteDelegateDelegate )
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34016 ];

	UOnlineSubsystemGameSpy_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;
	memcpy ( &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddRegisterHostStatGuidCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddRegisterHostStatGuidCompleteDelegate ( struct FScriptDelegate RegisterHostStatGuidCompleteDelegate )
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if ( ! pFnAddRegisterHostStatGuidCompleteDelegate )
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34013 ];

	UOnlineSubsystemGameSpy_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;
	memcpy ( &AddRegisterHostStatGuidCompleteDelegate_Parms.RegisterHostStatGuidCompleteDelegate, &RegisterHostStatGuidCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnRegisterHostStatGuidComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnRegisterHostStatGuidComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if ( ! pFnOnRegisterHostStatGuidComplete )
		pFnOnRegisterHostStatGuidComplete = (UFunction*) UObject::GObjObjects()->Data[ 34011 ];

	UOnlineSubsystemGameSpy_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;
	OnRegisterHostStatGuidComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RegisterHostStatGuid
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HostStatGuid                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::RegisterHostStatGuid ( struct FString* HostStatGuid )
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if ( ! pFnRegisterHostStatGuid )
		pFnRegisterHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 34008 ];

	UOnlineSubsystemGameSpy_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	pFnRegisterHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL );

	pFnRegisterHostStatGuid->FunctionFlags |= 0x400;

	if ( HostStatGuid )
		memcpy ( HostStatGuid, &RegisterHostStatGuid_Parms.HostStatGuid, 0xC );

	return RegisterHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetHostStatGuid
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UOnlineSubsystemGameSpy::GetHostStatGuid ( )
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if ( ! pFnGetHostStatGuid )
		pFnGetHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 34006 ];

	UOnlineSubsystemGameSpy_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	pFnGetHostStatGuid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL );

	pFnGetHostStatGuid->FunctionFlags |= 0x400;

	return GetHostStatGuid_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFriendMessageSentDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearFriendMessageSentDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageSentDelegate = NULL;

	if ( ! pFnClearFriendMessageSentDelegate )
		pFnClearFriendMessageSentDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34002 ];

	UOnlineSubsystemGameSpy_execClearFriendMessageSentDelegate_Parms ClearFriendMessageSentDelegate_Parms;
	ClearFriendMessageSentDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageSentDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendMessageSentDelegate, &ClearFriendMessageSentDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendMessageSentDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddFriendMessageSentDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageSentDelegate = NULL;

	if ( ! pFnAddFriendMessageSentDelegate )
		pFnAddFriendMessageSentDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33998 ];

	UOnlineSubsystemGameSpy_execAddFriendMessageSentDelegate_Parms AddFriendMessageSentDelegate_Parms;
	AddFriendMessageSentDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageSentDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendMessageSentDelegate, &AddFriendMessageSentDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFriendMessageSent
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RecievedPlayer                 ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnFriendMessageSent ( unsigned char LocalUserNum, struct FUniqueNetId RecievedPlayer, struct FString Message )
{
	static UFunction* pFnOnFriendMessageSent = NULL;

	if ( ! pFnOnFriendMessageSent )
		pFnOnFriendMessageSent = (UFunction*) UObject::GObjObjects()->Data[ 33994 ];

	UOnlineSubsystemGameSpy_execOnFriendMessageSent_Parms OnFriendMessageSent_Parms;
	OnFriendMessageSent_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageSent_Parms.RecievedPlayer, &RecievedPlayer, 0x8 );
	memcpy ( &OnFriendMessageSent_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendMessageSent, &OnFriendMessageSent_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33990 ];

	UOnlineSubsystemGameSpy_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;
	ClearFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendMessageReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         MessageDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddFriendMessageReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33986 ];

	UOnlineSubsystemGameSpy_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;
	AddFriendMessageReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendMessageReceivedDelegate_Parms.MessageDelegate, &MessageDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            SendingPlayer                  ( CPF_Parm )
// struct FString                 SendingNick                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnFriendMessageReceived ( unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->Data[ 33981 ];

	UOnlineSubsystemGameSpy_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;
	OnFriendMessageReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendMessageReceived_Parms.SendingPlayer, &SendingPlayer, 0x8 );
	memcpy ( &OnFriendMessageReceived_Parms.SendingNick, &SendingNick, 0xC );
	memcpy ( &OnFriendMessageReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetFriendMessages
// [0x00420002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FOnlineFriendMessage > FriendMessages                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::GetFriendMessages ( unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->Data[ 33976 ];

	UOnlineSubsystemGameSpy_execGetFriendMessages_Parms GetFriendMessages_Parms;
	GetFriendMessages_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );

	if ( FriendMessages )
		memcpy ( FriendMessages, &GetFriendMessages_Parms.FriendMessages, 0xC );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33973 ];

	UOnlineSubsystemGameSpy_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddJoinFriendGameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddJoinFriendGameCompleteDelegate ( struct FScriptDelegate JoinFriendGameCompleteDelegate )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33970 ];

	UOnlineSubsystemGameSpy_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;
	memcpy ( &AddJoinFriendGameCompleteDelegate_Parms.JoinFriendGameCompleteDelegate, &JoinFriendGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnJoinFriendGameComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 33968 ];

	UOnlineSubsystemGameSpy_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;
	OnJoinFriendGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.JoinFriendGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )

bool UOnlineSubsystemGameSpy::JoinFriendGame ( unsigned char LocalUserNum, struct FUniqueNetId Friend )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->Data[ 33964 ];

	UOnlineSubsystemGameSpy_execJoinFriendGame_Parms JoinFriendGame_Parms;
	JoinFriendGame_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &JoinFriendGame_Parms.Friend, &Friend, 0x8 );

	pFnJoinFriendGame->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );

	pFnJoinFriendGame->FunctionFlags |= 0x400;

	return JoinFriendGame_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33960 ];

	UOnlineSubsystemGameSpy_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;
	ClearReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReceivedGameInviteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReceivedGameInviteDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReceivedGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33956 ];

	UOnlineSubsystemGameSpy_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;
	AddReceivedGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReceivedGameInviteDelegate_Parms.ReceivedGameInviteDelegate, &ReceivedGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 InviterName                    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnReceivedGameInvite ( unsigned char LocalUserNum, struct FString InviterName )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 33953 ];

	UOnlineSubsystemGameSpy_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;
	OnReceivedGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnReceivedGameInvite_Parms.InviterName, &InviterName, 0xC );

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SendGameInviteToFriends
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FUniqueNetId >  Friends                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::SendGameInviteToFriends ( unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->Data[ 33947 ];

	UOnlineSubsystemGameSpy_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;
	SendGameInviteToFriends_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriends_Parms.Friends, &Friends, 0xC );
	memcpy ( &SendGameInviteToFriends_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );

	pFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SendGameInviteToFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Text                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::SendGameInviteToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->Data[ 33942 ];

	UOnlineSubsystemGameSpy_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;
	SendGameInviteToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendGameInviteToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendGameInviteToFriend_Parms.Text, &Text, 0xC );

	pFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );

	pFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SendMessageToFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            Friend                         ( CPF_Parm )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::SendMessageToFriend ( unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->Data[ 33937 ];

	UOnlineSubsystemGameSpy_execSendMessageToFriend_Parms SendMessageToFriend_Parms;
	SendMessageToFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SendMessageToFriend_Parms.Friend, &Friend, 0x8 );
	memcpy ( &SendMessageToFriend_Parms.Message, &Message, 0xC );

	pFnSendMessageToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );

	pFnSendMessageToFriend->FunctionFlags |= 0x400;

	return SendMessageToFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33933 ];

	UOnlineSubsystemGameSpy_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;
	ClearFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendInviteReceivedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         InviteDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddFriendInviteReceivedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33929 ];

	UOnlineSubsystemGameSpy_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;
	AddFriendInviteReceivedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendInviteReceivedDelegate_Parms.InviteDelegate, &InviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )
// struct FString                 RequestingNick                 ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnFriendInviteReceived ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 33924 ];

	UOnlineSubsystemGameSpy_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;
	OnFriendInviteReceived_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &OnFriendInviteReceived_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );
	memcpy ( &OnFriendInviteReceived_Parms.RequestingNick, &RequestingNick, 0xC );
	memcpy ( &OnFriendInviteReceived_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.DenyFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemGameSpy::DenyFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 33920 ];

	UOnlineSubsystemGameSpy_execDenyFriendInvite_Parms DenyFriendInvite_Parms;
	DenyFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &DenyFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );

	pFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AcceptFriendInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            RequestingPlayer               ( CPF_Parm )

bool UOnlineSubsystemGameSpy::AcceptFriendInvite ( unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 33916 ];

	UOnlineSubsystemGameSpy_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;
	AcceptFriendInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptFriendInvite_Parms.RequestingPlayer, &RequestingPlayer, 0x8 );

	pFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );

	pFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RemoveFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            FormerFriend                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::RemoveFriend ( unsigned char LocalUserNum, struct FUniqueNetId FormerFriend )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->Data[ 33912 ];

	UOnlineSubsystemGameSpy_execRemoveFriend_Parms RemoveFriend_Parms;
	RemoveFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &RemoveFriend_Parms.FormerFriend, &FormerFriend, 0x8 );

	pFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );

	pFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33908 ];

	UOnlineSubsystemGameSpy_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;
	ClearAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddAddFriendByNameCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddAddFriendByNameCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33903 ];

	UOnlineSubsystemGameSpy_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;
	AddAddFriendByNameCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddAddFriendByNameCompleteDelegate_Parms.FriendDelegate, &FriendDelegate, 0xC );

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 nick                           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnAddFriendByNameComplete ( unsigned long bWasSuccessful, struct FString nick )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->Data[ 33900 ];

	UOnlineSubsystemGameSpy_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;
	OnAddFriendByNameComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnAddFriendByNameComplete_Parms.nick, &nick, 0xC );

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendByName
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FriendName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::AddFriendByName ( unsigned char LocalUserNum, struct FString FriendName, struct FString Message )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->Data[ 33895 ];

	UOnlineSubsystemGameSpy_execAddFriendByName_Parms AddFriendByName_Parms;
	AddFriendByName_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendByName_Parms.FriendName, &FriendName, 0xC );
	memcpy ( &AddFriendByName_Parms.Message, &Message, 0xC );

	pFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );

	pFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriend
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NewFriend                      ( CPF_Parm )
// struct FString                 Message                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::AddFriend ( unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->Data[ 33890 ];

	UOnlineSubsystemGameSpy_execAddFriend_Parms AddFriend_Parms;
	AddFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriend_Parms.NewFriend, &NewFriend, 0x8 );
	memcpy ( &AddFriend_Parms.Message, &Message, 0xC );

	pFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );

	pFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetKeyboardInputResults
// [0x00420002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  bWasCanceled                   ( CPF_Parm | CPF_OutParm )

struct FString UOnlineSubsystemGameSpy::GetKeyboardInputResults ( unsigned char* bWasCanceled )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->Data[ 33885 ];

	UOnlineSubsystemGameSpy_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );

	if ( bWasCanceled )
		*bWasCanceled = GetKeyboardInputResults_Parms.bWasCanceled;

	return GetKeyboardInputResults_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33882 ];

	UOnlineSubsystemGameSpy_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;
	memcpy ( &ClearKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddKeyboardInputDoneDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         InputDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddKeyboardInputDoneDelegate ( struct FScriptDelegate InputDelegate )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33879 ];

	UOnlineSubsystemGameSpy_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;
	memcpy ( &AddKeyboardInputDoneDelegate_Parms.InputDelegate, &InputDelegate, 0xC );

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnKeyboardInputComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->Data[ 33877 ];

	UOnlineSubsystemGameSpy_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;
	OnKeyboardInputComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 TitleText                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DescriptionText                ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIsPassword                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bShouldValidate                ( CPF_OptionalParm | CPF_Parm )
// struct FString                 DefaultText                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// int                            MaxResultLength                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::ShowKeyboardUI ( unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 33868 ];

	UOnlineSubsystemGameSpy_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;
	ShowKeyboardUI_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ShowKeyboardUI_Parms.TitleText, &TitleText, 0xC );
	memcpy ( &ShowKeyboardUI_Parms.DescriptionText, &DescriptionText, 0xC );
	ShowKeyboardUI_Parms.bIsPassword = bIsPassword;
	ShowKeyboardUI_Parms.bShouldValidate = bShouldValidate;
	memcpy ( &ShowKeyboardUI_Parms.DefaultText, &DefaultText, 0xC );
	ShowKeyboardUI_Parms.MaxResultLength = MaxResultLength;

	pFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );

	pFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            StatusId                       ( CPF_Parm )
// TArray< struct FLocalizedStringSetting > LocalizedStringSettings        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// TArray< struct FSettingsProperty > Properties                     ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::SetOnlineStatus ( unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->Data[ 33861 ];

	UOnlineSubsystemGameSpy_execSetOnlineStatus_Parms SetOnlineStatus_Parms;
	SetOnlineStatus_Parms.LocalUserNum = LocalUserNum;
	SetOnlineStatus_Parms.StatusId = StatusId;

	pFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );

	pFnSetOnlineStatus->FunctionFlags |= 0x400;

	if ( LocalizedStringSettings )
		memcpy ( LocalizedStringSettings, &SetOnlineStatus_Parms.LocalizedStringSettings, 0xC );

	if ( Properties )
		memcpy ( Properties, &SetOnlineStatus_Parms.Properties, 0xC );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetLocalAccountNames
// [0x00420000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FString >       Accounts                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::GetLocalAccountNames ( TArray< struct FString >* Accounts )
{
	static UFunction* pFnGetLocalAccountNames = NULL;

	if ( ! pFnGetLocalAccountNames )
		pFnGetLocalAccountNames = (UFunction*) UObject::GObjObjects()->Data[ 33857 ];

	UOnlineSubsystemGameSpy_execGetLocalAccountNames_Parms GetLocalAccountNames_Parms;

	this->ProcessEvent ( pFnGetLocalAccountNames, &GetLocalAccountNames_Parms, NULL );

	if ( Accounts )
		memcpy ( Accounts, &GetLocalAccountNames_Parms.Accounts, 0xC );

	return GetLocalAccountNames_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.DeleteLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::DeleteLocalAccount ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnDeleteLocalAccount = NULL;

	if ( ! pFnDeleteLocalAccount )
		pFnDeleteLocalAccount = (UFunction*) UObject::GObjObjects()->Data[ 33853 ];

	UOnlineSubsystemGameSpy_execDeleteLocalAccount_Parms DeleteLocalAccount_Parms;
	memcpy ( &DeleteLocalAccount_Parms.UserName, &UserName, 0xC );
	memcpy ( &DeleteLocalAccount_Parms.Password, &Password, 0xC );

	this->ProcessEvent ( pFnDeleteLocalAccount, &DeleteLocalAccount_Parms, NULL );

	return DeleteLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RenameLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 NewUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 OldUserName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::RenameLocalAccount ( struct FString NewUserName, struct FString OldUserName, struct FString Password )
{
	static UFunction* pFnRenameLocalAccount = NULL;

	if ( ! pFnRenameLocalAccount )
		pFnRenameLocalAccount = (UFunction*) UObject::GObjObjects()->Data[ 33848 ];

	UOnlineSubsystemGameSpy_execRenameLocalAccount_Parms RenameLocalAccount_Parms;
	memcpy ( &RenameLocalAccount_Parms.NewUserName, &NewUserName, 0xC );
	memcpy ( &RenameLocalAccount_Parms.OldUserName, &OldUserName, 0xC );
	memcpy ( &RenameLocalAccount_Parms.Password, &Password, 0xC );

	this->ProcessEvent ( pFnRenameLocalAccount, &RenameLocalAccount_Parms, NULL );

	return RenameLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateLocalAccount
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::CreateLocalAccount ( struct FString UserName, struct FString Password )
{
	static UFunction* pFnCreateLocalAccount = NULL;

	if ( ! pFnCreateLocalAccount )
		pFnCreateLocalAccount = (UFunction*) UObject::GObjObjects()->Data[ 33844 ];

	UOnlineSubsystemGameSpy_execCreateLocalAccount_Parms CreateLocalAccount_Parms;
	memcpy ( &CreateLocalAccount_Parms.UserName, &UserName, 0xC );
	memcpy ( &CreateLocalAccount_Parms.Password, &Password, 0xC );

	this->ProcessEvent ( pFnCreateLocalAccount, &CreateLocalAccount_Parms, NULL );

	return CreateLocalAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearCreateOnlineAccountCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate )
{
	static UFunction* pFnClearCreateOnlineAccountCompletedDelegate = NULL;

	if ( ! pFnClearCreateOnlineAccountCompletedDelegate )
		pFnClearCreateOnlineAccountCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33841 ];

	UOnlineSubsystemGameSpy_execClearCreateOnlineAccountCompletedDelegate_Parms ClearCreateOnlineAccountCompletedDelegate_Parms;
	memcpy ( &ClearCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddCreateOnlineAccountCompletedDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         AccountCreateDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddCreateOnlineAccountCompletedDelegate ( struct FScriptDelegate AccountCreateDelegate )
{
	static UFunction* pFnAddCreateOnlineAccountCompletedDelegate = NULL;

	if ( ! pFnAddCreateOnlineAccountCompletedDelegate )
		pFnAddCreateOnlineAccountCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33838 ];

	UOnlineSubsystemGameSpy_execAddCreateOnlineAccountCompletedDelegate_Parms AddCreateOnlineAccountCompletedDelegate_Parms;
	memcpy ( &AddCreateOnlineAccountCompletedDelegate_Parms.AccountCreateDelegate, &AccountCreateDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnCreateOnlineAccountCompleted
// [0x00120000] 
// Parameters infos:
// unsigned char                  ErrorStatus                    ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnCreateOnlineAccountCompleted ( unsigned char ErrorStatus )
{
	static UFunction* pFnOnCreateOnlineAccountCompleted = NULL;

	if ( ! pFnOnCreateOnlineAccountCompleted )
		pFnOnCreateOnlineAccountCompleted = (UFunction*) UObject::GObjObjects()->Data[ 33836 ];

	UOnlineSubsystemGameSpy_execOnCreateOnlineAccountCompleted_Parms OnCreateOnlineAccountCompleted_Parms;
	OnCreateOnlineAccountCompleted_Parms.ErrorStatus = ErrorStatus;

	this->ProcessEvent ( pFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CreateOnlineAccount
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 UserName                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 EmailAddress                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ProductKey                     ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::CreateOnlineAccount ( struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey )
{
	static UFunction* pFnCreateOnlineAccount = NULL;

	if ( ! pFnCreateOnlineAccount )
		pFnCreateOnlineAccount = (UFunction*) UObject::GObjObjects()->Data[ 33830 ];

	UOnlineSubsystemGameSpy_execCreateOnlineAccount_Parms CreateOnlineAccount_Parms;
	memcpy ( &CreateOnlineAccount_Parms.UserName, &UserName, 0xC );
	memcpy ( &CreateOnlineAccount_Parms.Password, &Password, 0xC );
	memcpy ( &CreateOnlineAccount_Parms.EmailAddress, &EmailAddress, 0xC );
	memcpy ( &CreateOnlineAccount_Parms.ProductKey, &ProductKey, 0xC );

	pFnCreateOnlineAccount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateOnlineAccount, &CreateOnlineAccount_Parms, NULL );

	pFnCreateOnlineAccount->FunctionFlags |= 0x400;

	return CreateOnlineAccount_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetTitleFileState
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileName                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemGameSpy::GetTitleFileState ( struct FString FileName )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 33827 ];

	UOnlineSubsystemGameSpy_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.FileName, &FileName, 0xC );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileName                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::GetTitleFileContents ( struct FString FileName, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 33822 ];

	UOnlineSubsystemGameSpy_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.FileName, &FileName, 0xC );

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33819 ];

	UOnlineSubsystemGameSpy_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadTitleFileCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33816 ];

	UOnlineSubsystemGameSpy_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::ReadTitleFile ( struct FString FileToRead )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 33813 ];

	UOnlineSubsystemGameSpy_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC );

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 FileName                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString FileName )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 33810 ];

	UOnlineSubsystemGameSpy_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.FileName, &FileName, 0xC );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33808 ];

	UOnlineSubsystemGameSpy_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;
	memcpy ( &ClearStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         StorageDeviceChangeDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddStorageDeviceChangeDelegate ( struct FScriptDelegate StorageDeviceChangeDelegate )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33806 ];

	UOnlineSubsystemGameSpy_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;
	memcpy ( &AddStorageDeviceChangeDelegate_Parms.StorageDeviceChangeDelegate, &StorageDeviceChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemGameSpy::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->Data[ 33805 ];

	UOnlineSubsystemGameSpy_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetLocale
// [0x00020002] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UOnlineSubsystemGameSpy::GetLocale ( )
{
	static UFunction* pFnGetLocale = NULL;

	if ( ! pFnGetLocale )
		pFnGetLocale = (UFunction*) UObject::GObjObjects()->Data[ 33803 ];

	UOnlineSubsystemGameSpy_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent ( pFnGetLocale, &GetLocale_Parms, NULL );

	return GetLocale_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetNATType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemGameSpy::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->Data[ 33801 ];

	UOnlineSubsystemGameSpy_execGetNATType_Parms GetNATType_Parms;

	pFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );

	pFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33798 ];

	UOnlineSubsystemGameSpy_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;
	memcpy ( &ClearConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddConnectionStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ConnectionStatusDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddConnectionStatusChangeDelegate ( struct FScriptDelegate ConnectionStatusDelegate )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33795 ];

	UOnlineSubsystemGameSpy_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;
	memcpy ( &AddConnectionStatusChangeDelegate_Parms.ConnectionStatusDelegate, &ConnectionStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  ConnectionStatus               ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnConnectionStatusChange ( unsigned char ConnectionStatus )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 33793 ];

	UOnlineSubsystemGameSpy_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.ConnectionStatus = ConnectionStatus;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsControllerConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::IsControllerConnected ( int ControllerId )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->Data[ 33790 ];

	UOnlineSubsystemGameSpy_execIsControllerConnected_Parms IsControllerConnected_Parms;
	IsControllerConnected_Parms.ControllerId = ControllerId;

	pFnIsControllerConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );

	pFnIsControllerConnected->FunctionFlags |= 0x400;

	return IsControllerConnected_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearControllerChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33787 ];

	UOnlineSubsystemGameSpy_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;
	memcpy ( &ClearControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddControllerChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ControllerChangeDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddControllerChangeDelegate ( struct FScriptDelegate ControllerChangeDelegate )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33784 ];

	UOnlineSubsystemGameSpy_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;
	memcpy ( &AddControllerChangeDelegate_Parms.ControllerChangeDelegate, &ControllerChangeDelegate, 0xC );

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnControllerChange
// [0x00120000] 
// Parameters infos:
// int                            ControllerId                   ( CPF_Parm )
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnControllerChange ( int ControllerId, unsigned long bIsConnected )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->Data[ 33781 ];

	UOnlineSubsystemGameSpy_execOnControllerChange_Parms OnControllerChange_Parms;
	OnControllerChange_Parms.ControllerId = ControllerId;
	OnControllerChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetNetworkNotificationPosition
// [0x00020000] 
// Parameters infos:
// unsigned char                  NewPos                         ( CPF_Parm )

void UOnlineSubsystemGameSpy::SetNetworkNotificationPosition ( unsigned char NewPos )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 33779 ];

	UOnlineSubsystemGameSpy_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;
	SetNetworkNotificationPosition_Parms.NewPos = NewPos;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetNetworkNotificationPosition
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UOnlineSubsystemGameSpy::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 33777 ];

	UOnlineSubsystemGameSpy_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );

	return GetNetworkNotificationPosition_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33775 ];

	UOnlineSubsystemGameSpy_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;
	memcpy ( &ClearExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         ExternalUIDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddExternalUIChangeDelegate ( struct FScriptDelegate ExternalUIDelegate )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33773 ];

	UOnlineSubsystemGameSpy_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;
	memcpy ( &AddExternalUIChangeDelegate_Parms.ExternalUIDelegate, &ExternalUIDelegate, 0xC );

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnExternalUIChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsOpening                     ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnExternalUIChange ( unsigned long bIsOpening )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->Data[ 33771 ];

	UOnlineSubsystemGameSpy_execOnExternalUIChange_Parms OnExternalUIChange_Parms;
	OnExternalUIChange_Parms.bIsOpening = bIsOpening;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33768 ];

	UOnlineSubsystemGameSpy_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;
	memcpy ( &ClearLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLinkStatusChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LinkStatusDelegate             ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddLinkStatusChangeDelegate ( struct FScriptDelegate LinkStatusDelegate )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33765 ];

	UOnlineSubsystemGameSpy_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;
	memcpy ( &AddLinkStatusChangeDelegate_Parms.LinkStatusDelegate, &LinkStatusDelegate, 0xC );

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsConnected                   ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnLinkStatusChange ( unsigned long bIsConnected )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 33763 ];

	UOnlineSubsystemGameSpy_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;
	OnLinkStatusChange_Parms.bIsConnected = bIsConnected;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.HasLinkConnection
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->Data[ 33761 ];

	UOnlineSubsystemGameSpy_execHasLinkConnection_Parms HasLinkConnection_Parms;

	pFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );

	pFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPlayerUniqueNetIdFromIndex
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            UserIndex                      ( CPF_Parm )

struct FUniqueNetId UOnlineSubsystemGameSpy::eventGetPlayerUniqueNetIdFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerUniqueNetIdFromIndex = NULL;

	if ( ! pFnGetPlayerUniqueNetIdFromIndex )
		pFnGetPlayerUniqueNetIdFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 33757 ];

	UOnlineSubsystemGameSpy_eventGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
	GetPlayerUniqueNetIdFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, NULL );

	return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemGameSpy::eventGetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 33754 ];

	UOnlineSubsystemGameSpy_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WriteOnlinePlayerScores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// int                            LeaderboardId                  ( CPF_Parm )
// TArray< struct FOnlinePlayerScore > PlayerScores                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::WriteOnlinePlayerScores ( struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores )
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if ( ! pFnWriteOnlinePlayerScores )
		pFnWriteOnlinePlayerScores = (UFunction*) UObject::GObjObjects()->Data[ 33748 ];

	UOnlineSubsystemGameSpy_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;
	memcpy ( &WriteOnlinePlayerScores_Parms.SessionName, &SessionName, 0x8 );
	WriteOnlinePlayerScores_Parms.LeaderboardId = LeaderboardId;

	pFnWriteOnlinePlayerScores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );

	pFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;

	if ( PlayerScores )
		memcpy ( PlayerScores, &WriteOnlinePlayerScores_Parms.PlayerScores, 0xC );

	return WriteOnlinePlayerScores_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearFlushOnlineStatsCompleteDelegate )
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33745 ];

	UOnlineSubsystemGameSpy_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddFlushOnlineStatsCompleteDelegate ( struct FScriptDelegate FlushOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddFlushOnlineStatsCompleteDelegate )
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33742 ];

	UOnlineSubsystemGameSpy_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddFlushOnlineStatsCompleteDelegate_Parms.FlushOnlineStatsCompleteDelegate, &FlushOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFlushOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnFlushOnlineStatsComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if ( ! pFnOnFlushOnlineStatsComplete )
		pFnOnFlushOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 33739 ];

	UOnlineSubsystemGameSpy_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;
	memcpy ( &OnFlushOnlineStatsComplete_Parms.SessionName, &SessionName, 0x8 );
	OnFlushOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineSubsystemGameSpy::FlushOnlineStats ( struct FName SessionName )
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if ( ! pFnFlushOnlineStats )
		pFnFlushOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 33736 ];

	UOnlineSubsystemGameSpy_execFlushOnlineStats_Parms FlushOnlineStats_Parms;
	memcpy ( &FlushOnlineStats_Parms.SessionName, &SessionName, 0x8 );

	pFnFlushOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL );

	pFnFlushOnlineStats->FunctionFlags |= 0x400;

	return FlushOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            Player                         ( CPF_Parm )
// class UOnlineStatsWrite*       StatsWrite                     ( CPF_Parm )

bool UOnlineSubsystemGameSpy::WriteOnlineStats ( struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite )
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if ( ! pFnWriteOnlineStats )
		pFnWriteOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 33731 ];

	UOnlineSubsystemGameSpy_execWriteOnlineStats_Parms WriteOnlineStats_Parms;
	memcpy ( &WriteOnlineStats_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &WriteOnlineStats_Parms.Player, &Player, 0x8 );
	WriteOnlineStats_Parms.StatsWrite = StatsWrite;

	pFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );

	pFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.FreeStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

void UOnlineSubsystemGameSpy::FreeStats ( class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnFreeStats = NULL;

	if ( ! pFnFreeStats )
		pFnFreeStats = (UFunction*) UObject::GObjObjects()->Data[ 33729 ];

	UOnlineSubsystemGameSpy_execFreeStats_Parms FreeStats_Parms;
	FreeStats_Parms.StatsRead = StatsRead;

	pFnFreeStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeStats, &FreeStats_Parms, NULL );

	pFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineStatsCompleteDelegate )
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33726 ];

	UOnlineSubsystemGameSpy_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &ClearReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadOnlineStatsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadOnlineStatsCompleteDelegate ( struct FScriptDelegate ReadOnlineStatsCompleteDelegate )
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineStatsCompleteDelegate )
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33723 ];

	UOnlineSubsystemGameSpy_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;
	memcpy ( &AddReadOnlineStatsCompleteDelegate_Parms.ReadOnlineStatsCompleteDelegate, &ReadOnlineStatsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadOnlineStatsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnReadOnlineStatsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if ( ! pFnOnReadOnlineStatsComplete )
		pFnOnReadOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 33721 ];

	UOnlineSubsystemGameSpy_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;
	OnReadOnlineStatsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadOnlineStatsByRankAroundPlayer
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            NumRows                        ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::ReadOnlineStatsByRankAroundPlayer ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows )
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if ( ! pFnReadOnlineStatsByRankAroundPlayer )
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*) UObject::GObjObjects()->Data[ 33716 ];

	UOnlineSubsystemGameSpy_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;
	ReadOnlineStatsByRankAroundPlayer_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsByRankAroundPlayer_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRankAroundPlayer_Parms.NumRows = NumRows;

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL );

	pFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadOnlineStatsByRank
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// int                            StartIndex                     ( CPF_OptionalParm | CPF_Parm )
// int                            NumToRead                      ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::ReadOnlineStatsByRank ( class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead )
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if ( ! pFnReadOnlineStatsByRank )
		pFnReadOnlineStatsByRank = (UFunction*) UObject::GObjObjects()->Data[ 33711 ];

	UOnlineSubsystemGameSpy_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;
	ReadOnlineStatsByRank_Parms.StatsRead = StatsRead;
	ReadOnlineStatsByRank_Parms.StartIndex = StartIndex;
	ReadOnlineStatsByRank_Parms.NumToRead = NumToRead;

	pFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL );

	pFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadOnlineStatsForFriends
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )

bool UOnlineSubsystemGameSpy::ReadOnlineStatsForFriends ( unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead )
{
	static UFunction* pFnReadOnlineStatsForFriends = NULL;

	if ( ! pFnReadOnlineStatsForFriends )
		pFnReadOnlineStatsForFriends = (UFunction*) UObject::GObjObjects()->Data[ 33707 ];

	UOnlineSubsystemGameSpy_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;
	ReadOnlineStatsForFriends_Parms.LocalUserNum = LocalUserNum;
	ReadOnlineStatsForFriends_Parms.StatsRead = StatsRead;

	pFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, NULL );

	pFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadOnlineStats
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineStatsRead*        StatsRead                      ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::ReadOnlineStats ( class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnReadOnlineStats = NULL;

	if ( ! pFnReadOnlineStats )
		pFnReadOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 33702 ];

	UOnlineSubsystemGameSpy_execReadOnlineStats_Parms ReadOnlineStats_Parms;
	ReadOnlineStats_Parms.StatsRead = StatsRead;

	pFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL );

	pFnReadOnlineStats->FunctionFlags |= 0x400;

	if ( Players )
		memcpy ( Players, &ReadOnlineStats_Parms.Players, 0xC );

	return ReadOnlineStats_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class USpeechRecognition*      SpeechRecogObj                 ( CPF_Parm )

bool UOnlineSubsystemGameSpy::SetSpeechRecognitionObject ( unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->Data[ 33698 ];

	UOnlineSubsystemGameSpy_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;
	SetSpeechRecognitionObject_Parms.LocalUserNum = LocalUserNum;
	SetSpeechRecognitionObject_Parms.SpeechRecogObj = SpeechRecogObj;

	pFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );

	pFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SelectVocabulary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            VocabularyId                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::SelectVocabulary ( unsigned char LocalUserNum, int VocabularyId )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->Data[ 33694 ];

	UOnlineSubsystemGameSpy_execSelectVocabulary_Parms SelectVocabulary_Parms;
	SelectVocabulary_Parms.LocalUserNum = LocalUserNum;
	SelectVocabulary_Parms.VocabularyId = VocabularyId;

	pFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );

	pFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33690 ];

	UOnlineSubsystemGameSpy_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;
	ClearRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         RecognitionDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddRecognitionCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33686 ];

	UOnlineSubsystemGameSpy_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;
	AddRecognitionCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddRecognitionCompleteDelegate_Parms.RecognitionDelegate, &RecognitionDelegate, 0xC );

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemGameSpy::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->Data[ 33685 ];

	UOnlineSubsystemGameSpy_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FSpeechRecognizedWord > Words                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::GetRecognitionResults ( unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->Data[ 33680 ];

	UOnlineSubsystemGameSpy_execGetRecognitionResults_Parms GetRecognitionResults_Parms;
	GetRecognitionResults_Parms.LocalUserNum = LocalUserNum;

	pFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );

	pFnGetRecognitionResults->FunctionFlags |= 0x400;

	if ( Words )
		memcpy ( Words, &GetRecognitionResults_Parms.Words, 0xC );

	return GetRecognitionResults_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::StopSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 33677 ];

	UOnlineSubsystemGameSpy_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;
	StopSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );

	pFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::StartSpeechRecognition ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 33674 ];

	UOnlineSubsystemGameSpy_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;
	StartSpeechRecognition_Parms.LocalUserNum = LocalUserNum;

	pFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );

	pFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemGameSpy::StopNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 33672 ];

	UOnlineSubsystemGameSpy_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;
	StopNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );

	pFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemGameSpy::StartNetworkedVoice ( unsigned char LocalUserNum )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 33670 ];

	UOnlineSubsystemGameSpy_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;
	StartNetworkedVoice_Parms.LocalUserNum = LocalUserNum;

	pFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );

	pFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if ( ! pFnClearPlayerTalkingDelegate )
		pFnClearPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33667 ];

	UOnlineSubsystemGameSpy_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;
	memcpy ( &ClearPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddPlayerTalkingDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         TalkerDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddPlayerTalkingDelegate ( struct FScriptDelegate TalkerDelegate )
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if ( ! pFnAddPlayerTalkingDelegate )
		pFnAddPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33664 ];

	UOnlineSubsystemGameSpy_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;
	memcpy ( &AddPlayerTalkingDelegate_Parms.TalkerDelegate, &TalkerDelegate, 0xC );

	this->ProcessEvent ( pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnPlayerTalkingStateChange
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            Player                         ( CPF_Parm )
// unsigned long                  bIsTalking                     ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnPlayerTalkingStateChange ( struct FUniqueNetId Player, unsigned long bIsTalking )
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if ( ! pFnOnPlayerTalkingStateChange )
		pFnOnPlayerTalkingStateChange = (UFunction*) UObject::GObjObjects()->Data[ 33661 ];

	UOnlineSubsystemGameSpy_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;
	memcpy ( &OnPlayerTalkingStateChange_Parms.Player, &Player, 0x8 );
	OnPlayerTalkingStateChange_Parms.bIsTalking = bIsTalking;

	this->ProcessEvent ( pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnmuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::UnmuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 33656 ];

	UOnlineSubsystemGameSpy_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;
	UnmuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &UnmuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	UnmuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );

	pFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.MuteRemoteTalker
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bIsSystemWide                  ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::MuteRemoteTalker ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 33651 ];

	UOnlineSubsystemGameSpy_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;
	MuteRemoteTalker_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &MuteRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );
	MuteRemoteTalker_Parms.bIsSystemWide = bIsSystemWide;

	pFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );

	pFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// int                            Priority                       ( CPF_Parm )

bool UOnlineSubsystemGameSpy::SetRemoteTalkerPriority ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->Data[ 33646 ];

	UOnlineSubsystemGameSpy_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;
	SetRemoteTalkerPriority_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &SetRemoteTalkerPriority_Parms.PlayerID, &PlayerID, 0x8 );
	SetRemoteTalkerPriority_Parms.Priority = Priority;

	pFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );

	pFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::IsHeadsetPresent ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->Data[ 33643 ];

	UOnlineSubsystemGameSpy_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;
	IsHeadsetPresent_Parms.LocalUserNum = LocalUserNum;

	pFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );

	pFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemGameSpy::IsRemotePlayerTalking ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 33640 ];

	UOnlineSubsystemGameSpy_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;
	memcpy ( &IsRemotePlayerTalking_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );

	pFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::IsLocalPlayerTalking ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 33637 ];

	UOnlineSubsystemGameSpy_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;
	IsLocalPlayerTalking_Parms.LocalUserNum = LocalUserNum;

	pFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );

	pFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemGameSpy::UnregisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 33634 ];

	UOnlineSubsystemGameSpy_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;
	memcpy ( &UnregisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );

	pFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemGameSpy::RegisterRemoteTalker ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 33631 ];

	UOnlineSubsystemGameSpy_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;
	memcpy ( &RegisterRemoteTalker_Parms.PlayerID, &PlayerID, 0x8 );

	pFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );

	pFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::UnregisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 33628 ];

	UOnlineSubsystemGameSpy_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;
	UnregisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );

	pFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::RegisterLocalTalker ( unsigned char LocalUserNum )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 33625 ];

	UOnlineSubsystemGameSpy_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;
	RegisterLocalTalker_Parms.LocalUserNum = LocalUserNum;

	pFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );

	pFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetFriendsList
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FOnlineFriend > Friends                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UOnlineSubsystemGameSpy::GetFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 33618 ];

	UOnlineSubsystemGameSpy_execGetFriendsList_Parms GetFriendsList_Parms;
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

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33614 ];

	UOnlineSubsystemGameSpy_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;
	ClearReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadFriendsCompleteDelegate    ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadFriendsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33610 ];

	UOnlineSubsystemGameSpy_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;
	AddReadFriendsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadFriendsCompleteDelegate_Parms.ReadFriendsCompleteDelegate, &ReadFriendsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnReadFriendsComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->Data[ 33608 ];

	UOnlineSubsystemGameSpy_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;
	OnReadFriendsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadFriendsList
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// int                            StartingAt                     ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::ReadFriendsList ( unsigned char LocalUserNum, int Count, int StartingAt )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 33603 ];

	UOnlineSubsystemGameSpy_execReadFriendsList_Parms ReadFriendsList_Parms;
	ReadFriendsList_Parms.LocalUserNum = LocalUserNum;
	ReadFriendsList_Parms.Count = Count;
	ReadFriendsList_Parms.StartingAt = StartingAt;

	pFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );

	pFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33599 ];

	UOnlineSubsystemGameSpy_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;
	ClearWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddWritePlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33595 ];

	UOnlineSubsystemGameSpy_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;
	AddWritePlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWritePlayerStorageCompleteDelegate_Parms.WritePlayerStorageCompleteDelegate, &WritePlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnWritePlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 33592 ];

	UOnlineSubsystemGameSpy_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;
	OnWritePlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnWritePlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WritePlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::WritePlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 33587 ];

	UOnlineSubsystemGameSpy_execWritePlayerStorage_Parms WritePlayerStorage_Parms;
	WritePlayerStorage_Parms.LocalUserNum = LocalUserNum;
	WritePlayerStorage_Parms.PlayerStorage = PlayerStorage;
	WritePlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );

	return WritePlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPlayerStorage
// [0x00020002] 
// Parameters infos:
// class UOnlinePlayerStorage*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlinePlayerStorage* UOnlineSubsystemGameSpy::GetPlayerStorage ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 33583 ];

	UOnlineSubsystemGameSpy_execGetPlayerStorage_Parms GetPlayerStorage_Parms;
	GetPlayerStorage_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );

	return GetPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33579 ];

	UOnlineSubsystemGameSpy_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadPlayerStorageForNetIdCompleteDelegate ( struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33575 ];

	UOnlineSubsystemGameSpy_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.NetId, &NetId, 0x8 );
	memcpy ( &AddReadPlayerStorageForNetIdCompleteDelegate_Parms.ReadPlayerStorageForNetIdCompleteDelegate, &ReadPlayerStorageForNetIdCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnReadPlayerStorageForNetIdComplete ( struct FUniqueNetId NetId, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->Data[ 33572 ];

	UOnlineSubsystemGameSpy_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;
	memcpy ( &OnReadPlayerStorageForNetIdComplete_Parms.NetId, &NetId, 0x8 );
	OnReadPlayerStorageForNetIdComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            NetId                          ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineSubsystemGameSpy::ReadPlayerStorageForNetId ( unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->Data[ 33567 ];

	UOnlineSubsystemGameSpy_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;
	ReadPlayerStorageForNetId_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ReadPlayerStorageForNetId_Parms.NetId, &NetId, 0x8 );
	ReadPlayerStorageForNetId_Parms.PlayerStorage = PlayerStorage;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );

	return ReadPlayerStorageForNetId_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33563 ];

	UOnlineSubsystemGameSpy_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;
	ClearReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadPlayerStorageCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33559 ];

	UOnlineSubsystemGameSpy_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;
	AddReadPlayerStorageCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadPlayerStorageCompleteDelegate_Parms.ReadPlayerStorageCompleteDelegate, &ReadPlayerStorageCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnReadPlayerStorageComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 33556 ];

	UOnlineSubsystemGameSpy_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;
	OnReadPlayerStorageComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadPlayerStorageComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )
// int                            DeviceID                       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::ReadPlayerStorage ( unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 33551 ];

	UOnlineSubsystemGameSpy_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;
	ReadPlayerStorage_Parms.LocalUserNum = LocalUserNum;
	ReadPlayerStorage_Parms.PlayerStorage = PlayerStorage;
	ReadPlayerStorage_Parms.DeviceID = DeviceID;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );

	return ReadPlayerStorage_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33547 ];

	UOnlineSubsystemGameSpy_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;
	ClearWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddWriteProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33543 ];

	UOnlineSubsystemGameSpy_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;
	AddWriteProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWriteProfileSettingsCompleteDelegate_Parms.WriteProfileSettingsCompleteDelegate, &WriteProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnWriteProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 33540 ];

	UOnlineSubsystemGameSpy_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;
	OnWriteProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnWriteProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemGameSpy::WriteProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 33536 ];

	UOnlineSubsystemGameSpy_execWriteProfileSettings_Parms WriteProfileSettings_Parms;
	WriteProfileSettings_Parms.LocalUserNum = LocalUserNum;
	WriteProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	pFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetProfileSettings
// [0x00020002] 
// Parameters infos:
// class UOnlineProfileSettings*  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

class UOnlineProfileSettings* UOnlineSubsystemGameSpy::GetProfileSettings ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 33532 ];

	UOnlineSubsystemGameSpy_execGetProfileSettings_Parms GetProfileSettings_Parms;
	GetProfileSettings_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );

	return GetProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33528 ];

	UOnlineSubsystemGameSpy_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;
	ClearReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddReadProfileSettingsCompleteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33522 ];

	UOnlineSubsystemGameSpy_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;
	AddReadProfileSettingsCompleteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddReadProfileSettingsCompleteDelegate_Parms.ReadProfileSettingsCompleteDelegate, &ReadProfileSettingsCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnReadProfileSettingsComplete ( unsigned char LocalUserNum, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 33519 ];

	UOnlineSubsystemGameSpy_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;
	OnReadProfileSettingsComplete_Parms.LocalUserNum = LocalUserNum;
	OnReadProfileSettingsComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineSubsystemGameSpy::ReadProfileSettings ( unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 33515 ];

	UOnlineSubsystemGameSpy_execReadProfileSettings_Parms ReadProfileSettings_Parms;
	ReadProfileSettings_Parms.LocalUserNum = LocalUserNum;
	ReadProfileSettings_Parms.ProfileSettings = ProfileSettings;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	pFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33511 ];

	UOnlineSubsystemGameSpy_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;
	ClearFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         FriendsDelegate                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddFriendsChangeDelegate ( unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33507 ];

	UOnlineSubsystemGameSpy_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;
	AddFriendsChangeDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddFriendsChangeDelegate_Parms.FriendsDelegate, &FriendsDelegate, 0xC );

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33504 ];

	UOnlineSubsystemGameSpy_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;
	memcpy ( &ClearMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddMutingChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         MutingDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddMutingChangeDelegate ( struct FScriptDelegate MutingDelegate )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33501 ];

	UOnlineSubsystemGameSpy_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;
	memcpy ( &AddMutingChangeDelegate_Parms.MutingDelegate, &MutingDelegate, 0xC );

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33499 ];

	UOnlineSubsystemGameSpy_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;
	memcpy ( &ClearLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         CancelledDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddLoginCancelledDelegate ( struct FScriptDelegate CancelledDelegate )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33497 ];

	UOnlineSubsystemGameSpy_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;
	memcpy ( &AddLoginCancelledDelegate_Parms.CancelledDelegate, &CancelledDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemGameSpy::ClearLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33494 ];

	UOnlineSubsystemGameSpy_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;
	memcpy ( &ClearLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	ClearLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:
// struct FScriptDelegate         LoginStatusDelegate            ( CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemGameSpy::AddLoginStatusChangeDelegate ( struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33491 ];

	UOnlineSubsystemGameSpy_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;
	memcpy ( &AddLoginStatusChangeDelegate_Parms.LoginStatusDelegate, &LoginStatusDelegate, 0xC );
	AddLoginStatusChangeDelegate_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnLoginStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 33488 ];

	UOnlineSubsystemGameSpy_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;
	OnLoginStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnLoginStatusChange_Parms.NewId, &NewId, 0x8 );

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33485 ];

	UOnlineSubsystemGameSpy_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;
	memcpy ( &ClearLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLoginChangeDelegate
// [0x00020002] 
// Parameters infos:
// struct FScriptDelegate         LoginDelegate                  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddLoginChangeDelegate ( struct FScriptDelegate LoginDelegate )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33482 ];

	UOnlineSubsystemGameSpy_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;
	memcpy ( &AddLoginChangeDelegate_Parms.LoginDelegate, &LoginDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ShowFriendsUI
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::ShowFriendsUI ( unsigned char LocalUserNum )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 33479 ];

	UOnlineSubsystemGameSpy_execShowFriendsUI_Parms ShowFriendsUI_Parms;
	ShowFriendsUI_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );

	return ShowFriendsUI_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsMuted
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemGameSpy::IsMuted ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->Data[ 33475 ];

	UOnlineSubsystemGameSpy_execIsMuted_Parms IsMuted_Parms;
	IsMuted_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsMuted_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );

	return IsMuted_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AreAnyFriends
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// TArray< struct FFriendsQuery > Query                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineSubsystemGameSpy::AreAnyFriends ( unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->Data[ 33470 ];

	UOnlineSubsystemGameSpy_execAreAnyFriends_Parms AreAnyFriends_Parms;
	AreAnyFriends_Parms.LocalUserNum = LocalUserNum;

	pFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );

	pFnAreAnyFriends->FunctionFlags |= 0x400;

	if ( Query )
		memcpy ( Query, &AreAnyFriends_Parms.Query, 0xC );

	return AreAnyFriends_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsFriend
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemGameSpy::IsFriend ( unsigned char LocalUserNum, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->Data[ 33466 ];

	UOnlineSubsystemGameSpy_execIsFriend_Parms IsFriend_Parms;
	IsFriend_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &IsFriend_Parms.PlayerID, &PlayerID, 0x8 );

	pFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );

	pFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanShowPresenceInformation
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemGameSpy::CanShowPresenceInformation ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 33463 ];

	UOnlineSubsystemGameSpy_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;
	CanShowPresenceInformation_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );

	return CanShowPresenceInformation_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanViewPlayerProfiles
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemGameSpy::CanViewPlayerProfiles ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 33460 ];

	UOnlineSubsystemGameSpy_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;
	CanViewPlayerProfiles_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );

	return CanViewPlayerProfiles_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanPurchaseContent
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemGameSpy::CanPurchaseContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 33457 ];

	UOnlineSubsystemGameSpy_execCanPurchaseContent_Parms CanPurchaseContent_Parms;
	CanPurchaseContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );

	return CanPurchaseContent_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanDownloadUserContent
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemGameSpy::CanDownloadUserContent ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 33454 ];

	UOnlineSubsystemGameSpy_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;
	CanDownloadUserContent_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );

	return CanDownloadUserContent_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanCommunicate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemGameSpy::CanCommunicate ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 33451 ];

	UOnlineSubsystemGameSpy_execCanCommunicate_Parms CanCommunicate_Parms;
	CanCommunicate_Parms.LocalUserNum = LocalUserNum;

	pFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );

	pFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.CanPlayOnline
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemGameSpy::CanPlayOnline ( unsigned char LocalUserNum )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 33448 ];

	UOnlineSubsystemGameSpy_execCanPlayOnline_Parms CanPlayOnline_Parms;
	CanPlayOnline_Parms.LocalUserNum = LocalUserNum;

	pFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );

	pFnCanPlayOnline->FunctionFlags |= 0x400;

	return CanPlayOnline_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetPlayerNickname
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

struct FString UOnlineSubsystemGameSpy::GetPlayerNickname ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->Data[ 33444 ];

	UOnlineSubsystemGameSpy_execGetPlayerNickname_Parms GetPlayerNickname_Parms;
	GetPlayerNickname_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );

	return GetPlayerNickname_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetUniquePlayerId
// [0x00420002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm | CPF_OutParm )

bool UOnlineSubsystemGameSpy::GetUniquePlayerId ( unsigned char LocalUserNum, struct FUniqueNetId* PlayerID )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->Data[ 33439 ];

	UOnlineSubsystemGameSpy_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;
	GetUniquePlayerId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );

	if ( PlayerID )
		memcpy ( PlayerID, &GetUniquePlayerId_Parms.PlayerID, 0x8 );

	return GetUniquePlayerId_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsLocalLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::IsLocalLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->Data[ 33436 ];

	UOnlineSubsystemGameSpy_execIsLocalLogin_Parms IsLocalLogin_Parms;
	IsLocalLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );

	return IsLocalLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.IsGuestLogin
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::IsGuestLogin ( unsigned char LocalUserNum )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->Data[ 33433 ];

	UOnlineSubsystemGameSpy_execIsGuestLogin_Parms IsGuestLogin_Parms;
	IsGuestLogin_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );

	return IsGuestLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.GetLoginStatus
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

unsigned char UOnlineSubsystemGameSpy::GetLoginStatus ( unsigned char LocalUserNum )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 33430 ];

	UOnlineSubsystemGameSpy_execGetLoginStatus_Parms GetLoginStatus_Parms;
	GetLoginStatus_Parms.LocalUserNum = LocalUserNum;

	pFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );

	pFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33426 ];

	UOnlineSubsystemGameSpy_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;
	ClearLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLogoutCompletedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LogoutDelegate                 ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddLogoutCompletedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33422 ];

	UOnlineSubsystemGameSpy_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;
	AddLogoutCompletedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLogoutCompletedDelegate_Parms.LogoutDelegate, &LogoutDelegate, 0xC );

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnLogoutCompleted ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->Data[ 33420 ];

	UOnlineSubsystemGameSpy_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;
	OnLogoutCompleted_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.Logout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )

bool UOnlineSubsystemGameSpy::Logout ( unsigned char LocalUserNum )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 33417 ];

	UOnlineSubsystemGameSpy_execLogout_Parms Logout_Parms;
	Logout_Parms.LocalUserNum = LocalUserNum;

	pFnLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );

	pFnLogout->FunctionFlags |= 0x400;

	return Logout_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ClearLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::ClearLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33413 ];

	UOnlineSubsystemGameSpy_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;
	ClearLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC );

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AddLoginFailedDelegate
// [0x00020002] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         LoginFailedDelegate            ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineSubsystemGameSpy::AddLoginFailedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 33409 ];

	UOnlineSubsystemGameSpy_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;
	AddLoginFailedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddLoginFailedDelegate_Parms.LoginFailedDelegate, &LoginFailedDelegate, 0xC );

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLoginFailed
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  ErrorCode                      ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnLoginFailed ( unsigned char LocalUserNum, unsigned char ErrorCode )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 33406 ];

	UOnlineSubsystemGameSpy_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.LocalUserNum = LocalUserNum;
	OnLoginFailed_Parms.ErrorCode = ErrorCode;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.AutoLogin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->Data[ 33404 ];

	UOnlineSubsystemGameSpy_execAutoLogin_Parms AutoLogin_Parms;

	pFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );

	pFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.LoginPreAuthenticated
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 Token                          ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Challenge                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::LoginPreAuthenticated ( unsigned char LocalUserNum, struct FString Token, struct FString Challenge, unsigned long bWantsLocalOnly )
{
	static UFunction* pFnLoginPreAuthenticated = NULL;

	if ( ! pFnLoginPreAuthenticated )
		pFnLoginPreAuthenticated = (UFunction*) UObject::GObjObjects()->Data[ 33398 ];

	UOnlineSubsystemGameSpy_execLoginPreAuthenticated_Parms LoginPreAuthenticated_Parms;
	LoginPreAuthenticated_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &LoginPreAuthenticated_Parms.Token, &Token, 0xC );
	memcpy ( &LoginPreAuthenticated_Parms.Challenge, &Challenge, 0xC );
	LoginPreAuthenticated_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLoginPreAuthenticated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoginPreAuthenticated, &LoginPreAuthenticated_Parms, NULL );

	pFnLoginPreAuthenticated->FunctionFlags |= 0x400;

	return LoginPreAuthenticated_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.Login
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 LoginName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Password                       ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bWantsLocalOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::Login ( unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 33392 ];

	UOnlineSubsystemGameSpy_execLogin_Parms Login_Parms;
	Login_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &Login_Parms.LoginName, &LoginName, 0xC );
	memcpy ( &Login_Parms.Password, &Password, 0xC );
	Login_Parms.bWantsLocalOnly = bWantsLocalOnly;

	pFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );

	pFnLogin->FunctionFlags |= 0x400;

	return Login_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.ShowLoginUI
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShowOnlineOnly                ( CPF_OptionalParm | CPF_Parm )

bool UOnlineSubsystemGameSpy::ShowLoginUI ( unsigned long bShowOnlineOnly )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 33389 ];

	UOnlineSubsystemGameSpy_execShowLoginUI_Parms ShowLoginUI_Parms;
	ShowLoginUI_Parms.bShowOnlineOnly = bShowOnlineOnly;

	pFnShowLoginUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );

	pFnShowLoginUI->FunctionFlags |= 0x400;

	return ShowLoginUI_Parms.ReturnValue;
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemGameSpy::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->Data[ 33388 ];

	UOnlineSubsystemGameSpy_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemGameSpy::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->Data[ 33387 ];

	UOnlineSubsystemGameSpy_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemGameSpy::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->Data[ 33386 ];

	UOnlineSubsystemGameSpy_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.OnLoginChange
// [0x00120000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlineSubsystemGameSpy::OnLoginChange ( unsigned char LocalUserNum )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->Data[ 33384 ];

	UOnlineSubsystemGameSpy_execOnLoginChange_Parms OnLoginChange_Parms;
	OnLoginChange_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemGameSpy.OnlineSubsystemGameSpy.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemGameSpy::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 33382 ];

	UOnlineSubsystemGameSpy_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;

	return Init_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif