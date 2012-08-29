/*
#############################################################################################
# Mass Effect 3 (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontent_classes.h
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

// Class sfxgamecontent.BioSeqAct_ActivateCharacterCreation
// 0x0008 (0x00B8 - 0x00B0)
class UBioSeqAct_ActivateCharacterCreation : public USequenceAction
{
public:
	struct FName                                       m_sCharacterCreationMap;                          		// 0x00B0 (0x0008) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 105658 ];

		return pClassPointer;
	};

	void Activated ( );
};

UClass* UBioSeqAct_ActivateCharacterCreation::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif