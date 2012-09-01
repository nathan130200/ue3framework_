/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_f_structs.h
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

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
struct UGFxFSCmdHandler_eventFSCommand_Parms
{
	class UGFxMovie*                                   Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Cmd;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxGameViewportClient.Init
// [0x00420802] ( FUNC_Event )
struct UGFxGameViewportClient_eventInit_Parms
{
	struct FString                                     OutError;                                         		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             oldlen;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyGameSessionEnded_Parms
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execGetFocusMovie_Parms
{
	class UGFxMovie*                                   ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxInteraction.SetFocusMovie
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execSetFocusMovie_Parms
{
	struct FString                                     movieName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      captureInput : 1;                                 		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.ActionScriptString
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptString_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.ActionScriptFloat
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptFloat_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.ActionScriptInt
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptInt_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.ActionScriptVoid
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptVoid_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.SetExternalInterface
// [0x00020002] 
struct UGFxMovie_execSetExternalInterface_Parms
{
	class UObject*                                     H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetFsCmdHandler
// [0x00020002] 
struct UGFxMovie_execSetFsCmdHandler_Parms
{
	class UGFxFSCmdHandler*                            H;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetVariableStringArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableStringArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetVariableFloatArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableFloatArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< float >                                    Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetVariableIntArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableIntArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetVariableArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FASValue >                          Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableStringArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableStringArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FString >                           Arg;                                              		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableFloatArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableFloatArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< float >                                    Arg;                                              		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableIntArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableIntArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      Arg;                                              		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FASValue >                          Arg;                                              		// 0x0010 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetVariableString
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableString_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     S;                                                		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.SetVariableNumber
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableNumber_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetVariableBool
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableBool_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B : 1;                                            		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetVariable
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariable_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    Arg;                                              		// 0x000C (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.GetVariableString
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariableString_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.GetVariableNumber
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariableNumber_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableBool
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariableBool_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariable
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariable_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x000C (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.PublishDataStoreValues
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execPublishDataStoreValues_Parms
{
};

// Function GFxUI.GFxMovie.RefreshDataStoreBindings
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execRefreshDataStoreBindings_Parms
{
};

// Function GFxUI.GFxMovie.Invoke
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execInvoke_Parms
{
	struct FString                                     method;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< struct FASValue >                          args;                                             		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x0018 (0x0018) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.SetTimingMode
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetTimingMode_Parms
{
	unsigned char                                      Mode;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.Pause
// [0x00024400] ( FUNC_Native )
struct UGFxMovie_execPause_Parms
{
	unsigned long                                      pauseplay : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMovie.Advance
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execAdvance_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetExternalTexture
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetExternalTexture_Parms
{
	struct FString                                     Resource;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTexture*                                    Texture;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execFlushPlayerInput_Parms
{
	unsigned long                                      capturekeysonly : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GFxUI.GFxMovie.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execClearFocusIgnoreKeys_Parms
{
};

// Function GFxUI.GFxMovie.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execAddFocusIgnoreKey_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execClearCaptureKeys_Parms
{
};

// Function GFxUI.GFxMovie.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execAddCaptureKey_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetFocus
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetFocus_Parms
{
	unsigned long                                      captureInput : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      Focus : 1;                                        		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMovie.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetViewport_Parms
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Width;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Height;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execGetGameViewportClient_Parms
{
	class UGameViewportClient*                         ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetMovieInfo
// [0x00020002] 
struct UGFxMovie_execSetMovieInfo_Parms
{
	class UGFxMovieInfo*                               Data;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.OnClose
// [0x00020800] ( FUNC_Event )
struct UGFxMovie_eventOnClose_Parms
{
};

// Function GFxUI.GFxMovie.Close
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execClose_Parms
{
	unsigned long                                      Unload : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMovie.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UGFxMovie_eventStart_Parms
{
	unsigned long                                      StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGFxFSCmdHandler_Kismet_eventFSCommand_Parms
{
	class UGFxMovie*                                   Movie;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Cmd;                                              		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Arg;                                              		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
// [0x00424400] ( FUNC_Native )
struct UGFxDataStoreSubscriber_execSaveSubscriberValue_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execClearBoundDataStores_Parms
{
};

// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execGetBoundDataStores_Parms
{
	TArray< class UUIDataStore* >                      out_BoundDataStores;                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated : 1;                           		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxDataStoreSubscriber.PublishValues
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execPublishValues_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif