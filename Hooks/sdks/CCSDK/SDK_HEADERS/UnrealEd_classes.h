/*
#############################################################################################
# CrimeCraft (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UnrealEd_classes.h
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

// Class UnrealEd.AnimNodeEditInfo
// 0x0004 (0x0040 - 0x003C)
class UAnimNodeEditInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2934 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeEditInfo::pClassPointer = NULL;

// Class UnrealEd.AnimNodeEditInfo_AimOffset
// 0x0008 (0x0048 - 0x0040)
class UAnimNodeEditInfo_AimOffset : public UAnimNodeEditInfo
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0040 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2936 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeEditInfo_AimOffset::pClassPointer = NULL;

// Class UnrealEd.AnimNodeEditInfo_CharConst
// 0x0008 (0x0048 - 0x0040)
class UAnimNodeEditInfo_CharConst : public UAnimNodeEditInfo
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0040 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2938 ];

		return pClassPointer;
	};

};

UClass* UAnimNodeEditInfo_CharConst::pClassPointer = NULL;

// Class UnrealEd.ThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailLabelRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2940 ];

		return pClassPointer;
	};

};

UClass* UThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimSetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimSetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2942 ];

		return pClassPointer;
	};

};

UClass* UAnimSetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.AnimTreeEdSkelComponent
// 0x0014 (0x04E0 - 0x04CC)
class UAnimTreeEdSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x04CC (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2944 ];

		return pClassPointer;
	};

};

UClass* UAnimTreeEdSkelComponent::pClassPointer = NULL;

// Class UnrealEd.AnimTreeLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UAnimTreeLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2946 ];

		return pClassPointer;
	};

};

UClass* UAnimTreeLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UThumbnailRenderer : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2948 ];

		return pClassPointer;
	};

};

UClass* UThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.IconThumbnailRenderer
// 0x0010 (0x004C - 0x003C)
class UIconThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2950 ];

		return pClassPointer;
	};

};

UClass* UIconThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ArchetypeThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UArchetypeThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2952 ];

		return pClassPointer;
	};

};

UClass* UArchetypeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ASVSkelComponent
// 0x0014 (0x04E0 - 0x04CC)
class UASVSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x04CC (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2954 ];

		return pClassPointer;
	};

};

UClass* UASVSkelComponent::pClassPointer = NULL;

// Class UnrealEd.BrowserManager
// 0x0024 (0x0060 - 0x003C)
class UBrowserManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x003C (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2956 ];

		return pClassPointer;
	};

};

UClass* UBrowserManager::pClassPointer = NULL;

// Class UnrealEd.CascadeOptions
// 0x00CC (0x0108 - 0x003C)
class UCascadeOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xCC ];                            		// 0x003C (0x00CC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2958 ];

		return pClassPointer;
	};

};

UClass* UCascadeOptions::pClassPointer = NULL;

// Class UnrealEd.CascadePreviewComponent
// 0x0004 (0x01D0 - 0x01CC)
class UCascadePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x01CC (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2960 ];

		return pClassPointer;
	};

};

UClass* UCascadePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.CurveEdOptions
// 0x0078 (0x00B4 - 0x003C)
class UCurveEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x78 ];                            		// 0x003C (0x0078) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2962 ];

		return pClassPointer;
	};

};

UClass* UCurveEdOptions::pClassPointer = NULL;

// Class UnrealEd.CurveEdPresetBase
// 0x0000 (0x003C - 0x003C)
class UCurveEdPresetBase : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2964 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPresetBase::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_CosWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_CosWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2966 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_CosWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_LinearDecay
// 0x0010 (0x004C - 0x003C)
class UCurveEdPreset_LinearDecay : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2968 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_LinearDecay::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_Nothing
// 0x0000 (0x003C - 0x003C)
class UCurveEdPreset_Nothing : public UCurveEdPresetBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2970 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_Nothing::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_SineWave
// 0x000C (0x0048 - 0x003C)
class UCurveEdPreset_SineWave : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2972 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_SineWave::pClassPointer = NULL;

// Class UnrealEd.CurveEdPreset_UserSet
// 0x0004 (0x0040 - 0x003C)
class UCurveEdPreset_UserSet : public UCurveEdPresetBase
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2974 ];

		return pClassPointer;
	};

};

UClass* UCurveEdPreset_UserSet::pClassPointer = NULL;

// Class UnrealEd.PropertyInputProxy
// 0x0010 (0x004C - 0x003C)
class UPropertyInputProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2976 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputProxy::pClassPointer = NULL;

// Class UnrealEd.CustomInputProxy_Base
// 0x0004 (0x0050 - 0x004C)
class UCustomInputProxy_Base : public UPropertyInputProxy
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2978 ];

		return pClassPointer;
	};

};

UClass* UCustomInputProxy_Base::pClassPointer = NULL;

// Class UnrealEd.DefaultSizedThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UDefaultSizedThumbnailRenderer : public UThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2980 ];

		return pClassPointer;
	};

};

UClass* UDefaultSizedThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.EditorUISceneClient
// 0x0018 (0x0110 - 0x00F8)
class UEditorUISceneClient : public UUISceneClient
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x00F8 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2982 ];

		return pClassPointer;
	};

};

UClass* UEditorUISceneClient::pClassPointer = NULL;

// Class UnrealEd.FaceFXStudioSkelComponent
// 0x0004 (0x04D0 - 0x04CC)
class UFaceFXStudioSkelComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x04CC (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2984 ];

		return pClassPointer;
	};

};

UClass* UFaceFXStudioSkelComponent::pClassPointer = NULL;

// Class UnrealEd.TextureThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureThumbnailRenderer : public UThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2986 ];

		return pClassPointer;
	};

};

UClass* UTextureThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.FontThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UFontThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2988 ];

		return pClassPointer;
	};

};

UClass* UFontThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.StaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UStaticMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2990 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.FracturedStaticMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UFracturedStaticMeshLabelRenderer : public UStaticMeshLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2992 ];

		return pClassPointer;
	};

};

UClass* UFracturedStaticMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType
// 0x001C (0x0058 - 0x003C)
class UGenericBrowserType : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x003C (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2994 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Custom
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Custom : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2996 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Custom::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_All
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_All : public UGenericBrowserType_Custom
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2998 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_All::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Animation
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Animation : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3000 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Animation::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_AnimTree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_AnimTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3002 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_AnimTree::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Archetype
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Archetype : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3004 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Archetype::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CameraAnim
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CameraAnim : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3006 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_CameraAnim::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_CurveEdPresetCurve
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_CurveEdPresetCurve : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3008 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_CurveEdPresetCurve::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_DecalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_DecalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3010 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_DecalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAnimSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAnimSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3012 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FaceFXAnimSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FaceFXAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FaceFXAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3014 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FaceFXAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Font
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Font : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3016 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Font::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_StaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_StaticMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3018 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_StaticMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_FracturedStaticMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_FracturedStaticMesh : public UGenericBrowserType_StaticMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3020 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_FracturedStaticMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_LensFlare
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_LensFlare : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3022 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_LensFlare::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Material
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Material : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3024 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Material::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceConstant
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceConstant : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3026 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialInstanceTimeVarying
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialInstanceTimeVarying : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3028 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MaterialLackingPhysMat
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MaterialLackingPhysMat : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3030 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MaterialLackingPhysMat::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphTargetSet
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphTargetSet : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3032 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MorphTargetSet::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_MorphWeightSequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_MorphWeightSequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3034 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_MorphWeightSequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_ParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_ParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3036 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_ParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicalMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicalMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3038 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysicalMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysicsAsset
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysicsAsset : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3040 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysicsAsset::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysXDestructible
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysXDestructible : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3042 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysXDestructible::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PhysXParticleSystem
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PhysXParticleSystem : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3044 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PhysXParticleSystem::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_PostProcess
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_PostProcess : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3046 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_PostProcess::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Prefab
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Prefab : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3048 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Prefab::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Texture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Texture : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3050 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Texture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_RenderTexture
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_RenderTexture : public UGenericBrowserType_Texture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3052 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_RenderTexture::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sequence
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sequence : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3054 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Sequence::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SkeletalMesh
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SkeletalMesh : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3056 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SkeletalMesh::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_Sounds
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_Sounds : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3058 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_Sounds::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundCue
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundCue : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3060 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundCue::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundMode
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundMode : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3062 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundMode::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SoundWave
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SoundWave : public UGenericBrowserType_Sounds
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3064 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SoundWave::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SpeechRecognition
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SpeechRecognition : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3066 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SpeechRecognition::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_SpeedTree
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_SpeedTree : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3068 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_SpeedTree::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainLayer
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainLayer : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3070 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TerrainLayer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TerrainMaterial
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TerrainMaterial : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3072 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TerrainMaterial::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_TextureWithAlpha
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_TextureWithAlpha : public UGenericBrowserType_Texture
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3074 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_TextureWithAlpha::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIArchetype
// 0x0004 (0x005C - 0x0058)
class UGenericBrowserType_UIArchetype : public UGenericBrowserType_Archetype
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3076 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UIArchetype::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UIScene
// 0x0004 (0x005C - 0x0058)
class UGenericBrowserType_UIScene : public UGenericBrowserType
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3078 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UIScene::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_UISkin
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_UISkin : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3080 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UISkin::pClassPointer = NULL;

// Class UnrealEd.GenericThumbnailLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UGenericThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3082 ];

		return pClassPointer;
	};

};

UClass* UGenericThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.InterpEdOptions
// 0x000C (0x0048 - 0x003C)
class UInterpEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3084 ];

		return pClassPointer;
	};

};

UClass* UInterpEdOptions::pClassPointer = NULL;

// Class UnrealEd.InterpTrackHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3086 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackAnimControlHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackAnimControlHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3088 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAnimControlHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVectorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVectorPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3090 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackVectorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackColorPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackColorPropHelper : public UInterpTrackVectorPropHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3092 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackColorPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackDirectorHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackDirectorHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3094 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackDirectorHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackEventHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackEventHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3096 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackEventHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFaceFXHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFaceFXHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3098 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackFaceFXHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackFloatPropHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackFloatPropHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3100 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackFloatPropHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackParticleReplayHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackParticleReplayHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3102 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackParticleReplayHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackSoundHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackSoundHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3104 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackSoundHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackToggleHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackToggleHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3106 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackToggleHelper::pClassPointer = NULL;

// Class UnrealEd.InterpTrackVisibilityHelper
// 0x0000 (0x003C - 0x003C)
class UInterpTrackVisibilityHelper : public UInterpTrackHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3108 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackVisibilityHelper::pClassPointer = NULL;

// Class UnrealEd.KismetBindings
// 0x0018 (0x0054 - 0x003C)
class UKismetBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x003C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3110 ];

		return pClassPointer;
	};

};

UClass* UKismetBindings::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorOptions
// 0x00A0 (0x00DC - 0x003C)
class ULensFlareEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xA0 ];                            		// 0x003C (0x00A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3112 ];

		return pClassPointer;
	};

};

UClass* ULensFlareEditorOptions::pClassPointer = NULL;

// Class UnrealEd.LensFlareEditorPropertyWrapper
// 0x0148 (0x0184 - 0x003C)
class ULensFlareEditorPropertyWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x148 ];                           		// 0x003C (0x0148) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3114 ];

		return pClassPointer;
	};

};

UClass* ULensFlareEditorPropertyWrapper::pClassPointer = NULL;

// Class UnrealEd.LensFlarePreviewComponent
// 0x0004 (0x01D0 - 0x01CC)
class ULensFlarePreviewComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x01CC (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3116 ];

		return pClassPointer;
	};

};

UClass* ULensFlarePreviewComponent::pClassPointer = NULL;

// Class UnrealEd.LensFlareThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class ULensFlareThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3118 ];

		return pClassPointer;
	};

};

UClass* ULensFlareThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceConstant
// 0x007C (0x00B8 - 0x003C)
class UMaterialEditorInstanceConstant : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x7C ];                            		// 0x003C (0x007C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3120 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorInstanceConstant::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorInstanceTimeVarying
// 0x0080 (0x00BC - 0x003C)
class UMaterialEditorInstanceTimeVarying : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x80 ];                            		// 0x003C (0x0080) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3122 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorInstanceTimeVarying::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorMeshComponent
// 0x0008 (0x0220 - 0x0218)
class UMaterialEditorMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0218 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3124 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorOptions
// 0x0010 (0x004C - 0x003C)
class UMaterialEditorOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3126 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorOptions::pClassPointer = NULL;

// Class UnrealEd.MaterialEditorSkeletalMeshComponent
// 0x0004 (0x04D0 - 0x04CC)
class UMaterialEditorSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x04CC (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3128 ];

		return pClassPointer;
	};

};

UClass* UMaterialEditorSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UMaterialInstanceLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3130 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.MaterialInstanceThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UMaterialInstanceThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3132 ];

		return pClassPointer;
	};

};

UClass* UMaterialInstanceThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.MemCountThumbnailLabelRenderer
// 0x0004 (0x0040 - 0x003C)
class UMemCountThumbnailLabelRenderer : public UThumbnailLabelRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3134 ];

		return pClassPointer;
	};

};

UClass* UMemCountThumbnailLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UParticleSystemLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3136 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.ParticleSystemThumbnailRenderer
// 0x0008 (0x0044 - 0x003C)
class UParticleSystemThumbnailRenderer : public UTextureThumbnailRenderer
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x003C (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3138 ];

		return pClassPointer;
	};

};

UClass* UParticleSystemThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.PhATSimOptions
// 0x004C (0x0088 - 0x003C)
class UPhATSimOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4C ];                            		// 0x003C (0x004C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3140 ];

		return pClassPointer;
	};

};

UClass* UPhATSimOptions::pClassPointer = NULL;

// Class UnrealEd.PhATSkeletalMeshComponent
// 0x0014 (0x04E0 - 0x04CC)
class UPhATSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x04CC (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3142 ];

		return pClassPointer;
	};

};

UClass* UPhATSkeletalMeshComponent::pClassPointer = NULL;

// Class UnrealEd.PhysicsAssetLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPhysicsAssetLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3144 ];

		return pClassPointer;
	};

};

UClass* UPhysicsAssetLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PhysXDestructibleLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPhysXDestructibleLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3146 ];

		return pClassPointer;
	};

};

UClass* UPhysXDestructibleLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PhysXFractureOptions
// 0x000C (0x0048 - 0x003C)
class UPhysXFractureOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3148 ];

		return pClassPointer;
	};

};

UClass* UPhysXFractureOptions::pClassPointer = NULL;

// Class UnrealEd.PropertyDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPropertyDrawProxy : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3150 ];

		return pClassPointer;
	};

};

UClass* UPropertyDrawProxy::pClassPointer = NULL;

// Class UnrealEd.PlayerInputMask_CustomDrawProxy
// 0x0000 (0x003C - 0x003C)
class UPlayerInputMask_CustomDrawProxy : public UPropertyDrawProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3152 ];

		return pClassPointer;
	};

};

UClass* UPlayerInputMask_CustomDrawProxy::pClassPointer = NULL;

// Class UnrealEd.PropertyInputArrayItemBase
// 0x0000 (0x004C - 0x004C)
class UPropertyInputArrayItemBase : public UPropertyInputProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3154 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputArrayItemBase::pClassPointer = NULL;

// Class UnrealEd.PropertyInputBool
// 0x0000 (0x004C - 0x004C)
class UPropertyInputBool : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3156 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputBool::pClassPointer = NULL;

// Class UnrealEd.PlayerInputMask_CustomInputProxy
// 0x0000 (0x004C - 0x004C)
class UPlayerInputMask_CustomInputProxy : public UPropertyInputBool
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3158 ];

		return pClassPointer;
	};

};

UClass* UPlayerInputMask_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.PostProcessLabelRenderer
// 0x0000 (0x003C - 0x003C)
class UPostProcessLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3160 ];

		return pClassPointer;
	};

};

UClass* UPostProcessLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.PrefabThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UPrefabThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3162 ];

		return pClassPointer;
	};

};

UClass* UPrefabThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.PropertyInputCombo
// 0x0004 (0x0050 - 0x004C)
class UPropertyInputCombo : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x004C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3164 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputCombo::pClassPointer = NULL;

// Class UnrealEd.PropertyInputEditInline
// 0x0000 (0x004C - 0x004C)
class UPropertyInputEditInline : public UPropertyInputArrayItemBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3166 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputEditInline::pClassPointer = NULL;

// Class UnrealEd.PropertyInputText
// 0x000C (0x0058 - 0x004C)
class UPropertyInputText : public UPropertyInputArrayItemBase
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x004C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3168 ];

		return pClassPointer;
	};

};

UClass* UPropertyInputText::pClassPointer = NULL;

// Class UnrealEd.SequenceObjectHelper
// 0x0000 (0x003C - 0x003C)
class USequenceObjectHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3170 ];

		return pClassPointer;
	};

};

UClass* USequenceObjectHelper::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USkeletalMeshLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3172 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SkeletalMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class USkeletalMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3174 ];

		return pClassPointer;
	};

};

UClass* USkeletalMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.SoundLabelRenderer
// 0x0000 (0x003C - 0x003C)
class USoundLabelRenderer : public UThumbnailLabelRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3176 ];

		return pClassPointer;
	};

};

UClass* USoundLabelRenderer::pClassPointer = NULL;

// Class UnrealEd.SoundNodeHelper
// 0x0000 (0x003C - 0x003C)
class USoundNodeHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3178 ];

		return pClassPointer;
	};

};

UClass* USoundNodeHelper::pClassPointer = NULL;

// Class UnrealEd.StaticMeshEditorComponent
// 0x0008 (0x0220 - 0x0218)
class UStaticMeshEditorComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0218 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3180 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshEditorComponent::pClassPointer = NULL;

// Class UnrealEd.StaticMeshThumbnailRenderer
// 0x0000 (0x0044 - 0x0044)
class UStaticMeshThumbnailRenderer : public UDefaultSizedThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3182 ];

		return pClassPointer;
	};

};

UClass* UStaticMeshThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.TerrainEditOptions
// 0x00C8 (0x0104 - 0x003C)
class UTerrainEditOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC8 ];                            		// 0x003C (0x00C8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3184 ];

		return pClassPointer;
	};

};

UClass* UTerrainEditOptions::pClassPointer = NULL;

// Class UnrealEd.TextureCubeThumbnailRenderer
// 0x0000 (0x003C - 0x003C)
class UTextureCubeThumbnailRenderer : public UTextureThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3186 ];

		return pClassPointer;
	};

};

UClass* UTextureCubeThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.ThumbnailManager
// 0x008C (0x00C8 - 0x003C)
class UThumbnailManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8C ];                            		// 0x003C (0x008C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3188 ];

		return pClassPointer;
	};

};

UClass* UThumbnailManager::pClassPointer = NULL;

// Class UnrealEd.UIEvent_MetaObjectHelper
// 0x0000 (0x003C - 0x003C)
class UUIEvent_MetaObjectHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3190 ];

		return pClassPointer;
	};

};

UClass* UUIEvent_MetaObjectHelper::pClassPointer = NULL;

// Class UnrealEd.UISceneExporter
// 0x0000 (0x0064 - 0x0064)
class UUISceneExporter : public UExporter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3192 ];

		return pClassPointer;
	};

};

UClass* UUISceneExporter::pClassPointer = NULL;

// Class UnrealEd.UISceneFactory
// 0x0008 (0x0078 - 0x0070)
class UUISceneFactory : public UFactory
{
public:
	class UClass*                                      UISceneClass;                                     		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0074 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3194 ];

		return pClassPointer;
	};

};

UClass* UUISceneFactory::pClassPointer = NULL;

// Class UnrealEd.UISceneFactoryNew
// 0x0000 (0x0078 - 0x0078)
class UUISceneFactoryNew : public UUISceneFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3197 ];

		return pClassPointer;
	};

};

UClass* UUISceneFactoryNew::pClassPointer = NULL;

// Class UnrealEd.UISceneFactoryText
// 0x0000 (0x0078 - 0x0078)
class UUISceneFactoryText : public UUISceneFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3199 ];

		return pClassPointer;
	};

};

UClass* UUISceneFactoryText::pClassPointer = NULL;

// Class UnrealEd.UISceneManager
// 0x0098 (0x00D4 - 0x003C)
class UUISceneManager : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x98 ];                            		// 0x003C (0x0098) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3201 ];

		return pClassPointer;
	};

};

UClass* UUISceneManager::pClassPointer = NULL;

// Class UnrealEd.UISceneThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UUISceneThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3203 ];

		return pClassPointer;
	};

};

UClass* UUISceneThumbnailRenderer::pClassPointer = NULL;

// Class UnrealEd.UISequenceHelper
// 0x0000 (0x003C - 0x003C)
class UUISequenceHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3205 ];

		return pClassPointer;
	};

};

UClass* UUISequenceHelper::pClassPointer = NULL;

// Class UnrealEd.UISequenceObjectHelper
// 0x0000 (0x003C - 0x003C)
class UUISequenceObjectHelper : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3207 ];

		return pClassPointer;
	};

};

UClass* UUISequenceObjectHelper::pClassPointer = NULL;

// Class UnrealEd.UIState_CustomInputProxy
// 0x0000 (0x004C - 0x004C)
class UUIState_CustomInputProxy : public UPropertyInputEditInline
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3209 ];

		return pClassPointer;
	};

};

UClass* UUIState_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.UIStateClass_CustomInputProxy
// 0x0000 (0x0050 - 0x0050)
class UUIStateClass_CustomInputProxy : public UPropertyInputCombo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3211 ];

		return pClassPointer;
	};

};

UClass* UUIStateClass_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.UITexture_CustomDrawProxy
// 0x0000 (0x003C - 0x003C)
class UUITexture_CustomDrawProxy : public UPropertyDrawProxy
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3213 ];

		return pClassPointer;
	};

};

UClass* UUITexture_CustomDrawProxy::pClassPointer = NULL;

// Class UnrealEd.UITexture_CustomInputProxy
// 0x0000 (0x0058 - 0x0058)
class UUITexture_CustomInputProxy : public UPropertyInputText
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3215 ];

		return pClassPointer;
	};

};

UClass* UUITexture_CustomInputProxy::pClassPointer = NULL;

// Class UnrealEd.UnrealEdEngine
// 0x0070 (0x0650 - 0x05E0)
class UUnrealEdEngine : public UEditorEngine
{
public:
	unsigned char                                      UnknownData00[ 0x70 ];                            		// 0x05E0 (0x0070) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3217 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdEngine::pClassPointer = NULL;

// Class UnrealEd.UnrealEdKeyBindings
// 0x000C (0x0048 - 0x003C)
class UUnrealEdKeyBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3219 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdKeyBindings::pClassPointer = NULL;

// Class UnrealEd.UnrealEdOptions
// 0x0058 (0x0094 - 0x003C)
class UUnrealEdOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x58 ];                            		// 0x003C (0x0058) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3221 ];

		return pClassPointer;
	};

};

UClass* UUnrealEdOptions::pClassPointer = NULL;

// Class UnrealEd.CascadeParticleSystemComponent
// 0x0008 (0x02B0 - 0x02A8)
class UCascadeParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x02A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3223 ];

		return pClassPointer;
	};

};

UClass* UCascadeParticleSystemComponent::pClassPointer = NULL;

// Class UnrealEd.CustomPropertyItemBindings
// 0x0048 (0x0084 - 0x003C)
class UCustomPropertyItemBindings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x003C (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3225 ];

		return pClassPointer;
	};

};

UClass* UCustomPropertyItemBindings::pClassPointer = NULL;

// Class UnrealEd.ObjectEditorViewportInput
// 0x0000 (0x00DC - 0x00DC)
class UObjectEditorViewportInput : public UEditorViewportInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3227 ];

		return pClassPointer;
	};

};

UClass* UObjectEditorViewportInput::pClassPointer = NULL;

// Class UnrealEd.SequenceOpHelper_CalloutInputProxy
// 0x0000 (0x003C - 0x003C)
class USequenceOpHelper_CalloutInputProxy : public USequenceObjectHelper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3229 ];

		return pClassPointer;
	};

};

UClass* USequenceOpHelper_CalloutInputProxy::pClassPointer = NULL;

// Class UnrealEd.UIEditorOptions
// 0x003C (0x0078 - 0x003C)
class UUIEditorOptions : public UUIRoot
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3231 ];

		return pClassPointer;
	};

};

UClass* UUIEditorOptions::pClassPointer = NULL;

// Class UnrealEd.UILayer
// 0x0018 (0x0054 - 0x003C)
class UUILayer : public UUILayerBase
{
public:
	unsigned char                                      UnknownData00[ 0x18 ];                            		// 0x003C (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3233 ];

		return pClassPointer;
	};

};

UClass* UUILayer::pClassPointer = NULL;

// Class UnrealEd.UILayerRoot
// 0x0004 (0x0058 - 0x0054)
class UUILayerRoot : public UUILayer
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3235 ];

		return pClassPointer;
	};

};

UClass* UUILayerRoot::pClassPointer = NULL;

// Class UnrealEd.UIPreviewString
// 0x000C (0x00F0 - 0x00E4)
class UUIPreviewString : public UUIString
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x00E4 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3237 ];

		return pClassPointer;
	};

};

UClass* UUIPreviewString::pClassPointer = NULL;

// Class UnrealEd.BeastSettings
// 0x00FC (0x0138 - 0x003C)
class UBeastSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xFC ];                            		// 0x003C (0x00FC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3239 ];

		return pClassPointer;
	};

};

UClass* UBeastSettings::pClassPointer = NULL;

// Class UnrealEd.BeastSettingsReferer
// 0x0010 (0x01D0 - 0x01C0)
class ABeastSettingsReferer : public AInfo
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x01C0 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3241 ];

		return pClassPointer;
	};

};

UClass* ABeastSettingsReferer::pClassPointer = NULL;

// Class UnrealEd.GenericBrowserType_BeastSettings
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_BeastSettings : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3243 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_BeastSettings::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif