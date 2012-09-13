/*
#############################################################################################
# Bullet Run (Unknown) SDK
# ========================================================================================= #
# File: GFxUI_classes.h
# ========================================================================================= #
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
public:
};

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler : public UObject
{
public:
public:
};

// Class GFxUI.GFxInteraction
// 0x0004 (0x007C - 0x0078)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x0078 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
public:
};

// Class GFxUI.GFxMoviePlayer
// 0x0144 (0x0180 - 0x003C)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                           		// 0x003C (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    pCaptureKeys;                                     		// 0x0040 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    pFocusIgnoreKeys;                                 		// 0x0044 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0048 (0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x0084 (0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int                                                NextASUObject;                                    		// 0x00C0 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class USwfMovie*                                   MovieInfo;                                        		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bMovieIsOpen : 1;                                 		// 0x00C8 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnableGammaCorrection : 1;                       		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWidgetsInitializedThisFrame : 1;                 		// 0x00C8 (0x0004) [0x0000000000002002] [0x00000008] ( CPF_Const | CPF_Transient )
	unsigned long                                      bLogUnhandedWidgetInitializations : 1;            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAllowInput : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bAllowFocus : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bAutoPlay : 1;                                    		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPauseGameWhileActive : 1;                        		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bCloseOnLevelChange : 1;                          		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bOnlyOwnerFocusable : 1;                          		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bForceFullViewport : 1;                           		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bDiscardNonOwnerInput : 1;                        		// 0x00C8 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bCaptureInput : 1;                                		// 0x00C8 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bIgnoreMouseInput : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bIsSplitscreenLayoutModified : 1;                 		// 0x00C8 (0x0004) [0x0000000000002000] [0x00008000] ( CPF_Transient )
	unsigned long                                      bBlurLesserMovies : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bHideLesserMovies : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bIsPriorityBlurred : 1;                           		// 0x00C8 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bIsPriorityHidden : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bIgnoreVisibilityEffect : 1;                      		// 0x00C8 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bIgnoreBlurEffect : 1;                            		// 0x00C8 (0x0004) [0x0000000000000000] [0x00200000] 
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LocalPlayerOwnerIndex;                            		// 0x00D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     ExternalInterface;                                		// 0x00D4 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             CaptureKeys;                                      		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             FocusIgnoreKeys;                                  		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FExternalTexture >                  ExternalTextures;                                 		// 0x00F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSoundThemeBinding >                SoundThemes;                                      		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      TimingMode;                                       		// 0x0108 (0x0001) [0x0000000000000000]              
	unsigned char                                      RenderTextureMode;                                		// 0x0109 (0x0001) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x010A (0x0001) [0x0000000000000000]              
	TArray< struct FGFxWidgetBinding >                 WidgetBindings;                                   		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x3C ];                            		// 0x0118 (0x003C) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	TArray< class UGFxObject* >                        ObjectValues;                                     		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTGFxValue >                        Values;                                           		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  SplitscreenLayoutObject;                          		// 0x016C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SplitscreenLayoutYAdjust;                         		// 0x0170 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                        		// 0x0174 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
};

// Class GFxUI.GFxObject
// 0x0048 (0x0084 - 0x003C)
class UGFxObject : public UObject
{
public:
	int                                                Value[ 0xC ];                                     		// 0x003C (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FGFxWidgetBinding >                 SubWidgetBindings;                                		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTGFxScriptDelegate >               mCallbacks;                                       		// 0x0078 (0x000C) [0x0000000000001000]              ( CPF_Native )
public:
};

// Class GFxUI.GFxRawData
// 0x0030 (0x006C - 0x003C)
class UGFxRawData : public UObject
{
public:
	TArray< unsigned char >                            RawData;                                          		// 0x003C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FString >                           ReferencedSwfs;                                   		// 0x0048 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UObject* >                           References;                                       		// 0x0054 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UObject* >                           UserReferences;                                   		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
};

// Class GFxUI.SwfMovie
// 0x0040 (0x00AC - 0x006C)
class USwfMovie : public UGFxRawData
{
public:
	unsigned long                                      bUsesFontlib : 1;                                 		// 0x006C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseGFxExport : 1;                                		// 0x006C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSetSRGBOnImportedTextures : 1;                   		// 0x006C (0x0004) [0x0000000000020001] [0x00000004] ( CPF_Edit | CPF_EditConst )
	unsigned long                                      bPackTextures : 1;                                		// 0x006C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	struct FString                                     SourceFile;                                       		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PackTextureSize;                                  		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TextureRescale;                                   		// 0x0080 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     TextureFormat;                                    		// 0x0084 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     SourceFileTimestamp;                              		// 0x0090 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	int                                                RTTextures;                                       		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                RTVideoTextures;                                  		// 0x00A0 (0x0004) [0x0000000000000000]              
	struct FQWord                                      ImportTimeStamp;                                  		// 0x00A4 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
public:
};

// Class GFxUI.FlashMovie
// 0x0000 (0x00AC - 0x00AC)
class UFlashMovie : public USwfMovie
{
public:
public:
};

// Class GFxUI.GFxAction_CloseMovie
// 0x0008 (0x0104 - 0x00FC)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC (0x0004) [0x0000000000000000]              
	unsigned long                                      bUnload : 1;                                      		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
public:
};

// Class GFxUI.GFxAction_GetVariable
// 0x0010 (0x010C - 0x00FC)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FString                                     Variable;                                         		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
};

// Class GFxUI.GFxAction_Invoke
// 0x001C (0x0118 - 0x00FC)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FString                                     MethodName;                                       		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FASValue >                          Arguments;                                        		// 0x010C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
};

// Class GFxUI.GFxAction_OpenMovie
// 0x0030 (0x012C - 0x00FC)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      MoviePlayerClass;                                 		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UGFxMoviePlayer*                             MoviePlayer;                                      		// 0x0104 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTakeFocus : 1;                                   		// 0x0108 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x0108 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bStartPaused : 1;                                 		// 0x0108 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bEnableGammaCorrection : 1;                       		// 0x0108 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x0108 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x010C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             CaptureKeys;                                      		// 0x0114 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             FocusIgnoreKeys;                                  		// 0x0120 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
};

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0010 (0x010C - 0x00FC)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             CaptureKeys;                                      		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
};

// Class GFxUI.GFxAction_SetVariable
// 0x0010 (0x010C - 0x00FC)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x00FC (0x0004) [0x0000000000000000]              
	struct FString                                     Variable;                                         		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
public:
};

// Class GFxUI.GFxEvent_FSCommand
// 0x0014 (0x0128 - 0x0114)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                            		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     FSCommand;                                        		// 0x0118 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxFSCmdHandler_Kismet*                     Handler;                                          		// 0x0124 (0x0004) [0x0000000000000000]              
public:
};

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x003C - 0x003C)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:
public:
};

// Class GFxUI.GFxClikWidget
// 0x000C (0x0090 - 0x0084)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                        		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
public:
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif