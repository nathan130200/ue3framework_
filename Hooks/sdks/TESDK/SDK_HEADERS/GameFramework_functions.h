/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_functions.h
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

// Function GameFramework.GameAIController.GeneratePathToLocation
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

bool AGameAIController::eventGeneratePathToLocation ( struct FVector Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToLocation = NULL;

	if ( ! pFnGeneratePathToLocation )
		pFnGeneratePathToLocation = (UFunction*) UObject::GObjObjects()->Data[ 33281 ];

	AGameAIController_eventGeneratePathToLocation_Parms GeneratePathToLocation_Parms;
	memcpy ( &GeneratePathToLocation_Parms.Goal, &Goal, 0xC );
	GeneratePathToLocation_Parms.WithinDistance = WithinDistance;
	GeneratePathToLocation_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToLocation, &GeneratePathToLocation_Parms, NULL );

	return GeneratePathToLocation_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.GeneratePathToActor
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

bool AGameAIController::eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 33276 ];

	AGameAIController_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00024002] 
// Parameters infos:
// struct FRotator                TargetDesiredRotation          ( CPF_Parm )
// unsigned long                  InLockDesiredRotation          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  InUnlockWhenReached            ( CPF_OptionalParm | CPF_Parm )
// float                          InterpolationTime              ( CPF_OptionalParm | CPF_Parm )

void AGameAIController::SetDesiredRotation ( struct FRotator TargetDesiredRotation, unsigned long InLockDesiredRotation, unsigned long InUnlockWhenReached, float InterpolationTime )
{
	static UFunction* pFnSetDesiredRotation = NULL;

	if ( ! pFnSetDesiredRotation )
		pFnSetDesiredRotation = (UFunction*) UObject::GObjObjects()->Data[ 33271 ];

	AGameAIController_execSetDesiredRotation_Parms SetDesiredRotation_Parms;
	memcpy ( &SetDesiredRotation_Parms.TargetDesiredRotation, &TargetDesiredRotation, 0xC );
	SetDesiredRotation_Parms.InLockDesiredRotation = InLockDesiredRotation;
	SetDesiredRotation_Parms.InUnlockWhenReached = InUnlockWhenReached;
	SetDesiredRotation_Parms.InterpolationTime = InterpolationTime;

	this->ProcessEvent ( pFnSetDesiredRotation, &SetDesiredRotation_Parms, NULL );
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// struct FString                 LogText                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FName                   LogCategory                    ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForce                         ( CPF_OptionalParm | CPF_Parm )

void AGameAIController::eventAILog_Internal ( struct FString LogText, struct FName LogCategory, unsigned long bForce )
{
	static UFunction* pFnAILog_Internal = NULL;

	if ( ! pFnAILog_Internal )
		pFnAILog_Internal = (UFunction*) UObject::GObjObjects()->Data[ 33267 ];

	AGameAIController_eventAILog_Internal_Parms AILog_Internal_Parms;
	memcpy ( &AILog_Internal_Parms.LogText, &LogText, 0xC );
	memcpy ( &AILog_Internal_Parms.LogCategory, &LogCategory, 0x8 );
	AILog_Internal_Parms.bForce = bForce;

	this->ProcessEvent ( pFnAILog_Internal, &AILog_Internal_Parms, NULL );
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00080000] 
// Parameters infos:
// struct FString                 LogText                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void AGameAIController::RecordDemoAILog ( struct FString LogText )
{
	static UFunction* pFnRecordDemoAILog = NULL;

	if ( ! pFnRecordDemoAILog )
		pFnRecordDemoAILog = (UFunction*) UObject::GObjObjects()->Data[ 33265 ];

	AGameAIController_execRecordDemoAILog_Parms RecordDemoAILog_Parms;
	memcpy ( &RecordDemoAILog_Parms.LogText, &LogText, 0xC );

	this->ProcessEvent ( pFnRecordDemoAILog, &RecordDemoAILog_Parms, NULL );
};

// Function GameFramework.GameAIController.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameAIController::eventDestroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 33264 ];

	AGameAIController_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
// class UClass*                  SearchClass                    ( CPF_Parm )

class UGameAICommand* AGameAIController::FindCommandOfClass ( class UClass* SearchClass )
{
	static UFunction* pFnFindCommandOfClass = NULL;

	if ( ! pFnFindCommandOfClass )
		pFnFindCommandOfClass = (UFunction*) UObject::GObjObjects()->Data[ 33261 ];

	AGameAIController_execFindCommandOfClass_Parms FindCommandOfClass_Parms;
	FindCommandOfClass_Parms.SearchClass = SearchClass;

	pFnFindCommandOfClass->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindCommandOfClass, &FindCommandOfClass_Parms, NULL );

	pFnFindCommandOfClass->FunctionFlags |= 0x400;

	return FindCommandOfClass_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::DumpCommandStack ( )
{
	static UFunction* pFnDumpCommandStack = NULL;

	if ( ! pFnDumpCommandStack )
		pFnDumpCommandStack = (UFunction*) UObject::GObjObjects()->Data[ 33260 ];

	AGameAIController_execDumpCommandStack_Parms DumpCommandStack_Parms;

	pFnDumpCommandStack->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDumpCommandStack, &DumpCommandStack_Parms, NULL );

	pFnDumpCommandStack->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGameAIController::CheckCommandCount ( )
{
	static UFunction* pFnCheckCommandCount = NULL;

	if ( ! pFnCheckCommandCount )
		pFnCheckCommandCount = (UFunction*) UObject::GObjObjects()->Data[ 33259 ];

	AGameAIController_execCheckCommandCount_Parms CheckCommandCount_Parms;

	pFnCheckCommandCount->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckCommandCount, &CheckCommandCount_Parms, NULL );

	pFnCheckCommandCount->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGameAICommand* AGameAIController::GetActiveCommand ( )
{
	static UFunction* pFnGetActiveCommand = NULL;

	if ( ! pFnGetActiveCommand )
		pFnGetActiveCommand = (UFunction*) UObject::GObjObjects()->Data[ 33257 ];

	AGameAIController_execGetActiveCommand_Parms GetActiveCommand_Parms;

	pFnGetActiveCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetActiveCommand, &GetActiveCommand_Parms, NULL );

	pFnGetActiveCommand->FunctionFlags |= 0x400;

	return GetActiveCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGameAICommand*          AbortCmd                       ( CPF_Parm )
// class UClass*                  AbortClass                     ( CPF_OptionalParm | CPF_Parm )

bool AGameAIController::AbortCommand ( class UGameAICommand* AbortCmd, class UClass* AbortClass )
{
	static UFunction* pFnAbortCommand = NULL;

	if ( ! pFnAbortCommand )
		pFnAbortCommand = (UFunction*) UObject::GObjObjects()->Data[ 33253 ];

	AGameAIController_execAbortCommand_Parms AbortCommand_Parms;
	AbortCommand_Parms.AbortCmd = AbortCmd;
	AbortCommand_Parms.AbortClass = AbortClass;

	pFnAbortCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAbortCommand, &AbortCommand_Parms, NULL );

	pFnAbortCommand->FunctionFlags |= 0x400;

	return AbortCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAIController.PopCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          ToBePoppedCommand              ( CPF_Parm )

void AGameAIController::PopCommand ( class UGameAICommand* ToBePoppedCommand )
{
	static UFunction* pFnPopCommand = NULL;

	if ( ! pFnPopCommand )
		pFnPopCommand = (UFunction*) UObject::GObjObjects()->Data[ 33235 ];

	AGameAIController_execPopCommand_Parms PopCommand_Parms;
	PopCommand_Parms.ToBePoppedCommand = ToBePoppedCommand;

	pFnPopCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopCommand, &PopCommand_Parms, NULL );

	pFnPopCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAIController.PushCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void AGameAIController::PushCommand ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnPushCommand = NULL;

	if ( ! pFnPushCommand )
		pFnPushCommand = (UFunction*) UObject::GObjObjects()->Data[ 33193 ];

	AGameAIController_execPushCommand_Parms PushCommand_Parms;
	PushCommand_Parms.NewCommand = NewCommand;

	pFnPushCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPushCommand, &PushCommand_Parms, NULL );

	pFnPushCommand->FunctionFlags |= 0x400;
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AHUD*                    H                              ( CPF_Parm )
// struct FName                   category                       ( CPF_Parm )

void UGameAICommand::eventDrawDebug ( class AHUD* H, struct FName category )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 33237 ];

	UGameAICommand_eventDrawDebug_Parms DrawDebug_Parms;
	DrawDebug_Parms.H = H;
	memcpy ( &DrawDebug_Parms.category, &category, 0x8 );

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameAICommand::eventGetDumpString ( )
{
	static UFunction* pFnGetDumpString = NULL;

	if ( ! pFnGetDumpString )
		pFnGetDumpString = (UFunction*) UObject::GObjObjects()->Data[ 33223 ];

	UGameAICommand_eventGetDumpString_Parms GetDumpString_Parms;

	this->ProcessEvent ( pFnGetDumpString, &GetDumpString_Parms, NULL );

	return GetDumpString_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.Resumed
// [0x00020002] 
// Parameters infos:
// struct FName                   OldCommandName                 ( CPF_Parm )

void UGameAICommand::Resumed ( struct FName OldCommandName )
{
	static UFunction* pFnResumed = NULL;

	if ( ! pFnResumed )
		pFnResumed = (UFunction*) UObject::GObjObjects()->Data[ 33221 ];

	UGameAICommand_execResumed_Parms Resumed_Parms;
	memcpy ( &Resumed_Parms.OldCommandName, &OldCommandName, 0x8 );

	this->ProcessEvent ( pFnResumed, &Resumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.Paused
// [0x00020002] 
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void UGameAICommand::Paused ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnPaused = NULL;

	if ( ! pFnPaused )
		pFnPaused = (UFunction*) UObject::GObjObjects()->Data[ 33219 ];

	UGameAICommand_execPaused_Parms Paused_Parms;
	Paused_Parms.NewCommand = NewCommand;

	this->ProcessEvent ( pFnPaused, &Paused_Parms, NULL );
};

// Function GameFramework.GameAICommand.Popped
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Popped ( )
{
	static UFunction* pFnPopped = NULL;

	if ( ! pFnPopped )
		pFnPopped = (UFunction*) UObject::GObjObjects()->Data[ 33218 ];

	UGameAICommand_execPopped_Parms Popped_Parms;

	this->ProcessEvent ( pFnPopped, &Popped_Parms, NULL );
};

// Function GameFramework.GameAICommand.Pushed
// [0x00020002] 
// Parameters infos:

void UGameAICommand::Pushed ( )
{
	static UFunction* pFnPushed = NULL;

	if ( ! pFnPushed )
		pFnPushed = (UFunction*) UObject::GObjObjects()->Data[ 33217 ];

	UGameAICommand_execPushed_Parms Pushed_Parms;

	this->ProcessEvent ( pFnPushed, &Pushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00020000] 
// Parameters infos:

void UGameAICommand::PostPopped ( )
{
	static UFunction* pFnPostPopped = NULL;

	if ( ! pFnPostPopped )
		pFnPostPopped = (UFunction*) UObject::GObjObjects()->Data[ 33216 ];

	UGameAICommand_execPostPopped_Parms PostPopped_Parms;

	this->ProcessEvent ( pFnPostPopped, &PostPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00020000] 
// Parameters infos:
// class AGameAIController*       AI                             ( CPF_Parm )

void UGameAICommand::PrePushed ( class AGameAIController* AI )
{
	static UFunction* pFnPrePushed = NULL;

	if ( ! pFnPrePushed )
		pFnPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 33214 ];

	UGameAICommand_execPrePushed_Parms PrePushed_Parms;
	PrePushed_Parms.AI = AI;

	this->ProcessEvent ( pFnPrePushed, &PrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   StateName                      ( CPF_Parm )

bool UGameAICommand::AllowStateTransitionTo ( struct FName StateName )
{
	static UFunction* pFnAllowStateTransitionTo = NULL;

	if ( ! pFnAllowStateTransitionTo )
		pFnAllowStateTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 33211 ];

	UGameAICommand_execAllowStateTransitionTo_Parms AllowStateTransitionTo_Parms;
	memcpy ( &AllowStateTransitionTo_Parms.StateName, &StateName, 0x8 );

	this->ProcessEvent ( pFnAllowStateTransitionTo, &AllowStateTransitionTo_Parms, NULL );

	return AllowStateTransitionTo_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  AttemptCommand                 ( CPF_Parm )

bool UGameAICommand::AllowTransitionTo ( class UClass* AttemptCommand )
{
	static UFunction* pFnAllowTransitionTo = NULL;

	if ( ! pFnAllowTransitionTo )
		pFnAllowTransitionTo = (UFunction*) UObject::GObjObjects()->Data[ 33208 ];

	UGameAICommand_execAllowTransitionTo_Parms AllowTransitionTo_Parms;
	AllowTransitionTo_Parms.AttemptCommand = AttemptCommand;

	this->ProcessEvent ( pFnAllowTransitionTo, &AllowTransitionTo_Parms, NULL );

	return AllowTransitionTo_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.Tick
// [0x00020000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICommand::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 33206 ];

	UGameAICommand_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameAICommand::ShouldIgnoreNotifies ( )
{
	static UFunction* pFnShouldIgnoreNotifies = NULL;

	if ( ! pFnShouldIgnoreNotifies )
		pFnShouldIgnoreNotifies = (UFunction*) UObject::GObjObjects()->Data[ 33204 ];

	UGameAICommand_execShouldIgnoreNotifies_Parms ShouldIgnoreNotifies_Parms;

	pFnShouldIgnoreNotifies->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldIgnoreNotifies, &ShouldIgnoreNotifies_Parms, NULL );

	pFnShouldIgnoreNotifies->FunctionFlags |= 0x400;

	return ShouldIgnoreNotifies_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameAICommand::eventInternalTick ( float DeltaTime )
{
	static UFunction* pFnInternalTick = NULL;

	if ( ! pFnInternalTick )
		pFnInternalTick = (UFunction*) UObject::GObjObjects()->Data[ 33202 ];

	UGameAICommand_eventInternalTick_Parms InternalTick_Parms;
	InternalTick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnInternalTick, &InternalTick_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// struct FName                   OldCommandName                 ( CPF_Parm )

void UGameAICommand::eventInternalResumed ( struct FName OldCommandName )
{
	static UFunction* pFnInternalResumed = NULL;

	if ( ! pFnInternalResumed )
		pFnInternalResumed = (UFunction*) UObject::GObjObjects()->Data[ 33200 ];

	UGameAICommand_eventInternalResumed_Parms InternalResumed_Parms;
	memcpy ( &InternalResumed_Parms.OldCommandName, &OldCommandName, 0x8 );

	this->ProcessEvent ( pFnInternalResumed, &InternalResumed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class UGameAICommand*          NewCommand                     ( CPF_Parm )

void UGameAICommand::eventInternalPaused ( class UGameAICommand* NewCommand )
{
	static UFunction* pFnInternalPaused = NULL;

	if ( ! pFnInternalPaused )
		pFnInternalPaused = (UFunction*) UObject::GObjObjects()->Data[ 33198 ];

	UGameAICommand_eventInternalPaused_Parms InternalPaused_Parms;
	InternalPaused_Parms.NewCommand = NewCommand;

	this->ProcessEvent ( pFnInternalPaused, &InternalPaused_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPopped ( )
{
	static UFunction* pFnInternalPopped = NULL;

	if ( ! pFnInternalPopped )
		pFnInternalPopped = (UFunction*) UObject::GObjObjects()->Data[ 33197 ];

	UGameAICommand_eventInternalPopped_Parms InternalPopped_Parms;

	this->ProcessEvent ( pFnInternalPopped, &InternalPopped_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:

void UGameAICommand::eventInternalPushed ( )
{
	static UFunction* pFnInternalPushed = NULL;

	if ( ! pFnInternalPushed )
		pFnInternalPushed = (UFunction*) UObject::GObjObjects()->Data[ 33196 ];

	UGameAICommand_eventInternalPushed_Parms InternalPushed_Parms;

	this->ProcessEvent ( pFnInternalPushed, &InternalPushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
// Parameters infos:
// class AGameAIController*       AI                             ( CPF_Parm )

void UGameAICommand::eventInternalPrePushed ( class AGameAIController* AI )
{
	static UFunction* pFnInternalPrePushed = NULL;

	if ( ! pFnInternalPrePushed )
		pFnInternalPrePushed = (UFunction*) UObject::GObjObjects()->Data[ 33194 ];

	UGameAICommand_eventInternalPrePushed_Parms InternalPrePushed_Parms;
	InternalPrePushed_Parms.AI = AI;

	this->ProcessEvent ( pFnInternalPrePushed, &InternalPrePushed_Parms, NULL );
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )

bool UGameAICommand::InitCommand ( class AGameAIController* AI )
{
	static UFunction* pFnInitCommand = NULL;

	if ( ! pFnInitCommand )
		pFnInitCommand = (UFunction*) UObject::GObjObjects()->Data[ 33189 ];

	UGameAICommand_execInitCommand_Parms InitCommand_Parms;
	InitCommand_Parms.AI = AI;

	this->ProcessEvent ( pFnInitCommand, &InitCommand_Parms, NULL );

	return InitCommand_Parms.ReturnValue;
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameAIController*       AI                             ( CPF_Parm )
// class AActor*                  UserActor                      ( CPF_Parm )

bool UGameAICommand::InitCommandUserActor ( class AGameAIController* AI, class AActor* UserActor )
{
	static UFunction* pFnInitCommandUserActor = NULL;

	if ( ! pFnInitCommandUserActor )
		pFnInitCommandUserActor = (UFunction*) UObject::GObjObjects()->Data[ 33185 ];

	UGameAICommand_execInitCommandUserActor_Parms InitCommandUserActor_Parms;
	InitCommandUserActor_Parms.AI = AI;
	InitCommandUserActor_Parms.UserActor = UserActor;

	this->ProcessEvent ( pFnInitCommandUserActor, &InitCommandUserActor_Parms, NULL );

	return InitCommandUserActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameCrowdAgent::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 36180 ];

	AGameCrowdAgent_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.GetDestString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString AGameCrowdAgent::GetDestString ( )
{
	static UFunction* pFnGetDestString = NULL;

	if ( ! pFnGetDestString )
		pFnGetDestString = (UFunction*) UObject::GObjObjects()->Data[ 36175 ];

	AGameCrowdAgent_execGetDestString_Parms GetDestString_Parms;

	this->ProcessEvent ( pFnGetDestString, &GetDestString_Parms, NULL );

	return GetDestString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.PostRenderFor
// [0x00820902] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AGameCrowdAgent::eventPostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnPostRenderFor = NULL;

	if ( ! pFnPostRenderFor )
		pFnPostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 36159 ];

	AGameCrowdAgent_eventPostRenderFor_Parms PostRenderFor_Parms;
	PostRenderFor_Parms.PC = PC;
	PostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &PostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &PostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	this->ProcessEvent ( pFnPostRenderFor, &PostRenderFor_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )
// class UCanvas*                 Canvas                         ( CPF_Parm )
// struct FVector                 CameraPosition                 ( CPF_Parm )
// struct FVector                 CameraDir                      ( CPF_Parm )

void AGameCrowdAgent::NativePostRenderFor ( class APlayerController* PC, class UCanvas* Canvas, struct FVector CameraPosition, struct FVector CameraDir )
{
	static UFunction* pFnNativePostRenderFor = NULL;

	if ( ! pFnNativePostRenderFor )
		pFnNativePostRenderFor = (UFunction*) UObject::GObjObjects()->Data[ 36154 ];

	AGameCrowdAgent_execNativePostRenderFor_Parms NativePostRenderFor_Parms;
	NativePostRenderFor_Parms.PC = PC;
	NativePostRenderFor_Parms.Canvas = Canvas;
	memcpy ( &NativePostRenderFor_Parms.CameraPosition, &CameraPosition, 0xC );
	memcpy ( &NativePostRenderFor_Parms.CameraDir, &CameraDir, 0xC );

	pFnNativePostRenderFor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativePostRenderFor, &NativePostRenderFor_Parms, NULL );

	pFnNativePostRenderFor->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

struct FVector AGameCrowdAgent::eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 36148 ];

	AGameCrowdAgent_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventInitNavigationHandle ( )
{
	static UFunction* pFnInitNavigationHandle = NULL;

	if ( ! pFnInitNavigationHandle )
		pFnInitNavigationHandle = (UFunction*) UObject::GObjObjects()->Data[ 36147 ];

	AGameCrowdAgent_eventInitNavigationHandle_Parms InitNavigationHandle_Parms;

	this->ProcessEvent ( pFnInitNavigationHandle, &InitNavigationHandle_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AActor*                  A                              ( CPF_Parm )

void AGameCrowdAgent::eventOverlappedActorEvent ( class AActor* A )
{
	static UFunction* pFnOverlappedActorEvent = NULL;

	if ( ! pFnOverlappedActorEvent )
		pFnOverlappedActorEvent = (UFunction*) UObject::GObjObjects()->Data[ 36145 ];

	AGameCrowdAgent_eventOverlappedActorEvent_Parms OverlappedActorEvent_Parms;
	OverlappedActorEvent_Parms.A = A;

	this->ProcessEvent ( pFnOverlappedActorEvent, &OverlappedActorEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024002] 
// Parameters infos:
// int                            DamageAmount                   ( CPF_Parm )
// class AController*             EventInstigator                ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  DamageCauser                   ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::TakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser )
{
	static UFunction* pFnTakeDamage = NULL;

	if ( ! pFnTakeDamage )
		pFnTakeDamage = (UFunction*) UObject::GObjObjects()->Data[ 36137 ];

	AGameCrowdAgent_execTakeDamage_Parms TakeDamage_Parms;
	TakeDamage_Parms.DamageAmount = DamageAmount;
	TakeDamage_Parms.EventInstigator = EventInstigator;
	memcpy ( &TakeDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &TakeDamage_Parms.Momentum, &Momentum, 0xC );
	TakeDamage_Parms.DamageType = DamageType;
	memcpy ( &TakeDamage_Parms.HitInfo, &HitInfo, 0x1C );
	TakeDamage_Parms.DamageCauser = DamageCauser;

	this->ProcessEvent ( pFnTakeDamage, &TakeDamage_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventFireDeathEvent ( )
{
	static UFunction* pFnFireDeathEvent = NULL;

	if ( ! pFnFireDeathEvent )
		pFnFireDeathEvent = (UFunction*) UObject::GObjObjects()->Data[ 36136 ];

	AGameCrowdAgent_eventFireDeathEvent_Parms FireDeathEvent_Parms;

	this->ProcessEvent ( pFnFireDeathEvent, &FireDeathEvent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AGameCrowdAgent::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 36134 ];

	AGameCrowdAgent_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	pFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  DestinationActor               ( CPF_OptionalParm | CPF_Parm )

void AGameCrowdAgent::eventUpdateIntermediatePoint ( class AActor* DestinationActor )
{
	static UFunction* pFnUpdateIntermediatePoint = NULL;

	if ( ! pFnUpdateIntermediatePoint )
		pFnUpdateIntermediatePoint = (UFunction*) UObject::GObjObjects()->Data[ 36130 ];

	AGameCrowdAgent_eventUpdateIntermediatePoint_Parms UpdateIntermediatePoint_Parms;
	UpdateIntermediatePoint_Parms.DestinationActor = DestinationActor;

	this->ProcessEvent ( pFnUpdateIntermediatePoint, &UpdateIntermediatePoint_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          fDeltaTime                     ( CPF_Parm )
// struct FVector                 out_CamLoc                     ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_CamRot                     ( CPF_Parm | CPF_OutParm )
// float                          out_FOV                        ( CPF_Parm | CPF_OutParm )

bool AGameCrowdAgent::CalcCamera ( float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV )
{
	static UFunction* pFnCalcCamera = NULL;

	if ( ! pFnCalcCamera )
		pFnCalcCamera = (UFunction*) UObject::GObjObjects()->Data[ 36122 ];

	AGameCrowdAgent_execCalcCamera_Parms CalcCamera_Parms;
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

// Function GameFramework.GameCrowdAgent.IsIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdAgent::IsIdle ( )
{
	static UFunction* pFnIsIdle = NULL;

	if ( ! pFnIsIdle )
		pFnIsIdle = (UFunction*) UObject::GObjObjects()->Data[ 36120 ];

	AGameCrowdAgent_execIsIdle_Parms IsIdle_Parms;

	pFnIsIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsIdle, &IsIdle_Parms, NULL );

	pFnIsIdle->FunctionFlags |= 0x400;

	return IsIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameCrowdAgentBehavior* BehaviorArchetype              ( CPF_Parm )

void AGameCrowdAgent::SetCurrentBehavior ( class UGameCrowdAgentBehavior* BehaviorArchetype )
{
	static UFunction* pFnSetCurrentBehavior = NULL;

	if ( ! pFnSetCurrentBehavior )
		pFnSetCurrentBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36115 ];

	AGameCrowdAgent_execSetCurrentBehavior_Parms SetCurrentBehavior_Parms;
	SetCurrentBehavior_Parms.BehaviorArchetype = BehaviorArchetype;

	pFnSetCurrentBehavior->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentBehavior, &SetCurrentBehavior_Parms, NULL );

	pFnSetCurrentBehavior->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgent.StopBehavior
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36118 ];

	AGameCrowdAgent_eventStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// [0x00020002] 
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorObject              ( CPF_Parm )

void AGameCrowdAgent::ActivateInstancedBehavior ( class UGameCrowdAgentBehavior* NewBehaviorObject )
{
	static UFunction* pFnActivateInstancedBehavior = NULL;

	if ( ! pFnActivateInstancedBehavior )
		pFnActivateInstancedBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36116 ];

	AGameCrowdAgent_execActivateInstancedBehavior_Parms ActivateInstancedBehavior_Parms;
	ActivateInstancedBehavior_Parms.NewBehaviorObject = NewBehaviorObject;

	this->ProcessEvent ( pFnActivateInstancedBehavior, &ActivateInstancedBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ActivateBehavior
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           ( CPF_Parm )

void AGameCrowdAgent::eventActivateBehavior ( class UGameCrowdAgentBehavior* NewBehaviorArchetype )
{
	static UFunction* pFnActivateBehavior = NULL;

	if ( ! pFnActivateBehavior )
		pFnActivateBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36113 ];

	AGameCrowdAgent_eventActivateBehavior_Parms ActivateBehavior_Parms;
	ActivateBehavior_Parms.NewBehaviorArchetype = NewBehaviorArchetype;

	this->ProcessEvent ( pFnActivateBehavior, &ActivateBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::ResetSeePlayer ( )
{
	static UFunction* pFnResetSeePlayer = NULL;

	if ( ! pFnResetSeePlayer )
		pFnResetSeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 36112 ];

	AGameCrowdAgent_execResetSeePlayer_Parms ResetSeePlayer_Parms;

	this->ProcessEvent ( pFnResetSeePlayer, &ResetSeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::TryRandomBehavior ( )
{
	static UFunction* pFnTryRandomBehavior = NULL;

	if ( ! pFnTryRandomBehavior )
		pFnTryRandomBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36109 ];

	AGameCrowdAgent_execTryRandomBehavior_Parms TryRandomBehavior_Parms;

	this->ProcessEvent ( pFnTryRandomBehavior, &TryRandomBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void AGameCrowdAgent::eventNotifySeePlayer ( class APlayerController* PC )
{
	static UFunction* pFnNotifySeePlayer = NULL;

	if ( ! pFnNotifySeePlayer )
		pFnNotifySeePlayer = (UFunction*) UObject::GObjObjects()->Data[ 36105 ];

	AGameCrowdAgent_eventNotifySeePlayer_Parms NotifySeePlayer_Parms;
	NotifySeePlayer_Parms.PC = PC;

	this->ProcessEvent ( pFnNotifySeePlayer, &NotifySeePlayer_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::PlaySpawnBehavior ( )
{
	static UFunction* pFnPlaySpawnBehavior = NULL;

	if ( ! pFnPlaySpawnBehavior )
		pFnPlaySpawnBehavior = (UFunction*) UObject::GObjObjects()->Data[ 33475 ];

	AGameCrowdAgent_execPlaySpawnBehavior_Parms PlaySpawnBehavior_Parms;

	this->ProcessEvent ( pFnPlaySpawnBehavior, &PlaySpawnBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventHandlePotentialAgentEncounter ( )
{
	static UFunction* pFnHandlePotentialAgentEncounter = NULL;

	if ( ! pFnHandlePotentialAgentEncounter )
		pFnHandlePotentialAgentEncounter = (UFunction*) UObject::GObjObjects()->Data[ 33474 ];

	AGameCrowdAgent_eventHandlePotentialAgentEncounter_Parms HandlePotentialAgentEncounter_Parms;

	this->ProcessEvent ( pFnHandlePotentialAgentEncounter, &HandlePotentialAgentEncounter_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 33473 ];

	AGameCrowdAgent_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	this->ProcessEvent ( pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 33472 ];

	AGameCrowdAgent_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:
// class USeqAct_PlayAgentAnimation* Action                         ( CPF_Parm )

void AGameCrowdAgent::OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 33470 ];

	AGameCrowdAgent_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;
	OnPlayAgentAnimation_Parms.Action = Action;

	this->ProcessEvent ( pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00020102] 
// Parameters infos:
// class AActor*                  SpawnLoc                       ( CPF_Parm )
// class AGameCrowdAgent*         AgentTemplate                  ( CPF_Parm )
// class UGameCrowdGroup*         NewGroup                       ( CPF_Parm )
// float                          AgentWarmUpTime                ( CPF_Parm )

void AGameCrowdAgent::InitializeAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmUpTime )
{
	static UFunction* pFnInitializeAgent = NULL;

	if ( ! pFnInitializeAgent )
		pFnInitializeAgent = (UFunction*) UObject::GObjObjects()->Data[ 33464 ];

	AGameCrowdAgent_execInitializeAgent_Parms InitializeAgent_Parms;
	InitializeAgent_Parms.SpawnLoc = SpawnLoc;
	InitializeAgent_Parms.AgentTemplate = AgentTemplate;
	InitializeAgent_Parms.NewGroup = NewGroup;
	InitializeAgent_Parms.AgentWarmUpTime = AgentWarmUpTime;

	this->ProcessEvent ( pFnInitializeAgent, &InitializeAgent_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetLighting
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnableLightEnvironment        ( CPF_Parm )
// struct FLightingChannelContainer AgentLightingChannel           ( CPF_Parm )
// unsigned long                  bCastShadows                   ( CPF_Parm )

void AGameCrowdAgent::SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 33460 ];

	AGameCrowdAgent_execSetLighting_Parms SetLighting_Parms;
	SetLighting_Parms.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy ( &SetLighting_Parms.AgentLightingChannel, &AgentLightingChannel, 0x4 );
	SetLighting_Parms.bCastShadows = bCastShadows;

	this->ProcessEvent ( pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdAgent::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 33454 ];

	AGameCrowdAgent_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GameCrowdAgent.Destroyed
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgent::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 33453 ];

	AGameCrowdAgent_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PostBeginPlay
// [0x00820102] 
// Parameters infos:

void AGameCrowdAgent::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 33448 ];

	AGameCrowdAgent_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// [0x00020002] 
// Parameters infos:

void AGameCrowdAgent::SetMaxSpeed ( )
{
	static UFunction* pFnSetMaxSpeed = NULL;

	if ( ! pFnSetMaxSpeed )
		pFnSetMaxSpeed = (UFunction*) UObject::GObjObjects()->Data[ 33447 ];

	AGameCrowdAgent_execSetMaxSpeed_Parms SetMaxSpeed_Parms;

	this->ProcessEvent ( pFnSetMaxSpeed, &SetMaxSpeed_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void AGameCrowdAgent::eventSetCurrentDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnSetCurrentDestination = NULL;

	if ( ! pFnSetCurrentDestination )
		pFnSetCurrentDestination = (UFunction*) UObject::GObjObjects()->Data[ 33443 ];

	AGameCrowdAgent_eventSetCurrentDestination_Parms SetCurrentDestination_Parms;
	SetCurrentDestination_Parms.NewDest = NewDest;

	this->ProcessEvent ( pFnSetCurrentDestination, &SetCurrentDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgent::eventWaitForGroupMembers ( )
{
	static UFunction* pFnWaitForGroupMembers = NULL;

	if ( ! pFnWaitForGroupMembers )
		pFnWaitForGroupMembers = (UFunction*) UObject::GObjObjects()->Data[ 33439 ];

	AGameCrowdAgent_eventWaitForGroupMembers_Parms WaitForGroupMembers_Parms;

	this->ProcessEvent ( pFnWaitForGroupMembers, &WaitForGroupMembers_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// [0x00824002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FBehaviorEntry > BehaviorList                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FVector                 BestCameraLoc                  ( CPF_OptionalParm | CPF_Parm )

bool AGameCrowdAgent::PickBehaviorFrom ( TArray< struct FBehaviorEntry > BehaviorList, struct FVector BestCameraLoc )
{
	static UFunction* pFnPickBehaviorFrom = NULL;

	if ( ! pFnPickBehaviorFrom )
		pFnPickBehaviorFrom = (UFunction*) UObject::GObjObjects()->Data[ 33424 ];

	AGameCrowdAgent_execPickBehaviorFrom_Parms PickBehaviorFrom_Parms;
	memcpy ( &PickBehaviorFrom_Parms.BehaviorList, &BehaviorList, 0xC );
	memcpy ( &PickBehaviorFrom_Parms.BestCameraLoc, &BestCameraLoc, 0xC );

	this->ProcessEvent ( pFnPickBehaviorFrom, &PickBehaviorFrom_Parms, NULL );

	return PickBehaviorFrom_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.SetPanic
// [0x00020002] 
// Parameters infos:
// class AActor*                  PanicActor                     ( CPF_Parm )
// unsigned long                  bNewPanic                      ( CPF_Parm )

void AGameCrowdAgent::SetPanic ( class AActor* PanicActor, unsigned long bNewPanic )
{
	static UFunction* pFnSetPanic = NULL;

	if ( ! pFnSetPanic )
		pFnSetPanic = (UFunction*) UObject::GObjObjects()->Data[ 33421 ];

	AGameCrowdAgent_execSetPanic_Parms SetPanic_Parms;
	SetPanic_Parms.PanicActor = PanicActor;
	SetPanic_Parms.bNewPanic = bNewPanic;

	this->ProcessEvent ( pFnSetPanic, &SetPanic_Parms, NULL );
};

// Function GameFramework.GameCrowdAgent.IsPanicked
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdAgent::IsPanicked ( )
{
	static UFunction* pFnIsPanicked = NULL;

	if ( ! pFnIsPanicked )
		pFnIsPanicked = (UFunction*) UObject::GObjObjects()->Data[ 33418 ];

	AGameCrowdAgent_execIsPanicked_Parms IsPanicked_Parms;

	this->ProcessEvent ( pFnIsPanicked, &IsPanicked_Parms, NULL );

	return IsPanicked_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::CreateAttachments ( )
{
	static UFunction* pFnCreateAttachments = NULL;

	if ( ! pFnCreateAttachments )
		pFnCreateAttachments = (UFunction*) UObject::GObjObjects()->Data[ 36269 ];

	AGameCrowdAgentSkeletal_execCreateAttachments_Parms CreateAttachments_Parms;

	this->ProcessEvent ( pFnCreateAttachments, &CreateAttachments_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void AGameCrowdAgentSkeletal::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 36265 ];

	AGameCrowdAgentSkeletal_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventStopIdleAnimation ( )
{
	static UFunction* pFnStopIdleAnimation = NULL;

	if ( ! pFnStopIdleAnimation )
		pFnStopIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 36264 ];

	AGameCrowdAgentSkeletal_eventStopIdleAnimation_Parms StopIdleAnimation_Parms;

	this->ProcessEvent ( pFnStopIdleAnimation, &StopIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// [0x00020902] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventPlayIdleAnimation ( )
{
	static UFunction* pFnPlayIdleAnimation = NULL;

	if ( ! pFnPlayIdleAnimation )
		pFnPlayIdleAnimation = (UFunction*) UObject::GObjObjects()->Data[ 36263 ];

	AGameCrowdAgentSkeletal_eventPlayIdleAnimation_Parms PlayIdleAnimation_Parms;

	this->ProcessEvent ( pFnPlayIdleAnimation, &PlayIdleAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdAgentSkeletal::eventClearLatentAnimation ( )
{
	static UFunction* pFnClearLatentAnimation = NULL;

	if ( ! pFnClearLatentAnimation )
		pFnClearLatentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 36262 ];

	AGameCrowdAgentSkeletal_eventClearLatentAnimation_Parms ClearLatentAnimation_Parms;

	this->ProcessEvent ( pFnClearLatentAnimation, &ClearLatentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// [0x00020102] 
// Parameters infos:
// class USeqAct_PlayAgentAnimation* Action                         ( CPF_Parm )

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation ( class USeqAct_PlayAgentAnimation* Action )
{
	static UFunction* pFnOnPlayAgentAnimation = NULL;

	if ( ! pFnOnPlayAgentAnimation )
		pFnOnPlayAgentAnimation = (UFunction*) UObject::GObjObjects()->Data[ 36260 ];

	AGameCrowdAgentSkeletal_execOnPlayAgentAnimation_Parms OnPlayAgentAnimation_Parms;
	OnPlayAgentAnimation_Parms.Action = Action;

	this->ProcessEvent ( pFnOnPlayAgentAnimation, &OnPlayAgentAnimation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bRootMotionEnabled             ( CPF_Parm )

void AGameCrowdAgentSkeletal::SetRootMotion ( unsigned long bRootMotionEnabled )
{
	static UFunction* pFnSetRootMotion = NULL;

	if ( ! pFnSetRootMotion )
		pFnSetRootMotion = (UFunction*) UObject::GObjObjects()->Data[ 36258 ];

	AGameCrowdAgentSkeletal_execSetRootMotion_Parms SetRootMotion_Parms;
	SetRootMotion_Parms.bRootMotionEnabled = bRootMotionEnabled;

	pFnSetRootMotion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRootMotion, &SetRootMotion_Parms, NULL );

	pFnSetRootMotion->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 KillMomentum                   ( CPF_Parm )

void AGameCrowdAgentSkeletal::PlayDeath ( struct FVector KillMomentum )
{
	static UFunction* pFnPlayDeath = NULL;

	if ( ! pFnPlayDeath )
		pFnPlayDeath = (UFunction*) UObject::GObjObjects()->Data[ 36256 ];

	AGameCrowdAgentSkeletal_execPlayDeath_Parms PlayDeath_Parms;
	memcpy ( &PlayDeath_Parms.KillMomentum, &KillMomentum, 0xC );

	pFnPlayDeath->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayDeath, &PlayDeath_Parms, NULL );

	pFnPlayDeath->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// [0x00020102] 
// Parameters infos:
// unsigned long                  bEnableLightEnvironment        ( CPF_Parm )
// struct FLightingChannelContainer AgentLightingChannel           ( CPF_Parm )
// unsigned long                  bCastShadows                   ( CPF_Parm )

void AGameCrowdAgentSkeletal::SetLighting ( unsigned long bEnableLightEnvironment, struct FLightingChannelContainer AgentLightingChannel, unsigned long bCastShadows )
{
	static UFunction* pFnSetLighting = NULL;

	if ( ! pFnSetLighting )
		pFnSetLighting = (UFunction*) UObject::GObjObjects()->Data[ 36252 ];

	AGameCrowdAgentSkeletal_execSetLighting_Parms SetLighting_Parms;
	SetLighting_Parms.bEnableLightEnvironment = bEnableLightEnvironment;
	memcpy ( &SetLighting_Parms.AgentLightingChannel, &AgentLightingChannel, 0x4 );
	SetLighting_Parms.bCastShadows = bCastShadows;

	this->ProcessEvent ( pFnSetLighting, &SetLighting_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdAgentSkeletal::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36251 ];

	AGameCrowdAgentSkeletal_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdAgentBehavior::AllowBehaviorAt ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 36215 ];

	UGameCrowdAgentBehavior_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;
	AllowBehaviorAt_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );

	return AllowBehaviorAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdAgentBehavior::AllowThisDestination ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 36212 ];

	UGameCrowdAgentBehavior_execAllowThisDestination_Parms AllowThisDestination_Parms;
	AllowThisDestination_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );

	return AllowThisDestination_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         OtherAgent                     ( CPF_Parm )

void UGameCrowdAgentBehavior::eventPropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent )
{
	static UFunction* pFnPropagateViralBehaviorTo = NULL;

	if ( ! pFnPropagateViralBehaviorTo )
		pFnPropagateViralBehaviorTo = (UFunction*) UObject::GObjObjects()->Data[ 36210 ];

	UGameCrowdAgentBehavior_eventPropagateViralBehaviorTo_Parms PropagateViralBehaviorTo_Parms;
	PropagateViralBehaviorTo_Parms.OtherAgent = OtherAgent;

	this->ProcessEvent ( pFnPropagateViralBehaviorTo, &PropagateViralBehaviorTo_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActionTarget                ( CPF_Parm )

void UGameCrowdAgentBehavior::ActivatedBy ( class AActor* NewActionTarget )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 36208 ];

	UGameCrowdAgentBehavior_execActivatedBy_Parms ActivatedBy_Parms;
	ActivatedBy_Parms.NewActionTarget = NewActionTarget;

	this->ProcessEvent ( pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdAgentBehavior::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 36132 ];

	UGameCrowdAgentBehavior_execGetDestinationActor_Parms GetDestinationActor_Parms;

	this->ProcessEvent ( pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );

	return GetDestinationActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// [0x00020000] 
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void UGameCrowdAgentBehavior::ChangingDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 36206 ];

	UGameCrowdAgentBehavior_execChangingDestination_Parms ChangingDestination_Parms;
	ChangingDestination_Parms.NewDest = NewDest;

	this->ProcessEvent ( pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdAgentBehavior::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 36183 ];

	UGameCrowdAgentBehavior_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void UGameCrowdAgentBehavior::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 36202 ];

	UGameCrowdAgentBehavior_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// [0x00020000] 
// Parameters infos:

void UGameCrowdAgentBehavior::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36201 ];

	UGameCrowdAgentBehavior_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdAgentBehavior::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36199 ];

	UGameCrowdAgentBehavior_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdAgentBehavior::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 36197 ];

	UGameCrowdAgentBehavior_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGameCrowdAgentBehavior::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 36196 ];

	UGameCrowdAgentBehavior_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	this->ProcessEvent ( pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 cameraLoc                      ( CPF_Parm )

bool UGameCrowdAgentBehavior::CanBeUsedBy ( class AGameCrowdAgent* Agent, struct FVector cameraLoc )
{
	static UFunction* pFnCanBeUsedBy = NULL;

	if ( ! pFnCanBeUsedBy )
		pFnCanBeUsedBy = (UFunction*) UObject::GObjObjects()->Data[ 33437 ];

	UGameCrowdAgentBehavior_execCanBeUsedBy_Parms CanBeUsedBy_Parms;
	CanBeUsedBy_Parms.Agent = Agent;
	memcpy ( &CanBeUsedBy_Parms.cameraLoc, &cameraLoc, 0xC );

	this->ProcessEvent ( pFnCanBeUsedBy, &CanBeUsedBy_Parms, NULL );

	return CanBeUsedBy_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdAgentBehavior.Tick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void UGameCrowdAgentBehavior::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 36192 ];

	UGameCrowdAgentBehavior_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	pFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );

	pFnTick->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdAgentBehavior::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 36190 ];

	UGameCrowdAgentBehavior_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 36340 ];

	UGameCrowdBehavior_PlayAnimation_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36339 ];

	UGameCrowdBehavior_PlayAnimation_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow ( )
{
	static UFunction* pFnPlayAgentAnimationNow = NULL;

	if ( ! pFnPlayAgentAnimationNow )
		pFnPlayAgentAnimationNow = (UFunction*) UObject::GObjObjects()->Data[ 36335 ];

	UGameCrowdBehavior_PlayAnimation_execPlayAgentAnimationNow_Parms PlayAgentAnimationNow_Parms;

	this->ProcessEvent ( pFnPlayAgentAnimationNow, &PlayAgentAnimationNow_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UAnimNodeSequence*       SeqNode                        ( CPF_Parm )
// float                          PlayedTime                     ( CPF_Parm )
// float                          ExcessTime                     ( CPF_Parm )

void UGameCrowdBehavior_PlayAnimation::eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime )
{
	static UFunction* pFnOnAnimEnd = NULL;

	if ( ! pFnOnAnimEnd )
		pFnOnAnimEnd = (UFunction*) UObject::GObjObjects()->Data[ 36331 ];

	UGameCrowdBehavior_PlayAnimation_eventOnAnimEnd_Parms OnAnimEnd_Parms;
	OnAnimEnd_Parms.SeqNode = SeqNode;
	OnAnimEnd_Parms.PlayedTime = PlayedTime;
	OnAnimEnd_Parms.ExcessTime = ExcessTime;

	this->ProcessEvent ( pFnOnAnimEnd, &OnAnimEnd_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput ( )
{
	static UFunction* pFnSetSequenceOutput = NULL;

	if ( ! pFnSetSequenceOutput )
		pFnSetSequenceOutput = (UFunction*) UObject::GObjObjects()->Data[ 36330 ];

	UGameCrowdBehavior_PlayAnimation_execSetSequenceOutput_Parms SetSequenceOutput_Parms;

	pFnSetSequenceOutput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSequenceOutput, &SetSequenceOutput_Parms, NULL );

	pFnSetSequenceOutput->FunctionFlags |= 0x400;
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UGameCrowdBehavior_PlayAnimation::eventFinishedTargetRotation ( )
{
	static UFunction* pFnFinishedTargetRotation = NULL;

	if ( ! pFnFinishedTargetRotation )
		pFnFinishedTargetRotation = (UFunction*) UObject::GObjObjects()->Data[ 36329 ];

	UGameCrowdBehavior_PlayAnimation_eventFinishedTargetRotation_Parms FinishedTargetRotation_Parms;

	this->ProcessEvent ( pFnFinishedTargetRotation, &FinishedTargetRotation_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_PlayAnimation::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36322 ];

	UGameCrowdBehavior_PlayAnimation_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 36365 ];

	UGameCrowdBehavior_RunFromPanic_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowBehaviorAt = NULL;

	if ( ! pFnAllowBehaviorAt )
		pFnAllowBehaviorAt = (UFunction*) UObject::GObjObjects()->Data[ 36361 ];

	UGameCrowdBehavior_RunFromPanic_execAllowBehaviorAt_Parms AllowBehaviorAt_Parms;
	AllowBehaviorAt_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowBehaviorAt, &AllowBehaviorAt_Parms, NULL );

	return AllowBehaviorAt_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdDestination*   Destination                    ( CPF_Parm )

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination ( class AGameCrowdDestination* Destination )
{
	static UFunction* pFnAllowThisDestination = NULL;

	if ( ! pFnAllowThisDestination )
		pFnAllowThisDestination = (UFunction*) UObject::GObjObjects()->Data[ 36355 ];

	UGameCrowdBehavior_RunFromPanic_execAllowThisDestination_Parms AllowThisDestination_Parms;
	AllowThisDestination_Parms.Destination = Destination;

	this->ProcessEvent ( pFnAllowThisDestination, &AllowThisDestination_Parms, NULL );

	return AllowThisDestination_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.PropagateViralBehaviorTo
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         OtherAgent                     ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::eventPropagateViralBehaviorTo ( class AGameCrowdAgent* OtherAgent )
{
	static UFunction* pFnPropagateViralBehaviorTo = NULL;

	if ( ! pFnPropagateViralBehaviorTo )
		pFnPropagateViralBehaviorTo = (UFunction*) UObject::GObjObjects()->Data[ 36353 ];

	UGameCrowdBehavior_RunFromPanic_eventPropagateViralBehaviorTo_Parms PropagateViralBehaviorTo_Parms;
	PropagateViralBehaviorTo_Parms.OtherAgent = OtherAgent;

	this->ProcessEvent ( pFnPropagateViralBehaviorTo, &PropagateViralBehaviorTo_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_RunFromPanic::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36352 ];

	UGameCrowdBehavior_RunFromPanic_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36350 ];

	UGameCrowdBehavior_RunFromPanic_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// [0x00020002] 
// Parameters infos:
// class AActor*                  NewActionTarget                ( CPF_Parm )

void UGameCrowdBehavior_RunFromPanic::ActivatedBy ( class AActor* NewActionTarget )
{
	static UFunction* pFnActivatedBy = NULL;

	if ( ! pFnActivatedBy )
		pFnActivatedBy = (UFunction*) UObject::GObjObjects()->Data[ 36344 ];

	UGameCrowdBehavior_RunFromPanic_execActivatedBy_Parms ActivatedBy_Parms;
	ActivatedBy_Parms.NewActionTarget = NewActionTarget;

	this->ProcessEvent ( pFnActivatedBy, &ActivatedBy_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitForGroup::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36374 ];

	UGameCrowdBehavior_WaitForGroup_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 36372 ];

	UGameCrowdBehavior_WaitForGroup_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 36369 ];

	UGameCrowdBehavior_WaitForGroup_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdBehavior_WaitForGroup::InitBehavior ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnInitBehavior = NULL;

	if ( ! pFnInitBehavior )
		pFnInitBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36367 ];

	UGameCrowdBehavior_WaitForGroup_execInitBehavior_Parms InitBehavior_Parms;
	InitBehavior_Parms.Agent = Agent;

	this->ProcessEvent ( pFnInitBehavior, &InitBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// [0x00020002] 
// Parameters infos:

void UGameCrowdBehavior_WaitInQueue::StopBehavior ( )
{
	static UFunction* pFnStopBehavior = NULL;

	if ( ! pFnStopBehavior )
		pFnStopBehavior = (UFunction*) UObject::GObjObjects()->Data[ 36387 ];

	UGameCrowdBehavior_WaitInQueue_execStopBehavior_Parms StopBehavior_Parms;

	this->ProcessEvent ( pFnStopBehavior, &StopBehavior_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle ( )
{
	static UFunction* pFnShouldEndIdle = NULL;

	if ( ! pFnShouldEndIdle )
		pFnShouldEndIdle = (UFunction*) UObject::GObjObjects()->Data[ 36385 ];

	UGameCrowdBehavior_WaitInQueue_execShouldEndIdle_Parms ShouldEndIdle_Parms;

	pFnShouldEndIdle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShouldEndIdle, &ShouldEndIdle_Parms, NULL );

	pFnShouldEndIdle->FunctionFlags |= 0x400;

	return ShouldEndIdle_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// [0x00020002] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString ( )
{
	static UFunction* pFnGetBehaviorString = NULL;

	if ( ! pFnGetBehaviorString )
		pFnGetBehaviorString = (UFunction*) UObject::GObjObjects()->Data[ 36383 ];

	UGameCrowdBehavior_WaitInQueue_execGetBehaviorString_Parms GetBehaviorString_Parms;

	this->ProcessEvent ( pFnGetBehaviorString, &GetBehaviorString_Parms, NULL );

	return GetBehaviorString_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor ( )
{
	static UFunction* pFnGetDestinationActor = NULL;

	if ( ! pFnGetDestinationActor )
		pFnGetDestinationActor = (UFunction*) UObject::GObjObjects()->Data[ 36381 ];

	UGameCrowdBehavior_WaitInQueue_execGetDestinationActor_Parms GetDestinationActor_Parms;

	this->ProcessEvent ( pFnGetDestinationActor, &GetDestinationActor_Parms, NULL );

	return GetDestinationActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   NewDest                        ( CPF_Parm )

void UGameCrowdBehavior_WaitInQueue::ChangingDestination ( class AGameCrowdDestination* NewDest )
{
	static UFunction* pFnChangingDestination = NULL;

	if ( ! pFnChangingDestination )
		pFnChangingDestination = (UFunction*) UObject::GObjObjects()->Data[ 36379 ];

	UGameCrowdBehavior_WaitInQueue_execChangingDestination_Parms ChangingDestination_Parms;
	ChangingDestination_Parms.NewDest = NewDest;

	this->ProcessEvent ( pFnChangingDestination, &ChangingDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameCrowdBehavior_WaitInQueue::HandleMovement ( )
{
	static UFunction* pFnHandleMovement = NULL;

	if ( ! pFnHandleMovement )
		pFnHandleMovement = (UFunction*) UObject::GObjObjects()->Data[ 36377 ];

	UGameCrowdBehavior_WaitInQueue_execHandleMovement_Parms HandleMovement_Parms;

	pFnHandleMovement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHandleMovement, &HandleMovement_Parms, NULL );

	pFnHandleMovement->FunctionFlags |= 0x400;

	return HandleMovement_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdGroup.UpdateDestinations
// [0x00020002] 
// Parameters infos:
// class AGameCrowdDestination*   NewDestination                 ( CPF_Parm )

void UGameCrowdGroup::UpdateDestinations ( class AGameCrowdDestination* NewDestination )
{
	static UFunction* pFnUpdateDestinations = NULL;

	if ( ! pFnUpdateDestinations )
		pFnUpdateDestinations = (UFunction*) UObject::GObjObjects()->Data[ 36498 ];

	UGameCrowdGroup_execUpdateDestinations_Parms UpdateDestinations_Parms;
	UpdateDestinations_Parms.NewDestination = NewDestination;

	this->ProcessEvent ( pFnUpdateDestinations, &UpdateDestinations_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.RemoveMember
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdGroup::RemoveMember ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnRemoveMember = NULL;

	if ( ! pFnRemoveMember )
		pFnRemoveMember = (UFunction*) UObject::GObjObjects()->Data[ 36496 ];

	UGameCrowdGroup_execRemoveMember_Parms RemoveMember_Parms;
	RemoveMember_Parms.Agent = Agent;

	this->ProcessEvent ( pFnRemoveMember, &RemoveMember_Parms, NULL );
};

// Function GameFramework.GameCrowdGroup.AddMember
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void UGameCrowdGroup::AddMember ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAddMember = NULL;

	if ( ! pFnAddMember )
		pFnAddMember = (UFunction*) UObject::GObjObjects()->Data[ 36494 ];

	UGameCrowdGroup_execAddMember_Parms AddMember_Parms;
	AddMember_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAddMember, &AddMember_Parms, NULL );
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] 
// Parameters infos:
// class USeqAct_Toggle*          Action                         ( CPF_Parm )

void AGameCrowdInteractionPoint::OnToggle ( class USeqAct_Toggle* Action )
{
	static UFunction* pFnOnToggle = NULL;

	if ( ! pFnOnToggle )
		pFnOnToggle = (UFunction*) UObject::GObjObjects()->Data[ 36282 ];

	AGameCrowdInteractionPoint_execOnToggle_Parms OnToggle_Parms;
	OnToggle_Parms.Action = Action;

	this->ProcessEvent ( pFnOnToggle, &OnToggle_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.GeneratePathToActor
// [0x00824802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// class AActor*                  Goal                           ( CPF_Parm )
// float                          WithinDistance                 ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAllowPartialPath              ( CPF_OptionalParm | CPF_Parm )

struct FVector AGameCrowdDestination::eventGeneratePathToActor ( class AGameCrowdAgent* Agent, class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath )
{
	static UFunction* pFnGeneratePathToActor = NULL;

	if ( ! pFnGeneratePathToActor )
		pFnGeneratePathToActor = (UFunction*) UObject::GObjObjects()->Data[ 36459 ];

	AGameCrowdDestination_eventGeneratePathToActor_Parms GeneratePathToActor_Parms;
	GeneratePathToActor_Parms.Agent = Agent;
	GeneratePathToActor_Parms.Goal = Goal;
	GeneratePathToActor_Parms.WithinDistance = WithinDistance;
	GeneratePathToActor_Parms.bAllowPartialPath = bAllowPartialPath;

	this->ProcessEvent ( pFnGeneratePathToActor, &GeneratePathToActor_Parms, NULL );

	return GeneratePathToActor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.InitNavigationHandle
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameCrowdDestination::eventInitNavigationHandle ( )
{
	static UFunction* pFnInitNavigationHandle = NULL;

	if ( ! pFnInitNavigationHandle )
		pFnInitNavigationHandle = (UFunction*) UObject::GObjObjects()->Data[ 36458 ];

	AGameCrowdDestination_eventInitNavigationHandle_Parms InitNavigationHandle_Parms;

	this->ProcessEvent ( pFnInitNavigationHandle, &InitNavigationHandle_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// [0x00C20002] 
// Parameters infos:
// class USeqAct_GameCrowdSpawner* Spawner                        ( CPF_Parm )
// struct FVector                 SpawnPos                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void AGameCrowdDestination::GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 36452 ];

	AGameCrowdDestination_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.Spawner = Spawner;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnPos )
		memcpy ( SpawnPos, &GetSpawnPosition_Parms.SpawnPos, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

bool AGameCrowdDestination::eventAllowableDestinationFor ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAllowableDestinationFor = NULL;

	if ( ! pFnAllowableDestinationFor )
		pFnAllowableDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 36348 ];

	AGameCrowdDestination_eventAllowableDestinationFor_Parms AllowableDestinationFor_Parms;
	AllowableDestinationFor_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAllowableDestinationFor, &AllowableDestinationFor_Parms, NULL );

	return AllowableDestinationFor_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.AtCapacity
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestination::AtCapacity ( )
{
	static UFunction* pFnAtCapacity = NULL;

	if ( ! pFnAtCapacity )
		pFnAtCapacity = (UFunction*) UObject::GObjObjects()->Data[ 36359 ];

	AGameCrowdDestination_execAtCapacity_Parms AtCapacity_Parms;

	this->ProcessEvent ( pFnAtCapacity, &AtCapacity_Parms, NULL );

	return AtCapacity_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         ArrivingAgent                  ( CPF_Parm )

void AGameCrowdDestination::eventIncrementCustomerCount ( class AGameCrowdAgent* ArrivingAgent )
{
	static UFunction* pFnIncrementCustomerCount = NULL;

	if ( ! pFnIncrementCustomerCount )
		pFnIncrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 36445 ];

	AGameCrowdDestination_eventIncrementCustomerCount_Parms IncrementCustomerCount_Parms;
	IncrementCustomerCount_Parms.ArrivingAgent = ArrivingAgent;

	this->ProcessEvent ( pFnIncrementCustomerCount, &IncrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         DepartingAgent                 ( CPF_Parm )

void AGameCrowdDestination::eventDecrementCustomerCount ( class AGameCrowdAgent* DepartingAgent )
{
	static UFunction* pFnDecrementCustomerCount = NULL;

	if ( ! pFnDecrementCustomerCount )
		pFnDecrementCustomerCount = (UFunction*) UObject::GObjObjects()->Data[ 36437 ];

	AGameCrowdDestination_eventDecrementCustomerCount_Parms DecrementCustomerCount_Parms;
	DecrementCustomerCount_Parms.DepartingAgent = DepartingAgent;

	this->ProcessEvent ( pFnDecrementCustomerCount, &DecrementCustomerCount_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// unsigned long                  bIgnoreRestrictions            ( CPF_Parm )

void AGameCrowdDestination::PickNewDestinationFor ( class AGameCrowdAgent* Agent, unsigned long bIgnoreRestrictions )
{
	static UFunction* pFnPickNewDestinationFor = NULL;

	if ( ! pFnPickNewDestinationFor )
		pFnPickNewDestinationFor = (UFunction*) UObject::GObjObjects()->Data[ 36431 ];

	AGameCrowdDestination_execPickNewDestinationFor_Parms PickNewDestinationFor_Parms;
	PickNewDestinationFor_Parms.Agent = Agent;
	PickNewDestinationFor_Parms.bIgnoreRestrictions = bIgnoreRestrictions;

	this->ProcessEvent ( pFnPickNewDestinationFor, &PickNewDestinationFor_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdDestination::eventReachedDestination ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 36425 ];

	AGameCrowdDestination_eventReachedDestination_Parms ReachedDestination_Parms;
	ReachedDestination_Parms.Agent = Agent;

	this->ProcessEvent ( pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.PostBeginPlay
// [0x00020102] 
// Parameters infos:

void AGameCrowdDestination::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36424 ];

	AGameCrowdDestination_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GameCrowdDestination.ReachedBy
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 TestPosition                   ( CPF_Parm )
// unsigned long                  bTestExactly                   ( CPF_Parm )

bool AGameCrowdDestination::ReachedBy ( class AGameCrowdAgent* Agent, struct FVector TestPosition, unsigned long bTestExactly )
{
	static UFunction* pFnReachedBy = NULL;

	if ( ! pFnReachedBy )
		pFnReachedBy = (UFunction*) UObject::GObjObjects()->Data[ 36178 ];

	AGameCrowdDestination_execReachedBy_Parms ReachedBy_Parms;
	ReachedBy_Parms.Agent = Agent;
	memcpy ( &ReachedBy_Parms.TestPosition, &TestPosition, 0xC );
	ReachedBy_Parms.bTestExactly = bTestExactly;

	pFnReachedBy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReachedBy, &ReachedBy_Parms, NULL );

	pFnReachedBy->FunctionFlags |= 0x400;

	return ReachedBy_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.NotifyPathChanged
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGameCrowdDestination::eventNotifyPathChanged ( )
{
	static UFunction* pFnNotifyPathChanged = NULL;

	if ( ! pFnNotifyPathChanged )
		pFnNotifyPathChanged = (UFunction*) UObject::GObjObjects()->Data[ 36420 ];

	AGameCrowdDestination_eventNotifyPathChanged_Parms NotifyPathChanged_Parms;

	this->ProcessEvent ( pFnNotifyPathChanged, &NotifyPathChanged_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestinationQueuePoint::HasCustomer ( )
{
	static UFunction* pFnHasCustomer = NULL;

	if ( ! pFnHasCustomer )
		pFnHasCustomer = (UFunction*) UObject::GObjObjects()->Data[ 36443 ];

	AGameCrowdDestinationQueuePoint_execHasCustomer_Parms HasCustomer_Parms;

	this->ProcessEvent ( pFnHasCustomer, &HasCustomer_Parms, NULL );

	return HasCustomer_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         OldCustomer                    ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::ClearQueue ( class AGameCrowdAgent* OldCustomer )
{
	static UFunction* pFnClearQueue = NULL;

	if ( ! pFnClearQueue )
		pFnClearQueue = (UFunction*) UObject::GObjObjects()->Data[ 36490 ];

	AGameCrowdDestinationQueuePoint_execClearQueue_Parms ClearQueue_Parms;
	ClearQueue_Parms.OldCustomer = OldCustomer;

	this->ProcessEvent ( pFnClearQueue, &ClearQueue_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgent*         NewCustomer                    ( CPF_Parm )
// class AGameCrowdInteractionPoint* PreviousPosition               ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::AddCustomer ( class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition )
{
	static UFunction* pFnAddCustomer = NULL;

	if ( ! pFnAddCustomer )
		pFnAddCustomer = (UFunction*) UObject::GObjObjects()->Data[ 36487 ];

	AGameCrowdDestinationQueuePoint_execAddCustomer_Parms AddCustomer_Parms;
	AddCustomer_Parms.NewCustomer = NewCustomer;
	AddCustomer_Parms.PreviousPosition = PreviousPosition;

	this->ProcessEvent ( pFnAddCustomer, &AddCustomer_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void AGameCrowdDestinationQueuePoint::ActuallyAdvance ( )
{
	static UFunction* pFnActuallyAdvance = NULL;

	if ( ! pFnActuallyAdvance )
		pFnActuallyAdvance = (UFunction*) UObject::GObjObjects()->Data[ 36483 ];

	AGameCrowdDestinationQueuePoint_execActuallyAdvance_Parms ActuallyAdvance_Parms;

	this->ProcessEvent ( pFnActuallyAdvance, &ActuallyAdvance_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// [0x00020002] 
// Parameters infos:
// class AGameCrowdInteractionPoint* FrontPosition                  ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo ( class AGameCrowdInteractionPoint* FrontPosition )
{
	static UFunction* pFnAdvanceCustomerTo = NULL;

	if ( ! pFnAdvanceCustomerTo )
		pFnAdvanceCustomerTo = (UFunction*) UObject::GObjObjects()->Data[ 36481 ];

	AGameCrowdDestinationQueuePoint_execAdvanceCustomerTo_Parms AdvanceCustomerTo_Parms;
	AdvanceCustomerTo_Parms.FrontPosition = FrontPosition;

	this->ProcessEvent ( pFnAdvanceCustomerTo, &AdvanceCustomerTo_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGameCrowdDestinationQueuePoint::eventReachedDestination ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnReachedDestination = NULL;

	if ( ! pFnReachedDestination )
		pFnReachedDestination = (UFunction*) UObject::GObjObjects()->Data[ 36478 ];

	AGameCrowdDestinationQueuePoint_eventReachedDestination_Parms ReachedDestination_Parms;
	ReachedDestination_Parms.Agent = Agent;

	this->ProcessEvent ( pFnReachedDestination, &ReachedDestination_Parms, NULL );
};

// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGameCrowdDestinationQueuePoint::HasSpace ( )
{
	static UFunction* pFnHasSpace = NULL;

	if ( ! pFnHasSpace )
		pFnHasSpace = (UFunction*) UObject::GObjObjects()->Data[ 36447 ];

	AGameCrowdDestinationQueuePoint_execHasSpace_Parms HasSpace_Parms;

	this->ProcessEvent ( pFnHasSpace, &HasSpace_Parms, NULL );

	return HasSpace_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedBy
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )
// struct FVector                 TestPosition                   ( CPF_Parm )

bool AGameCrowdDestinationQueuePoint::ReachedBy ( class AGameCrowdAgent* Agent, struct FVector TestPosition )
{
	static UFunction* pFnReachedBy = NULL;

	if ( ! pFnReachedBy )
		pFnReachedBy = (UFunction*) UObject::GObjObjects()->Data[ 36474 ];

	AGameCrowdDestinationQueuePoint_execReachedBy_Parms ReachedBy_Parms;
	ReachedBy_Parms.Agent = Agent;
	memcpy ( &ReachedBy_Parms.TestPosition, &TestPosition, 0xC );

	pFnReachedBy->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReachedBy, &ReachedBy_Parms, NULL );

	pFnReachedBy->FunctionFlags |= 0x400;

	return ReachedBy_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdForcePoint.AppliedForce
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

struct FVector AGameCrowdForcePoint::eventAppliedForce ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAppliedForce = NULL;

	if ( ! pFnAppliedForce )
		pFnAppliedForce = (UFunction*) UObject::GObjObjects()->Data[ 36296 ];

	AGameCrowdForcePoint_eventAppliedForce_Parms AppliedForce_Parms;
	AppliedForce_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAppliedForce, &AppliedForce_Parms, NULL );

	return AppliedForce_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdForcePoint.UnTouch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )

void AGameCrowdForcePoint::eventUnTouch ( class AActor* Other )
{
	static UFunction* pFnUnTouch = NULL;

	if ( ! pFnUnTouch )
		pFnUnTouch = (UFunction*) UObject::GObjObjects()->Data[ 36292 ];

	AGameCrowdForcePoint_eventUnTouch_Parms UnTouch_Parms;
	UnTouch_Parms.Other = Other;

	this->ProcessEvent ( pFnUnTouch, &UnTouch_Parms, NULL );
};

// Function GameFramework.GameCrowdForcePoint.Touch
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  Other                          ( CPF_Parm )
// class UPrimitiveComponent*     OtherComp                      ( CPF_Parm | CPF_EditInline )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FVector                 HitNormal                      ( CPF_Parm )

void AGameCrowdForcePoint::eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal )
{
	static UFunction* pFnTouch = NULL;

	if ( ! pFnTouch )
		pFnTouch = (UFunction*) UObject::GObjObjects()->Data[ 36285 ];

	AGameCrowdForcePoint_eventTouch_Parms Touch_Parms;
	Touch_Parms.Other = Other;
	Touch_Parms.OtherComp = OtherComp;
	memcpy ( &Touch_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &Touch_Parms.HitNormal, &HitNormal, 0xC );

	this->ProcessEvent ( pFnTouch, &Touch_Parms, NULL );
};

// Function GameFramework.GameCrowdAttractor.AppliedForce
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

struct FVector AGameCrowdAttractor::eventAppliedForce ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAppliedForce = NULL;

	if ( ! pFnAppliedForce )
		pFnAppliedForce = (UFunction*) UObject::GObjObjects()->Data[ 36302 ];

	AGameCrowdAttractor_eventAppliedForce_Parms AppliedForce_Parms;
	AppliedForce_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAppliedForce, &AppliedForce_Parms, NULL );

	return AppliedForce_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdRepulsor.AppliedForce
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

struct FVector AGameCrowdRepulsor::eventAppliedForce ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnAppliedForce = NULL;

	if ( ! pFnAppliedForce )
		pFnAppliedForce = (UFunction*) UObject::GObjObjects()->Data[ 36514 ];

	AGameCrowdRepulsor_eventAppliedForce_Parms AppliedForce_Parms;
	AppliedForce_Parms.Agent = Agent;

	this->ProcessEvent ( pFnAppliedForce, &AppliedForce_Parms, NULL );

	return AppliedForce_Parms.ReturnValue;
};

// Function GameFramework.GameCrowdReplicationActor.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameCrowdReplicationActor::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 36510 ];

	AGameCrowdReplicationActor_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FName                   VarName                        ( CPF_Parm )

void AGameCrowdReplicationActor::eventReplicatedEvent ( struct FName VarName )
{
	static UFunction* pFnReplicatedEvent = NULL;

	if ( ! pFnReplicatedEvent )
		pFnReplicatedEvent = (UFunction*) UObject::GObjObjects()->Data[ 36507 ];

	AGameCrowdReplicationActor_eventReplicatedEvent_Parms ReplicatedEvent_Parms;
	memcpy ( &ReplicatedEvent_Parms.VarName, &VarName, 0x8 );

	this->ProcessEvent ( pFnReplicatedEvent, &ReplicatedEvent_Parms, NULL );
};

// Function GameFramework.GameDamageType.HandleDamageFX
// [0x00422000] 
// Parameters infos:
// class AGamePawn*               DamagedPawn                    ( CPF_Parm )
// struct FTakeHitInfo            HitInfo                        ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGameDamageType::HandleDamageFX ( class AGamePawn* DamagedPawn, struct FTakeHitInfo* HitInfo )
{
	static UFunction* pFnHandleDamageFX = NULL;

	if ( ! pFnHandleDamageFX )
		pFnHandleDamageFX = (UFunction*) UObject::GObjObjects()->Data[ 36619 ];

	UGameDamageType_execHandleDamageFX_Parms HandleDamageFX_Parms;
	HandleDamageFX_Parms.DamagedPawn = DamagedPawn;

	this->ProcessEvent ( pFnHandleDamageFX, &HandleDamageFX_Parms, NULL );

	if ( HitInfo )
		memcpy ( HitInfo, &HandleDamageFX_Parms.HitInfo, 0x38 );
};

// Function GameFramework.GameDamageType.ShouldHeadShotGib
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   TestPawn                       ( CPF_Parm )
// class APawn*                   Instigator                     ( CPF_Parm )

bool UGameDamageType::ShouldHeadShotGib ( class APawn* TestPawn, class APawn* Instigator )
{
	static UFunction* pFnShouldHeadShotGib = NULL;

	if ( ! pFnShouldHeadShotGib )
		pFnShouldHeadShotGib = (UFunction*) UObject::GObjObjects()->Data[ 36613 ];

	UGameDamageType_execShouldHeadShotGib_Parms ShouldHeadShotGib_Parms;
	ShouldHeadShotGib_Parms.TestPawn = TestPawn;
	ShouldHeadShotGib_Parms.Instigator = Instigator;

	this->ProcessEvent ( pFnShouldHeadShotGib, &ShouldHeadShotGib_Parms, NULL );

	return ShouldHeadShotGib_Parms.ReturnValue;
};

// Function GameFramework.GameDamageType.PlayExtraDamageSound
// [0x00022002] 
// Parameters infos:
// class APawn*                   VictimPawn                     ( CPF_Parm )

void UGameDamageType::PlayExtraDamageSound ( class APawn* VictimPawn )
{
	static UFunction* pFnPlayExtraDamageSound = NULL;

	if ( ! pFnPlayExtraDamageSound )
		pFnPlayExtraDamageSound = (UFunction*) UObject::GObjObjects()->Data[ 36611 ];

	UGameDamageType_execPlayExtraDamageSound_Parms PlayExtraDamageSound_Parms;
	PlayExtraDamageSound_Parms.VictimPawn = VictimPawn;

	this->ProcessEvent ( pFnPlayExtraDamageSound, &PlayExtraDamageSound_Parms, NULL );
};

// Function GameFramework.GameDamageType.IsScriptedDamageType
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGameDamageType::IsScriptedDamageType ( )
{
	static UFunction* pFnIsScriptedDamageType = NULL;

	if ( ! pFnIsScriptedDamageType )
		pFnIsScriptedDamageType = (UFunction*) UObject::GObjObjects()->Data[ 36609 ];

	UGameDamageType_execIsScriptedDamageType_Parms IsScriptedDamageType_Parms;

	this->ProcessEvent ( pFnIsScriptedDamageType, &IsScriptedDamageType_Parms, NULL );

	return IsScriptedDamageType_Parms.ReturnValue;
};

// Function GameFramework.GameDamageType.ShouldPlayForceFeedback
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   DamagedPawn                    ( CPF_Parm )

bool UGameDamageType::ShouldPlayForceFeedback ( class APawn* DamagedPawn )
{
	static UFunction* pFnShouldPlayForceFeedback = NULL;

	if ( ! pFnShouldPlayForceFeedback )
		pFnShouldPlayForceFeedback = (UFunction*) UObject::GObjObjects()->Data[ 36606 ];

	UGameDamageType_execShouldPlayForceFeedback_Parms ShouldPlayForceFeedback_Parms;
	ShouldPlayForceFeedback_Parms.DamagedPawn = DamagedPawn;

	this->ProcessEvent ( pFnShouldPlayForceFeedback, &ShouldPlayForceFeedback_Parms, NULL );

	return ShouldPlayForceFeedback_Parms.ReturnValue;
};

// Function GameFramework.GameDamageType.HandleDeadPlayer
// [0x00022000] 
// Parameters infos:
// class AGamePlayerController*   Player                         ( CPF_Parm )

void UGameDamageType::HandleDeadPlayer ( class AGamePlayerController* Player )
{
	static UFunction* pFnHandleDeadPlayer = NULL;

	if ( ! pFnHandleDeadPlayer )
		pFnHandleDeadPlayer = (UFunction*) UObject::GObjObjects()->Data[ 36604 ];

	UGameDamageType_execHandleDeadPlayer_Parms HandleDeadPlayer_Parms;
	HandleDeadPlayer_Parms.Player = Player;

	this->ProcessEvent ( pFnHandleDeadPlayer, &HandleDeadPlayer_Parms, NULL );
};

// Function GameFramework.GameDamageType.HandleKilledPawn
// [0x00022000] 
// Parameters infos:
// class APawn*                   KilledPawn                     ( CPF_Parm )
// class APawn*                   Instigator                     ( CPF_Parm )

void UGameDamageType::HandleKilledPawn ( class APawn* KilledPawn, class APawn* Instigator )
{
	static UFunction* pFnHandleKilledPawn = NULL;

	if ( ! pFnHandleKilledPawn )
		pFnHandleKilledPawn = (UFunction*) UObject::GObjObjects()->Data[ 36601 ];

	UGameDamageType_execHandleKilledPawn_Parms HandleKilledPawn_Parms;
	HandleKilledPawn_Parms.KilledPawn = KilledPawn;
	HandleKilledPawn_Parms.Instigator = Instigator;

	this->ProcessEvent ( pFnHandleKilledPawn, &HandleKilledPawn_Parms, NULL );
};

// Function GameFramework.GameDamageType.HandleDamagedPawn
// [0x00022000] 
// Parameters infos:
// class APawn*                   DamagedPawn                    ( CPF_Parm )
// class APawn*                   Instigator                     ( CPF_Parm )
// int                            DamageAmt                      ( CPF_Parm )
// struct FVector                 Momentum                       ( CPF_Parm )

void UGameDamageType::HandleDamagedPawn ( class APawn* DamagedPawn, class APawn* Instigator, int DamageAmt, struct FVector Momentum )
{
	static UFunction* pFnHandleDamagedPawn = NULL;

	if ( ! pFnHandleDamagedPawn )
		pFnHandleDamagedPawn = (UFunction*) UObject::GObjObjects()->Data[ 36596 ];

	UGameDamageType_execHandleDamagedPawn_Parms HandleDamagedPawn_Parms;
	HandleDamagedPawn_Parms.DamagedPawn = DamagedPawn;
	HandleDamagedPawn_Parms.Instigator = Instigator;
	HandleDamagedPawn_Parms.DamageAmt = DamageAmt;
	memcpy ( &HandleDamagedPawn_Parms.Momentum, &Momentum, 0xC );

	this->ProcessEvent ( pFnHandleDamagedPawn, &HandleDamagedPawn_Parms, NULL );
};

// Function GameFramework.GameDamageType.ModifyDamage
// [0x00422000] 
// Parameters infos:
// class APawn*                   Victim                         ( CPF_Parm )
// class AController*             InstigatedBy                   ( CPF_Parm )
// struct FVector                 HitLocation                    ( CPF_Parm )
// struct FTraceHitInfo           HitInfo                        ( CPF_Parm )
// int                            out_Damage                     ( CPF_Parm | CPF_OutParm )
// struct FVector                 out_Momentum                   ( CPF_Parm | CPF_OutParm )

void UGameDamageType::ModifyDamage ( class APawn* Victim, class AController* InstigatedBy, struct FVector HitLocation, struct FTraceHitInfo HitInfo, int* out_Damage, struct FVector* out_Momentum )
{
	static UFunction* pFnModifyDamage = NULL;

	if ( ! pFnModifyDamage )
		pFnModifyDamage = (UFunction*) UObject::GObjObjects()->Data[ 36589 ];

	UGameDamageType_execModifyDamage_Parms ModifyDamage_Parms;
	ModifyDamage_Parms.Victim = Victim;
	ModifyDamage_Parms.InstigatedBy = InstigatedBy;
	memcpy ( &ModifyDamage_Parms.HitLocation, &HitLocation, 0xC );
	memcpy ( &ModifyDamage_Parms.HitInfo, &HitInfo, 0x1C );

	this->ProcessEvent ( pFnModifyDamage, &ModifyDamage_Parms, NULL );

	if ( out_Damage )
		*out_Damage = ModifyDamage_Parms.out_Damage;

	if ( out_Momentum )
		memcpy ( out_Momentum, &ModifyDamage_Parms.out_Momentum, 0xC );
};

// Function GameFramework.GameDamageType.ShouldGib
// [0x00022002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   TestPawn                       ( CPF_Parm )
// class APawn*                   Instigator                     ( CPF_Parm )

bool UGameDamageType::ShouldGib ( class APawn* TestPawn, class APawn* Instigator )
{
	static UFunction* pFnShouldGib = NULL;

	if ( ! pFnShouldGib )
		pFnShouldGib = (UFunction*) UObject::GObjObjects()->Data[ 36585 ];

	UGameDamageType_execShouldGib_Parms ShouldGib_Parms;
	ShouldGib_Parms.TestPawn = TestPawn;
	ShouldGib_Parms.Instigator = Instigator;

	this->ProcessEvent ( pFnShouldGib, &ShouldGib_Parms, NULL );

	return ShouldGib_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.ChooseCameraShake
// [0x00880002] 
// Parameters infos:
// class UCameraShake*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Epicenter                      ( CPF_Parm )
// class APlayerController*       PC                             ( CPF_Parm )

class UCameraShake* AGameExplosionActor::ChooseCameraShake ( struct FVector Epicenter, class APlayerController* PC )
{
	static UFunction* pFnChooseCameraShake = NULL;

	if ( ! pFnChooseCameraShake )
		pFnChooseCameraShake = (UFunction*) UObject::GObjObjects()->Data[ 36790 ];

	AGameExplosionActor_execChooseCameraShake_Parms ChooseCameraShake_Parms;
	memcpy ( &ChooseCameraShake_Parms.Epicenter, &Epicenter, 0xC );
	ChooseCameraShake_Parms.PC = PC;

	this->ProcessEvent ( pFnChooseCameraShake, &ChooseCameraShake_Parms, NULL );

	return ChooseCameraShake_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DoExplosionCameraEffects ( )
{
	static UFunction* pFnDoExplosionCameraEffects = NULL;

	if ( ! pFnDoExplosionCameraEffects )
		pFnDoExplosionCameraEffects = (UFunction*) UObject::GObjObjects()->Data[ 36786 ];

	AGameExplosionActor_execDoExplosionCameraEffects_Parms DoExplosionCameraEffects_Parms;

	this->ProcessEvent ( pFnDoExplosionCameraEffects, &DoExplosionCameraEffects_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.Tick
// [0x00020102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameExplosionActor::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 36783 ];

	AGameExplosionActor_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoExplosionDamage
// [0x00020102] 
// Parameters infos:

void AGameExplosionActor::DoExplosionDamage ( )
{
	static UFunction* pFnDoExplosionDamage = NULL;

	if ( ! pFnDoExplosionDamage )
		pFnDoExplosionDamage = (UFunction*) UObject::GObjObjects()->Data[ 36782 ];

	AGameExplosionActor_execDoExplosionDamage_Parms DoExplosionDamage_Parms;

	this->ProcessEvent ( pFnDoExplosionDamage, &DoExplosionDamage_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DrawDebug
// [0x00820102] 
// Parameters infos:

void AGameExplosionActor::DrawDebug ( )
{
	static UFunction* pFnDrawDebug = NULL;

	if ( ! pFnDrawDebug )
		pFnDrawDebug = (UFunction*) UObject::GObjObjects()->Data[ 36779 ];

	AGameExplosionActor_execDrawDebug_Parms DrawDebug_Parms;

	this->ProcessEvent ( pFnDrawDebug, &DrawDebug_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.Explode
// [0x00024902] ( FUNC_Event )
// Parameters infos:
// class UGameExplosion*          NewExplosionTemplate           ( CPF_Parm )
// struct FVector                 Direction                      ( CPF_OptionalParm | CPF_Parm )

void AGameExplosionActor::eventExplode ( class UGameExplosion* NewExplosionTemplate, struct FVector Direction )
{
	static UFunction* pFnExplode = NULL;

	if ( ! pFnExplode )
		pFnExplode = (UFunction*) UObject::GObjObjects()->Data[ 36774 ];

	AGameExplosionActor_eventExplode_Parms Explode_Parms;
	Explode_Parms.NewExplosionTemplate = NewExplosionTemplate;
	memcpy ( &Explode_Parms.Direction, &Direction, 0xC );

	this->ProcessEvent ( pFnExplode, &Explode_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionFogVolume ( )
{
	static UFunction* pFnSpawnExplosionFogVolume = NULL;

	if ( ! pFnSpawnExplosionFogVolume )
		pFnSpawnExplosionFogVolume = (UFunction*) UObject::GObjObjects()->Data[ 36773 ];

	AGameExplosionActor_execSpawnExplosionFogVolume_Parms SpawnExplosionFogVolume_Parms;

	this->ProcessEvent ( pFnSpawnExplosionFogVolume, &SpawnExplosionFogVolume_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// [0x00020100] 
// Parameters infos:

void AGameExplosionActor::SpawnExplosionDecal ( )
{
	static UFunction* pFnSpawnExplosionDecal = NULL;

	if ( ! pFnSpawnExplosionDecal )
		pFnSpawnExplosionDecal = (UFunction*) UObject::GObjObjects()->Data[ 36772 ];

	AGameExplosionActor_execSpawnExplosionDecal_Parms SpawnExplosionDecal_Parms;

	this->ProcessEvent ( pFnSpawnExplosionDecal, &SpawnExplosionDecal_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// [0x00020100] 
// Parameters infos:
// class UParticleSystem*         Template                       ( CPF_Parm )

void AGameExplosionActor::SpawnExplosionParticleSystem ( class UParticleSystem* Template )
{
	static UFunction* pFnSpawnExplosionParticleSystem = NULL;

	if ( ! pFnSpawnExplosionParticleSystem )
		pFnSpawnExplosionParticleSystem = (UFunction*) UObject::GObjObjects()->Data[ 36770 ];

	AGameExplosionActor_execSpawnExplosionParticleSystem_Parms SpawnExplosionParticleSystem_Parms;
	SpawnExplosionParticleSystem_Parms.Template = Template;

	this->ProcessEvent ( pFnSpawnExplosionParticleSystem, &SpawnExplosionParticleSystem_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// [0x00080100] 
// Parameters infos:
// class UPhysicalMaterial*       PhysMaterial                   ( CPF_Parm )

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX ( class UPhysicalMaterial* PhysMaterial )
{
	static UFunction* pFnUpdateExplosionTemplateWithPerMaterialFX = NULL;

	if ( ! pFnUpdateExplosionTemplateWithPerMaterialFX )
		pFnUpdateExplosionTemplateWithPerMaterialFX = (UFunction*) UObject::GObjObjects()->Data[ 36768 ];

	AGameExplosionActor_execUpdateExplosionTemplateWithPerMaterialFX_Parms UpdateExplosionTemplateWithPerMaterialFX_Parms;
	UpdateExplosionTemplateWithPerMaterialFX_Parms.PhysMaterial = PhysMaterial;

	this->ProcessEvent ( pFnUpdateExplosionTemplateWithPerMaterialFX, &UpdateExplosionTemplateWithPerMaterialFX_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.KnockdownPawn
// [0x00080002] 
// Parameters infos:
// class AGamePawn*               Victim                         ( CPF_Parm )
// float                          DistFromExplosion              ( CPF_Parm )

void AGameExplosionActor::KnockdownPawn ( class AGamePawn* Victim, float DistFromExplosion )
{
	static UFunction* pFnKnockdownPawn = NULL;

	if ( ! pFnKnockdownPawn )
		pFnKnockdownPawn = (UFunction*) UObject::GObjObjects()->Data[ 36765 ];

	AGameExplosionActor_execKnockdownPawn_Parms KnockdownPawn_Parms;
	KnockdownPawn_Parms.Victim = Victim;
	KnockdownPawn_Parms.DistFromExplosion = DistFromExplosion;

	this->ProcessEvent ( pFnKnockdownPawn, &KnockdownPawn_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.CringePawn
// [0x00080002] 
// Parameters infos:
// class AGamePawn*               Victim                         ( CPF_Parm )
// float                          DistFromExplosion              ( CPF_Parm )

void AGameExplosionActor::CringePawn ( class AGamePawn* Victim, float DistFromExplosion )
{
	static UFunction* pFnCringePawn = NULL;

	if ( ! pFnCringePawn )
		pFnCringePawn = (UFunction*) UObject::GObjObjects()->Data[ 36761 ];

	AGameExplosionActor_execCringePawn_Parms CringePawn_Parms;
	CringePawn_Parms.Victim = Victim;
	CringePawn_Parms.DistFromExplosion = DistFromExplosion;

	this->ProcessEvent ( pFnCringePawn, &CringePawn_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.DoCringesAndKnockdowns
// [0x00880002] 
// Parameters infos:

void AGameExplosionActor::DoCringesAndKnockdowns ( )
{
	static UFunction* pFnDoCringesAndKnockdowns = NULL;

	if ( ! pFnDoCringesAndKnockdowns )
		pFnDoCringesAndKnockdowns = (UFunction*) UObject::GObjObjects()->Data[ 36754 ];

	AGameExplosionActor_execDoCringesAndKnockdowns_Parms DoCringesAndKnockdowns_Parms;

	this->ProcessEvent ( pFnDoCringesAndKnockdowns, &DoCringesAndKnockdowns_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.ShouldDoCringeFor
// [0x00080002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AGamePawn*               Victim                         ( CPF_Parm )

bool AGameExplosionActor::ShouldDoCringeFor ( class AGamePawn* Victim )
{
	static UFunction* pFnShouldDoCringeFor = NULL;

	if ( ! pFnShouldDoCringeFor )
		pFnShouldDoCringeFor = (UFunction*) UObject::GObjObjects()->Data[ 36751 ];

	AGameExplosionActor_execShouldDoCringeFor_Parms ShouldDoCringeFor_Parms;
	ShouldDoCringeFor_Parms.Victim = Victim;

	this->ProcessEvent ( pFnShouldDoCringeFor, &ShouldDoCringeFor_Parms, NULL );

	return ShouldDoCringeFor_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoBreakFracturedMeshes
// [0x00080102] 
// Parameters infos:
// struct FVector                 ExploOrigin                    ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// float                          RBStrength                     ( CPF_Parm )
// class UClass*                  dmgType                        ( CPF_Parm )

void AGameExplosionActor::DoBreakFracturedMeshes ( struct FVector ExploOrigin, float DamageRadius, float RBStrength, class UClass* dmgType )
{
	static UFunction* pFnDoBreakFracturedMeshes = NULL;

	if ( ! pFnDoBreakFracturedMeshes )
		pFnDoBreakFracturedMeshes = (UFunction*) UObject::GObjObjects()->Data[ 36744 ];

	AGameExplosionActor_execDoBreakFracturedMeshes_Parms DoBreakFracturedMeshes_Parms;
	memcpy ( &DoBreakFracturedMeshes_Parms.ExploOrigin, &ExploOrigin, 0xC );
	DoBreakFracturedMeshes_Parms.DamageRadius = DamageRadius;
	DoBreakFracturedMeshes_Parms.RBStrength = RBStrength;
	DoBreakFracturedMeshes_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnDoBreakFracturedMeshes, &DoBreakFracturedMeshes_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.HurtExplosion
// [0x00880102] 
// Parameters infos:
// float                          BaseDamage                     ( CPF_Parm )
// float                          DamageRadius                   ( CPF_Parm )
// float                          DamageFalloffExp               ( CPF_Parm )
// class UClass*                  DamageType                     ( CPF_Parm )
// float                          MomentumScale                  ( CPF_Parm )
// struct FVector                 ExploOrigin                    ( CPF_Parm )
// class AActor*                  IgnoredActor                   ( CPF_Parm )
// class UClass*                  ActorClassToIgnoreForDamage    ( CPF_Parm )
// class AController*             InstigatedByController         ( CPF_Parm )
// unsigned long                  bDoFullDamage                  ( CPF_Parm )

void AGameExplosionActor::HurtExplosion ( float BaseDamage, float DamageRadius, float DamageFalloffExp, class UClass* DamageType, float MomentumScale, struct FVector ExploOrigin, class AActor* IgnoredActor, class UClass* ActorClassToIgnoreForDamage, class AController* InstigatedByController, unsigned long bDoFullDamage )
{
	static UFunction* pFnHurtExplosion = NULL;

	if ( ! pFnHurtExplosion )
		pFnHurtExplosion = (UFunction*) UObject::GObjObjects()->Data[ 36719 ];

	AGameExplosionActor_execHurtExplosion_Parms HurtExplosion_Parms;
	HurtExplosion_Parms.BaseDamage = BaseDamage;
	HurtExplosion_Parms.DamageRadius = DamageRadius;
	HurtExplosion_Parms.DamageFalloffExp = DamageFalloffExp;
	HurtExplosion_Parms.DamageType = DamageType;
	HurtExplosion_Parms.MomentumScale = MomentumScale;
	memcpy ( &HurtExplosion_Parms.ExploOrigin, &ExploOrigin, 0xC );
	HurtExplosion_Parms.IgnoredActor = IgnoredActor;
	HurtExplosion_Parms.ActorClassToIgnoreForDamage = ActorClassToIgnoreForDamage;
	HurtExplosion_Parms.InstigatedByController = InstigatedByController;
	HurtExplosion_Parms.bDoFullDamage = bDoFullDamage;

	this->ProcessEvent ( pFnHurtExplosion, &HurtExplosion_Parms, NULL );
};

// Function GameFramework.GameExplosionActor.IsBehindExplosion
// [0x00080102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  A                              ( CPF_Parm )

bool AGameExplosionActor::IsBehindExplosion ( class AActor* A )
{
	static UFunction* pFnIsBehindExplosion = NULL;

	if ( ! pFnIsBehindExplosion )
		pFnIsBehindExplosion = (UFunction*) UObject::GObjObjects()->Data[ 36716 ];

	AGameExplosionActor_execIsBehindExplosion_Parms IsBehindExplosion_Parms;
	IsBehindExplosion_Parms.A = A;

	this->ProcessEvent ( pFnIsBehindExplosion, &IsBehindExplosion_Parms, NULL );

	return IsBehindExplosion_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  Victim                         ( CPF_Parm )

bool AGameExplosionActor::DoFullDamageToActor ( class AActor* Victim )
{
	static UFunction* pFnDoFullDamageToActor = NULL;

	if ( ! pFnDoFullDamageToActor )
		pFnDoFullDamageToActor = (UFunction*) UObject::GObjObjects()->Data[ 36713 ];

	AGameExplosionActor_execDoFullDamageToActor_Parms DoFullDamageToActor_Parms;
	DoFullDamageToActor_Parms.Victim = Victim;

	this->ProcessEvent ( pFnDoFullDamageToActor, &DoFullDamageToActor_Parms, NULL );

	return DoFullDamageToActor_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// [0x00880102] 
// Parameters infos:
// class UPhysicalMaterial*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial ( )
{
	static UFunction* pFnGetPhysicalMaterial = NULL;

	if ( ! pFnGetPhysicalMaterial )
		pFnGetPhysicalMaterial = (UFunction*) UObject::GObjObjects()->Data[ 36705 ];

	AGameExplosionActor_execGetPhysicalMaterial_Parms GetPhysicalMaterial_Parms;

	this->ProcessEvent ( pFnGetPhysicalMaterial, &GetPhysicalMaterial_Parms, NULL );

	return GetPhysicalMaterial_Parms.ReturnValue;
};

// Function GameFramework.GameExplosionActor.PreBeginPlay
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AGameExplosionActor::eventPreBeginPlay ( )
{
	static UFunction* pFnPreBeginPlay = NULL;

	if ( ! pFnPreBeginPlay )
		pFnPreBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36704 ];

	AGameExplosionActor_eventPreBeginPlay_Parms PreBeginPlay_Parms;

	this->ProcessEvent ( pFnPreBeginPlay, &PreBeginPlay_Parms, NULL );
};

// Function GameFramework.GameHUD.StopDrawingChapterTitle
// [0x00020102] 
// Parameters infos:

void AGameHUD::StopDrawingChapterTitle ( )
{
	static UFunction* pFnStopDrawingChapterTitle = NULL;

	if ( ! pFnStopDrawingChapterTitle )
		pFnStopDrawingChapterTitle = (UFunction*) UObject::GObjObjects()->Data[ 36827 ];

	AGameHUD_execStopDrawingChapterTitle_Parms StopDrawingChapterTitle_Parms;

	this->ProcessEvent ( pFnStopDrawingChapterTitle, &StopDrawingChapterTitle_Parms, NULL );
};

// Function GameFramework.GameHUD.StartDrawingChapterTitle
// [0x00020102] 
// Parameters infos:
// struct FString                 ChapterName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ActName                        ( CPF_Parm | CPF_NeedCtorLink )
// float                          TotalDrawTime                  ( CPF_Parm )
// float                          TotalFadeTime                  ( CPF_Parm )

void AGameHUD::StartDrawingChapterTitle ( struct FString ChapterName, struct FString ActName, float TotalDrawTime, float TotalFadeTime )
{
	static UFunction* pFnStartDrawingChapterTitle = NULL;

	if ( ! pFnStartDrawingChapterTitle )
		pFnStartDrawingChapterTitle = (UFunction*) UObject::GObjObjects()->Data[ 36818 ];

	AGameHUD_execStartDrawingChapterTitle_Parms StartDrawingChapterTitle_Parms;
	memcpy ( &StartDrawingChapterTitle_Parms.ChapterName, &ChapterName, 0xC );
	memcpy ( &StartDrawingChapterTitle_Parms.ActName, &ActName, 0xC );
	StartDrawingChapterTitle_Parms.TotalDrawTime = TotalDrawTime;
	StartDrawingChapterTitle_Parms.TotalFadeTime = TotalFadeTime;

	this->ProcessEvent ( pFnStartDrawingChapterTitle, &StartDrawingChapterTitle_Parms, NULL );
};

// Function GameFramework.GameHUD.SetHUDDrawColor
// [0x00024002] 
// Parameters infos:
// unsigned char                  eColor                         ( CPF_Parm )
// unsigned char                  Alpha                          ( CPF_OptionalParm | CPF_Parm )

void AGameHUD::SetHUDDrawColor ( unsigned char eColor, unsigned char Alpha )
{
	static UFunction* pFnSetHUDDrawColor = NULL;

	if ( ! pFnSetHUDDrawColor )
		pFnSetHUDDrawColor = (UFunction*) UObject::GObjObjects()->Data[ 36815 ];

	AGameHUD_execSetHUDDrawColor_Parms SetHUDDrawColor_Parms;
	SetHUDDrawColor_Parms.eColor = eColor;
	SetHUDDrawColor_Parms.Alpha = Alpha;

	this->ProcessEvent ( pFnSetHUDDrawColor, &SetHUDDrawColor_Parms, NULL );
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMeshWithoutBeingSeen ( )
{
	static UFunction* pFnReattachMeshWithoutBeingSeen = NULL;

	if ( ! pFnReattachMeshWithoutBeingSeen )
		pFnReattachMeshWithoutBeingSeen = (UFunction*) UObject::GObjObjects()->Data[ 36862 ];

	AGamePawn_execReattachMeshWithoutBeingSeen_Parms ReattachMeshWithoutBeingSeen_Parms;

	this->ProcessEvent ( pFnReattachMeshWithoutBeingSeen, &ReattachMeshWithoutBeingSeen_Parms, NULL );
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] 
// Parameters infos:

void AGamePawn::ReattachMesh ( )
{
	static UFunction* pFnReattachMesh = NULL;

	if ( ! pFnReattachMesh )
		pFnReattachMesh = (UFunction*) UObject::GObjObjects()->Data[ 36861 ];

	AGamePawn_execReattachMesh_Parms ReattachMesh_Parms;

	this->ProcessEvent ( pFnReattachMesh, &ReattachMesh_Parms, NULL );
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bInWantShadow                  ( CPF_Parm )

void AGamePawn::eventUpdateShadowSettings ( unsigned long bInWantShadow )
{
	static UFunction* pFnUpdateShadowSettings = NULL;

	if ( ! pFnUpdateShadowSettings )
		pFnUpdateShadowSettings = (UFunction*) UObject::GObjObjects()->Data[ 36857 ];

	AGamePawn_eventUpdateShadowSettings_Parms UpdateShadowSettings_Parms;
	UpdateShadowSettings_Parms.bInWantShadow = bInWantShadow;

	this->ProcessEvent ( pFnUpdateShadowSettings, &UpdateShadowSettings_Parms, NULL );
};

// Function GameFramework.GamePawn.Cringe
// [0x00024800] ( FUNC_Event )
// Parameters infos:
// float                          Duration                       ( CPF_OptionalParm | CPF_Parm )

void AGamePawn::eventCringe ( float Duration )
{
	static UFunction* pFnCringe = NULL;

	if ( ! pFnCringe )
		pFnCringe = (UFunction*) UObject::GObjObjects()->Data[ 36855 ];

	AGamePawn_eventCringe_Parms Cringe_Parms;
	Cringe_Parms.Duration = Duration;

	this->ProcessEvent ( pFnCringe, &Cringe_Parms, NULL );
};

// Function GameFramework.GamePawn.ServerKnockdown
// [0x002240C0] 
// Parameters infos:
// struct FVector                 RBLinearVelocity               ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 RBAngularVelocity              ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 RadialOrigin                   ( CPF_OptionalParm | CPF_Parm )
// float                          RadialRadius                   ( CPF_OptionalParm | CPF_Parm )
// float                          RadialStrength                 ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 PointImpulse                   ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 PointImpulsePosition           ( CPF_OptionalParm | CPF_Parm )
// struct FName                   PointImpulseBoneName           ( CPF_OptionalParm | CPF_Parm )

void AGamePawn::ServerKnockdown ( struct FVector RBLinearVelocity, struct FVector RBAngularVelocity, struct FVector RadialOrigin, float RadialRadius, float RadialStrength, struct FVector PointImpulse, struct FVector PointImpulsePosition, struct FName PointImpulseBoneName )
{
	static UFunction* pFnServerKnockdown = NULL;

	if ( ! pFnServerKnockdown )
		pFnServerKnockdown = (UFunction*) UObject::GObjObjects()->Data[ 36846 ];

	AGamePawn_execServerKnockdown_Parms ServerKnockdown_Parms;
	memcpy ( &ServerKnockdown_Parms.RBLinearVelocity, &RBLinearVelocity, 0xC );
	memcpy ( &ServerKnockdown_Parms.RBAngularVelocity, &RBAngularVelocity, 0xC );
	memcpy ( &ServerKnockdown_Parms.RadialOrigin, &RadialOrigin, 0xC );
	ServerKnockdown_Parms.RadialRadius = RadialRadius;
	ServerKnockdown_Parms.RadialStrength = RadialStrength;
	memcpy ( &ServerKnockdown_Parms.PointImpulse, &PointImpulse, 0xC );
	memcpy ( &ServerKnockdown_Parms.PointImpulsePosition, &PointImpulsePosition, 0xC );
	memcpy ( &ServerKnockdown_Parms.PointImpulseBoneName, &PointImpulseBoneName, 0x8 );

	this->ProcessEvent ( pFnServerKnockdown, &ServerKnockdown_Parms, NULL );
};

// Function GameFramework.GamePawn.GetTargetFrictionCylinder
// [0x00420102] 
// Parameters infos:
// float                          CylinderRadius                 ( CPF_Parm | CPF_OutParm )
// float                          CylinderHeight                 ( CPF_Parm | CPF_OutParm )

void AGamePawn::GetTargetFrictionCylinder ( float* CylinderRadius, float* CylinderHeight )
{
	static UFunction* pFnGetTargetFrictionCylinder = NULL;

	if ( ! pFnGetTargetFrictionCylinder )
		pFnGetTargetFrictionCylinder = (UFunction*) UObject::GObjObjects()->Data[ 36843 ];

	AGamePawn_execGetTargetFrictionCylinder_Parms GetTargetFrictionCylinder_Parms;

	this->ProcessEvent ( pFnGetTargetFrictionCylinder, &GetTargetFrictionCylinder_Parms, NULL );

	if ( CylinderRadius )
		*CylinderRadius = GetTargetFrictionCylinder_Parms.CylinderRadius;

	if ( CylinderHeight )
		*CylinderHeight = GetTargetFrictionCylinder_Parms.CylinderHeight;
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102] 
// Parameters infos:
// struct FName                   InSoundModeName                ( CPF_Parm )

void AGamePlayerController::SetSoundMode ( struct FName InSoundModeName )
{
	static UFunction* pFnSetSoundMode = NULL;

	if ( ! pFnSetSoundMode )
		pFnSetSoundMode = (UFunction*) UObject::GObjObjects()->Data[ 36941 ];

	AGamePlayerController_execSetSoundMode_Parms SetSoundMode_Parms;
	memcpy ( &SetSoundMode_Parms.InSoundModeName, &InSoundModeName, 0x8 );

	this->ProcessEvent ( pFnSetSoundMode, &SetSoundMode_Parms, NULL );
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102] 
// Parameters infos:
// class UCameraShake*            ShakeData                      ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )

void AGamePlayerController::DoForceFeedbackForScreenShake ( class UCameraShake* ShakeData, float Scale )
{
	static UFunction* pFnDoForceFeedbackForScreenShake = NULL;

	if ( ! pFnDoForceFeedbackForScreenShake )
		pFnDoForceFeedbackForScreenShake = (UFunction*) UObject::GObjObjects()->Data[ 36929 ];

	AGamePlayerController_execDoForceFeedbackForScreenShake_Parms DoForceFeedbackForScreenShake_Parms;
	DoForceFeedbackForScreenShake_Parms.ShakeData = ShakeData;
	DoForceFeedbackForScreenShake_Parms.Scale = Scale;

	this->ProcessEvent ( pFnDoForceFeedbackForScreenShake, &DoForceFeedbackForScreenShake_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         Agent                          ( CPF_Parm )

void AGamePlayerController::eventNotifyCrowdAgentInRadius ( class AGameCrowdAgent* Agent )
{
	static UFunction* pFnNotifyCrowdAgentInRadius = NULL;

	if ( ! pFnNotifyCrowdAgentInRadius )
		pFnNotifyCrowdAgentInRadius = (UFunction*) UObject::GObjObjects()->Data[ 36927 ];

	AGamePlayerController_eventNotifyCrowdAgentInRadius_Parms NotifyCrowdAgentInRadius_Parms;
	NotifyCrowdAgentInRadius_Parms.Agent = Agent;

	this->ProcessEvent ( pFnNotifyCrowdAgentInRadius, &NotifyCrowdAgentInRadius_Parms, NULL );
};

// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AGamePlayerController::eventNotifyCrowdAgentRefresh ( )
{
	static UFunction* pFnNotifyCrowdAgentRefresh = NULL;

	if ( ! pFnNotifyCrowdAgentRefresh )
		pFnNotifyCrowdAgentRefresh = (UFunction*) UObject::GObjObjects()->Data[ 36926 ];

	AGamePlayerController_eventNotifyCrowdAgentRefresh_Parms NotifyCrowdAgentRefresh_Parms;

	this->ProcessEvent ( pFnNotifyCrowdAgentRefresh, &NotifyCrowdAgentRefresh_Parms, NULL );
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void AGamePlayerController::CrowdDebug ( unsigned long bEnabled )
{
	static UFunction* pFnCrowdDebug = NULL;

	if ( ! pFnCrowdDebug )
		pFnCrowdDebug = (UFunction*) UObject::GObjObjects()->Data[ 36920 ];

	AGamePlayerController_execCrowdDebug_Parms CrowdDebug_Parms;
	CrowdDebug_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnCrowdDebug, &CrowdDebug_Parms, NULL );
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_GameCrowdSpawner::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 37281 ];

	USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.CreateNewAgent
// [0x00820002] 
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  SpawnLoc                       ( CPF_Parm )
// class AGameCrowdAgent*         AgentTemplate                  ( CPF_Parm )
// class UGameCrowdGroup*         NewGroup                       ( CPF_Parm )

class AGameCrowdAgent* USeqAct_GameCrowdSpawner::CreateNewAgent ( class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup )
{
	static UFunction* pFnCreateNewAgent = NULL;

	if ( ! pFnCreateNewAgent )
		pFnCreateNewAgent = (UFunction*) UObject::GObjObjects()->Data[ 37273 ];

	USeqAct_GameCrowdSpawner_execCreateNewAgent_Parms CreateNewAgent_Parms;
	CreateNewAgent_Parms.SpawnLoc = SpawnLoc;
	CreateNewAgent_Parms.AgentTemplate = AgentTemplate;
	CreateNewAgent_Parms.NewGroup = NewGroup;

	this->ProcessEvent ( pFnCreateNewAgent, &CreateNewAgent_Parms, NULL );

	return CreateNewAgent_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnAgent
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AGameCrowdAgent*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  SpawnLoc                       ( CPF_Parm )

class AGameCrowdAgent* USeqAct_GameCrowdSpawner::eventSpawnAgent ( class AActor* SpawnLoc )
{
	static UFunction* pFnSpawnAgent = NULL;

	if ( ! pFnSpawnAgent )
		pFnSpawnAgent = (UFunction*) UObject::GObjObjects()->Data[ 37263 ];

	USeqAct_GameCrowdSpawner_eventSpawnAgent_Parms SpawnAgent_Parms;
	SpawnAgent_Parms.SpawnLoc = SpawnLoc;

	this->ProcessEvent ( pFnSpawnAgent, &SpawnAgent_Parms, NULL );

	return SpawnAgent_Parms.ReturnValue;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.UpdateSpawning
// [0x00020500] ( FUNC_Native )
// Parameters infos:
// float                          DeltaSeconds                   ( CPF_Parm )

void USeqAct_GameCrowdSpawner::UpdateSpawning ( float DeltaSeconds )
{
	static UFunction* pFnUpdateSpawning = NULL;

	if ( ! pFnUpdateSpawning )
		pFnUpdateSpawning = (UFunction*) UObject::GObjObjects()->Data[ 37261 ];

	USeqAct_GameCrowdSpawner_execUpdateSpawning_Parms UpdateSpawning_Parms;
	UpdateSpawning_Parms.DeltaSeconds = DeltaSeconds;

	pFnUpdateSpawning->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateSpawning, &UpdateSpawning_Parms, NULL );

	pFnUpdateSpawning->FunctionFlags |= 0x400;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.KillAgents
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void USeqAct_GameCrowdSpawner::KillAgents ( )
{
	static UFunction* pFnKillAgents = NULL;

	if ( ! pFnKillAgents )
		pFnKillAgents = (UFunction*) UObject::GObjObjects()->Data[ 37260 ];

	USeqAct_GameCrowdSpawner_execKillAgents_Parms KillAgents_Parms;

	pFnKillAgents->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKillAgents, &KillAgents_Parms, NULL );

	pFnKillAgents->FunctionFlags |= 0x400;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.CacheSpawnerVars
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void USeqAct_GameCrowdSpawner::CacheSpawnerVars ( )
{
	static UFunction* pFnCacheSpawnerVars = NULL;

	if ( ! pFnCacheSpawnerVars )
		pFnCacheSpawnerVars = (UFunction*) UObject::GObjObjects()->Data[ 37259 ];

	USeqAct_GameCrowdSpawner_execCacheSpawnerVars_Parms CacheSpawnerVars_Parms;

	pFnCacheSpawnerVars->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCacheSpawnerVars, &CacheSpawnerVars_Parms, NULL );

	pFnCacheSpawnerVars->FunctionFlags |= 0x400;
};

// Function GameFramework.SeqAct_GameCrowdSpawner.SpawnedAgent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AGameCrowdAgent*         NewAgent                       ( CPF_Parm )

void USeqAct_GameCrowdSpawner::SpawnedAgent ( class AGameCrowdAgent* NewAgent )
{
	static UFunction* pFnSpawnedAgent = NULL;

	if ( ! pFnSpawnedAgent )
		pFnSpawnedAgent = (UFunction*) UObject::GObjObjects()->Data[ 37257 ];

	USeqAct_GameCrowdSpawner_execSpawnedAgent_Parms SpawnedAgent_Parms;
	SpawnedAgent_Parms.NewAgent = NewAgent;

	pFnSpawnedAgent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSpawnedAgent, &SpawnedAgent_Parms, NULL );

	pFnSpawnedAgent->FunctionFlags |= 0x400;
};

// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// [0x00020002] 
// Parameters infos:
// class AGameCrowdAgentSkeletal* Agent                          ( CPF_Parm )

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor ( class AGameCrowdAgentSkeletal* Agent )
{
	static UFunction* pFnSetCurrentAnimationActionFor = NULL;

	if ( ! pFnSetCurrentAnimationActionFor )
		pFnSetCurrentAnimationActionFor = (UFunction*) UObject::GObjObjects()->Data[ 37302 ];

	USeqAct_PlayAgentAnimation_execSetCurrentAnimationActionFor_Parms SetCurrentAnimationActionFor_Parms;
	SetCurrentAnimationActionFor_Parms.Agent = Agent;

	this->ProcessEvent ( pFnSetCurrentAnimationActionFor, &SetCurrentAnimationActionFor_Parms, NULL );
};

// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_PlayAgentAnimation::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 37300 ];

	USeqAct_PlayAgentAnimation_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::eventModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 33312 ];

	UGameCameraBase_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0xD4 );
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] 
// Parameters infos:

void UGameCameraBase::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 33311 ];

	UGameCameraBase_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420000] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 33306 ];

	UGameCameraBase_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420000] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameCameraBase::UpdateCamera ( class APawn* P, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 33302 ];

	UGameCameraBase_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameCameraBase::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 33301 ];

	UGameCameraBase_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020000] 
// Parameters infos:
// class UGameCameraBase*         NewCamera                      ( CPF_Parm )

void UGameCameraBase::OnBecomeInActive ( class UGameCameraBase* NewCamera )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 33299 ];

	UGameCameraBase_execOnBecomeInActive_Parms OnBecomeInActive_Parms;
	OnBecomeInActive_Parms.NewCamera = NewCamera;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020000] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameCameraBase::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 33297 ];

	UGameCameraBase_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 37110 ];

	UGameThirdPersonCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::eventModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 37108 ];

	UGameThirdPersonCamera_eventModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0xD4 );
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameThirdPersonCamera::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 37106 ];

	UGameThirdPersonCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 37101 ];

	UGameThirdPersonCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] ( FUNC_Final )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UGameThirdPersonCamera::UpdateCameraMode ( class APawn* P )
{
	static UFunction* pFnUpdateCameraMode = NULL;

	if ( ! pFnUpdateCameraMode )
		pFnUpdateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 37049 ];

	UGameThirdPersonCamera_execUpdateCameraMode_Parms UpdateCameraMode_Parms;
	UpdateCameraMode_Parms.P = P;

	this->ProcessEvent ( pFnUpdateCameraMode, &UpdateCameraMode_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] 
// Parameters infos:
// class UGameThirdPersonCameraMode* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode ( class APawn* P )
{
	static UFunction* pFnFindBestCameraMode = NULL;

	if ( ! pFnFindBestCameraMode )
		pFnFindBestCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 37096 ];

	UGameThirdPersonCamera_execFindBestCameraMode_Parms FindBestCameraMode_Parms;
	FindBestCameraMode_Parms.P = P;

	this->ProcessEvent ( pFnFindBestCameraMode, &FindBestCameraMode_Parms, NULL );

	return FindBestCameraMode_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] 
// Parameters infos:
// struct FRotator                Delta                          ( CPF_Parm )

void UGameThirdPersonCamera::AdjustFocusPointInterpolation ( struct FRotator Delta )
{
	static UFunction* pFnAdjustFocusPointInterpolation = NULL;

	if ( ! pFnAdjustFocusPointInterpolation )
		pFnAdjustFocusPointInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 37094 ];

	UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Parms AdjustFocusPointInterpolation_Parms;
	memcpy ( &AdjustFocusPointInterpolation_Parms.Delta, &Delta, 0xC );

	this->ProcessEvent ( pFnAdjustFocusPointInterpolation, &AdjustFocusPointInterpolation_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UGameThirdPersonCamera::GetActualFocusLocation ( )
{
	static UFunction* pFnGetActualFocusLocation = NULL;

	if ( ! pFnGetActualFocusLocation )
		pFnGetActualFocusLocation = (UFunction*) UObject::GObjObjects()->Data[ 37090 ];

	UGameThirdPersonCamera_execGetActualFocusLocation_Parms GetActualFocusLocation_Parms;

	this->ProcessEvent ( pFnGetActualFocusLocation, &GetActualFocusLocation_Parms, NULL );

	return GetActualFocusLocation_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] ( FUNC_Event )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )

void UGameThirdPersonCamera::eventUpdateFocusPoint ( class APawn* P )
{
	static UFunction* pFnUpdateFocusPoint = NULL;

	if ( ! pFnUpdateFocusPoint )
		pFnUpdateFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 37086 ];

	UGameThirdPersonCamera_eventUpdateFocusPoint_Parms UpdateFocusPoint_Parms;
	UpdateFocusPoint_Parms.P = P;

	this->ProcessEvent ( pFnUpdateFocusPoint, &UpdateFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] 
// Parameters infos:
// unsigned long                  bLeaveCameraRotation           ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::ClearFocusPoint ( unsigned long bLeaveCameraRotation )
{
	static UFunction* pFnClearFocusPoint = NULL;

	if ( ! pFnClearFocusPoint )
		pFnClearFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 37084 ];

	UGameThirdPersonCamera_execClearFocusPoint_Parms ClearFocusPoint_Parms;
	ClearFocusPoint_Parms.bLeaveCameraRotation = bLeaveCameraRotation;

	this->ProcessEvent ( pFnClearFocusPoint, &ClearFocusPoint_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] 
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class AActor* UGameThirdPersonCamera::GetFocusActor ( )
{
	static UFunction* pFnGetFocusActor = NULL;

	if ( ! pFnGetFocusActor )
		pFnGetFocusActor = (UFunction*) UObject::GObjObjects()->Data[ 37082 ];

	UGameThirdPersonCamera_execGetFocusActor_Parms GetFocusActor_Parms;

	this->ProcessEvent ( pFnGetFocusActor, &GetFocusActor_Parms, NULL );

	return GetFocusActor_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] 
// Parameters infos:
// class AActor*                  FocusActor                     ( CPF_Parm )
// struct FName                   FocusBoneName                  ( CPF_Parm )
// struct FVector2D               InterpSpeedRange               ( CPF_Parm )
// struct FVector2D               InFocusFOV                     ( CPF_Parm )
// float                          CameraFOV                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlwaysFocus                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAdjustCamera                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreTrace                   ( CPF_OptionalParm | CPF_Parm )
// float                          FocusPitchOffsetDeg            ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::SetFocusOnActor ( class AActor* FocusActor, struct FName FocusBoneName, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg )
{
	static UFunction* pFnSetFocusOnActor = NULL;

	if ( ! pFnSetFocusOnActor )
		pFnSetFocusOnActor = (UFunction*) UObject::GObjObjects()->Data[ 37072 ];

	UGameThirdPersonCamera_execSetFocusOnActor_Parms SetFocusOnActor_Parms;
	SetFocusOnActor_Parms.FocusActor = FocusActor;
	memcpy ( &SetFocusOnActor_Parms.FocusBoneName, &FocusBoneName, 0x8 );
	memcpy ( &SetFocusOnActor_Parms.InterpSpeedRange, &InterpSpeedRange, 0x8 );
	memcpy ( &SetFocusOnActor_Parms.InFocusFOV, &InFocusFOV, 0x8 );
	SetFocusOnActor_Parms.CameraFOV = CameraFOV;
	SetFocusOnActor_Parms.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnActor_Parms.bAdjustCamera = bAdjustCamera;
	SetFocusOnActor_Parms.bIgnoreTrace = bIgnoreTrace;
	SetFocusOnActor_Parms.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	this->ProcessEvent ( pFnSetFocusOnActor, &SetFocusOnActor_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] 
// Parameters infos:
// struct FVector                 FocusWorldLoc                  ( CPF_Parm )
// struct FVector2D               InterpSpeedRange               ( CPF_Parm )
// struct FVector2D               InFocusFOV                     ( CPF_Parm )
// float                          CameraFOV                      ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlwaysFocus                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAdjustCamera                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreTrace                   ( CPF_OptionalParm | CPF_Parm )
// float                          FocusPitchOffsetDeg            ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::SetFocusOnLoc ( struct FVector FocusWorldLoc, struct FVector2D InterpSpeedRange, struct FVector2D InFocusFOV, float CameraFOV, unsigned long bAlwaysFocus, unsigned long bAdjustCamera, unsigned long bIgnoreTrace, float FocusPitchOffsetDeg )
{
	static UFunction* pFnSetFocusOnLoc = NULL;

	if ( ! pFnSetFocusOnLoc )
		pFnSetFocusOnLoc = (UFunction*) UObject::GObjObjects()->Data[ 37063 ];

	UGameThirdPersonCamera_execSetFocusOnLoc_Parms SetFocusOnLoc_Parms;
	memcpy ( &SetFocusOnLoc_Parms.FocusWorldLoc, &FocusWorldLoc, 0xC );
	memcpy ( &SetFocusOnLoc_Parms.InterpSpeedRange, &InterpSpeedRange, 0x8 );
	memcpy ( &SetFocusOnLoc_Parms.InFocusFOV, &InFocusFOV, 0x8 );
	SetFocusOnLoc_Parms.CameraFOV = CameraFOV;
	SetFocusOnLoc_Parms.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnLoc_Parms.bAdjustCamera = bAdjustCamera;
	SetFocusOnLoc_Parms.bIgnoreTrace = bIgnoreTrace;
	SetFocusOnLoc_Parms.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	this->ProcessEvent ( pFnSetFocusOnLoc, &SetFocusOnLoc_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] 
// Parameters infos:
// int                            AngleOffset                    ( CPF_Parm )

void UGameThirdPersonCamera::AdjustTurn ( int AngleOffset )
{
	static UFunction* pFnAdjustTurn = NULL;

	if ( ! pFnAdjustTurn )
		pFnAdjustTurn = (UFunction*) UObject::GObjObjects()->Data[ 37061 ];

	UGameThirdPersonCamera_execAdjustTurn_Parms AdjustTurn_Parms;
	AdjustTurn_Parms.AngleOffset = AngleOffset;

	this->ProcessEvent ( pFnAdjustTurn, &AdjustTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameThirdPersonCamera::EndTurn ( )
{
	static UFunction* pFnEndTurn = NULL;

	if ( ! pFnEndTurn )
		pFnEndTurn = (UFunction*) UObject::GObjObjects()->Data[ 37060 ];

	UGameThirdPersonCamera_execEndTurn_Parms EndTurn_Parms;

	pFnEndTurn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEndTurn, &EndTurn_Parms, NULL );

	pFnEndTurn->FunctionFlags |= 0x400;
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] 
// Parameters infos:
// int                            StartAngle                     ( CPF_Parm )
// int                            EndAngle                       ( CPF_Parm )
// float                          TimeSec                        ( CPF_Parm )
// float                          DelaySec                       ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bAlignTargetWhenFinished       ( CPF_OptionalParm | CPF_Parm )

void UGameThirdPersonCamera::BeginTurn ( int StartAngle, int EndAngle, float TimeSec, float DelaySec, unsigned long bAlignTargetWhenFinished )
{
	static UFunction* pFnBeginTurn = NULL;

	if ( ! pFnBeginTurn )
		pFnBeginTurn = (UFunction*) UObject::GObjObjects()->Data[ 37054 ];

	UGameThirdPersonCamera_execBeginTurn_Parms BeginTurn_Parms;
	BeginTurn_Parms.StartAngle = StartAngle;
	BeginTurn_Parms.EndAngle = EndAngle;
	BeginTurn_Parms.TimeSec = TimeSec;
	BeginTurn_Parms.DelaySec = DelaySec;
	BeginTurn_Parms.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	this->ProcessEvent ( pFnBeginTurn, &BeginTurn_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400] ( FUNC_Native )
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::PlayerUpdateCamera ( class APawn* P, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnPlayerUpdateCamera = NULL;

	if ( ! pFnPlayerUpdateCamera )
		pFnPlayerUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 37050 ];

	UGameThirdPersonCamera_execPlayerUpdateCamera_Parms PlayerUpdateCamera_Parms;
	PlayerUpdateCamera_Parms.P = P;
	PlayerUpdateCamera_Parms.DeltaTime = DeltaTime;

	pFnPlayerUpdateCamera->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayerUpdateCamera, &PlayerUpdateCamera_Parms, NULL );

	pFnPlayerUpdateCamera->FunctionFlags |= 0x400;

	if ( OutVT )
		memcpy ( OutVT, &PlayerUpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCamera::UpdateCamera ( class APawn* P, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 37045 ];

	UGameThirdPersonCamera_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

float UGameThirdPersonCamera::eventGetDesiredFOV ( class APawn* ViewedPawn )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 37040 ];

	UGameThirdPersonCamera_eventGetDesiredFOV_Parms GetDesiredFOV_Parms;
	GetDesiredFOV_Parms.ViewedPawn = ViewedPawn;

	this->ProcessEvent ( pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );

	return GetDesiredFOV_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37039 ];

	UGameThirdPersonCamera_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] 
// Parameters infos:

void UGameThirdPersonCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 37038 ];

	UGameThirdPersonCamera_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] 
// Parameters infos:
// class UGameThirdPersonCameraMode* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  ModeClass                      ( CPF_Parm )

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode ( class UClass* ModeClass )
{
	static UFunction* pFnCreateCameraMode = NULL;

	if ( ! pFnCreateCameraMode )
		pFnCreateCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 37033 ];

	UGameThirdPersonCamera_execCreateCameraMode_Parms CreateCameraMode_Parms;
	CreateCameraMode_Parms.ModeClass = ModeClass;

	this->ProcessEvent ( pFnCreateCameraMode, &CreateCameraMode_Parms, NULL );

	return CreateCameraMode_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          inHorizFOV                     ( CPF_Parm )
// class APawn*                   CameraTargetPawn               ( CPF_Parm )

float AGamePlayerCamera::AdjustFOVForViewport ( float inHorizFOV, class APawn* CameraTargetPawn )
{
	static UFunction* pFnAdjustFOVForViewport = NULL;

	if ( ! pFnAdjustFOVForViewport )
		pFnAdjustFOVForViewport = (UFunction*) UObject::GObjObjects()->Data[ 36898 ];

	AGamePlayerCamera_execAdjustFOVForViewport_Parms AdjustFOVForViewport_Parms;
	AdjustFOVForViewport_Parms.inHorizFOV = inHorizFOV;
	AdjustFOVForViewport_Parms.CameraTargetPawn = CameraTargetPawn;

	pFnAdjustFOVForViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdjustFOVForViewport, &AdjustFOVForViewport_Parms, NULL );

	pFnAdjustFOVForViewport->FunctionFlags |= 0x400;

	return AdjustFOVForViewport_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 36909 ];

	AGamePlayerCamera_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] 
// Parameters infos:

void AGamePlayerCamera::ResetInterpolation ( )
{
	static UFunction* pFnResetInterpolation = NULL;

	if ( ! pFnResetInterpolation )
		pFnResetInterpolation = (UFunction*) UObject::GObjObjects()->Data[ 36908 ];

	AGamePlayerCamera_execResetInterpolation_Parms ResetInterpolation_Parms;

	this->ProcessEvent ( pFnResetInterpolation, &ResetInterpolation_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] 
// Parameters infos:
// struct FVector                 NewColorScale                  ( CPF_Parm )

void AGamePlayerCamera::SetColorScale ( struct FVector NewColorScale )
{
	static UFunction* pFnSetColorScale = NULL;

	if ( ! pFnSetColorScale )
		pFnSetColorScale = (UFunction*) UObject::GObjObjects()->Data[ 36906 ];

	AGamePlayerCamera_execSetColorScale_Parms SetColorScale_Parms;
	memcpy ( &SetColorScale_Parms.NewColorScale, &NewColorScale, 0xC );

	this->ProcessEvent ( pFnSetColorScale, &SetColorScale_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 36899 ];

	AGamePlayerCamera_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// [0x00420002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void AGamePlayerCamera::UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateViewTarget = NULL;

	if ( ! pFnUpdateViewTarget )
		pFnUpdateViewTarget = (UFunction*) UObject::GObjObjects()->Data[ 36891 ];

	AGamePlayerCamera_execUpdateViewTarget_Parms UpdateViewTarget_Parms;
	UpdateViewTarget_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateViewTarget, &UpdateViewTarget_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateViewTarget_Parms.OutVT, 0x2C );
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGamePlayerCamera::ShouldConstrainAspectRatio ( )
{
	static UFunction* pFnShouldConstrainAspectRatio = NULL;

	if ( ! pFnShouldConstrainAspectRatio )
		pFnShouldConstrainAspectRatio = (UFunction*) UObject::GObjObjects()->Data[ 36889 ];

	AGamePlayerCamera_execShouldConstrainAspectRatio_Parms ShouldConstrainAspectRatio_Parms;

	this->ProcessEvent ( pFnShouldConstrainAspectRatio, &ShouldConstrainAspectRatio_Parms, NULL );

	return ShouldConstrainAspectRatio_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.FindBestCameraType
// [0x00080002] 
// Parameters infos:
// class UGameCameraBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  CameraTarget                   ( CPF_Parm )

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType ( class AActor* CameraTarget )
{
	static UFunction* pFnFindBestCameraType = NULL;

	if ( ! pFnFindBestCameraType )
		pFnFindBestCameraType = (UFunction*) UObject::GObjObjects()->Data[ 36885 ];

	AGamePlayerCamera_execFindBestCameraType_Parms FindBestCameraType_Parms;
	FindBestCameraType_Parms.CameraTarget = CameraTarget;

	this->ProcessEvent ( pFnFindBestCameraType, &FindBestCameraType_Parms, NULL );

	return FindBestCameraType_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::Reset ( )
{
	static UFunction* pFnReset = NULL;

	if ( ! pFnReset )
		pFnReset = (UFunction*) UObject::GObjObjects()->Data[ 36884 ];

	AGamePlayerCamera_execReset_Parms Reset_Parms;

	this->ProcessEvent ( pFnReset, &Reset_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AGamePlayerCamera::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36883 ];

	AGamePlayerCamera_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  TargetBase                     ( CPF_Parm )

void AGamePlayerCamera::CacheLastTargetBaseInfo ( class AActor* TargetBase )
{
	static UFunction* pFnCacheLastTargetBaseInfo = NULL;

	if ( ! pFnCacheLastTargetBaseInfo )
		pFnCacheLastTargetBaseInfo = (UFunction*) UObject::GObjObjects()->Data[ 36881 ];

	AGamePlayerCamera_execCacheLastTargetBaseInfo_Parms CacheLastTargetBaseInfo_Parms;
	CacheLastTargetBaseInfo_Parms.TargetBase = TargetBase;

	pFnCacheLastTargetBaseInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCacheLastTargetBaseInfo, &CacheLastTargetBaseInfo_Parms, NULL );

	pFnCacheLastTargetBaseInfo->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] 
// Parameters infos:
// class UGameCameraBase*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  CameraClass                    ( CPF_Parm )

class UGameCameraBase* AGamePlayerCamera::CreateCamera ( class UClass* CameraClass )
{
	static UFunction* pFnCreateCamera = NULL;

	if ( ! pFnCreateCamera )
		pFnCreateCamera = (UFunction*) UObject::GObjObjects()->Data[ 36877 ];

	AGamePlayerCamera_execCreateCamera_Parms CreateCamera_Parms;
	CreateCamera_Parms.CameraClass = CameraClass;

	this->ProcessEvent ( pFnCreateCamera, &CreateCamera_Parms, NULL );

	return CreateCamera_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// [0x00420102] 
// Parameters infos:
// struct FPostProcessSettings    PP                             ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::ModifyPostProcessSettings ( struct FPostProcessSettings* PP )
{
	static UFunction* pFnModifyPostProcessSettings = NULL;

	if ( ! pFnModifyPostProcessSettings )
		pFnModifyPostProcessSettings = (UFunction*) UObject::GObjObjects()->Data[ 37210 ];

	UGameThirdPersonCameraMode_execModifyPostProcessSettings_Parms ModifyPostProcessSettings_Parms;

	this->ProcessEvent ( pFnModifyPostProcessSettings, &ModifyPostProcessSettings_Parms, NULL );

	if ( PP )
		memcpy ( PP, &ModifyPostProcessSettings_Parms.PP, 0xD4 );
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            VT                             ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::UpdatePostProcess ( float DeltaTime, struct FTViewTarget* VT )
{
	static UFunction* pFnUpdatePostProcess = NULL;

	if ( ! pFnUpdatePostProcess )
		pFnUpdatePostProcess = (UFunction*) UObject::GObjObjects()->Data[ 37200 ];

	UGameThirdPersonCameraMode_execUpdatePostProcess_Parms UpdatePostProcess_Parms;
	UpdatePostProcess_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdatePostProcess, &UpdatePostProcess_Parms, NULL );

	if ( VT )
		memcpy ( VT, &UpdatePostProcess_Parms.VT, 0x2C );
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TraceOwner                     ( CPF_Parm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::DOFTrace ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace )
{
	static UFunction* pFnDOFTrace = NULL;

	if ( ! pFnDOFTrace )
		pFnDOFTrace = (UFunction*) UObject::GObjObjects()->Data[ 37192 ];

	UGameThirdPersonCameraMode_execDOFTrace_Parms DOFTrace_Parms;
	DOFTrace_Parms.TraceOwner = TraceOwner;
	memcpy ( &DOFTrace_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &DOFTrace_Parms.EndTrace, &EndTrace, 0xC );

	this->ProcessEvent ( pFnDOFTrace, &DOFTrace_Parms, NULL );

	return DOFTrace_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] 
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  TraceOwner                     ( CPF_Parm )
// struct FVector                 StartTrace                     ( CPF_Parm )
// struct FVector                 EndTrace                       ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc ( class AActor* TraceOwner, struct FVector StartTrace, struct FVector EndTrace )
{
	static UFunction* pFnGetDOFFocusLoc = NULL;

	if ( ! pFnGetDOFFocusLoc )
		pFnGetDOFFocusLoc = (UFunction*) UObject::GObjObjects()->Data[ 37187 ];

	UGameThirdPersonCameraMode_execGetDOFFocusLoc_Parms GetDOFFocusLoc_Parms;
	GetDOFFocusLoc_Parms.TraceOwner = TraceOwner;
	memcpy ( &GetDOFFocusLoc_Parms.StartTrace, &StartTrace, 0xC );
	memcpy ( &GetDOFFocusLoc_Parms.EndTrace, &EndTrace, 0xC );

	this->ProcessEvent ( pFnGetDOFFocusLoc, &GetDOFFocusLoc_Parms, NULL );

	return GetDOFFocusLoc_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )
// class AActor*                  ViewTarget                     ( CPF_Parm )
// struct FRotator                out_ViewRotation               ( CPF_Parm | CPF_OutParm )
// struct FRotator                out_DeltaRot                   ( CPF_Parm | CPF_OutParm )

void UGameThirdPersonCameraMode::ProcessViewRotation ( float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot )
{
	static UFunction* pFnProcessViewRotation = NULL;

	if ( ! pFnProcessViewRotation )
		pFnProcessViewRotation = (UFunction*) UObject::GObjObjects()->Data[ 37182 ];

	UGameThirdPersonCameraMode_execProcessViewRotation_Parms ProcessViewRotation_Parms;
	ProcessViewRotation_Parms.DeltaTime = DeltaTime;
	ProcessViewRotation_Parms.ViewTarget = ViewTarget;

	this->ProcessEvent ( pFnProcessViewRotation, &ProcessViewRotation_Parms, NULL );

	if ( out_ViewRotation )
		memcpy ( out_ViewRotation, &ProcessViewRotation_Parms.out_ViewRotation, 0xC );

	if ( out_DeltaRot )
		memcpy ( out_DeltaRot, &ProcessViewRotation_Parms.out_DeltaRot, 0xC );
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

bool UGameThirdPersonCameraMode::SetFocusPoint ( class APawn* ViewedPawn )
{
	static UFunction* pFnSetFocusPoint = NULL;

	if ( ! pFnSetFocusPoint )
		pFnSetFocusPoint = (UFunction*) UObject::GObjObjects()->Data[ 37088 ];

	UGameThirdPersonCameraMode_execSetFocusPoint_Parms SetFocusPoint_Parms;
	SetFocusPoint_Parms.ViewedPawn = ViewedPawn;

	this->ProcessEvent ( pFnSetFocusPoint, &SetFocusPoint_Parms, NULL );

	return SetFocusPoint_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   TargetPawn                     ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::eventGetCameraWorstCaseLoc ( class APawn* TargetPawn )
{
	static UFunction* pFnGetCameraWorstCaseLoc = NULL;

	if ( ! pFnGetCameraWorstCaseLoc )
		pFnGetCameraWorstCaseLoc = (UFunction*) UObject::GObjObjects()->Data[ 37178 ];

	UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Parms GetCameraWorstCaseLoc_Parms;
	GetCameraWorstCaseLoc_Parms.TargetPawn = TargetPawn;

	this->ProcessEvent ( pFnGetCameraWorstCaseLoc, &GetCameraWorstCaseLoc_Parms, NULL );

	return GetCameraWorstCaseLoc_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   ViewedPawn                     ( CPF_Parm )

float UGameThirdPersonCameraMode::GetDesiredFOV ( class APawn* ViewedPawn )
{
	static UFunction* pFnGetDesiredFOV = NULL;

	if ( ! pFnGetDesiredFOV )
		pFnGetDesiredFOV = (UFunction*) UObject::GObjObjects()->Data[ 37043 ];

	UGameThirdPersonCameraMode_execGetDesiredFOV_Parms GetDesiredFOV_Parms;
	GetDesiredFOV_Parms.ViewedPawn = ViewedPawn;

	this->ProcessEvent ( pFnGetDesiredFOV, &GetDesiredFOV_Parms, NULL );

	return GetDesiredFOV_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetPawnRelativeOffset
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class APawn*                   P                              ( CPF_Parm )

struct FVector UGameThirdPersonCameraMode::eventGetPawnRelativeOffset ( class APawn* P )
{
	static UFunction* pFnGetPawnRelativeOffset = NULL;

	if ( ! pFnGetPawnRelativeOffset )
		pFnGetPawnRelativeOffset = (UFunction*) UObject::GObjObjects()->Data[ 37174 ];

	UGameThirdPersonCameraMode_eventGetPawnRelativeOffset_Parms GetPawnRelativeOffset_Parms;
	GetPawnRelativeOffset_Parms.P = P;

	this->ProcessEvent ( pFnGetPawnRelativeOffset, &GetPawnRelativeOffset_Parms, NULL );

	return GetPawnRelativeOffset_Parms.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] 
// Parameters infos:
// class APawn*                   TargetPawn                     ( CPF_Parm )
// class UGameThirdPersonCameraMode* NewMode                        ( CPF_Parm )

void UGameThirdPersonCameraMode::OnBecomeInActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode )
{
	static UFunction* pFnOnBecomeInActive = NULL;

	if ( ! pFnOnBecomeInActive )
		pFnOnBecomeInActive = (UFunction*) UObject::GObjObjects()->Data[ 37171 ];

	UGameThirdPersonCameraMode_execOnBecomeInActive_Parms OnBecomeInActive_Parms;
	OnBecomeInActive_Parms.TargetPawn = TargetPawn;
	OnBecomeInActive_Parms.NewMode = NewMode;

	this->ProcessEvent ( pFnOnBecomeInActive, &OnBecomeInActive_Parms, NULL );
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class APawn*                   TargetPawn                     ( CPF_Parm )
// class UGameThirdPersonCameraMode* PrevMode                       ( CPF_Parm )

void UGameThirdPersonCameraMode::OnBecomeActive ( class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 37168 ];

	UGameThirdPersonCameraMode_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.TargetPawn = TargetPawn;
	OnBecomeActive_Parms.PrevMode = PrevMode;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameDecalManager.SpawnDecalMinimal
// [0x00C20003] ( FUNC_Final )
// Parameters infos:
// class UGameDecal*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// float                          InDecalLifeSpan                ( CPF_Const | CPF_Parm )
// float                          InCanSpawnDistance             ( CPF_Const | CPF_Parm )
// struct FVector                 DecalLocation                  ( CPF_Const | CPF_Parm | CPF_OutParm )

class UGameDecal* AGameDecalManager::SpawnDecalMinimal ( float InDecalLifeSpan, float InCanSpawnDistance, struct FVector* DecalLocation )
{
	static UFunction* pFnSpawnDecalMinimal = NULL;

	if ( ! pFnSpawnDecalMinimal )
		pFnSpawnDecalMinimal = (UFunction*) UObject::GObjObjects()->Data[ 36629 ];

	AGameDecalManager_execSpawnDecalMinimal_Parms SpawnDecalMinimal_Parms;
	SpawnDecalMinimal_Parms.InDecalLifeSpan = InDecalLifeSpan;
	SpawnDecalMinimal_Parms.InCanSpawnDistance = InCanSpawnDistance;

	this->ProcessEvent ( pFnSpawnDecalMinimal, &SpawnDecalMinimal_Parms, NULL );

	if ( DecalLocation )
		memcpy ( DecalLocation, &SpawnDecalMinimal_Parms.DecalLocation, 0xC );

	return SpawnDecalMinimal_Parms.ReturnValue;
};

// Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          InCanSpawnDistance             ( CPF_Const | CPF_Parm )
// struct FVector                 DecalLocation                  ( CPF_Const | CPF_Parm | CPF_OutParm )

bool AGameDecalManager::IsTooCloseToActiveDecal ( float InCanSpawnDistance, struct FVector* DecalLocation )
{
	static UFunction* pFnIsTooCloseToActiveDecal = NULL;

	if ( ! pFnIsTooCloseToActiveDecal )
		pFnIsTooCloseToActiveDecal = (UFunction*) UObject::GObjObjects()->Data[ 36625 ];

	AGameDecalManager_execIsTooCloseToActiveDecal_Parms IsTooCloseToActiveDecal_Parms;
	IsTooCloseToActiveDecal_Parms.InCanSpawnDistance = InCanSpawnDistance;

	pFnIsTooCloseToActiveDecal->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsTooCloseToActiveDecal, &IsTooCloseToActiveDecal_Parms, NULL );

	pFnIsTooCloseToActiveDecal->FunctionFlags |= 0x400;

	if ( DecalLocation )
		memcpy ( DecalLocation, &IsTooCloseToActiveDecal_Parms.DecalLocation, 0xC );

	return IsTooCloseToActiveDecal_Parms.ReturnValue;
};

// Function GameFramework.GameParticleEventManager.HandleParticleModuleEventSendToGame
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class UParticleModuleEventSendToGame* InEvent                        ( CPF_Parm )
// struct FVector                 InCollideDirection             ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FVector                 InHitLocation                  ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FVector                 InHitNormal                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FName                   InBoneName                     ( CPF_Const | CPF_Parm | CPF_OutParm )

void AGameParticleEventManager::eventHandleParticleModuleEventSendToGame ( class UParticleModuleEventSendToGame* InEvent, struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName )
{
	static UFunction* pFnHandleParticleModuleEventSendToGame = NULL;

	if ( ! pFnHandleParticleModuleEventSendToGame )
		pFnHandleParticleModuleEventSendToGame = (UFunction*) UObject::GObjObjects()->Data[ 36837 ];

	AGameParticleEventManager_eventHandleParticleModuleEventSendToGame_Parms HandleParticleModuleEventSendToGame_Parms;
	HandleParticleModuleEventSendToGame_Parms.InEvent = InEvent;

	this->ProcessEvent ( pFnHandleParticleModuleEventSendToGame, &HandleParticleModuleEventSendToGame_Parms, NULL );

	if ( InCollideDirection )
		memcpy ( InCollideDirection, &HandleParticleModuleEventSendToGame_Parms.InCollideDirection, 0xC );

	if ( InHitLocation )
		memcpy ( InHitLocation, &HandleParticleModuleEventSendToGame_Parms.InHitLocation, 0xC );

	if ( InHitNormal )
		memcpy ( InHitNormal, &HandleParticleModuleEventSendToGame_Parms.InHitNormal, 0xC );

	if ( InBoneName )
		memcpy ( InBoneName, &HandleParticleModuleEventSendToGame_Parms.InBoneName, 0x8 );
};

// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// [0x00420000] 
// Parameters infos:
// class USeqAct_GameCrowdSpawner* Spawner                        ( CPF_Parm )
// struct FVector                 SpawnPos                       ( CPF_Parm | CPF_OutParm )
// struct FRotator                SpawnRot                       ( CPF_Parm | CPF_OutParm )

void UGameCrowdSpawnInterface::GetSpawnPosition ( class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot )
{
	static UFunction* pFnGetSpawnPosition = NULL;

	if ( ! pFnGetSpawnPosition )
		pFnGetSpawnPosition = (UFunction*) UObject::GObjObjects()->Data[ 36521 ];

	UGameCrowdSpawnInterface_execGetSpawnPosition_Parms GetSpawnPosition_Parms;
	GetSpawnPosition_Parms.Spawner = Spawner;

	this->ProcessEvent ( pFnGetSpawnPosition, &GetSpawnPosition_Parms, NULL );

	if ( SpawnPos )
		memcpy ( SpawnPos, &GetSpawnPosition_Parms.SpawnPos, 0xC );

	if ( SpawnRot )
		memcpy ( SpawnRot, &GetSpawnPosition_Parms.SpawnRot, 0xC );
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] 
// Parameters infos:
// class UGameCameraBase*         OldCamera                      ( CPF_Parm )

void UGameFixedCamera::OnBecomeActive ( class UGameCameraBase* OldCamera )
{
	static UFunction* pFnOnBecomeActive = NULL;

	if ( ! pFnOnBecomeActive )
		pFnOnBecomeActive = (UFunction*) UObject::GObjObjects()->Data[ 36810 ];

	UGameFixedCamera_execOnBecomeActive_Parms OnBecomeActive_Parms;
	OnBecomeActive_Parms.OldCamera = OldCamera;

	this->ProcessEvent ( pFnOnBecomeActive, &OnBecomeActive_Parms, NULL );
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] 
// Parameters infos:
// class APawn*                   P                              ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// struct FTViewTarget            OutVT                          ( CPF_Parm | CPF_OutParm )

void UGameFixedCamera::UpdateCamera ( class APawn* P, float DeltaTime, struct FTViewTarget* OutVT )
{
	static UFunction* pFnUpdateCamera = NULL;

	if ( ! pFnUpdateCamera )
		pFnUpdateCamera = (UFunction*) UObject::GObjObjects()->Data[ 36805 ];

	UGameFixedCamera_execUpdateCamera_Parms UpdateCamera_Parms;
	UpdateCamera_Parms.P = P;
	UpdateCamera_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnUpdateCamera, &UpdateCamera_Parms, NULL );

	if ( OutVT )
		memcpy ( OutVT, &UpdateCamera_Parms.OutVT, 0x2C );
};

// Function GameFramework.GameKActorSpawnableEffect.Tick
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AGameKActorSpawnableEffect::eventTick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 36832 ];

	AGameKActorSpawnableEffect_eventTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] ( FUNC_Event )
// Parameters infos:
// class UClass*                  dmgType                        ( CPF_Parm )

void AGameKActorSpawnableEffect::eventFellOutOfWorld ( class UClass* dmgType )
{
	static UFunction* pFnFellOutOfWorld = NULL;

	if ( ! pFnFellOutOfWorld )
		pFnFellOutOfWorld = (UFunction*) UObject::GObjObjects()->Data[ 36830 ];

	AGameKActorSpawnableEffect_eventFellOutOfWorld_Parms FellOutOfWorld_Parms;
	FellOutOfWorld_Parms.dmgType = dmgType;

	this->ProcessEvent ( pFnFellOutOfWorld, &FellOutOfWorld_Parms, NULL );
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020900] ( FUNC_Event )
// Parameters infos:

void AGameKActorSpawnableEffect::eventPostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 36829 ];

	AGameKActorSpawnableEffect_eventPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif