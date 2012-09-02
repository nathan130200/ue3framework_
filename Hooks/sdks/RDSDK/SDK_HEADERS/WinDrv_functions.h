/*
#############################################################################################
# Ravaged Beta (Beta) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_functions.h
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

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UHttpRequestWindows::ProcessRequest ( )
{
	static UFunction* pFnProcessRequest = NULL;

	if ( ! pFnProcessRequest )
		pFnProcessRequest = (UFunction*) UObject::GObjObjects()->Data[ 36477 ];

	UHttpRequestWindows_execProcessRequest_Parms ProcessRequest_Parms;

	pFnProcessRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessRequest, &ProcessRequest_Parms, NULL );

	pFnProcessRequest->FunctionFlags |= 0x400;

	return ProcessRequest_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 HeaderValue                    ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetHeader ( struct FString HeaderName, struct FString HeaderValue )
{
	static UFunction* pFnSetHeader = NULL;

	if ( ! pFnSetHeader )
		pFnSetHeader = (UFunction*) UObject::GObjObjects()->Data[ 36473 ];

	UHttpRequestWindows_execSetHeader_Parms SetHeader_Parms;
	memcpy ( &SetHeader_Parms.HeaderName, &HeaderName, 0xC );
	memcpy ( &SetHeader_Parms.HeaderValue, &HeaderValue, 0xC );

	pFnSetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHeader, &SetHeader_Parms, NULL );

	pFnSetHeader->FunctionFlags |= 0x400;

	return SetHeader_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ContentString                  ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetContentAsString ( struct FString ContentString )
{
	static UFunction* pFnSetContentAsString = NULL;

	if ( ! pFnSetContentAsString )
		pFnSetContentAsString = (UFunction*) UObject::GObjObjects()->Data[ 36470 ];

	UHttpRequestWindows_execSetContentAsString_Parms SetContentAsString_Parms;
	memcpy ( &SetContentAsString_Parms.ContentString, &ContentString, 0xC );

	pFnSetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContentAsString, &SetContentAsString_Parms, NULL );

	pFnSetContentAsString->FunctionFlags |= 0x400;

	return SetContentAsString_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< unsigned char >        ContentPayload                 ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetContent ( TArray< unsigned char >* ContentPayload )
{
	static UFunction* pFnSetContent = NULL;

	if ( ! pFnSetContent )
		pFnSetContent = (UFunction*) UObject::GObjObjects()->Data[ 36466 ];

	UHttpRequestWindows_execSetContent_Parms SetContent_Parms;

	pFnSetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContent, &SetContent_Parms, NULL );

	pFnSetContent->FunctionFlags |= 0x400;

	if ( ContentPayload )
		memcpy ( ContentPayload, &SetContent_Parms.ContentPayload, 0xC );

	return SetContent_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetURL ( struct FString URL )
{
	static UFunction* pFnSetURL = NULL;

	if ( ! pFnSetURL )
		pFnSetURL = (UFunction*) UObject::GObjObjects()->Data[ 36463 ];

	UHttpRequestWindows_execSetURL_Parms SetURL_Parms;
	memcpy ( &SetURL_Parms.URL, &URL, 0xC );

	pFnSetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetURL, &SetURL_Parms, NULL );

	pFnSetURL->FunctionFlags |= 0x400;

	return SetURL_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UHttpRequestInterface*   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Verb                           ( CPF_Parm | CPF_NeedCtorLink )

class UHttpRequestInterface* UHttpRequestWindows::SetVerb ( struct FString Verb )
{
	static UFunction* pFnSetVerb = NULL;

	if ( ! pFnSetVerb )
		pFnSetVerb = (UFunction*) UObject::GObjObjects()->Data[ 36460 ];

	UHttpRequestWindows_execSetVerb_Parms SetVerb_Parms;
	memcpy ( &SetVerb_Parms.Verb, &Verb, 0xC );

	pFnSetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVerb, &SetVerb_Parms, NULL );

	pFnSetVerb->FunctionFlags |= 0x400;

	return SetVerb_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetVerb ( )
{
	static UFunction* pFnGetVerb = NULL;

	if ( ! pFnGetVerb )
		pFnGetVerb = (UFunction*) UObject::GObjObjects()->Data[ 36458 ];

	UHttpRequestWindows_execGetVerb_Parms GetVerb_Parms;

	pFnGetVerb->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVerb, &GetVerb_Parms, NULL );

	pFnGetVerb->FunctionFlags |= 0x400;

	return GetVerb_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Content                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UHttpRequestWindows::GetContent ( TArray< unsigned char >* Content )
{
	static UFunction* pFnGetContent = NULL;

	if ( ! pFnGetContent )
		pFnGetContent = (UFunction*) UObject::GObjObjects()->Data[ 36455 ];

	UHttpRequestWindows_execGetContent_Parms GetContent_Parms;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContent, &GetContent_Parms, NULL );

	pFnGetContent->FunctionFlags |= 0x400;

	if ( Content )
		memcpy ( Content, &GetContent_Parms.Content, 0xC );
};

// Function WinDrv.HttpRequestWindows.GetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetURL ( )
{
	static UFunction* pFnGetURL = NULL;

	if ( ! pFnGetURL )
		pFnGetURL = (UFunction*) UObject::GObjObjects()->Data[ 36453 ];

	UHttpRequestWindows_execGetURL_Parms GetURL_Parms;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURL, &GetURL_Parms, NULL );

	pFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHttpRequestWindows::GetContentLength ( )
{
	static UFunction* pFnGetContentLength = NULL;

	if ( ! pFnGetContentLength )
		pFnGetContentLength = (UFunction*) UObject::GObjObjects()->Data[ 36451 ];

	UHttpRequestWindows_execGetContentLength_Parms GetContentLength_Parms;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentLength, &GetContentLength_Parms, NULL );

	pFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetContentType ( )
{
	static UFunction* pFnGetContentType = NULL;

	if ( ! pFnGetContentType )
		pFnGetContentType = (UFunction*) UObject::GObjObjects()->Data[ 36449 ];

	UHttpRequestWindows_execGetContentType_Parms GetContentType_Parms;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentType, &GetContentType_Parms, NULL );

	pFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ParameterName                  ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetURLParameter ( struct FString ParameterName )
{
	static UFunction* pFnGetURLParameter = NULL;

	if ( ! pFnGetURLParameter )
		pFnGetURLParameter = (UFunction*) UObject::GObjObjects()->Data[ 36446 ];

	UHttpRequestWindows_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy ( &GetURLParameter_Parms.ParameterName, &ParameterName, 0xC );

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURLParameter, &GetURLParameter_Parms, NULL );

	pFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FString > UHttpRequestWindows::GetHeaders ( )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 36443 ];

	UHttpRequestWindows_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Parms.ReturnValue;
};

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpRequestWindows::GetHeader ( struct FString HeaderName )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 36440 ];

	UHttpRequestWindows_execGetHeader_Parms GetHeader_Parms;
	memcpy ( &GetHeader_Parms.HeaderName, &HeaderName, 0xC );

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHttpResponseWindows::GetResponseCode ( )
{
	static UFunction* pFnGetResponseCode = NULL;

	if ( ! pFnGetResponseCode )
		pFnGetResponseCode = (UFunction*) UObject::GObjObjects()->Data[ 36502 ];

	UHttpResponseWindows_execGetResponseCode_Parms GetResponseCode_Parms;

	pFnGetResponseCode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetResponseCode, &GetResponseCode_Parms, NULL );

	pFnGetResponseCode->FunctionFlags |= 0x400;

	return GetResponseCode_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetContentAsString ( )
{
	static UFunction* pFnGetContentAsString = NULL;

	if ( ! pFnGetContentAsString )
		pFnGetContentAsString = (UFunction*) UObject::GObjObjects()->Data[ 36500 ];

	UHttpResponseWindows_execGetContentAsString_Parms GetContentAsString_Parms;

	pFnGetContentAsString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentAsString, &GetContentAsString_Parms, NULL );

	pFnGetContentAsString->FunctionFlags |= 0x400;

	return GetContentAsString_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContent
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Content                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UHttpResponseWindows::GetContent ( TArray< unsigned char >* Content )
{
	static UFunction* pFnGetContent = NULL;

	if ( ! pFnGetContent )
		pFnGetContent = (UFunction*) UObject::GObjObjects()->Data[ 36497 ];

	UHttpResponseWindows_execGetContent_Parms GetContent_Parms;

	pFnGetContent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContent, &GetContent_Parms, NULL );

	pFnGetContent->FunctionFlags |= 0x400;

	if ( Content )
		memcpy ( Content, &GetContent_Parms.Content, 0xC );
};

// Function WinDrv.HttpResponseWindows.GetURL
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetURL ( )
{
	static UFunction* pFnGetURL = NULL;

	if ( ! pFnGetURL )
		pFnGetURL = (UFunction*) UObject::GObjObjects()->Data[ 36495 ];

	UHttpResponseWindows_execGetURL_Parms GetURL_Parms;

	pFnGetURL->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURL, &GetURL_Parms, NULL );

	pFnGetURL->FunctionFlags |= 0x400;

	return GetURL_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UHttpResponseWindows::GetContentLength ( )
{
	static UFunction* pFnGetContentLength = NULL;

	if ( ! pFnGetContentLength )
		pFnGetContentLength = (UFunction*) UObject::GObjObjects()->Data[ 36493 ];

	UHttpResponseWindows_execGetContentLength_Parms GetContentLength_Parms;

	pFnGetContentLength->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentLength, &GetContentLength_Parms, NULL );

	pFnGetContentLength->FunctionFlags |= 0x400;

	return GetContentLength_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetContentType ( )
{
	static UFunction* pFnGetContentType = NULL;

	if ( ! pFnGetContentType )
		pFnGetContentType = (UFunction*) UObject::GObjObjects()->Data[ 36491 ];

	UHttpResponseWindows_execGetContentType_Parms GetContentType_Parms;

	pFnGetContentType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetContentType, &GetContentType_Parms, NULL );

	pFnGetContentType->FunctionFlags |= 0x400;

	return GetContentType_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 ParameterName                  ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetURLParameter ( struct FString ParameterName )
{
	static UFunction* pFnGetURLParameter = NULL;

	if ( ! pFnGetURLParameter )
		pFnGetURLParameter = (UFunction*) UObject::GObjObjects()->Data[ 36488 ];

	UHttpResponseWindows_execGetURLParameter_Parms GetURLParameter_Parms;
	memcpy ( &GetURLParameter_Parms.ParameterName, &ParameterName, 0xC );

	pFnGetURLParameter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetURLParameter, &GetURLParameter_Parms, NULL );

	pFnGetURLParameter->FunctionFlags |= 0x400;

	return GetURLParameter_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< struct FString > UHttpResponseWindows::GetHeaders ( )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 36485 ];

	UHttpResponseWindows_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeaders, &GetHeaders_Parms, NULL );

	pFnGetHeaders->FunctionFlags |= 0x400;

	return GetHeaders_Parms.ReturnValue;
};

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )

struct FString UHttpResponseWindows::GetHeader ( struct FString HeaderName )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 36482 ];

	UHttpResponseWindows_execGetHeader_Parms GetHeader_Parms;
	memcpy ( &GetHeader_Parms.HeaderName, &HeaderName, 0xC );

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetHeader, &GetHeader_Parms, NULL );

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif