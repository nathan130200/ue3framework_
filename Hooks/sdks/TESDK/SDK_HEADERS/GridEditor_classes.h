/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GridEditor_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GridEditor.BuildPathsCommandlet
// 0x0000 (0x007C - 0x007C)
class UBuildPathsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2338 ];

		return pClassPointer;
	};

};

UClass* UBuildPathsCommandlet::pClassPointer = NULL;

// Class GridEditor.CheckpointsCommandlet
// 0x0000 (0x007C - 0x007C)
class UCheckpointsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2339 ];

		return pClassPointer;
	};

};

UClass* UCheckpointsCommandlet::pClassPointer = NULL;

// Class GridEditor.GenerateAudioCommandlet
// 0x0000 (0x007C - 0x007C)
class UGenerateAudioCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2340 ];

		return pClassPointer;
	};

};

UClass* UGenerateAudioCommandlet::pClassPointer = NULL;

// Class GridEditor.HiddenLightingCommandlet
// 0x0000 (0x007C - 0x007C)
class UHiddenLightingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2341 ];

		return pClassPointer;
	};

};

UClass* UHiddenLightingCommandlet::pClassPointer = NULL;

// Class GridEditor.ImportMeshAndTextureCommandlet
// 0x0000 (0x007C - 0x007C)
class UImportMeshAndTextureCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2342 ];

		return pClassPointer;
	};

};

UClass* UImportMeshAndTextureCommandlet::pClassPointer = NULL;

// Class GridEditor.InterpTrackCollisionHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackCollisionHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2343 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackCollisionHelper::pClassPointer = NULL;

// Class GridEditor.MapDependenciesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMapDependenciesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2344 ];

		return pClassPointer;
	};

};

UClass* UMapDependenciesCommandlet::pClassPointer = NULL;

// Class GridEditor.PgAnimationsCommandlet
// 0x0000 (0x007C - 0x007C)
class UPgAnimationsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2345 ];

		return pClassPointer;
	};

};

UClass* UPgAnimationsCommandlet::pClassPointer = NULL;

// Class GridEditor.PgAnimNodeEditInfo_AnimNodeSequence
// 0x0000 (0x0040 - 0x0040)
class UPgAnimNodeEditInfo_AnimNodeSequence : public UAnimNodeEditInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2346 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeEditInfo_AnimNodeSequence::pClassPointer = NULL;

// Class GridEditor.PgAnimNodeEditInfo_ComboAction
// 0x0004 (0x0044 - 0x0040)
class UPgAnimNodeEditInfo_ComboAction : public UAnimNodeEditInfo
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0040 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2347 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeEditInfo_ComboAction::pClassPointer = NULL;

// Class GridEditor.PgAnimTreeLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPgAnimTreeLabelRenderer : public UAnimTreeLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2348 ];

		return pClassPointer;
	};

};

UClass* UPgAnimTreeLabelRenderer::pClassPointer = NULL;

// Class GridEditor.PgArrayItemDrawDesc_CustomDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPgArrayItemDrawDesc_CustomDrawProxy : public UPropertyDrawProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2349 ];

		return pClassPointer;
	};

};

UClass* UPgArrayItemDrawDesc_CustomDrawProxy::pClassPointer = NULL;

// Class GridEditor.PgCinematicLevelExporterSTL
// 0x0000 (0x0064 - 0x0064)
class UPgCinematicLevelExporterSTL : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2350 ];

		return pClassPointer;
	};

};

UClass* UPgCinematicLevelExporterSTL::pClassPointer = NULL;

// Class GridEditor.PgCreateXenonTextureMipsCommandlet
// 0x0000 (0x007C - 0x007C)
class UPgCreateXenonTextureMipsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2351 ];

		return pClassPointer;
	};

};

UClass* UPgCreateXenonTextureMipsCommandlet::pClassPointer = NULL;

// Class GridEditor.PgListBlockingLevelLoadsCommandlet
// 0x000C (0x0088 - 0x007C)
class UPgListBlockingLevelLoadsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x007C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2352 ];

		return pClassPointer;
	};

};

UClass* UPgListBlockingLevelLoadsCommandlet::pClassPointer = NULL;

// Class GridEditor.PgNameList_CustomInputProxy
// 0x0000 (0x0054 - 0x0054)
class UPgNameList_CustomInputProxy : public UPropertyInputCombo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2353 ];

		return pClassPointer;
	};

};

UClass* UPgNameList_CustomInputProxy::pClassPointer = NULL;

// Class GridEditor.PgAnimNodeSequence_CustomInputProxy
// 0x0000 (0x0054 - 0x0054)
class UPgAnimNodeSequence_CustomInputProxy : public UPgNameList_CustomInputProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2354 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeSequence_CustomInputProxy::pClassPointer = NULL;

// Class GridEditor.PgSpecialMoveActionPlayAnim_CustomInputProxy
// 0x0000 (0x0054 - 0x0054)
class UPgSpecialMoveActionPlayAnim_CustomInputProxy : public UPgNameList_CustomInputProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2355 ];

		return pClassPointer;
	};

};

UClass* UPgSpecialMoveActionPlayAnim_CustomInputProxy::pClassPointer = NULL;

// Class GridEditor.PgPropertyEditOverride
// 0x000C (0x0048 - 0x003C)
class UPgPropertyEditOverride : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2356 ];

		return pClassPointer;
	};

};

UClass* UPgPropertyEditOverride::pClassPointer = NULL;

// Class GridEditor.PgSpecialMoveFactory
// 0x0000 (0x0070 - 0x0070)
class UPgSpecialMoveFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2357 ];

		return pClassPointer;
	};

};

UClass* UPgSpecialMoveFactory::pClassPointer = NULL;

// Class GridEditor.PgVerifyPackageCommandlet
// 0x0000 (0x007C - 0x007C)
class UPgVerifyPackageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2358 ];

		return pClassPointer;
	};

};

UClass* UPgVerifyPackageCommandlet::pClassPointer = NULL;

// Class GridEditor.UIAssetCommandlet
// 0x0000 (0x007C - 0x007C)
class UUIAssetCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2359 ];

		return pClassPointer;
	};

};

UClass* UUIAssetCommandlet::pClassPointer = NULL;

// Class GridEditor.UIContainerThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UUIContainerThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2360 ];

		return pClassPointer;
	};

};

UClass* UUIContainerThumbnailRenderer::pClassPointer = NULL;

// Class GridEditor.PgGenericBrowserType_AIPlannerAsset
// 0x0000 (0x0058 - 0x0058)
class UPgGenericBrowserType_AIPlannerAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2361 ];

		return pClassPointer;
	};

};

UClass* UPgGenericBrowserType_AIPlannerAsset::pClassPointer = NULL;

// Class GridEditor.PgGenericBrowserType_Archetype
// 0x000C (0x0064 - 0x0058)
class UPgGenericBrowserType_Archetype : public UGenericBrowserType
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0058 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2362 ];

		return pClassPointer;
	};

};

UClass* UPgGenericBrowserType_Archetype::pClassPointer = NULL;

// Class GridEditor.PgGenericBrowserType_CustomControllableObject
// 0x000C (0x0064 - 0x0058)
class UPgGenericBrowserType_CustomControllableObject : public UGenericBrowserType
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0058 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2363 ];

		return pClassPointer;
	};

};

UClass* UPgGenericBrowserType_CustomControllableObject::pClassPointer = NULL;

// Class GridEditor.PgGenericBrowserType_PlugInList
// 0x0000 (0x0058 - 0x0058)
class UPgGenericBrowserType_PlugInList : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2364 ];

		return pClassPointer;
	};

};

UClass* UPgGenericBrowserType_PlugInList::pClassPointer = NULL;

// Class GridEditor.PgGenericBrowserType_SpecialMove
// 0x0000 (0x0058 - 0x0058)
class UPgGenericBrowserType_SpecialMove : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2365 ];

		return pClassPointer;
	};

};

UClass* UPgGenericBrowserType_SpecialMove::pClassPointer = NULL;

// Class GridEditor.PgBasicStatsVisualizer
// 0x000C (0x00A8 - 0x009C)
class UPgBasicStatsVisualizer : public UBasicStatsVisualizer
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x009C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2366 ];

		return pClassPointer;
	};

};

UClass* UPgBasicStatsVisualizer::pClassPointer = NULL;

// Class GridEditor.PgGameStatsDBUploader
// 0x0004 (0x0134 - 0x0130)
class UPgGameStatsDBUploader : public UGameStatsDBUploader
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0130 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2367 ];

		return pClassPointer;
	};

};

UClass* UPgGameStatsDBUploader::pClassPointer = NULL;

// Class GridEditor.PgGameStatsFileReader
// 0x0000 (0x0258 - 0x0258)
class UPgGameStatsFileReader : public UGameStatsFileReader
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2368 ];

		return pClassPointer;
	};

};

UClass* UPgGameStatsFileReader::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif