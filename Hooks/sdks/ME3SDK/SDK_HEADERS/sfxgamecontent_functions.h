/*
#############################################################################################
# Mass Effect 3 (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: sfxgamecontent_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function sfxgamecontent.BioSeqAct_ActivateCharacterCreation.Activated
// [0x00020002] 
// Parameters infos:

void UBioSeqAct_ActivateCharacterCreation::Activated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 105657 ];

	UBioSeqAct_ActivateCharacterCreation_execActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif