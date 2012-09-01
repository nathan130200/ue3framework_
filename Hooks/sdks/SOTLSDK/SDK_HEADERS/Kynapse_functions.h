/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Kynapse_functions.h
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

// Function Kynapse.KynapseTeamCreationData.PostInitializeTeam
// [0x00000000] 
// Parameters infos:

void UKynapseTeamCreationData::PostInitializeTeam ( )
{
	static UFunction* pFnPostInitializeTeam = NULL;

	if ( ! pFnPostInitializeTeam )
		pFnPostInitializeTeam = (UFunction*) UObject::GObjObjects()->Data[ 36866 ];

	UKynapseTeamCreationData_execPostInitializeTeam_Parms PostInitializeTeam_Parms;

	this->ProcessEvent ( pFnPostInitializeTeam, &PostInitializeTeam_Parms, NULL );
};

// Function Kynapse.KynapseTeamCreationData.CreateKynapseTeam
// [0x00000000] 
// Parameters infos:

void UKynapseTeamCreationData::CreateKynapseTeam ( )
{
	static UFunction* pFnCreateKynapseTeam = NULL;

	if ( ! pFnCreateKynapseTeam )
		pFnCreateKynapseTeam = (UFunction*) UObject::GObjObjects()->Data[ 36865 ];

	UKynapseTeamCreationData_execCreateKynapseTeam_Parms CreateKynapseTeam_Parms;

	this->ProcessEvent ( pFnCreateKynapseTeam, &CreateKynapseTeam_Parms, NULL );
};

// Function Kynapse.KynapseWorld.ResetAISystem
// [0x00000000] 
// Parameters infos:

void AKynapseWorld::ResetAISystem ( )
{
	static UFunction* pFnResetAISystem = NULL;

	if ( ! pFnResetAISystem )
		pFnResetAISystem = (UFunction*) UObject::GObjObjects()->Data[ 36958 ];

	AKynapseWorld_execResetAISystem_Parms ResetAISystem_Parms;

	this->ProcessEvent ( pFnResetAISystem, &ResetAISystem_Parms, NULL );
};

// Function Kynapse.KynapseWorld.HandleWorldDestruction
// [0x00000000] 
// Parameters infos:

void AKynapseWorld::HandleWorldDestruction ( )
{
	static UFunction* pFnHandleWorldDestruction = NULL;

	if ( ! pFnHandleWorldDestruction )
		pFnHandleWorldDestruction = (UFunction*) UObject::GObjObjects()->Data[ 36957 ];

	AKynapseWorld_execHandleWorldDestruction_Parms HandleWorldDestruction_Parms;

	this->ProcessEvent ( pFnHandleWorldDestruction, &HandleWorldDestruction_Parms, NULL );
};

// Function Kynapse.KynapseWorld.HandleWorldInitialization
// [0x00000000] 
// Parameters infos:

void AKynapseWorld::HandleWorldInitialization ( )
{
	static UFunction* pFnHandleWorldInitialization = NULL;

	if ( ! pFnHandleWorldInitialization )
		pFnHandleWorldInitialization = (UFunction*) UObject::GObjObjects()->Data[ 36956 ];

	AKynapseWorld_execHandleWorldInitialization_Parms HandleWorldInitialization_Parms;

	this->ProcessEvent ( pFnHandleWorldInitialization, &HandleWorldInitialization_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif