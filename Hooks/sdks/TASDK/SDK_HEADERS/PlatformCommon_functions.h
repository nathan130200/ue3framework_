/*
#############################################################################################
# Tribes Ascend (1.0.1016.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: PlatformCommon_functions.h
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

// Function PlatformCommon.TgGameEngine.HandlePlayerCommandInput
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FSCommand                      ( CPF_Parm | CPF_NeedCtorLink )
// class APlayerController*       PC                             ( CPF_OptionalParm | CPF_Parm )

bool UTgGameEngine::HandlePlayerCommandInput ( struct FString FSCommand, class APlayerController* PC )
{
	static UFunction* pFnHandlePlayerCommandInput = NULL;

	if ( ! pFnHandlePlayerCommandInput )
		pFnHandlePlayerCommandInput = (UFunction*) UObject::GObjObjects()->Data[ 34044 ];

	UTgGameEngine_execHandlePlayerCommandInput_Parms HandlePlayerCommandInput_Parms;
	memcpy ( &HandlePlayerCommandInput_Parms.FSCommand, &FSCommand, 0xC );
	HandlePlayerCommandInput_Parms.PC = PC;

	pFnHandlePlayerCommandInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandlePlayerCommandInput, &HandlePlayerCommandInput_Parms, NULL );

	pFnHandlePlayerCommandInput->FunctionFlags |= 0x400;

	return HandlePlayerCommandInput_Parms.ReturnValue;
};

// Function PlatformCommon.TgGameEngine.SendGameRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 fsRequest                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameEngine::SendGameRequest ( struct FString fsRequest )
{
	static UFunction* pFnSendGameRequest = NULL;

	if ( ! pFnSendGameRequest )
		pFnSendGameRequest = (UFunction*) UObject::GObjObjects()->Data[ 34042 ];

	UTgGameEngine_execSendGameRequest_Parms SendGameRequest_Parms;
	memcpy ( &SendGameRequest_Parms.fsRequest, &fsRequest, 0xC );

	pFnSendGameRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendGameRequest, &SendGameRequest_Parms, NULL );

	pFnSendGameRequest->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgGameEngine.SendCtrlRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 fsRequest                      ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameEngine::SendCtrlRequest ( struct FString fsRequest )
{
	static UFunction* pFnSendCtrlRequest = NULL;

	if ( ! pFnSendCtrlRequest )
		pFnSendCtrlRequest = (UFunction*) UObject::GObjObjects()->Data[ 34040 ];

	UTgGameEngine_execSendCtrlRequest_Parms SendCtrlRequest_Parms;
	memcpy ( &SendCtrlRequest_Parms.fsRequest, &fsRequest, 0xC );

	pFnSendCtrlRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendCtrlRequest, &SendCtrlRequest_Parms, NULL );

	pFnSendCtrlRequest->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgGameEngine.ClearMarshalEventDelegate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FScriptDelegate         MarshalEventDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameEngine::ClearMarshalEventDelegate ( struct FScriptDelegate MarshalEventDelegate )
{
	static UFunction* pFnClearMarshalEventDelegate = NULL;

	if ( ! pFnClearMarshalEventDelegate )
		pFnClearMarshalEventDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34038 ];

	UTgGameEngine_execClearMarshalEventDelegate_Parms ClearMarshalEventDelegate_Parms;
	memcpy ( &ClearMarshalEventDelegate_Parms.MarshalEventDelegate, &MarshalEventDelegate, 0xC );

	pFnClearMarshalEventDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearMarshalEventDelegate, &ClearMarshalEventDelegate_Parms, NULL );

	pFnClearMarshalEventDelegate->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgGameEngine.AddMarshalEventDelegate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FScriptDelegate         MarshalEventDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UTgGameEngine::AddMarshalEventDelegate ( struct FScriptDelegate MarshalEventDelegate )
{
	static UFunction* pFnAddMarshalEventDelegate = NULL;

	if ( ! pFnAddMarshalEventDelegate )
		pFnAddMarshalEventDelegate = (UFunction*) UObject::GObjObjects()->Data[ 34036 ];

	UTgGameEngine_execAddMarshalEventDelegate_Parms AddMarshalEventDelegate_Parms;
	memcpy ( &AddMarshalEventDelegate_Parms.MarshalEventDelegate, &MarshalEventDelegate, 0xC );

	pFnAddMarshalEventDelegate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddMarshalEventDelegate, &AddMarshalEventDelegate_Parms, NULL );

	pFnAddMarshalEventDelegate->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgGameEngine.OnMarshalEvent
// [0x00120000] 
// Parameters infos:
// struct FPointer                pMarEvent                      ( CPF_Parm )

void UTgGameEngine::OnMarshalEvent ( struct FPointer pMarEvent )
{
	static UFunction* pFnOnMarshalEvent = NULL;

	if ( ! pFnOnMarshalEvent )
		pFnOnMarshalEvent = (UFunction*) UObject::GObjObjects()->Data[ 33990 ];

	UTgGameEngine_execOnMarshalEvent_Parms OnMarshalEvent_Parms;
	memcpy ( &OnMarshalEvent_Parms.pMarEvent, &pMarEvent, 0x4 );

	this->ProcessEvent ( pFnOnMarshalEvent, &OnMarshalEvent_Parms, NULL );
};

// Function PlatformCommon.TgGameEngine.GetFieldString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// struct FString                 StrValue                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UTgGameEngine::GetFieldString ( int nToken, struct FString* StrValue )
{
	static UFunction* pFnGetFieldString = NULL;

	if ( ! pFnGetFieldString )
		pFnGetFieldString = (UFunction*) UObject::GObjObjects()->Data[ 34031 ];

	UTgGameEngine_execGetFieldString_Parms GetFieldString_Parms;
	GetFieldString_Parms.nToken = nToken;

	pFnGetFieldString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFieldString, &GetFieldString_Parms, NULL );

	pFnGetFieldString->FunctionFlags |= 0x400;

	if ( StrValue )
		memcpy ( StrValue, &GetFieldString_Parms.StrValue, 0xC );

	return GetFieldString_Parms.ReturnValue;
};

// Function PlatformCommon.TgGameEngine.GetFieldFloat
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// float                          FloatValue                     ( CPF_Parm | CPF_OutParm )

bool UTgGameEngine::GetFieldFloat ( int nToken, float* FloatValue )
{
	static UFunction* pFnGetFieldFloat = NULL;

	if ( ! pFnGetFieldFloat )
		pFnGetFieldFloat = (UFunction*) UObject::GObjObjects()->Data[ 34027 ];

	UTgGameEngine_execGetFieldFloat_Parms GetFieldFloat_Parms;
	GetFieldFloat_Parms.nToken = nToken;

	pFnGetFieldFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFieldFloat, &GetFieldFloat_Parms, NULL );

	pFnGetFieldFloat->FunctionFlags |= 0x400;

	if ( FloatValue )
		*FloatValue = GetFieldFloat_Parms.FloatValue;

	return GetFieldFloat_Parms.ReturnValue;
};

// Function PlatformCommon.TgGameEngine.GetFieldInt
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// int                            IntValue                       ( CPF_Parm | CPF_OutParm )

bool UTgGameEngine::GetFieldInt ( int nToken, int* IntValue )
{
	static UFunction* pFnGetFieldInt = NULL;

	if ( ! pFnGetFieldInt )
		pFnGetFieldInt = (UFunction*) UObject::GObjObjects()->Data[ 34023 ];

	UTgGameEngine_execGetFieldInt_Parms GetFieldInt_Parms;
	GetFieldInt_Parms.nToken = nToken;

	pFnGetFieldInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFieldInt, &GetFieldInt_Parms, NULL );

	pFnGetFieldInt->FunctionFlags |= 0x400;

	if ( IntValue )
		*IntValue = GetFieldInt_Parms.IntValue;

	return GetFieldInt_Parms.ReturnValue;
};

// Function PlatformCommon.TgGameEngine.SendMarshalAll
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bLowPriority                   ( CPF_Parm )

void UTgGameEngine::SendMarshalAll ( unsigned long bLowPriority )
{
	static UFunction* pFnSendMarshalAll = NULL;

	if ( ! pFnSendMarshalAll )
		pFnSendMarshalAll = (UFunction*) UObject::GObjObjects()->Data[ 34021 ];

	UTgGameEngine_execSendMarshalAll_Parms SendMarshalAll_Parms;
	SendMarshalAll_Parms.bLowPriority = bLowPriority;

	pFnSendMarshalAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMarshalAll, &SendMarshalAll_Parms, NULL );

	pFnSendMarshalAll->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgGameEngine.SendMarshal
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            qwPlayerId                     ( CPF_Parm )
// unsigned long                  bLowPriority                   ( CPF_Parm )

void UTgGameEngine::SendMarshal ( struct FUniqueNetId qwPlayerId, unsigned long bLowPriority )
{
	static UFunction* pFnSendMarshal = NULL;

	if ( ! pFnSendMarshal )
		pFnSendMarshal = (UFunction*) UObject::GObjObjects()->Data[ 34018 ];

	UTgGameEngine_execSendMarshal_Parms SendMarshal_Parms;
	memcpy ( &SendMarshal_Parms.qwPlayerId, &qwPlayerId, 0x8 );
	SendMarshal_Parms.bLowPriority = bLowPriority;

	pFnSendMarshal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSendMarshal, &SendMarshal_Parms, NULL );

	pFnSendMarshal->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgGameEngine.ClearMarshal
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UTgGameEngine::ClearMarshal ( )
{
	static UFunction* pFnClearMarshal = NULL;

	if ( ! pFnClearMarshal )
		pFnClearMarshal = (UFunction*) UObject::GObjObjects()->Data[ 34017 ];

	UTgGameEngine_execClearMarshal_Parms ClearMarshal_Parms;

	pFnClearMarshal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearMarshal, &ClearMarshal_Parms, NULL );

	pFnClearMarshal->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgGameEngine.SetFieldString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// struct FString                 StrValue                       ( CPF_Parm | CPF_NeedCtorLink )

bool UTgGameEngine::SetFieldString ( int nToken, struct FString StrValue )
{
	static UFunction* pFnSetFieldString = NULL;

	if ( ! pFnSetFieldString )
		pFnSetFieldString = (UFunction*) UObject::GObjObjects()->Data[ 34013 ];

	UTgGameEngine_execSetFieldString_Parms SetFieldString_Parms;
	SetFieldString_Parms.nToken = nToken;
	memcpy ( &SetFieldString_Parms.StrValue, &StrValue, 0xC );

	pFnSetFieldString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFieldString, &SetFieldString_Parms, NULL );

	pFnSetFieldString->FunctionFlags |= 0x400;

	return SetFieldString_Parms.ReturnValue;
};

// Function PlatformCommon.TgGameEngine.SetFieldFloat
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// float                          FloatValue                     ( CPF_Parm )

bool UTgGameEngine::SetFieldFloat ( int nToken, float FloatValue )
{
	static UFunction* pFnSetFieldFloat = NULL;

	if ( ! pFnSetFieldFloat )
		pFnSetFieldFloat = (UFunction*) UObject::GObjObjects()->Data[ 34009 ];

	UTgGameEngine_execSetFieldFloat_Parms SetFieldFloat_Parms;
	SetFieldFloat_Parms.nToken = nToken;
	SetFieldFloat_Parms.FloatValue = FloatValue;

	pFnSetFieldFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFieldFloat, &SetFieldFloat_Parms, NULL );

	pFnSetFieldFloat->FunctionFlags |= 0x400;

	return SetFieldFloat_Parms.ReturnValue;
};

// Function PlatformCommon.TgGameEngine.SetFieldInt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nToken                         ( CPF_Parm )
// int                            IntValue                       ( CPF_Parm )

bool UTgGameEngine::SetFieldInt ( int nToken, int IntValue )
{
	static UFunction* pFnSetFieldInt = NULL;

	if ( ! pFnSetFieldInt )
		pFnSetFieldInt = (UFunction*) UObject::GObjObjects()->Data[ 34005 ];

	UTgGameEngine_execSetFieldInt_Parms SetFieldInt_Parms;
	SetFieldInt_Parms.nToken = nToken;
	SetFieldInt_Parms.IntValue = IntValue;

	pFnSetFieldInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFieldInt, &SetFieldInt_Parms, NULL );

	pFnSetFieldInt->FunctionFlags |= 0x400;

	return SetFieldInt_Parms.ReturnValue;
};

// Function PlatformCommon.TgGameEngine.SetFunction
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nFunction                      ( CPF_Parm )

bool UTgGameEngine::SetFunction ( int nFunction )
{
	static UFunction* pFnSetFunction = NULL;

	if ( ! pFnSetFunction )
		pFnSetFunction = (UFunction*) UObject::GObjObjects()->Data[ 34002 ];

	UTgGameEngine_execSetFunction_Parms SetFunction_Parms;
	SetFunction_Parms.nFunction = nFunction;

	pFnSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFunction, &SetFunction_Parms, NULL );

	pFnSetFunction->FunctionFlags |= 0x400;

	return SetFunction_Parms.ReturnValue;
};

// Function PlatformCommon.TgSupportCommands.scPerfDebugRelevMode
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            Mode                           ( CPF_Parm )

void UTgSupportCommands::scPerfDebugRelevMode ( int Mode )
{
	static UFunction* pFnscPerfDebugRelevMode = NULL;

	if ( ! pFnscPerfDebugRelevMode )
		pFnscPerfDebugRelevMode = (UFunction*) UObject::GObjObjects()->Data[ 34159 ];

	UTgSupportCommands_execscPerfDebugRelevMode_Parms scPerfDebugRelevMode_Parms;
	scPerfDebugRelevMode_Parms.Mode = Mode;

	this->ProcessEvent ( pFnscPerfDebugRelevMode, &scPerfDebugRelevMode_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scPerfDebugSkip
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            skips                          ( CPF_Parm )

void UTgSupportCommands::scPerfDebugSkip ( int skips )
{
	static UFunction* pFnscPerfDebugSkip = NULL;

	if ( ! pFnscPerfDebugSkip )
		pFnscPerfDebugSkip = (UFunction*) UObject::GObjObjects()->Data[ 34157 ];

	UTgSupportCommands_execscPerfDebugSkip_Parms scPerfDebugSkip_Parms;
	scPerfDebugSkip_Parms.skips = skips;

	this->ProcessEvent ( pFnscPerfDebugSkip, &scPerfDebugSkip_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scPerfDebugFeet
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UTgSupportCommands::scPerfDebugFeet ( int feet )
{
	static UFunction* pFnscPerfDebugFeet = NULL;

	if ( ! pFnscPerfDebugFeet )
		pFnscPerfDebugFeet = (UFunction*) UObject::GObjObjects()->Data[ 34155 ];

	UTgSupportCommands_execscPerfDebugFeet_Parms scPerfDebugFeet_Parms;
	scPerfDebugFeet_Parms.feet = feet;

	this->ProcessEvent ( pFnscPerfDebugFeet, &scPerfDebugFeet_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scDemoStop
// [0x40020202] ( FUNC_Exec )
// Parameters infos:

void UTgSupportCommands::scDemoStop ( )
{
	static UFunction* pFnscDemoStop = NULL;

	if ( ! pFnscDemoStop )
		pFnscDemoStop = (UFunction*) UObject::GObjObjects()->Data[ 34154 ];

	UTgSupportCommands_execscDemoStop_Parms scDemoStop_Parms;

	this->ProcessEvent ( pFnscDemoStop, &scDemoStop_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scDemoRec
// [0x40020202] ( FUNC_Exec )
// Parameters infos:

void UTgSupportCommands::scDemoRec ( )
{
	static UFunction* pFnscDemoRec = NULL;

	if ( ! pFnscDemoRec )
		pFnscDemoRec = (UFunction*) UObject::GObjObjects()->Data[ 34153 ];

	UTgSupportCommands_execscDemoRec_Parms scDemoRec_Parms;

	this->ProcessEvent ( pFnscDemoRec, &scDemoRec_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scTimer
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgSupportCommands::scTimer ( struct FString sCommand )
{
	static UFunction* pFnscTimer = NULL;

	if ( ! pFnscTimer )
		pFnscTimer = (UFunction*) UObject::GObjObjects()->Data[ 34150 ];

	UTgSupportCommands_execscTimer_Parms scTimer_Parms;
	memcpy ( &scTimer_Parms.sCommand, &sCommand, 0xC );

	this->ProcessEvent ( pFnscTimer, &scTimer_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scTime
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// int                            nSeconds                       ( CPF_Parm )

void UTgSupportCommands::scTime ( int nSeconds )
{
	static UFunction* pFnscTime = NULL;

	if ( ! pFnscTime )
		pFnscTime = (UFunction*) UObject::GObjObjects()->Data[ 34147 ];

	UTgSupportCommands_execscTime_Parms scTime_Parms;
	scTime_Parms.nSeconds = nSeconds;

	this->ProcessEvent ( pFnscTime, &scTime_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scScore
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// int                            nTeam                          ( CPF_Parm )
// int                            nCount                         ( CPF_OptionalParm | CPF_Parm )

void UTgSupportCommands::scScore ( int nTeam, int nCount )
{
	static UFunction* pFnscScore = NULL;

	if ( ! pFnscScore )
		pFnscScore = (UFunction*) UObject::GObjObjects()->Data[ 34143 ];

	UTgSupportCommands_execscScore_Parms scScore_Parms;
	scScore_Parms.nTeam = nTeam;
	scScore_Parms.nCount = nCount;

	this->ProcessEvent ( pFnscScore, &scScore_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scEndGame
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgSupportCommands::scEndGame ( struct FString Reason )
{
	static UFunction* pFnscEndGame = NULL;

	if ( ! pFnscEndGame )
		pFnscEndGame = (UFunction*) UObject::GObjObjects()->Data[ 34140 ];

	UTgSupportCommands_execscEndGame_Parms scEndGame_Parms;
	memcpy ( &scEndGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnscEndGame, &scEndGame_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scStartGame
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Reason                         ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UTgSupportCommands::scStartGame ( struct FString Reason )
{
	static UFunction* pFnscStartGame = NULL;

	if ( ! pFnscStartGame )
		pFnscStartGame = (UFunction*) UObject::GObjObjects()->Data[ 34137 ];

	UTgSupportCommands_execscStartGame_Parms scStartGame_Parms;
	memcpy ( &scStartGame_Parms.Reason, &Reason, 0xC );

	this->ProcessEvent ( pFnscStartGame, &scStartGame_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scLogMark
// [0x40020202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 Comment                        ( CPF_Parm | CPF_NeedCtorLink )

void UTgSupportCommands::scLogMark ( struct FString Comment )
{
	static UFunction* pFnscLogMark = NULL;

	if ( ! pFnscLogMark )
		pFnscLogMark = (UFunction*) UObject::GObjObjects()->Data[ 34135 ];

	UTgSupportCommands_execscLogMark_Parms scLogMark_Parms;
	memcpy ( &scLogMark_Parms.Comment, &Comment, 0xC );

	this->ProcessEvent ( pFnscLogMark, &scLogMark_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.scLog
// [0x40024202] ( FUNC_Exec )
// Parameters infos:
// struct FString                 LogName                        ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bEnabled                       ( CPF_OptionalParm | CPF_Parm )

void UTgSupportCommands::scLog ( struct FString LogName, unsigned long bEnabled )
{
	static UFunction* pFnscLog = NULL;

	if ( ! pFnscLog )
		pFnscLog = (UFunction*) UObject::GObjObjects()->Data[ 34131 ];

	UTgSupportCommands_execscLog_Parms scLog_Parms;
	memcpy ( &scLog_Parms.LogName, &LogName, 0xC );
	scLog_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnscLog, &scLog_Parms, NULL );
};

// Function PlatformCommon.TgSupportCommands.GPerfDebugRelevMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Mode                           ( CPF_Parm )

void UTgSupportCommands::GPerfDebugRelevMode ( int Mode )
{
	static UFunction* pFnGPerfDebugRelevMode = NULL;

	if ( ! pFnGPerfDebugRelevMode )
		pFnGPerfDebugRelevMode = (UFunction*) UObject::GObjObjects()->Data[ 34129 ];

	UTgSupportCommands_execGPerfDebugRelevMode_Parms GPerfDebugRelevMode_Parms;
	GPerfDebugRelevMode_Parms.Mode = Mode;

	pFnGPerfDebugRelevMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugRelevMode, &GPerfDebugRelevMode_Parms, NULL );

	pFnGPerfDebugRelevMode->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgSupportCommands.GPerfDebugSkips
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            skips                          ( CPF_Parm )

void UTgSupportCommands::GPerfDebugSkips ( int skips )
{
	static UFunction* pFnGPerfDebugSkips = NULL;

	if ( ! pFnGPerfDebugSkips )
		pFnGPerfDebugSkips = (UFunction*) UObject::GObjObjects()->Data[ 34127 ];

	UTgSupportCommands_execGPerfDebugSkips_Parms GPerfDebugSkips_Parms;
	GPerfDebugSkips_Parms.skips = skips;

	pFnGPerfDebugSkips->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugSkips, &GPerfDebugSkips_Parms, NULL );

	pFnGPerfDebugSkips->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgSupportCommands.GPerfDebugFeet
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            feet                           ( CPF_Parm )

void UTgSupportCommands::GPerfDebugFeet ( int feet )
{
	static UFunction* pFnGPerfDebugFeet = NULL;

	if ( ! pFnGPerfDebugFeet )
		pFnGPerfDebugFeet = (UFunction*) UObject::GObjObjects()->Data[ 34125 ];

	UTgSupportCommands_execGPerfDebugFeet_Parms GPerfDebugFeet_Parms;
	GPerfDebugFeet_Parms.feet = feet;

	pFnGPerfDebugFeet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGPerfDebugFeet, &GPerfDebugFeet_Parms, NULL );

	pFnGPerfDebugFeet->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgSupportCommands.gmC
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgSupportCommands::gmC ( struct FString sCommand )
{
	static UFunction* pFngmC = NULL;

	if ( ! pFngmC )
		pFngmC = (UFunction*) UObject::GObjObjects()->Data[ 34123 ];

	UTgSupportCommands_execgmC_Parms gmC_Parms;
	memcpy ( &gmC_Parms.sCommand, &sCommand, 0xC );

	pFngmC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmC, &gmC_Parms, NULL );

	pFngmC->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgSupportCommands.gmCommand
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sCommand                       ( CPF_Parm | CPF_NeedCtorLink )

void UTgSupportCommands::gmCommand ( struct FString sCommand )
{
	static UFunction* pFngmCommand = NULL;

	if ( ! pFngmCommand )
		pFngmCommand = (UFunction*) UObject::GObjObjects()->Data[ 34121 ];

	UTgSupportCommands_execgmCommand_Parms gmCommand_Parms;
	memcpy ( &gmCommand_Parms.sCommand, &sCommand, 0xC );

	pFngmCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmCommand, &gmCommand_Parms, NULL );

	pFngmCommand->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgSupportCommands.gmMatchNext
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nMapId                         ( CPF_Parm )

void UTgSupportCommands::gmMatchNext ( int nMapId )
{
	static UFunction* pFngmMatchNext = NULL;

	if ( ! pFngmMatchNext )
		pFngmMatchNext = (UFunction*) UObject::GObjObjects()->Data[ 34119 ];

	UTgSupportCommands_execgmMatchNext_Parms gmMatchNext_Parms;
	gmMatchNext_Parms.nMapId = nMapId;

	pFngmMatchNext->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmMatchNext, &gmMatchNext_Parms, NULL );

	pFngmMatchNext->FunctionFlags |= 0x400;
};

// Function PlatformCommon.TgSupportCommands.gmMatchForce
// [0x00024600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// int                            nQueueId                       ( CPF_OptionalParm | CPF_Parm )

void UTgSupportCommands::gmMatchForce ( int nQueueId )
{
	static UFunction* pFngmMatchForce = NULL;

	if ( ! pFngmMatchForce )
		pFngmMatchForce = (UFunction*) UObject::GObjObjects()->Data[ 34117 ];

	UTgSupportCommands_execgmMatchForce_Parms gmMatchForce_Parms;
	gmMatchForce_Parms.nQueueId = nQueueId;

	pFngmMatchForce->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFngmMatchForce, &gmMatchForce_Parms, NULL );

	pFngmMatchForce->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif