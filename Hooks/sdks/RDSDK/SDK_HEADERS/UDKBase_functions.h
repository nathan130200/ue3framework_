/*
#############################################################################################
# Ravaged Beta (Beta) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: UDKBase_functions.h
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

// Function UDKBase.SimpleGame.SetGameType
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Options                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Portal                         ( CPF_Parm | CPF_NeedCtorLink )

class UClass* ASimpleGame::eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal )
{
	static UFunction* pFnSetGameType = NULL;

	if ( ! pFnSetGameType )
		pFnSetGameType = (UFunction*) UObject::GObjObjects()->Data[ 41202 ];

	ASimpleGame_eventSetGameType_Parms SetGameType_Parms;
	memcpy ( &SetGameType_Parms.MapName, &MapName, 0xC );
	memcpy ( &SetGameType_Parms.Options, &Options, 0xC );
	memcpy ( &SetGameType_Parms.Portal, &Portal, 0xC );

	this->ProcessEvent ( pFnSetGameType, &SetGameType_Parms, NULL );

	return SetGameType_Parms.ReturnValue;
};

// Function UDKBase.SimpleGame.StripPlayOnPrefix
// [0x00022002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString ASimpleGame::StripPlayOnPrefix ( struct FString MapName )
{
	static UFunction* pFnStripPlayOnPrefix = NULL;

	if ( ! pFnStripPlayOnPrefix )
		pFnStripPlayOnPrefix = (UFunction*) UObject::GObjObjects()->Data[ 41199 ];

	ASimpleGame_execStripPlayOnPrefix_Parms StripPlayOnPrefix_Parms;
	memcpy ( &StripPlayOnPrefix_Parms.MapName, &MapName, 0xC );

	this->ProcessEvent ( pFnStripPlayOnPrefix, &StripPlayOnPrefix_Parms, NULL );

	return StripPlayOnPrefix_Parms.ReturnValue;
};

// Function UDKBase.UDKBot.DelayedLeaveVehicle
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKBot::eventDelayedLeaveVehicle ( )
{
	static UFunction* pFnDelayedLeaveVehicle = NULL;

	if ( ! pFnDelayedLeaveVehicle )
		pFnDelayedLeaveVehicle = (UFunction*) UObject::GObjObjects()->Data[ 42197 ];

	AUDKBot_eventDelayedLeaveVehicle_Parms DelayedLeaveVehicle_Parms;

	this->ProcessEvent ( pFnDelayedLeaveVehicle, &DelayedLeaveVehicle_Parms, NULL );
};

// Function UDKBase.UDKBot.DelayedWarning
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKBot::eventDelayedWarning ( )
{
	static UFunction* pFnDelayedWarning = NULL;

	if ( ! pFnDelayedWarning )
		pFnDelayedWarning = (UFunction*) UObject::GObjObjects()->Data[ 42196 ];

	AUDKBot_eventDelayedWarning_Parms DelayedWarning_Parms;

	this->ProcessEvent ( pFnDelayedWarning, &DelayedWarning_Parms, NULL );
};

// Function UDKBase.UDKBot.MissedDodge
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKBot::eventMissedDodge ( )
{
	static UFunction* pFnMissedDodge = NULL;

	if ( ! pFnMissedDodge )
		pFnMissedDodge = (UFunction*) UObject::GObjObjects()->Data[ 42195 ];

	AUDKBot_eventMissedDodge_Parms MissedDodge_Parms;

	this->ProcessEvent ( pFnMissedDodge, &MissedDodge_Parms, NULL );
};

// Function UDKBase.UDKBot.AdjustAimError
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          TargetDist                     ( CPF_Parm )
// unsigned long                  bInstantProj                   ( CPF_Parm )

float AUDKBot::eventAdjustAimError ( float TargetDist, unsigned long bInstantProj )
{
	static UFunction* pFnAdjustAimError = NULL;

	if ( ! pFnAdjustAimError )
		pFnAdjustAimError = (UFunction*) UObject::GObjObjects()->Data[ 42191 ];

	AUDKBot_eventAdjustAimError_Parms AdjustAimError_Parms;
	AdjustAimError_Parms.TargetDist = TargetDist;
	AdjustAimError_Parms.bInstantProj = bInstantProj;

	this->ProcessEvent ( pFnAdjustAimError, &AdjustAimError_Parms, NULL );

	return AdjustAimError_Parms.ReturnValue;
};

// Function UDKBase.UDKBot.SuperDesireability
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APickupFactory*          P                              ( CPF_Parm )

float AUDKBot::eventSuperDesireability ( class APickupFactory* P )
{
	static UFunction* pFnSuperDesireability = NULL;

	if ( ! pFnSuperDesireability )
		pFnSuperDesireability = (UFunction*) UObject::GObjObjects()->Data[ 42188 ];

	AUDKBot_eventSuperDesireability_Parms SuperDesireability_Parms;
	SuperDesireability_Parms.P = P;

	this->ProcessEvent ( pFnSuperDesireability, &SuperDesireability_Parms, NULL );

	return SuperDesireability_Parms.ReturnValue;
};

// Function UDKBase.UDKBot.SpecialJumpCost
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          RequiredJumpZ                  ( CPF_Parm )
// float                          Cost                           ( CPF_Parm | CPF_OutParm )

bool AUDKBot::eventSpecialJumpCost ( float RequiredJumpZ, float* Cost )
{
	static UFunction* pFnSpecialJumpCost = NULL;

	if ( ! pFnSpecialJumpCost )
		pFnSpecialJumpCost = (UFunction*) UObject::GObjObjects()->Data[ 42184 ];

	AUDKBot_eventSpecialJumpCost_Parms SpecialJumpCost_Parms;
	SpecialJumpCost_Parms.RequiredJumpZ = RequiredJumpZ;

	this->ProcessEvent ( pFnSpecialJumpCost, &SpecialJumpCost_Parms, NULL );

	if ( Cost )
		*Cost = SpecialJumpCost_Parms.Cost;

	return SpecialJumpCost_Parms.ReturnValue;
};

// Function UDKBase.UDKBot.MayDodgeToMoveTarget
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKBot::eventMayDodgeToMoveTarget ( )
{
	static UFunction* pFnMayDodgeToMoveTarget = NULL;

	if ( ! pFnMayDodgeToMoveTarget )
		pFnMayDodgeToMoveTarget = (UFunction*) UObject::GObjObjects()->Data[ 42183 ];

	AUDKBot_eventMayDodgeToMoveTarget_Parms MayDodgeToMoveTarget_Parms;

	this->ProcessEvent ( pFnMayDodgeToMoveTarget, &MayDodgeToMoveTarget_Parms, NULL );
};

// Function UDKBase.UDKBot.TimeDJReset
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKBot::eventTimeDJReset ( )
{
	static UFunction* pFnTimeDJReset = NULL;

	if ( ! pFnTimeDJReset )
		pFnTimeDJReset = (UFunction*) UObject::GObjObjects()->Data[ 42182 ];

	AUDKBot_eventTimeDJReset_Parms TimeDJReset_Parms;

	this->ProcessEvent ( pFnTimeDJReset, &TimeDJReset_Parms, NULL );
};

// Function UDKBase.UDKBot.MonitoredPawnAlert
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKBot::eventMonitoredPawnAlert ( )
{
	static UFunction* pFnMonitoredPawnAlert = NULL;

	if ( ! pFnMonitoredPawnAlert )
		pFnMonitoredPawnAlert = (UFunction*) UObject::GObjObjects()->Data[ 42181 ];

	AUDKBot_eventMonitoredPawnAlert_Parms MonitoredPawnAlert_Parms;

	this->ProcessEvent ( pFnMonitoredPawnAlert, &MonitoredPawnAlert_Parms, NULL );
};

// Function UDKBase.UDKBot.WhatToDoNext
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKBot::eventWhatToDoNext ( )
{
	static UFunction* pFnWhatToDoNext = NULL;

	if ( ! pFnWhatToDoNext )
		pFnWhatToDoNext = (UFunction*) UObject::GObjObjects()->Data[ 42180 ];

	AUDKBot_eventWhatToDoNext_Parms WhatToDoNext_Parms;

	this->ProcessEvent ( pFnWhatToDoNext, &WhatToDoNext_Parms, NULL );
};

// Function UDKBase.UDKBot.FindBestSuperPickup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MaxDist                        ( CPF_Parm )

class AActor* AUDKBot::FindBestSuperPickup ( float MaxDist )
{
	static UFunction* pFnFindBestSuperPickup = NULL;

	if ( ! pFnFindBestSuperPickup )
		pFnFindBestSuperPickup = (UFunction*) UObject::GObjObjects()->Data[ 42177 ];

	AUDKBot_execFindBestSuperPickup_Parms FindBestSuperPickup_Parms;
	FindBestSuperPickup_Parms.MaxDist = MaxDist;

	pFnFindBestSuperPickup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindBestSuperPickup, &FindBestSuperPickup_Parms, NULL );

	pFnFindBestSuperPickup->FunctionFlags |= 0x400;

	return FindBestSuperPickup_Parms.ReturnValue;
};

// Function UDKBase.UDKBot.BuildSquadRoute
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AUDKBot::BuildSquadRoute ( )
{
	static UFunction* pFnBuildSquadRoute = NULL;

	if ( ! pFnBuildSquadRoute )
		pFnBuildSquadRoute = (UFunction*) UObject::GObjObjects()->Data[ 42176 ];

	AUDKBot_execBuildSquadRoute_Parms BuildSquadRoute_Parms;

	pFnBuildSquadRoute->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBuildSquadRoute, &BuildSquadRoute_Parms, NULL );

	pFnBuildSquadRoute->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKBot.FindPathToSquadRoute
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bWeightDetours                 ( CPF_OptionalParm | CPF_Parm )

class AActor* AUDKBot::FindPathToSquadRoute ( unsigned long bWeightDetours )
{
	static UFunction* pFnFindPathToSquadRoute = NULL;

	if ( ! pFnFindPathToSquadRoute )
		pFnFindPathToSquadRoute = (UFunction*) UObject::GObjObjects()->Data[ 42173 ];

	AUDKBot_execFindPathToSquadRoute_Parms FindPathToSquadRoute_Parms;
	FindPathToSquadRoute_Parms.bWeightDetours = bWeightDetours;

	pFnFindPathToSquadRoute->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindPathToSquadRoute, &FindPathToSquadRoute_Parms, NULL );

	pFnFindPathToSquadRoute->FunctionFlags |= 0x400;

	return FindPathToSquadRoute_Parms.ReturnValue;
};

// Function UDKBase.UDKBot.FindBestInventoryPath
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MinWeight                      ( CPF_Parm | CPF_OutParm )

class AActor* AUDKBot::FindBestInventoryPath ( float* MinWeight )
{
	static UFunction* pFnFindBestInventoryPath = NULL;

	if ( ! pFnFindBestInventoryPath )
		pFnFindBestInventoryPath = (UFunction*) UObject::GObjObjects()->Data[ 42170 ];

	AUDKBot_execFindBestInventoryPath_Parms FindBestInventoryPath_Parms;

	pFnFindBestInventoryPath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindBestInventoryPath, &FindBestInventoryPath_Parms, NULL );

	pFnFindBestInventoryPath->FunctionFlags |= 0x400;

	if ( MinWeight )
		*MinWeight = FindBestInventoryPath_Parms.MinWeight;

	return FindBestInventoryPath_Parms.ReturnValue;
};

// Function UDKBase.UDKBot.CanMakePathTo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )

bool AUDKBot::CanMakePathTo ( class AActor* A )
{
	static UFunction* pFnCanMakePathTo = NULL;

	if ( ! pFnCanMakePathTo )
		pFnCanMakePathTo = (UFunction*) UObject::GObjObjects()->Data[ 42167 ];

	AUDKBot_execCanMakePathTo_Parms CanMakePathTo_Parms;
	CanMakePathTo_Parms.A = A;

	pFnCanMakePathTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCanMakePathTo, &CanMakePathTo_Parms, NULL );

	pFnCanMakePathTo->FunctionFlags |= 0x400;

	return CanMakePathTo_Parms.ReturnValue;
};

// Function UDKBase.UDKBot.LatentWhatToDoNext
// [0x00020409] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AUDKBot::LatentWhatToDoNext ( )
{
	static UFunction* pFnLatentWhatToDoNext = NULL;

	if ( ! pFnLatentWhatToDoNext )
		pFnLatentWhatToDoNext = (UFunction*) UObject::GObjObjects()->Data[ 42166 ];

	AUDKBot_execLatentWhatToDoNext_Parms LatentWhatToDoNext_Parms;

	pFnLatentWhatToDoNext->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLatentWhatToDoNext, &LatentWhatToDoNext_Parms, NULL );

	pFnLatentWhatToDoNext->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKBot.WaitToSeeEnemy
// [0x00020409] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AUDKBot::WaitToSeeEnemy ( )
{
	static UFunction* pFnWaitToSeeEnemy = NULL;

	if ( ! pFnWaitToSeeEnemy )
		pFnWaitToSeeEnemy = (UFunction*) UObject::GObjObjects()->Data[ 42165 ];

	AUDKBot_execWaitToSeeEnemy_Parms WaitToSeeEnemy_Parms;

	pFnWaitToSeeEnemy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWaitToSeeEnemy, &WaitToSeeEnemy_Parms, NULL );

	pFnWaitToSeeEnemy->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKBot.ReceiveRunOverWarning
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AUDKVehicle*             V                              ( CPF_Parm )
// float                          projSpeed                      ( CPF_Parm )
// struct FVector                 VehicleDir                     ( CPF_Parm )

void AUDKBot::eventReceiveRunOverWarning ( class AUDKVehicle* V, float projSpeed, struct FVector VehicleDir )
{
	static UFunction* pFnReceiveRunOverWarning = NULL;

	if ( ! pFnReceiveRunOverWarning )
		pFnReceiveRunOverWarning = (UFunction*) UObject::GObjObjects()->Data[ 42161 ];

	AUDKBot_eventReceiveRunOverWarning_Parms ReceiveRunOverWarning_Parms;
	ReceiveRunOverWarning_Parms.V = V;
	ReceiveRunOverWarning_Parms.projSpeed = projSpeed;
	memcpy ( &ReceiveRunOverWarning_Parms.VehicleDir, &VehicleDir, 0xC );

	this->ProcessEvent ( pFnReceiveRunOverWarning, &ReceiveRunOverWarning_Parms, NULL );
};

// Function UDKBase.UDKBot.ExecuteWhatToDoNext
// [0x00080800] ( FUNC_Event )
// Parameters infos:

void AUDKBot::eventExecuteWhatToDoNext ( )
{
	static UFunction* pFnExecuteWhatToDoNext = NULL;

	if ( ! pFnExecuteWhatToDoNext )
		pFnExecuteWhatToDoNext = (UFunction*) UObject::GObjObjects()->Data[ 42160 ];

	AUDKBot_eventExecuteWhatToDoNext_Parms ExecuteWhatToDoNext_Parms;

	this->ProcessEvent ( pFnExecuteWhatToDoNext, &ExecuteWhatToDoNext_Parms, NULL );
};

// Function UDKBase.UDKBot.FaceActor
// [0x00020000] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          StrafingModifier               ( CPF_Parm )

class AActor* AUDKBot::FaceActor ( float StrafingModifier )
{
	static UFunction* pFnFaceActor = NULL;

	if ( ! pFnFaceActor )
		pFnFaceActor = (UFunction*) UObject::GObjObjects()->Data[ 42157 ];

	AUDKBot_execFaceActor_Parms FaceActor_Parms;
	FaceActor_Parms.StrafingModifier = StrafingModifier;

	this->ProcessEvent ( pFnFaceActor, &FaceActor_Parms, NULL );

	return FaceActor_Parms.ReturnValue;
};

// Function UDKBase.UDKCarriedObject.GetTeamNum
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUDKCarriedObject::GetTeamNum ( )
{
	static UFunction* pFnGetTeamNum = NULL;

	if ( ! pFnGetTeamNum )
		pFnGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 42214 ];

	AUDKCarriedObject_execGetTeamNum_Parms GetTeamNum_Parms;

	pFnGetTeamNum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTeamNum, &GetTeamNum_Parms, NULL );

	pFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Parms.ReturnValue;
};

// Function UDKBase.UDKCarriedObject.OnBaseChainChanged
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AUDKCarriedObject::eventOnBaseChainChanged ( )
{
	static UFunction* pFnOnBaseChainChanged = NULL;

	if ( ! pFnOnBaseChainChanged )
		pFnOnBaseChainChanged = (UFunction*) UObject::GObjObjects()->Data[ 42213 ];

	AUDKCarriedObject_eventOnBaseChainChanged_Parms OnBaseChainChanged_Parms;

	this->ProcessEvent ( pFnOnBaseChainChanged, &OnBaseChainChanged_Parms, NULL );
};

// Function UDKBase.UDKCarriedObject.NotReachableBy
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUDKCarriedObject::eventNotReachableBy ( class APawn* P )
{
	static UFunction* pFnNotReachableBy = NULL;

	if ( ! pFnNotReachableBy )
		pFnNotReachableBy = (UFunction*) UObject::GObjObjects()->Data[ 42211 ];

	AUDKCarriedObject_eventNotReachableBy_Parms NotReachableBy_Parms;
	NotReachableBy_Parms.P = P;

	this->ProcessEvent ( pFnNotReachableBy, &NotReachableBy_Parms, NULL );
};

// Function UDKBase.UDKCarriedObject.SetHUDLocation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 NewHUDLocation                 ( CPF_Parm )

void AUDKCarriedObject::SetHUDLocation ( struct FVector NewHUDLocation )
{
	static UFunction* pFnSetHUDLocation = NULL;

	if ( ! pFnSetHUDLocation )
		pFnSetHUDLocation = (UFunction*) UObject::GObjObjects()->Data[ 42209 ];

	AUDKCarriedObject_execSetHUDLocation_Parms SetHUDLocation_Parms;
	memcpy ( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

	pFnSetHUDLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDLocation, &SetHUDLocation_Parms, NULL );

	pFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKDataStore_GameSearchBase.HasExistingSearchResults
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UUDKDataStore_GameSearchBase::HasExistingSearchResults ( )
{
	static UFunction* pFnHasExistingSearchResults = NULL;

	if ( ! pFnHasExistingSearchResults )
		pFnHasExistingSearchResults = (UFunction*) UObject::GObjObjects()->Data[ 42230 ];

	UUDKDataStore_GameSearchBase_execHasExistingSearchResults_Parms HasExistingSearchResults_Parms;

	this->ProcessEvent ( pFnHasExistingSearchResults, &HasExistingSearchResults_Parms, NULL );

	return HasExistingSearchResults_Parms.ReturnValue;
};

// Function UDKBase.UDKDataStore_GameSearchBase.HasOutstandingQueries
// [0x00024002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bRestrictCheckToSelf           ( CPF_OptionalParm | CPF_Parm )

bool UUDKDataStore_GameSearchBase::HasOutstandingQueries ( unsigned long bRestrictCheckToSelf )
{
	static UFunction* pFnHasOutstandingQueries = NULL;

	if ( ! pFnHasOutstandingQueries )
		pFnHasOutstandingQueries = (UFunction*) UObject::GObjObjects()->Data[ 42225 ];

	UUDKDataStore_GameSearchBase_execHasOutstandingQueries_Parms HasOutstandingQueries_Parms;
	HasOutstandingQueries_Parms.bRestrictCheckToSelf = bRestrictCheckToSelf;

	this->ProcessEvent ( pFnHasOutstandingQueries, &HasOutstandingQueries_Parms, NULL );

	return HasOutstandingQueries_Parms.ReturnValue;
};

// Function UDKBase.UDKDataStore_GameSearchBase.OnSearchComplete
// [0x00020002] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UUDKDataStore_GameSearchBase::OnSearchComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnSearchComplete = NULL;

	if ( ! pFnOnSearchComplete )
		pFnOnSearchComplete = (UFunction*) UObject::GObjObjects()->Data[ 42223 ];

	UUDKDataStore_GameSearchBase_execOnSearchComplete_Parms OnSearchComplete_Parms;
	OnSearchComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnSearchComplete, &OnSearchComplete_Parms, NULL );
};

// Function UDKBase.UDKDataStore_GameSearchBase.SubmitGameSearch
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  ControllerIndex                ( CPF_Parm )
// unsigned long                  bInvalidateExistingSearchResults ( CPF_OptionalParm | CPF_Parm )

bool UUDKDataStore_GameSearchBase::eventSubmitGameSearch ( unsigned char ControllerIndex, unsigned long bInvalidateExistingSearchResults )
{
	static UFunction* pFnSubmitGameSearch = NULL;

	if ( ! pFnSubmitGameSearch )
		pFnSubmitGameSearch = (UFunction*) UObject::GObjObjects()->Data[ 42218 ];

	UUDKDataStore_GameSearchBase_eventSubmitGameSearch_Parms SubmitGameSearch_Parms;
	SubmitGameSearch_Parms.ControllerIndex = ControllerIndex;
	SubmitGameSearch_Parms.bInvalidateExistingSearchResults = bInvalidateExistingSearchResults;

	this->ProcessEvent ( pFnSubmitGameSearch, &SubmitGameSearch_Parms, NULL );

	return SubmitGameSearch_Parms.ReturnValue;
};

// Function UDKBase.UDKDataStore_GameSearchBase.Init
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUDKDataStore_GameSearchBase::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 42217 ];

	UUDKDataStore_GameSearchBase_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function UDKBase.UDKEmitCameraEffect.UpdateLocation
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// float                          CamFOVDeg                      ( CPF_Parm )
// struct FVector                 CamLoc                         ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FRotator                CamRot                         ( CPF_Const | CPF_Parm | CPF_OutParm )

void AUDKEmitCameraEffect::UpdateLocation ( float CamFOVDeg, struct FVector* CamLoc, struct FRotator* CamRot )
{
	static UFunction* pFnUpdateLocation = NULL;

	if ( ! pFnUpdateLocation )
		pFnUpdateLocation = (UFunction*) UObject::GObjObjects()->Data[ 42239 ];

	AUDKEmitCameraEffect_execUpdateLocation_Parms UpdateLocation_Parms;
	UpdateLocation_Parms.CamFOVDeg = CamFOVDeg;

	pFnUpdateLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateLocation, &UpdateLocation_Parms, NULL );

	pFnUpdateLocation->FunctionFlags |= 0x400;

	if ( CamLoc )
		memcpy ( CamLoc, &UpdateLocation_Parms.CamLoc, 0xC );

	if ( CamRot )
		memcpy ( CamRot, &UpdateLocation_Parms.CamRot, 0xC );
};

// Function UDKBase.UDKEmitCameraEffect.RegisterCamera
// [0x00020002] 
// Parameters infos:
// class AUDKPlayerController*    inCam                          ( CPF_Parm )

void AUDKEmitCameraEffect::RegisterCamera ( class AUDKPlayerController* inCam )
{
	static UFunction* pFnRegisterCamera = NULL;

	if ( ! pFnRegisterCamera )
		pFnRegisterCamera = (UFunction*) UObject::GObjObjects()->Data[ 42237 ];

	AUDKEmitCameraEffect_execRegisterCamera_Parms RegisterCamera_Parms;
	RegisterCamera_Parms.inCam = inCam;

	this->ProcessEvent ( pFnRegisterCamera, &RegisterCamera_Parms, NULL );
};

// Function UDKBase.UDKEmitCameraEffect.Destroyed
// [0x00020002] 
// Parameters infos:

void AUDKEmitCameraEffect::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 42236 ];

	AUDKEmitCameraEffect_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function UDKBase.UDKEmitCameraEffect.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUDKEmitCameraEffect::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42235 ];

	AUDKEmitCameraEffect_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UDKBase.UDKEmitterPool.SpawnExplosionLight
// [0x00024002] 
// Parameters infos:
// class UUDKExplosionLight*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class UClass*                  LightClass                     ( CPF_Parm )
// struct FVector                 SpawnLocation                  ( CPF_Parm )
// class AActor*                  AttachToActor                  ( CPF_OptionalParm | CPF_Parm )

class UUDKExplosionLight* AUDKEmitterPool::SpawnExplosionLight ( class UClass* LightClass, struct FVector SpawnLocation, class AActor* AttachToActor )
{
	static UFunction* pFnSpawnExplosionLight = NULL;

	if ( ! pFnSpawnExplosionLight )
		pFnSpawnExplosionLight = (UFunction*) UObject::GObjObjects()->Data[ 42265 ];

	AUDKEmitterPool_execSpawnExplosionLight_Parms SpawnExplosionLight_Parms;
	SpawnExplosionLight_Parms.LightClass = LightClass;
	memcpy ( &SpawnExplosionLight_Parms.SpawnLocation, &SpawnLocation, 0xC );
	SpawnExplosionLight_Parms.AttachToActor = AttachToActor;

	this->ProcessEvent ( pFnSpawnExplosionLight, &SpawnExplosionLight_Parms, NULL );

	return SpawnExplosionLight_Parms.ReturnValue;
};

// Function UDKBase.UDKEmitterPool.OnExplosionLightFinished
// [0x00020002] 
// Parameters infos:
// class UUDKExplosionLight*      Light                          ( CPF_Parm | CPF_EditInline )

void AUDKEmitterPool::OnExplosionLightFinished ( class UUDKExplosionLight* Light )
{
	static UFunction* pFnOnExplosionLightFinished = NULL;

	if ( ! pFnOnExplosionLightFinished )
		pFnOnExplosionLightFinished = (UFunction*) UObject::GObjObjects()->Data[ 42262 ];

	AUDKEmitterPool_execOnExplosionLightFinished_Parms OnExplosionLightFinished_Parms;
	OnExplosionLightFinished_Parms.Light = Light;

	this->ProcessEvent ( pFnOnExplosionLightFinished, &OnExplosionLightFinished_Parms, NULL );
};

// Function UDKBase.UDKEmitterPool.SpawnEmitter
// [0x00024002] 
// Parameters infos:
// class UParticleSystemComponent* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class UParticleSystem*         EmitterTemplate                ( CPF_Parm )
// struct FVector                 SpawnLocation                  ( CPF_Parm )
// struct FRotator                SpawnRotation                  ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  AttachToActor                  ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  InInstigator                   ( CPF_OptionalParm | CPF_Parm )
// int                            MaxDLEPooledReuses             ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bInheritScaleFromBase          ( CPF_OptionalParm | CPF_Parm )

class UParticleSystemComponent* AUDKEmitterPool::SpawnEmitter ( class UParticleSystem* EmitterTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* AttachToActor, class AActor* InInstigator, int MaxDLEPooledReuses, unsigned long bInheritScaleFromBase )
{
	static UFunction* pFnSpawnEmitter = NULL;

	if ( ! pFnSpawnEmitter )
		pFnSpawnEmitter = (UFunction*) UObject::GObjObjects()->Data[ 42250 ];

	AUDKEmitterPool_execSpawnEmitter_Parms SpawnEmitter_Parms;
	SpawnEmitter_Parms.EmitterTemplate = EmitterTemplate;
	memcpy ( &SpawnEmitter_Parms.SpawnLocation, &SpawnLocation, 0xC );
	memcpy ( &SpawnEmitter_Parms.SpawnRotation, &SpawnRotation, 0xC );
	SpawnEmitter_Parms.AttachToActor = AttachToActor;
	SpawnEmitter_Parms.InInstigator = InInstigator;
	SpawnEmitter_Parms.MaxDLEPooledReuses = MaxDLEPooledReuses;
	SpawnEmitter_Parms.bInheritScaleFromBase = bInheritScaleFromBase;

	this->ProcessEvent ( pFnSpawnEmitter, &SpawnEmitter_Parms, NULL );

	return SpawnEmitter_Parms.ReturnValue;
};

// Function UDKBase.UDKExplosionLight.OnLightFinished
// [0x00120000] 
// Parameters infos:
// class UUDKExplosionLight*      Light                          ( CPF_Parm | CPF_EditInline )

void UUDKExplosionLight::OnLightFinished ( class UUDKExplosionLight* Light )
{
	static UFunction* pFnOnLightFinished = NULL;

	if ( ! pFnOnLightFinished )
		pFnOnLightFinished = (UFunction*) UObject::GObjObjects()->Data[ 42277 ];

	UUDKExplosionLight_execOnLightFinished_Parms OnLightFinished_Parms;
	OnLightFinished_Parms.Light = Light;

	this->ProcessEvent ( pFnOnLightFinished, &OnLightFinished_Parms, NULL );
};

// Function UDKBase.UDKExplosionLight.ResetLight
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UUDKExplosionLight::ResetLight ( )
{
	static UFunction* pFnResetLight = NULL;

	if ( ! pFnResetLight )
		pFnResetLight = (UFunction*) UObject::GObjObjects()->Data[ 42287 ];

	UUDKExplosionLight_execResetLight_Parms ResetLight_Parms;

	pFnResetLight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetLight, &ResetLight_Parms, NULL );

	pFnResetLight->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKForcedDirectionVolume.StopsProjectile
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AProjectile*             P                              ( CPF_Parm )

bool AUDKForcedDirectionVolume::StopsProjectile ( class AProjectile* P )
{
	static UFunction* pFnStopsProjectile = NULL;

	if ( ! pFnStopsProjectile )
		pFnStopsProjectile = (UFunction*) UObject::GObjObjects()->Data[ 42314 ];

	AUDKForcedDirectionVolume_execStopsProjectile_Parms StopsProjectile_Parms;
	StopsProjectile_Parms.P = P;

	this->ProcessEvent ( pFnStopsProjectile, &StopsProjectile_Parms, NULL );

	return StopsProjectile_Parms.ReturnValue;
};

// Function UDKBase.UDKForcedDirectionVolume.UnTouch
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AUDKForcedDirectionVolume::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 42310 ];

	AUDKForcedDirectionVolume_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function UDKBase.UDKForcedDirectionVolume.Touch
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AUDKForcedDirectionVolume::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 42301 ];

	AUDKForcedDirectionVolume_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function UDKBase.UDKForcedDirectionVolume.ActorEnteredVolume
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AUDKForcedDirectionVolume::eventActorEnteredVolume ( class AActor* Other )
{
	static UFunction* pFnActorEnteredVolume = NULL;

	if ( ! pFnActorEnteredVolume )
		pFnActorEnteredVolume = (UFunction*) UObject::GObjObjects()->Data[ 42299 ];

	AUDKForcedDirectionVolume_eventActorEnteredVolume_Parms ActorEnteredVolume_Parms;
	ActorEnteredVolume_Parms.Other = Other;

	this->ProcessEvent ( pFnActorEnteredVolume, &ActorEnteredVolume_Parms, NULL );
};

// Function UDKBase.UDKForcedDirectionVolume.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AUDKForcedDirectionVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42298 ];

	AUDKForcedDirectionVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UDKBase.UDKGameInteraction.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:

void UUDKGameInteraction::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 42324 ];

	UUDKGameInteraction_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );
};

// Function UDKBase.UDKGameInteraction.BlockUIInput
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bBlock                         ( CPF_Parm )

void UUDKGameInteraction::eventBlockUIInput ( unsigned long bBlock )
{
	static UFunction* pFnBlockUIInput = NULL;

	if ( ! pFnBlockUIInput )
		pFnBlockUIInput = (UFunction*) UObject::GObjObjects()->Data[ 42322 ];

	UUDKGameInteraction_eventBlockUIInput_Parms BlockUIInput_Parms;
	BlockUIInput_Parms.bBlock = bBlock;

	this->ProcessEvent ( pFnBlockUIInput, &BlockUIInput_Parms, NULL );
};

// Function UDKBase.UDKGameInteraction.ClearUIInputBlocks
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUDKGameInteraction::eventClearUIInputBlocks ( )
{
	static UFunction* pFnClearUIInputBlocks = NULL;

	if ( ! pFnClearUIInputBlocks )
		pFnClearUIInputBlocks = (UFunction*) UObject::GObjObjects()->Data[ 42321 ];

	UUDKGameInteraction_eventClearUIInputBlocks_Parms ClearUIInputBlocks_Parms;

	this->ProcessEvent ( pFnClearUIInputBlocks, &ClearUIInputBlocks_Parms, NULL );
};

// Function UDKBase.UDKGameInteraction.ShouldProcessUIInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UUDKGameInteraction::ShouldProcessUIInput ( )
{
	static UFunction* pFnShouldProcessUIInput = NULL;

	if ( ! pFnShouldProcessUIInput )
		pFnShouldProcessUIInput = (UFunction*) UObject::GObjObjects()->Data[ 42319 ];

	UUDKGameInteraction_execShouldProcessUIInput_Parms ShouldProcessUIInput_Parms;

	pFnShouldProcessUIInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldProcessUIInput, &ShouldProcessUIInput_Parms, NULL );

	pFnShouldProcessUIInput->FunctionFlags |= 0x400;

	return ShouldProcessUIInput_Parms.ReturnValue;
};

// Function UDKBase.UDKGameObjective.GetTeamNum
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUDKGameObjective::GetTeamNum ( )
{
	static UFunction* pFnGetTeamNum = NULL;

	if ( ! pFnGetTeamNum )
		pFnGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 42351 ];

	AUDKGameObjective_execGetTeamNum_Parms GetTeamNum_Parms;

	pFnGetTeamNum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTeamNum, &GetTeamNum_Parms, NULL );

	pFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Parms.ReturnValue;
};

// Function UDKBase.UDKGameObjective.DrawIcon
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 IconLocation                   ( CPF_Parm )
// float                          IconWidth                      ( CPF_Parm )
// float                          IconAlpha                      ( CPF_Parm )
// class AUDKPlayerController*    PlayerOwner                    ( CPF_Parm )
// struct FLinearColor            DrawColor                      ( CPF_Parm )

void AUDKGameObjective::DrawIcon ( class UCanvas* Canvas, struct FVector IconLocation, float IconWidth, float IconAlpha, class AUDKPlayerController* PlayerOwner, struct FLinearColor DrawColor )
{
	static UFunction* pFnDrawIcon = NULL;

	if ( ! pFnDrawIcon )
		pFnDrawIcon = (UFunction*) UObject::GObjObjects()->Data[ 42344 ];

	AUDKGameObjective_execDrawIcon_Parms DrawIcon_Parms;
	DrawIcon_Parms.Canvas = Canvas;
	memcpy ( &DrawIcon_Parms.IconLocation, &IconLocation, 0xC );
	DrawIcon_Parms.IconWidth = IconWidth;
	DrawIcon_Parms.IconAlpha = IconAlpha;
	DrawIcon_Parms.PlayerOwner = PlayerOwner;
	memcpy ( &DrawIcon_Parms.DrawColor, &DrawColor, 0x10 );

	pFnDrawIcon->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawIcon, &DrawIcon_Parms, NULL );

	pFnDrawIcon->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKGameObjective.SetHUDLocation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 NewHUDLocation                 ( CPF_Parm )

void AUDKGameObjective::SetHUDLocation ( struct FVector NewHUDLocation )
{
	static UFunction* pFnSetHUDLocation = NULL;

	if ( ! pFnSetHUDLocation )
		pFnSetHUDLocation = (UFunction*) UObject::GObjObjects()->Data[ 42342 ];

	AUDKGameObjective_execSetHUDLocation_Parms SetHUDLocation_Parms;
	memcpy ( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

	pFnSetHUDLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDLocation, &SetHUDLocation_Parms, NULL );

	pFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKGameObjective.TriggerFlagEvent
// [0x00020000] 
// Parameters infos:
// struct FName                   EventType                      ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )

void AUDKGameObjective::TriggerFlagEvent ( struct FName EventType, class AController* EventInstigator )
{
	static UFunction* pFnTriggerFlagEvent = NULL;

	if ( ! pFnTriggerFlagEvent )
		pFnTriggerFlagEvent = (UFunction*) UObject::GObjObjects()->Data[ 42339 ];

	AUDKGameObjective_execTriggerFlagEvent_Parms TriggerFlagEvent_Parms;
	memcpy ( &TriggerFlagEvent_Parms.EventType, &EventType, 0x8 );
	TriggerFlagEvent_Parms.EventInstigator = EventInstigator;

	this->ProcessEvent ( pFnTriggerFlagEvent, &TriggerFlagEvent_Parms, NULL );
};

// Function UDKBase.UDKGameObjective.BotNearObjective
// [0x00020000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AAIController*           C                              ( CPF_Parm )

bool AUDKGameObjective::BotNearObjective ( class AAIController* C )
{
	static UFunction* pFnBotNearObjective = NULL;

	if ( ! pFnBotNearObjective )
		pFnBotNearObjective = (UFunction*) UObject::GObjObjects()->Data[ 42336 ];

	AUDKGameObjective_execBotNearObjective_Parms BotNearObjective_Parms;
	BotNearObjective_Parms.C = C;

	this->ProcessEvent ( pFnBotNearObjective, &BotNearObjective_Parms, NULL );

	return BotNearObjective_Parms.ReturnValue;
};

// Function UDKBase.UDKGameObjective.GetBestViewTarget
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* AUDKGameObjective::eventGetBestViewTarget ( )
{
	static UFunction* pFnGetBestViewTarget = NULL;

	if ( ! pFnGetBestViewTarget )
		pFnGetBestViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 42334 ];

	AUDKGameObjective_eventGetBestViewTarget_Parms GetBestViewTarget_Parms;

	this->ProcessEvent ( pFnGetBestViewTarget, &GetBestViewTarget_Parms, NULL );

	return GetBestViewTarget_Parms.ReturnValue;
};

// Function UDKBase.UDKGameObjective.ObjectiveChanged
// [0x00020000] 
// Parameters infos:

void AUDKGameObjective::ObjectiveChanged ( )
{
	static UFunction* pFnObjectiveChanged = NULL;

	if ( ! pFnObjectiveChanged )
		pFnObjectiveChanged = (UFunction*) UObject::GObjObjects()->Data[ 42333 ];

	AUDKGameObjective_execObjectiveChanged_Parms ObjectiveChanged_Parms;

	this->ProcessEvent ( pFnObjectiveChanged, &ObjectiveChanged_Parms, NULL );
};

// Function UDKBase.UDKGameSettingsCommon.BlobToString
// [0x00422400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 InBlob                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UUDKGameSettingsCommon::BlobToString ( struct FString* InBlob )
{
	static UFunction* pFnBlobToString = NULL;

	if ( ! pFnBlobToString )
		pFnBlobToString = (UFunction*) UObject::GObjObjects()->Data[ 42358 ];

	UUDKGameSettingsCommon_execBlobToString_Parms BlobToString_Parms;

	pFnBlobToString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnBlobToString, &BlobToString_Parms, NULL );

	pFnBlobToString->FunctionFlags |= 0x400;

	if ( InBlob )
		memcpy ( InBlob, &BlobToString_Parms.InBlob, 0xC );

	return BlobToString_Parms.ReturnValue;
};

// Function UDKBase.UDKGameSettingsCommon.StringToBlob
// [0x00422400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InString                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 OutBlob                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UUDKGameSettingsCommon::StringToBlob ( struct FString* InString, struct FString* OutBlob )
{
	static UFunction* pFnStringToBlob = NULL;

	if ( ! pFnStringToBlob )
		pFnStringToBlob = (UFunction*) UObject::GObjObjects()->Data[ 42354 ];

	UUDKGameSettingsCommon_execStringToBlob_Parms StringToBlob_Parms;

	pFnStringToBlob->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStringToBlob, &StringToBlob_Parms, NULL );

	pFnStringToBlob->FunctionFlags |= 0x400;

	if ( InString )
		memcpy ( InString, &StringToBlob_Parms.InString, 0xC );

	if ( OutBlob )
		memcpy ( OutBlob, &StringToBlob_Parms.OutBlob, 0xC );

	return StringToBlob_Parms.ReturnValue;
};

// Function UDKBase.UDKGameViewportClient.LoadRandomLocalizedHintMessage
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Category1Name                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Category2Name                  ( CPF_Parm | CPF_NeedCtorLink )

struct FString UUDKGameViewportClient::LoadRandomLocalizedHintMessage ( struct FString Category1Name, struct FString Category2Name )
{
	static UFunction* pFnLoadRandomLocalizedHintMessage = NULL;

	if ( ! pFnLoadRandomLocalizedHintMessage )
		pFnLoadRandomLocalizedHintMessage = (UFunction*) UObject::GObjObjects()->Data[ 42362 ];

	UUDKGameViewportClient_execLoadRandomLocalizedHintMessage_Parms LoadRandomLocalizedHintMessage_Parms;
	memcpy ( &LoadRandomLocalizedHintMessage_Parms.Category1Name, &Category1Name, 0xC );
	memcpy ( &LoadRandomLocalizedHintMessage_Parms.Category2Name, &Category2Name, 0xC );

	pFnLoadRandomLocalizedHintMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadRandomLocalizedHintMessage, &LoadRandomLocalizedHintMessage_Parms, NULL );

	pFnLoadRandomLocalizedHintMessage->FunctionFlags |= 0x400;

	return LoadRandomLocalizedHintMessage_Parms.ReturnValue;
};

// Function UDKBase.UDKHUD.TranslateBindToFont
// [0x00422400] ( FUNC_Native )
// Parameters infos:
// struct FString                 InBindStr                      ( CPF_Parm | CPF_NeedCtorLink )
// class UFont*                   DrawFont                       ( CPF_Parm | CPF_OutParm )
// struct FString                 OutBindStr                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AUDKHUD::TranslateBindToFont ( struct FString InBindStr, class UFont** DrawFont, struct FString* OutBindStr )
{
	static UFunction* pFnTranslateBindToFont = NULL;

	if ( ! pFnTranslateBindToFont )
		pFnTranslateBindToFont = (UFunction*) UObject::GObjObjects()->Data[ 41523 ];

	AUDKHUD_execTranslateBindToFont_Parms TranslateBindToFont_Parms;
	memcpy ( &TranslateBindToFont_Parms.InBindStr, &InBindStr, 0xC );

	pFnTranslateBindToFont->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTranslateBindToFont, &TranslateBindToFont_Parms, NULL );

	pFnTranslateBindToFont->FunctionFlags |= 0x400;

	if ( DrawFont )
		*DrawFont = TranslateBindToFont_Parms.DrawFont;

	if ( OutBindStr )
		memcpy ( OutBindStr, &TranslateBindToFont_Parms.OutBindStr, 0xC );
};

// Function UDKBase.UDKHUD.DrawGlowText
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// float                          MaxHeightInPixels              ( CPF_OptionalParm | CPF_Parm )
// float                          PulseTime                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRightJustified                ( CPF_OptionalParm | CPF_Parm )

void AUDKHUD::DrawGlowText ( struct FString Text, float X, float Y, float MaxHeightInPixels, float PulseTime, unsigned long bRightJustified )
{
	static UFunction* pFnDrawGlowText = NULL;

	if ( ! pFnDrawGlowText )
		pFnDrawGlowText = (UFunction*) UObject::GObjObjects()->Data[ 41516 ];

	AUDKHUD_execDrawGlowText_Parms DrawGlowText_Parms;
	memcpy ( &DrawGlowText_Parms.Text, &Text, 0xC );
	DrawGlowText_Parms.X = X;
	DrawGlowText_Parms.Y = Y;
	DrawGlowText_Parms.MaxHeightInPixels = MaxHeightInPixels;
	DrawGlowText_Parms.PulseTime = PulseTime;
	DrawGlowText_Parms.bRightJustified = bRightJustified;

	pFnDrawGlowText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawGlowText, &DrawGlowText_Parms, NULL );

	pFnDrawGlowText->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKJumpPad.SuggestMovePreparation
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   Other                          ( CPF_Parm )

bool AUDKJumpPad::eventSuggestMovePreparation ( class APawn* Other )
{
	static UFunction* pFnSuggestMovePreparation = NULL;

	if ( ! pFnSuggestMovePreparation )
		pFnSuggestMovePreparation = (UFunction*) UObject::GObjObjects()->Data[ 42382 ];

	AUDKJumpPad_eventSuggestMovePreparation_Parms SuggestMovePreparation_Parms;
	SuggestMovePreparation_Parms.Other = Other;

	this->ProcessEvent ( pFnSuggestMovePreparation, &SuggestMovePreparation_Parms, NULL );

	return SuggestMovePreparation_Parms.ReturnValue;
};

// Function UDKBase.UDKJumpPad.PostTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AUDKJumpPad::eventPostTouch ( class AActor* Other )
{
	static UFunction* pFnPostTouch = NULL;

	if ( ! pFnPostTouch )
		pFnPostTouch = (UFunction*) UObject::GObjObjects()->Data[ 42377 ];

	AUDKJumpPad_eventPostTouch_Parms PostTouch_Parms;
	PostTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnPostTouch, &PostTouch_Parms, NULL );
};

// Function UDKBase.UDKJumpPad.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AUDKJumpPad::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 42372 ];

	AUDKJumpPad_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function UDKBase.UDKKActorBreakable.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AUDKKActorBreakable::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 42419 ];

	AUDKKActorBreakable_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function UDKBase.UDKKActorBreakable.BreakApart
// [0x00020002] 
// Parameters infos:

void AUDKKActorBreakable::BreakApart ( )
{
	static UFunction* pFnBreakApart = NULL;

	if ( ! pFnBreakApart )
		pFnBreakApart = (UFunction*) UObject::GObjObjects()->Data[ 42418 ];

	AUDKKActorBreakable_execBreakApart_Parms BreakApart_Parms;

	this->ProcessEvent ( pFnBreakApart, &BreakApart_Parms, NULL );
};

// Function UDKBase.UDKKActorBreakable.EncroachingOn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool AUDKKActorBreakable::EncroachingOn ( class AActor* Other )
{
	static UFunction* pFnEncroachingOn = NULL;

	if ( ! pFnEncroachingOn )
		pFnEncroachingOn = (UFunction*) UObject::GObjObjects()->Data[ 42415 ];

	AUDKKActorBreakable_execEncroachingOn_Parms EncroachingOn_Parms;
	EncroachingOn_Parms.Other = Other;

	this->ProcessEvent ( pFnEncroachingOn, &EncroachingOn_Parms, NULL );

	return EncroachingOn_Parms.ReturnValue;
};

// Function UDKBase.UDKKActorBreakable.TakeDamage
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// int                            Damage                         ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AUDKKActorBreakable::eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 42407 ];

	AUDKKActorBreakable_eventTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.Damage = Damage;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function UDKBase.UDKKActorBreakable.OnEncroach
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Other                          ( CPF_Parm )

bool AUDKKActorBreakable::OnEncroach ( class AActor* Other )
{
	static UFunction* pFnOnEncroach = NULL;

	if ( ! pFnOnEncroach )
		pFnOnEncroach = (UFunction*) UObject::GObjObjects()->Data[ 42389 ];

	AUDKKActorBreakable_execOnEncroach_Parms OnEncroach_Parms;
	OnEncroach_Parms.Other = Other;

	this->ProcessEvent ( pFnOnEncroach, &OnEncroach_Parms, NULL );

	return OnEncroach_Parms.ReturnValue;
};

// Function UDKBase.UDKKActorBreakable.OnBreakApart
// [0x00120000] 
// Parameters infos:

void AUDKKActorBreakable::OnBreakApart ( )
{
	static UFunction* pFnOnBreakApart = NULL;

	if ( ! pFnOnBreakApart )
		pFnOnBreakApart = (UFunction*) UObject::GObjObjects()->Data[ 42391 ];

	AUDKKActorBreakable_execOnBreakApart_Parms OnBreakApart_Parms;

	this->ProcessEvent ( pFnOnBreakApart, &OnBreakApart_Parms, NULL );
};

// Function UDKBase.UDKParticleSystemComponent.SetFOV
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          NewFOV                         ( CPF_Parm )

void UUDKParticleSystemComponent::SetFOV ( float NewFOV )
{
	static UFunction* pFnSetFOV = NULL;

	if ( ! pFnSetFOV )
		pFnSetFOV = (UFunction*) UObject::GObjObjects()->Data[ 42459 ];

	UUDKParticleSystemComponent_execSetFOV_Parms SetFOV_Parms;
	SetFOV_Parms.NewFOV = NewFOV;

	pFnSetFOV->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFOV, &SetFOV_Parms, NULL );

	pFnSetFOV->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.StuckFalling
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKPawn::eventStuckFalling ( )
{
	static UFunction* pFnStuckFalling = NULL;

	if ( ! pFnStuckFalling )
		pFnStuckFalling = (UFunction*) UObject::GObjObjects()->Data[ 42642 ];

	AUDKPawn_eventStuckFalling_Parms StuckFalling_Parms;

	this->ProcessEvent ( pFnStuckFalling, &StuckFalling_Parms, NULL );
};

// Function UDKBase.UDKPawn.UpdateEyeHeight
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AUDKPawn::eventUpdateEyeHeight ( float DeltaTime )
{
	static UFunction* pFnUpdateEyeHeight = NULL;

	if ( ! pFnUpdateEyeHeight )
		pFnUpdateEyeHeight = (UFunction*) UObject::GObjObjects()->Data[ 42640 ];

	AUDKPawn_eventUpdateEyeHeight_Parms UpdateEyeHeight_Parms;
	UpdateEyeHeight_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateEyeHeight, &UpdateEyeHeight_Parms, NULL );
};

// Function UDKBase.UDKPawn.TakeHitBlendedOut
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AUDKPawn::eventTakeHitBlendedOut ( )
{
	static UFunction* pFnTakeHitBlendedOut = NULL;

	if ( ! pFnTakeHitBlendedOut )
		pFnTakeHitBlendedOut = (UFunction*) UObject::GObjObjects()->Data[ 42639 ];

	AUDKPawn_eventTakeHitBlendedOut_Parms TakeHitBlendedOut_Parms;

	this->ProcessEvent ( pFnTakeHitBlendedOut, &TakeHitBlendedOut_Parms, NULL );
};

// Function UDKBase.UDKPawn.StartFeignDeathRecoveryAnim
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AUDKPawn::eventStartFeignDeathRecoveryAnim ( )
{
	static UFunction* pFnStartFeignDeathRecoveryAnim = NULL;

	if ( ! pFnStartFeignDeathRecoveryAnim )
		pFnStartFeignDeathRecoveryAnim = (UFunction*) UObject::GObjObjects()->Data[ 42638 ];

	AUDKPawn_eventStartFeignDeathRecoveryAnim_Parms StartFeignDeathRecoveryAnim_Parms;

	this->ProcessEvent ( pFnStartFeignDeathRecoveryAnim, &StartFeignDeathRecoveryAnim_Parms, NULL );
};

// Function UDKBase.UDKPawn.SetHandIKEnabled
// [0x00020100] 
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void AUDKPawn::SetHandIKEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnSetHandIKEnabled = NULL;

	if ( ! pFnSetHandIKEnabled )
		pFnSetHandIKEnabled = (UFunction*) UObject::GObjObjects()->Data[ 42636 ];

	AUDKPawn_execSetHandIKEnabled_Parms SetHandIKEnabled_Parms;
	SetHandIKEnabled_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnSetHandIKEnabled, &SetHandIKEnabled_Parms, NULL );
};

// Function UDKBase.UDKPawn.SetWeaponAttachmentVisibility
// [0x00020100] 
// Parameters infos:
// unsigned long                  bAttachmentVisible             ( CPF_Parm )

void AUDKPawn::SetWeaponAttachmentVisibility ( unsigned long bAttachmentVisible )
{
	static UFunction* pFnSetWeaponAttachmentVisibility = NULL;

	if ( ! pFnSetWeaponAttachmentVisibility )
		pFnSetWeaponAttachmentVisibility = (UFunction*) UObject::GObjObjects()->Data[ 42634 ];

	AUDKPawn_execSetWeaponAttachmentVisibility_Parms SetWeaponAttachmentVisibility_Parms;
	SetWeaponAttachmentVisibility_Parms.bAttachmentVisible = bAttachmentVisible;

	this->ProcessEvent ( pFnSetWeaponAttachmentVisibility, &SetWeaponAttachmentVisibility_Parms, NULL );
};

// Function UDKBase.UDKPawn.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AUDKPawn::NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 42629 ];

	AUDKPawn_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
	NativePostRenderFor_Parms.PC = PC;
	NativePostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.SetHUDLocation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 NewHUDLocation                 ( CPF_Parm )

void AUDKPawn::SetHUDLocation ( struct FVector NewHUDLocation )
{
	static UFunction* pFnSetHUDLocation = NULL;

	if ( ! pFnSetHUDLocation )
		pFnSetHUDLocation = (UFunction*) UObject::GObjObjects()->Data[ 42627 ];

	AUDKPawn_execSetHUDLocation_Parms SetHUDLocation_Parms;
	memcpy ( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

	pFnSetHUDLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDLocation, &SetHUDLocation_Parms, NULL );

	pFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.SuggestJumpVelocity
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Destination                    ( CPF_Parm )
// struct FVector                 Start                          ( CPF_Parm )
// unsigned long                  bRequireFallLanding            ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 JumpVelocity                   ( CPF_Parm | CPF_OutParm )

bool AUDKPawn::SuggestJumpVelocity ( struct FVector Destination, struct FVector Start, unsigned long bRequireFallLanding, struct FVector* JumpVelocity )
{
	static UFunction* pFnSuggestJumpVelocity = NULL;

	if ( ! pFnSuggestJumpVelocity )
		pFnSuggestJumpVelocity = (UFunction*) UObject::GObjObjects()->Data[ 42621 ];

	AUDKPawn_execSuggestJumpVelocity_Parms SuggestJumpVelocity_Parms;
	memcpy ( &SuggestJumpVelocity_Parms.Destination, &Destination, 0xC );
	memcpy ( &SuggestJumpVelocity_Parms.Start, &Start, 0xC );
	SuggestJumpVelocity_Parms.bRequireFallLanding = bRequireFallLanding;

	pFnSuggestJumpVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSuggestJumpVelocity, &SuggestJumpVelocity_Parms, NULL );

	pFnSuggestJumpVelocity->FunctionFlags |= 0x400;

	if ( JumpVelocity )
		memcpy ( JumpVelocity, &SuggestJumpVelocity_Parms.JumpVelocity, 0xC );

	return SuggestJumpVelocity_Parms.ReturnValue;
};

// Function UDKBase.UDKPawn.StartProne
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          HeightAdjust                   ( CPF_Parm )

void AUDKPawn::eventStartProne ( float HeightAdjust )
{
	static UFunction* pFnStartProne = NULL;

	if ( ! pFnStartProne )
		pFnStartProne = (UFunction*) UObject::GObjObjects()->Data[ 42619 ];

	AUDKPawn_eventStartProne_Parms StartProne_Parms;
	StartProne_Parms.HeightAdjust = HeightAdjust;

	this->ProcessEvent ( pFnStartProne, &StartProne_Parms, NULL );
};

// Function UDKBase.UDKPawn.EndProne
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          HeightAdjust                   ( CPF_Parm )

void AUDKPawn::eventEndProne ( float HeightAdjust )
{
	static UFunction* pFnEndProne = NULL;

	if ( ! pFnEndProne )
		pFnEndProne = (UFunction*) UObject::GObjObjects()->Data[ 42617 ];

	AUDKPawn_eventEndProne_Parms EndProne_Parms;
	EndProne_Parms.HeightAdjust = HeightAdjust;

	this->ProcessEvent ( pFnEndProne, &EndProne_Parms, NULL );
};

// Function UDKBase.UDKPawn.StartCrouch
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          HeightAdjust                   ( CPF_Parm )

void AUDKPawn::eventStartCrouch ( float HeightAdjust )
{
	static UFunction* pFnStartCrouch = NULL;

	if ( ! pFnStartCrouch )
		pFnStartCrouch = (UFunction*) UObject::GObjObjects()->Data[ 42615 ];

	AUDKPawn_eventStartCrouch_Parms StartCrouch_Parms;
	StartCrouch_Parms.HeightAdjust = HeightAdjust;

	this->ProcessEvent ( pFnStartCrouch, &StartCrouch_Parms, NULL );
};

// Function UDKBase.UDKPawn.EndCrouch
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          HeightAdjust                   ( CPF_Parm )

void AUDKPawn::eventEndCrouch ( float HeightAdjust )
{
	static UFunction* pFnEndCrouch = NULL;

	if ( ! pFnEndCrouch )
		pFnEndCrouch = (UFunction*) UObject::GObjObjects()->Data[ 42613 ];

	AUDKPawn_eventEndCrouch_Parms EndCrouch_Parms;
	EndCrouch_Parms.HeightAdjust = HeightAdjust;

	this->ProcessEvent ( pFnEndCrouch, &EndCrouch_Parms, NULL );
};

// Function UDKBase.UDKPawn.StoppedFalling
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AUDKPawn::eventStoppedFalling ( )
{
	static UFunction* pFnStoppedFalling = NULL;

	if ( ! pFnStoppedFalling )
		pFnStoppedFalling = (UFunction*) UObject::GObjObjects()->Data[ 42612 ];

	AUDKPawn_eventStoppedFalling_Parms StoppedFalling_Parms;

	this->ProcessEvent ( pFnStoppedFalling, &StoppedFalling_Parms, NULL );
};

// Function UDKBase.UDKPawn.HoldGameObject
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AUDKCarriedObject*       UDKGameObj                     ( CPF_Parm )

void AUDKPawn::eventHoldGameObject ( class AUDKCarriedObject* UDKGameObj )
{
	static UFunction* pFnHoldGameObject = NULL;

	if ( ! pFnHoldGameObject )
		pFnHoldGameObject = (UFunction*) UObject::GObjObjects()->Data[ 42610 ];

	AUDKPawn_eventHoldGameObject_Parms HoldGameObject_Parms;
	HoldGameObject_Parms.UDKGameObj = UDKGameObj;

	this->ProcessEvent ( pFnHoldGameObject, &HoldGameObject_Parms, NULL );
};

// Function UDKBase.UDKPawn.IsInvisible
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUDKPawn::IsInvisible ( )
{
	static UFunction* pFnIsInvisible = NULL;

	if ( ! pFnIsInvisible )
		pFnIsInvisible = (UFunction*) UObject::GObjObjects()->Data[ 42608 ];

	AUDKPawn_execIsInvisible_Parms IsInvisible_Parms;

	pFnIsInvisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInvisible, &IsInvisible_Parms, NULL );

	pFnIsInvisible->FunctionFlags |= 0x400;

	return IsInvisible_Parms.ReturnValue;
};

// Function UDKBase.UDKPawn.GetTargetLocation
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRequestAlternateLoc           ( CPF_OptionalParm | CPF_Parm )

struct FVector AUDKPawn::GetTargetLocation ( class AActor* RequestedBy, unsigned long bRequestAlternateLoc )
{
	static UFunction* pFnGetTargetLocation = NULL;

	if ( ! pFnGetTargetLocation )
		pFnGetTargetLocation = (UFunction*) UObject::GObjObjects()->Data[ 42604 ];

	AUDKPawn_execGetTargetLocation_Parms GetTargetLocation_Parms;
	GetTargetLocation_Parms.RequestedBy = RequestedBy;
	GetTargetLocation_Parms.bRequestAlternateLoc = bRequestAlternateLoc;

	pFnGetTargetLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTargetLocation, &GetTargetLocation_Parms, NULL );

	pFnGetTargetLocation->FunctionFlags |= 0x400;

	return GetTargetLocation_Parms.ReturnValue;
};

// Function UDKBase.UDKPawn.EnsureOverlayComponentLast
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AUDKPawn::EnsureOverlayComponentLast ( )
{
	static UFunction* pFnEnsureOverlayComponentLast = NULL;

	if ( ! pFnEnsureOverlayComponentLast )
		pFnEnsureOverlayComponentLast = (UFunction*) UObject::GObjObjects()->Data[ 42603 ];

	AUDKPawn_execEnsureOverlayComponentLast_Parms EnsureOverlayComponentLast_Parms;

	pFnEnsureOverlayComponentLast->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnsureOverlayComponentLast, &EnsureOverlayComponentLast_Parms, NULL );

	pFnEnsureOverlayComponentLast->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.RestorePreRagdollCollisionComponent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AUDKPawn::RestorePreRagdollCollisionComponent ( )
{
	static UFunction* pFnRestorePreRagdollCollisionComponent = NULL;

	if ( ! pFnRestorePreRagdollCollisionComponent )
		pFnRestorePreRagdollCollisionComponent = (UFunction*) UObject::GObjObjects()->Data[ 42602 ];

	AUDKPawn_execRestorePreRagdollCollisionComponent_Parms RestorePreRagdollCollisionComponent_Parms;

	pFnRestorePreRagdollCollisionComponent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRestorePreRagdollCollisionComponent, &RestorePreRagdollCollisionComponent_Parms, NULL );

	pFnRestorePreRagdollCollisionComponent->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPawn.GetBoundingCylinder
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// float                          CollisionRadius                ( CPF_Parm | CPF_OutParm )
// float                          CollisionHeight                ( CPF_Parm | CPF_OutParm )

void AUDKPawn::GetBoundingCylinder ( float* CollisionRadius, float* CollisionHeight )
{
	static UFunction* pFnGetBoundingCylinder = NULL;

	if ( ! pFnGetBoundingCylinder )
		pFnGetBoundingCylinder = (UFunction*) UObject::GObjObjects()->Data[ 42599 ];

	AUDKPawn_execGetBoundingCylinder_Parms GetBoundingCylinder_Parms;

	pFnGetBoundingCylinder->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundingCylinder, &GetBoundingCylinder_Parms, NULL );

	pFnGetBoundingCylinder->FunctionFlags |= 0x400;

	if ( CollisionRadius )
		*CollisionRadius = GetBoundingCylinder_Parms.CollisionRadius;

	if ( CollisionHeight )
		*CollisionHeight = GetBoundingCylinder_Parms.CollisionHeight;
};

// Function UDKBase.UDKPickupFactory.SetPickupHidden
// [0x00020102] 
// Parameters infos:

void AUDKPickupFactory::SetPickupHidden ( )
{
	static UFunction* pFnSetPickupHidden = NULL;

	if ( ! pFnSetPickupHidden )
		pFnSetPickupHidden = (UFunction*) UObject::GObjObjects()->Data[ 42676 ];

	AUDKPickupFactory_execSetPickupHidden_Parms SetPickupHidden_Parms;

	this->ProcessEvent ( pFnSetPickupHidden, &SetPickupHidden_Parms, NULL );
};

// Function UDKBase.UDKPickupFactory.SetPickupVisible
// [0x00020102] 
// Parameters infos:

void AUDKPickupFactory::SetPickupVisible ( )
{
	static UFunction* pFnSetPickupVisible = NULL;

	if ( ! pFnSetPickupVisible )
		pFnSetPickupVisible = (UFunction*) UObject::GObjObjects()->Data[ 42675 ];

	AUDKPickupFactory_execSetPickupVisible_Parms SetPickupVisible_Parms;

	this->ProcessEvent ( pFnSetPickupVisible, &SetPickupVisible_Parms, NULL );
};

// Function UDKBase.UDKPlayerController.GetTargetAdhesionFrictionTarget
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          MaxDistance                    ( CPF_Parm )
// struct FVector                 CamLoc                         ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FRotator                CamRot                         ( CPF_Const | CPF_Parm | CPF_OutParm )

class APawn* AUDKPlayerController::GetTargetAdhesionFrictionTarget ( float MaxDistance, struct FVector* CamLoc, struct FRotator* CamRot )
{
	static UFunction* pFnGetTargetAdhesionFrictionTarget = NULL;

	if ( ! pFnGetTargetAdhesionFrictionTarget )
		pFnGetTargetAdhesionFrictionTarget = (UFunction*) UObject::GObjObjects()->Data[ 42712 ];

	AUDKPlayerController_execGetTargetAdhesionFrictionTarget_Parms GetTargetAdhesionFrictionTarget_Parms;
	GetTargetAdhesionFrictionTarget_Parms.MaxDistance = MaxDistance;

	pFnGetTargetAdhesionFrictionTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTargetAdhesionFrictionTarget, &GetTargetAdhesionFrictionTarget_Parms, NULL );

	pFnGetTargetAdhesionFrictionTarget->FunctionFlags |= 0x400;

	if ( CamLoc )
		memcpy ( CamLoc, &GetTargetAdhesionFrictionTarget_Parms.CamLoc, 0xC );

	if ( CamRot )
		memcpy ( CamRot, &GetTargetAdhesionFrictionTarget_Parms.CamRot, 0xC );

	return GetTargetAdhesionFrictionTarget_Parms.ReturnValue;
};

// Function UDKBase.UDKPlayerController.ClearCameraEffect
// [0x00020002] 
// Parameters infos:

void AUDKPlayerController::ClearCameraEffect ( )
{
	static UFunction* pFnClearCameraEffect = NULL;

	if ( ! pFnClearCameraEffect )
		pFnClearCameraEffect = (UFunction*) UObject::GObjObjects()->Data[ 42711 ];

	AUDKPlayerController_execClearCameraEffect_Parms ClearCameraEffect_Parms;

	this->ProcessEvent ( pFnClearCameraEffect, &ClearCameraEffect_Parms, NULL );
};

// Function UDKBase.UDKPlayerController.ClientSpawnCameraEffect
// [0x01820142] 
// Parameters infos:
// class UClass*                  CameraEffectClass              ( CPF_Parm )

void AUDKPlayerController::ClientSpawnCameraEffect ( class UClass* CameraEffectClass )
{
	static UFunction* pFnClientSpawnCameraEffect = NULL;

	if ( ! pFnClientSpawnCameraEffect )
		pFnClientSpawnCameraEffect = (UFunction*) UObject::GObjObjects()->Data[ 42707 ];

	AUDKPlayerController_execClientSpawnCameraEffect_Parms ClientSpawnCameraEffect_Parms;
	ClientSpawnCameraEffect_Parms.CameraEffectClass = CameraEffectClass;

	this->ProcessEvent ( pFnClientSpawnCameraEffect, &ClientSpawnCameraEffect_Parms, NULL );
};

// Function UDKBase.UDKPlayerController.RemoveCameraEffect
// [0x00020002] 
// Parameters infos:
// class AUDKEmitCameraEffect*    CamEmitter                     ( CPF_Parm )

void AUDKPlayerController::RemoveCameraEffect ( class AUDKEmitCameraEffect* CamEmitter )
{
	static UFunction* pFnRemoveCameraEffect = NULL;

	if ( ! pFnRemoveCameraEffect )
		pFnRemoveCameraEffect = (UFunction*) UObject::GObjObjects()->Data[ 42705 ];

	AUDKPlayerController_execRemoveCameraEffect_Parms RemoveCameraEffect_Parms;
	RemoveCameraEffect_Parms.CamEmitter = CamEmitter;

	this->ProcessEvent ( pFnRemoveCameraEffect, &RemoveCameraEffect_Parms, NULL );
};

// Function UDKBase.UDKPlayerController.IsMouseAvailable
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUDKPlayerController::IsMouseAvailable ( )
{
	static UFunction* pFnIsMouseAvailable = NULL;

	if ( ! pFnIsMouseAvailable )
		pFnIsMouseAvailable = (UFunction*) UObject::GObjObjects()->Data[ 42703 ];

	AUDKPlayerController_execIsMouseAvailable_Parms IsMouseAvailable_Parms;

	pFnIsMouseAvailable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsMouseAvailable, &IsMouseAvailable_Parms, NULL );

	pFnIsMouseAvailable->FunctionFlags |= 0x400;

	return IsMouseAvailable_Parms.ReturnValue;
};

// Function UDKBase.UDKPlayerController.IsKeyboardAvailable
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUDKPlayerController::IsKeyboardAvailable ( )
{
	static UFunction* pFnIsKeyboardAvailable = NULL;

	if ( ! pFnIsKeyboardAvailable )
		pFnIsKeyboardAvailable = (UFunction*) UObject::GObjObjects()->Data[ 42701 ];

	AUDKPlayerController_execIsKeyboardAvailable_Parms IsKeyboardAvailable_Parms;

	pFnIsKeyboardAvailable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsKeyboardAvailable, &IsKeyboardAvailable_Parms, NULL );

	pFnIsKeyboardAvailable->FunctionFlags |= 0x400;

	return IsKeyboardAvailable_Parms.ReturnValue;
};

// Function UDKBase.UDKPlayerController.SetHardwarePhysicsEnabled
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void AUDKPlayerController::SetHardwarePhysicsEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnSetHardwarePhysicsEnabled = NULL;

	if ( ! pFnSetHardwarePhysicsEnabled )
		pFnSetHardwarePhysicsEnabled = (UFunction*) UObject::GObjObjects()->Data[ 42699 ];

	AUDKPlayerController_execSetHardwarePhysicsEnabled_Parms SetHardwarePhysicsEnabled_Parms;
	SetHardwarePhysicsEnabled_Parms.bEnabled = bEnabled;

	pFnSetHardwarePhysicsEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHardwarePhysicsEnabled, &SetHardwarePhysicsEnabled_Parms, NULL );

	pFnSetHardwarePhysicsEnabled->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPlayerController.SetGamma
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          GammaValue                     ( CPF_Parm )

void AUDKPlayerController::SetGamma ( float GammaValue )
{
	static UFunction* pFnSetGamma = NULL;

	if ( ! pFnSetGamma )
		pFnSetGamma = (UFunction*) UObject::GObjObjects()->Data[ 42697 ];

	AUDKPlayerController_execSetGamma_Parms SetGamma_Parms;
	SetGamma_Parms.GammaValue = GammaValue;

	pFnSetGamma->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGamma, &SetGamma_Parms, NULL );

	pFnSetGamma->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKPlayerInput.GetUDKBindNameFromCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 BindCommand                    ( CPF_Parm | CPF_NeedCtorLink )

struct FString UUDKPlayerInput::GetUDKBindNameFromCommand ( struct FString BindCommand )
{
	static UFunction* pFnGetUDKBindNameFromCommand = NULL;

	if ( ! pFnGetUDKBindNameFromCommand )
		pFnGetUDKBindNameFromCommand = (UFunction*) UObject::GObjObjects()->Data[ 42718 ];

	UUDKPlayerInput_execGetUDKBindNameFromCommand_Parms GetUDKBindNameFromCommand_Parms;
	memcpy ( &GetUDKBindNameFromCommand_Parms.BindCommand, &BindCommand, 0xC );

	pFnGetUDKBindNameFromCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUDKBindNameFromCommand, &GetUDKBindNameFromCommand_Parms, NULL );

	pFnGetUDKBindNameFromCommand->FunctionFlags |= 0x400;

	return GetUDKBindNameFromCommand_Parms.ReturnValue;
};

// Function UDKBase.UDKProfileSettings.ResetKeysToDefault
// [0x00026400] ( FUNC_Native )
// Parameters infos:
// class ULocalPlayer*            InPlayerOwner                  ( CPF_OptionalParm | CPF_Parm )

void UUDKProfileSettings::ResetKeysToDefault ( class ULocalPlayer* InPlayerOwner )
{
	static UFunction* pFnResetKeysToDefault = NULL;

	if ( ! pFnResetKeysToDefault )
		pFnResetKeysToDefault = (UFunction*) UObject::GObjObjects()->Data[ 42723 ];

	UUDKProfileSettings_execResetKeysToDefault_Parms ResetKeysToDefault_Parms;
	ResetKeysToDefault_Parms.InPlayerOwner = InPlayerOwner;

	pFnResetKeysToDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetKeysToDefault, &ResetKeysToDefault_Parms, NULL );

	pFnResetKeysToDefault->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKProfileSettings.ResetToDefault
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ProfileId                      ( CPF_Parm )

void UUDKProfileSettings::ResetToDefault ( int ProfileId )
{
	static UFunction* pFnResetToDefault = NULL;

	if ( ! pFnResetToDefault )
		pFnResetToDefault = (UFunction*) UObject::GObjObjects()->Data[ 42721 ];

	UUDKProfileSettings_execResetToDefault_Parms ResetToDefault_Parms;
	ResetToDefault_Parms.ProfileId = ProfileId;

	pFnResetToDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetToDefault, &ResetToDefault_Parms, NULL );

	pFnResetToDefault->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKProjectile.CreateProjectileLight
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AUDKProjectile::eventCreateProjectileLight ( )
{
	static UFunction* pFnCreateProjectileLight = NULL;

	if ( ! pFnCreateProjectileLight )
		pFnCreateProjectileLight = (UFunction*) UObject::GObjObjects()->Data[ 42743 ];

	AUDKProjectile_eventCreateProjectileLight_Parms CreateProjectileLight_Parms;

	this->ProcessEvent ( pFnCreateProjectileLight, &CreateProjectileLight_Parms, NULL );
};

// Function UDKBase.UDKProjectile.GetTerminalVelocity
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUDKProjectile::GetTerminalVelocity ( )
{
	static UFunction* pFnGetTerminalVelocity = NULL;

	if ( ! pFnGetTerminalVelocity )
		pFnGetTerminalVelocity = (UFunction*) UObject::GObjObjects()->Data[ 42741 ];

	AUDKProjectile_execGetTerminalVelocity_Parms GetTerminalVelocity_Parms;

	pFnGetTerminalVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTerminalVelocity, &GetTerminalVelocity_Parms, NULL );

	pFnGetTerminalVelocity->FunctionFlags |= 0x400;

	return GetTerminalVelocity_Parms.ReturnValue;
};

// Function UDKBase.UDKScout.SuggestJumpVelocity
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Destination                    ( CPF_Parm )
// struct FVector                 Start                          ( CPF_Parm )
// unsigned long                  bRequireFallLanding            ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 JumpVelocity                   ( CPF_Parm | CPF_OutParm )

bool AUDKScout::SuggestJumpVelocity ( struct FVector Destination, struct FVector Start, unsigned long bRequireFallLanding, struct FVector* JumpVelocity )
{
	static UFunction* pFnSuggestJumpVelocity = NULL;

	if ( ! pFnSuggestJumpVelocity )
		pFnSuggestJumpVelocity = (UFunction*) UObject::GObjObjects()->Data[ 42749 ];

	AUDKScout_execSuggestJumpVelocity_Parms SuggestJumpVelocity_Parms;
	memcpy ( &SuggestJumpVelocity_Parms.Destination, &Destination, 0xC );
	memcpy ( &SuggestJumpVelocity_Parms.Start, &Start, 0xC );
	SuggestJumpVelocity_Parms.bRequireFallLanding = bRequireFallLanding;

	pFnSuggestJumpVelocity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSuggestJumpVelocity, &SuggestJumpVelocity_Parms, NULL );

	pFnSuggestJumpVelocity->FunctionFlags |= 0x400;

	if ( JumpVelocity )
		memcpy ( JumpVelocity, &SuggestJumpVelocity_Parms.JumpVelocity, 0xC );

	return SuggestJumpVelocity_Parms.ReturnValue;
};

// Function UDKBase.UDKScriptedNavigationPoint.NotifyAnchorFindingResult
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class ANavigationPoint*        EndAnchor                      ( CPF_Parm )
// class APawn*                   RouteFinder                    ( CPF_Parm )

void AUDKScriptedNavigationPoint::eventNotifyAnchorFindingResult ( class ANavigationPoint* EndAnchor, class APawn* RouteFinder )
{
	static UFunction* pFnNotifyAnchorFindingResult = NULL;

	if ( ! pFnNotifyAnchorFindingResult )
		pFnNotifyAnchorFindingResult = (UFunction*) UObject::GObjObjects()->Data[ 42762 ];

	AUDKScriptedNavigationPoint_eventNotifyAnchorFindingResult_Parms NotifyAnchorFindingResult_Parms;
	NotifyAnchorFindingResult_Parms.EndAnchor = EndAnchor;
	NotifyAnchorFindingResult_Parms.RouteFinder = RouteFinder;

	this->ProcessEvent ( pFnNotifyAnchorFindingResult, &NotifyAnchorFindingResult_Parms, NULL );
};

// Function UDKBase.UDKScriptedNavigationPoint.SpecifyEndAnchor
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class ANavigationPoint*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   RouteFinder                    ( CPF_Parm )

class ANavigationPoint* AUDKScriptedNavigationPoint::eventSpecifyEndAnchor ( class APawn* RouteFinder )
{
	static UFunction* pFnSpecifyEndAnchor = NULL;

	if ( ! pFnSpecifyEndAnchor )
		pFnSpecifyEndAnchor = (UFunction*) UObject::GObjObjects()->Data[ 42759 ];

	AUDKScriptedNavigationPoint_eventSpecifyEndAnchor_Parms SpecifyEndAnchor_Parms;
	SpecifyEndAnchor_Parms.RouteFinder = RouteFinder;

	this->ProcessEvent ( pFnSpecifyEndAnchor, &SpecifyEndAnchor_Parms, NULL );

	return SpecifyEndAnchor_Parms.ReturnValue;
};

// Function UDKBase.UDKSkeletalMeshComponent.SetFOV
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          NewFOV                         ( CPF_Parm )

void UUDKSkeletalMeshComponent::SetFOV ( float NewFOV )
{
	static UFunction* pFnSetFOV = NULL;

	if ( ! pFnSetFOV )
		pFnSetFOV = (UFunction*) UObject::GObjObjects()->Data[ 42939 ];

	UUDKSkeletalMeshComponent_execSetFOV_Parms SetFOV_Parms;
	SetFOV_Parms.NewFOV = NewFOV;

	pFnSetFOV->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFOV, &SetFOV_Parms, NULL );

	pFnSetFOV->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKSkeletalMeshComponent.PreloadTextures
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bForcePreload                  ( CPF_Parm )
// float                          ClearTime                      ( CPF_Parm )

void UUDKSkeletalMeshComponent::eventPreloadTextures ( unsigned long bForcePreload, float ClearTime )
{
	static UFunction* pFnPreloadTextures = NULL;

	if ( ! pFnPreloadTextures )
		pFnPreloadTextures = (UFunction*) UObject::GObjObjects()->Data[ 42935 ];

	UUDKSkeletalMeshComponent_eventPreloadTextures_Parms PreloadTextures_Parms;
	PreloadTextures_Parms.bForcePreload = bForcePreload;
	PreloadTextures_Parms.ClearTime = ClearTime;

	this->ProcessEvent ( pFnPreloadTextures, &PreloadTextures_Parms, NULL );
};

// Function UDKBase.UDKTeamOwnedInfo.GetTeamNum
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUDKTeamOwnedInfo::GetTeamNum ( )
{
	static UFunction* pFnGetTeamNum = NULL;

	if ( ! pFnGetTeamNum )
		pFnGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 42942 ];

	AUDKTeamOwnedInfo_execGetTeamNum_Parms GetTeamNum_Parms;

	pFnGetTeamNum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTeamNum, &GetTeamNum_Parms, NULL );

	pFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Parms.ReturnValue;
};

// Function UDKBase.UDKTeleporterBase.Accept
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Incoming                       ( CPF_Parm )
// class AActor*                  Source                         ( CPF_Parm )

bool AUDKTeleporterBase::eventAccept ( class AActor* Incoming, class AActor* Source )
{
	static UFunction* pFnAccept = NULL;

	if ( ! pFnAccept )
		pFnAccept = (UFunction*) UObject::GObjObjects()->Data[ 42976 ];

	AUDKTeleporterBase_eventAccept_Parms Accept_Parms;
	Accept_Parms.Incoming = Incoming;
	Accept_Parms.Source = Source;

	this->ProcessEvent ( pFnAccept, &Accept_Parms, NULL );

	return Accept_Parms.ReturnValue;
};

// Function UDKBase.UDKTeleporterBase.InitializePortalEffect
// [0x00020102] 
// Parameters infos:
// class AActor*                  Dest                           ( CPF_Parm )

void AUDKTeleporterBase::InitializePortalEffect ( class AActor* Dest )
{
	static UFunction* pFnInitializePortalEffect = NULL;

	if ( ! pFnInitializePortalEffect )
		pFnInitializePortalEffect = (UFunction*) UObject::GObjObjects()->Data[ 42973 ];

	AUDKTeleporterBase_execInitializePortalEffect_Parms InitializePortalEffect_Parms;
	InitializePortalEffect_Parms.Dest = Dest;

	this->ProcessEvent ( pFnInitializePortalEffect, &InitializePortalEffect_Parms, NULL );
};

// Function UDKBase.UDKTeleporterBase.PostBeginPlay
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AUDKTeleporterBase::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 42971 ];

	AUDKTeleporterBase_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UDKBase.UDKUIDataProvider_SearchResult.IsPrivateServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UUDKUIDataProvider_SearchResult::IsPrivateServer ( )
{
	static UFunction* pFnIsPrivateServer = NULL;

	if ( ! pFnIsPrivateServer )
		pFnIsPrivateServer = (UFunction*) UObject::GObjObjects()->Data[ 43015 ];

	UUDKUIDataProvider_SearchResult_execIsPrivateServer_Parms IsPrivateServer_Parms;

	pFnIsPrivateServer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPrivateServer, &IsPrivateServer_Parms, NULL );

	pFnIsPrivateServer->FunctionFlags |= 0x400;

	return IsPrivateServer_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_MenuItems.AddListElementProvidersKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   KeyName                        ( CPF_Parm )
// class UUDKUIResourceDataProvider* Provider                       ( CPF_Parm )

void UUDKUIDataStore_MenuItems::AddListElementProvidersKey ( struct FName KeyName, class UUDKUIResourceDataProvider* Provider )
{
	static UFunction* pFnAddListElementProvidersKey = NULL;

	if ( ! pFnAddListElementProvidersKey )
		pFnAddListElementProvidersKey = (UFunction*) UObject::GObjObjects()->Data[ 43043 ];

	UUDKUIDataStore_MenuItems_execAddListElementProvidersKey_Parms AddListElementProvidersKey_Parms;
	memcpy ( &AddListElementProvidersKey_Parms.KeyName, &KeyName, 0x8 );
	AddListElementProvidersKey_Parms.Provider = Provider;

	pFnAddListElementProvidersKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddListElementProvidersKey, &AddListElementProvidersKey_Parms, NULL );

	pFnAddListElementProvidersKey->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_MenuItems.RemoveListElementProvidersKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   KeyName                        ( CPF_Parm )

void UUDKUIDataStore_MenuItems::RemoveListElementProvidersKey ( struct FName KeyName )
{
	static UFunction* pFnRemoveListElementProvidersKey = NULL;

	if ( ! pFnRemoveListElementProvidersKey )
		pFnRemoveListElementProvidersKey = (UFunction*) UObject::GObjObjects()->Data[ 43041 ];

	UUDKUIDataStore_MenuItems_execRemoveListElementProvidersKey_Parms RemoveListElementProvidersKey_Parms;
	memcpy ( &RemoveListElementProvidersKey_Parms.KeyName, &KeyName, 0x8 );

	pFnRemoveListElementProvidersKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveListElementProvidersKey, &RemoveListElementProvidersKey_Parms, NULL );

	pFnRemoveListElementProvidersKey->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_MenuItems.InitializeListElementProviders
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUDKUIDataStore_MenuItems::eventInitializeListElementProviders ( )
{
	static UFunction* pFnInitializeListElementProviders = NULL;

	if ( ! pFnInitializeListElementProviders )
		pFnInitializeListElementProviders = (UFunction*) UObject::GObjObjects()->Data[ 43036 ];

	UUDKUIDataStore_MenuItems_eventInitializeListElementProviders_Parms InitializeListElementProviders_Parms;

	this->ProcessEvent ( pFnInitializeListElementProviders, &InitializeListElementProviders_Parms, NULL );
};

// Function UDKBase.UDKUIDataStore_MenuItems.GetProviderSet
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderFieldName              ( CPF_Parm )
// TArray< class UUDKUIResourceDataProvider* > OutProviders                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UUDKUIDataStore_MenuItems::GetProviderSet ( struct FName ProviderFieldName, TArray< class UUDKUIResourceDataProvider* >* OutProviders )
{
	static UFunction* pFnGetProviderSet = NULL;

	if ( ! pFnGetProviderSet )
		pFnGetProviderSet = (UFunction*) UObject::GObjObjects()->Data[ 43031 ];

	UUDKUIDataStore_MenuItems_execGetProviderSet_Parms GetProviderSet_Parms;
	memcpy ( &GetProviderSet_Parms.ProviderFieldName, &ProviderFieldName, 0x8 );

	pFnGetProviderSet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetProviderSet, &GetProviderSet_Parms, NULL );

	pFnGetProviderSet->FunctionFlags |= 0x400;

	if ( OutProviders )
		memcpy ( OutProviders, &GetProviderSet_Parms.OutProviders, 0xC );

	return GetProviderSet_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_MenuItems.GetAllResourceDataProviders
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UClass*                  ProviderClass                  ( CPF_Parm )
// TArray< class UUDKUIResourceDataProvider* > Providers                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UUDKUIDataStore_MenuItems::GetAllResourceDataProviders ( class UClass* ProviderClass, TArray< class UUDKUIResourceDataProvider* >* Providers )
{
	static UFunction* pFnGetAllResourceDataProviders = NULL;

	if ( ! pFnGetAllResourceDataProviders )
		pFnGetAllResourceDataProviders = (UFunction*) UObject::GObjObjects()->Data[ 43027 ];

	UUDKUIDataStore_MenuItems_execGetAllResourceDataProviders_Parms GetAllResourceDataProviders_Parms;
	GetAllResourceDataProviders_Parms.ProviderClass = ProviderClass;

	pFnGetAllResourceDataProviders->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAllResourceDataProviders, &GetAllResourceDataProviders_Parms, NULL );

	pFnGetAllResourceDataProviders->FunctionFlags |= 0x400;

	if ( Providers )
		memcpy ( Providers, &GetAllResourceDataProviders_Parms.Providers, 0xC );
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.ClearBoundKeyCache
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UUDKUIDataStore_StringAliasBindingMap::ClearBoundKeyCache ( )
{
	static UFunction* pFnClearBoundKeyCache = NULL;

	if ( ! pFnClearBoundKeyCache )
		pFnClearBoundKeyCache = (UFunction*) UObject::GObjObjects()->Data[ 43081 ];

	UUDKUIDataStore_StringAliasBindingMap_execClearBoundKeyCache_Parms ClearBoundKeyCache_Parms;

	pFnClearBoundKeyCache->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundKeyCache, &ClearBoundKeyCache_Parms, NULL );

	pFnClearBoundKeyCache->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.AddMappingToBoundKeyCache
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MappingStr                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            FieldIndex                     ( CPF_Parm )

void UUDKUIDataStore_StringAliasBindingMap::AddMappingToBoundKeyCache ( struct FString Command, struct FString MappingStr, int FieldIndex )
{
	static UFunction* pFnAddMappingToBoundKeyCache = NULL;

	if ( ! pFnAddMappingToBoundKeyCache )
		pFnAddMappingToBoundKeyCache = (UFunction*) UObject::GObjObjects()->Data[ 43077 ];

	UUDKUIDataStore_StringAliasBindingMap_execAddMappingToBoundKeyCache_Parms AddMappingToBoundKeyCache_Parms;
	memcpy ( &AddMappingToBoundKeyCache_Parms.Command, &Command, 0xC );
	memcpy ( &AddMappingToBoundKeyCache_Parms.MappingStr, &MappingStr, 0xC );
	AddMappingToBoundKeyCache_Parms.FieldIndex = FieldIndex;

	pFnAddMappingToBoundKeyCache->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddMappingToBoundKeyCache, &AddMappingToBoundKeyCache_Parms, NULL );

	pFnAddMappingToBoundKeyCache->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.FindMappingInBoundKeyCache
// [0x00480401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Command                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MappingStr                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            FieldIndex                     ( CPF_Parm | CPF_OutParm )

bool UUDKUIDataStore_StringAliasBindingMap::FindMappingInBoundKeyCache ( struct FString Command, struct FString* MappingStr, int* FieldIndex )
{
	static UFunction* pFnFindMappingInBoundKeyCache = NULL;

	if ( ! pFnFindMappingInBoundKeyCache )
		pFnFindMappingInBoundKeyCache = (UFunction*) UObject::GObjObjects()->Data[ 43072 ];

	UUDKUIDataStore_StringAliasBindingMap_execFindMappingInBoundKeyCache_Parms FindMappingInBoundKeyCache_Parms;
	memcpy ( &FindMappingInBoundKeyCache_Parms.Command, &Command, 0xC );

	pFnFindMappingInBoundKeyCache->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindMappingInBoundKeyCache, &FindMappingInBoundKeyCache_Parms, NULL );

	pFnFindMappingInBoundKeyCache->FunctionFlags |= 0x400;

	if ( MappingStr )
		memcpy ( MappingStr, &FindMappingInBoundKeyCache_Parms.MappingStr, 0xC );

	if ( FieldIndex )
		*FieldIndex = FindMappingInBoundKeyCache_Parms.FieldIndex;

	return FindMappingInBoundKeyCache_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetBoundStringWithFieldName
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FieldName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MappedString                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            StartIndex                     ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
// struct FString                 BindString                     ( CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UUDKUIDataStore_StringAliasBindingMap::GetBoundStringWithFieldName ( struct FString FieldName, struct FString* MappedString, int* StartIndex, struct FString* BindString )
{
	static UFunction* pFnGetBoundStringWithFieldName = NULL;

	if ( ! pFnGetBoundStringWithFieldName )
		pFnGetBoundStringWithFieldName = (UFunction*) UObject::GObjObjects()->Data[ 43066 ];

	UUDKUIDataStore_StringAliasBindingMap_execGetBoundStringWithFieldName_Parms GetBoundStringWithFieldName_Parms;
	memcpy ( &GetBoundStringWithFieldName_Parms.FieldName, &FieldName, 0xC );

	pFnGetBoundStringWithFieldName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundStringWithFieldName, &GetBoundStringWithFieldName_Parms, NULL );

	pFnGetBoundStringWithFieldName->FunctionFlags |= 0x400;

	if ( MappedString )
		memcpy ( MappedString, &GetBoundStringWithFieldName_Parms.MappedString, 0xC );

	if ( StartIndex )
		*StartIndex = GetBoundStringWithFieldName_Parms.StartIndex;

	if ( BindString )
		memcpy ( BindString, &GetBoundStringWithFieldName_Parms.BindString, 0xC );

	return GetBoundStringWithFieldName_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringAliasBindingMap.GetStringWithFieldName
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FieldName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MappedString                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UUDKUIDataStore_StringAliasBindingMap::GetStringWithFieldName ( struct FString FieldName, struct FString* MappedString )
{
	static UFunction* pFnGetStringWithFieldName = NULL;

	if ( ! pFnGetStringWithFieldName )
		pFnGetStringWithFieldName = (UFunction*) UObject::GObjObjects()->Data[ 43062 ];

	UUDKUIDataStore_StringAliasBindingMap_execGetStringWithFieldName_Parms GetStringWithFieldName_Parms;
	memcpy ( &GetStringWithFieldName_Parms.FieldName, &FieldName, 0xC );

	pFnGetStringWithFieldName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStringWithFieldName, &GetStringWithFieldName_Parms, NULL );

	pFnGetStringWithFieldName->FunctionFlags |= 0x400;

	if ( MappedString )
		memcpy ( MappedString, &GetStringWithFieldName_Parms.MappedString, 0xC );

	return GetStringWithFieldName_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringAliasMap.GetStringWithFieldName
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FieldName                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 MappedString                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UUDKUIDataStore_StringAliasMap::GetStringWithFieldName ( struct FString FieldName, struct FString* MappedString )
{
	static UFunction* pFnGetStringWithFieldName = NULL;

	if ( ! pFnGetStringWithFieldName )
		pFnGetStringWithFieldName = (UFunction*) UObject::GObjObjects()->Data[ 43083 ];

	UUDKUIDataStore_StringAliasMap_execGetStringWithFieldName_Parms GetStringWithFieldName_Parms;
	memcpy ( &GetStringWithFieldName_Parms.FieldName, &FieldName, 0xC );

	pFnGetStringWithFieldName->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStringWithFieldName, &GetStringWithFieldName_Parms, NULL );

	pFnGetStringWithFieldName->FunctionFlags |= 0x400;

	if ( MappedString )
		memcpy ( MappedString, &GetStringWithFieldName_Parms.MappedString, 0xC );

	return GetStringWithFieldName_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.Num
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   FieldName                      ( CPF_Parm )

int UUDKUIDataStore_StringList::eventNum ( struct FName FieldName )
{
	static UFunction* pFnNum = NULL;

	if ( ! pFnNum )
		pFnNum = (UFunction*) UObject::GObjObjects()->Data[ 43141 ];

	UUDKUIDataStore_StringList_eventNum_Parms Num_Parms;
	memcpy ( &Num_Parms.FieldName, &FieldName, 0x8 );

	this->ProcessEvent ( pFnNum, &Num_Parms, NULL );

	return Num_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.SetCurrentValueIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   FieldName                      ( CPF_Parm )
// int                            NewValueIndex                  ( CPF_Parm )

int UUDKUIDataStore_StringList::eventSetCurrentValueIndex ( struct FName FieldName, int NewValueIndex )
{
	static UFunction* pFnSetCurrentValueIndex = NULL;

	if ( ! pFnSetCurrentValueIndex )
		pFnSetCurrentValueIndex = (UFunction*) UObject::GObjObjects()->Data[ 43135 ];

	UUDKUIDataStore_StringList_eventSetCurrentValueIndex_Parms SetCurrentValueIndex_Parms;
	memcpy ( &SetCurrentValueIndex_Parms.FieldName, &FieldName, 0x8 );
	SetCurrentValueIndex_Parms.NewValueIndex = NewValueIndex;

	this->ProcessEvent ( pFnSetCurrentValueIndex, &SetCurrentValueIndex_Parms, NULL );

	return SetCurrentValueIndex_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValueIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   FieldName                      ( CPF_Parm )

int UUDKUIDataStore_StringList::eventGetCurrentValueIndex ( struct FName FieldName )
{
	static UFunction* pFnGetCurrentValueIndex = NULL;

	if ( ! pFnGetCurrentValueIndex )
		pFnGetCurrentValueIndex = (UFunction*) UObject::GObjObjects()->Data[ 43130 ];

	UUDKUIDataStore_StringList_eventGetCurrentValueIndex_Parms GetCurrentValueIndex_Parms;
	memcpy ( &GetCurrentValueIndex_Parms.FieldName, &FieldName, 0x8 );

	this->ProcessEvent ( pFnGetCurrentValueIndex, &GetCurrentValueIndex_Parms, NULL );

	return GetCurrentValueIndex_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.GetCurrentValue
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   FieldName                      ( CPF_Parm )
// struct FString                 out_Value                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UUDKUIDataStore_StringList::eventGetCurrentValue ( struct FName FieldName, struct FString* out_Value )
{
	static UFunction* pFnGetCurrentValue = NULL;

	if ( ! pFnGetCurrentValue )
		pFnGetCurrentValue = (UFunction*) UObject::GObjObjects()->Data[ 43124 ];

	UUDKUIDataStore_StringList_eventGetCurrentValue_Parms GetCurrentValue_Parms;
	memcpy ( &GetCurrentValue_Parms.FieldName, &FieldName, 0x8 );

	this->ProcessEvent ( pFnGetCurrentValue, &GetCurrentValue_Parms, NULL );

	if ( out_Value )
		memcpy ( out_Value, &GetCurrentValue_Parms.out_Value, 0xC );

	return GetCurrentValue_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.GetStr
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   FieldName                      ( CPF_Parm )
// int                            StrIndex                       ( CPF_Parm )

struct FString UUDKUIDataStore_StringList::GetStr ( struct FName FieldName, int StrIndex )
{
	static UFunction* pFnGetStr = NULL;

	if ( ! pFnGetStr )
		pFnGetStr = (UFunction*) UObject::GObjObjects()->Data[ 43120 ];

	UUDKUIDataStore_StringList_execGetStr_Parms GetStr_Parms;
	memcpy ( &GetStr_Parms.FieldName, &FieldName, 0x8 );
	GetStr_Parms.StrIndex = StrIndex;

	pFnGetStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetStr, &GetStr_Parms, NULL );

	pFnGetStr->FunctionFlags |= 0x400;

	return GetStr_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.FindStr
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   FieldName                      ( CPF_Parm )
// struct FString                 SearchString                   ( CPF_Parm | CPF_NeedCtorLink )

int UUDKUIDataStore_StringList::FindStr ( struct FName FieldName, struct FString SearchString )
{
	static UFunction* pFnFindStr = NULL;

	if ( ! pFnFindStr )
		pFnFindStr = (UFunction*) UObject::GObjObjects()->Data[ 43116 ];

	UUDKUIDataStore_StringList_execFindStr_Parms FindStr_Parms;
	memcpy ( &FindStr_Parms.FieldName, &FieldName, 0x8 );
	memcpy ( &FindStr_Parms.SearchString, &SearchString, 0xC );

	pFnFindStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindStr, &FindStr_Parms, NULL );

	pFnFindStr->FunctionFlags |= 0x400;

	return FindStr_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.Empty
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FName                   FieldName                      ( CPF_Parm )
// unsigned long                  bBatchOp                       ( CPF_OptionalParm | CPF_Parm )

void UUDKUIDataStore_StringList::Empty ( struct FName FieldName, unsigned long bBatchOp )
{
	static UFunction* pFnEmpty = NULL;

	if ( ! pFnEmpty )
		pFnEmpty = (UFunction*) UObject::GObjObjects()->Data[ 43113 ];

	UUDKUIDataStore_StringList_execEmpty_Parms Empty_Parms;
	memcpy ( &Empty_Parms.FieldName, &FieldName, 0x8 );
	Empty_Parms.bBatchOp = bBatchOp;

	pFnEmpty->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEmpty, &Empty_Parms, NULL );

	pFnEmpty->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringList.RemoveStrByIndex
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FName                   FieldName                      ( CPF_Parm )
// int                            Index                          ( CPF_Parm )
// int                            Count                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bBatchOp                       ( CPF_OptionalParm | CPF_Parm )

void UUDKUIDataStore_StringList::RemoveStrByIndex ( struct FName FieldName, int Index, int Count, unsigned long bBatchOp )
{
	static UFunction* pFnRemoveStrByIndex = NULL;

	if ( ! pFnRemoveStrByIndex )
		pFnRemoveStrByIndex = (UFunction*) UObject::GObjObjects()->Data[ 43108 ];

	UUDKUIDataStore_StringList_execRemoveStrByIndex_Parms RemoveStrByIndex_Parms;
	memcpy ( &RemoveStrByIndex_Parms.FieldName, &FieldName, 0x8 );
	RemoveStrByIndex_Parms.Index = Index;
	RemoveStrByIndex_Parms.Count = Count;
	RemoveStrByIndex_Parms.bBatchOp = bBatchOp;

	pFnRemoveStrByIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveStrByIndex, &RemoveStrByIndex_Parms, NULL );

	pFnRemoveStrByIndex->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringList.RemoveStr
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FName                   FieldName                      ( CPF_Parm )
// struct FString                 StringToRemove                 ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bBatchOp                       ( CPF_OptionalParm | CPF_Parm )

void UUDKUIDataStore_StringList::RemoveStr ( struct FName FieldName, struct FString StringToRemove, unsigned long bBatchOp )
{
	static UFunction* pFnRemoveStr = NULL;

	if ( ! pFnRemoveStr )
		pFnRemoveStr = (UFunction*) UObject::GObjObjects()->Data[ 43104 ];

	UUDKUIDataStore_StringList_execRemoveStr_Parms RemoveStr_Parms;
	memcpy ( &RemoveStr_Parms.FieldName, &FieldName, 0x8 );
	memcpy ( &RemoveStr_Parms.StringToRemove, &StringToRemove, 0xC );
	RemoveStr_Parms.bBatchOp = bBatchOp;

	pFnRemoveStr->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveStr, &RemoveStr_Parms, NULL );

	pFnRemoveStr->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKUIDataStore_StringList.GetFieldIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   FieldName                      ( CPF_Parm )

int UUDKUIDataStore_StringList::GetFieldIndex ( struct FName FieldName )
{
	static UFunction* pFnGetFieldIndex = NULL;

	if ( ! pFnGetFieldIndex )
		pFnGetFieldIndex = (UFunction*) UObject::GObjObjects()->Data[ 43101 ];

	UUDKUIDataStore_StringList_execGetFieldIndex_Parms GetFieldIndex_Parms;
	memcpy ( &GetFieldIndex_Parms.FieldName, &FieldName, 0x8 );

	pFnGetFieldIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFieldIndex, &GetFieldIndex_Parms, NULL );

	pFnGetFieldIndex->FunctionFlags |= 0x400;

	return GetFieldIndex_Parms.ReturnValue;
};

// Function UDKBase.UDKUIDataStore_StringList.Registered
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class ULocalPlayer*            PlayerOwner                    ( CPF_Parm )

void UUDKUIDataStore_StringList::eventRegistered ( class ULocalPlayer* PlayerOwner )
{
	static UFunction* pFnRegistered = NULL;

	if ( ! pFnRegistered )
		pFnRegistered = (UFunction*) UObject::GObjObjects()->Data[ 43098 ];

	UUDKUIDataStore_StringList_eventRegistered_Parms Registered_Parms;
	Registered_Parms.PlayerOwner = PlayerOwner;

	this->ProcessEvent ( pFnRegistered, &Registered_Parms, NULL );
};

// Function UDKBase.UDKUIResourceDataProvider.ShouldBeFiltered
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UUDKUIResourceDataProvider::eventShouldBeFiltered ( )
{
	static UFunction* pFnShouldBeFiltered = NULL;

	if ( ! pFnShouldBeFiltered )
		pFnShouldBeFiltered = (UFunction*) UObject::GObjObjects()->Data[ 42987 ];

	UUDKUIResourceDataProvider_eventShouldBeFiltered_Parms ShouldBeFiltered_Parms;

	this->ProcessEvent ( pFnShouldBeFiltered, &ShouldBeFiltered_Parms, NULL );

	return ShouldBeFiltered_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.HandleDeadVehicleDriver
// [0x00020002] 
// Parameters infos:

void AUDKVehicleBase::HandleDeadVehicleDriver ( )
{
	static UFunction* pFnHandleDeadVehicleDriver = NULL;

	if ( ! pFnHandleDeadVehicleDriver )
		pFnHandleDeadVehicleDriver = (UFunction*) UObject::GObjObjects()->Data[ 43200 ];

	AUDKVehicleBase_execHandleDeadVehicleDriver_Parms HandleDeadVehicleDriver_Parms;

	this->ProcessEvent ( pFnHandleDeadVehicleDriver, &HandleDeadVehicleDriver_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.DriverLeft
// [0x00020002] 
// Parameters infos:

void AUDKVehicleBase::DriverLeft ( )
{
	static UFunction* pFnDriverLeft = NULL;

	if ( ! pFnDriverLeft )
		pFnDriverLeft = (UFunction*) UObject::GObjObjects()->Data[ 43198 ];

	AUDKVehicleBase_execDriverLeft_Parms DriverLeft_Parms;

	this->ProcessEvent ( pFnDriverLeft, &DriverLeft_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.StopFiringWeapon
// [0x00020102] 
// Parameters infos:

void AUDKVehicleBase::StopFiringWeapon ( )
{
	static UFunction* pFnStopFiringWeapon = NULL;

	if ( ! pFnStopFiringWeapon )
		pFnStopFiringWeapon = (UFunction*) UObject::GObjObjects()->Data[ 43197 ];

	AUDKVehicleBase_execStopFiringWeapon_Parms StopFiringWeapon_Parms;

	this->ProcessEvent ( pFnStopFiringWeapon, &StopFiringWeapon_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.BotFire
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bFinished                      ( CPF_Parm )

bool AUDKVehicleBase::BotFire ( unsigned long bFinished )
{
	static UFunction* pFnBotFire = NULL;

	if ( ! pFnBotFire )
		pFnBotFire = (UFunction*) UObject::GObjObjects()->Data[ 43193 ];

	AUDKVehicleBase_execBotFire_Parms BotFire_Parms;
	BotFire_Parms.bFinished = bFinished;

	this->ProcessEvent ( pFnBotFire, &BotFire_Parms, NULL );

	return BotFire_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.ChooseFireMode
// [0x00020002] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUDKVehicleBase::ChooseFireMode ( )
{
	static UFunction* pFnChooseFireMode = NULL;

	if ( ! pFnChooseFireMode )
		pFnChooseFireMode = (UFunction*) UObject::GObjObjects()->Data[ 43189 ];

	AUDKVehicleBase_execChooseFireMode_Parms ChooseFireMode_Parms;

	this->ProcessEvent ( pFnChooseFireMode, &ChooseFireMode_Parms, NULL );

	return ChooseFireMode_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.DetachDriver
// [0x00020102] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void AUDKVehicleBase::DetachDriver ( class APawn* P )
{
	static UFunction* pFnDetachDriver = NULL;

	if ( ! pFnDetachDriver )
		pFnDetachDriver = (UFunction*) UObject::GObjObjects()->Data[ 43186 ];

	AUDKVehicleBase_execDetachDriver_Parms DetachDriver_Parms;
	DetachDriver_Parms.P = P;

	this->ProcessEvent ( pFnDetachDriver, &DetachDriver_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.EjectDriver
// [0x00820002] 
// Parameters infos:

void AUDKVehicleBase::EjectDriver ( )
{
	static UFunction* pFnEjectDriver = NULL;

	if ( ! pFnEjectDriver )
		pFnEjectDriver = (UFunction*) UObject::GObjObjects()->Data[ 43183 ];

	AUDKVehicleBase_execEjectDriver_Parms EjectDriver_Parms;

	this->ProcessEvent ( pFnEjectDriver, &EjectDriver_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.PassengerLeaveVehicle
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUDKWeaponPawn*          WeapPawn                       ( CPF_Parm )
// unsigned long                  bForceLeave                    ( CPF_Parm )

bool AUDKVehicleBase::PassengerLeaveVehicle ( class AUDKWeaponPawn* WeapPawn, unsigned long bForceLeave )
{
	static UFunction* pFnPassengerLeaveVehicle = NULL;

	if ( ! pFnPassengerLeaveVehicle )
		pFnPassengerLeaveVehicle = (UFunction*) UObject::GObjObjects()->Data[ 43179 ];

	AUDKVehicleBase_execPassengerLeaveVehicle_Parms PassengerLeaveVehicle_Parms;
	PassengerLeaveVehicle_Parms.WeapPawn = WeapPawn;
	PassengerLeaveVehicle_Parms.bForceLeave = bForceLeave;

	this->ProcessEvent ( pFnPassengerLeaveVehicle, &PassengerLeaveVehicle_Parms, NULL );

	return PassengerLeaveVehicle_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.GetVehicleDrivingStatName
// [0x00020002] 
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName AUDKVehicleBase::GetVehicleDrivingStatName ( )
{
	static UFunction* pFnGetVehicleDrivingStatName = NULL;

	if ( ! pFnGetVehicleDrivingStatName )
		pFnGetVehicleDrivingStatName = (UFunction*) UObject::GObjObjects()->Data[ 43176 ];

	AUDKVehicleBase_execGetVehicleDrivingStatName_Parms GetVehicleDrivingStatName_Parms;

	this->ProcessEvent ( pFnGetVehicleDrivingStatName, &GetVehicleDrivingStatName_Parms, NULL );

	return GetVehicleDrivingStatName_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.ApplyWeaponEffects
// [0x00024100] 
// Parameters infos:
// int                            OverlayFlags                   ( CPF_Parm )
// int                            SeatIndex                      ( CPF_OptionalParm | CPF_Parm )

void AUDKVehicleBase::ApplyWeaponEffects ( int OverlayFlags, int SeatIndex )
{
	static UFunction* pFnApplyWeaponEffects = NULL;

	if ( ! pFnApplyWeaponEffects )
		pFnApplyWeaponEffects = (UFunction*) UObject::GObjObjects()->Data[ 43173 ];

	AUDKVehicleBase_execApplyWeaponEffects_Parms ApplyWeaponEffects_Parms;
	ApplyWeaponEffects_Parms.OverlayFlags = OverlayFlags;
	ApplyWeaponEffects_Parms.SeatIndex = SeatIndex;

	this->ProcessEvent ( pFnApplyWeaponEffects, &ApplyWeaponEffects_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.DriverEnter
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

bool AUDKVehicleBase::DriverEnter ( class APawn* P )
{
	static UFunction* pFnDriverEnter = NULL;

	if ( ! pFnDriverEnter )
		pFnDriverEnter = (UFunction*) UObject::GObjObjects()->Data[ 43169 ];

	AUDKVehicleBase_execDriverEnter_Parms DriverEnter_Parms;
	DriverEnter_Parms.P = P;

	this->ProcessEvent ( pFnDriverEnter, &DriverEnter_Parms, NULL );

	return DriverEnter_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.DrivingStatusChanged
// [0x00020102] 
// Parameters infos:

void AUDKVehicleBase::DrivingStatusChanged ( )
{
	static UFunction* pFnDrivingStatusChanged = NULL;

	if ( ! pFnDrivingStatusChanged )
		pFnDrivingStatusChanged = (UFunction*) UObject::GObjObjects()->Data[ 43168 ];

	AUDKVehicleBase_execDrivingStatusChanged_Parms DrivingStatusChanged_Parms;

	this->ProcessEvent ( pFnDrivingStatusChanged, &DrivingStatusChanged_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.NeedToTurn
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 targ                           ( CPF_Parm )

bool AUDKVehicleBase::NeedToTurn ( struct FVector targ )
{
	static UFunction* pFnNeedToTurn = NULL;

	if ( ! pFnNeedToTurn )
		pFnNeedToTurn = (UFunction*) UObject::GObjObjects()->Data[ 43162 ];

	AUDKVehicleBase_execNeedToTurn_Parms NeedToTurn_Parms;
	memcpy ( &NeedToTurn_Parms.targ, &targ, 0xC );

	this->ProcessEvent ( pFnNeedToTurn, &NeedToTurn_Parms, NULL );

	return NeedToTurn_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.GetDamageScaling
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUDKVehicleBase::GetDamageScaling ( )
{
	static UFunction* pFnGetDamageScaling = NULL;

	if ( ! pFnGetDamageScaling )
		pFnGetDamageScaling = (UFunction*) UObject::GObjObjects()->Data[ 43160 ];

	AUDKVehicleBase_execGetDamageScaling_Parms GetDamageScaling_Parms;

	this->ProcessEvent ( pFnGetDamageScaling, &GetDamageScaling_Parms, NULL );

	return GetDamageScaling_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleBase.ServerChangeSeat
// [0x002200C0] 
// Parameters infos:
// int                            RequestedSeat                  ( CPF_Parm )

void AUDKVehicleBase::ServerChangeSeat ( int RequestedSeat )
{
	static UFunction* pFnServerChangeSeat = NULL;

	if ( ! pFnServerChangeSeat )
		pFnServerChangeSeat = (UFunction*) UObject::GObjObjects()->Data[ 43158 ];

	AUDKVehicleBase_execServerChangeSeat_Parms ServerChangeSeat_Parms;
	ServerChangeSeat_Parms.RequestedSeat = RequestedSeat;

	this->ProcessEvent ( pFnServerChangeSeat, &ServerChangeSeat_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.ServerAdjacentSeat
// [0x002200C0] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// class AController*             C                              ( CPF_Parm )

void AUDKVehicleBase::ServerAdjacentSeat ( int Direction, class AController* C )
{
	static UFunction* pFnServerAdjacentSeat = NULL;

	if ( ! pFnServerAdjacentSeat )
		pFnServerAdjacentSeat = (UFunction*) UObject::GObjObjects()->Data[ 43155 ];

	AUDKVehicleBase_execServerAdjacentSeat_Parms ServerAdjacentSeat_Parms;
	ServerAdjacentSeat_Parms.Direction = Direction;
	ServerAdjacentSeat_Parms.C = C;

	this->ProcessEvent ( pFnServerAdjacentSeat, &ServerAdjacentSeat_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.AdjacentSeat
// [0x00020102] 
// Parameters infos:
// int                            Direction                      ( CPF_Parm )
// class AController*             C                              ( CPF_Parm )

void AUDKVehicleBase::AdjacentSeat ( int Direction, class AController* C )
{
	static UFunction* pFnAdjacentSeat = NULL;

	if ( ! pFnAdjacentSeat )
		pFnAdjacentSeat = (UFunction*) UObject::GObjObjects()->Data[ 43152 ];

	AUDKVehicleBase_execAdjacentSeat_Parms AdjacentSeat_Parms;
	AdjacentSeat_Parms.Direction = Direction;
	AdjacentSeat_Parms.C = C;

	this->ProcessEvent ( pFnAdjacentSeat, &AdjacentSeat_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.SwitchWeapon
// [0x00020102] 
// Parameters infos:
// unsigned char                  NewGroup                       ( CPF_Parm )

void AUDKVehicleBase::SwitchWeapon ( unsigned char NewGroup )
{
	static UFunction* pFnSwitchWeapon = NULL;

	if ( ! pFnSwitchWeapon )
		pFnSwitchWeapon = (UFunction*) UObject::GObjObjects()->Data[ 43150 ];

	AUDKVehicleBase_execSwitchWeapon_Parms SwitchWeapon_Parms;
	SwitchWeapon_Parms.NewGroup = NewGroup;

	this->ProcessEvent ( pFnSwitchWeapon, &SwitchWeapon_Parms, NULL );
};

// Function UDKBase.UDKVehicleBase.HoldGameObject
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AUDKCarriedObject*       GameObj                        ( CPF_Parm )

void AUDKVehicleBase::eventHoldGameObject ( class AUDKCarriedObject* GameObj )
{
	static UFunction* pFnHoldGameObject = NULL;

	if ( ! pFnHoldGameObject )
		pFnHoldGameObject = (UFunction*) UObject::GObjObjects()->Data[ 43148 ];

	AUDKVehicleBase_eventHoldGameObject_Parms HoldGameObject_Parms;
	HoldGameObject_Parms.GameObj = GameObj;

	this->ProcessEvent ( pFnHoldGameObject, &HoldGameObject_Parms, NULL );
};

// Function UDKBase.UDKVehicle.UpdateHoverboardDustEffect
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          DustHeight                     ( CPF_Parm )

void AUDKVehicle::eventUpdateHoverboardDustEffect ( float DustHeight )
{
	static UFunction* pFnUpdateHoverboardDustEffect = NULL;

	if ( ! pFnUpdateHoverboardDustEffect )
		pFnUpdateHoverboardDustEffect = (UFunction*) UObject::GObjObjects()->Data[ 43483 ];

	AUDKVehicle_eventUpdateHoverboardDustEffect_Parms UpdateHoverboardDustEffect_Parms;
	UpdateHoverboardDustEffect_Parms.DustHeight = DustHeight;

	this->ProcessEvent ( pFnUpdateHoverboardDustEffect, &UpdateHoverboardDustEffect_Parms, NULL );
};

// Function UDKBase.UDKVehicle.PostInitRigidBody
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UPrimitiveComponent*     PrimComp                       ( CPF_Parm | CPF_EditInline )

void AUDKVehicle::eventPostInitRigidBody ( class UPrimitiveComponent* PrimComp )
{
	static UFunction* pFnPostInitRigidBody = NULL;

	if ( ! pFnPostInitRigidBody )
		pFnPostInitRigidBody = (UFunction*) UObject::GObjObjects()->Data[ 43481 ];

	AUDKVehicle_eventPostInitRigidBody_Parms PostInitRigidBody_Parms;
	PostInitRigidBody_Parms.PrimComp = PrimComp;

	this->ProcessEvent ( pFnPostInitRigidBody, &PostInitRigidBody_Parms, NULL );
};

// Function UDKBase.UDKVehicle.TakeFireDamage
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKVehicle::eventTakeFireDamage ( )
{
	static UFunction* pFnTakeFireDamage = NULL;

	if ( ! pFnTakeFireDamage )
		pFnTakeFireDamage = (UFunction*) UObject::GObjObjects()->Data[ 43480 ];

	AUDKVehicle_eventTakeFireDamage_Parms TakeFireDamage_Parms;

	this->ProcessEvent ( pFnTakeFireDamage, &TakeFireDamage_Parms, NULL );
};

// Function UDKBase.UDKVehicle.CheckReset
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AUDKVehicle::eventCheckReset ( )
{
	static UFunction* pFnCheckReset = NULL;

	if ( ! pFnCheckReset )
		pFnCheckReset = (UFunction*) UObject::GObjObjects()->Data[ 43479 ];

	AUDKVehicle_eventCheckReset_Parms CheckReset_Parms;

	this->ProcessEvent ( pFnCheckReset, &CheckReset_Parms, NULL );
};

// Function UDKBase.UDKVehicle.TakeWaterDamage
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKVehicle::eventTakeWaterDamage ( )
{
	static UFunction* pFnTakeWaterDamage = NULL;

	if ( ! pFnTakeWaterDamage )
		pFnTakeWaterDamage = (UFunction*) UObject::GObjObjects()->Data[ 43478 ];

	AUDKVehicle_eventTakeWaterDamage_Parms TakeWaterDamage_Parms;

	this->ProcessEvent ( pFnTakeWaterDamage, &TakeWaterDamage_Parms, NULL );
};

// Function UDKBase.UDKVehicle.RBPenetrationDestroy
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AUDKVehicle::eventRBPenetrationDestroy ( )
{
	static UFunction* pFnRBPenetrationDestroy = NULL;

	if ( ! pFnRBPenetrationDestroy )
		pFnRBPenetrationDestroy = (UFunction*) UObject::GObjObjects()->Data[ 43477 ];

	AUDKVehicle_eventRBPenetrationDestroy_Parms RBPenetrationDestroy_Parms;

	this->ProcessEvent ( pFnRBPenetrationDestroy, &RBPenetrationDestroy_Parms, NULL );
};

// Function UDKBase.UDKVehicle.MorphTargetDestroyed
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// int                            MorphNodeIndex                 ( CPF_Parm )

void AUDKVehicle::eventMorphTargetDestroyed ( int MorphNodeIndex )
{
	static UFunction* pFnMorphTargetDestroyed = NULL;

	if ( ! pFnMorphTargetDestroyed )
		pFnMorphTargetDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 43475 ];

	AUDKVehicle_eventMorphTargetDestroyed_Parms MorphTargetDestroyed_Parms;
	MorphTargetDestroyed_Parms.MorphNodeIndex = MorphNodeIndex;

	this->ProcessEvent ( pFnMorphTargetDestroyed, &MorphTargetDestroyed_Parms, NULL );
};

// Function UDKBase.UDKVehicle.ApplyMorphDamage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// int                            Damage                         ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void AUDKVehicle::ApplyMorphDamage ( struct FVector HitLocation, int Damage, struct FVector Momentum )
{
	static UFunction* pFnApplyMorphDamage = NULL;

	if ( ! pFnApplyMorphDamage )
		pFnApplyMorphDamage = (UFunction*) UObject::GObjObjects()->Data[ 43471 ];

	AUDKVehicle_execApplyMorphDamage_Parms ApplyMorphDamage_Parms;
	memcpy ( &ApplyMorphDamage_Parms.HitLocation, &HitLocation, 0xC );
	ApplyMorphDamage_Parms.Damage = Damage;
	memcpy ( &ApplyMorphDamage_Parms.Momentum, &Momentum, 0xC );

	pFnApplyMorphDamage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnApplyMorphDamage, &ApplyMorphDamage_Parms, NULL );

	pFnApplyMorphDamage->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.UpdateDamageMaterial
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void AUDKVehicle::UpdateDamageMaterial ( )
{
	static UFunction* pFnUpdateDamageMaterial = NULL;

	if ( ! pFnUpdateDamageMaterial )
		pFnUpdateDamageMaterial = (UFunction*) UObject::GObjObjects()->Data[ 43470 ];

	AUDKVehicle_execUpdateDamageMaterial_Parms UpdateDamageMaterial_Parms;

	pFnUpdateDamageMaterial->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateDamageMaterial, &UpdateDamageMaterial_Parms, NULL );

	pFnUpdateDamageMaterial->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.InitDamageSkel
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void AUDKVehicle::InitDamageSkel ( )
{
	static UFunction* pFnInitDamageSkel = NULL;

	if ( ! pFnInitDamageSkel )
		pFnInitDamageSkel = (UFunction*) UObject::GObjObjects()->Data[ 43469 ];

	AUDKVehicle_execInitDamageSkel_Parms InitDamageSkel_Parms;

	pFnInitDamageSkel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitDamageSkel, &InitDamageSkel_Parms, NULL );

	pFnInitDamageSkel->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.SetHUDLocation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 NewHUDLocation                 ( CPF_Parm )

void AUDKVehicle::SetHUDLocation ( struct FVector NewHUDLocation )
{
	static UFunction* pFnSetHUDLocation = NULL;

	if ( ! pFnSetHUDLocation )
		pFnSetHUDLocation = (UFunction*) UObject::GObjObjects()->Data[ 43467 ];

	AUDKVehicle_execSetHUDLocation_Parms SetHUDLocation_Parms;
	memcpy ( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

	pFnSetHUDLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDLocation, &SetHUDLocation_Parms, NULL );

	pFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.InUseableRange
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUDKPlayerController*    PC                             ( CPF_Parm )
// float                          Dist                           ( CPF_Parm )

bool AUDKVehicle::InUseableRange ( class AUDKPlayerController* PC, float Dist )
{
	static UFunction* pFnInUseableRange = NULL;

	if ( ! pFnInUseableRange )
		pFnInUseableRange = (UFunction*) UObject::GObjObjects()->Data[ 43463 ];

	AUDKVehicle_execInUseableRange_Parms InUseableRange_Parms;
	InUseableRange_Parms.PC = PC;
	InUseableRange_Parms.Dist = Dist;

	pFnInUseableRange->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInUseableRange, &InUseableRange_Parms, NULL );

	pFnInUseableRange->FunctionFlags |= 0x400;

	return InUseableRange_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AUDKVehicle::NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 43458 ];

	AUDKVehicle_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
	NativePostRenderFor_Parms.PC = PC;
	NativePostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.GetTeamNum
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUDKVehicle::GetTeamNum ( )
{
	static UFunction* pFnGetTeamNum = NULL;

	if ( ! pFnGetTeamNum )
		pFnGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 43456 ];

	AUDKVehicle_execGetTeamNum_Parms GetTeamNum_Parms;

	pFnGetTeamNum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTeamNum, &GetTeamNum_Parms, NULL );

	pFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.SelfDestruct
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  ImpactedActor                  ( CPF_Parm )

void AUDKVehicle::eventSelfDestruct ( class AActor* ImpactedActor )
{
	static UFunction* pFnSelfDestruct = NULL;

	if ( ! pFnSelfDestruct )
		pFnSelfDestruct = (UFunction*) UObject::GObjObjects()->Data[ 43454 ];

	AUDKVehicle_eventSelfDestruct_Parms SelfDestruct_Parms;
	SelfDestruct_Parms.ImpactedActor = ImpactedActor;

	this->ProcessEvent ( pFnSelfDestruct, &SelfDestruct_Parms, NULL );
};

// Function UDKBase.UDKVehicle.CheckAutoDestruct
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class ATeamInfo*               InstigatorTeam                 ( CPF_Parm )
// float                          CheckRadius                    ( CPF_Parm )

bool AUDKVehicle::CheckAutoDestruct ( class ATeamInfo* InstigatorTeam, float CheckRadius )
{
	static UFunction* pFnCheckAutoDestruct = NULL;

	if ( ! pFnCheckAutoDestruct )
		pFnCheckAutoDestruct = (UFunction*) UObject::GObjObjects()->Data[ 43450 ];

	AUDKVehicle_execCheckAutoDestruct_Parms CheckAutoDestruct_Parms;
	CheckAutoDestruct_Parms.InstigatorTeam = InstigatorTeam;
	CheckAutoDestruct_Parms.CheckRadius = CheckRadius;

	pFnCheckAutoDestruct->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckAutoDestruct, &CheckAutoDestruct_Parms, NULL );

	pFnCheckAutoDestruct->FunctionFlags |= 0x400;

	return CheckAutoDestruct_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.GetMaxRiseForce
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUDKVehicle::GetMaxRiseForce ( )
{
	static UFunction* pFnGetMaxRiseForce = NULL;

	if ( ! pFnGetMaxRiseForce )
		pFnGetMaxRiseForce = (UFunction*) UObject::GObjObjects()->Data[ 43448 ];

	AUDKVehicle_execGetMaxRiseForce_Parms GetMaxRiseForce_Parms;

	pFnGetMaxRiseForce->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMaxRiseForce, &GetMaxRiseForce_Parms, NULL );

	pFnGetMaxRiseForce->FunctionFlags |= 0x400;

	return GetMaxRiseForce_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.JumpOutCheck
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKVehicle::eventJumpOutCheck ( )
{
	static UFunction* pFnJumpOutCheck = NULL;

	if ( ! pFnJumpOutCheck )
		pFnJumpOutCheck = (UFunction*) UObject::GObjObjects()->Data[ 43447 ];

	AUDKVehicle_eventJumpOutCheck_Parms JumpOutCheck_Parms;

	this->ProcessEvent ( pFnJumpOutCheck, &JumpOutCheck_Parms, NULL );
};

// Function UDKBase.UDKVehicle.ReceivedHealthChange
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AUDKVehicle::eventReceivedHealthChange ( )
{
	static UFunction* pFnReceivedHealthChange = NULL;

	if ( ! pFnReceivedHealthChange )
		pFnReceivedHealthChange = (UFunction*) UObject::GObjObjects()->Data[ 43446 ];

	AUDKVehicle_eventReceivedHealthChange_Parms ReceivedHealthChange_Parms;

	this->ProcessEvent ( pFnReceivedHealthChange, &ReceivedHealthChange_Parms, NULL );
};

// Function UDKBase.UDKVehicle.PlayTakeHitEffects
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AUDKVehicle::eventPlayTakeHitEffects ( )
{
	static UFunction* pFnPlayTakeHitEffects = NULL;

	if ( ! pFnPlayTakeHitEffects )
		pFnPlayTakeHitEffects = (UFunction*) UObject::GObjObjects()->Data[ 43445 ];

	AUDKVehicle_eventPlayTakeHitEffects_Parms PlayTakeHitEffects_Parms;

	this->ProcessEvent ( pFnPlayTakeHitEffects, &PlayTakeHitEffects_Parms, NULL );
};

// Function UDKBase.UDKVehicle.OnTouchForcedDirVolume
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AUDKForcedDirectionVolume* Vol                            ( CPF_Parm )

bool AUDKVehicle::OnTouchForcedDirVolume ( class AUDKForcedDirectionVolume* Vol )
{
	static UFunction* pFnOnTouchForcedDirVolume = NULL;

	if ( ! pFnOnTouchForcedDirVolume )
		pFnOnTouchForcedDirVolume = (UFunction*) UObject::GObjObjects()->Data[ 42307 ];

	AUDKVehicle_execOnTouchForcedDirVolume_Parms OnTouchForcedDirVolume_Parms;
	OnTouchForcedDirVolume_Parms.Vol = Vol;

	this->ProcessEvent ( pFnOnTouchForcedDirVolume, &OnTouchForcedDirVolume_Parms, NULL );

	return OnTouchForcedDirVolume_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.GetGravityZ
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float AUDKVehicle::GetGravityZ ( )
{
	static UFunction* pFnGetGravityZ = NULL;

	if ( ! pFnGetGravityZ )
		pFnGetGravityZ = (UFunction*) UObject::GObjObjects()->Data[ 43442 ];

	AUDKVehicle_execGetGravityZ_Parms GetGravityZ_Parms;

	pFnGetGravityZ->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGravityZ, &GetGravityZ_Parms, NULL );

	pFnGetGravityZ->FunctionFlags |= 0x400;

	return GetGravityZ_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.OnPropertyChange
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FName                   PropName                       ( CPF_Parm )

void AUDKVehicle::eventOnPropertyChange ( struct FName PropName )
{
	static UFunction* pFnOnPropertyChange = NULL;

	if ( ! pFnOnPropertyChange )
		pFnOnPropertyChange = (UFunction*) UObject::GObjObjects()->Data[ 43440 ];

	AUDKVehicle_eventOnPropertyChange_Parms OnPropertyChange_Parms;
	memcpy ( &OnPropertyChange_Parms.PropName, &PropName, 0x8 );

	this->ProcessEvent ( pFnOnPropertyChange, &OnPropertyChange_Parms, NULL );
};

// Function UDKBase.UDKVehicle.LockOnWarning
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AUDKProjectile*          IncomingMissile                ( CPF_Parm )

void AUDKVehicle::eventLockOnWarning ( class AUDKProjectile* IncomingMissile )
{
	static UFunction* pFnLockOnWarning = NULL;

	if ( ! pFnLockOnWarning )
		pFnLockOnWarning = (UFunction*) UObject::GObjObjects()->Data[ 43438 ];

	AUDKVehicle_eventLockOnWarning_Parms LockOnWarning_Parms;
	LockOnWarning_Parms.IncomingMissile = IncomingMissile;

	this->ProcessEvent ( pFnLockOnWarning, &LockOnWarning_Parms, NULL );
};

// Function UDKBase.UDKVehicle.GetRanOverDamageType
// [0x00020002] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* AUDKVehicle::GetRanOverDamageType ( )
{
	static UFunction* pFnGetRanOverDamageType = NULL;

	if ( ! pFnGetRanOverDamageType )
		pFnGetRanOverDamageType = (UFunction*) UObject::GObjObjects()->Data[ 43204 ];

	AUDKVehicle_execGetRanOverDamageType_Parms GetRanOverDamageType_Parms;

	this->ProcessEvent ( pFnGetRanOverDamageType, &GetRanOverDamageType_Parms, NULL );

	return GetRanOverDamageType_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.IsSeatControllerReplicationViewer
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x03E7]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

bool AUDKVehicle::IsSeatControllerReplicationViewer ( int SeatIndex )
{
	static UFunction* pFnIsSeatControllerReplicationViewer = NULL;

	if ( ! pFnIsSeatControllerReplicationViewer )
		pFnIsSeatControllerReplicationViewer = (UFunction*) UObject::GObjObjects()->Data[ 43435 ];

	AUDKVehicle_execIsSeatControllerReplicationViewer_Parms IsSeatControllerReplicationViewer_Parms;
	IsSeatControllerReplicationViewer_Parms.SeatIndex = SeatIndex;

	unsigned short NativeIndex = pFnIsSeatControllerReplicationViewer->iNative;
	pFnIsSeatControllerReplicationViewer->iNative = 0;

	pFnIsSeatControllerReplicationViewer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsSeatControllerReplicationViewer, &IsSeatControllerReplicationViewer_Parms, NULL );

	pFnIsSeatControllerReplicationViewer->FunctionFlags |= 0x400;

	pFnIsSeatControllerReplicationViewer->iNative = NativeIndex;

	return IsSeatControllerReplicationViewer_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.GetBarrelIndex
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

int AUDKVehicle::GetBarrelIndex ( int SeatIndex )
{
	static UFunction* pFnGetBarrelIndex = NULL;

	if ( ! pFnGetBarrelIndex )
		pFnGetBarrelIndex = (UFunction*) UObject::GObjObjects()->Data[ 43432 ];

	AUDKVehicle_execGetBarrelIndex_Parms GetBarrelIndex_Parms;
	GetBarrelIndex_Parms.SeatIndex = SeatIndex;

	pFnGetBarrelIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBarrelIndex, &GetBarrelIndex_Parms, NULL );

	pFnGetBarrelIndex->FunctionFlags |= 0x400;

	return GetBarrelIndex_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.GetSeatPivotPoint
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )

struct FVector AUDKVehicle::GetSeatPivotPoint ( int SeatIndex )
{
	static UFunction* pFnGetSeatPivotPoint = NULL;

	if ( ! pFnGetSeatPivotPoint )
		pFnGetSeatPivotPoint = (UFunction*) UObject::GObjObjects()->Data[ 43429 ];

	AUDKVehicle_execGetSeatPivotPoint_Parms GetSeatPivotPoint_Parms;
	GetSeatPivotPoint_Parms.SeatIndex = SeatIndex;

	pFnGetSeatPivotPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSeatPivotPoint, &GetSeatPivotPoint_Parms, NULL );

	pFnGetSeatPivotPoint->FunctionFlags |= 0x400;

	return GetSeatPivotPoint_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.ForceWeaponRotation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// int                            SeatIndex                      ( CPF_Parm )
// struct FRotator                NewRotation                    ( CPF_Parm )

void AUDKVehicle::ForceWeaponRotation ( int SeatIndex, struct FRotator NewRotation )
{
	static UFunction* pFnForceWeaponRotation = NULL;

	if ( ! pFnForceWeaponRotation )
		pFnForceWeaponRotation = (UFunction*) UObject::GObjObjects()->Data[ 43426 ];

	AUDKVehicle_execForceWeaponRotation_Parms ForceWeaponRotation_Parms;
	ForceWeaponRotation_Parms.SeatIndex = SeatIndex;
	memcpy ( &ForceWeaponRotation_Parms.NewRotation, &NewRotation, 0xC );

	pFnForceWeaponRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForceWeaponRotation, &ForceWeaponRotation_Parms, NULL );

	pFnForceWeaponRotation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicle.SeatFiringMode
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )
// unsigned char                  NewFireMode                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReadValue                     ( CPF_OptionalParm | CPF_Parm )

unsigned char AUDKVehicle::SeatFiringMode ( int SeatIndex, unsigned char NewFireMode, unsigned long bReadValue )
{
	static UFunction* pFnSeatFiringMode = NULL;

	if ( ! pFnSeatFiringMode )
		pFnSeatFiringMode = (UFunction*) UObject::GObjObjects()->Data[ 43421 ];

	AUDKVehicle_execSeatFiringMode_Parms SeatFiringMode_Parms;
	SeatFiringMode_Parms.SeatIndex = SeatIndex;
	SeatFiringMode_Parms.NewFireMode = NewFireMode;
	SeatFiringMode_Parms.bReadValue = bReadValue;

	pFnSeatFiringMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSeatFiringMode, &SeatFiringMode_Parms, NULL );

	pFnSeatFiringMode->FunctionFlags |= 0x400;

	return SeatFiringMode_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.SeatFlashCount
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )
// unsigned char                  NewCount                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReadValue                     ( CPF_OptionalParm | CPF_Parm )

unsigned char AUDKVehicle::SeatFlashCount ( int SeatIndex, unsigned char NewCount, unsigned long bReadValue )
{
	static UFunction* pFnSeatFlashCount = NULL;

	if ( ! pFnSeatFlashCount )
		pFnSeatFlashCount = (UFunction*) UObject::GObjObjects()->Data[ 43416 ];

	AUDKVehicle_execSeatFlashCount_Parms SeatFlashCount_Parms;
	SeatFlashCount_Parms.SeatIndex = SeatIndex;
	SeatFlashCount_Parms.NewCount = NewCount;
	SeatFlashCount_Parms.bReadValue = bReadValue;

	pFnSeatFlashCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSeatFlashCount, &SeatFlashCount_Parms, NULL );

	pFnSeatFlashCount->FunctionFlags |= 0x400;

	return SeatFlashCount_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.SeatFlashLocation
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )
// struct FVector                 NewLoc                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReadValue                     ( CPF_OptionalParm | CPF_Parm )

struct FVector AUDKVehicle::SeatFlashLocation ( int SeatIndex, struct FVector NewLoc, unsigned long bReadValue )
{
	static UFunction* pFnSeatFlashLocation = NULL;

	if ( ! pFnSeatFlashLocation )
		pFnSeatFlashLocation = (UFunction*) UObject::GObjObjects()->Data[ 43411 ];

	AUDKVehicle_execSeatFlashLocation_Parms SeatFlashLocation_Parms;
	SeatFlashLocation_Parms.SeatIndex = SeatIndex;
	memcpy ( &SeatFlashLocation_Parms.NewLoc, &NewLoc, 0xC );
	SeatFlashLocation_Parms.bReadValue = bReadValue;

	pFnSeatFlashLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSeatFlashLocation, &SeatFlashLocation_Parms, NULL );

	pFnSeatFlashLocation->FunctionFlags |= 0x400;

	return SeatFlashLocation_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicle.SeatWeaponRotation
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            SeatIndex                      ( CPF_Parm )
// struct FRotator                NewRot                         ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bReadValue                     ( CPF_OptionalParm | CPF_Parm )

struct FRotator AUDKVehicle::SeatWeaponRotation ( int SeatIndex, struct FRotator NewRot, unsigned long bReadValue )
{
	static UFunction* pFnSeatWeaponRotation = NULL;

	if ( ! pFnSeatWeaponRotation )
		pFnSeatWeaponRotation = (UFunction*) UObject::GObjObjects()->Data[ 43406 ];

	AUDKVehicle_execSeatWeaponRotation_Parms SeatWeaponRotation_Parms;
	SeatWeaponRotation_Parms.SeatIndex = SeatIndex;
	memcpy ( &SeatWeaponRotation_Parms.NewRot, &NewRot, 0xC );
	SeatWeaponRotation_Parms.bReadValue = bReadValue;

	pFnSeatWeaponRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSeatWeaponRotation, &SeatWeaponRotation_Parms, NULL );

	pFnSeatWeaponRotation->FunctionFlags |= 0x400;

	return SeatWeaponRotation_Parms.ReturnValue;
};

// Function UDKBase.UDKWeaponPawn.GetTargetLocation
// [0x00024500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  RequestedBy                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRequestAlternateLoc           ( CPF_OptionalParm | CPF_Parm )

struct FVector AUDKWeaponPawn::GetTargetLocation ( class AActor* RequestedBy, unsigned long bRequestAlternateLoc )
{
	static UFunction* pFnGetTargetLocation = NULL;

	if ( ! pFnGetTargetLocation )
		pFnGetTargetLocation = (UFunction*) UObject::GObjObjects()->Data[ 43648 ];

	AUDKWeaponPawn_execGetTargetLocation_Parms GetTargetLocation_Parms;
	GetTargetLocation_Parms.RequestedBy = RequestedBy;
	GetTargetLocation_Parms.bRequestAlternateLoc = bRequestAlternateLoc;

	pFnGetTargetLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTargetLocation, &GetTargetLocation_Parms, NULL );

	pFnGetTargetLocation->FunctionFlags |= 0x400;

	return GetTargetLocation_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleFactory.GetTeamNum
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUDKVehicleFactory::GetTeamNum ( )
{
	static UFunction* pFnGetTeamNum = NULL;

	if ( ! pFnGetTeamNum )
		pFnGetTeamNum = (UFunction*) UObject::GObjObjects()->Data[ 43500 ];

	AUDKVehicleFactory_execGetTeamNum_Parms GetTeamNum_Parms;

	pFnGetTeamNum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTeamNum, &GetTeamNum_Parms, NULL );

	pFnGetTeamNum->FunctionFlags |= 0x400;

	return GetTeamNum_Parms.ReturnValue;
};

// Function UDKBase.UDKVehicleFactory.SetHUDLocation
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// struct FVector                 NewHUDLocation                 ( CPF_Parm )

void AUDKVehicleFactory::SetHUDLocation ( struct FVector NewHUDLocation )
{
	static UFunction* pFnSetHUDLocation = NULL;

	if ( ! pFnSetHUDLocation )
		pFnSetHUDLocation = (UFunction*) UObject::GObjObjects()->Data[ 43498 ];

	AUDKVehicleFactory_execSetHUDLocation_Parms SetHUDLocation_Parms;
	memcpy ( &SetHUDLocation_Parms.NewHUDLocation, &NewHUDLocation, 0xC );

	pFnSetHUDLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetHUDLocation, &SetHUDLocation_Parms, NULL );

	pFnSetHUDLocation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicleFactory.SpawnVehicle
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AUDKVehicleFactory::eventSpawnVehicle ( )
{
	static UFunction* pFnSpawnVehicle = NULL;

	if ( ! pFnSpawnVehicle )
		pFnSpawnVehicle = (UFunction*) UObject::GObjObjects()->Data[ 43497 ];

	AUDKVehicleFactory_eventSpawnVehicle_Parms SpawnVehicle_Parms;

	this->ProcessEvent ( pFnSpawnVehicle, &SpawnVehicle_Parms, NULL );
};

// Function UDKBase.UDKVehicleSimHoverboard.UpdateLeanConstraint
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class URB_ConstraintInstance*  LeanUprightConstraintInstance  ( CPF_Parm )
// struct FVector                 LeanY                          ( CPF_Parm )
// struct FVector                 LeanZ                          ( CPF_Parm )

void UUDKVehicleSimHoverboard::UpdateLeanConstraint ( class URB_ConstraintInstance* LeanUprightConstraintInstance, struct FVector LeanY, struct FVector LeanZ )
{
	static UFunction* pFnUpdateLeanConstraint = NULL;

	if ( ! pFnUpdateLeanConstraint )
		pFnUpdateLeanConstraint = (UFunction*) UObject::GObjObjects()->Data[ 43618 ];

	UUDKVehicleSimHoverboard_execUpdateLeanConstraint_Parms UpdateLeanConstraint_Parms;
	UpdateLeanConstraint_Parms.LeanUprightConstraintInstance = LeanUprightConstraintInstance;
	memcpy ( &UpdateLeanConstraint_Parms.LeanY, &LeanY, 0xC );
	memcpy ( &UpdateLeanConstraint_Parms.LeanZ, &LeanZ, 0xC );

	pFnUpdateLeanConstraint->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateLeanConstraint, &UpdateLeanConstraint_Parms, NULL );

	pFnUpdateLeanConstraint->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicleSimHoverboard.InitWheels
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AUDKVehicle*             Vehicle                        ( CPF_Parm )

void UUDKVehicleSimHoverboard::InitWheels ( class AUDKVehicle* Vehicle )
{
	static UFunction* pFnInitWheels = NULL;

	if ( ! pFnInitWheels )
		pFnInitWheels = (UFunction*) UObject::GObjObjects()->Data[ 43616 ];

	UUDKVehicleSimHoverboard_execInitWheels_Parms InitWheels_Parms;
	InitWheels_Parms.Vehicle = Vehicle;

	pFnInitWheels->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitWheels, &InitWheels_Parms, NULL );

	pFnInitWheels->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKVehicleWheel.OldEffectFinished
// [0x00020002] 
// Parameters infos:
// class UParticleSystemComponent* PSystem                        ( CPF_Parm | CPF_EditInline )

void UUDKVehicleWheel::OldEffectFinished ( class UParticleSystemComponent* PSystem )
{
	static UFunction* pFnOldEffectFinished = NULL;

	if ( ! pFnOldEffectFinished )
		pFnOldEffectFinished = (UFunction*) UObject::GObjObjects()->Data[ 43629 ];

	UUDKVehicleWheel_execOldEffectFinished_Parms OldEffectFinished_Parms;
	OldEffectFinished_Parms.PSystem = PSystem;

	this->ProcessEvent ( pFnOldEffectFinished, &OldEffectFinished_Parms, NULL );
};

// Function UDKBase.UDKVehicleWheel.SetParticleEffect
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AUDKVehicle*             OwnerVehicle                   ( CPF_Parm )
// class UParticleSystem*         NewTemplate                    ( CPF_Parm )

void UUDKVehicleWheel::eventSetParticleEffect ( class AUDKVehicle* OwnerVehicle, class UParticleSystem* NewTemplate )
{
	static UFunction* pFnSetParticleEffect = NULL;

	if ( ! pFnSetParticleEffect )
		pFnSetParticleEffect = (UFunction*) UObject::GObjObjects()->Data[ 43626 ];

	UUDKVehicleWheel_eventSetParticleEffect_Parms SetParticleEffect_Parms;
	SetParticleEffect_Parms.OwnerVehicle = OwnerVehicle;
	SetParticleEffect_Parms.NewTemplate = NewTemplate;

	this->ProcessEvent ( pFnSetParticleEffect, &SetParticleEffect_Parms, NULL );
};

// Function UDKBase.UDKWeapon.SetPosition
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// class AUDKPawn*                Holder                         ( CPF_Parm )

void AUDKWeapon::eventSetPosition ( class AUDKPawn* Holder )
{
	static UFunction* pFnSetPosition = NULL;

	if ( ! pFnSetPosition )
		pFnSetPosition = (UFunction*) UObject::GObjObjects()->Data[ 43642 ];

	AUDKWeapon_eventSetPosition_Parms SetPosition_Parms;
	SetPosition_Parms.Holder = Holder;

	this->ProcessEvent ( pFnSetPosition, &SetPosition_Parms, NULL );
};

// Function UDKBase.UDKWeapon.EnsureWeaponOverlayComponentLast
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void AUDKWeapon::EnsureWeaponOverlayComponentLast ( )
{
	static UFunction* pFnEnsureWeaponOverlayComponentLast = NULL;

	if ( ! pFnEnsureWeaponOverlayComponentLast )
		pFnEnsureWeaponOverlayComponentLast = (UFunction*) UObject::GObjObjects()->Data[ 43641 ];

	AUDKWeapon_execEnsureWeaponOverlayComponentLast_Parms EnsureWeaponOverlayComponentLast_Parms;

	pFnEnsureWeaponOverlayComponentLast->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnsureWeaponOverlayComponentLast, &EnsureWeaponOverlayComponentLast_Parms, NULL );

	pFnEnsureWeaponOverlayComponentLast->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKWeapon.BestMode
// [0x00020000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char AUDKWeapon::BestMode ( )
{
	static UFunction* pFnBestMode = NULL;

	if ( ! pFnBestMode )
		pFnBestMode = (UFunction*) UObject::GObjObjects()->Data[ 43191 ];

	AUDKWeapon_execBestMode_Parms BestMode_Parms;

	this->ProcessEvent ( pFnBestMode, &BestMode_Parms, NULL );

	return BestMode_Parms.ReturnValue;
};

// Function UDKBase.UDKWeapon.IsAimCorrect
// [0x00020900] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AUDKWeapon::eventIsAimCorrect ( )
{
	static UFunction* pFnIsAimCorrect = NULL;

	if ( ! pFnIsAimCorrect )
		pFnIsAimCorrect = (UFunction*) UObject::GObjObjects()->Data[ 43166 ];

	AUDKWeapon_eventIsAimCorrect_Parms IsAimCorrect_Parms;

	this->ProcessEvent ( pFnIsAimCorrect, &IsAimCorrect_Parms, NULL );

	return IsAimCorrect_Parms.ReturnValue;
};

// Function UDKBase.UDKWeapon.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AUDKWeapon::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 43640 ];

	AUDKWeapon_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UDKBase.UDKAnimBlendBase.TickAnim
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void UUDKAnimBlendBase::eventTickAnim ( float DeltaSeconds )
{
	static UFunction* pFnTickAnim = NULL;

	if ( ! pFnTickAnim )
		pFnTickAnim = (UFunction*) UObject::GObjObjects()->Data[ 41944 ];

	UUDKAnimBlendBase_eventTickAnim_Parms TickAnim_Parms;
	TickAnim_Parms.DeltaSeconds = DeltaSeconds;

	this->ProcessEvent ( pFnTickAnim, &TickAnim_Parms, NULL );
};

// Function UDKBase.UDKAnimBlendBase.GetAnimDuration
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ChildIndex                     ( CPF_Parm )

float UUDKAnimBlendBase::GetAnimDuration ( int ChildIndex )
{
	static UFunction* pFnGetAnimDuration = NULL;

	if ( ! pFnGetAnimDuration )
		pFnGetAnimDuration = (UFunction*) UObject::GObjObjects()->Data[ 41941 ];

	UUDKAnimBlendBase_execGetAnimDuration_Parms GetAnimDuration_Parms;
	GetAnimDuration_Parms.ChildIndex = ChildIndex;

	pFnGetAnimDuration->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAnimDuration, &GetAnimDuration_Parms, NULL );

	pFnGetAnimDuration->FunctionFlags |= 0x400;

	return GetAnimDuration_Parms.ReturnValue;
};

// Function UDKBase.UDKAnimBlendBase.GetBlendTime
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ChildIndex                     ( CPF_Parm )
// unsigned long                  bGetDefault                    ( CPF_OptionalParm | CPF_Parm )

float UUDKAnimBlendBase::GetBlendTime ( int ChildIndex, unsigned long bGetDefault )
{
	static UFunction* pFnGetBlendTime = NULL;

	if ( ! pFnGetBlendTime )
		pFnGetBlendTime = (UFunction*) UObject::GObjObjects()->Data[ 41937 ];

	UUDKAnimBlendBase_execGetBlendTime_Parms GetBlendTime_Parms;
	GetBlendTime_Parms.ChildIndex = ChildIndex;
	GetBlendTime_Parms.bGetDefault = bGetDefault;

	pFnGetBlendTime->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBlendTime, &GetBlendTime_Parms, NULL );

	pFnGetBlendTime->FunctionFlags |= 0x400;

	return GetBlendTime_Parms.ReturnValue;
};

// Function UDKBase.UDKAnimBlendByFlying.UpdateFlyingState
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UUDKAnimBlendByFlying::UpdateFlyingState ( )
{
	static UFunction* pFnUpdateFlyingState = NULL;

	if ( ! pFnUpdateFlyingState )
		pFnUpdateFlyingState = (UFunction*) UObject::GObjObjects()->Data[ 41966 ];

	UUDKAnimBlendByFlying_execUpdateFlyingState_Parms UpdateFlyingState_Parms;

	pFnUpdateFlyingState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateFlyingState, &UpdateFlyingState_Parms, NULL );

	pFnUpdateFlyingState->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimBlendByPhysicsVolume.PhysicsVolumeChanged
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APhysicsVolume*          NewVolume                      ( CPF_Parm )

void UUDKAnimBlendByPhysicsVolume::eventPhysicsVolumeChanged ( class APhysicsVolume* NewVolume )
{
	static UFunction* pFnPhysicsVolumeChanged = NULL;

	if ( ! pFnPhysicsVolumeChanged )
		pFnPhysicsVolumeChanged = (UFunction*) UObject::GObjObjects()->Data[ 41994 ];

	UUDKAnimBlendByPhysicsVolume_eventPhysicsVolumeChanged_Parms PhysicsVolumeChanged_Parms;
	PhysicsVolumeChanged_Parms.NewVolume = NewVolume;

	this->ProcessEvent ( pFnPhysicsVolumeChanged, &PhysicsVolumeChanged_Parms, NULL );
};

// Function UDKBase.UDKAnimBlendByVehicle.UpdateVehicleState
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UUDKAnimBlendByVehicle::UpdateVehicleState ( )
{
	static UFunction* pFnUpdateVehicleState = NULL;

	if ( ! pFnUpdateVehicleState )
		pFnUpdateVehicleState = (UFunction*) UObject::GObjObjects()->Data[ 42007 ];

	UUDKAnimBlendByVehicle_execUpdateVehicleState_Parms UpdateVehicleState_Parms;

	pFnUpdateVehicleState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateVehicleState, &UpdateVehicleState_Parms, NULL );

	pFnUpdateVehicleState->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimBlendByDriving.UpdateDrivingState
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UUDKAnimBlendByDriving::UpdateDrivingState ( )
{
	static UFunction* pFnUpdateDrivingState = NULL;

	if ( ! pFnUpdateDrivingState )
		pFnUpdateDrivingState = (UFunction*) UObject::GObjObjects()->Data[ 41946 ];

	UUDKAnimBlendByDriving_execUpdateDrivingState_Parms UpdateDrivingState_Parms;

	pFnUpdateDrivingState->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateDrivingState, &UpdateDrivingState_Parms, NULL );

	pFnUpdateDrivingState->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimBlendByWeapon.AnimStopFire
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// float                          SpecialBlendTime               ( CPF_OptionalParm | CPF_Parm )

void UUDKAnimBlendByWeapon::eventAnimStopFire ( float SpecialBlendTime )
{
	static UFunction* pFnAnimStopFire = NULL;

	if ( ! pFnAnimStopFire )
		pFnAnimStopFire = (UFunction*) UObject::GObjObjects()->Data[ 42018 ];

	UUDKAnimBlendByWeapon_eventAnimStopFire_Parms AnimStopFire_Parms;
	AnimStopFire_Parms.SpecialBlendTime = SpecialBlendTime;

	this->ProcessEvent ( pFnAnimStopFire, &AnimStopFire_Parms, NULL );
};

// Function UDKBase.UDKAnimBlendByWeapon.AnimFire
// [0x00024002] 
// Parameters infos:
// struct FName                   FireSequence                   ( CPF_Parm )
// unsigned long                  bAutoFire                      ( CPF_Parm )
// float                          AnimRate                       ( CPF_OptionalParm | CPF_Parm )
// float                          SpecialBlendTime               ( CPF_OptionalParm | CPF_Parm )
// struct FName                   LoopSequence                   ( CPF_OptionalParm | CPF_Parm )

void UUDKAnimBlendByWeapon::AnimFire ( struct FName FireSequence, unsigned long bAutoFire, float AnimRate, float SpecialBlendTime, struct FName LoopSequence )
{
	static UFunction* pFnAnimFire = NULL;

	if ( ! pFnAnimFire )
		pFnAnimFire = (UFunction*) UObject::GObjObjects()->Data[ 42011 ];

	UUDKAnimBlendByWeapon_execAnimFire_Parms AnimFire_Parms;
	memcpy ( &AnimFire_Parms.FireSequence, &FireSequence, 0x8 );
	AnimFire_Parms.bAutoFire = bAutoFire;
	AnimFire_Parms.AnimRate = AnimRate;
	AnimFire_Parms.SpecialBlendTime = SpecialBlendTime;
	memcpy ( &AnimFire_Parms.LoopSequence, &LoopSequence, 0x8 );

	this->ProcessEvent ( pFnAnimFire, &AnimFire_Parms, NULL );
};

// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          Perc                           ( CPF_Parm )

void UUDKAnimNodeFramePlayer::SetAnimPosition ( float Perc )
{
	static UFunction* pFnSetAnimPosition = NULL;

	if ( ! pFnSetAnimPosition )
		pFnSetAnimPosition = (UFunction*) UObject::GObjObjects()->Data[ 42043 ];

	UUDKAnimNodeFramePlayer_execSetAnimPosition_Parms SetAnimPosition_Parms;
	SetAnimPosition_Parms.Perc = Perc;

	pFnSetAnimPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAnimPosition, &SetAnimPosition_Parms, NULL );

	pFnSetAnimPosition->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimNodeFramePlayer.SetAnimation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   Sequence                       ( CPF_Parm )
// float                          RateScale                      ( CPF_Parm )

void UUDKAnimNodeFramePlayer::SetAnimation ( struct FName Sequence, float RateScale )
{
	static UFunction* pFnSetAnimation = NULL;

	if ( ! pFnSetAnimation )
		pFnSetAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42040 ];

	UUDKAnimNodeFramePlayer_execSetAnimation_Parms SetAnimation_Parms;
	memcpy ( &SetAnimation_Parms.Sequence, &Sequence, 0x8 );
	SetAnimation_Parms.RateScale = RateScale;

	pFnSetAnimation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAnimation, &SetAnimation_Parms, NULL );

	pFnSetAnimation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimNodeJumpLeanOffset.SetLeanWeight
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          WeightTarget                   ( CPF_Parm )
// float                          BlendTime                      ( CPF_Parm )

void UUDKAnimNodeJumpLeanOffset::SetLeanWeight ( float WeightTarget, float BlendTime )
{
	static UFunction* pFnSetLeanWeight = NULL;

	if ( ! pFnSetLeanWeight )
		pFnSetLeanWeight = (UFunction*) UObject::GObjObjects()->Data[ 42058 ];

	UUDKAnimNodeJumpLeanOffset_execSetLeanWeight_Parms SetLeanWeight_Parms;
	SetLeanWeight_Parms.WeightTarget = WeightTarget;
	SetLeanWeight_Parms.BlendTime = BlendTime;

	pFnSetLeanWeight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetLeanWeight, &SetLeanWeight_Parms, NULL );

	pFnSetLeanWeight->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimNodeSequence.OnInit
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUDKAnimNodeSequence::eventOnInit ( )
{
	static UFunction* pFnOnInit = NULL;

	if ( ! pFnOnInit )
		pFnOnInit = (UFunction*) UObject::GObjObjects()->Data[ 42074 ];

	UUDKAnimNodeSequence_eventOnInit_Parms OnInit_Parms;

	this->ProcessEvent ( pFnOnInit, &OnInit_Parms, NULL );
};

// Function UDKBase.UDKAnimNodeSequence.PlayAnimationSet
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< struct FName >         Sequences                      ( CPF_Parm | CPF_NeedCtorLink )
// float                          SeqRate                        ( CPF_Parm )
// unsigned long                  bLoopLast                      ( CPF_Parm )

void UUDKAnimNodeSequence::PlayAnimationSet ( TArray< struct FName > Sequences, float SeqRate, unsigned long bLoopLast )
{
	static UFunction* pFnPlayAnimationSet = NULL;

	if ( ! pFnPlayAnimationSet )
		pFnPlayAnimationSet = (UFunction*) UObject::GObjObjects()->Data[ 42069 ];

	UUDKAnimNodeSequence_execPlayAnimationSet_Parms PlayAnimationSet_Parms;
	memcpy ( &PlayAnimationSet_Parms.Sequences, &Sequences, 0xC );
	PlayAnimationSet_Parms.SeqRate = SeqRate;
	PlayAnimationSet_Parms.bLoopLast = bLoopLast;

	pFnPlayAnimationSet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayAnimationSet, &PlayAnimationSet_Parms, NULL );

	pFnPlayAnimationSet->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKAnimNodeSequence.PlayAnimation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   Sequence                       ( CPF_Parm )
// float                          SeqRate                        ( CPF_Parm )
// unsigned long                  bSeqLoop                       ( CPF_Parm )

void UUDKAnimNodeSequence::PlayAnimation ( struct FName Sequence, float SeqRate, unsigned long bSeqLoop )
{
	static UFunction* pFnPlayAnimation = NULL;

	if ( ! pFnPlayAnimation )
		pFnPlayAnimation = (UFunction*) UObject::GObjObjects()->Data[ 42065 ];

	UUDKAnimNodeSequence_execPlayAnimation_Parms PlayAnimation_Parms;
	memcpy ( &PlayAnimation_Parms.Sequence, &Sequence, 0x8 );
	PlayAnimation_Parms.SeqRate = SeqRate;
	PlayAnimation_Parms.bSeqLoop = bSeqLoop;

	pFnPlayAnimation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayAnimation, &PlayAnimation_Parms, NULL );

	pFnPlayAnimation->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKSkelControl_CantileverBeam.EntireBeamVelocity
// [0x00120002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UUDKSkelControl_CantileverBeam::EntireBeamVelocity ( )
{
	static UFunction* pFnEntireBeamVelocity = NULL;

	if ( ! pFnEntireBeamVelocity )
		pFnEntireBeamVelocity = (UFunction*) UObject::GObjObjects()->Data[ 42767 ];

	UUDKSkelControl_CantileverBeam_execEntireBeamVelocity_Parms EntireBeamVelocity_Parms;

	this->ProcessEvent ( pFnEntireBeamVelocity, &EntireBeamVelocity_Parms, NULL );

	return EntireBeamVelocity_Parms.ReturnValue;
};

// Function UDKBase.UDKSkelControl_Damage.RestorePart
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UUDKSkelControl_Damage::eventRestorePart ( )
{
	static UFunction* pFnRestorePart = NULL;

	if ( ! pFnRestorePart )
		pFnRestorePart = (UFunction*) UObject::GObjObjects()->Data[ 42811 ];

	UUDKSkelControl_Damage_eventRestorePart_Parms RestorePart_Parms;

	this->ProcessEvent ( pFnRestorePart, &RestorePart_Parms, NULL );

	return RestorePart_Parms.ReturnValue;
};

// Function UDKBase.UDKSkelControl_Damage.BreakApartOnDeath
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 PartLocation                   ( CPF_Parm )
// unsigned long                  bIsVisible                     ( CPF_Parm )

void UUDKSkelControl_Damage::eventBreakApartOnDeath ( struct FVector PartLocation, unsigned long bIsVisible )
{
	static UFunction* pFnBreakApartOnDeath = NULL;

	if ( ! pFnBreakApartOnDeath )
		pFnBreakApartOnDeath = (UFunction*) UObject::GObjObjects()->Data[ 42808 ];

	UUDKSkelControl_Damage_eventBreakApartOnDeath_Parms BreakApartOnDeath_Parms;
	memcpy ( &BreakApartOnDeath_Parms.PartLocation, &PartLocation, 0xC );
	BreakApartOnDeath_Parms.bIsVisible = bIsVisible;

	this->ProcessEvent ( pFnBreakApartOnDeath, &BreakApartOnDeath_Parms, NULL );
};

// Function UDKBase.UDKSkelControl_Damage.BreakApart
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 PartLocation                   ( CPF_Parm )
// unsigned long                  bIsVisible                     ( CPF_Parm )

void UUDKSkelControl_Damage::eventBreakApart ( struct FVector PartLocation, unsigned long bIsVisible )
{
	static UFunction* pFnBreakApart = NULL;

	if ( ! pFnBreakApart )
		pFnBreakApart = (UFunction*) UObject::GObjObjects()->Data[ 42805 ];

	UUDKSkelControl_Damage_eventBreakApart_Parms BreakApart_Parms;
	memcpy ( &BreakApart_Parms.PartLocation, &PartLocation, 0xC );
	BreakApart_Parms.bIsVisible = bIsVisible;

	this->ProcessEvent ( pFnBreakApart, &BreakApart_Parms, NULL );
};

// Function UDKBase.UDKSkelControl_MassBoneScaling.GetBoneScale
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   BoneName                       ( CPF_Parm )

float UUDKSkelControl_MassBoneScaling::GetBoneScale ( struct FName BoneName )
{
	static UFunction* pFnGetBoneScale = NULL;

	if ( ! pFnGetBoneScale )
		pFnGetBoneScale = (UFunction*) UObject::GObjObjects()->Data[ 42877 ];

	UUDKSkelControl_MassBoneScaling_execGetBoneScale_Parms GetBoneScale_Parms;
	memcpy ( &GetBoneScale_Parms.BoneName, &BoneName, 0x8 );

	pFnGetBoneScale->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoneScale, &GetBoneScale_Parms, NULL );

	pFnGetBoneScale->FunctionFlags |= 0x400;

	return GetBoneScale_Parms.ReturnValue;
};

// Function UDKBase.UDKSkelControl_MassBoneScaling.SetBoneScale
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   BoneName                       ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )

void UUDKSkelControl_MassBoneScaling::SetBoneScale ( struct FName BoneName, float Scale )
{
	static UFunction* pFnSetBoneScale = NULL;

	if ( ! pFnSetBoneScale )
		pFnSetBoneScale = (UFunction*) UObject::GObjObjects()->Data[ 42874 ];

	UUDKSkelControl_MassBoneScaling_execSetBoneScale_Parms SetBoneScale_Parms;
	memcpy ( &SetBoneScale_Parms.BoneName, &BoneName, 0x8 );
	SetBoneScale_Parms.Scale = Scale;

	pFnSetBoneScale->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBoneScale, &SetBoneScale_Parms, NULL );

	pFnSetBoneScale->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKSkelControl_TurretConstrained.WouldConstrainPitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            TestPitch                      ( CPF_Parm )
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

bool UUDKSkelControl_TurretConstrained::WouldConstrainPitch ( int TestPitch, class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnWouldConstrainPitch = NULL;

	if ( ! pFnWouldConstrainPitch )
		pFnWouldConstrainPitch = (UFunction*) UObject::GObjObjects()->Data[ 42922 ];

	UUDKSkelControl_TurretConstrained_execWouldConstrainPitch_Parms WouldConstrainPitch_Parms;
	WouldConstrainPitch_Parms.TestPitch = TestPitch;
	WouldConstrainPitch_Parms.SkelComp = SkelComp;

	pFnWouldConstrainPitch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWouldConstrainPitch, &WouldConstrainPitch_Parms, NULL );

	pFnWouldConstrainPitch->FunctionFlags |= 0x400;

	return WouldConstrainPitch_Parms.ReturnValue;
};

// Function UDKBase.UDKSkelControl_TurretConstrained.InitTurret
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                InitRot                        ( CPF_Parm )
// class USkeletalMeshComponent*  SkelComp                       ( CPF_Parm | CPF_EditInline )

void UUDKSkelControl_TurretConstrained::InitTurret ( struct FRotator InitRot, class USkeletalMeshComponent* SkelComp )
{
	static UFunction* pFnInitTurret = NULL;

	if ( ! pFnInitTurret )
		pFnInitTurret = (UFunction*) UObject::GObjObjects()->Data[ 42919 ];

	UUDKSkelControl_TurretConstrained_execInitTurret_Parms InitTurret_Parms;
	memcpy ( &InitTurret_Parms.InitRot, &InitRot, 0xC );
	InitTurret_Parms.SkelComp = SkelComp;

	pFnInitTurret->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitTurret, &InitTurret_Parms, NULL );

	pFnInitTurret->FunctionFlags |= 0x400;
};

// Function UDKBase.UDKSkelControl_TurretConstrained.OnTurretStatusChange
// [0x00120000] 
// Parameters infos:
// unsigned long                  bIsMoving                      ( CPF_Parm )

void UUDKSkelControl_TurretConstrained::OnTurretStatusChange ( unsigned long bIsMoving )
{
	static UFunction* pFnOnTurretStatusChange = NULL;

	if ( ! pFnOnTurretStatusChange )
		pFnOnTurretStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 42893 ];

	UUDKSkelControl_TurretConstrained_execOnTurretStatusChange_Parms OnTurretStatusChange_Parms;
	OnTurretStatusChange_Parms.bIsMoving = bIsMoving;

	this->ProcessEvent ( pFnOnTurretStatusChange, &OnTurretStatusChange_Parms, NULL );
};

// Function UDKBase.SimplePawn.GetPawnViewLocation
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector ASimplePawn::GetPawnViewLocation ( )
{
	static UFunction* pFnGetPawnViewLocation = NULL;

	if ( ! pFnGetPawnViewLocation )
		pFnGetPawnViewLocation = (UFunction*) UObject::GObjObjects()->Data[ 41928 ];

	ASimplePawn_execGetPawnViewLocation_Parms GetPawnViewLocation_Parms;

	this->ProcessEvent ( pFnGetPawnViewLocation, &GetPawnViewLocation_Parms, NULL );

	return GetPawnViewLocation_Parms.ReturnValue;
};

// Function UDKBase.SimplePawn.TickSpecial
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASimplePawn::eventTickSpecial ( float DeltaTime )
{
	static UFunction* pFnTickSpecial = NULL;

	if ( ! pFnTickSpecial )
		pFnTickSpecial = (UFunction*) UObject::GObjObjects()->Data[ 41920 ];

	ASimplePawn_eventTickSpecial_Parms TickSpecial_Parms;
	TickSpecial_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTickSpecial, &TickSpecial_Parms, NULL );
};

// Function UDKBase.SimplePawn.CalcCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool ASimplePawn::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 41912 ];

	ASimplePawn_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function UDKBase.SimplePawn.FixedView
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ASimplePawn::FixedView ( )
{
	static UFunction* pFnFixedView = NULL;

	if ( ! pFnFixedView )
		pFnFixedView = (UFunction*) UObject::GObjObjects()->Data[ 41911 ];

	ASimplePawn_execFixedView_Parms FixedView_Parms;

	this->ProcessEvent ( pFnFixedView, &FixedView_Parms, NULL );
};

// Function UDKBase.SimplePawn.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ASimplePawn::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 41910 ];

	ASimplePawn_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UDKBase.SimplePC.SetFootstepsToSnow
// [0x00020200] ( FUNC_Exec )
// Parameters infos:

void ASimplePC::SetFootstepsToSnow ( )
{
	static UFunction* pFnSetFootstepsToSnow = NULL;

	if ( ! pFnSetFootstepsToSnow )
		pFnSetFootstepsToSnow = (UFunction*) UObject::GObjObjects()->Data[ 41349 ];

	ASimplePC_execSetFootstepsToSnow_Parms SetFootstepsToSnow_Parms;

	this->ProcessEvent ( pFnSetFootstepsToSnow, &SetFootstepsToSnow_Parms, NULL );
};

// Function UDKBase.SimplePC.SetFootstepsToStone
// [0x00020200] ( FUNC_Exec )
// Parameters infos:

void ASimplePC::SetFootstepsToStone ( )
{
	static UFunction* pFnSetFootstepsToStone = NULL;

	if ( ! pFnSetFootstepsToStone )
		pFnSetFootstepsToStone = (UFunction*) UObject::GObjObjects()->Data[ 41348 ];

	ASimplePC_execSetFootstepsToStone_Parms SetFootstepsToStone_Parms;

	this->ProcessEvent ( pFnSetFootstepsToStone, &SetFootstepsToStone_Parms, NULL );
};

// Function UDKBase.SimplePC.PlayerTick
// [0x00820002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASimplePC::PlayerTick ( float DeltaTime )
{
	static UFunction* pFnPlayerTick = NULL;

	if ( ! pFnPlayerTick )
		pFnPlayerTick = (UFunction*) UObject::GObjObjects()->Data[ 41337 ];

	ASimplePC_execPlayerTick_Parms PlayerTick_Parms;
	PlayerTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerTick, &PlayerTick_Parms, NULL );
};

// Function UDKBase.SimplePC.GetPlayerViewPoint
// [0x00420902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 out_Location                   ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_Rotation                   ( CPF_Parm | CPF_OutParm )

void ASimplePC::eventGetPlayerViewPoint ( struct FVector* out_Location, struct FRotator* out_Rotation )
{
	static UFunction* pFnGetPlayerViewPoint = NULL;

	if ( ! pFnGetPlayerViewPoint )
		pFnGetPlayerViewPoint = (UFunction*) UObject::GObjObjects()->Data[ 41334 ];

	ASimplePC_eventGetPlayerViewPoint_Parms GetPlayerViewPoint_Parms;

	this->ProcessEvent ( pFnGetPlayerViewPoint, &GetPlayerViewPoint_Parms, NULL );

	if ( out_Location )
		memcpy ( out_Location, &GetPlayerViewPoint_Parms.out_Location, 0xC );

	if ( out_Rotation )
		memcpy ( out_Rotation, &GetPlayerViewPoint_Parms.out_Rotation, 0xC );
};

// Function UDKBase.SimplePC.NotifyDirectorControl
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bNowControlling                ( CPF_Parm )
// class USeqAct_Interp*          CurrentMatinee                 ( CPF_Parm )

void ASimplePC::eventNotifyDirectorControl ( unsigned long bNowControlling, class USeqAct_Interp* CurrentMatinee )
{
	static UFunction* pFnNotifyDirectorControl = NULL;

	if ( ! pFnNotifyDirectorControl )
		pFnNotifyDirectorControl = (UFunction*) UObject::GObjObjects()->Data[ 41331 ];

	ASimplePC_eventNotifyDirectorControl_Parms NotifyDirectorControl_Parms;
	NotifyDirectorControl_Parms.bNowControlling = bNowControlling;
	NotifyDirectorControl_Parms.CurrentMatinee = CurrentMatinee;

	this->ProcessEvent ( pFnNotifyDirectorControl, &NotifyDirectorControl_Parms, NULL );
};

// Function UDKBase.SimplePC.OffsetMatineeTouch
// [0x00020002] 
// Parameters infos:
// int                            Handle                         ( CPF_Parm )
// unsigned char                  Type                           ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )
// float                          DeviceTimestamp                ( CPF_Parm )
// int                            TouchpadIndex                  ( CPF_Parm )

void ASimplePC::OffsetMatineeTouch ( int Handle, unsigned char Type, struct FVector2D TouchLocation, float DeviceTimestamp, int TouchpadIndex )
{
	static UFunction* pFnOffsetMatineeTouch = NULL;

	if ( ! pFnOffsetMatineeTouch )
		pFnOffsetMatineeTouch = (UFunction*) UObject::GObjObjects()->Data[ 41325 ];

	ASimplePC_execOffsetMatineeTouch_Parms OffsetMatineeTouch_Parms;
	OffsetMatineeTouch_Parms.Handle = Handle;
	OffsetMatineeTouch_Parms.Type = Type;
	memcpy ( &OffsetMatineeTouch_Parms.TouchLocation, &TouchLocation, 0x8 );
	OffsetMatineeTouch_Parms.DeviceTimestamp = DeviceTimestamp;
	OffsetMatineeTouch_Parms.TouchpadIndex = TouchpadIndex;

	this->ProcessEvent ( pFnOffsetMatineeTouch, &OffsetMatineeTouch_Parms, NULL );
};

// Function UDKBase.SimplePC.ActivateControlGroup
// [0x00020002] 
// Parameters infos:

void ASimplePC::ActivateControlGroup ( )
{
	static UFunction* pFnActivateControlGroup = NULL;

	if ( ! pFnActivateControlGroup )
		pFnActivateControlGroup = (UFunction*) UObject::GObjObjects()->Data[ 41324 ];

	ASimplePC_execActivateControlGroup_Parms ActivateControlGroup_Parms;

	this->ProcessEvent ( pFnActivateControlGroup, &ActivateControlGroup_Parms, NULL );
};

// Function UDKBase.SimplePC.UpdateCameraBreathing
// [0x00820102] 
// Parameters infos:

void ASimplePC::UpdateCameraBreathing ( )
{
	static UFunction* pFnUpdateCameraBreathing = NULL;

	if ( ! pFnUpdateCameraBreathing )
		pFnUpdateCameraBreathing = (UFunction*) UObject::GObjObjects()->Data[ 41316 ];

	ASimplePC_execUpdateCameraBreathing_Parms UpdateCameraBreathing_Parms;

	this->ProcessEvent ( pFnUpdateCameraBreathing, &UpdateCameraBreathing_Parms, NULL );
};

// Function UDKBase.SimplePC.CheckDistanceToDestination
// [0x00020100] 
// Parameters infos:
// float                          DistToDestination              ( CPF_Parm )

void ASimplePC::CheckDistanceToDestination ( float DistToDestination )
{
	static UFunction* pFnCheckDistanceToDestination = NULL;

	if ( ! pFnCheckDistanceToDestination )
		pFnCheckDistanceToDestination = (UFunction*) UObject::GObjObjects()->Data[ 41314 ];

	ASimplePC_execCheckDistanceToDestination_Parms CheckDistanceToDestination_Parms;
	CheckDistanceToDestination_Parms.DistToDestination = DistToDestination;

	this->ProcessEvent ( pFnCheckDistanceToDestination, &CheckDistanceToDestination_Parms, NULL );
};

// Function UDKBase.SimplePC.ProcessViewRotation
// [0x00C20002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                DeltaRot                       ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )

void ASimplePC::ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 41294 ];

	ASimplePC_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	memcpy ( &ProcessViewRotation_Parms.DeltaRot, &DeltaRot, 0xC );

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );
};

// Function UDKBase.SimplePC.UpdateRotation
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASimplePC::UpdateRotation ( float DeltaTime )
{
	static UFunction* pFnUpdateRotation = NULL;

	if ( ! pFnUpdateRotation )
		pFnUpdateRotation = (UFunction*) UObject::GObjObjects()->Data[ 41291 ];

	ASimplePC_execUpdateRotation_Parms UpdateRotation_Parms;
	UpdateRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateRotation, &UpdateRotation_Parms, NULL );
};

// Function UDKBase.SimplePC.PlayerMove
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ASimplePC::PlayerMove ( float DeltaTime )
{
	static UFunction* pFnPlayerMove = NULL;

	if ( ! pFnPlayerMove )
		pFnPlayerMove = (UFunction*) UObject::GObjObjects()->Data[ 41289 ];

	ASimplePC_execPlayerMove_Parms PlayerMove_Parms;
	PlayerMove_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerMove, &PlayerMove_Parms, NULL );
};

// Function UDKBase.SimplePC.SetNextFootstepDistance
// [0x00020002] 
// Parameters infos:

void ASimplePC::SetNextFootstepDistance ( )
{
	static UFunction* pFnSetNextFootstepDistance = NULL;

	if ( ! pFnSetNextFootstepDistance )
		pFnSetNextFootstepDistance = (UFunction*) UObject::GObjObjects()->Data[ 41288 ];

	ASimplePC_execSetNextFootstepDistance_Parms SetNextFootstepDistance_Parms;

	this->ProcessEvent ( pFnSetNextFootstepDistance, &SetNextFootstepDistance_Parms, NULL );
};

// Function UDKBase.SimplePC.IsStickMoveActive
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ASimplePC::IsStickMoveActive ( )
{
	static UFunction* pFnIsStickMoveActive = NULL;

	if ( ! pFnIsStickMoveActive )
		pFnIsStickMoveActive = (UFunction*) UObject::GObjObjects()->Data[ 41286 ];

	ASimplePC_execIsStickMoveActive_Parms IsStickMoveActive_Parms;

	this->ProcessEvent ( pFnIsStickMoveActive, &IsStickMoveActive_Parms, NULL );

	return IsStickMoveActive_Parms.ReturnValue;
};

// Function UDKBase.SimplePC.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ASimplePC::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 41285 ];

	ASimplePC_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UDKBase.SimplePC.SetupZones
// [0x00020002] 
// Parameters infos:

void ASimplePC::SetupZones ( )
{
	static UFunction* pFnSetupZones = NULL;

	if ( ! pFnSetupZones )
		pFnSetupZones = (UFunction*) UObject::GObjObjects()->Data[ 41282 ];

	ASimplePC_execSetupZones_Parms SetupZones_Parms;

	this->ProcessEvent ( pFnSetupZones, &SetupZones_Parms, NULL );
};

// Function UDKBase.SimplePC.ReceivedGameClass
// [0x00020102] 
// Parameters infos:
// class UClass*                  GameClass                      ( CPF_Parm )

void ASimplePC::ReceivedGameClass ( class UClass* GameClass )
{
	static UFunction* pFnReceivedGameClass = NULL;

	if ( ! pFnReceivedGameClass )
		pFnReceivedGameClass = (UFunction*) UObject::GObjObjects()->Data[ 41280 ];

	ASimplePC_execReceivedGameClass_Parms ReceivedGameClass_Parms;
	ReceivedGameClass_Parms.GameClass = GameClass;

	this->ProcessEvent ( pFnReceivedGameClass, &ReceivedGameClass_Parms, NULL );
};

// Function UDKBase.SimplePC.OnConsoleCommand
// [0x00020002] 
// Parameters infos:
// class USeqAct_ConsoleCommand*  inAction                       ( CPF_Parm )

void ASimplePC::OnConsoleCommand ( class USeqAct_ConsoleCommand* inAction )
{
	static UFunction* pFnOnConsoleCommand = NULL;

	if ( ! pFnOnConsoleCommand )
		pFnOnConsoleCommand = (UFunction*) UObject::GObjObjects()->Data[ 41277 ];

	ASimplePC_execOnConsoleCommand_Parms OnConsoleCommand_Parms;
	OnConsoleCommand_Parms.inAction = inAction;

	this->ProcessEvent ( pFnOnConsoleCommand, &OnConsoleCommand_Parms, NULL );
};

// Function UDKBase.SimplePC.InitInputSystem
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ASimplePC::eventInitInputSystem ( )
{
	static UFunction* pFnInitInputSystem = NULL;

	if ( ! pFnInitInputSystem )
		pFnInitInputSystem = (UFunction*) UObject::GObjObjects()->Data[ 41276 ];

	ASimplePC_eventInitInputSystem_Parms InitInputSystem_Parms;

	this->ProcessEvent ( pFnInitInputSystem, &InitInputSystem_Parms, NULL );
};

// Function UDKBase.CastleGame.SetGameType
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MapName                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Options                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Portal                         ( CPF_Parm | CPF_NeedCtorLink )

class UClass* ACastleGame::eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal )
{
	static UFunction* pFnSetGameType = NULL;

	if ( ! pFnSetGameType )
		pFnSetGameType = (UFunction*) UObject::GObjObjects()->Data[ 41226 ];

	ACastleGame_eventSetGameType_Parms SetGameType_Parms;
	memcpy ( &SetGameType_Parms.MapName, &MapName, 0xC );
	memcpy ( &SetGameType_Parms.Options, &Options, 0xC );
	memcpy ( &SetGameType_Parms.Portal, &Portal, 0xC );

	this->ProcessEvent ( pFnSetGameType, &SetGameType_Parms, NULL );

	return SetGameType_Parms.ReturnValue;
};

// Function UDKBase.CastleGame.PreventDeath
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class AController*             Killer                         ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )

bool ACastleGame::PreventDeath ( class APawn* KilledPawn, class AController* Killer, class UClass* DamageType, struct FVector HitLocation )
{
	static UFunction* pFnPreventDeath = NULL;

	if ( ! pFnPreventDeath )
		pFnPreventDeath = (UFunction*) UObject::GObjObjects()->Data[ 41220 ];

	ACastleGame_execPreventDeath_Parms PreventDeath_Parms;
	PreventDeath_Parms.KilledPawn = KilledPawn;
	PreventDeath_Parms.Killer = Killer;
	PreventDeath_Parms.DamageType = DamageType;
	memcpy ( &PreventDeath_Parms.HitLocation, &HitLocation, 0xC );

	this->ProcessEvent ( pFnPreventDeath, &PreventDeath_Parms, NULL );

	return PreventDeath_Parms.ReturnValue;
};

// Function UDKBase.CastleGame.OnEngineHasLoaded
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ACastleGame::eventOnEngineHasLoaded ( )
{
	static UFunction* pFnOnEngineHasLoaded = NULL;

	if ( ! pFnOnEngineHasLoaded )
		pFnOnEngineHasLoaded = (UFunction*) UObject::GObjObjects()->Data[ 41219 ];

	ACastleGame_eventOnEngineHasLoaded_Parms OnEngineHasLoaded_Parms;

	this->ProcessEvent ( pFnOnEngineHasLoaded, &OnEngineHasLoaded_Parms, NULL );
};

// Function UDKBase.MobileHUDExt.FlashSticks
// [0x00020002] 
// Parameters infos:

void AMobileHUDExt::FlashSticks ( )
{
	static UFunction* pFnFlashSticks = NULL;

	if ( ! pFnFlashSticks )
		pFnFlashSticks = (UFunction*) UObject::GObjObjects()->Data[ 41702 ];

	AMobileHUDExt_execFlashSticks_Parms FlashSticks_Parms;

	this->ProcessEvent ( pFnFlashSticks, &FlashSticks_Parms, NULL );
};

// Function UDKBase.MobileHUDExt.DrawMobileZone_Joystick
// [0x00820002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUDExt::DrawMobileZone_Joystick ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Joystick = NULL;

	if ( ! pFnDrawMobileZone_Joystick )
		pFnDrawMobileZone_Joystick = (UFunction*) UObject::GObjObjects()->Data[ 41690 ];

	AMobileHUDExt_execDrawMobileZone_Joystick_Parms DrawMobileZone_Joystick_Parms;
	DrawMobileZone_Joystick_Parms.Zone = Zone;

	this->ProcessEvent ( pFnDrawMobileZone_Joystick, &DrawMobileZone_Joystick_Parms, NULL );
};

// Function UDKBase.MobileHUDExt.DrawMobileZone_Slider
// [0x00820002] 
// Parameters infos:
// class UMobileInputZone*        Zone                           ( CPF_Parm )

void AMobileHUDExt::DrawMobileZone_Slider ( class UMobileInputZone* Zone )
{
	static UFunction* pFnDrawMobileZone_Slider = NULL;

	if ( ! pFnDrawMobileZone_Slider )
		pFnDrawMobileZone_Slider = (UFunction*) UObject::GObjObjects()->Data[ 41683 ];

	AMobileHUDExt_execDrawMobileZone_Slider_Parms DrawMobileZone_Slider_Parms;
	DrawMobileZone_Slider_Parms.Zone = Zone;

	this->ProcessEvent ( pFnDrawMobileZone_Slider, &DrawMobileZone_Slider_Parms, NULL );
};

// Function UDKBase.MobileHUDExt.PostRender
// [0x00020002] 
// Parameters infos:

void AMobileHUDExt::PostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 41675 ];

	AMobileHUDExt_execPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function UDKBase.MobileHUDExt.ShowMobileHud
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMobileHUDExt::ShowMobileHud ( )
{
	static UFunction* pFnShowMobileHud = NULL;

	if ( ! pFnShowMobileHud )
		pFnShowMobileHud = (UFunction*) UObject::GObjObjects()->Data[ 41673 ];

	AMobileHUDExt_execShowMobileHud_Parms ShowMobileHud_Parms;

	this->ProcessEvent ( pFnShowMobileHud, &ShowMobileHud_Parms, NULL );

	return ShowMobileHud_Parms.ReturnValue;
};

// Function UDKBase.MobileHUDExt.ConditionallyDrawTapToMoveEffect
// [0x00020002] 
// Parameters infos:

void AMobileHUDExt::ConditionallyDrawTapToMoveEffect ( )
{
	static UFunction* pFnConditionallyDrawTapToMoveEffect = NULL;

	if ( ! pFnConditionallyDrawTapToMoveEffect )
		pFnConditionallyDrawTapToMoveEffect = (UFunction*) UObject::GObjObjects()->Data[ 41664 ];

	AMobileHUDExt_execConditionallyDrawTapToMoveEffect_Parms ConditionallyDrawTapToMoveEffect_Parms;

	this->ProcessEvent ( pFnConditionallyDrawTapToMoveEffect, &ConditionallyDrawTapToMoveEffect_Parms, NULL );
};

// Function UDKBase.MobileHUDExt.StartTapToMoveEffect
// [0x00020002] 
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

void AMobileHUDExt::StartTapToMoveEffect ( float X, float Y )
{
	static UFunction* pFnStartTapToMoveEffect = NULL;

	if ( ! pFnStartTapToMoveEffect )
		pFnStartTapToMoveEffect = (UFunction*) UObject::GObjObjects()->Data[ 41661 ];

	AMobileHUDExt_execStartTapToMoveEffect_Parms StartTapToMoveEffect_Parms;
	StartTapToMoveEffect_Parms.X = X;
	StartTapToMoveEffect_Parms.Y = Y;

	this->ProcessEvent ( pFnStartTapToMoveEffect, &StartTapToMoveEffect_Parms, NULL );
};

// Function UDKBase.CastlePC.SetFootstepsToSnow
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACastlePC::SetFootstepsToSnow ( )
{
	static UFunction* pFnSetFootstepsToSnow = NULL;

	if ( ! pFnSetFootstepsToSnow )
		pFnSetFootstepsToSnow = (UFunction*) UObject::GObjObjects()->Data[ 41486 ];

	ACastlePC_execSetFootstepsToSnow_Parms SetFootstepsToSnow_Parms;

	this->ProcessEvent ( pFnSetFootstepsToSnow, &SetFootstepsToSnow_Parms, NULL );
};

// Function UDKBase.CastlePC.SetFootstepsToStone
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACastlePC::SetFootstepsToStone ( )
{
	static UFunction* pFnSetFootstepsToStone = NULL;

	if ( ! pFnSetFootstepsToStone )
		pFnSetFootstepsToStone = (UFunction*) UObject::GObjObjects()->Data[ 41477 ];

	ACastlePC_execSetFootstepsToStone_Parms SetFootstepsToStone_Parms;

	this->ProcessEvent ( pFnSetFootstepsToStone, &SetFootstepsToStone_Parms, NULL );
};

// Function UDKBase.CastlePC.StartTutorials
// [0x00020002] 
// Parameters infos:

void ACastlePC::StartTutorials ( )
{
	static UFunction* pFnStartTutorials = NULL;

	if ( ! pFnStartTutorials )
		pFnStartTutorials = (UFunction*) UObject::GObjObjects()->Data[ 41476 ];

	ACastlePC_execStartTutorials_Parms StartTutorials_Parms;

	this->ProcessEvent ( pFnStartTutorials, &StartTutorials_Parms, NULL );
};

// Function UDKBase.CastlePC.FlashHelp
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          Duration                       ( CPF_Parm )

void ACastlePC::FlashHelp ( float Duration )
{
	static UFunction* pFnFlashHelp = NULL;

	if ( ! pFnFlashHelp )
		pFnFlashHelp = (UFunction*) UObject::GObjObjects()->Data[ 41474 ];

	ACastlePC_execFlashHelp_Parms FlashHelp_Parms;
	FlashHelp_Parms.Duration = Duration;

	this->ProcessEvent ( pFnFlashHelp, &FlashHelp_Parms, NULL );
};

// Function UDKBase.CastlePC.ShowSplash
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACastlePC::ShowSplash ( )
{
	static UFunction* pFnShowSplash = NULL;

	if ( ! pFnShowSplash )
		pFnShowSplash = (UFunction*) UObject::GObjObjects()->Data[ 41472 ];

	ACastlePC_execShowSplash_Parms ShowSplash_Parms;

	this->ProcessEvent ( pFnShowSplash, &ShowSplash_Parms, NULL );
};

// Function UDKBase.CastlePC.PlayerTick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void ACastlePC::PlayerTick ( float DeltaTime )
{
	static UFunction* pFnPlayerTick = NULL;

	if ( ! pFnPlayerTick )
		pFnPlayerTick = (UFunction*) UObject::GObjObjects()->Data[ 41470 ];

	ACastlePC_execPlayerTick_Parms PlayerTick_Parms;
	PlayerTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnPlayerTick, &PlayerTick_Parms, NULL );
};

// Function UDKBase.CastlePC.ProcessMenuSlide
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// int                            SlideValue                     ( CPF_Parm )
// struct FVector2D               ViewportSizes                  ( CPF_Parm )

bool ACastlePC::ProcessMenuSlide ( class UMobileInputZone* Zone, unsigned char EventType, int SlideValue, struct FVector2D ViewportSizes )
{
	static UFunction* pFnProcessMenuSlide = NULL;

	if ( ! pFnProcessMenuSlide )
		pFnProcessMenuSlide = (UFunction*) UObject::GObjObjects()->Data[ 41464 ];

	ACastlePC_execProcessMenuSlide_Parms ProcessMenuSlide_Parms;
	ProcessMenuSlide_Parms.Zone = Zone;
	ProcessMenuSlide_Parms.EventType = EventType;
	ProcessMenuSlide_Parms.SlideValue = SlideValue;
	memcpy ( &ProcessMenuSlide_Parms.ViewportSizes, &ViewportSizes, 0x8 );

	this->ProcessEvent ( pFnProcessMenuSlide, &ProcessMenuSlide_Parms, NULL );

	return ProcessMenuSlide_Parms.ReturnValue;
};

// Function UDKBase.CastlePC.MenuSliderTap
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool ACastlePC::MenuSliderTap ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnMenuSliderTap = NULL;

	if ( ! pFnMenuSliderTap )
		pFnMenuSliderTap = (UFunction*) UObject::GObjObjects()->Data[ 41459 ];

	ACastlePC_execMenuSliderTap_Parms MenuSliderTap_Parms;
	MenuSliderTap_Parms.Zone = Zone;
	MenuSliderTap_Parms.EventType = EventType;
	memcpy ( &MenuSliderTap_Parms.TouchLocation, &TouchLocation, 0x8 );

	this->ProcessEvent ( pFnMenuSliderTap, &MenuSliderTap_Parms, NULL );

	return MenuSliderTap_Parms.ReturnValue;
};

// Function UDKBase.CastlePC.OpenMenu
// [0x00020002] 
// Parameters infos:

void ACastlePC::OpenMenu ( )
{
	static UFunction* pFnOpenMenu = NULL;

	if ( ! pFnOpenMenu )
		pFnOpenMenu = (UFunction*) UObject::GObjObjects()->Data[ 41457 ];

	ACastlePC_execOpenMenu_Parms OpenMenu_Parms;

	this->ProcessEvent ( pFnOpenMenu, &OpenMenu_Parms, NULL );
};

// Function UDKBase.CastlePC.ResetMenu
// [0x00020002] 
// Parameters infos:

void ACastlePC::ResetMenu ( )
{
	static UFunction* pFnResetMenu = NULL;

	if ( ! pFnResetMenu )
		pFnResetMenu = (UFunction*) UObject::GObjObjects()->Data[ 41456 ];

	ACastlePC_execResetMenu_Parms ResetMenu_Parms;

	this->ProcessEvent ( pFnResetMenu, &ResetMenu_Parms, NULL );
};

// Function UDKBase.CastlePC.AutoSlide
// [0x00020002] 
// Parameters infos:
// float                          Destination                    ( CPF_Parm )

void ACastlePC::AutoSlide ( float Destination )
{
	static UFunction* pFnAutoSlide = NULL;

	if ( ! pFnAutoSlide )
		pFnAutoSlide = (UFunction*) UObject::GObjObjects()->Data[ 41454 ];

	ACastlePC_execAutoSlide_Parms AutoSlide_Parms;
	AutoSlide_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAutoSlide, &AutoSlide_Parms, NULL );
};

// Function UDKBase.CastlePC.ExitAttractTap
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool ACastlePC::ExitAttractTap ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnExitAttractTap = NULL;

	if ( ! pFnExitAttractTap )
		pFnExitAttractTap = (UFunction*) UObject::GObjObjects()->Data[ 41449 ];

	ACastlePC_execExitAttractTap_Parms ExitAttractTap_Parms;
	ExitAttractTap_Parms.Zone = Zone;
	ExitAttractTap_Parms.EventType = EventType;
	memcpy ( &ExitAttractTap_Parms.TouchLocation, &TouchLocation, 0x8 );

	this->ProcessEvent ( pFnExitAttractTap, &ExitAttractTap_Parms, NULL );

	return ExitAttractTap_Parms.ReturnValue;
};

// Function UDKBase.CastlePC.ExitAttractMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACastlePC::ExitAttractMode ( )
{
	static UFunction* pFnExitAttractMode = NULL;

	if ( ! pFnExitAttractMode )
		pFnExitAttractMode = (UFunction*) UObject::GObjObjects()->Data[ 41448 ];

	ACastlePC_execExitAttractMode_Parms ExitAttractMode_Parms;

	this->ProcessEvent ( pFnExitAttractMode, &ExitAttractMode_Parms, NULL );
};

// Function UDKBase.CastlePC.EnterAttractMode
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACastlePC::EnterAttractMode ( )
{
	static UFunction* pFnEnterAttractMode = NULL;

	if ( ! pFnEnterAttractMode )
		pFnEnterAttractMode = (UFunction*) UObject::GObjObjects()->Data[ 41447 ];

	ACastlePC_execEnterAttractMode_Parms EnterAttractMode_Parms;

	this->ProcessEvent ( pFnEnterAttractMode, &EnterAttractMode_Parms, NULL );
};

// Function UDKBase.CastlePC.NotifyDirectorControl
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bNowControlling                ( CPF_Parm )
// class USeqAct_Interp*          CurrentMatinee                 ( CPF_Parm )

void ACastlePC::eventNotifyDirectorControl ( unsigned long bNowControlling, class USeqAct_Interp* CurrentMatinee )
{
	static UFunction* pFnNotifyDirectorControl = NULL;

	if ( ! pFnNotifyDirectorControl )
		pFnNotifyDirectorControl = (UFunction*) UObject::GObjObjects()->Data[ 41444 ];

	ACastlePC_eventNotifyDirectorControl_Parms NotifyDirectorControl_Parms;
	NotifyDirectorControl_Parms.bNowControlling = bNowControlling;
	NotifyDirectorControl_Parms.CurrentMatinee = CurrentMatinee;

	this->ProcessEvent ( pFnNotifyDirectorControl, &NotifyDirectorControl_Parms, NULL );
};

// Function UDKBase.CastlePC.CheckDistanceToDestination
// [0x00020102] 
// Parameters infos:
// float                          DistToDestination              ( CPF_Parm )

void ACastlePC::CheckDistanceToDestination ( float DistToDestination )
{
	static UFunction* pFnCheckDistanceToDestination = NULL;

	if ( ! pFnCheckDistanceToDestination )
		pFnCheckDistanceToDestination = (UFunction*) UObject::GObjObjects()->Data[ 41442 ];

	ACastlePC_execCheckDistanceToDestination_Parms CheckDistanceToDestination_Parms;
	CheckDistanceToDestination_Parms.DistToDestination = DistToDestination;

	this->ProcessEvent ( pFnCheckDistanceToDestination, &CheckDistanceToDestination_Parms, NULL );
};

// Function UDKBase.CastlePC.ProcessViewRotation
// [0x00C20002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                DeltaRot                       ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )

void ACastlePC::ProcessViewRotation ( float DeltaTime, struct FRotator DeltaRot, struct FRotator* out_ViewRotation )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 41436 ];

	ACastlePC_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	memcpy ( &ProcessViewRotation_Parms.DeltaRot, &DeltaRot, 0xC );

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );
};

// Function UDKBase.CastlePC.PlayerLookAtDestination
// [0x00020002] 
// Parameters infos:

void ACastlePC::PlayerLookAtDestination ( )
{
	static UFunction* pFnPlayerLookAtDestination = NULL;

	if ( ! pFnPlayerLookAtDestination )
		pFnPlayerLookAtDestination = (UFunction*) UObject::GObjObjects()->Data[ 41426 ];

	ACastlePC_execPlayerLookAtDestination_Parms PlayerLookAtDestination_Parms;

	this->ProcessEvent ( pFnPlayerLookAtDestination, &PlayerLookAtDestination_Parms, NULL );
};

// Function UDKBase.CastlePC.DoTapToMove
// [0x00020002] 
// Parameters infos:
// struct FVector                 NewDestination                 ( CPF_Parm )
// unsigned long                  bShouldLookAtDestination       ( CPF_Parm )

void ACastlePC::DoTapToMove ( struct FVector NewDestination, unsigned long bShouldLookAtDestination )
{
	static UFunction* pFnDoTapToMove = NULL;

	if ( ! pFnDoTapToMove )
		pFnDoTapToMove = (UFunction*) UObject::GObjObjects()->Data[ 41423 ];

	ACastlePC_execDoTapToMove_Parms DoTapToMove_Parms;
	memcpy ( &DoTapToMove_Parms.NewDestination, &NewDestination, 0xC );
	DoTapToMove_Parms.bShouldLookAtDestination = bShouldLookAtDestination;

	this->ProcessEvent ( pFnDoTapToMove, &DoTapToMove_Parms, NULL );
};

// Function UDKBase.CastlePC.TapToMoveTap
// [0x00820002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UMobileInputZone*        Zone                           ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// struct FVector2D               TouchLocation                  ( CPF_Parm )

bool ACastlePC::TapToMoveTap ( class UMobileInputZone* Zone, unsigned char EventType, struct FVector2D TouchLocation )
{
	static UFunction* pFnTapToMoveTap = NULL;

	if ( ! pFnTapToMoveTap )
		pFnTapToMoveTap = (UFunction*) UObject::GObjObjects()->Data[ 41409 ];

	ACastlePC_execTapToMoveTap_Parms TapToMoveTap_Parms;
	TapToMoveTap_Parms.Zone = Zone;
	TapToMoveTap_Parms.EventType = EventType;
	memcpy ( &TapToMoveTap_Parms.TouchLocation, &TouchLocation, 0x8 );

	this->ProcessEvent ( pFnTapToMoveTap, &TapToMoveTap_Parms, NULL );

	return TapToMoveTap_Parms.ReturnValue;
};

// Function UDKBase.CastlePC.TraceForTapToMove
// [0x00C20102] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   TraceOwner                     ( CPF_Parm )
// struct FVector                 End                            ( CPF_Parm )
// struct FVector                 Start                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm | CPF_OutParm )
// struct FVector                 HitNormal                      ( CPF_Parm | CPF_OutParm )

class AActor* ACastlePC::TraceForTapToMove ( class APawn* TraceOwner, struct FVector End, struct FVector Start, struct FVector* HitLocation, struct FVector* HitNormal )
{
	static UFunction* pFnTraceForTapToMove = NULL;

	if ( ! pFnTraceForTapToMove )
		pFnTraceForTapToMove = (UFunction*) UObject::GObjObjects()->Data[ 41398 ];

	ACastlePC_execTraceForTapToMove_Parms TraceForTapToMove_Parms;
	TraceForTapToMove_Parms.TraceOwner = TraceOwner;
	memcpy ( &TraceForTapToMove_Parms.End, &End, 0xC );
	memcpy ( &TraceForTapToMove_Parms.Start, &Start, 0xC );

	this->ProcessEvent ( pFnTraceForTapToMove, &TraceForTapToMove_Parms, NULL );

	if ( HitLocation )
		memcpy ( HitLocation, &TraceForTapToMove_Parms.HitLocation, 0xC );

	if ( HitNormal )
		memcpy ( HitNormal, &TraceForTapToMove_Parms.HitNormal, 0xC );

	return TraceForTapToMove_Parms.ReturnValue;
};

// Function UDKBase.CastlePC.CheckInactivity
// [0x00020002] 
// Parameters infos:

void ACastlePC::CheckInactivity ( )
{
	static UFunction* pFnCheckInactivity = NULL;

	if ( ! pFnCheckInactivity )
		pFnCheckInactivity = (UFunction*) UObject::GObjObjects()->Data[ 41397 ];

	ACastlePC_execCheckInactivity_Parms CheckInactivity_Parms;

	this->ProcessEvent ( pFnCheckInactivity, &CheckInactivity_Parms, NULL );
};

// Function UDKBase.CastlePC.SaveControllerStats
// [0x00020002] 
// Parameters infos:

void ACastlePC::SaveControllerStats ( )
{
	static UFunction* pFnSaveControllerStats = NULL;

	if ( ! pFnSaveControllerStats )
		pFnSaveControllerStats = (UFunction*) UObject::GObjObjects()->Data[ 41396 ];

	ACastlePC_execSaveControllerStats_Parms SaveControllerStats_Parms;

	this->ProcessEvent ( pFnSaveControllerStats, &SaveControllerStats_Parms, NULL );
};

// Function UDKBase.CastlePC.SetupZones
// [0x00020002] 
// Parameters infos:

void ACastlePC::SetupZones ( )
{
	static UFunction* pFnSetupZones = NULL;

	if ( ! pFnSetupZones )
		pFnSetupZones = (UFunction*) UObject::GObjObjects()->Data[ 41393 ];

	ACastlePC_execSetupZones_Parms SetupZones_Parms;

	this->ProcessEvent ( pFnSetupZones, &SetupZones_Parms, NULL );
};

// Function UDKBase.CastlePC.OnEngineInitialTick
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ACastlePC::eventOnEngineInitialTick ( )
{
	static UFunction* pFnOnEngineInitialTick = NULL;

	if ( ! pFnOnEngineInitialTick )
		pFnOnEngineInitialTick = (UFunction*) UObject::GObjObjects()->Data[ 41392 ];

	ACastlePC_eventOnEngineInitialTick_Parms OnEngineInitialTick_Parms;

	this->ProcessEvent ( pFnOnEngineInitialTick, &OnEngineInitialTick_Parms, NULL );
};

// Function UDKBase.CastlePC.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ACastlePC::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 41391 ];

	ACastlePC_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function UDKBase.CastlePC.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ACastlePC::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 41390 ];

	ACastlePC_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UDKBase.MobileMenuControls.RenderScene
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobileMenuControls::RenderScene ( class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnRenderScene = NULL;

	if ( ! pFnRenderScene )
		pFnRenderScene = (UFunction*) UObject::GObjObjects()->Data[ 41731 ];

	UMobileMenuControls_execRenderScene_Parms RenderScene_Parms;
	RenderScene_Parms.Canvas = Canvas;
	RenderScene_Parms.RenderDelta = RenderDelta;

	this->ProcessEvent ( pFnRenderScene, &RenderScene_Parms, NULL );
};

// Function UDKBase.MobileMenuControls.Setup
// [0x00020002] 
// Parameters infos:
// unsigned long                  bTap                           ( CPF_Parm )

void UMobileMenuControls::Setup ( unsigned long bTap )
{
	static UFunction* pFnSetup = NULL;

	if ( ! pFnSetup )
		pFnSetup = (UFunction*) UObject::GObjObjects()->Data[ 41729 ];

	UMobileMenuControls_execSetup_Parms Setup_Parms;
	Setup_Parms.bTap = bTap;

	this->ProcessEvent ( pFnSetup, &Setup_Parms, NULL );
};

// Function UDKBase.MobileMenuControls.FadeOut
// [0x00020002] 
// Parameters infos:

void UMobileMenuControls::FadeOut ( )
{
	static UFunction* pFnFadeOut = NULL;

	if ( ! pFnFadeOut )
		pFnFadeOut = (UFunction*) UObject::GObjObjects()->Data[ 41728 ];

	UMobileMenuControls_execFadeOut_Parms FadeOut_Parms;

	this->ProcessEvent ( pFnFadeOut, &FadeOut_Parms, NULL );
};

// Function UDKBase.MobileMenuDebug.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuObject*       Sender                         ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )

void UMobileMenuDebug::eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 41738 ];

	UMobileMenuDebug_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.Sender = Sender;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function UDKBase.MobileMenuBase.RenderScene
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobileMenuBase::RenderScene ( class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnRenderScene = NULL;

	if ( ! pFnRenderScene )
		pFnRenderScene = (UFunction*) UObject::GObjObjects()->Data[ 41716 ];

	UMobileMenuBase_execRenderScene_Parms RenderScene_Parms;
	RenderScene_Parms.Canvas = Canvas;
	RenderScene_Parms.RenderDelta = RenderDelta;

	this->ProcessEvent ( pFnRenderScene, &RenderScene_Parms, NULL );
};

// Function UDKBase.MobileMenuBase.Fade
// [0x00020002] 
// Parameters infos:
// unsigned long                  bIsFadeOut                     ( CPF_Parm )
// float                          FadeDur                        ( CPF_Parm )

void UMobileMenuBase::Fade ( unsigned long bIsFadeOut, float FadeDur )
{
	static UFunction* pFnFade = NULL;

	if ( ! pFnFade )
		pFnFade = (UFunction*) UObject::GObjObjects()->Data[ 41712 ];

	UMobileMenuBase_execFade_Parms Fade_Parms;
	Fade_Parms.bIsFadeOut = bIsFadeOut;
	Fade_Parms.FadeDur = FadeDur;

	this->ProcessEvent ( pFnFade, &Fade_Parms, NULL );
};

// Function UDKBase.MobileMenuPause.ReleaseHelp
// [0x00020002] 
// Parameters infos:

void UMobileMenuPause::ReleaseHelp ( )
{
	static UFunction* pFnReleaseHelp = NULL;

	if ( ! pFnReleaseHelp )
		pFnReleaseHelp = (UFunction*) UObject::GObjObjects()->Data[ 41783 ];

	UMobileMenuPause_execReleaseHelp_Parms ReleaseHelp_Parms;

	this->ProcessEvent ( pFnReleaseHelp, &ReleaseHelp_Parms, NULL );
};

// Function UDKBase.MobileMenuPause.FlashHelp
// [0x00020002] 
// Parameters infos:
// float                          Duration                       ( CPF_Parm )

void UMobileMenuPause::FlashHelp ( float Duration )
{
	static UFunction* pFnFlashHelp = NULL;

	if ( ! pFnFlashHelp )
		pFnFlashHelp = (UFunction*) UObject::GObjObjects()->Data[ 41781 ];

	UMobileMenuPause_execFlashHelp_Parms FlashHelp_Parms;
	FlashHelp_Parms.Duration = Duration;

	this->ProcessEvent ( pFnFlashHelp, &FlashHelp_Parms, NULL );
};

// Function UDKBase.MobileMenuPause.OnSceneTouch
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )
// unsigned long                  bInside                        ( CPF_Parm )

bool UMobileMenuPause::OnSceneTouch ( unsigned char EventType, float X, float Y, unsigned long bInside )
{
	static UFunction* pFnOnSceneTouch = NULL;

	if ( ! pFnOnSceneTouch )
		pFnOnSceneTouch = (UFunction*) UObject::GObjObjects()->Data[ 41774 ];

	UMobileMenuPause_execOnSceneTouch_Parms OnSceneTouch_Parms;
	OnSceneTouch_Parms.EventType = EventType;
	OnSceneTouch_Parms.X = X;
	OnSceneTouch_Parms.Y = Y;
	OnSceneTouch_Parms.bInside = bInside;

	this->ProcessEvent ( pFnOnSceneTouch, &OnSceneTouch_Parms, NULL );

	return OnSceneTouch_Parms.ReturnValue;
};

// Function UDKBase.MobileMenuPause.RenderScene
// [0x00020002] 
// Parameters infos:
// class UCanvas*                 Canvas                         ( CPF_Parm )
// float                          RenderDelta                    ( CPF_Parm )

void UMobileMenuPause::RenderScene ( class UCanvas* Canvas, float RenderDelta )
{
	static UFunction* pFnRenderScene = NULL;

	if ( ! pFnRenderScene )
		pFnRenderScene = (UFunction*) UObject::GObjObjects()->Data[ 41771 ];

	UMobileMenuPause_execRenderScene_Parms RenderScene_Parms;
	RenderScene_Parms.Canvas = Canvas;
	RenderScene_Parms.RenderDelta = RenderDelta;

	this->ProcessEvent ( pFnRenderScene, &RenderScene_Parms, NULL );
};

// Function UDKBase.MobileMenuPause.HackInactiveAlpha
// [0x00020002] 
// Parameters infos:
// float                          NewValue                       ( CPF_Parm )

void UMobileMenuPause::HackInactiveAlpha ( float NewValue )
{
	static UFunction* pFnHackInactiveAlpha = NULL;

	if ( ! pFnHackInactiveAlpha )
		pFnHackInactiveAlpha = (UFunction*) UObject::GObjObjects()->Data[ 41768 ];

	UMobileMenuPause_execHackInactiveAlpha_Parms HackInactiveAlpha_Parms;
	HackInactiveAlpha_Parms.NewValue = NewValue;

	this->ProcessEvent ( pFnHackInactiveAlpha, &HackInactiveAlpha_Parms, NULL );
};

// Function UDKBase.MobileMenuPause.OnResetMenu
// [0x00020000] 
// Parameters infos:

void UMobileMenuPause::OnResetMenu ( )
{
	static UFunction* pFnOnResetMenu = NULL;

	if ( ! pFnOnResetMenu )
		pFnOnResetMenu = (UFunction*) UObject::GObjObjects()->Data[ 41767 ];

	UMobileMenuPause_execOnResetMenu_Parms OnResetMenu_Parms;

	this->ProcessEvent ( pFnOnResetMenu, &OnResetMenu_Parms, NULL );
};

// Function UDKBase.MobileMenuPause.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuObject*       Sender                         ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )

void UMobileMenuPause::eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 41761 ];

	UMobileMenuPause_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.Sender = Sender;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function UDKBase.MobileMenuPause.InitMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuPause::eventInitMenuScene ( class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuScene = NULL;

	if ( ! pFnInitMenuScene )
		pFnInitMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 41755 ];

	UMobileMenuPause_eventInitMenuScene_Parms InitMenuScene_Parms;
	InitMenuScene_Parms.PlayerInput = PlayerInput;
	InitMenuScene_Parms.ScreenWidth = ScreenWidth;
	InitMenuScene_Parms.ScreenHeight = ScreenHeight;
	InitMenuScene_Parms.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent ( pFnInitMenuScene, &InitMenuScene_Parms, NULL );
};

// Function UDKBase.MobileMenuSplash.Closed
// [0x00020002] 
// Parameters infos:

void UMobileMenuSplash::Closed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 41802 ];

	UMobileMenuSplash_execClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function UDKBase.MobileMenuSplash.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuObject*       Sender                         ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )

void UMobileMenuSplash::eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 41796 ];

	UMobileMenuSplash_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.Sender = Sender;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function UDKBase.MobileMenuSplash.InitMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UMobileMenuSplash::eventInitMenuScene ( class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuScene = NULL;

	if ( ! pFnInitMenuScene )
		pFnInitMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 41790 ];

	UMobileMenuSplash_eventInitMenuScene_Parms InitMenuScene_Parms;
	InitMenuScene_Parms.PlayerInput = PlayerInput;
	InitMenuScene_Parms.ScreenWidth = ScreenWidth;
	InitMenuScene_Parms.ScreenHeight = ScreenHeight;
	InitMenuScene_Parms.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent ( pFnInitMenuScene, &InitMenuScene_Parms, NULL );
};

// Function UDKBase.CloudHUD.PostRender
// [0x00020002] 
// Parameters infos:

void ACloudHUD::PostRender ( )
{
	static UFunction* pFnPostRender = NULL;

	if ( ! pFnPostRender )
		pFnPostRender = (UFunction*) UObject::GObjObjects()->Data[ 41529 ];

	ACloudHUD_execPostRender_Parms PostRender_Parms;

	this->ProcessEvent ( pFnPostRender, &PostRender_Parms, NULL );
};

// Function UDKBase.CloudPC.OnTwitterAuthorizeComplete
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnTwitterAuthorizeComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnTwitterAuthorizeComplete = NULL;

	if ( ! pFnOnTwitterAuthorizeComplete )
		pFnOnTwitterAuthorizeComplete = (UFunction*) UObject::GObjObjects()->Data[ 41634 ];

	ACloudPC_execOnTwitterAuthorizeComplete_Parms OnTwitterAuthorizeComplete_Parms;

	this->ProcessEvent ( pFnOnTwitterAuthorizeComplete, &OnTwitterAuthorizeComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnTwitterAuthorizeComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.OnTwitterRequestComplete
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnTwitterRequestComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnTwitterRequestComplete = NULL;

	if ( ! pFnOnTwitterRequestComplete )
		pFnOnTwitterRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 41632 ];

	ACloudPC_execOnTwitterRequestComplete_Parms OnTwitterRequestComplete_Parms;

	this->ProcessEvent ( pFnOnTwitterRequestComplete, &OnTwitterRequestComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnTwitterRequestComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.OnTweetComplete
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnTweetComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnTweetComplete = NULL;

	if ( ! pFnOnTweetComplete )
		pFnOnTweetComplete = (UFunction*) UObject::GObjObjects()->Data[ 41630 ];

	ACloudPC_execOnTweetComplete_Parms OnTweetComplete_Parms;

	this->ProcessEvent ( pFnOnTweetComplete, &OnTweetComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnTweetComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.CloudGameTwitter
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACloudPC::CloudGameTwitter ( )
{
	static UFunction* pFnCloudGameTwitter = NULL;

	if ( ! pFnCloudGameTwitter )
		pFnCloudGameTwitter = (UFunction*) UObject::GObjObjects()->Data[ 41629 ];

	ACloudPC_execCloudGameTwitter_Parms CloudGameTwitter_Parms;

	this->ProcessEvent ( pFnCloudGameTwitter, &CloudGameTwitter_Parms, NULL );
};

// Function UDKBase.CloudPC.CloudGameBuyConsumable
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACloudPC::CloudGameBuyConsumable ( )
{
	static UFunction* pFnCloudGameBuyConsumable = NULL;

	if ( ! pFnCloudGameBuyConsumable )
		pFnCloudGameBuyConsumable = (UFunction*) UObject::GObjObjects()->Data[ 41628 ];

	ACloudPC_execCloudGameBuyConsumable_Parms CloudGameBuyConsumable_Parms;

	this->ProcessEvent ( pFnCloudGameBuyConsumable, &CloudGameBuyConsumable_Parms, NULL );
};

// Function UDKBase.CloudPC.MicroQueryProducts
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACloudPC::MicroQueryProducts ( )
{
	static UFunction* pFnMicroQueryProducts = NULL;

	if ( ! pFnMicroQueryProducts )
		pFnMicroQueryProducts = (UFunction*) UObject::GObjObjects()->Data[ 41627 ];

	ACloudPC_execMicroQueryProducts_Parms MicroQueryProducts_Parms;

	this->ProcessEvent ( pFnMicroQueryProducts, &MicroQueryProducts_Parms, NULL );
};

// Function UDKBase.CloudPC.OnProductPurchaseComplete
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnProductPurchaseComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnProductPurchaseComplete = NULL;

	if ( ! pFnOnProductPurchaseComplete )
		pFnOnProductPurchaseComplete = (UFunction*) UObject::GObjObjects()->Data[ 41625 ];

	ACloudPC_execOnProductPurchaseComplete_Parms OnProductPurchaseComplete_Parms;

	this->ProcessEvent ( pFnOnProductPurchaseComplete, &OnProductPurchaseComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnProductPurchaseComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.OnProductQueryComplete
// [0x00420000] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnProductQueryComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnProductQueryComplete = NULL;

	if ( ! pFnOnProductQueryComplete )
		pFnOnProductQueryComplete = (UFunction*) UObject::GObjObjects()->Data[ 41623 ];

	ACloudPC_execOnProductQueryComplete_Parms OnProductQueryComplete_Parms;

	this->ProcessEvent ( pFnOnProductQueryComplete, &OnProductQueryComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnProductQueryComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.CloudGameFacebook
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACloudPC::CloudGameFacebook ( )
{
	static UFunction* pFnCloudGameFacebook = NULL;

	if ( ! pFnCloudGameFacebook )
		pFnCloudGameFacebook = (UFunction*) UObject::GObjObjects()->Data[ 41619 ];

	ACloudPC_execCloudGameFacebook_Parms CloudGameFacebook_Parms;

	this->ProcessEvent ( pFnCloudGameFacebook, &CloudGameFacebook_Parms, NULL );
};

// Function UDKBase.CloudPC.OnWebRequestComplete
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnWebRequestComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnWebRequestComplete = NULL;

	if ( ! pFnOnWebRequestComplete )
		pFnOnWebRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 41613 ];

	ACloudPC_execOnWebRequestComplete_Parms OnWebRequestComplete_Parms;

	this->ProcessEvent ( pFnOnWebRequestComplete, &OnWebRequestComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnWebRequestComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.OnFBDialogComplete
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnFBDialogComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnFBDialogComplete = NULL;

	if ( ! pFnOnFBDialogComplete )
		pFnOnFBDialogComplete = (UFunction*) UObject::GObjObjects()->Data[ 41611 ];

	ACloudPC_execOnFBDialogComplete_Parms OnFBDialogComplete_Parms;

	this->ProcessEvent ( pFnOnFBDialogComplete, &OnFBDialogComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnFBDialogComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.OnFBFriendsListComplete
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnFBFriendsListComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnFBFriendsListComplete = NULL;

	if ( ! pFnOnFBFriendsListComplete )
		pFnOnFBFriendsListComplete = (UFunction*) UObject::GObjObjects()->Data[ 41609 ];

	ACloudPC_execOnFBFriendsListComplete_Parms OnFBFriendsListComplete_Parms;

	this->ProcessEvent ( pFnOnFBFriendsListComplete, &OnFBFriendsListComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnFBFriendsListComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.OnFBRequestComplete
// [0x00420000] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnFBRequestComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnFBRequestComplete = NULL;

	if ( ! pFnOnFBRequestComplete )
		pFnOnFBRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 41607 ];

	ACloudPC_execOnFBRequestComplete_Parms OnFBRequestComplete_Parms;

	this->ProcessEvent ( pFnOnFBRequestComplete, &OnFBRequestComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnFBRequestComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.OnFBAuthComplete
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnFBAuthComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnFBAuthComplete = NULL;

	if ( ! pFnOnFBAuthComplete )
		pFnOnFBAuthComplete = (UFunction*) UObject::GObjObjects()->Data[ 41605 ];

	ACloudPC_execOnFBAuthComplete_Parms OnFBAuthComplete_Parms;

	this->ProcessEvent ( pFnOnFBAuthComplete, &OnFBAuthComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnFBAuthComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.OnUserClosedAdvertisement
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::eventOnUserClosedAdvertisement ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnUserClosedAdvertisement = NULL;

	if ( ! pFnOnUserClosedAdvertisement )
		pFnOnUserClosedAdvertisement = (UFunction*) UObject::GObjObjects()->Data[ 41603 ];

	ACloudPC_eventOnUserClosedAdvertisement_Parms OnUserClosedAdvertisement_Parms;

	this->ProcessEvent ( pFnOnUserClosedAdvertisement, &OnUserClosedAdvertisement_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnUserClosedAdvertisement_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.OnUserClickedAdvertisement
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::OnUserClickedAdvertisement ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnUserClickedAdvertisement = NULL;

	if ( ! pFnOnUserClickedAdvertisement )
		pFnOnUserClickedAdvertisement = (UFunction*) UObject::GObjObjects()->Data[ 41601 ];

	ACloudPC_execOnUserClickedAdvertisement_Parms OnUserClickedAdvertisement_Parms;

	this->ProcessEvent ( pFnOnUserClickedAdvertisement, &OnUserClickedAdvertisement_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnUserClickedAdvertisement_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.CloudGameToggleAd
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACloudPC::CloudGameToggleAd ( )
{
	static UFunction* pFnCloudGameToggleAd = NULL;

	if ( ! pFnCloudGameToggleAd )
		pFnCloudGameToggleAd = (UFunction*) UObject::GObjObjects()->Data[ 41600 ];

	ACloudPC_execCloudGameToggleAd_Parms CloudGameToggleAd_Parms;

	this->ProcessEvent ( pFnCloudGameToggleAd, &CloudGameToggleAd_Parms, NULL );
};

// Function UDKBase.CloudPC.CloudGetDocs
// [0x00020002] 
// Parameters infos:

void ACloudPC::CloudGetDocs ( )
{
	static UFunction* pFnCloudGetDocs = NULL;

	if ( ! pFnCloudGetDocs )
		pFnCloudGetDocs = (UFunction*) UObject::GObjObjects()->Data[ 41599 ];

	ACloudPC_execCloudGetDocs_Parms CloudGetDocs_Parms;

	this->ProcessEvent ( pFnCloudGetDocs, &CloudGetDocs_Parms, NULL );
};

// Function UDKBase.CloudPC.CloudConflictDetected
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::CloudConflictDetected ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnCloudConflictDetected = NULL;

	if ( ! pFnCloudConflictDetected )
		pFnCloudConflictDetected = (UFunction*) UObject::GObjObjects()->Data[ 41597 ];

	ACloudPC_execCloudConflictDetected_Parms CloudConflictDetected_Parms;

	this->ProcessEvent ( pFnCloudConflictDetected, &CloudConflictDetected_Parms, NULL );

	if ( Result )
		memcpy ( Result, &CloudConflictDetected_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.CloudReadDocument
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::CloudReadDocument ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnCloudReadDocument = NULL;

	if ( ! pFnCloudReadDocument )
		pFnCloudReadDocument = (UFunction*) UObject::GObjObjects()->Data[ 41594 ];

	ACloudPC_execCloudReadDocument_Parms CloudReadDocument_Parms;

	this->ProcessEvent ( pFnCloudReadDocument, &CloudReadDocument_Parms, NULL );

	if ( Result )
		memcpy ( Result, &CloudReadDocument_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.CloudGotDocuments
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::CloudGotDocuments ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnCloudGotDocuments = NULL;

	if ( ! pFnCloudGotDocuments )
		pFnCloudGotDocuments = (UFunction*) UObject::GObjObjects()->Data[ 41589 ];

	ACloudPC_execCloudGotDocuments_Parms CloudGotDocuments_Parms;

	this->ProcessEvent ( pFnCloudGotDocuments, &CloudGotDocuments_Parms, NULL );

	if ( Result )
		memcpy ( Result, &CloudGotDocuments_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.CloudGetAndIncrement
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACloudPC::CloudGetAndIncrement ( )
{
	static UFunction* pFnCloudGetAndIncrement = NULL;

	if ( ! pFnCloudGetAndIncrement )
		pFnCloudGetAndIncrement = (UFunction*) UObject::GObjObjects()->Data[ 41588 ];

	ACloudPC_execCloudGetAndIncrement_Parms CloudGetAndIncrement_Parms;

	this->ProcessEvent ( pFnCloudGetAndIncrement, &CloudGetAndIncrement_Parms, NULL );
};

// Function UDKBase.CloudPC.CloudIncrementValue
// [0x00C20002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::CloudIncrementValue ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnCloudIncrementValue = NULL;

	if ( ! pFnCloudIncrementValue )
		pFnCloudIncrementValue = (UFunction*) UObject::GObjObjects()->Data[ 41585 ];

	ACloudPC_execCloudIncrementValue_Parms CloudIncrementValue_Parms;

	this->ProcessEvent ( pFnCloudIncrementValue, &CloudIncrementValue_Parms, NULL );

	if ( Result )
		memcpy ( Result, &CloudIncrementValue_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.CloudValueChanged
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::CloudValueChanged ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnCloudValueChanged = NULL;

	if ( ! pFnCloudValueChanged )
		pFnCloudValueChanged = (UFunction*) UObject::GObjObjects()->Data[ 41583 ];

	ACloudPC_execCloudValueChanged_Parms CloudValueChanged_Parms;

	this->ProcessEvent ( pFnCloudValueChanged, &CloudValueChanged_Parms, NULL );

	if ( Result )
		memcpy ( Result, &CloudValueChanged_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.CloudLogValue
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void ACloudPC::CloudLogValue ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnCloudLogValue = NULL;

	if ( ! pFnCloudLogValue )
		pFnCloudLogValue = (UFunction*) UObject::GObjObjects()->Data[ 41581 ];

	ACloudPC_execCloudLogValue_Parms CloudLogValue_Parms;

	this->ProcessEvent ( pFnCloudLogValue, &CloudLogValue_Parms, NULL );

	if ( Result )
		memcpy ( Result, &CloudLogValue_Parms.Result, 0x28 );
};

// Function UDKBase.CloudPC.CloudGameLoad
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            Slot                           ( CPF_Parm )

void ACloudPC::CloudGameLoad ( int Slot )
{
	static UFunction* pFnCloudGameLoad = NULL;

	if ( ! pFnCloudGameLoad )
		pFnCloudGameLoad = (UFunction*) UObject::GObjObjects()->Data[ 41578 ];

	ACloudPC_execCloudGameLoad_Parms CloudGameLoad_Parms;
	CloudGameLoad_Parms.Slot = Slot;

	this->ProcessEvent ( pFnCloudGameLoad, &CloudGameLoad_Parms, NULL );
};

// Function UDKBase.CloudPC.CloudGameSave
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            Slot                           ( CPF_Parm )

void ACloudPC::CloudGameSave ( int Slot )
{
	static UFunction* pFnCloudGameSave = NULL;

	if ( ! pFnCloudGameSave )
		pFnCloudGameSave = (UFunction*) UObject::GObjObjects()->Data[ 41575 ];

	ACloudPC_execCloudGameSave_Parms CloudGameSave_Parms;
	CloudGameSave_Parms.Slot = Slot;

	this->ProcessEvent ( pFnCloudGameSave, &CloudGameSave_Parms, NULL );
};

// Function UDKBase.CloudPC.CloudGameFight
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void ACloudPC::CloudGameFight ( )
{
	static UFunction* pFnCloudGameFight = NULL;

	if ( ! pFnCloudGameFight )
		pFnCloudGameFight = (UFunction*) UObject::GObjObjects()->Data[ 41574 ];

	ACloudPC_execCloudGameFight_Parms CloudGameFight_Parms;

	this->ProcessEvent ( pFnCloudGameFight, &CloudGameFight_Parms, NULL );
};

// Function UDKBase.CloudPC.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void ACloudPC::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 41573 ];

	ACloudPC_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function UDKBase.CloudPC.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void ACloudPC::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 41572 ];

	ACloudPC_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UDKBase.CloudMenuMicroTrans.OnProductPurchaseComplete
// [0x00420002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UCloudMenuMicroTrans::OnProductPurchaseComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnProductPurchaseComplete = NULL;

	if ( ! pFnOnProductPurchaseComplete )
		pFnOnProductPurchaseComplete = (UFunction*) UObject::GObjObjects()->Data[ 41559 ];

	UCloudMenuMicroTrans_execOnProductPurchaseComplete_Parms OnProductPurchaseComplete_Parms;

	this->ProcessEvent ( pFnOnProductPurchaseComplete, &OnProductPurchaseComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnProductPurchaseComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudMenuMicroTrans.OnProductQueryComplete
// [0x00C20002] 
// Parameters infos:
// struct FPlatformInterfaceDelegateResult Result                         ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UCloudMenuMicroTrans::OnProductQueryComplete ( struct FPlatformInterfaceDelegateResult* Result )
{
	static UFunction* pFnOnProductQueryComplete = NULL;

	if ( ! pFnOnProductQueryComplete )
		pFnOnProductQueryComplete = (UFunction*) UObject::GObjObjects()->Data[ 41555 ];

	UCloudMenuMicroTrans_execOnProductQueryComplete_Parms OnProductQueryComplete_Parms;

	this->ProcessEvent ( pFnOnProductQueryComplete, &OnProductQueryComplete_Parms, NULL );

	if ( Result )
		memcpy ( Result, &OnProductQueryComplete_Parms.Result, 0x28 );
};

// Function UDKBase.CloudMenuMicroTrans.Closed
// [0x00020002] 
// Parameters infos:

void UCloudMenuMicroTrans::Closed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 41554 ];

	UCloudMenuMicroTrans_execClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function UDKBase.CloudMenuMicroTrans.OnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobileMenuObject*       Sender                         ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          TouchX                         ( CPF_Parm )
// float                          TouchY                         ( CPF_Parm )

void UCloudMenuMicroTrans::eventOnTouch ( class UMobileMenuObject* Sender, unsigned char EventType, float TouchX, float TouchY )
{
	static UFunction* pFnOnTouch = NULL;

	if ( ! pFnOnTouch )
		pFnOnTouch = (UFunction*) UObject::GObjObjects()->Data[ 41549 ];

	UCloudMenuMicroTrans_eventOnTouch_Parms OnTouch_Parms;
	OnTouch_Parms.Sender = Sender;
	OnTouch_Parms.EventType = EventType;
	OnTouch_Parms.TouchX = TouchX;
	OnTouch_Parms.TouchY = TouchY;

	this->ProcessEvent ( pFnOnTouch, &OnTouch_Parms, NULL );
};

// Function UDKBase.CloudMenuMicroTrans.InitMenuScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UMobilePlayerInput*      PlayerInput                    ( CPF_Parm )
// int                            ScreenWidth                    ( CPF_Parm )
// int                            ScreenHeight                   ( CPF_Parm )
// unsigned long                  bIsFirstInitialization         ( CPF_Parm )

void UCloudMenuMicroTrans::eventInitMenuScene ( class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, unsigned long bIsFirstInitialization )
{
	static UFunction* pFnInitMenuScene = NULL;

	if ( ! pFnInitMenuScene )
		pFnInitMenuScene = (UFunction*) UObject::GObjObjects()->Data[ 41544 ];

	UCloudMenuMicroTrans_eventInitMenuScene_Parms InitMenuScene_Parms;
	InitMenuScene_Parms.PlayerInput = PlayerInput;
	InitMenuScene_Parms.ScreenWidth = ScreenWidth;
	InitMenuScene_Parms.ScreenHeight = ScreenHeight;
	InitMenuScene_Parms.bIsFirstInitialization = bIsFirstInitialization;

	this->ProcessEvent ( pFnInitMenuScene, &InitMenuScene_Parms, NULL );
};

// Function UDKBase.MobileGameCrowdAgent.OnSetMaterial
// [0x00020002] 
// Parameters infos:
// class USeqAct_SetMaterial*     Action                         ( CPF_Parm )

void AMobileGameCrowdAgent::OnSetMaterial ( class USeqAct_SetMaterial* Action )
{
	static UFunction* pFnOnSetMaterial = NULL;

	if ( ! pFnOnSetMaterial )
		pFnOnSetMaterial = (UFunction*) UObject::GObjObjects()->Data[ 41645 ];

	AMobileGameCrowdAgent_execOnSetMaterial_Parms OnSetMaterial_Parms;
	OnSetMaterial_Parms.Action = Action;

	this->ProcessEvent ( pFnOnSetMaterial, &OnSetMaterial_Parms, NULL );
};

// Function UDKBase.MobileGameCrowdAgent.PlayDeath
// [0x00020002] 
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AMobileGameCrowdAgent::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 41643 ];

	AMobileGameCrowdAgent_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );
};

// Function UDKBase.MobilePlaceablePawn.GetPawnViewLocation
// [0x00020102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector AMobilePlaceablePawn::GetPawnViewLocation ( )
{
	static UFunction* pFnGetPawnViewLocation = NULL;

	if ( ! pFnGetPawnViewLocation )
		pFnGetPawnViewLocation = (UFunction*) UObject::GObjObjects()->Data[ 41821 ];

	AMobilePlaceablePawn_execGetPawnViewLocation_Parms GetPawnViewLocation_Parms;

	this->ProcessEvent ( pFnGetPawnViewLocation, &GetPawnViewLocation_Parms, NULL );

	return GetPawnViewLocation_Parms.ReturnValue;
};

// Function UDKBase.MobilePlaceablePawn.CalcCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AMobilePlaceablePawn::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 41815 ];

	AMobilePlaceablePawn_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function UDKBase.MobilePlaceablePawn.RestoreAnimSetsToDefault
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AMobilePlaceablePawn::eventRestoreAnimSetsToDefault ( )
{
	static UFunction* pFnRestoreAnimSetsToDefault = NULL;

	if ( ! pFnRestoreAnimSetsToDefault )
		pFnRestoreAnimSetsToDefault = (UFunction*) UObject::GObjObjects()->Data[ 41813 ];

	AMobilePlaceablePawn_eventRestoreAnimSetsToDefault_Parms RestoreAnimSetsToDefault_Parms;

	this->ProcessEvent ( pFnRestoreAnimSetsToDefault, &RestoreAnimSetsToDefault_Parms, NULL );

	return RestoreAnimSetsToDefault_Parms.ReturnValue;
};

// Function UDKBase.MobilePlaceablePawn.FixedView
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AMobilePlaceablePawn::FixedView ( )
{
	static UFunction* pFnFixedView = NULL;

	if ( ! pFnFixedView )
		pFnFixedView = (UFunction*) UObject::GObjObjects()->Data[ 41812 ];

	AMobilePlaceablePawn_execFixedView_Parms FixedView_Parms;

	this->ProcessEvent ( pFnFixedView, &FixedView_Parms, NULL );
};

// Function UDKBase.MobileProjectile.GetPawnOwner
// [0x00020100] 
// Parameters infos:
// class APawn*                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APawn* AMobileProjectile::GetPawnOwner ( )
{
	static UFunction* pFnGetPawnOwner = NULL;

	if ( ! pFnGetPawnOwner )
		pFnGetPawnOwner = (UFunction*) UObject::GObjObjects()->Data[ 41879 ];

	AMobileProjectile_execGetPawnOwner_Parms GetPawnOwner_Parms;

	this->ProcessEvent ( pFnGetPawnOwner, &GetPawnOwner_Parms, NULL );

	return GetPawnOwner_Parms.ReturnValue;
};

// Function UDKBase.MobileProjectile.CalcCamera
// [0x00420102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AMobileProjectile::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 41873 ];

	AMobileProjectile_execCalcCamera_Parms CalcCamera_Parms;
	CalcCamera_Parms.fDeltaTime = fDeltaTime;

	this->ProcessEvent ( pFnCalcCamera, &CalcCamera_Parms, NULL );

	if ( out_CamLoc )
		memcpy ( out_CamLoc, &CalcCamera_Parms.out_CamLoc, 0xC );

	if ( out_CamRot )
		memcpy ( out_CamRot, &CalcCamera_Parms.out_CamRot, 0xC );

	if ( out_FOV )
		*out_FOV = CalcCamera_Parms.out_FOV;

	return CalcCamera_Parms.ReturnValue;
};

// Function UDKBase.MobileProjectile.MyOnParticleSystemFinished
// [0x00020102] 
// Parameters infos:
// class UParticleSystemComponent* PSC                            ( CPF_Parm | CPF_EditInline )

void AMobileProjectile::MyOnParticleSystemFinished ( class UParticleSystemComponent* PSC )
{
	static UFunction* pFnMyOnParticleSystemFinished = NULL;

	if ( ! pFnMyOnParticleSystemFinished )
		pFnMyOnParticleSystemFinished = (UFunction*) UObject::GObjObjects()->Data[ 41868 ];

	AMobileProjectile_execMyOnParticleSystemFinished_Parms MyOnParticleSystemFinished_Parms;
	MyOnParticleSystemFinished_Parms.PSC = PSC;

	this->ProcessEvent ( pFnMyOnParticleSystemFinished, &MyOnParticleSystemFinished_Parms, NULL );
};

// Function UDKBase.MobileProjectile.Destroyed
// [0x00020102] 
// Parameters infos:

void AMobileProjectile::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 41867 ];

	AMobileProjectile_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function UDKBase.MobileProjectile.HideProjectile
// [0x00020102] 
// Parameters infos:

void AMobileProjectile::HideProjectile ( )
{
	static UFunction* pFnHideProjectile = NULL;

	if ( ! pFnHideProjectile )
		pFnHideProjectile = (UFunction*) UObject::GObjObjects()->Data[ 41865 ];

	AMobileProjectile_execHideProjectile_Parms HideProjectile_Parms;

	this->ProcessEvent ( pFnHideProjectile, &HideProjectile_Parms, NULL );
};

// Function UDKBase.MobileProjectile.TornOff
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AMobileProjectile::eventTornOff ( )
{
	static UFunction* pFnTornOff = NULL;

	if ( ! pFnTornOff )
		pFnTornOff = (UFunction*) UObject::GObjObjects()->Data[ 41864 ];

	AMobileProjectile_eventTornOff_Parms TornOff_Parms;

	this->ProcessEvent ( pFnTornOff, &TornOff_Parms, NULL );
};

// Function UDKBase.MobileProjectile.ShutDown
// [0x00820102] 
// Parameters infos:

void AMobileProjectile::ShutDown ( )
{
	static UFunction* pFnShutDown = NULL;

	if ( ! pFnShutDown )
		pFnShutDown = (UFunction*) UObject::GObjObjects()->Data[ 41861 ];

	AMobileProjectile_execShutDown_Parms ShutDown_Parms;

	this->ProcessEvent ( pFnShutDown, &ShutDown_Parms, NULL );
};

// Function UDKBase.MobileProjectile.SpawnExplosionEffects
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AMobileProjectile::SpawnExplosionEffects ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnSpawnExplosionEffects = NULL;

	if ( ! pFnSpawnExplosionEffects )
		pFnSpawnExplosionEffects = (UFunction*) UObject::GObjObjects()->Data[ 41856 ];

	AMobileProjectile_execSpawnExplosionEffects_Parms SpawnExplosionEffects_Parms;
	memcpy ( &SpawnExplosionEffects_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &SpawnExplosionEffects_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnSpawnExplosionEffects, &SpawnExplosionEffects_Parms, NULL );
};

// Function UDKBase.MobileProjectile.SetExplosionEffectParameters
// [0x00020100] 
// Parameters infos:
// class UParticleSystemComponent* ProjExplosion                  ( CPF_Parm | CPF_EditInline )

void AMobileProjectile::SetExplosionEffectParameters ( class UParticleSystemComponent* ProjExplosion )
{
	static UFunction* pFnSetExplosionEffectParameters = NULL;

	if ( ! pFnSetExplosionEffectParameters )
		pFnSetExplosionEffectParameters = (UFunction*) UObject::GObjObjects()->Data[ 41854 ];

	AMobileProjectile_execSetExplosionEffectParameters_Parms SetExplosionEffectParameters_Parms;
	SetExplosionEffectParameters_Parms.ProjExplosion = ProjExplosion;

	this->ProcessEvent ( pFnSetExplosionEffectParameters, &SetExplosionEffectParameters_Parms, NULL );
};

// Function UDKBase.MobileProjectile.SpawnFlightEffects
// [0x00020102] 
// Parameters infos:

void AMobileProjectile::SpawnFlightEffects ( )
{
	static UFunction* pFnSpawnFlightEffects = NULL;

	if ( ! pFnSpawnFlightEffects )
		pFnSpawnFlightEffects = (UFunction*) UObject::GObjObjects()->Data[ 41853 ];

	AMobileProjectile_execSpawnFlightEffects_Parms SpawnFlightEffects_Parms;

	this->ProcessEvent ( pFnSpawnFlightEffects, &SpawnFlightEffects_Parms, NULL );
};

// Function UDKBase.MobileProjectile.Explode
// [0x00020102] 
// Parameters infos:
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AMobileProjectile::Explode ( struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 41850 ];

	AMobileProjectile_execExplode_Parms Explode_Parms;
	memcpy ( &Explode_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Explode_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function UDKBase.MobileProjectile.ProcessTouch
// [0x00020102] 
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AMobileProjectile::ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnProcessTouch = NULL;

	if ( ! pFnProcessTouch )
		pFnProcessTouch = (UFunction*) UObject::GObjObjects()->Data[ 41846 ];

	AMobileProjectile_execProcessTouch_Parms ProcessTouch_Parms;
	ProcessTouch_Parms.Other = Other;
	memcpy ( &ProcessTouch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ProcessTouch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnProcessTouch, &ProcessTouch_Parms, NULL );
};

// Function UDKBase.MobileProjectile.Init
// [0x00020002] 
// Parameters infos:
// struct FVector                 Direction                      ( CPF_Parm )

void AMobileProjectile::Init ( struct FVector Direction )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 41844 ];

	AMobileProjectile_execInit_Parms Init_Parms;
	memcpy ( &Init_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function UDKBase.MobileProjectile.SetInitialState
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AMobileProjectile::eventSetInitialState ( )
{
	static UFunction* pFnSetInitialState = NULL;

	if ( ! pFnSetInitialState )
		pFnSetInitialState = (UFunction*) UObject::GObjObjects()->Data[ 41843 ];

	AMobileProjectile_eventSetInitialState_Parms SetInitialState_Parms;

	this->ProcessEvent ( pFnSetInitialState, &SetInitialState_Parms, NULL );
};

// Function UDKBase.MobileProjectile.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AMobileProjectile::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 41842 ];

	AMobileProjectile_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function UDKBase.MobileProjectile.Landed
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 HitNormal                      ( CPF_Parm )
// class AActor*                  FloorActor                     ( CPF_Parm )

void AMobileProjectile::eventLanded ( struct FVector HitNormal, class AActor* FloorActor )
{
	static UFunction* pFnLanded = NULL;

	if ( ! pFnLanded )
		pFnLanded = (UFunction*) UObject::GObjObjects()->Data[ 41839 ];

	AMobileProjectile_eventLanded_Parms Landed_Parms;
	memcpy ( &Landed_Parms.HitNormal, &HitNormal, 0xC );
	Landed_Parms.FloorActor = FloorActor;

	this->ProcessEvent ( pFnLanded, &Landed_Parms, NULL );
};

// Function UDKBase.UDKAnimNodeSequenceByBoneRotation.OnBecomeRelevant
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void UUDKAnimNodeSequenceByBoneRotation::eventOnBecomeRelevant ( )
{
	static UFunction* pFnOnBecomeRelevant = NULL;

	if ( ! pFnOnBecomeRelevant )
		pFnOnBecomeRelevant = (UFunction*) UObject::GObjObjects()->Data[ 42083 ];

	UUDKAnimNodeSequenceByBoneRotation_eventOnBecomeRelevant_Parms OnBecomeRelevant_Parms;

	this->ProcessEvent ( pFnOnBecomeRelevant, &OnBecomeRelevant_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif