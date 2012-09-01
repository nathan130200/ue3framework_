/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUIEditor_classes.h
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

// Class GFxUIEditor.GenericBrowserType_GFxMovie
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_GFxMovie : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1764 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GFxMovie::pClassPointer = NULL;

// Class GFxUIEditor.GenericBrowserType_GFxMovieInfo
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_GFxMovieInfo : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1765 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_GFxMovieInfo::pClassPointer = NULL;

// Class GFxUIEditor.GFxEditor
// 0x0000 (0x003C - 0x003C)
class UGFxEditor : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1766 ];

		return pClassPointer;
	};

};

UClass* UGFxEditor::pClassPointer = NULL;

// Class GFxUIEditor.GFxMovieFactory
// 0x0014 (0x0084 - 0x0070)
class UGFxMovieFactory : public UFactory
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) MISSED OFFSET
	unsigned long                                      Use_GFxExport : 1;                                		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FString                                     GFxExport_Options;                                		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1767 ];

		return pClassPointer;
	};

};

UClass* UGFxMovieFactory::pClassPointer = NULL;

// Class GFxUIEditor.GFxMovieThumbnailRenderer
// 0x0000 (0x004C - 0x004C)
class UGFxMovieThumbnailRenderer : public UIconThumbnailRenderer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1768 ];

		return pClassPointer;
	};

};

UClass* UGFxMovieThumbnailRenderer::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif