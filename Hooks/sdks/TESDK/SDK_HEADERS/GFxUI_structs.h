/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct GFxUI.GFxMovie.ASValue
// 0x0018
struct FASValue
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      B : 1;                                            		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              N;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     S;                                                		// 0x000C (0x000C) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct GFxUI.GFxMovie.GFxDataStoreBinding
// 0x0040
struct FGFxDataStoreBinding
{
	struct FUIDataStoreBinding                         DataSource;                                       		// 0x0000 (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     VarPath;                                          		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bEditable : 1;                                    		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxMovie.ExternalTexture
// 0x0010
struct FExternalTexture
{
	struct FString                                     Resource;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture*                                    Texture;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x0008
struct FGCReference
{
	class UObject*                                     m_object;                                         		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                m_count;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GFxUI.PgGFxMovie.HelpButton
// 0x001C
struct FHelpButton
{
	struct FString                                     mButton;                                          		// 0x0000 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     mLabel;                                           		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mEnabled : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct GFxUI.PgGFxMenu.MenuItem
// 0x0018
struct FMenuItem
{
	struct FString                                     mLabel;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mCommand;                                         		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif