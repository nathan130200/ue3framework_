/*
#############################################################################################
# Sanctum (Unknown) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_classes.h
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

// Class WinDrv.FacebookWindows
// 0x0008 (0x0098 - 0x0090)
class UFacebookWindows : public UFacebookIntegration
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0090 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1829 ];

		return pClassPointer;
	};

};

UClass* UFacebookWindows::pClassPointer = NULL;

// Class WinDrv.HttpRequestWindows
// 0x0020 (0x0068 - 0x0048)
class UHttpRequestWindows : public UHttpRequestInterface
{
public:
	unsigned char                                      UnknownData00[ 0x20 ];                            		// 0x0048 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1830 ];

		return pClassPointer;
	};

};

UClass* UHttpRequestWindows::pClassPointer = NULL;

// Class WinDrv.HttpResponseWindows
// 0x0010 (0x004C - 0x003C)
class UHttpResponseWindows : public UHttpResponseInterface
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x003C (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1831 ];

		return pClassPointer;
	};

};

UClass* UHttpResponseWindows::pClassPointer = NULL;

// Class WinDrv.WindowsClient
// 0x018C (0x01DC - 0x0050)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[ 0x14C ];                           		// 0x0050 (0x014C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x019C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[ 0x2C ];                            		// 0x01A0 (0x002C) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x01CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData02[ 0xC ];                             		// 0x01D0 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1832 ];

		return pClassPointer;
	};

};

UClass* UWindowsClient::pClassPointer = NULL;

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0054 - 0x0054)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1833 ];

		return pClassPointer;
	};

};

UClass* UXnaForceFeedbackManager::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif