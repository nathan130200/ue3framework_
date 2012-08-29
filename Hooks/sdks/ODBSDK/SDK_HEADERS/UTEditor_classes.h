/*
#############################################################################################
# ORION Dino Beatdown (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UTEditor_classes.h
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

// Class UTEditor.GenericBrowserType_UTMapMusicInfo
// 0x0000 (0x0058 - 0x0058)
class UGenericBrowserType_UTMapMusicInfo : public UGenericBrowserType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1930 ];

		return pClassPointer;
	};

};

UClass* UGenericBrowserType_UTMapMusicInfo::pClassPointer = NULL;

// Class UTEditor.UTMapMusicInfoFactoryNew
// 0x0000 (0x0070 - 0x0070)
class UUTMapMusicInfoFactoryNew : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1931 ];

		return pClassPointer;
	};

};

UClass* UUTMapMusicInfoFactoryNew::pClassPointer = NULL;

// Class UTEditor.UTUnrealEdEngine
// 0x0000 (0x0A20 - 0x0A20)
class UUTUnrealEdEngine : public UUnrealEdEngine
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1932 ];

		return pClassPointer;
	};

};

UClass* UUTUnrealEdEngine::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif