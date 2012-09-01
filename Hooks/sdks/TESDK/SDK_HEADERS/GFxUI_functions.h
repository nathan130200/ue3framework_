/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_functions.h
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

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxMovie*               Movie                          ( CPF_Parm )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxFSCmdHandler::eventFSCommand ( class UGFxMovie* Movie, struct FString Cmd, struct FString Arg )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = (UFunction*) UObject::GObjObjects()->Data[ 38955 ];

	UGFxFSCmdHandler_eventFSCommand_Parms FSCommand_Parms;
	FSCommand_Parms.Movie = Movie;
	memcpy ( &FSCommand_Parms.Cmd, &Cmd, 0xC );
	memcpy ( &FSCommand_Parms.Arg, &Arg, 0xC );

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );

	return FSCommand_Parms.ReturnValue;
};

// Function GFxUI.GFxGameViewportClient.Init
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 OutError                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxGameViewportClient::eventInit ( struct FString* OutError )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 38968 ];

	UGFxGameViewportClient_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	if ( OutError )
		memcpy ( OutError, &Init_Parms.OutError, 0xC );

	return Init_Parms.ReturnValue;
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 38979 ];

	UGFxInteraction_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	pFnNotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	pFnNotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxMovie*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGFxMovie* UGFxInteraction::GetFocusMovie ( )
{
	static UFunction* pFnGetFocusMovie = NULL;

	if ( ! pFnGetFocusMovie )
		pFnGetFocusMovie = (UFunction*) UObject::GObjObjects()->Data[ 38977 ];

	UGFxInteraction_execGetFocusMovie_Parms GetFocusMovie_Parms;

	pFnGetFocusMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFocusMovie, &GetFocusMovie_Parms, NULL );

	pFnGetFocusMovie->FunctionFlags |= 0x400;

	return GetFocusMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxInteraction.SetFocusMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 movieName                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  captureInput                   ( CPF_Parm )

bool UGFxInteraction::SetFocusMovie ( struct FString movieName, unsigned long captureInput )
{
	static UFunction* pFnSetFocusMovie = NULL;

	if ( ! pFnSetFocusMovie )
		pFnSetFocusMovie = (UFunction*) UObject::GObjObjects()->Data[ 38973 ];

	UGFxInteraction_execSetFocusMovie_Parms SetFocusMovie_Parms;
	memcpy ( &SetFocusMovie_Parms.movieName, &movieName, 0xC );
	SetFocusMovie_Parms.captureInput = captureInput;

	pFnSetFocusMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFocusMovie, &SetFocusMovie_Parms, NULL );

	pFnSetFocusMovie->FunctionFlags |= 0x400;

	return SetFocusMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxMovie::ActionScriptString ( struct FString Path )
{
	static UFunction* pFnActionScriptString = NULL;

	if ( ! pFnActionScriptString )
		pFnActionScriptString = (UFunction*) UObject::GObjObjects()->Data[ 38732 ];

	UGFxMovie_execActionScriptString_Parms ActionScriptString_Parms;
	memcpy ( &ActionScriptString_Parms.Path, &Path, 0xC );

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptString, &ActionScriptString_Parms, NULL );

	pFnActionScriptString->FunctionFlags |= 0x400;

	return ActionScriptString_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

float UGFxMovie::ActionScriptFloat ( struct FString Path )
{
	static UFunction* pFnActionScriptFloat = NULL;

	if ( ! pFnActionScriptFloat )
		pFnActionScriptFloat = (UFunction*) UObject::GObjObjects()->Data[ 38733 ];

	UGFxMovie_execActionScriptFloat_Parms ActionScriptFloat_Parms;
	memcpy ( &ActionScriptFloat_Parms.Path, &Path, 0xC );

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptFloat, &ActionScriptFloat_Parms, NULL );

	pFnActionScriptFloat->FunctionFlags |= 0x400;

	return ActionScriptFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

int UGFxMovie::ActionScriptInt ( struct FString Path )
{
	static UFunction* pFnActionScriptInt = NULL;

	if ( ! pFnActionScriptInt )
		pFnActionScriptInt = (UFunction*) UObject::GObjObjects()->Data[ 38736 ];

	UGFxMovie_execActionScriptInt_Parms ActionScriptInt_Parms;
	memcpy ( &ActionScriptInt_Parms.Path, &Path, 0xC );

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptInt, &ActionScriptInt_Parms, NULL );

	pFnActionScriptInt->FunctionFlags |= 0x400;

	return ActionScriptInt_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMovie::ActionScriptVoid ( struct FString Path )
{
	static UFunction* pFnActionScriptVoid = NULL;

	if ( ! pFnActionScriptVoid )
		pFnActionScriptVoid = (UFunction*) UObject::GObjObjects()->Data[ 38739 ];

	UGFxMovie_execActionScriptVoid_Parms ActionScriptVoid_Parms;
	memcpy ( &ActionScriptVoid_Parms.Path, &Path, 0xC );

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptVoid, &ActionScriptVoid_Parms, NULL );

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetExternalInterface
// [0x00020002] 
// Parameters infos:
// class UObject*                 H                              ( CPF_Parm )

void UGFxMovie::SetExternalInterface ( class UObject* H )
{
	static UFunction* pFnSetExternalInterface = NULL;

	if ( ! pFnSetExternalInterface )
		pFnSetExternalInterface = (UFunction*) UObject::GObjObjects()->Data[ 38742 ];

	UGFxMovie_execSetExternalInterface_Parms SetExternalInterface_Parms;
	SetExternalInterface_Parms.H = H;

	this->ProcessEvent ( pFnSetExternalInterface, &SetExternalInterface_Parms, NULL );
};

// Function GFxUI.GFxMovie.SetFsCmdHandler
// [0x00020002] 
// Parameters infos:
// class UGFxFSCmdHandler*        H                              ( CPF_Parm )

void UGFxMovie::SetFsCmdHandler ( class UGFxFSCmdHandler* H )
{
	static UFunction* pFnSetFsCmdHandler = NULL;

	if ( ! pFnSetFsCmdHandler )
		pFnSetFsCmdHandler = (UFunction*) UObject::GObjObjects()->Data[ 38744 ];

	UGFxMovie_execSetFsCmdHandler_Parms SetFsCmdHandler_Parms;
	SetFsCmdHandler_Parms.H = H;

	this->ProcessEvent ( pFnSetFsCmdHandler, &SetFsCmdHandler_Parms, NULL );
};

// Function GFxUI.GFxMovie.SetVariableStringArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FString >       Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::SetVariableStringArray ( struct FString Path, int Index, TArray< struct FString > Arg )
{
	static UFunction* pFnSetVariableStringArray = NULL;

	if ( ! pFnSetVariableStringArray )
		pFnSetVariableStringArray = (UFunction*) UObject::GObjObjects()->Data[ 38747 ];

	UGFxMovie_execSetVariableStringArray_Parms SetVariableStringArray_Parms;
	memcpy ( &SetVariableStringArray_Parms.Path, &Path, 0xC );
	SetVariableStringArray_Parms.Index = Index;
	memcpy ( &SetVariableStringArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableStringArray, &SetVariableStringArray_Parms, NULL );

	pFnSetVariableStringArray->FunctionFlags |= 0x400;

	return SetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetVariableFloatArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< float >                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::SetVariableFloatArray ( struct FString Path, int Index, TArray< float > Arg )
{
	static UFunction* pFnSetVariableFloatArray = NULL;

	if ( ! pFnSetVariableFloatArray )
		pFnSetVariableFloatArray = (UFunction*) UObject::GObjObjects()->Data[ 38750 ];

	UGFxMovie_execSetVariableFloatArray_Parms SetVariableFloatArray_Parms;
	memcpy ( &SetVariableFloatArray_Parms.Path, &Path, 0xC );
	SetVariableFloatArray_Parms.Index = Index;
	memcpy ( &SetVariableFloatArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableFloatArray, &SetVariableFloatArray_Parms, NULL );

	pFnSetVariableFloatArray->FunctionFlags |= 0x400;

	return SetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetVariableIntArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< int >                  Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::SetVariableIntArray ( struct FString Path, int Index, TArray< int > Arg )
{
	static UFunction* pFnSetVariableIntArray = NULL;

	if ( ! pFnSetVariableIntArray )
		pFnSetVariableIntArray = (UFunction*) UObject::GObjObjects()->Data[ 38756 ];

	UGFxMovie_execSetVariableIntArray_Parms SetVariableIntArray_Parms;
	memcpy ( &SetVariableIntArray_Parms.Path, &Path, 0xC );
	SetVariableIntArray_Parms.Index = Index;
	memcpy ( &SetVariableIntArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableIntArray, &SetVariableIntArray_Parms, NULL );

	pFnSetVariableIntArray->FunctionFlags |= 0x400;

	return SetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetVariableArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FASValue >      Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::SetVariableArray ( struct FString Path, int Index, TArray< struct FASValue > Arg )
{
	static UFunction* pFnSetVariableArray = NULL;

	if ( ! pFnSetVariableArray )
		pFnSetVariableArray = (UFunction*) UObject::GObjObjects()->Data[ 38762 ];

	UGFxMovie_execSetVariableArray_Parms SetVariableArray_Parms;
	memcpy ( &SetVariableArray_Parms.Path, &Path, 0xC );
	SetVariableArray_Parms.Index = Index;
	memcpy ( &SetVariableArray_Parms.Arg, &Arg, 0xC );

	pFnSetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableArray, &SetVariableArray_Parms, NULL );

	pFnSetVariableArray->FunctionFlags |= 0x400;

	return SetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableStringArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FString >       Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableStringArray ( struct FString Path, int Index, TArray< struct FString >* Arg )
{
	static UFunction* pFnGetVariableStringArray = NULL;

	if ( ! pFnGetVariableStringArray )
		pFnGetVariableStringArray = (UFunction*) UObject::GObjObjects()->Data[ 38768 ];

	UGFxMovie_execGetVariableStringArray_Parms GetVariableStringArray_Parms;
	memcpy ( &GetVariableStringArray_Parms.Path, &Path, 0xC );
	GetVariableStringArray_Parms.Index = Index;

	pFnGetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableStringArray, &GetVariableStringArray_Parms, NULL );

	pFnGetVariableStringArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableStringArray_Parms.Arg, 0xC );

	return GetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableFloatArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< float >                Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableFloatArray ( struct FString Path, int Index, TArray< float >* Arg )
{
	static UFunction* pFnGetVariableFloatArray = NULL;

	if ( ! pFnGetVariableFloatArray )
		pFnGetVariableFloatArray = (UFunction*) UObject::GObjObjects()->Data[ 38781 ];

	UGFxMovie_execGetVariableFloatArray_Parms GetVariableFloatArray_Parms;
	memcpy ( &GetVariableFloatArray_Parms.Path, &Path, 0xC );
	GetVariableFloatArray_Parms.Index = Index;

	pFnGetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableFloatArray, &GetVariableFloatArray_Parms, NULL );

	pFnGetVariableFloatArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableFloatArray_Parms.Arg, 0xC );

	return GetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableIntArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< int >                  Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableIntArray ( struct FString Path, int Index, TArray< int >* Arg )
{
	static UFunction* pFnGetVariableIntArray = NULL;

	if ( ! pFnGetVariableIntArray )
		pFnGetVariableIntArray = (UFunction*) UObject::GObjObjects()->Data[ 38787 ];

	UGFxMovie_execGetVariableIntArray_Parms GetVariableIntArray_Parms;
	memcpy ( &GetVariableIntArray_Parms.Path, &Path, 0xC );
	GetVariableIntArray_Parms.Index = Index;

	pFnGetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableIntArray, &GetVariableIntArray_Parms, NULL );

	pFnGetVariableIntArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableIntArray_Parms.Arg, 0xC );

	return GetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// TArray< struct FASValue >      Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableArray ( struct FString Path, int Index, TArray< struct FASValue >* Arg )
{
	static UFunction* pFnGetVariableArray = NULL;

	if ( ! pFnGetVariableArray )
		pFnGetVariableArray = (UFunction*) UObject::GObjObjects()->Data[ 38793 ];

	UGFxMovie_execGetVariableArray_Parms GetVariableArray_Parms;
	memcpy ( &GetVariableArray_Parms.Path, &Path, 0xC );
	GetVariableArray_Parms.Index = Index;

	pFnGetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableArray, &GetVariableArray_Parms, NULL );

	pFnGetVariableArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableArray_Parms.Arg, 0xC );

	return GetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMovie::SetVariableString ( struct FString Path, struct FString S )
{
	static UFunction* pFnSetVariableString = NULL;

	if ( ! pFnSetVariableString )
		pFnSetVariableString = (UFunction*) UObject::GObjObjects()->Data[ 38799 ];

	UGFxMovie_execSetVariableString_Parms SetVariableString_Parms;
	memcpy ( &SetVariableString_Parms.Path, &Path, 0xC );
	memcpy ( &SetVariableString_Parms.S, &S, 0xC );

	pFnSetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableString, &SetVariableString_Parms, NULL );

	pFnSetVariableString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxMovie::SetVariableNumber ( struct FString Path, float F )
{
	static UFunction* pFnSetVariableNumber = NULL;

	if ( ! pFnSetVariableNumber )
		pFnSetVariableNumber = (UFunction*) UObject::GObjObjects()->Data[ 38805 ];

	UGFxMovie_execSetVariableNumber_Parms SetVariableNumber_Parms;
	memcpy ( &SetVariableNumber_Parms.Path, &Path, 0xC );
	SetVariableNumber_Parms.F = F;

	pFnSetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableNumber, &SetVariableNumber_Parms, NULL );

	pFnSetVariableNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxMovie::SetVariableBool ( struct FString Path, unsigned long B )
{
	static UFunction* pFnSetVariableBool = NULL;

	if ( ! pFnSetVariableBool )
		pFnSetVariableBool = (UFunction*) UObject::GObjObjects()->Data[ 38808 ];

	UGFxMovie_execSetVariableBool_Parms SetVariableBool_Parms;
	memcpy ( &SetVariableBool_Parms.Path, &Path, 0xC );
	SetVariableBool_Parms.B = B;

	pFnSetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableBool, &SetVariableBool_Parms, NULL );

	pFnSetVariableBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMovie::SetVariable ( struct FString Path, struct FASValue Arg )
{
	static UFunction* pFnSetVariable = NULL;

	if ( ! pFnSetVariable )
		pFnSetVariable = (UFunction*) UObject::GObjObjects()->Data[ 38811 ];

	UGFxMovie_execSetVariable_Parms SetVariable_Parms;
	memcpy ( &SetVariable_Parms.Path, &Path, 0xC );
	memcpy ( &SetVariable_Parms.Arg, &Arg, 0x18 );

	pFnSetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariable, &SetVariable_Parms, NULL );

	pFnSetVariable->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.GetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxMovie::GetVariableString ( struct FString Path )
{
	static UFunction* pFnGetVariableString = NULL;

	if ( ! pFnGetVariableString )
		pFnGetVariableString = (UFunction*) UObject::GObjObjects()->Data[ 38814 ];

	UGFxMovie_execGetVariableString_Parms GetVariableString_Parms;
	memcpy ( &GetVariableString_Parms.Path, &Path, 0xC );

	pFnGetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableString, &GetVariableString_Parms, NULL );

	pFnGetVariableString->FunctionFlags |= 0x400;

	return GetVariableString_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

float UGFxMovie::GetVariableNumber ( struct FString Path )
{
	static UFunction* pFnGetVariableNumber = NULL;

	if ( ! pFnGetVariableNumber )
		pFnGetVariableNumber = (UFunction*) UObject::GObjObjects()->Data[ 38817 ];

	UGFxMovie_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy ( &GetVariableNumber_Parms.Path, &Path, 0xC );

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableNumber, &GetVariableNumber_Parms, NULL );

	pFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableBool ( struct FString Path )
{
	static UFunction* pFnGetVariableBool = NULL;

	if ( ! pFnGetVariableBool )
		pFnGetVariableBool = (UFunction*) UObject::GObjObjects()->Data[ 38820 ];

	UGFxMovie_execGetVariableBool_Parms GetVariableBool_Parms;
	memcpy ( &GetVariableBool_Parms.Path, &Path, 0xC );

	pFnGetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableBool, &GetVariableBool_Parms, NULL );

	pFnGetVariableBool->FunctionFlags |= 0x400;

	return GetVariableBool_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxMovie::GetVariable ( struct FString Path )
{
	static UFunction* pFnGetVariable = NULL;

	if ( ! pFnGetVariable )
		pFnGetVariable = (UFunction*) UObject::GObjObjects()->Data[ 38823 ];

	UGFxMovie_execGetVariable_Parms GetVariable_Parms;
	memcpy ( &GetVariable_Parms.Path, &Path, 0xC );

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariable, &GetVariable_Parms, NULL );

	pFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.PublishDataStoreValues
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMovie::PublishDataStoreValues ( )
{
	static UFunction* pFnPublishDataStoreValues = NULL;

	if ( ! pFnPublishDataStoreValues )
		pFnPublishDataStoreValues = (UFunction*) UObject::GObjObjects()->Data[ 38826 ];

	UGFxMovie_execPublishDataStoreValues_Parms PublishDataStoreValues_Parms;

	pFnPublishDataStoreValues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPublishDataStoreValues, &PublishDataStoreValues_Parms, NULL );

	pFnPublishDataStoreValues->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.RefreshDataStoreBindings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMovie::RefreshDataStoreBindings ( )
{
	static UFunction* pFnRefreshDataStoreBindings = NULL;

	if ( ! pFnRefreshDataStoreBindings )
		pFnRefreshDataStoreBindings = (UFunction*) UObject::GObjObjects()->Data[ 38829 ];

	UGFxMovie_execRefreshDataStoreBindings_Parms RefreshDataStoreBindings_Parms;

	pFnRefreshDataStoreBindings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshDataStoreBindings, &RefreshDataStoreBindings_Parms, NULL );

	pFnRefreshDataStoreBindings->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.Invoke
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FASValue >      args                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxMovie::Invoke ( struct FString method, TArray< struct FASValue > args )
{
	static UFunction* pFnInvoke = NULL;

	if ( ! pFnInvoke )
		pFnInvoke = (UFunction*) UObject::GObjObjects()->Data[ 38830 ];

	UGFxMovie_execInvoke_Parms Invoke_Parms;
	memcpy ( &Invoke_Parms.method, &method, 0xC );
	memcpy ( &Invoke_Parms.args, &args, 0xC );

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvoke, &Invoke_Parms, NULL );

	pFnInvoke->FunctionFlags |= 0x400;

	return Invoke_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetTimingMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  Mode                           ( CPF_Parm )

void UGFxMovie::SetTimingMode ( unsigned char Mode )
{
	static UFunction* pFnSetTimingMode = NULL;

	if ( ! pFnSetTimingMode )
		pFnSetTimingMode = (UFunction*) UObject::GObjObjects()->Data[ 38831 ];

	UGFxMovie_execSetTimingMode_Parms SetTimingMode_Parms;
	SetTimingMode_Parms.Mode = Mode;

	pFnSetTimingMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTimingMode, &SetTimingMode_Parms, NULL );

	pFnSetTimingMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.Pause
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  pauseplay                      ( CPF_OptionalParm | CPF_Parm )

void UGFxMovie::Pause ( unsigned long pauseplay )
{
	static UFunction* pFnPause = NULL;

	if ( ! pFnPause )
		pFnPause = (UFunction*) UObject::GObjObjects()->Data[ 38836 ];

	UGFxMovie_execPause_Parms Pause_Parms;
	Pause_Parms.pauseplay = pauseplay;

	pFnPause->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPause, &Pause_Parms, NULL );

	pFnPause->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.Advance
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          Time                           ( CPF_Parm )

void UGFxMovie::Advance ( float Time )
{
	static UFunction* pFnAdvance = NULL;

	if ( ! pFnAdvance )
		pFnAdvance = (UFunction*) UObject::GObjObjects()->Data[ 38840 ];

	UGFxMovie_execAdvance_Parms Advance_Parms;
	Advance_Parms.Time = Time;

	pFnAdvance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdvance, &Advance_Parms, NULL );

	pFnAdvance->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetExternalTexture
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Resource                       ( CPF_Parm | CPF_NeedCtorLink )
// class UTexture*                Texture                        ( CPF_Parm )

bool UGFxMovie::SetExternalTexture ( struct FString Resource, class UTexture* Texture )
{
	static UFunction* pFnSetExternalTexture = NULL;

	if ( ! pFnSetExternalTexture )
		pFnSetExternalTexture = (UFunction*) UObject::GObjObjects()->Data[ 38842 ];

	UGFxMovie_execSetExternalTexture_Parms SetExternalTexture_Parms;
	memcpy ( &SetExternalTexture_Parms.Resource, &Resource, 0xC );
	SetExternalTexture_Parms.Texture = Texture;

	pFnSetExternalTexture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetExternalTexture, &SetExternalTexture_Parms, NULL );

	pFnSetExternalTexture->FunctionFlags |= 0x400;

	return SetExternalTexture_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  capturekeysonly                ( CPF_Parm )

void UGFxMovie::FlushPlayerInput ( unsigned long capturekeysonly )
{
	static UFunction* pFnFlushPlayerInput = NULL;

	if ( ! pFnFlushPlayerInput )
		pFnFlushPlayerInput = (UFunction*) UObject::GObjObjects()->Data[ 38844 ];

	UGFxMovie_execFlushPlayerInput_Parms FlushPlayerInput_Parms;
	FlushPlayerInput_Parms.capturekeysonly = capturekeysonly;

	pFnFlushPlayerInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushPlayerInput, &FlushPlayerInput_Parms, NULL );

	pFnFlushPlayerInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMovie::ClearFocusIgnoreKeys ( )
{
	static UFunction* pFnClearFocusIgnoreKeys = NULL;

	if ( ! pFnClearFocusIgnoreKeys )
		pFnClearFocusIgnoreKeys = (UFunction*) UObject::GObjObjects()->Data[ 38848 ];

	UGFxMovie_execClearFocusIgnoreKeys_Parms ClearFocusIgnoreKeys_Parms;

	pFnClearFocusIgnoreKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Parms, NULL );

	pFnClearFocusIgnoreKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )

void UGFxMovie::AddFocusIgnoreKey ( struct FName Key )
{
	static UFunction* pFnAddFocusIgnoreKey = NULL;

	if ( ! pFnAddFocusIgnoreKey )
		pFnAddFocusIgnoreKey = (UFunction*) UObject::GObjObjects()->Data[ 38850 ];

	UGFxMovie_execAddFocusIgnoreKey_Parms AddFocusIgnoreKey_Parms;
	memcpy ( &AddFocusIgnoreKey_Parms.Key, &Key, 0x8 );

	pFnAddFocusIgnoreKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Parms, NULL );

	pFnAddFocusIgnoreKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMovie::ClearCaptureKeys ( )
{
	static UFunction* pFnClearCaptureKeys = NULL;

	if ( ! pFnClearCaptureKeys )
		pFnClearCaptureKeys = (UFunction*) UObject::GObjObjects()->Data[ 38851 ];

	UGFxMovie_execClearCaptureKeys_Parms ClearCaptureKeys_Parms;

	pFnClearCaptureKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearCaptureKeys, &ClearCaptureKeys_Parms, NULL );

	pFnClearCaptureKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )

void UGFxMovie::AddCaptureKey ( struct FName Key )
{
	static UFunction* pFnAddCaptureKey = NULL;

	if ( ! pFnAddCaptureKey )
		pFnAddCaptureKey = (UFunction*) UObject::GObjObjects()->Data[ 38853 ];

	UGFxMovie_execAddCaptureKey_Parms AddCaptureKey_Parms;
	memcpy ( &AddCaptureKey_Parms.Key, &Key, 0x8 );

	pFnAddCaptureKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddCaptureKey, &AddCaptureKey_Parms, NULL );

	pFnAddCaptureKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetFocus
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  captureInput                   ( CPF_Parm )
// unsigned long                  Focus                          ( CPF_OptionalParm | CPF_Parm )

void UGFxMovie::SetFocus ( unsigned long captureInput, unsigned long Focus )
{
	static UFunction* pFnSetFocus = NULL;

	if ( ! pFnSetFocus )
		pFnSetFocus = (UFunction*) UObject::GObjObjects()->Data[ 38854 ];

	UGFxMovie_execSetFocus_Parms SetFocus_Parms;
	SetFocus_Parms.captureInput = captureInput;
	SetFocus_Parms.Focus = Focus;

	pFnSetFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFocus, &SetFocus_Parms, NULL );

	pFnSetFocus->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            X                              ( CPF_Parm )
// int                            Y                              ( CPF_Parm )
// int                            Width                          ( CPF_Parm )
// int                            Height                         ( CPF_Parm )

void UGFxMovie::SetViewport ( int X, int Y, int Width, int Height )
{
	static UFunction* pFnSetViewport = NULL;

	if ( ! pFnSetViewport )
		pFnSetViewport = (UFunction*) UObject::GObjObjects()->Data[ 38856 ];

	UGFxMovie_execSetViewport_Parms SetViewport_Parms;
	SetViewport_Parms.X = X;
	SetViewport_Parms.Y = Y;
	SetViewport_Parms.Width = Width;
	SetViewport_Parms.Height = Height;

	pFnSetViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewport, &SetViewport_Parms, NULL );

	pFnSetViewport->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameViewportClient*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGameViewportClient* UGFxMovie::GetGameViewportClient ( )
{
	static UFunction* pFnGetGameViewportClient = NULL;

	if ( ! pFnGetGameViewportClient )
		pFnGetGameViewportClient = (UFunction*) UObject::GObjObjects()->Data[ 38859 ];

	UGFxMovie_execGetGameViewportClient_Parms GetGameViewportClient_Parms;

	pFnGetGameViewportClient->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameViewportClient, &GetGameViewportClient_Parms, NULL );

	pFnGetGameViewportClient->FunctionFlags |= 0x400;

	return GetGameViewportClient_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetMovieInfo
// [0x00020002] 
// Parameters infos:
// class UGFxMovieInfo*           Data                           ( CPF_Parm )

void UGFxMovie::SetMovieInfo ( class UGFxMovieInfo* Data )
{
	static UFunction* pFnSetMovieInfo = NULL;

	if ( ! pFnSetMovieInfo )
		pFnSetMovieInfo = (UFunction*) UObject::GObjObjects()->Data[ 38864 ];

	UGFxMovie_execSetMovieInfo_Parms SetMovieInfo_Parms;
	SetMovieInfo_Parms.Data = Data;

	this->ProcessEvent ( pFnSetMovieInfo, &SetMovieInfo_Parms, NULL );
};

// Function GFxUI.GFxMovie.OnClose
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMovie::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = (UFunction*) UObject::GObjObjects()->Data[ 38866 ];

	UGFxMovie_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function GFxUI.GFxMovie.Close
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  Unload                         ( CPF_OptionalParm | CPF_Parm )

void UGFxMovie::Close ( unsigned long Unload )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = (UFunction*) UObject::GObjObjects()->Data[ 38869 ];

	UGFxMovie_execClose_Parms Close_Parms;
	Close_Parms.Unload = Unload;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UGFxMovie::eventStart ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = (UFunction*) UObject::GObjObjects()->Data[ 38870 ];

	UGFxMovie_eventStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	pFnStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	pFnStart->FunctionFlags |= 0x400;

	return Start_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_CloseMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38726 ];

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_GetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38730 ];

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_Invoke::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38901 ];

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_OpenMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38909 ];

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_SetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38918 ];

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxMovie*               Movie                          ( CPF_Parm )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxFSCmdHandler_Kismet::eventFSCommand ( class UGFxMovie* Movie, struct FString Cmd, struct FString Arg )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = (UFunction*) UObject::GObjObjects()->Data[ 38961 ];

	UGFxFSCmdHandler_Kismet_eventFSCommand_Parms FSCommand_Parms;
	FSCommand_Parms.Movie = Movie;
	memcpy ( &FSCommand_Parms.Cmd, &Cmd, 0xC );
	memcpy ( &FSCommand_Parms.Arg, &Arg, 0xC );

	pFnFSCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );

	pFnFSCommand->FunctionFlags |= 0x400;

	return FSCommand_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxDataStoreSubscriber::SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 38942 ];

	UGFxDataStoreSubscriber_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0xC );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxDataStoreSubscriber::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 38941 ];

	UGFxDataStoreSubscriber_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGFxDataStoreSubscriber::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 38938 ];

	UGFxDataStoreSubscriber_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UGFxDataStoreSubscriber::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = (UFunction*) UObject::GObjObjects()->Data[ 38932 ];

	UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UGFxDataStoreSubscriber::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 38929 ];

	UGFxDataStoreSubscriber_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UGFxDataStoreSubscriber::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 38926 ];

	UGFxDataStoreSubscriber_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UGFxDataStoreSubscriber::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 38923 ];

	UGFxDataStoreSubscriber_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxDataStoreSubscriber.PublishValues
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxDataStoreSubscriber::PublishValues ( )
{
	static UFunction* pFnPublishValues = NULL;

	if ( ! pFnPublishValues )
		pFnPublishValues = (UFunction*) UObject::GObjObjects()->Data[ 38922 ];

	UGFxDataStoreSubscriber_execPublishValues_Parms PublishValues_Parms;

	pFnPublishValues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPublishValues, &PublishValues_Parms, NULL );

	pFnPublishValues->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif