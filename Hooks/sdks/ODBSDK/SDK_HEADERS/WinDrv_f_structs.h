/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function WinDrv.HttpRequestWindows.ProcessRequest
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execProcessRequest_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetHeader
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execSetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     HeaderValue;                                      		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetContentAsString
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execSetContentAsString_Parms
{
	struct FString                                     ContentString;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetContent
// [0x00420400] ( FUNC_Native )
struct UHttpRequestWindows_execSetContent_Parms
{
	TArray< unsigned char >                            ContentPayload;                                   		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetURL
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execSetURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.SetVerb
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execSetVerb_Parms
{
	struct FString                                     Verb;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.GetVerb
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetVerb_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetContent
// [0x00420400] ( FUNC_Native )
struct UHttpRequestWindows_execGetContent_Parms
{
	TArray< unsigned char >                            Content;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetURL
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetContentLength_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpRequestWindows.GetContentType
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetContentType_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetURLParameter_Parms
{
	struct FString                                     ParameterName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetHeaders_Parms
{
	TArray< struct FString >                           ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpRequestWindows.GetHeader
// [0x00020400] ( FUNC_Native )
struct UHttpRequestWindows_execGetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetResponseCode
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetResponseCode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpResponseWindows.GetContentAsString
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetContentAsString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetContent
// [0x00420400] ( FUNC_Native )
struct UHttpResponseWindows_execGetContent_Parms
{
	TArray< unsigned char >                            Content;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetURL
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetContentLength
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetContentLength_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WinDrv.HttpResponseWindows.GetContentType
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetContentType_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetURLParameter
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetURLParameter_Parms
{
	struct FString                                     ParameterName;                                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetHeaders
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetHeaders_Parms
{
	TArray< struct FString >                           ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function WinDrv.HttpResponseWindows.GetHeader
// [0x00020400] ( FUNC_Native )
struct UHttpResponseWindows_execGetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif