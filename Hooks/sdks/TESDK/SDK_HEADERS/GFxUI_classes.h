/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_classes.h
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

// Enum GFxUI.GFxMovie.ASType
/*enum ASType
{
	AS_Undefined                                       = 0,
	AS_Null                                            = 1,
	AS_Number                                          = 2,
	AS_String                                          = 3,
	AS_Boolean                                         = 4,
	AS_MAX                                             = 5
};*/

// Enum GFxUI.GFxMovie.GFxTimingMode
/*enum GFxTimingMode
{
	TM_Game                                            = 0,
	TM_Real                                            = 1,
	TM_MAX                                             = 2
};*/

// Enum GFxUI.GFxMovie.GFxRenderTextureMode
/*enum GFxRenderTextureMode
{
	RTM_Opaque                                         = 0,
	RTM_Alpha                                          = 1,
	RTM_AlphaComposite                                 = 2,
	RTM_MAX                                            = 3
};*/

// Enum GFxUI.GFxAction_OpenMovie.EScreenStack
/*enum EScreenStack
{
	SS_Main                                            = 0,
	SS_Aux                                             = 1,
	SS_Aux01                                           = 2,
	SS_Debug                                           = 3,
	SS_Debug01                                         = 4,
	SS_MAX                                             = 5
};*/

// Enum GFxUI.PgDebugItemBase.PgDebugItemAction
/*enum PgDebugItemAction
{
	DIA_Nothing                                        = 0,
	DIA_ExecuteImmediately                             = 1,
	DIA_ExecuteAfterTransition                         = 2,
	DIA_MAX                                            = 3
};*/

// Enum GFxUI.PgGFxMovie.EHelpButton
/*enum EHelpButton
{
	EHELPBUTTON_Cross                                  = 0,
	EHELPBUTTON_Circle                                 = 1,
	EHELPBUTTON_Square                                 = 2,
	EHELPBUTTON_Triangle                               = 3,
	EHELPBUTTON_L1R1                                   = 4,
	EHELPBUTTON_MAX                                    = 5
};*/

// Enum GFxUI.PgMenuItemBase.PgMenuItemAction
/*enum PgMenuItemAction
{
	MIA_Nothing                                        = 0,
	MIA_ExecuteImmediately                             = 1,
	MIA_ExecuteAfterTransition                         = 2,
	MIA_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUI.GFxEngine
// 0x0010 (0x004C - 0x003C)
class UGFxEngine : public UObject
{
public:
	TArray< struct FGCReference >                      GCReferences;                                     		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                RefCount;                                         		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1373 ];

		return pClassPointer;
	};

};

UClass* UGFxEngine::pClassPointer = NULL;

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1374 ];

		return pClassPointer;
	};

	bool eventFSCommand ( class UGFxMovie* Movie, struct FString Cmd, struct FString Arg );
};

UClass* UGFxFSCmdHandler::pClassPointer = NULL;

// Class GFxUI.GFxGameViewportClient
// 0x0008 (0x0124 - 0x011C)
class UGFxGameViewportClient : public UGameViewportClient
{
public:
	class UClass*                                      GFxUIControllerClass;                             		// 0x011C (0x0004) [0x0000000000000000]              
	class UGFxInteraction*                             GFxUIController;                                  		// 0x0120 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1375 ];

		return pClassPointer;
	};

	bool eventInit ( struct FString* OutError );
};

UClass* UGFxGameViewportClient::pClassPointer = NULL;

// Class GFxUI.GFxInteraction
// 0x0004 (0x0070 - 0x006C)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x006C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1376 ];

		return pClassPointer;
	};

	void NotifyGameSessionEnded ( );
	class UGFxMovie* GetFocusMovie ( );
	bool SetFocusMovie ( struct FString movieName, unsigned long captureInput );
};

UClass* UGFxInteraction::pClassPointer = NULL;

// Class GFxUI.GFxMovie
// 0x005C (0x0098 - 0x003C)
class UGFxMovie : public UObject
{
public:
	class UGFxMovieInfo*                               MovieInfo;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APlayerController*                           PlayerOwner;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pMovie;                                           		// 0x0048 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    pCaptureKeys;                                     		// 0x004C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    pFocusIgnoreKeys;                                 		// 0x0050 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UGFxFSCmdHandler*                            FSCmdHandler;                                     		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     ExternalInterface;                                		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             CaptureKeys;                                      		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             FocusIgnoreKeys;                                  		// 0x0068 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FExternalTexture >                  ExternalTextures;                                 		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      TimingMode;                                       		// 0x0080 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x0081 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bGammaCorrection : 1;                             		// 0x0084 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FGFxDataStoreBinding >              DataStoreBindings;                                		// 0x0088 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxDataStoreSubscriber*                     DataStoreSubscriber;                              		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1377 ];

		return pClassPointer;
	};

	struct FString ActionScriptString ( struct FString Path );
	float ActionScriptFloat ( struct FString Path );
	int ActionScriptInt ( struct FString Path );
	void ActionScriptVoid ( struct FString Path );
	void SetExternalInterface ( class UObject* H );
	void SetFsCmdHandler ( class UGFxFSCmdHandler* H );
	bool SetVariableStringArray ( struct FString Path, int Index, TArray< struct FString > Arg );
	bool SetVariableFloatArray ( struct FString Path, int Index, TArray< float > Arg );
	bool SetVariableIntArray ( struct FString Path, int Index, TArray< int > Arg );
	bool SetVariableArray ( struct FString Path, int Index, TArray< struct FASValue > Arg );
	bool GetVariableStringArray ( struct FString Path, int Index, TArray< struct FString >* Arg );
	bool GetVariableFloatArray ( struct FString Path, int Index, TArray< float >* Arg );
	bool GetVariableIntArray ( struct FString Path, int Index, TArray< int >* Arg );
	bool GetVariableArray ( struct FString Path, int Index, TArray< struct FASValue >* Arg );
	void SetVariableString ( struct FString Path, struct FString S );
	void SetVariableNumber ( struct FString Path, float F );
	void SetVariableBool ( struct FString Path, unsigned long B );
	void SetVariable ( struct FString Path, struct FASValue Arg );
	struct FString GetVariableString ( struct FString Path );
	float GetVariableNumber ( struct FString Path );
	bool GetVariableBool ( struct FString Path );
	struct FASValue GetVariable ( struct FString Path );
	void PublishDataStoreValues ( );
	void RefreshDataStoreBindings ( );
	struct FASValue Invoke ( struct FString method, TArray< struct FASValue > args );
	void SetTimingMode ( unsigned char Mode );
	void Pause ( unsigned long pauseplay );
	void Advance ( float Time );
	bool SetExternalTexture ( struct FString Resource, class UTexture* Texture );
	void FlushPlayerInput ( unsigned long capturekeysonly );
	void ClearFocusIgnoreKeys ( );
	void AddFocusIgnoreKey ( struct FName Key );
	void ClearCaptureKeys ( );
	void AddCaptureKey ( struct FName Key );
	void SetFocus ( unsigned long captureInput, unsigned long Focus );
	void SetViewport ( int X, int Y, int Width, int Height );
	class UGameViewportClient* GetGameViewportClient ( );
	void SetMovieInfo ( class UGFxMovieInfo* Data );
	void eventOnClose ( );
	void Close ( unsigned long Unload );
	bool eventStart ( unsigned long StartPaused );
};

UClass* UGFxMovie::pClassPointer = NULL;

// Class GFxUI.PgGFxCinematic
// 0x0010 (0x00A8 - 0x0098)
class UPgGFxCinematic : public UGFxMovie
{
public:
	struct FString                                     mCommand;                                         		// 0x0098 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mIsSkippable : 1;                                 		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1378 ];

		return pClassPointer;
	};

};

UClass* UPgGFxCinematic::pClassPointer = NULL;

// Class GFxUI.PgGFxMovie
// 0x0024 (0x00BC - 0x0098)
class UPgGFxMovie : public UGFxMovie
{
public:
	struct FString                                     mTitle;                                           		// 0x0098 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mUseHelpComponent : 1;                            		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mClearRenderTexture : 1;                          		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< struct FHelpButton >                       mHelpButtons;                                     		// 0x00A8 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	class UAkEvent*                                    mAkEventToPlay;                                   		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mAkEventToStop;                                   		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1379 ];

		return pClassPointer;
	};

};

UClass* UPgGFxMovie::pClassPointer = NULL;

// Class GFxUI.GFxMovieInfo
// 0x0040 (0x007C - 0x003C)
class UGFxMovieInfo : public UObject
{
public:
	TArray< unsigned char >                            RawData;                                          		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UObject* >                           References;                                       		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UObject* >                           UserReferences;                                   		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUsesFontlib : 1;                                 		// 0x0060 (0x0004) [0x0000000000020001] [0x00000001] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bUseGFxExport : 1;                                		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FString                                     SourceFile;                                       		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     GFxExportCmdLine;                                 		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1380 ];

		return pClassPointer;
	};

};

UClass* UGFxMovieInfo::pClassPointer = NULL;

// Class GFxUI.GFxAction_CloseMovie
// 0x0008 (0x00F0 - 0x00E8)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUnload : 1;                                      		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1381 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_CloseMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_GetVariable
// 0x0010 (0x00F8 - 0x00E8)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Variable;                                         		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1382 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_GetVariable::pClassPointer = NULL;

// Class GFxUI.GFxAction_Invoke
// 0x001C (0x0104 - 0x00E8)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     MethodName;                                       		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FASValue >                          Arguments;                                        		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1383 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_Invoke::pClassPointer = NULL;

// Class GFxUI.GFxAction_OpenMovie
// 0x0009 (0x00F1 - 0x00E8)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTakeFocus : 1;                                   		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x00EC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bStartPaused : 1;                                 		// 0x00EC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      mStackId;                                         		// 0x00F0 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1384 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_OpenMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0010 (0x00F8 - 0x00E8)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             CaptureKeys;                                      		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1385 ];

		return pClassPointer;
	};

};

UClass* UGFxAction_SetCaptureKeys::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetFocus
// 0x0008 (0x00F0 - 0x00E8)
class UGFxAction_SetFocus : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1386 ];

		return pClassPointer;
	};

};

UClass* UGFxAction_SetFocus::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetVariable
// 0x0010 (0x00F8 - 0x00E8)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Variable;                                         		// 0x00EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1387 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_SetVariable::pClassPointer = NULL;

// Class GFxUI.GFxEvent_FsCommand
// 0x0010 (0x0110 - 0x0100)
class UGFxEvent_FsCommand : public USequenceEvent
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FSCommand;                                        		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1388 ];

		return pClassPointer;
	};

};

UClass* UGFxEvent_FsCommand::pClassPointer = NULL;

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x003C (0x0078 - 0x003C)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxFSCmdHandler_Kismet.Events

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1389 ];

		return pClassPointer;
	};

	bool eventFSCommand ( class UGFxMovie* Movie, struct FString Cmd, struct FString Arg );
};

UClass* UGFxFSCmdHandler_Kismet::pClassPointer = NULL;

// Class GFxUI.GFxDataStoreSubscriber
// 0x0008 (0x0044 - 0x003C)
class UGFxDataStoreSubscriber : public UObject
{
public:
	struct FPointer                                    VfTable_IUIDataStorePublisher;                    		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UGFxMovie*                                   Movie;                                            		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1390 ];

		return pClassPointer;
	};

	bool SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores );
	void ClearBoundDataStores ( );
	void GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores );
	void NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex );
	bool RefreshSubscriberValue ( int BindingIndex );
	struct FString GetDataStoreBinding ( int BindingIndex );
	void SetDataStoreBinding ( struct FString MarkupText, int BindingIndex );
	void PublishValues ( );
};

UClass* UGFxDataStoreSubscriber::pClassPointer = NULL;

// Class GFxUI.PgGFxDebugMenu
// 0x000C (0x00C8 - 0x00BC)
class UPgGFxDebugMenu : public UPgGFxMovie
{
public:
	TArray< class UPgDebugItemBase* >                  mItems;                                           		// 0x00BC (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1391 ];

		return pClassPointer;
	};

};

UClass* UPgGFxDebugMenu::pClassPointer = NULL;

// Class GFxUI.PgGFxMenu
// 0x0010 (0x00CC - 0x00BC)
class UPgGFxMenu : public UPgGFxMovie
{
public:
	unsigned long                                      mCloseOnExecSelection : 1;                        		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FMenuItem >                         mItems;                                           		// 0x00C0 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1392 ];

		return pClassPointer;
	};

};

UClass* UPgGFxMenu::pClassPointer = NULL;

// Class GFxUI.PgDebugItemBase
// 0x0008 (0x0044 - 0x003C)
class UPgDebugItemBase : public UObject
{
public:
	struct FName                                       m_id;                                             		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1393 ];

		return pClassPointer;
	};

};

UClass* UPgDebugItemBase::pClassPointer = NULL;

// Class GFxUI.PgDebugItem_Command
// 0x0018 (0x005C - 0x0044)
class UPgDebugItem_Command : public UPgDebugItemBase
{
public:
	struct FString                                     mLabel;                                           		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mCommand;                                         		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1394 ];

		return pClassPointer;
	};

};

UClass* UPgDebugItem_Command::pClassPointer = NULL;

// Class GFxUI.PgDebugItem_OpenMovie
// 0x0010 (0x0054 - 0x0044)
class UPgDebugItem_OpenMovie : public UPgDebugItemBase
{
public:
	struct FString                                     mLabel;                                           		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   mMovie;                                           		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1395 ];

		return pClassPointer;
	};

};

UClass* UPgDebugItem_OpenMovie::pClassPointer = NULL;

// Class GFxUI.PgDebugItem_Separator
// 0x0000 (0x0044 - 0x0044)
class UPgDebugItem_Separator : public UPgDebugItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1396 ];

		return pClassPointer;
	};

};

UClass* UPgDebugItem_Separator::pClassPointer = NULL;

// Class GFxUI.PgDebugItem_Slider
// 0x0024 (0x0068 - 0x0044)
class UPgDebugItem_Slider : public UPgDebugItemBase
{
public:
	struct FString                                     mLabel;                                           		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mCommand;                                         		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mMin;                                             		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMax;                                             		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mInitialValue;                                    		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1397 ];

		return pClassPointer;
	};

};

UClass* UPgDebugItem_Slider::pClassPointer = NULL;

// Class GFxUI.PgDebugItem_Stepper
// 0x0024 (0x0068 - 0x0044)
class UPgDebugItem_Stepper : public UPgDebugItemBase
{
public:
	struct FString                                     mLabel;                                           		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mCommand;                                         		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           mOptions;                                         		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1398 ];

		return pClassPointer;
	};

};

UClass* UPgDebugItem_Stepper::pClassPointer = NULL;

// Class GFxUI.PgGFxMenuCore
// 0x000C (0x00C8 - 0x00BC)
class UPgGFxMenuCore : public UPgGFxMovie
{
public:
	TArray< class UPgMenuItemBase* >                   mItems;                                           		// 0x00BC (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1399 ];

		return pClassPointer;
	};

};

UClass* UPgGFxMenuCore::pClassPointer = NULL;

// Class GFxUI.PgMenuItemBase
// 0x001C (0x0058 - 0x003C)
class UPgMenuItemBase : public UObject
{
public:
	struct FName                                       m_id;                                             		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_toolTip;                                        		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      m_action;                                         		// 0x0050 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UGFxMovie*                                   mParentMovie;                                     		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1400 ];

		return pClassPointer;
	};

};

UClass* UPgMenuItemBase::pClassPointer = NULL;

// Class GFxUI.PgMenuItem_Command
// 0x0018 (0x0070 - 0x0058)
class UPgMenuItem_Command : public UPgMenuItemBase
{
public:
	struct FString                                     mLabel;                                           		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mCommand;                                         		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1401 ];

		return pClassPointer;
	};

};

UClass* UPgMenuItem_Command::pClassPointer = NULL;

// Class GFxUI.PgMenuItem_OpenMovie
// 0x0010 (0x0068 - 0x0058)
class UPgMenuItem_OpenMovie : public UPgMenuItemBase
{
public:
	struct FString                                     mLabel;                                           		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   mMovie;                                           		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1402 ];

		return pClassPointer;
	};

};

UClass* UPgMenuItem_OpenMovie::pClassPointer = NULL;

// Class GFxUI.PgMenuItem_Separator
// 0x0000 (0x0058 - 0x0058)
class UPgMenuItem_Separator : public UPgMenuItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1403 ];

		return pClassPointer;
	};

};

UClass* UPgMenuItem_Separator::pClassPointer = NULL;

// Class GFxUI.PgMenuItem_Slider
// 0x0024 (0x007C - 0x0058)
class UPgMenuItem_Slider : public UPgMenuItemBase
{
public:
	struct FString                                     mLabel;                                           		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mCommand;                                         		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mMin;                                             		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMax;                                             		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mInitialValue;                                    		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1404 ];

		return pClassPointer;
	};

};

UClass* UPgMenuItem_Slider::pClassPointer = NULL;

// Class GFxUI.PgMenuItem_Stepper
// 0x0028 (0x0080 - 0x0058)
class UPgMenuItem_Stepper : public UPgMenuItemBase
{
public:
	struct FString                                     mLabel;                                           		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mCommand;                                         		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                mDefaultIndex;                                    		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           mOptions;                                         		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1405 ];

		return pClassPointer;
	};

};

UClass* UPgMenuItem_Stepper::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif