/*
#############################################################################################
# CrimeCraft (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Editor_classes.h
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

// Enum Editor.TextureFactory.TextureCompressionSettings
/*enum TextureCompressionSettings
{
	TC_Default                                         = 0,
	TC_Normalmap                                       = 1,
	TC_Displacementmap                                 = 2,
	TC_NormalmapAlpha                                  = 3,
	TC_Grayscale                                       = 4,
	TC_HighDynamicRange                                = 5,
	TC_Default_DXT1A                                   = 6,
	TC_MAX                                             = 7
};*/

// Enum Editor.TextureFactory.CompressionQuality
/*enum CompressionQuality
{
	QualityFastest                                     = 0,
	QualityNormal                                      = 1,
	QualityProduction                                  = 2,
	QualityHighest                                     = 3,
	CompressionQuality_MAX                             = 4
};*/

// Enum Editor.TextureFactory.ColorToSpecular
/*enum ColorToSpecular
{
	None_to_Specular                                   = 0,
	R_to_Specular                                      = 1,
	G_to_Specular                                      = 2,
	B_to_Specular                                      = 3,
	RGBA_to_Specular                                   = 4,
	ColorToSpecular_MAX                                = 5
};*/

// Enum Editor.TextureFactory.ParentMatId
/*enum ParentMatId
{
	ParentMatId_MAX                                    = 0
};*/

// Enum Editor.TextureFactory.PhysMatId
/*enum PhysMatId
{
	PhysMatId_MAX                                      = 0
};*/

// Enum Editor.TextureFactory.LODGroup
/*enum LODGroup
{
	TEXTUREGROUP_World                                 = 0,
	TEXTUREGROUP_WorldNormalMap                        = 1,
	TEXTUREGROUP_WorldSpecular                         = 2,
	TEXTUREGROUP_Character                             = 3,
	TEXTUREGROUP_CharacterNormalMap                    = 4,
	TEXTUREGROUP_CharacterSpecular                     = 5,
	TEXTUREGROUP_Weapon                                = 6,
	TEXTUREGROUP_WeaponNormalMap                       = 7,
	TEXTUREGROUP_WeaponSpecular                        = 8,
	TEXTUREGROUP_Vehicle                               = 9,
	TEXTUREGROUP_VehicleNormalMap                      = 10,
	TEXTUREGROUP_VehicleSpecular                       = 11,
	TEXTUREGROUP_Cinematic                             = 12,
	TEXTUREGROUP_Effects                               = 13,
	TEXTUREGROUP_EffectsNotFiltered                    = 14,
	TEXTUREGROUP_Skybox                                = 15,
	TEXTUREGROUP_UI                                    = 16,
	TEXTUREGROUP_LightAndShadowMap                     = 17,
	TEXTUREGROUP_RenderTarget                          = 18,
	TEXTUREGROUP_MAX                                   = 19
};*/

// Enum Editor.TextureFactory.Blending
/*enum Blending
{
	BLEND_Opaque                                       = 0,
	BLEND_Masked                                       = 1,
	BLEND_Translucent                                  = 2,
	BLEND_Additive                                     = 3,
	BLEND_Modulate                                     = 4,
	BLEND_MAX                                          = 5
};*/

// Enum Editor.TextureFactory.LightingModel
/*enum LightingModel
{
	MLM_Phong                                          = 0,
	MLM_NonDirectional                                 = 1,
	MLM_Unlit                                          = 2,
	MLM_Custom                                         = 3,
	MLM_MAX                                            = 4
};*/

// Enum Editor.RenderTargetCubeExporterTGA.CubeFace
/*enum CubeFace
{
	CubeFace_MAX                                       = 0
};*/

// Enum Editor.TextureMovieFactory.MovieStreamSource
/*enum MovieStreamSource
{
	MovieStream_File                                   = 0,
	MovieStream_Memory                                 = 1,
	MovieStream_MAX                                    = 2
};*/

// Enum Editor.TextureRenderTargetCubeFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	FloatRGB                                           = 1,
	FloatRGBA                                          = 2,
	Format_MAX                                         = 3
};*/

// Enum Editor.TextureRenderTargetFactoryNew.Format
/*enum Format
{
	A8R8G8B8                                           = 0,
	FloatRGB                                           = 1,
	FloatRGBA                                          = 2,
	Format_MAX                                         = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Editor.AnalyzeContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2533 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeContentCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeCookedContentCommandlet
// 0x0018 (0x0094 - 0x007C)
class UAnalyzeCookedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2535 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedContentCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeCookedPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeCookedPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2537 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeCookedPackagesCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeFallbackMaterialsCommandlet
// 0x003C (0x00B8 - 0x007C)
class UAnalyzeFallbackMaterialsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x007C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2539 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeFallbackMaterialsCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeReferencedContentCommandlet
// 0x0434 (0x04B0 - 0x007C)
class UAnalyzeReferencedContentCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x434 ];                           		// 0x007C (0x0434) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2541 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeReferencedContentCommandlet::pClassPointer = NULL;

// Class Editor.AnalyzeScriptCommandlet
// 0x0000 (0x007C - 0x007C)
class UAnalyzeScriptCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2543 ];

		return pClassPointer;
	};

};

UClass* UAnalyzeScriptCommandlet::pClassPointer = NULL;

// Class Editor.AnimObjectFactory
// 0x0000 (0x0070 - 0x0070)
class UAnimObjectFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2545 ];

		return pClassPointer;
	};

};

UClass* UAnimObjectFactory::pClassPointer = NULL;

// Class Editor.AnimSetFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimSetFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2547 ];

		return pClassPointer;
	};

};

UClass* UAnimSetFactoryNew::pClassPointer = NULL;

// Class Editor.AnimTreeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UAnimTreeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2549 ];

		return pClassPointer;
	};

};

UClass* UAnimTreeFactoryNew::pClassPointer = NULL;

// Class Editor.BatchExportCommandlet
// 0x0000 (0x007C - 0x007C)
class UBatchExportCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2551 ];

		return pClassPointer;
	};

};

UClass* UBatchExportCommandlet::pClassPointer = NULL;

// Class Editor.BrushBuilder
// 0x003C (0x0078 - 0x003C)
class UBrushBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2553 ];

		return pClassPointer;
	};

};

UClass* UBrushBuilder::pClassPointer = NULL;

// Class Editor.BuildContentTagIndexCommandlet
// 0x0000 (0x007C - 0x007C)
class UBuildContentTagIndexCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2555 ];

		return pClassPointer;
	};

};

UClass* UBuildContentTagIndexCommandlet::pClassPointer = NULL;

// Class Editor.CameraAnimFactory
// 0x0000 (0x0070 - 0x0070)
class UCameraAnimFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2557 ];

		return pClassPointer;
	};

};

UClass* UCameraAnimFactory::pClassPointer = NULL;

// Class Editor.ResavePackagesCommandlet
// 0x0050 (0x00CC - 0x007C)
class UResavePackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x50 ];                            		// 0x007C (0x0050) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2559 ];

		return pClassPointer;
	};

};

UClass* UResavePackagesCommandlet::pClassPointer = NULL;

// Class Editor.ChangePrefabSequenceClassCommandlet
// 0x0000 (0x00CC - 0x00CC)
class UChangePrefabSequenceClassCommandlet : public UResavePackagesCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2561 ];

		return pClassPointer;
	};

};

UClass* UChangePrefabSequenceClassCommandlet::pClassPointer = NULL;

// Class Editor.ClassExporterUC
// 0x0000 (0x0064 - 0x0064)
class UClassExporterUC : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2563 ];

		return pClassPointer;
	};

};

UClass* UClassExporterUC::pClassPointer = NULL;

// Class Editor.ClassFactoryUC
// 0x0000 (0x0070 - 0x0070)
class UClassFactoryUC : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2565 ];

		return pClassPointer;
	};

};

UClass* UClassFactoryUC::pClassPointer = NULL;

// Class Editor.ColladaFactory
// 0x0004 (0x0074 - 0x0070)
class UColladaFactory : public UFactory
{
public:
	unsigned long                                      bImportAsSkeletalMesh : 1;                        		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2567 ];

		return pClassPointer;
	};

};

UClass* UColladaFactory::pClassPointer = NULL;

// Class Editor.CompressAnimationsCommandlet
// 0x0000 (0x007C - 0x007C)
class UCompressAnimationsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2570 ];

		return pClassPointer;
	};

};

UClass* UCompressAnimationsCommandlet::pClassPointer = NULL;

// Class Editor.ConformCommandlet
// 0x0000 (0x007C - 0x007C)
class UConformCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2572 ];

		return pClassPointer;
	};

};

UClass* UConformCommandlet::pClassPointer = NULL;

// Class Editor.ContentTagIndex
// 0x001C (0x0058 - 0x003C)
class UContentTagIndex : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x003C (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2574 ];

		return pClassPointer;
	};

};

UClass* UContentTagIndex::pClassPointer = NULL;

// Class Editor.CookPackagesCommandlet
// 0x0FF8 (0x1074 - 0x007C)
class UCookPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xFF8 ];                           		// 0x007C (0x0FF8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2576 ];

		return pClassPointer;
	};

};

UClass* UCookPackagesCommandlet::pClassPointer = NULL;

// Class Editor.CreateDefaultStyleCommandlet
// 0x0004 (0x0080 - 0x007C)
class UCreateDefaultStyleCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2578 ];

		return pClassPointer;
	};

};

UClass* UCreateDefaultStyleCommandlet::pClassPointer = NULL;

// Class Editor.CubeBuilder
// 0x001C (0x0094 - 0x0078)
class UCubeBuilder : public UBrushBuilder
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x0078 (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2580 ];

		return pClassPointer;
	};

};

UClass* UCubeBuilder::pClassPointer = NULL;

// Class Editor.CurveEdPresetCurveFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UCurveEdPresetCurveFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2582 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPresetCurveFactoryNew::pClassPointer = NULL;

// Class Editor.CutDownContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UCutDownContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2584 ];

		return pClassPointer;
	};

};

UClass* UCutDownContentCommandlet::pClassPointer = NULL;

// Class Editor.DecalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UDecalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2586 ];

		return pClassPointer;
	};

};

UClass* UDecalMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.DiffPackagesCommandlet
// 0x0018 (0x0094 - 0x007C)
class UDiffPackagesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2588 ];

		return pClassPointer;
	};

};

UClass* UDiffPackagesCommandlet::pClassPointer = NULL;

// Class Editor.DumpEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2590 ];

		return pClassPointer;
	};

};

UClass* UDumpEmittersCommandlet::pClassPointer = NULL;

// Class Editor.DumpLightmapInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UDumpLightmapInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2592 ];

		return pClassPointer;
	};

};

UClass* UDumpLightmapInfoCommandlet::pClassPointer = NULL;

// Class Editor.DumpShadersCommandlet
// 0x000C (0x0088 - 0x007C)
class UDumpShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x007C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2594 ];

		return pClassPointer;
	};

};

UClass* UDumpShadersCommandlet::pClassPointer = NULL;

// Class Editor.EditorComponent
// 0x0024 (0x01F0 - 0x01CC)
class UEditorComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x01CC (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2596 ];

		return pClassPointer;
	};

};

UClass* UEditorComponent::pClassPointer = NULL;

// Class Editor.EditorEngine
// 0x01BC (0x05E0 - 0x0424)
class UEditorEngine : public UEngine
{
public:
	unsigned char                                      UnknownData00[ 0x1BC ];                           		// 0x0424 (0x01BC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2598 ];

		return pClassPointer;
	};

};

UClass* UEditorEngine::pClassPointer = NULL;

// Class Editor.EditorPlayer
// 0x0000 (0x01B4 - 0x01B4)
class UEditorPlayer : public ULocalPlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2600 ];

		return pClassPointer;
	};

};

UClass* UEditorPlayer::pClassPointer = NULL;

// Class Editor.EditorUserSettings
// 0x0010 (0x004C - 0x003C)
class UEditorUserSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2602 ];

		return pClassPointer;
	};

};

UClass* UEditorUserSettings::pClassPointer = NULL;

// Class Editor.EditorViewportInput
// 0x0004 (0x00DC - 0x00D8)
class UEditorViewportInput : public UInput
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00D8 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2604 ];

		return pClassPointer;
	};

};

UClass* UEditorViewportInput::pClassPointer = NULL;

// Class Editor.EdModeComponent
// 0x0000 (0x01F0 - 0x01F0)
class UEdModeComponent : public UEditorComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2606 ];

		return pClassPointer;
	};

};

UClass* UEdModeComponent::pClassPointer = NULL;

// Class Editor.ExamineOutersCommandlet
// 0x0000 (0x007C - 0x007C)
class UExamineOutersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2608 ];

		return pClassPointer;
	};

};

UClass* UExamineOutersCommandlet::pClassPointer = NULL;

// Class Editor.ExporterT3DX
// 0x0000 (0x0064 - 0x0064)
class UExporterT3DX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2610 ];

		return pClassPointer;
	};

};

UClass* UExporterT3DX::pClassPointer = NULL;

// Class Editor.ExportLocCommandlet
// 0x0000 (0x007C - 0x007C)
class UExportLocCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2612 ];

		return pClassPointer;
	};

};

UClass* UExportLocCommandlet::pClassPointer = NULL;

// Class Editor.FindDuplicateKismetObjectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindDuplicateKismetObjectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2614 ];

		return pClassPointer;
	};

};

UClass* UFindDuplicateKismetObjectsCommandlet::pClassPointer = NULL;

// Class Editor.FindEmitterMismatchedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterMismatchedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2616 ];

		return pClassPointer;
	};

};

UClass* UFindEmitterMismatchedLODsCommandlet::pClassPointer = NULL;

// Class Editor.FindEmitterModifiedLODsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterModifiedLODsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2618 ];

		return pClassPointer;
	};

};

UClass* UFindEmitterModifiedLODsCommandlet::pClassPointer = NULL;

// Class Editor.FindEmitterModuleLODErrorsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindEmitterModuleLODErrorsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2620 ];

		return pClassPointer;
	};

};

UClass* UFindEmitterModuleLODErrorsCommandlet::pClassPointer = NULL;

// Class Editor.FindQuestionableTexturesCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindQuestionableTexturesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2622 ];

		return pClassPointer;
	};

};

UClass* UFindQuestionableTexturesCommandlet::pClassPointer = NULL;

// Class Editor.PerformMapCheckCommandlet
// 0x0018 (0x0094 - 0x007C)
class UPerformMapCheckCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2624 ];

		return pClassPointer;
	};

};

UClass* UPerformMapCheckCommandlet::pClassPointer = NULL;

// Class Editor.FindRenamedPrefabSequencesCommandlet
// 0x0048 (0x00DC - 0x0094)
class UFindRenamedPrefabSequencesCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0094 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2626 ];

		return pClassPointer;
	};

};

UClass* UFindRenamedPrefabSequencesCommandlet::pClassPointer = NULL;

// Class Editor.FindStaticActorsRefsCommandlet
// 0x00A0 (0x0134 - 0x0094)
class UFindStaticActorsRefsCommandlet : public UPerformMapCheckCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0xA0 ];                            		// 0x0094 (0x00A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2628 ];

		return pClassPointer;
	};

};

UClass* UFindStaticActorsRefsCommandlet::pClassPointer = NULL;

// Class Editor.FindTexturesWithMissingPhysicalMaterialsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFindTexturesWithMissingPhysicalMaterialsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2630 ];

		return pClassPointer;
	};

};

UClass* UFindTexturesWithMissingPhysicalMaterialsCommandlet::pClassPointer = NULL;

// Class Editor.FixAmbiguousMaterialParametersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixAmbiguousMaterialParametersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2632 ];

		return pClassPointer;
	};

};

UClass* UFixAmbiguousMaterialParametersCommandlet::pClassPointer = NULL;

// Class Editor.FixupEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2634 ];

		return pClassPointer;
	};

};

UClass* UFixupEmittersCommandlet::pClassPointer = NULL;

// Class Editor.FixupRedirectsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupRedirectsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2636 ];

		return pClassPointer;
	};

};

UClass* UFixupRedirectsCommandlet::pClassPointer = NULL;

// Class Editor.FixupSourceUVsCommandlet
// 0x0000 (0x007C - 0x007C)
class UFixupSourceUVsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2638 ];

		return pClassPointer;
	};

};

UClass* UFixupSourceUVsCommandlet::pClassPointer = NULL;

// Class Editor.FonixFactory
// 0x0000 (0x0070 - 0x0070)
class UFonixFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2640 ];

		return pClassPointer;
	};

};

UClass* UFonixFactory::pClassPointer = NULL;

// Class Editor.TextureFactory
// 0x0068 (0x00D8 - 0x0070)
class UTextureFactory : public UFactory
{
public:
	unsigned char                                      CompressionQuality;                               		// 0x0070 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              ErrorSearchThresholdRMS;                          		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BinaryAlphaThreshold;                             		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ForceBinaryAlpha : 1;                             		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Create_MaterialInstance : 1;                      		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Parent_Material;                                  		// 0x0084 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Phys_Material;                                    		// 0x0085 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      To_Specular;                                      		// 0x0086 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      NoCompression : 1;                                		// 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      CompressionNoAlpha : 1;                           		// 0x008C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      CompressionNoMipmaps : 1;                         		// 0x0090 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DeferCompression : 1;                             		// 0x0094 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      CompressionSettings;                              		// 0x0098 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Create_Material_ : 1;                             		// 0x009C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGB_To_Diffuse : 1;                               		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      RGB_To_Emissive : 1;                              		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Specular : 1;                            		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Emissive : 1;                            		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Opacity : 1;                             		// 0x00B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Alpha_To_Opacity_Mask : 1;                        		// 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Two_Sided_ : 1;                                   		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Blending;                                         		// 0x00BC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Lighting_Model;                                   		// 0x00BD (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LODGroup;                                         		// 0x00BE (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      FlipBook : 1;                                     		// 0x00C0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Dither_Mip_maps_alpha_ : 1;                       		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_R : 1;                            		// 0x00C8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_G : 1;                            		// 0x00CC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_B : 1;                            		// 0x00D0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Preserve_border_A : 1;                            		// 0x00D4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2642 ];

		return pClassPointer;
	};

};

UClass* UTextureFactory::pClassPointer = NULL;

// Class Editor.FontFactory
// 0x0000 (0x00D8 - 0x00D8)
class UFontFactory : public UTextureFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2682 ];

		return pClassPointer;
	};

};

UClass* UFontFactory::pClassPointer = NULL;

// Class Editor.GeomModifier
// 0x0010 (0x004C - 0x003C)
class UGeomModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2684 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier::pClassPointer = NULL;

// Class Editor.GeomModifier_Edit
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Edit : public UGeomModifier
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2686 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Edit::pClassPointer = NULL;

// Class Editor.GeomModifier_Clip
// 0x0004 (0x0050 - 0x004C)
class UGeomModifier_Clip : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2688 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Clip::pClassPointer = NULL;

// Class Editor.GeomModifier_Create
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Create : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2690 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Create::pClassPointer = NULL;

// Class Editor.GeomModifier_Delete
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Delete : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2692 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Delete::pClassPointer = NULL;

// Class Editor.GeomModifier_Extrude
// 0x0008 (0x0054 - 0x004C)
class UGeomModifier_Extrude : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x004C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2694 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Extrude::pClassPointer = NULL;

// Class Editor.GeomModifier_Flip
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Flip : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2696 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Flip::pClassPointer = NULL;

// Class Editor.GeomModifier_Lathe
// 0x000C (0x0058 - 0x004C)
class UGeomModifier_Lathe : public UGeomModifier_Edit
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x004C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2698 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Lathe::pClassPointer = NULL;

// Class Editor.GeomModifier_Split
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Split : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2700 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Split::pClassPointer = NULL;

// Class Editor.GeomModifier_Triangulate
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Triangulate : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2702 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Triangulate::pClassPointer = NULL;

// Class Editor.GeomModifier_Turn
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Turn : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2704 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Turn::pClassPointer = NULL;

// Class Editor.GeomModifier_Weld
// 0x0000 (0x004C - 0x004C)
class UGeomModifier_Weld : public UGeomModifier_Edit
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2706 ];

		return pClassPointer;
	};

};

UClass* UGeomModifier_Weld::pClassPointer = NULL;

// Class Editor.LensFlareFactoryNew
// 0x0000 (0x0070 - 0x0070)
class ULensFlareFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2708 ];

		return pClassPointer;
	};

};

UClass* ULensFlareFactoryNew::pClassPointer = NULL;

// Class Editor.LevelExporterOBJ
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2710 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterOBJ::pClassPointer = NULL;

// Class Editor.LevelExporterSTL
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterSTL : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2712 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterSTL::pClassPointer = NULL;

// Class Editor.LevelExporterT3D
// 0x0000 (0x0064 - 0x0064)
class ULevelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2714 ];

		return pClassPointer;
	};

};

UClass* ULevelExporterT3D::pClassPointer = NULL;

// Class Editor.LevelFactory
// 0x0000 (0x0070 - 0x0070)
class ULevelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2716 ];

		return pClassPointer;
	};

};

UClass* ULevelFactory::pClassPointer = NULL;

// Class Editor.LightingChannelsObject
// 0x0004 (0x0040 - 0x003C)
class ULightingChannelsObject : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2718 ];

		return pClassPointer;
	};

};

UClass* ULightingChannelsObject::pClassPointer = NULL;

// Class Editor.ListCorruptedComponentsCommandlet
// 0x0000 (0x007C - 0x007C)
class UListCorruptedComponentsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2720 ];

		return pClassPointer;
	};

};

UClass* UListCorruptedComponentsCommandlet::pClassPointer = NULL;

// Class Editor.ListDistanceCrossFadeNodesCommandlet
// 0x0000 (0x007C - 0x007C)
class UListDistanceCrossFadeNodesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2722 ];

		return pClassPointer;
	};

};

UClass* UListDistanceCrossFadeNodesCommandlet::pClassPointer = NULL;

// Class Editor.ListEmittersUsingModuleCommandlet
// 0x0000 (0x007C - 0x007C)
class UListEmittersUsingModuleCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2724 ];

		return pClassPointer;
	};

};

UClass* UListEmittersUsingModuleCommandlet::pClassPointer = NULL;

// Class Editor.ListLoopingEmittersCommandlet
// 0x0000 (0x007C - 0x007C)
class UListLoopingEmittersCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2726 ];

		return pClassPointer;
	};

};

UClass* UListLoopingEmittersCommandlet::pClassPointer = NULL;

// Class Editor.ListPackagesReferencingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPackagesReferencingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2728 ];

		return pClassPointer;
	};

};

UClass* UListPackagesReferencingCommandlet::pClassPointer = NULL;

// Class Editor.ListPSysFixedBoundSettingCommandlet
// 0x0000 (0x007C - 0x007C)
class UListPSysFixedBoundSettingCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2730 ];

		return pClassPointer;
	};

};

UClass* UListPSysFixedBoundSettingCommandlet::pClassPointer = NULL;

// Class Editor.ListScriptReferencedContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UListScriptReferencedContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2732 ];

		return pClassPointer;
	};

};

UClass* UListScriptReferencedContentCommandlet::pClassPointer = NULL;

// Class Editor.ListSoundNodeWavesCommandlet
// 0x0000 (0x007C - 0x007C)
class UListSoundNodeWavesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2734 ];

		return pClassPointer;
	};

};

UClass* UListSoundNodeWavesCommandlet::pClassPointer = NULL;

// Class Editor.LoadPackageCommandlet
// 0x0000 (0x007C - 0x007C)
class ULoadPackageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2736 ];

		return pClassPointer;
	};

};

UClass* ULoadPackageCommandlet::pClassPointer = NULL;

// Class Editor.LocSoundInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class ULocSoundInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2738 ];

		return pClassPointer;
	};

};

UClass* ULocSoundInfoCommandlet::pClassPointer = NULL;

// Class Editor.MakeCommandlet
// 0x0000 (0x007C - 0x007C)
class UMakeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2740 ];

		return pClassPointer;
	};

};

UClass* UMakeCommandlet::pClassPointer = NULL;

// Class Editor.MaterialExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UMaterialExporterT3D : public UExporterT3DX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2742 ];

		return pClassPointer;
	};

};

UClass* UMaterialExporterT3D::pClassPointer = NULL;

// Class Editor.MaterialFactory
// 0x0000 (0x0070 - 0x0070)
class UMaterialFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2744 ];

		return pClassPointer;
	};

};

UClass* UMaterialFactory::pClassPointer = NULL;

// Class Editor.MaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2746 ];

		return pClassPointer;
	};

};

UClass* UMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.MaterialInstanceConstantFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceConstantFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2748 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceConstantFactoryNew::pClassPointer = NULL;

// Class Editor.MaterialInstanceTimeVaryingFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UMaterialInstanceTimeVaryingFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2750 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceTimeVaryingFactoryNew::pClassPointer = NULL;

// Class Editor.MergePackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMergePackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2752 ];

		return pClassPointer;
	};

};

UClass* UMergePackagesCommandlet::pClassPointer = NULL;

// Class Editor.MineCookedPackagesCommandlet
// 0x0000 (0x007C - 0x007C)
class UMineCookedPackagesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2754 ];

		return pClassPointer;
	};

};

UClass* UMineCookedPackagesCommandlet::pClassPointer = NULL;

// Class Editor.ModelExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UModelExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2756 ];

		return pClassPointer;
	};

};

UClass* UModelExporterT3D::pClassPointer = NULL;

// Class Editor.ModelFactory
// 0x0000 (0x0070 - 0x0070)
class UModelFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2758 ];

		return pClassPointer;
	};

};

UClass* UModelFactory::pClassPointer = NULL;

// Class Editor.ObjectExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UObjectExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2760 ];

		return pClassPointer;
	};

};

UClass* UObjectExporterT3D::pClassPointer = NULL;

// Class Editor.PackageExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UPackageExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2762 ];

		return pClassPointer;
	};

};

UClass* UPackageExporterT3D::pClassPointer = NULL;

// Class Editor.PackageFactory
// 0x0000 (0x0070 - 0x0070)
class UPackageFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2764 ];

		return pClassPointer;
	};

};

UClass* UPackageFactory::pClassPointer = NULL;

// Class Editor.ParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2766 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemFactoryNew::pClassPointer = NULL;

// Class Editor.PatchScriptCommandlet
// 0x0004 (0x0080 - 0x007C)
class UPatchScriptCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x007C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2768 ];

		return pClassPointer;
	};

};

UClass* UPatchScriptCommandlet::pClassPointer = NULL;

// Class Editor.PerformTerrainMaterialDumpCommandlet
// 0x0000 (0x007C - 0x007C)
class UPerformTerrainMaterialDumpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2770 ];

		return pClassPointer;
	};

};

UClass* UPerformTerrainMaterialDumpCommandlet::pClassPointer = NULL;

// Class Editor.PersistentCookerData
// 0x010C (0x0148 - 0x003C)
class UPersistentCookerData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10C ];                           		// 0x003C (0x010C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2772 ];

		return pClassPointer;
	};

};

UClass* UPersistentCookerData::pClassPointer = NULL;

// Class Editor.PhysicalMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPhysicalMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2774 ];

		return pClassPointer;
	};

};

UClass* UPhysicalMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.PhysXParticleSystemFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPhysXParticleSystemFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2776 ];

		return pClassPointer;
	};

};

UClass* UPhysXParticleSystemFactoryNew::pClassPointer = NULL;

// Class Editor.PIEToNormalCommandlet
// 0x0000 (0x007C - 0x007C)
class UPIEToNormalCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2778 ];

		return pClassPointer;
	};

};

UClass* UPIEToNormalCommandlet::pClassPointer = NULL;

// Class Editor.PkgInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class UPkgInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2780 ];

		return pClassPointer;
	};

};

UClass* UPkgInfoCommandlet::pClassPointer = NULL;

// Class Editor.PolysExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UPolysExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2782 ];

		return pClassPointer;
	};

};

UClass* UPolysExporterT3D::pClassPointer = NULL;

// Class Editor.PolysFactory
// 0x0000 (0x0070 - 0x0070)
class UPolysFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2784 ];

		return pClassPointer;
	};

};

UClass* UPolysFactory::pClassPointer = NULL;

// Class Editor.PostProcessFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UPostProcessFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2786 ];

		return pClassPointer;
	};

};

UClass* UPostProcessFactoryNew::pClassPointer = NULL;

// Class Editor.PrecompileShadersCommandlet
// 0x0018 (0x0094 - 0x007C)
class UPrecompileShadersCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x007C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2788 ];

		return pClassPointer;
	};

};

UClass* UPrecompileShadersCommandlet::pClassPointer = NULL;

// Class Editor.RebuildMapCommandlet
// 0x0000 (0x007C - 0x007C)
class URebuildMapCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2790 ];

		return pClassPointer;
	};

};

UClass* URebuildMapCommandlet::pClassPointer = NULL;

// Class Editor.RenderTargetCubeExporterTGA
// 0x0004 (0x0068 - 0x0064)
class URenderTargetCubeExporterTGA : public UExporter
{
public:
	unsigned char                                      CubeFace;                                         		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2792 ];

		return pClassPointer;
	};

};

UClass* URenderTargetCubeExporterTGA::pClassPointer = NULL;

// Class Editor.RenderTargetExporterTGA
// 0x0000 (0x0064 - 0x0064)
class URenderTargetExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2796 ];

		return pClassPointer;
	};

};

UClass* URenderTargetExporterTGA::pClassPointer = NULL;

// Class Editor.ReplaceActorCommandlet
// 0x0000 (0x007C - 0x007C)
class UReplaceActorCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2798 ];

		return pClassPointer;
	};

};

UClass* UReplaceActorCommandlet::pClassPointer = NULL;

// Class Editor.ScaleAudioVolumeCommandlet
// 0x0000 (0x007C - 0x007C)
class UScaleAudioVolumeCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2800 ];

		return pClassPointer;
	};

};

UClass* UScaleAudioVolumeCommandlet::pClassPointer = NULL;

// Class Editor.SequenceExporterT3D
// 0x0000 (0x0064 - 0x0064)
class USequenceExporterT3D : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2802 ];

		return pClassPointer;
	};

};

UClass* USequenceExporterT3D::pClassPointer = NULL;

// Class Editor.SequenceFactory
// 0x0000 (0x0070 - 0x0070)
class USequenceFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2804 ];

		return pClassPointer;
	};

};

UClass* USequenceFactory::pClassPointer = NULL;

// Class Editor.SetMaterialUsageCommandlet
// 0x0000 (0x007C - 0x007C)
class USetMaterialUsageCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2806 ];

		return pClassPointer;
	};

};

UClass* USetMaterialUsageCommandlet::pClassPointer = NULL;

// Class Editor.SetPackageFlagsCommandlet
// 0x0000 (0x007C - 0x007C)
class USetPackageFlagsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2808 ];

		return pClassPointer;
	};

};

UClass* USetPackageFlagsCommandlet::pClassPointer = NULL;

// Class Editor.SetTextureLODGroupCommandlet
// 0x0000 (0x007C - 0x007C)
class USetTextureLODGroupCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2810 ];

		return pClassPointer;
	};

};

UClass* USetTextureLODGroupCommandlet::pClassPointer = NULL;

// Class Editor.ShowObjectCountCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowObjectCountCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2812 ];

		return pClassPointer;
	};

};

UClass* UShowObjectCountCommandlet::pClassPointer = NULL;

// Class Editor.ShowStylesCommandlet
// 0x0000 (0x007C - 0x007C)
class UShowStylesCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2814 ];

		return pClassPointer;
	};

};

UClass* UShowStylesCommandlet::pClassPointer = NULL;

// Class Editor.ShowTaggedPropsCommandlet
// 0x0090 (0x010C - 0x007C)
class UShowTaggedPropsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[ 0x90 ];                            		// 0x007C (0x0090) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2816 ];

		return pClassPointer;
	};

};

UClass* UShowTaggedPropsCommandlet::pClassPointer = NULL;

// Class Editor.SkeletalMeshFactory
// 0x0008 (0x0078 - 0x0070)
class USkeletalMeshFactory : public UFactory
{
public:
	unsigned long                                      bAssumeMayaCoordinates : 1;                       		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2818 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshFactory::pClassPointer = NULL;

// Class Editor.SoundCueFactoryNew
// 0x0000 (0x0070 - 0x0070)
class USoundCueFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2821 ];

		return pClassPointer;
	};

};

UClass* USoundCueFactoryNew::pClassPointer = NULL;

// Class Editor.SoundExporterWAV
// 0x0000 (0x0064 - 0x0064)
class USoundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2823 ];

		return pClassPointer;
	};

};

UClass* USoundExporterWAV::pClassPointer = NULL;

// Class Editor.SoundFactory
// 0x000C (0x007C - 0x0070)
class USoundFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              CueVolume;                                        		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2825 ];

		return pClassPointer;
	};

};

UClass* USoundFactory::pClassPointer = NULL;

// Class Editor.SoundGroupInfoCommandlet
// 0x0000 (0x007C - 0x007C)
class USoundGroupInfoCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2830 ];

		return pClassPointer;
	};

};

UClass* USoundGroupInfoCommandlet::pClassPointer = NULL;

// Class Editor.SoundModeFactory
// 0x0000 (0x0070 - 0x0070)
class USoundModeFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2832 ];

		return pClassPointer;
	};

};

UClass* USoundModeFactory::pClassPointer = NULL;

// Class Editor.SoundSurroundExporterWAV
// 0x0000 (0x0064 - 0x0064)
class USoundSurroundExporterWAV : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2834 ];

		return pClassPointer;
	};

};

UClass* USoundSurroundExporterWAV::pClassPointer = NULL;

// Class Editor.SoundSurroundFactory
// 0x0004 (0x0074 - 0x0070)
class USoundSurroundFactory : public UFactory
{
public:
	float                                              CueVolume;                                        		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2836 ];

		return pClassPointer;
	};

};

UClass* USoundSurroundFactory::pClassPointer = NULL;

// Class Editor.SoundTTSFactory
// 0x001C (0x008C - 0x0070)
class USoundTTSFactory : public UFactory
{
public:
	unsigned long                                      bAutoCreateCue : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIncludeAttenuationNode : 1;                      		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseTTS : 1;                                      		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     SpokenText;                                       		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              CueVolume;                                        		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2839 ];

		return pClassPointer;
	};

};

UClass* USoundTTSFactory::pClassPointer = NULL;

// Class Editor.SpeedTreeFactory
// 0x0004 (0x0074 - 0x0070)
class USpeedTreeFactory : public UFactory
{
public:
	int                                                RandomSeed;                                       		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2846 ];

		return pClassPointer;
	};

};

UClass* USpeedTreeFactory::pClassPointer = NULL;

// Class Editor.StaticMeshExporterOBJ
// 0x0000 (0x0064 - 0x0064)
class UStaticMeshExporterOBJ : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2849 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshExporterOBJ::pClassPointer = NULL;

// Class Editor.StaticMeshExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UStaticMeshExporterT3D : public UExporterT3DX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2851 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshExporterT3D::pClassPointer = NULL;

// Class Editor.StaticMeshFactory
// 0x0010 (0x0080 - 0x0070)
class UStaticMeshFactory : public UFactory
{
public:
	int                                                Pitch;                                            		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                Roll;                                             		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                Yaw;                                              		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOneConvexPerUCXObject : 1;                       		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2853 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshFactory::pClassPointer = NULL;

// Class Editor.StripSourceCommandlet
// 0x0000 (0x007C - 0x007C)
class UStripSourceCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2859 ];

		return pClassPointer;
	};

};

UClass* UStripSourceCommandlet::pClassPointer = NULL;

// Class Editor.TerrainExporterT3D
// 0x0008 (0x006C - 0x0064)
class UTerrainExporterT3D : public UExporter
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0064 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2861 ];

		return pClassPointer;
	};

};

UClass* UTerrainExporterT3D::pClassPointer = NULL;

// Class Editor.TerrainFactory
// 0x0004 (0x0074 - 0x0070)
class UTerrainFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2863 ];

		return pClassPointer;
	};

};

UClass* UTerrainFactory::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporter
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2865 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporter::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporterG16BMPT3D
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporterG16BMPT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2867 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporterG16BMPT3D::pClassPointer = NULL;

// Class Editor.TerrainHeightMapExporterTextT3D
// 0x0000 (0x0064 - 0x0064)
class UTerrainHeightMapExporterTextT3D : public UTerrainHeightMapExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2869 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapExporterTextT3D::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactory
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactory : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2871 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactory::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactoryG16BMP
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMP : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2873 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryG16BMP::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactoryG16BMPT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryG16BMPT3D : public UTerrainHeightMapFactoryG16BMP
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2875 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryG16BMPT3D::pClassPointer = NULL;

// Class Editor.TerrainHeightMapFactoryTextT3D
// 0x0000 (0x003C - 0x003C)
class UTerrainHeightMapFactoryTextT3D : public UTerrainHeightMapFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2877 ];

		return pClassPointer;
	};

};

UClass* UTerrainHeightMapFactoryTextT3D::pClassPointer = NULL;

// Class Editor.TerrainLayerSetupFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainLayerSetupFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2879 ];

		return pClassPointer;
	};

};

UClass* UTerrainLayerSetupFactoryNew::pClassPointer = NULL;

// Class Editor.TerrainMaterialFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTerrainMaterialFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2881 ];

		return pClassPointer;
	};

};

UClass* UTerrainMaterialFactoryNew::pClassPointer = NULL;

// Class Editor.TestCompressionCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestCompressionCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2883 ];

		return pClassPointer;
	};

};

UClass* UTestCompressionCommandlet::pClassPointer = NULL;

// Class Editor.TestWordWrapCommandlet
// 0x0000 (0x007C - 0x007C)
class UTestWordWrapCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2885 ];

		return pClassPointer;
	};

};

UClass* UTestWordWrapCommandlet::pClassPointer = NULL;

// Class Editor.TextBufferExporterTXT
// 0x0000 (0x0064 - 0x0064)
class UTextBufferExporterTXT : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2887 ];

		return pClassPointer;
	};

};

UClass* UTextBufferExporterTXT::pClassPointer = NULL;

// Class Editor.TextureCubeFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UTextureCubeFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2889 ];

		return pClassPointer;
	};

};

UClass* UTextureCubeFactoryNew::pClassPointer = NULL;

// Class Editor.TextureExporterBMP
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterBMP : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2891 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterBMP::pClassPointer = NULL;

// Class Editor.TextureExporterPCX
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterPCX : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2893 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterPCX::pClassPointer = NULL;

// Class Editor.TextureExporterT3D
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterT3D : public UExporterT3DX
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2895 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterT3D::pClassPointer = NULL;

// Class Editor.TextureExporterTGA
// 0x0000 (0x0064 - 0x0064)
class UTextureExporterTGA : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2897 ];

		return pClassPointer;
	};

};

UClass* UTextureExporterTGA::pClassPointer = NULL;

// Class Editor.TextureMovieFactory
// 0x0004 (0x0074 - 0x0070)
class UTextureMovieFactory : public UFactory
{
public:
	unsigned char                                      MovieStreamSource;                                		// 0x0070 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2899 ];

		return pClassPointer;
	};

};

UClass* UTextureMovieFactory::pClassPointer = NULL;

// Class Editor.TextureRenderTargetCubeFactoryNew
// 0x0008 (0x0078 - 0x0070)
class UTextureRenderTargetCubeFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x0074 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2903 ];

		return pClassPointer;
	};

};

UClass* UTextureRenderTargetCubeFactoryNew::pClassPointer = NULL;

// Class Editor.TextureRenderTargetFactoryNew
// 0x000C (0x007C - 0x0070)
class UTextureRenderTargetFactoryNew : public UFactory
{
public:
	int                                                Width;                                            		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Height;                                           		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Format;                                           		// 0x0078 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2908 ];

		return pClassPointer;
	};

};

UClass* UTextureRenderTargetFactoryNew::pClassPointer = NULL;

// Class Editor.Transactor
// 0x0000 (0x003C - 0x003C)
class UTransactor : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2914 ];

		return pClassPointer;
	};

};

UClass* UTransactor::pClassPointer = NULL;

// Class Editor.TransBuffer
// 0x0024 (0x0060 - 0x003C)
class UTransBuffer : public UTransactor
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x003C (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2916 ];

		return pClassPointer;
	};

};

UClass* UTransBuffer::pClassPointer = NULL;

// Class Editor.TrueTypeFontFactory
// 0x0004 (0x00DC - 0x00D8)
class UTrueTypeFontFactory : public UFontFactory
{
public:
	class UFontImportOptions*                          ImportOptions;                                    		// 0x00D8 (0x0004) [0x0000000006000001]              ( CPF_Edit | CPF_NoClear | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2918 ];

		return pClassPointer;
	};

};

UClass* UTrueTypeFontFactory::pClassPointer = NULL;

// Class Editor.TrueTypeMultiFontFactory
// 0x0024 (0x0100 - 0x00DC)
class UTrueTypeMultiFontFactory : public UTrueTypeFontFactory
{
public:
	TArray< float >                                    ResTests;                                         		// 0x00DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    ResHeights;                                       		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UFont* >                             ResFonts;                                         		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2921 ];

		return pClassPointer;
	};

};

UClass* UTrueTypeMultiFontFactory::pClassPointer = NULL;

// Class Editor.UT3MapStatsCommandlet
// 0x0000 (0x007C - 0x007C)
class UUT3MapStatsCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2929 ];

		return pClassPointer;
	};

};

UClass* UUT3MapStatsCommandlet::pClassPointer = NULL;

// Class Editor.WrangleContentCommandlet
// 0x0000 (0x007C - 0x007C)
class UWrangleContentCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2931 ];

		return pClassPointer;
	};

};

UClass* UWrangleContentCommandlet::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif