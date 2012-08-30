/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AKAudio_classes.h
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

// Class AKAudio.AKAudioDevice
// 0x0000 (0x0158 - 0x0158)
class UAKAudioDevice : public UAudioDevice
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2466 ];

		return pClassPointer;
	};

};

UClass* UAKAudioDevice::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif