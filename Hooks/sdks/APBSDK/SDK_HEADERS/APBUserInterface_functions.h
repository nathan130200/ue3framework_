/*
#############################################################################################
# All Points Bulletin Reloaded (1.6) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: APBUserInterface_functions.h
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

// Function APBUserInterface.cUIAction_HostingOp.ExportErrorMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_HostingOp::ExportErrorMessage ( )
{
	static UFunction* pFnExportErrorMessage = NULL;

	if ( ! pFnExportErrorMessage )
		pFnExportErrorMessage = (UFunction*) UObject::GObjObjects()->Data[ 33702 ];

	UcUIAction_HostingOp_execExportErrorMessage_Parms ExportErrorMessage_Parms;

	pFnExportErrorMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnExportErrorMessage, &ExportErrorMessage_Parms, NULL );

	pFnExportErrorMessage->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_HostingOp.ResetErrorMessage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIAction_HostingOp::eventResetErrorMessage ( )
{
	static UFunction* pFnResetErrorMessage = NULL;

	if ( ! pFnResetErrorMessage )
		pFnResetErrorMessage = (UFunction*) UObject::GObjObjects()->Data[ 33701 ];

	UcUIAction_HostingOp_eventResetErrorMessage_Parms ResetErrorMessage_Parms;

	this->ProcessEvent ( pFnResetErrorMessage, &ResetErrorMessage_Parms, NULL );
};

// Function APBUserInterface.cUIAction_HostingOp.OnFadeCompleted
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIAction_HostingOp::OnFadeCompleted ( )
{
	static UFunction* pFnOnFadeCompleted = NULL;

	if ( ! pFnOnFadeCompleted )
		pFnOnFadeCompleted = (UFunction*) UObject::GObjObjects()->Data[ 33699 ];

	UcUIAction_HostingOp_execOnFadeCompleted_Parms OnFadeCompleted_Parms;

	this->ProcessEvent ( pFnOnFadeCompleted, &OnFadeCompleted_Parms, NULL );

	return OnFadeCompleted_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_HostingOp.SetupScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UcUIScene_BaseScene*     Scene                          ( CPF_Parm )

void UcUIAction_HostingOp::eventSetupScene ( class UcUIScene_BaseScene* Scene )
{
	static UFunction* pFnSetupScene = NULL;

	if ( ! pFnSetupScene )
		pFnSetupScene = (UFunction*) UObject::GObjObjects()->Data[ 33694 ];

	UcUIAction_HostingOp_eventSetupScene_Parms SetupScene_Parms;
	SetupScene_Parms.Scene = Scene;

	this->ProcessEvent ( pFnSetupScene, &SetupScene_Parms, NULL );
};

// Function APBUserInterface.cSDDUI.CastPopupDialogCategory
// [0x00022102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            I                              ( CPF_Parm )

unsigned char UcSDDUI::CastPopupDialogCategory ( int I )
{
	static UFunction* pFnCastPopupDialogCategory = NULL;

	if ( ! pFnCastPopupDialogCategory )
		pFnCastPopupDialogCategory = (UFunction*) UObject::GObjObjects()->Data[ 33142 ];

	UcSDDUI_execCastPopupDialogCategory_Parms CastPopupDialogCategory_Parms;
	CastPopupDialogCategory_Parms.I = I;

	this->ProcessEvent ( pFnCastPopupDialogCategory, &CastPopupDialogCategory_Parms, NULL );

	return CastPopupDialogCategory_Parms.ReturnValue;
};

// Function APBUserInterface.cSDDUI.CastPopupDialogArea
// [0x00022102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            I                              ( CPF_Parm )

unsigned char UcSDDUI::CastPopupDialogArea ( int I )
{
	static UFunction* pFnCastPopupDialogArea = NULL;

	if ( ! pFnCastPopupDialogArea )
		pFnCastPopupDialogArea = (UFunction*) UObject::GObjObjects()->Data[ 33139 ];

	UcSDDUI_execCastPopupDialogArea_Parms CastPopupDialogArea_Parms;
	CastPopupDialogArea_Parms.I = I;

	this->ProcessEvent ( pFnCastPopupDialogArea, &CastPopupDialogArea_Parms, NULL );

	return CastPopupDialogArea_Parms.ReturnValue;
};

// Function APBUserInterface.cSDDUI.CastHUDUsables_DisplaySetting
// [0x00022102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            I                              ( CPF_Parm )

unsigned char UcSDDUI::CastHUDUsables_DisplaySetting ( int I )
{
	static UFunction* pFnCastHUDUsables_DisplaySetting = NULL;

	if ( ! pFnCastHUDUsables_DisplaySetting )
		pFnCastHUDUsables_DisplaySetting = (UFunction*) UObject::GObjObjects()->Data[ 33136 ];

	UcSDDUI_execCastHUDUsables_DisplaySetting_Parms CastHUDUsables_DisplaySetting_Parms;
	CastHUDUsables_DisplaySetting_Parms.I = I;

	this->ProcessEvent ( pFnCastHUDUsables_DisplaySetting, &CastHUDUsables_DisplaySetting_Parms, NULL );

	return CastHUDUsables_DisplaySetting_Parms.ReturnValue;
};

// Function APBUserInterface.cSDDUI.CastChatMessageCategory
// [0x00022102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            I                              ( CPF_Parm )

unsigned char UcSDDUI::CastChatMessageCategory ( int I )
{
	static UFunction* pFnCastChatMessageCategory = NULL;

	if ( ! pFnCastChatMessageCategory )
		pFnCastChatMessageCategory = (UFunction*) UObject::GObjObjects()->Data[ 33133 ];

	UcSDDUI_execCastChatMessageCategory_Parms CastChatMessageCategory_Parms;
	CastChatMessageCategory_Parms.I = I;

	this->ProcessEvent ( pFnCastChatMessageCategory, &CastChatMessageCategory_Parms, NULL );

	return CastChatMessageCategory_Parms.ReturnValue;
};

// Function APBUserInterface.cSDDUI.CastChatCommandWorksFromState
// [0x00022102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            I                              ( CPF_Parm )

unsigned char UcSDDUI::CastChatCommandWorksFromState ( int I )
{
	static UFunction* pFnCastChatCommandWorksFromState = NULL;

	if ( ! pFnCastChatCommandWorksFromState )
		pFnCastChatCommandWorksFromState = (UFunction*) UObject::GObjObjects()->Data[ 33130 ];

	UcSDDUI_execCastChatCommandWorksFromState_Parms CastChatCommandWorksFromState_Parms;
	CastChatCommandWorksFromState_Parms.I = I;

	this->ProcessEvent ( pFnCastChatCommandWorksFromState, &CastChatCommandWorksFromState_Parms, NULL );

	return CastChatCommandWorksFromState_Parms.ReturnValue;
};

// Function APBUserInterface.cSDDUI.CastChatCommandType
// [0x00022102] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            I                              ( CPF_Parm )

unsigned char UcSDDUI::CastChatCommandType ( int I )
{
	static UFunction* pFnCastChatCommandType = NULL;

	if ( ! pFnCastChatCommandType )
		pFnCastChatCommandType = (UFunction*) UObject::GObjObjects()->Data[ 33127 ];

	UcSDDUI_execCastChatCommandType_Parms CastChatCommandType_Parms;
	CastChatCommandType_Parms.I = I;

	this->ProcessEvent ( pFnCastChatCommandType, &CastChatCommandType_Parms, NULL );

	return CastChatCommandType_Parms.ReturnValue;
};

// Function APBUserInterface.cUI_Soc_GroupAccept.InviteAccepted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  Answer                         ( CPF_Parm )

void UcUI_Soc_GroupAccept::InviteAccepted ( unsigned char Answer )
{
	static UFunction* pFnInviteAccepted = NULL;

	if ( ! pFnInviteAccepted )
		pFnInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 33574 ];

	UcUI_Soc_GroupAccept_execInviteAccepted_Parms InviteAccepted_Parms;
	InviteAccepted_Parms.Answer = Answer;

	pFnInviteAccepted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInviteAccepted, &InviteAccepted_Parms, NULL );

	pFnInviteAccepted->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUI_Soc_GroupAccept.InviteReceived
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UcUI_Soc_GroupAccept::InviteReceived ( struct FString sPlayerName )
{
	static UFunction* pFnInviteReceived = NULL;

	if ( ! pFnInviteReceived )
		pFnInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 33572 ];

	UcUI_Soc_GroupAccept_execInviteReceived_Parms InviteReceived_Parms;
	memcpy ( &InviteReceived_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnInviteReceived->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInviteReceived, &InviteReceived_Parms, NULL );

	pFnInviteReceived->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUI_TM_TeamInviteAccept.InviteAccepted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  Answer                         ( CPF_Parm )

void UcUI_TM_TeamInviteAccept::InviteAccepted ( unsigned char Answer )
{
	static UFunction* pFnInviteAccepted = NULL;

	if ( ! pFnInviteAccepted )
		pFnInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 33597 ];

	UcUI_TM_TeamInviteAccept_execInviteAccepted_Parms InviteAccepted_Parms;
	InviteAccepted_Parms.Answer = Answer;

	pFnInviteAccepted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInviteAccepted, &InviteAccepted_Parms, NULL );

	pFnInviteAccepted->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUI_TM_TeamInviteAccept.InviteReceived
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTeamName                      ( CPF_Parm | CPF_NeedCtorLink )

void UcUI_TM_TeamInviteAccept::InviteReceived ( struct FString sPlayerName, struct FString sTeamName )
{
	static UFunction* pFnInviteReceived = NULL;

	if ( ! pFnInviteReceived )
		pFnInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 33594 ];

	UcUI_TM_TeamInviteAccept_execInviteReceived_Parms InviteReceived_Parms;
	memcpy ( &InviteReceived_Parms.sPlayerName, &sPlayerName, 0xC );
	memcpy ( &InviteReceived_Parms.sTeamName, &sTeamName, 0xC );

	pFnInviteReceived->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInviteReceived, &InviteReceived_Parms, NULL );

	pFnInviteReceived->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CharacterCreate.OnCharacterCreateFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_CharacterCreate::OnCharacterCreateFailed ( int nError )
{
	static UFunction* pFnOnCharacterCreateFailed = NULL;

	if ( ! pFnOnCharacterCreateFailed )
		pFnOnCharacterCreateFailed = (UFunction*) UObject::GObjObjects()->Data[ 33742 ];

	UcUIAction_CharacterCreate_execOnCharacterCreateFailed_Parms OnCharacterCreateFailed_Parms;
	OnCharacterCreateFailed_Parms.nError = nError;

	pFnOnCharacterCreateFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCharacterCreateFailed, &OnCharacterCreateFailed_Parms, NULL );

	pFnOnCharacterCreateFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CharacterCreate.OnCharacterCreateSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nSlotNumber                    ( CPF_Parm )

void UcUIAction_CharacterCreate::OnCharacterCreateSuccess ( int nSlotNumber )
{
	static UFunction* pFnOnCharacterCreateSuccess = NULL;

	if ( ! pFnOnCharacterCreateSuccess )
		pFnOnCharacterCreateSuccess = (UFunction*) UObject::GObjObjects()->Data[ 33740 ];

	UcUIAction_CharacterCreate_execOnCharacterCreateSuccess_Parms OnCharacterCreateSuccess_Parms;
	OnCharacterCreateSuccess_Parms.nSlotNumber = nSlotNumber;

	pFnOnCharacterCreateSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCharacterCreateSuccess, &OnCharacterCreateSuccess_Parms, NULL );

	pFnOnCharacterCreateSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CharacterDelete.OnCharacterDeleteFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_CharacterDelete::OnCharacterDeleteFailed ( int nError )
{
	static UFunction* pFnOnCharacterDeleteFailed = NULL;

	if ( ! pFnOnCharacterDeleteFailed )
		pFnOnCharacterDeleteFailed = (UFunction*) UObject::GObjObjects()->Data[ 33747 ];

	UcUIAction_CharacterDelete_execOnCharacterDeleteFailed_Parms OnCharacterDeleteFailed_Parms;
	OnCharacterDeleteFailed_Parms.nError = nError;

	pFnOnCharacterDeleteFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCharacterDeleteFailed, &OnCharacterDeleteFailed_Parms, NULL );

	pFnOnCharacterDeleteFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CharacterDelete.OnCharacterDeleteSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_CharacterDelete::OnCharacterDeleteSuccess ( )
{
	static UFunction* pFnOnCharacterDeleteSuccess = NULL;

	if ( ! pFnOnCharacterDeleteSuccess )
		pFnOnCharacterDeleteSuccess = (UFunction*) UObject::GObjObjects()->Data[ 33746 ];

	UcUIAction_CharacterDelete_execOnCharacterDeleteSuccess_Parms OnCharacterDeleteSuccess_Parms;

	pFnOnCharacterDeleteSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCharacterDeleteSuccess, &OnCharacterDeleteSuccess_Parms, NULL );

	pFnOnCharacterDeleteSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CharacterInfo.OnCharacterInfoFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_CharacterInfo::OnCharacterInfoFailed ( int nError )
{
	static UFunction* pFnOnCharacterInfoFailed = NULL;

	if ( ! pFnOnCharacterInfoFailed )
		pFnOnCharacterInfoFailed = (UFunction*) UObject::GObjObjects()->Data[ 33752 ];

	UcUIAction_CharacterInfo_execOnCharacterInfoFailed_Parms OnCharacterInfoFailed_Parms;
	OnCharacterInfoFailed_Parms.nError = nError;

	pFnOnCharacterInfoFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCharacterInfoFailed, &OnCharacterInfoFailed_Parms, NULL );

	pFnOnCharacterInfoFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CharacterInfo.OnCharacterInfoSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_CharacterInfo::OnCharacterInfoSuccess ( )
{
	static UFunction* pFnOnCharacterInfoSuccess = NULL;

	if ( ! pFnOnCharacterInfoSuccess )
		pFnOnCharacterInfoSuccess = (UFunction*) UObject::GObjObjects()->Data[ 33751 ];

	UcUIAction_CharacterInfo_execOnCharacterInfoSuccess_Parms OnCharacterInfoSuccess_Parms;

	pFnOnCharacterInfoSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCharacterInfoSuccess, &OnCharacterInfoSuccess_Parms, NULL );

	pFnOnCharacterInfoSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CharacterNameCheck.OnNameCheckFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_CharacterNameCheck::OnNameCheckFailed ( int nError )
{
	static UFunction* pFnOnNameCheckFailed = NULL;

	if ( ! pFnOnNameCheckFailed )
		pFnOnNameCheckFailed = (UFunction*) UObject::GObjObjects()->Data[ 33764 ];

	UcUIAction_CharacterNameCheck_execOnNameCheckFailed_Parms OnNameCheckFailed_Parms;
	OnNameCheckFailed_Parms.nError = nError;

	pFnOnNameCheckFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnNameCheckFailed, &OnNameCheckFailed_Parms, NULL );

	pFnOnNameCheckFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CharacterNameCheck.OnNameCheckSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_CharacterNameCheck::OnNameCheckSuccess ( )
{
	static UFunction* pFnOnNameCheckSuccess = NULL;

	if ( ! pFnOnNameCheckSuccess )
		pFnOnNameCheckSuccess = (UFunction*) UObject::GObjObjects()->Data[ 33763 ];

	UcUIAction_CharacterNameCheck_execOnNameCheckSuccess_Parms OnNameCheckSuccess_Parms;

	pFnOnNameCheckSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnNameCheckSuccess, &OnNameCheckSuccess_Parms, NULL );

	pFnOnNameCheckSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CompString.HasDynamicOutputLinks
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIAction_CompString::eventHasDynamicOutputLinks ( )
{
	static UFunction* pFnHasDynamicOutputLinks = NULL;

	if ( ! pFnHasDynamicOutputLinks )
		pFnHasDynamicOutputLinks = (UFunction*) UObject::GObjObjects()->Data[ 33787 ];

	UcUIAction_CompString_eventHasDynamicOutputLinks_Parms HasDynamicOutputLinks_Parms;

	this->ProcessEvent ( pFnHasDynamicOutputLinks, &HasDynamicOutputLinks_Parms, NULL );

	return HasDynamicOutputLinks_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_CompString.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIAction_CompString::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 33785 ];

	UcUIAction_CompString_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_DisplayTextEntry.OnBoxClosed
// [0x00020002] 
// Parameters infos:
// unsigned long                  bInAcceptOk                    ( CPF_Parm )

void UcUIAction_DisplayTextEntry::OnBoxClosed ( unsigned long bInAcceptOk )
{
	static UFunction* pFnOnBoxClosed = NULL;

	if ( ! pFnOnBoxClosed )
		pFnOnBoxClosed = (UFunction*) UObject::GObjObjects()->Data[ 33968 ];

	UcUIAction_DisplayTextEntry_execOnBoxClosed_Parms OnBoxClosed_Parms;
	OnBoxClosed_Parms.bInAcceptOk = bInAcceptOk;

	this->ProcessEvent ( pFnOnBoxClosed, &OnBoxClosed_Parms, NULL );
};

// Function APBUserInterface.cUIAction_DisplayTextEntry.SetupScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UcUIScene_TextEntry*     Scene                          ( CPF_Parm )

void UcUIAction_DisplayTextEntry::eventSetupScene ( class UcUIScene_TextEntry* Scene )
{
	static UFunction* pFnSetupScene = NULL;

	if ( ! pFnSetupScene )
		pFnSetupScene = (UFunction*) UObject::GObjObjects()->Data[ 33966 ];

	UcUIAction_DisplayTextEntry_eventSetupScene_Parms SetupScene_Parms;
	SetupScene_Parms.Scene = Scene;

	this->ProcessEvent ( pFnSetupScene, &SetupScene_Parms, NULL );
};

// Function APBUserInterface.cUIAction_DistrictEnter.ShowLoadingScreen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )

void UcUIAction_DistrictEnter::ShowLoadingScreen ( unsigned long bShow )
{
	static UFunction* pFnShowLoadingScreen = NULL;

	if ( ! pFnShowLoadingScreen )
		pFnShowLoadingScreen = (UFunction*) UObject::GObjObjects()->Data[ 34048 ];

	UcUIAction_DistrictEnter_execShowLoadingScreen_Parms ShowLoadingScreen_Parms;
	ShowLoadingScreen_Parms.bShow = bShow;

	pFnShowLoadingScreen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoadingScreen, &ShowLoadingScreen_Parms, NULL );

	pFnShowLoadingScreen->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DistrictEnter.CharacterGetInfoFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )
// struct FString                 sCharacterName                 ( CPF_Parm | CPF_NeedCtorLink )

void UcUIAction_DistrictEnter::CharacterGetInfoFailure ( int nError, struct FString sCharacterName )
{
	static UFunction* pFnCharacterGetInfoFailure = NULL;

	if ( ! pFnCharacterGetInfoFailure )
		pFnCharacterGetInfoFailure = (UFunction*) UObject::GObjObjects()->Data[ 34045 ];

	UcUIAction_DistrictEnter_execCharacterGetInfoFailure_Parms CharacterGetInfoFailure_Parms;
	CharacterGetInfoFailure_Parms.nError = nError;
	memcpy ( &CharacterGetInfoFailure_Parms.sCharacterName, &sCharacterName, 0xC );

	pFnCharacterGetInfoFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCharacterGetInfoFailure, &CharacterGetInfoFailure_Parms, NULL );

	pFnCharacterGetInfoFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DistrictEnter.CharacterGetInfoSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCharacterUID                  ( CPF_Parm )
// int                            nDistrictUID                   ( CPF_Parm )
// int                            nInstanceNo                    ( CPF_Parm )
// unsigned char                  eFaction                       ( CPF_Parm )
// struct FString                 sCharacterName                 ( CPF_Parm | CPF_NeedCtorLink )
// float                          fInstanceAverageSkillRating    ( CPF_Parm )

void UcUIAction_DistrictEnter::CharacterGetInfoSuccess ( int nCharacterUID, int nDistrictUID, int nInstanceNo, unsigned char eFaction, struct FString sCharacterName, float fInstanceAverageSkillRating )
{
	static UFunction* pFnCharacterGetInfoSuccess = NULL;

	if ( ! pFnCharacterGetInfoSuccess )
		pFnCharacterGetInfoSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34038 ];

	UcUIAction_DistrictEnter_execCharacterGetInfoSuccess_Parms CharacterGetInfoSuccess_Parms;
	CharacterGetInfoSuccess_Parms.nCharacterUID = nCharacterUID;
	CharacterGetInfoSuccess_Parms.nDistrictUID = nDistrictUID;
	CharacterGetInfoSuccess_Parms.nInstanceNo = nInstanceNo;
	CharacterGetInfoSuccess_Parms.eFaction = eFaction;
	memcpy ( &CharacterGetInfoSuccess_Parms.sCharacterName, &sCharacterName, 0xC );
	CharacterGetInfoSuccess_Parms.fInstanceAverageSkillRating = fInstanceAverageSkillRating;

	pFnCharacterGetInfoSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCharacterGetInfoSuccess, &CharacterGetInfoSuccess_Parms, NULL );

	pFnCharacterGetInfoSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DistrictEnter.JoinPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sPlayerName                    ( CPF_Parm | CPF_NeedCtorLink )

void UcUIAction_DistrictEnter::JoinPlayer ( struct FString sPlayerName )
{
	static UFunction* pFnJoinPlayer = NULL;

	if ( ! pFnJoinPlayer )
		pFnJoinPlayer = (UFunction*) UObject::GObjObjects()->Data[ 34036 ];

	UcUIAction_DistrictEnter_execJoinPlayer_Parms JoinPlayer_Parms;
	memcpy ( &JoinPlayer_Parms.sPlayerName, &sPlayerName, 0xC );

	pFnJoinPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnJoinPlayer, &JoinPlayer_Parms, NULL );

	pFnJoinPlayer->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DistrictEnter.DistrictReserve
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_DistrictEnter::DistrictReserve ( )
{
	static UFunction* pFnDistrictReserve = NULL;

	if ( ! pFnDistrictReserve )
		pFnDistrictReserve = (UFunction*) UObject::GObjObjects()->Data[ 34035 ];

	UcUIAction_DistrictEnter_execDistrictReserve_Parms DistrictReserve_Parms;

	pFnDistrictReserve->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDistrictReserve, &DistrictReserve_Parms, NULL );

	pFnDistrictReserve->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnWorldServerDisconnect
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_DistrictEnter::OnWorldServerDisconnect ( )
{
	static UFunction* pFnOnWorldServerDisconnect = NULL;

	if ( ! pFnOnWorldServerDisconnect )
		pFnOnWorldServerDisconnect = (UFunction*) UObject::GObjObjects()->Data[ 34034 ];

	UcUIAction_DistrictEnter_execOnWorldServerDisconnect_Parms OnWorldServerDisconnect_Parms;

	pFnOnWorldServerDisconnect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnWorldServerDisconnect, &OnWorldServerDisconnect_Parms, NULL );

	pFnOnWorldServerDisconnect->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnDistrictEnterFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_DistrictEnter::OnDistrictEnterFailed ( int nError )
{
	static UFunction* pFnOnDistrictEnterFailed = NULL;

	if ( ! pFnOnDistrictEnterFailed )
		pFnOnDistrictEnterFailed = (UFunction*) UObject::GObjObjects()->Data[ 34032 ];

	UcUIAction_DistrictEnter_execOnDistrictEnterFailed_Parms OnDistrictEnterFailed_Parms;
	OnDistrictEnterFailed_Parms.nError = nError;

	pFnOnDistrictEnterFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDistrictEnterFailed, &OnDistrictEnterFailed_Parms, NULL );

	pFnOnDistrictEnterFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnDistrictEnterSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_DistrictEnter::OnDistrictEnterSuccess ( )
{
	static UFunction* pFnOnDistrictEnterSuccess = NULL;

	if ( ! pFnOnDistrictEnterSuccess )
		pFnOnDistrictEnterSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34031 ];

	UcUIAction_DistrictEnter_execOnDistrictEnterSuccess_Parms OnDistrictEnterSuccess_Parms;

	pFnOnDistrictEnterSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDistrictEnterSuccess, &OnDistrictEnterSuccess_Parms, NULL );

	pFnOnDistrictEnterSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnDistrictReserveFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )
// int                            nDistrictUID                   ( CPF_Parm )
// int                            nInstanceNo                    ( CPF_Parm )
// unsigned long                  bGroup                         ( CPF_Parm )

void UcUIAction_DistrictEnter::OnDistrictReserveFailed ( int nError, int nDistrictUID, int nInstanceNo, unsigned long bGroup )
{
	static UFunction* pFnOnDistrictReserveFailed = NULL;

	if ( ! pFnOnDistrictReserveFailed )
		pFnOnDistrictReserveFailed = (UFunction*) UObject::GObjObjects()->Data[ 34026 ];

	UcUIAction_DistrictEnter_execOnDistrictReserveFailed_Parms OnDistrictReserveFailed_Parms;
	OnDistrictReserveFailed_Parms.nError = nError;
	OnDistrictReserveFailed_Parms.nDistrictUID = nDistrictUID;
	OnDistrictReserveFailed_Parms.nInstanceNo = nInstanceNo;
	OnDistrictReserveFailed_Parms.bGroup = bGroup;

	pFnOnDistrictReserveFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDistrictReserveFailed, &OnDistrictReserveFailed_Parms, NULL );

	pFnOnDistrictReserveFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DistrictEnter.OnDistrictReserveSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_DistrictEnter::OnDistrictReserveSuccess ( )
{
	static UFunction* pFnOnDistrictReserveSuccess = NULL;

	if ( ! pFnOnDistrictReserveSuccess )
		pFnOnDistrictReserveSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34025 ];

	UcUIAction_DistrictEnter_execOnDistrictReserveSuccess_Parms OnDistrictReserveSuccess_Parms;

	pFnOnDistrictReserveSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDistrictReserveSuccess, &OnDistrictReserveSuccess_Parms, NULL );

	pFnOnDistrictReserveSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DM_HandleInput.OnPlayerSpawnTimerExpired
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_DM_HandleInput::OnPlayerSpawnTimerExpired ( )
{
	static UFunction* pFnOnPlayerSpawnTimerExpired = NULL;

	if ( ! pFnOnPlayerSpawnTimerExpired )
		pFnOnPlayerSpawnTimerExpired = (UFunction*) UObject::GObjObjects()->Data[ 34055 ];

	UcUIAction_DM_HandleInput_execOnPlayerSpawnTimerExpired_Parms OnPlayerSpawnTimerExpired_Parms;

	pFnOnPlayerSpawnTimerExpired->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPlayerSpawnTimerExpired, &OnPlayerSpawnTimerExpired_Parms, NULL );

	pFnOnPlayerSpawnTimerExpired->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_ForceGC.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIAction_ForceGC::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 34100 ];

	UcUIAction_ForceGC_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_FullScreenMoviePlayer.InputKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          AmountDepressed                ( CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool UcUIAction_FullScreenMoviePlayer::InputKey ( int ControllerId, struct FName Key, unsigned char EventType, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnInputKey = NULL;

	if ( ! pFnInputKey )
		pFnInputKey = (UFunction*) UObject::GObjObjects()->Data[ 34113 ];

	UcUIAction_FullScreenMoviePlayer_execInputKey_Parms InputKey_Parms;
	InputKey_Parms.ControllerId = ControllerId;
	memcpy ( &InputKey_Parms.Key, &Key, 0x8 );
	InputKey_Parms.EventType = EventType;
	InputKey_Parms.AmountDepressed = AmountDepressed;
	InputKey_Parms.bGamepad = bGamepad;

	pFnInputKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInputKey, &InputKey_Parms, NULL );

	pFnInputKey->FunctionFlags |= 0x400;

	return InputKey_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_GetInstanceList.OnGetInstanceListFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_GetInstanceList::OnGetInstanceListFailed ( int nError )
{
	static UFunction* pFnOnGetInstanceListFailed = NULL;

	if ( ! pFnOnGetInstanceListFailed )
		pFnOnGetInstanceListFailed = (UFunction*) UObject::GObjObjects()->Data[ 34177 ];

	UcUIAction_GetInstanceList_execOnGetInstanceListFailed_Parms OnGetInstanceListFailed_Parms;
	OnGetInstanceListFailed_Parms.nError = nError;

	pFnOnGetInstanceListFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGetInstanceListFailed, &OnGetInstanceListFailed_Parms, NULL );

	pFnOnGetInstanceListFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_GetInstanceList.OnGetInstanceListSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_GetInstanceList::OnGetInstanceListSuccess ( )
{
	static UFunction* pFnOnGetInstanceListSuccess = NULL;

	if ( ! pFnOnGetInstanceListSuccess )
		pFnOnGetInstanceListSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34176 ];

	UcUIAction_GetInstanceList_execOnGetInstanceListSuccess_Parms OnGetInstanceListSuccess_Parms;

	pFnOnGetInstanceListSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGetInstanceListSuccess, &OnGetInstanceListSuccess_Parms, NULL );

	pFnOnGetInstanceListSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_GetKeyPress.InputKey_UIWidget
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UcUIAction_GetKeyPress::InputKey_UIWidget ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnInputKey_UIWidget = NULL;

	if ( ! pFnInputKey_UIWidget )
		pFnInputKey_UIWidget = (UFunction*) UObject::GObjObjects()->Data[ 34210 ];

	UcUIAction_GetKeyPress_execInputKey_UIWidget_Parms InputKey_UIWidget_Parms;

	pFnInputKey_UIWidget->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInputKey_UIWidget, &InputKey_UIWidget_Parms, NULL );

	pFnInputKey_UIWidget->FunctionFlags |= 0x400;

	if ( EventParms )
		memcpy ( EventParms, &InputKey_UIWidget_Parms.EventParms, 0x20 );

	return InputKey_UIWidget_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_GetKeyPress.OldInputKeyDelegate_UIWidget
// [0x00520000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UcUIAction_GetKeyPress::OldInputKeyDelegate_UIWidget ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnOldInputKeyDelegate_UIWidget = NULL;

	if ( ! pFnOldInputKeyDelegate_UIWidget )
		pFnOldInputKeyDelegate_UIWidget = (UFunction*) UObject::GObjObjects()->Data[ 34184 ];

	UcUIAction_GetKeyPress_execOldInputKeyDelegate_UIWidget_Parms OldInputKeyDelegate_UIWidget_Parms;

	this->ProcessEvent ( pFnOldInputKeyDelegate_UIWidget, &OldInputKeyDelegate_UIWidget_Parms, NULL );

	if ( EventParms )
		memcpy ( EventParms, &OldInputKeyDelegate_UIWidget_Parms.EventParms, 0x20 );

	return OldInputKeyDelegate_UIWidget_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_GetKeyPress.InputKey_Global
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          AmountDepressed                ( CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool UcUIAction_GetKeyPress::InputKey_Global ( int ControllerId, struct FName Key, unsigned char EventType, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnInputKey_Global = NULL;

	if ( ! pFnInputKey_Global )
		pFnInputKey_Global = (UFunction*) UObject::GObjObjects()->Data[ 34201 ];

	UcUIAction_GetKeyPress_execInputKey_Global_Parms InputKey_Global_Parms;
	InputKey_Global_Parms.ControllerId = ControllerId;
	memcpy ( &InputKey_Global_Parms.Key, &Key, 0x8 );
	InputKey_Global_Parms.EventType = EventType;
	InputKey_Global_Parms.AmountDepressed = AmountDepressed;
	InputKey_Global_Parms.bGamepad = bGamepad;

	pFnInputKey_Global->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInputKey_Global, &InputKey_Global_Parms, NULL );

	pFnInputKey_Global->FunctionFlags |= 0x400;

	return InputKey_Global_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_GetKeyPress.OldInputKeyDelegate_Global
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            ControllerId                   ( CPF_Parm )
// struct FName                   Key                            ( CPF_Parm )
// unsigned char                  EventType                      ( CPF_Parm )
// float                          AmountDepressed                ( CPF_Parm )
// unsigned long                  bGamepad                       ( CPF_OptionalParm | CPF_Parm )

bool UcUIAction_GetKeyPress::OldInputKeyDelegate_Global ( int ControllerId, struct FName Key, unsigned char EventType, float AmountDepressed, unsigned long bGamepad )
{
	static UFunction* pFnOldInputKeyDelegate_Global = NULL;

	if ( ! pFnOldInputKeyDelegate_Global )
		pFnOldInputKeyDelegate_Global = (UFunction*) UObject::GObjObjects()->Data[ 34186 ];

	UcUIAction_GetKeyPress_execOldInputKeyDelegate_Global_Parms OldInputKeyDelegate_Global_Parms;
	OldInputKeyDelegate_Global_Parms.ControllerId = ControllerId;
	memcpy ( &OldInputKeyDelegate_Global_Parms.Key, &Key, 0x8 );
	OldInputKeyDelegate_Global_Parms.EventType = EventType;
	OldInputKeyDelegate_Global_Parms.AmountDepressed = AmountDepressed;
	OldInputKeyDelegate_Global_Parms.bGamepad = bGamepad;

	this->ProcessEvent ( pFnOldInputKeyDelegate_Global, &OldInputKeyDelegate_Global_Parms, NULL );

	return OldInputKeyDelegate_Global_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_GetWorldList.OnGetWorldListFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_GetWorldList::OnGetWorldListFailed ( int nError )
{
	static UFunction* pFnOnGetWorldListFailed = NULL;

	if ( ! pFnOnGetWorldListFailed )
		pFnOnGetWorldListFailed = (UFunction*) UObject::GObjObjects()->Data[ 34253 ];

	UcUIAction_GetWorldList_execOnGetWorldListFailed_Parms OnGetWorldListFailed_Parms;
	OnGetWorldListFailed_Parms.nError = nError;

	pFnOnGetWorldListFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGetWorldListFailed, &OnGetWorldListFailed_Parms, NULL );

	pFnOnGetWorldListFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_GetWorldList.OnGetWorldListSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_GetWorldList::OnGetWorldListSuccess ( )
{
	static UFunction* pFnOnGetWorldListSuccess = NULL;

	if ( ! pFnOnGetWorldListSuccess )
		pFnOnGetWorldListSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34252 ];

	UcUIAction_GetWorldList_execOnGetWorldListSuccess_Parms OnGetWorldListSuccess_Parms;

	pFnOnGetWorldListSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGetWorldListSuccess, &OnGetWorldListSuccess_Parms, NULL );

	pFnOnGetWorldListSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_HasTutorialBeenPlayed.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIAction_HasTutorialBeenPlayed::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 34261 ];

	UcUIAction_HasTutorialBeenPlayed_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_LaunchGameFlowScene.ClientInvokeCityMap
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_LaunchGameFlowScene::ClientInvokeCityMap ( )
{
	static UFunction* pFnClientInvokeCityMap = NULL;

	if ( ! pFnClientInvokeCityMap )
		pFnClientInvokeCityMap = (UFunction*) UObject::GObjObjects()->Data[ 34294 ];

	UcUIAction_LaunchGameFlowScene_execClientInvokeCityMap_Parms ClientInvokeCityMap_Parms;

	pFnClientInvokeCityMap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientInvokeCityMap, &ClientInvokeCityMap_Parms, NULL );

	pFnClientInvokeCityMap->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_LaunchGameFlowScene.ClientNotReturningToLobby
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_LaunchGameFlowScene::ClientNotReturningToLobby ( )
{
	static UFunction* pFnClientNotReturningToLobby = NULL;

	if ( ! pFnClientNotReturningToLobby )
		pFnClientNotReturningToLobby = (UFunction*) UObject::GObjObjects()->Data[ 34293 ];

	UcUIAction_LaunchGameFlowScene_execClientNotReturningToLobby_Parms ClientNotReturningToLobby_Parms;

	pFnClientNotReturningToLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClientNotReturningToLobby, &ClientNotReturningToLobby_Parms, NULL );

	pFnClientNotReturningToLobby->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_LaunchGameFlowScene.OnFastLoginFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_LaunchGameFlowScene::OnFastLoginFailed ( int nError )
{
	static UFunction* pFnOnFastLoginFailed = NULL;

	if ( ! pFnOnFastLoginFailed )
		pFnOnFastLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 34291 ];

	UcUIAction_LaunchGameFlowScene_execOnFastLoginFailed_Parms OnFastLoginFailed_Parms;
	OnFastLoginFailed_Parms.nError = nError;

	pFnOnFastLoginFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFastLoginFailed, &OnFastLoginFailed_Parms, NULL );

	pFnOnFastLoginFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_LaunchGameFlowScene.OnFastLoginSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPoints                        ( CPF_Parm )

void UcUIAction_LaunchGameFlowScene::OnFastLoginSuccess ( int nPoints )
{
	static UFunction* pFnOnFastLoginSuccess = NULL;

	if ( ! pFnOnFastLoginSuccess )
		pFnOnFastLoginSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34289 ];

	UcUIAction_LaunchGameFlowScene_execOnFastLoginSuccess_Parms OnFastLoginSuccess_Parms;
	OnFastLoginSuccess_Parms.nPoints = nPoints;

	pFnOnFastLoginSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFastLoginSuccess, &OnFastLoginSuccess_Parms, NULL );

	pFnOnFastLoginSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Login.OnLoginFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Login::OnLoginFailed ( int nError )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 34301 ];

	UcUIAction_Login_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.nError = nError;

	pFnOnLoginFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );

	pFnOnLoginFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Login.OnLoginSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPoints                        ( CPF_Parm )

void UcUIAction_Login::OnLoginSuccess ( int nPoints )
{
	static UFunction* pFnOnLoginSuccess = NULL;

	if ( ! pFnOnLoginSuccess )
		pFnOnLoginSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34299 ];

	UcUIAction_Login_execOnLoginSuccess_Parms OnLoginSuccess_Parms;
	OnLoginSuccess_Parms.nPoints = nPoints;

	pFnOnLoginSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLoginSuccess, &OnLoginSuccess_Parms, NULL );

	pFnOnLoginSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Logout.OnDisconnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Logout::OnDisconnected ( )
{
	static UFunction* pFnOnDisconnected = NULL;

	if ( ! pFnOnDisconnected )
		pFnOnDisconnected = (UFunction*) UObject::GObjObjects()->Data[ 34305 ];

	UcUIAction_Logout_execOnDisconnected_Parms OnDisconnected_Parms;

	pFnOnDisconnected->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDisconnected, &OnDisconnected_Parms, NULL );

	pFnOnDisconnected->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_OpenFileSelector.SelectionDone
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_OpenFileSelector::SelectionDone ( )
{
	static UFunction* pFnSelectionDone = NULL;

	if ( ! pFnSelectionDone )
		pFnSelectionDone = (UFunction*) UObject::GObjObjects()->Data[ 34875 ];

	UcUIAction_OpenFileSelector_execSelectionDone_Parms SelectionDone_Parms;

	pFnSelectionDone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectionDone, &SelectionDone_Parms, NULL );

	pFnSelectionDone->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_OpenFileSelector.SelectionCanceled
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_OpenFileSelector::SelectionCanceled ( )
{
	static UFunction* pFnSelectionCanceled = NULL;

	if ( ! pFnSelectionCanceled )
		pFnSelectionCanceled = (UFunction*) UObject::GObjObjects()->Data[ 34874 ];

	UcUIAction_OpenFileSelector_execSelectionCanceled_Parms SelectionCanceled_Parms;

	pFnSelectionCanceled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectionCanceled, &SelectionCanceled_Parms, NULL );

	pFnSelectionCanceled->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_OpenFileSelector.SelectionMade
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sSelectedPath                  ( CPF_Parm | CPF_NeedCtorLink )

void UcUIAction_OpenFileSelector::SelectionMade ( struct FString sSelectedPath )
{
	static UFunction* pFnSelectionMade = NULL;

	if ( ! pFnSelectionMade )
		pFnSelectionMade = (UFunction*) UObject::GObjObjects()->Data[ 34872 ];

	UcUIAction_OpenFileSelector_execSelectionMade_Parms SelectionMade_Parms;
	memcpy ( &SelectionMade_Parms.sSelectedPath, &sSelectedPath, 0xC );

	pFnSelectionMade->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectionMade, &SelectionMade_Parms, NULL );

	pFnSelectionMade->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_AddFriend.OnAddCompleted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Error                          ( CPF_Parm )

void UcUIAction_Soc_AddFriend::OnAddCompleted ( int Error )
{
	static UFunction* pFnOnAddCompleted = NULL;

	if ( ! pFnOnAddCompleted )
		pFnOnAddCompleted = (UFunction*) UObject::GObjObjects()->Data[ 35162 ];

	UcUIAction_Soc_AddFriend_execOnAddCompleted_Parms OnAddCompleted_Parms;
	OnAddCompleted_Parms.Error = Error;

	pFnOnAddCompleted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAddCompleted, &OnAddCompleted_Parms, NULL );

	pFnOnAddCompleted->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_AddIgnore.OnAddCompleted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Error                          ( CPF_Parm )

void UcUIAction_Soc_AddIgnore::OnAddCompleted ( int Error )
{
	static UFunction* pFnOnAddCompleted = NULL;

	if ( ! pFnOnAddCompleted )
		pFnOnAddCompleted = (UFunction*) UObject::GObjObjects()->Data[ 35169 ];

	UcUIAction_Soc_AddIgnore_execOnAddCompleted_Parms OnAddCompleted_Parms;
	OnAddCompleted_Parms.Error = Error;

	pFnOnAddCompleted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAddCompleted, &OnAddCompleted_Parms, NULL );

	pFnOnAddCompleted->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_SendGroupInvite.OnInviteSendFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Soc_SendGroupInvite::OnInviteSendFailed ( int nError )
{
	static UFunction* pFnOnInviteSendFailed = NULL;

	if ( ! pFnOnInviteSendFailed )
		pFnOnInviteSendFailed = (UFunction*) UObject::GObjObjects()->Data[ 35214 ];

	UcUIAction_Soc_SendGroupInvite_execOnInviteSendFailed_Parms OnInviteSendFailed_Parms;
	OnInviteSendFailed_Parms.nError = nError;

	pFnOnInviteSendFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInviteSendFailed, &OnInviteSendFailed_Parms, NULL );

	pFnOnInviteSendFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_SendGroupInvite.OnInviteSent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Soc_SendGroupInvite::OnInviteSent ( )
{
	static UFunction* pFnOnInviteSent = NULL;

	if ( ! pFnOnInviteSent )
		pFnOnInviteSent = (UFunction*) UObject::GObjObjects()->Data[ 35213 ];

	UcUIAction_Soc_SendGroupInvite_execOnInviteSent_Parms OnInviteSent_Parms;

	pFnOnInviteSent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInviteSent, &OnInviteSent_Parms, NULL );

	pFnOnInviteSent->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_SendTeamInvite.OnSendCompleted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            Error                          ( CPF_Parm )

void UcUIAction_Soc_SendTeamInvite::OnSendCompleted ( int Error )
{
	static UFunction* pFnOnSendCompleted = NULL;

	if ( ! pFnOnSendCompleted )
		pFnOnSendCompleted = (UFunction*) UObject::GObjObjects()->Data[ 35220 ];

	UcUIAction_Soc_SendTeamInvite_execOnSendCompleted_Parms OnSendCompleted_Parms;
	OnSendCompleted_Parms.Error = Error;

	pFnOnSendCompleted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSendCompleted, &OnSendCompleted_Parms, NULL );

	pFnOnSendCompleted->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_SteamLogin.OnLoginFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_SteamLogin::OnLoginFailed ( int nError )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 35254 ];

	UcUIAction_SteamLogin_execOnLoginFailed_Parms OnLoginFailed_Parms;
	OnLoginFailed_Parms.nError = nError;

	pFnOnLoginFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );

	pFnOnLoginFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_SteamLogin.OnLoginSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPoints                        ( CPF_Parm )

void UcUIAction_SteamLogin::OnLoginSuccess ( int nPoints )
{
	static UFunction* pFnOnLoginSuccess = NULL;

	if ( ! pFnOnLoginSuccess )
		pFnOnLoginSuccess = (UFunction*) UObject::GObjObjects()->Data[ 35252 ];

	UcUIAction_SteamLogin_execOnLoginSuccess_Parms OnLoginSuccess_Parms;
	OnLoginSuccess_Parms.nPoints = nPoints;

	pFnOnLoginSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLoginSuccess, &OnLoginSuccess_Parms, NULL );

	pFnOnLoginSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_StreamLevel.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIAction_StreamLevel::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 35336 ];

	UcUIAction_StreamLevel_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_WorldEnter.OnWorldEnterFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_WorldEnter::OnWorldEnterFailed ( int nError )
{
	static UFunction* pFnOnWorldEnterFailed = NULL;

	if ( ! pFnOnWorldEnterFailed )
		pFnOnWorldEnterFailed = (UFunction*) UObject::GObjObjects()->Data[ 35533 ];

	UcUIAction_WorldEnter_execOnWorldEnterFailed_Parms OnWorldEnterFailed_Parms;
	OnWorldEnterFailed_Parms.nError = nError;

	pFnOnWorldEnterFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnWorldEnterFailed, &OnWorldEnterFailed_Parms, NULL );

	pFnOnWorldEnterFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_WorldEnter.OnWorldEnterSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_WorldEnter::OnWorldEnterSuccess ( )
{
	static UFunction* pFnOnWorldEnterSuccess = NULL;

	if ( ! pFnOnWorldEnterSuccess )
		pFnOnWorldEnterSuccess = (UFunction*) UObject::GObjObjects()->Data[ 35532 ];

	UcUIAction_WorldEnter_execOnWorldEnterSuccess_Parms OnWorldEnterSuccess_Parms;

	pFnOnWorldEnterSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnWorldEnterSuccess, &OnWorldEnterSuccess_Parms, NULL );

	pFnOnWorldEnterSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_WorldQueueCancel.OnWorldQueueCancelFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_WorldQueueCancel::OnWorldQueueCancelFailed ( int nError )
{
	static UFunction* pFnOnWorldQueueCancelFailed = NULL;

	if ( ! pFnOnWorldQueueCancelFailed )
		pFnOnWorldQueueCancelFailed = (UFunction*) UObject::GObjObjects()->Data[ 35536 ];

	UcUIAction_WorldQueueCancel_execOnWorldQueueCancelFailed_Parms OnWorldQueueCancelFailed_Parms;
	OnWorldQueueCancelFailed_Parms.nError = nError;

	pFnOnWorldQueueCancelFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnWorldQueueCancelFailed, &OnWorldQueueCancelFailed_Parms, NULL );

	pFnOnWorldQueueCancelFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_WorldQueueCancel.OnWorldQueueCancelSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_WorldQueueCancel::OnWorldQueueCancelSuccess ( )
{
	static UFunction* pFnOnWorldQueueCancelSuccess = NULL;

	if ( ! pFnOnWorldQueueCancelSuccess )
		pFnOnWorldQueueCancelSuccess = (UFunction*) UObject::GObjObjects()->Data[ 35535 ];

	UcUIAction_WorldQueueCancel_execOnWorldQueueCancelSuccess_Parms OnWorldQueueCancelSuccess_Parms;

	pFnOnWorldQueueCancelSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnWorldQueueCancelSuccess, &OnWorldQueueCancelSuccess_Parms, NULL );

	pFnOnWorldQueueCancelSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIButton.OnSetImage
// [0x00020002] 
// Parameters infos:
// class UcUIAction_SetImage*     Action                         ( CPF_Parm )

void UcUIButton::OnSetImage ( class UcUIAction_SetImage* Action )
{
	static UFunction* pFnOnSetImage = NULL;

	if ( ! pFnOnSetImage )
		pFnOnSetImage = (UFunction*) UObject::GObjObjects()->Data[ 35569 ];

	UcUIButton_execOnSetImage_Parms OnSetImage_Parms;
	OnSetImage_Parms.Action = Action;

	this->ProcessEvent ( pFnOnSetImage, &OnSetImage_Parms, NULL );
};

// Function APBUserInterface.cUIButton.SetSecondaryImage
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class USurface*                NewImage                       ( CPF_Parm )

void UcUIButton::SetSecondaryImage ( class USurface* NewImage )
{
	static UFunction* pFnSetSecondaryImage = NULL;

	if ( ! pFnSetSecondaryImage )
		pFnSetSecondaryImage = (UFunction*) UObject::GObjObjects()->Data[ 35567 ];

	UcUIButton_execSetSecondaryImage_Parms SetSecondaryImage_Parms;
	SetSecondaryImage_Parms.NewImage = NewImage;

	this->ProcessEvent ( pFnSetSecondaryImage, &SetSecondaryImage_Parms, NULL );
};

// Function APBUserInterface.cUIButton.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUIButton::SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 35562 ];

	UcUIButton_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0xC );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIButton.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIButton::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 35561 ];

	UcUIButton_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIButton.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIButton::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 35558 ];

	UcUIButton_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function APBUserInterface.cUIButton.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UcUIButton::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = (UFunction*) UObject::GObjObjects()->Data[ 35552 ];

	UcUIButton_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIButton.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIButton::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 35549 ];

	UcUIButton_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIButton.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UcUIButton::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 35546 ];

	UcUIButton_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function APBUserInterface.cUIButton.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UcUIButton::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 35543 ];

	UcUIButton_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIThumbnailList.OnChangeThumbnailListPage
// [0x00020002] 
// Parameters infos:
// class UcUIAction_ChangeThumbnailListPage* Action                         ( CPF_Parm )

void UcUIThumbnailList::OnChangeThumbnailListPage ( class UcUIAction_ChangeThumbnailListPage* Action )
{
	static UFunction* pFnOnChangeThumbnailListPage = NULL;

	if ( ! pFnOnChangeThumbnailListPage )
		pFnOnChangeThumbnailListPage = (UFunction*) UObject::GObjObjects()->Data[ 39725 ];

	UcUIThumbnailList_execOnChangeThumbnailListPage_Parms OnChangeThumbnailListPage_Parms;
	OnChangeThumbnailListPage_Parms.Action = Action;

	this->ProcessEvent ( pFnOnChangeThumbnailListPage, &OnChangeThumbnailListPage_Parms, NULL );
};

// Function APBUserInterface.cUIThumbnailList.OnSetListIndex
// [0x00080003] ( FUNC_Final )
// Parameters infos:
// class UUIAction_SetListIndex*  Action                         ( CPF_Parm )

void UcUIThumbnailList::OnSetListIndex ( class UUIAction_SetListIndex* Action )
{
	static UFunction* pFnOnSetListIndex = NULL;

	if ( ! pFnOnSetListIndex )
		pFnOnSetListIndex = (UFunction*) UObject::GObjObjects()->Data[ 39722 ];

	UcUIThumbnailList_execOnSetListIndex_Parms OnSetListIndex_Parms;
	OnSetListIndex_Parms.Action = Action;

	this->ProcessEvent ( pFnOnSetListIndex, &OnSetListIndex_Parms, NULL );
};

// Function APBUserInterface.cUIThumbnailList.SelectItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nIndex                         ( CPF_Parm )

bool UcUIThumbnailList::SelectItem ( int nIndex )
{
	static UFunction* pFnSelectItem = NULL;

	if ( ! pFnSelectItem )
		pFnSelectItem = (UFunction*) UObject::GObjObjects()->Data[ 39719 ];

	UcUIThumbnailList_execSelectItem_Parms SelectItem_Parms;
	SelectItem_Parms.nIndex = nIndex;

	pFnSelectItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectItem, &SelectItem_Parms, NULL );

	pFnSelectItem->FunctionFlags |= 0x400;

	return SelectItem_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetInfoTextHeight
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UcUIThumbnailList::GetInfoTextHeight ( )
{
	static UFunction* pFnGetInfoTextHeight = NULL;

	if ( ! pFnGetInfoTextHeight )
		pFnGetInfoTextHeight = (UFunction*) UObject::GObjObjects()->Data[ 39717 ];

	UcUIThumbnailList_execGetInfoTextHeight_Parms GetInfoTextHeight_Parms;

	pFnGetInfoTextHeight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInfoTextHeight, &GetInfoTextHeight_Parms, NULL );

	pFnGetInfoTextHeight->FunctionFlags |= 0x400;

	return GetInfoTextHeight_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetImageHeight
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bIncludeText                   ( CPF_OptionalParm | CPF_Parm )

float UcUIThumbnailList::GetImageHeight ( unsigned long bIncludeText )
{
	static UFunction* pFnGetImageHeight = NULL;

	if ( ! pFnGetImageHeight )
		pFnGetImageHeight = (UFunction*) UObject::GObjObjects()->Data[ 39714 ];

	UcUIThumbnailList_execGetImageHeight_Parms GetImageHeight_Parms;
	GetImageHeight_Parms.bIncludeText = bIncludeText;

	pFnGetImageHeight->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetImageHeight, &GetImageHeight_Parms, NULL );

	pFnGetImageHeight->FunctionFlags |= 0x400;

	return GetImageHeight_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetImageWidth
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UcUIThumbnailList::GetImageWidth ( )
{
	static UFunction* pFnGetImageWidth = NULL;

	if ( ! pFnGetImageWidth )
		pFnGetImageWidth = (UFunction*) UObject::GObjObjects()->Data[ 39712 ];

	UcUIThumbnailList_execGetImageWidth_Parms GetImageWidth_Parms;

	pFnGetImageWidth->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetImageWidth, &GetImageWidth_Parms, NULL );

	pFnGetImageWidth->FunctionFlags |= 0x400;

	return GetImageWidth_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetNumItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIThumbnailList::GetNumItems ( )
{
	static UFunction* pFnGetNumItems = NULL;

	if ( ! pFnGetNumItems )
		pFnGetNumItems = (UFunction*) UObject::GObjObjects()->Data[ 39710 ];

	UcUIThumbnailList_execGetNumItems_Parms GetNumItems_Parms;

	pFnGetNumItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumItems, &GetNumItems_Parms, NULL );

	pFnGetNumItems->FunctionFlags |= 0x400;

	return GetNumItems_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetNumVisibleItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIThumbnailList::GetNumVisibleItems ( )
{
	static UFunction* pFnGetNumVisibleItems = NULL;

	if ( ! pFnGetNumVisibleItems )
		pFnGetNumVisibleItems = (UFunction*) UObject::GObjObjects()->Data[ 39708 ];

	UcUIThumbnailList_execGetNumVisibleItems_Parms GetNumVisibleItems_Parms;

	pFnGetNumVisibleItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumVisibleItems, &GetNumVisibleItems_Parms, NULL );

	pFnGetNumVisibleItems->FunctionFlags |= 0x400;

	return GetNumVisibleItems_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.ChangePage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nDelta                         ( CPF_Parm )

void UcUIThumbnailList::ChangePage ( int nDelta )
{
	static UFunction* pFnChangePage = NULL;

	if ( ! pFnChangePage )
		pFnChangePage = (UFunction*) UObject::GObjObjects()->Data[ 39706 ];

	UcUIThumbnailList_execChangePage_Parms ChangePage_Parms;
	ChangePage_Parms.nDelta = nDelta;

	pFnChangePage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangePage, &ChangePage_Parms, NULL );

	pFnChangePage->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIThumbnailList.GetCurrentItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIThumbnailList::GetCurrentItem ( )
{
	static UFunction* pFnGetCurrentItem = NULL;

	if ( ! pFnGetCurrentItem )
		pFnGetCurrentItem = (UFunction*) UObject::GObjObjects()->Data[ 39704 ];

	UcUIThumbnailList_execGetCurrentItem_Parms GetCurrentItem_Parms;

	pFnGetCurrentItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentItem, &GetCurrentItem_Parms, NULL );

	pFnGetCurrentItem->FunctionFlags |= 0x400;

	return GetCurrentItem_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetCurrentPage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIThumbnailList::GetCurrentPage ( )
{
	static UFunction* pFnGetCurrentPage = NULL;

	if ( ! pFnGetCurrentPage )
		pFnGetCurrentPage = (UFunction*) UObject::GObjObjects()->Data[ 39702 ];

	UcUIThumbnailList_execGetCurrentPage_Parms GetCurrentPage_Parms;

	pFnGetCurrentPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentPage, &GetCurrentPage_Parms, NULL );

	pFnGetCurrentPage->FunctionFlags |= 0x400;

	return GetCurrentPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetNumPages
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIThumbnailList::GetNumPages ( )
{
	static UFunction* pFnGetNumPages = NULL;

	if ( ! pFnGetNumPages )
		pFnGetNumPages = (UFunction*) UObject::GObjObjects()->Data[ 39700 ];

	UcUIThumbnailList_execGetNumPages_Parms GetNumPages_Parms;

	pFnGetNumPages->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumPages, &GetNumPages_Parms, NULL );

	pFnGetNumPages->FunctionFlags |= 0x400;

	return GetNumPages_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetNumRows
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIThumbnailList::GetNumRows ( )
{
	static UFunction* pFnGetNumRows = NULL;

	if ( ! pFnGetNumRows )
		pFnGetNumRows = (UFunction*) UObject::GObjObjects()->Data[ 39698 ];

	UcUIThumbnailList_execGetNumRows_Parms GetNumRows_Parms;

	pFnGetNumRows->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumRows, &GetNumRows_Parms, NULL );

	pFnGetNumRows->FunctionFlags |= 0x400;

	return GetNumRows_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetNumCols
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIThumbnailList::GetNumCols ( )
{
	static UFunction* pFnGetNumCols = NULL;

	if ( ! pFnGetNumCols )
		pFnGetNumCols = (UFunction*) UObject::GObjObjects()->Data[ 39696 ];

	UcUIThumbnailList_execGetNumCols_Parms GetNumCols_Parms;

	pFnGetNumCols->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumCols, &GetNumCols_Parms, NULL );

	pFnGetNumCols->FunctionFlags |= 0x400;

	return GetNumCols_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.OnScrollBarSpaceClicked
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIScrollbar*            Sender                         ( CPF_Parm )
// float                          PositionPerc                   ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

void UcUIThumbnailList::OnScrollBarSpaceClicked ( class UUIScrollbar* Sender, float PositionPerc, int PlayerIndex )
{
	static UFunction* pFnOnScrollBarSpaceClicked = NULL;

	if ( ! pFnOnScrollBarSpaceClicked )
		pFnOnScrollBarSpaceClicked = (UFunction*) UObject::GObjObjects()->Data[ 39692 ];

	UcUIThumbnailList_execOnScrollBarSpaceClicked_Parms OnScrollBarSpaceClicked_Parms;
	OnScrollBarSpaceClicked_Parms.Sender = Sender;
	OnScrollBarSpaceClicked_Parms.PositionPerc = PositionPerc;
	OnScrollBarSpaceClicked_Parms.PlayerIndex = PlayerIndex;

	pFnOnScrollBarSpaceClicked->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnScrollBarSpaceClicked, &OnScrollBarSpaceClicked_Parms, NULL );

	pFnOnScrollBarSpaceClicked->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIThumbnailList.OnScrollBarMoved
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScrollbar*            Sender                         ( CPF_Parm )
// float                          PositionChange                 ( CPF_Parm )
// unsigned long                  bPositionMaxed                 ( CPF_OptionalParm | CPF_Parm )

bool UcUIThumbnailList::OnScrollBarMoved ( class UUIScrollbar* Sender, float PositionChange, unsigned long bPositionMaxed )
{
	static UFunction* pFnOnScrollBarMoved = NULL;

	if ( ! pFnOnScrollBarMoved )
		pFnOnScrollBarMoved = (UFunction*) UObject::GObjObjects()->Data[ 39687 ];

	UcUIThumbnailList_execOnScrollBarMoved_Parms OnScrollBarMoved_Parms;
	OnScrollBarMoved_Parms.Sender = Sender;
	OnScrollBarMoved_Parms.PositionChange = PositionChange;
	OnScrollBarMoved_Parms.bPositionMaxed = bPositionMaxed;

	pFnOnScrollBarMoved->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnScrollBarMoved, &OnScrollBarMoved_Parms, NULL );

	pFnOnScrollBarMoved->FunctionFlags |= 0x400;

	return OnScrollBarMoved_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.SaveSubscriberValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUIThumbnailList::SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 39682 ];

	UcUIThumbnailList_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0xC );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UcUIThumbnailList::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 39681 ];

	UcUIThumbnailList_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIThumbnailList.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIThumbnailList::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 39678 ];

	UcUIThumbnailList_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function APBUserInterface.cUIThumbnailList.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UcUIThumbnailList::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = (UFunction*) UObject::GObjObjects()->Data[ 39672 ];

	UcUIThumbnailList_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIThumbnailList.RefreshSubscriberValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIThumbnailList::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 39669 ];

	UcUIThumbnailList_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.GetDataStoreBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UcUIThumbnailList::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 39666 ];

	UcUIThumbnailList_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function APBUserInterface.cUIThumbnailList.SetDataStoreBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UcUIThumbnailList::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 39663 ];

	UcUIThumbnailList_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUICond_DoShowGameFlowScene.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUICond_DoShowGameFlowScene::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 35653 ];

	UcUICond_DoShowGameFlowScene_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.PreviewMissionStageDisable
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::PreviewMissionStageDisable ( )
{
	static UFunction* pFnPreviewMissionStageDisable = NULL;

	if ( ! pFnPreviewMissionStageDisable )
		pFnPreviewMissionStageDisable = (UFunction*) UObject::GObjObjects()->Data[ 35792 ];

	UcUIConsoleCommands_execPreviewMissionStageDisable_Parms PreviewMissionStageDisable_Parms;

	pFnPreviewMissionStageDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPreviewMissionStageDisable, &PreviewMissionStageDisable_Parms, NULL );

	pFnPreviewMissionStageDisable->FunctionFlags |= 0x400;

	return PreviewMissionStageDisable_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.PreviewMissionStage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sMissionTemplate               ( CPF_Parm | CPF_NeedCtorLink )
// int                            nStage                         ( CPF_Parm )
// unsigned long                  bOpposition                    ( CPF_OptionalParm | CPF_Parm )
// struct FString                 sFaction                       ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UcUIConsoleCommands::PreviewMissionStage ( struct FString sMissionTemplate, int nStage, unsigned long bOpposition, struct FString sFaction )
{
	static UFunction* pFnPreviewMissionStage = NULL;

	if ( ! pFnPreviewMissionStage )
		pFnPreviewMissionStage = (UFunction*) UObject::GObjObjects()->Data[ 35786 ];

	UcUIConsoleCommands_execPreviewMissionStage_Parms PreviewMissionStage_Parms;
	memcpy ( &PreviewMissionStage_Parms.sMissionTemplate, &sMissionTemplate, 0xC );
	PreviewMissionStage_Parms.nStage = nStage;
	PreviewMissionStage_Parms.bOpposition = bOpposition;
	memcpy ( &PreviewMissionStage_Parms.sFaction, &sFaction, 0xC );

	pFnPreviewMissionStage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPreviewMissionStage, &PreviewMissionStage_Parms, NULL );

	pFnPreviewMissionStage->FunctionFlags |= 0x400;

	return PreviewMissionStage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.TiledScreenShot
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::TiledScreenShot ( )
{
	static UFunction* pFnTiledScreenShot = NULL;

	if ( ! pFnTiledScreenShot )
		pFnTiledScreenShot = (UFunction*) UObject::GObjObjects()->Data[ 35784 ];

	UcUIConsoleCommands_execTiledScreenShot_Parms TiledScreenShot_Parms;

	pFnTiledScreenShot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTiledScreenShot, &TiledScreenShot_Parms, NULL );

	pFnTiledScreenShot->FunctionFlags |= 0x400;

	return TiledScreenShot_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ScreenShot
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ScreenShot ( )
{
	static UFunction* pFnScreenShot = NULL;

	if ( ! pFnScreenShot )
		pFnScreenShot = (UFunction*) UObject::GObjObjects()->Data[ 35782 ];

	UcUIConsoleCommands_execScreenShot_Parms ScreenShot_Parms;

	pFnScreenShot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnScreenShot, &ScreenShot_Parms, NULL );

	pFnScreenShot->FunctionFlags |= 0x400;

	return ScreenShot_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ChangeLanguage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// struct FString                 sNewLanguage                   ( CPF_Parm | CPF_NeedCtorLink )

void UcUIConsoleCommands::ChangeLanguage ( struct FString sNewLanguage )
{
	static UFunction* pFnChangeLanguage = NULL;

	if ( ! pFnChangeLanguage )
		pFnChangeLanguage = (UFunction*) UObject::GObjObjects()->Data[ 35780 ];

	UcUIConsoleCommands_execChangeLanguage_Parms ChangeLanguage_Parms;
	memcpy ( &ChangeLanguage_Parms.sNewLanguage, &sNewLanguage, 0xC );

	pFnChangeLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeLanguage, &ChangeLanguage_Parms, NULL );

	pFnChangeLanguage->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIConsoleCommands.ResetPopupCounters
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIConsoleCommands::ResetPopupCounters ( )
{
	static UFunction* pFnResetPopupCounters = NULL;

	if ( ! pFnResetPopupCounters )
		pFnResetPopupCounters = (UFunction*) UObject::GObjObjects()->Data[ 35779 ];

	UcUIConsoleCommands_execResetPopupCounters_Parms ResetPopupCounters_Parms;

	pFnResetPopupCounters->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetPopupCounters, &ResetPopupCounters_Parms, NULL );

	pFnResetPopupCounters->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIConsoleCommands.TogglePopupDialogTool
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIConsoleCommands::TogglePopupDialogTool ( )
{
	static UFunction* pFnTogglePopupDialogTool = NULL;

	if ( ! pFnTogglePopupDialogTool )
		pFnTogglePopupDialogTool = (UFunction*) UObject::GObjObjects()->Data[ 35778 ];

	UcUIConsoleCommands_execTogglePopupDialogTool_Parms TogglePopupDialogTool_Parms;

	pFnTogglePopupDialogTool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTogglePopupDialogTool, &TogglePopupDialogTool_Parms, NULL );

	pFnTogglePopupDialogTool->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIConsoleCommands.TogglePopupCues
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIConsoleCommands::TogglePopupCues ( )
{
	static UFunction* pFnTogglePopupCues = NULL;

	if ( ! pFnTogglePopupCues )
		pFnTogglePopupCues = (UFunction*) UObject::GObjObjects()->Data[ 35777 ];

	UcUIConsoleCommands_execTogglePopupCues_Parms TogglePopupCues_Parms;

	pFnTogglePopupCues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTogglePopupCues, &TogglePopupCues_Parms, NULL );

	pFnTogglePopupCues->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleTooltipTool
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIConsoleCommands::ToggleTooltipTool ( )
{
	static UFunction* pFnToggleTooltipTool = NULL;

	if ( ! pFnToggleTooltipTool )
		pFnToggleTooltipTool = (UFunction*) UObject::GObjObjects()->Data[ 35776 ];

	UcUIConsoleCommands_execToggleTooltipTool_Parms ToggleTooltipTool_Parms;

	pFnToggleTooltipTool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleTooltipTool, &ToggleTooltipTool_Parms, NULL );

	pFnToggleTooltipTool->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIConsoleCommands.OpenArmasStore
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sSDDURLTag                     ( CPF_Parm | CPF_NeedCtorLink )

bool UcUIConsoleCommands::OpenArmasStore ( struct FString sSDDURLTag )
{
	static UFunction* pFnOpenArmasStore = NULL;

	if ( ! pFnOpenArmasStore )
		pFnOpenArmasStore = (UFunction*) UObject::GObjObjects()->Data[ 35773 ];

	UcUIConsoleCommands_execOpenArmasStore_Parms OpenArmasStore_Parms;
	memcpy ( &OpenArmasStore_Parms.sSDDURLTag, &sSDDURLTag, 0xC );

	pFnOpenArmasStore->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenArmasStore, &OpenArmasStore_Parms, NULL );

	pFnOpenArmasStore->FunctionFlags |= 0x400;

	return OpenArmasStore_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.OpenAPBSupportPage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sSDDURLTag                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bStackOnExistingScenes         ( CPF_OptionalParm | CPF_Parm )

bool UcUIConsoleCommands::OpenAPBSupportPage ( struct FString sSDDURLTag, unsigned long bStackOnExistingScenes )
{
	static UFunction* pFnOpenAPBSupportPage = NULL;

	if ( ! pFnOpenAPBSupportPage )
		pFnOpenAPBSupportPage = (UFunction*) UObject::GObjObjects()->Data[ 35769 ];

	UcUIConsoleCommands_execOpenAPBSupportPage_Parms OpenAPBSupportPage_Parms;
	memcpy ( &OpenAPBSupportPage_Parms.sSDDURLTag, &sSDDURLTag, 0xC );
	OpenAPBSupportPage_Parms.bStackOnExistingScenes = bStackOnExistingScenes;

	pFnOpenAPBSupportPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenAPBSupportPage, &OpenAPBSupportPage_Parms, NULL );

	pFnOpenAPBSupportPage->FunctionFlags |= 0x400;

	return OpenAPBSupportPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.OpenWebBrowser
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sURL                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sWebBrowser_SceneRef           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bStackOnExistingScenes         ( CPF_OptionalParm | CPF_Parm )

bool UcUIConsoleCommands::OpenWebBrowser ( struct FString sURL, struct FString sWebBrowser_SceneRef, unsigned long bStackOnExistingScenes )
{
	static UFunction* pFnOpenWebBrowser = NULL;

	if ( ! pFnOpenWebBrowser )
		pFnOpenWebBrowser = (UFunction*) UObject::GObjObjects()->Data[ 35764 ];

	UcUIConsoleCommands_execOpenWebBrowser_Parms OpenWebBrowser_Parms;
	memcpy ( &OpenWebBrowser_Parms.sURL, &sURL, 0xC );
	memcpy ( &OpenWebBrowser_Parms.sWebBrowser_SceneRef, &sWebBrowser_SceneRef, 0xC );
	OpenWebBrowser_Parms.bStackOnExistingScenes = bStackOnExistingScenes;

	pFnOpenWebBrowser->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenWebBrowser, &OpenWebBrowser_Parms, NULL );

	pFnOpenWebBrowser->FunctionFlags |= 0x400;

	return OpenWebBrowser_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.CloseContactUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::CloseContactUI ( )
{
	static UFunction* pFnCloseContactUI = NULL;

	if ( ! pFnCloseContactUI )
		pFnCloseContactUI = (UFunction*) UObject::GObjObjects()->Data[ 35762 ];

	UcUIConsoleCommands_execCloseContactUI_Parms CloseContactUI_Parms;

	pFnCloseContactUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseContactUI, &CloseContactUI_Parms, NULL );

	pFnCloseContactUI->FunctionFlags |= 0x400;

	return CloseContactUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.OpenTestContactUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sUIType                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UcUIConsoleCommands::OpenTestContactUI ( struct FString sUIType )
{
	static UFunction* pFnOpenTestContactUI = NULL;

	if ( ! pFnOpenTestContactUI )
		pFnOpenTestContactUI = (UFunction*) UObject::GObjObjects()->Data[ 35759 ];

	UcUIConsoleCommands_execOpenTestContactUI_Parms OpenTestContactUI_Parms;
	memcpy ( &OpenTestContactUI_Parms.sUIType, &sUIType, 0xC );

	pFnOpenTestContactUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenTestContactUI, &OpenTestContactUI_Parms, NULL );

	pFnOpenTestContactUI->FunctionFlags |= 0x400;

	return OpenTestContactUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.OpenContactUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sContact                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sContactRole                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UcUIConsoleCommands::OpenContactUI ( struct FString sContact, struct FString sContactRole )
{
	static UFunction* pFnOpenContactUI = NULL;

	if ( ! pFnOpenContactUI )
		pFnOpenContactUI = (UFunction*) UObject::GObjObjects()->Data[ 35755 ];

	UcUIConsoleCommands_execOpenContactUI_Parms OpenContactUI_Parms;
	memcpy ( &OpenContactUI_Parms.sContact, &sContact, 0xC );
	memcpy ( &OpenContactUI_Parms.sContactRole, &sContactRole, 0xC );

	pFnOpenContactUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenContactUI, &OpenContactUI_Parms, NULL );

	pFnOpenContactUI->FunctionFlags |= 0x400;

	return OpenContactUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMusicPlaybackUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleMusicPlaybackUI ( )
{
	static UFunction* pFnToggleMusicPlaybackUI = NULL;

	if ( ! pFnToggleMusicPlaybackUI )
		pFnToggleMusicPlaybackUI = (UFunction*) UObject::GObjObjects()->Data[ 35753 ];

	UcUIConsoleCommands_execToggleMusicPlaybackUI_Parms ToggleMusicPlaybackUI_Parms;

	pFnToggleMusicPlaybackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleMusicPlaybackUI, &ToggleMusicPlaybackUI_Parms, NULL );

	pFnToggleMusicPlaybackUI->FunctionFlags |= 0x400;

	return ToggleMusicPlaybackUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.OpenViewUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sInventoryItemType             ( CPF_Parm | CPF_NeedCtorLink )

bool UcUIConsoleCommands::OpenViewUI ( struct FString sInventoryItemType )
{
	static UFunction* pFnOpenViewUI = NULL;

	if ( ! pFnOpenViewUI )
		pFnOpenViewUI = (UFunction*) UObject::GObjObjects()->Data[ 35750 ];

	UcUIConsoleCommands_execOpenViewUI_Parms OpenViewUI_Parms;
	memcpy ( &OpenViewUI_Parms.sInventoryItemType, &sInventoryItemType, 0xC );

	pFnOpenViewUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenViewUI, &OpenViewUI_Parms, NULL );

	pFnOpenViewUI->FunctionFlags |= 0x400;

	return OpenViewUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleOptionsUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleOptionsUI ( )
{
	static UFunction* pFnToggleOptionsUI = NULL;

	if ( ! pFnToggleOptionsUI )
		pFnToggleOptionsUI = (UFunction*) UObject::GObjObjects()->Data[ 35748 ];

	UcUIConsoleCommands_execToggleOptionsUI_Parms ToggleOptionsUI_Parms;

	pFnToggleOptionsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleOptionsUI, &ToggleOptionsUI_Parms, NULL );

	pFnToggleOptionsUI->FunctionFlags |= 0x400;

	return ToggleOptionsUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleReportBugUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleReportBugUI ( )
{
	static UFunction* pFnToggleReportBugUI = NULL;

	if ( ! pFnToggleReportBugUI )
		pFnToggleReportBugUI = (UFunction*) UObject::GObjObjects()->Data[ 35746 ];

	UcUIConsoleCommands_execToggleReportBugUI_Parms ToggleReportBugUI_Parms;

	pFnToggleReportBugUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleReportBugUI, &ToggleReportBugUI_Parms, NULL );

	pFnToggleReportBugUI->FunctionFlags |= 0x400;

	return ToggleReportBugUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.FlushMarketplaceCache
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::FlushMarketplaceCache ( )
{
	static UFunction* pFnFlushMarketplaceCache = NULL;

	if ( ! pFnFlushMarketplaceCache )
		pFnFlushMarketplaceCache = (UFunction*) UObject::GObjObjects()->Data[ 35744 ];

	UcUIConsoleCommands_execFlushMarketplaceCache_Parms FlushMarketplaceCache_Parms;

	pFnFlushMarketplaceCache->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushMarketplaceCache, &FlushMarketplaceCache_Parms, NULL );

	pFnFlushMarketplaceCache->FunctionFlags |= 0x400;

	return FlushMarketplaceCache_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.Editor_OpenMarketplaceUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::Editor_OpenMarketplaceUI ( )
{
	static UFunction* pFnEditor_OpenMarketplaceUI = NULL;

	if ( ! pFnEditor_OpenMarketplaceUI )
		pFnEditor_OpenMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 35742 ];

	UcUIConsoleCommands_execEditor_OpenMarketplaceUI_Parms Editor_OpenMarketplaceUI_Parms;

	pFnEditor_OpenMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEditor_OpenMarketplaceUI, &Editor_OpenMarketplaceUI_Parms, NULL );

	pFnEditor_OpenMarketplaceUI->FunctionFlags |= 0x400;

	return Editor_OpenMarketplaceUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMarketplaceUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleMarketplaceUI ( )
{
	static UFunction* pFnToggleMarketplaceUI = NULL;

	if ( ! pFnToggleMarketplaceUI )
		pFnToggleMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 35740 ];

	UcUIConsoleCommands_execToggleMarketplaceUI_Parms ToggleMarketplaceUI_Parms;

	pFnToggleMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleMarketplaceUI, &ToggleMarketplaceUI_Parms, NULL );

	pFnToggleMarketplaceUI->FunctionFlags |= 0x400;

	return ToggleMarketplaceUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.FlushMailCache
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::FlushMailCache ( )
{
	static UFunction* pFnFlushMailCache = NULL;

	if ( ! pFnFlushMailCache )
		pFnFlushMailCache = (UFunction*) UObject::GObjObjects()->Data[ 35738 ];

	UcUIConsoleCommands_execFlushMailCache_Parms FlushMailCache_Parms;

	pFnFlushMailCache->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushMailCache, &FlushMailCache_Parms, NULL );

	pFnFlushMailCache->FunctionFlags |= 0x400;

	return FlushMailCache_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMailUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleMailUI ( )
{
	static UFunction* pFnToggleMailUI = NULL;

	if ( ! pFnToggleMailUI )
		pFnToggleMailUI = (UFunction*) UObject::GObjObjects()->Data[ 35736 ];

	UcUIConsoleCommands_execToggleMailUI_Parms ToggleMailUI_Parms;

	pFnToggleMailUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleMailUI, &ToggleMailUI_Parms, NULL );

	pFnToggleMailUI->FunctionFlags |= 0x400;

	return ToggleMailUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleTeamMgmtUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bForce                         ( CPF_OptionalParm | CPF_Parm )

bool UcUIConsoleCommands::ToggleTeamMgmtUI ( unsigned long bForce )
{
	static UFunction* pFnToggleTeamMgmtUI = NULL;

	if ( ! pFnToggleTeamMgmtUI )
		pFnToggleTeamMgmtUI = (UFunction*) UObject::GObjObjects()->Data[ 35733 ];

	UcUIConsoleCommands_execToggleTeamMgmtUI_Parms ToggleTeamMgmtUI_Parms;
	ToggleTeamMgmtUI_Parms.bForce = bForce;

	pFnToggleTeamMgmtUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleTeamMgmtUI, &ToggleTeamMgmtUI_Parms, NULL );

	pFnToggleTeamMgmtUI->FunctionFlags |= 0x400;

	return ToggleTeamMgmtUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.InternalToggleInventoryUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIConsoleCommands::InternalToggleInventoryUI ( )
{
	static UFunction* pFnInternalToggleInventoryUI = NULL;

	if ( ! pFnInternalToggleInventoryUI )
		pFnInternalToggleInventoryUI = (UFunction*) UObject::GObjObjects()->Data[ 35732 ];

	UcUIConsoleCommands_execInternalToggleInventoryUI_Parms InternalToggleInventoryUI_Parms;

	pFnInternalToggleInventoryUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInternalToggleInventoryUI, &InternalToggleInventoryUI_Parms, NULL );

	pFnInternalToggleInventoryUI->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleDeploymentInventoryUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleDeploymentInventoryUI ( )
{
	static UFunction* pFnToggleDeploymentInventoryUI = NULL;

	if ( ! pFnToggleDeploymentInventoryUI )
		pFnToggleDeploymentInventoryUI = (UFunction*) UObject::GObjObjects()->Data[ 35730 ];

	UcUIConsoleCommands_execToggleDeploymentInventoryUI_Parms ToggleDeploymentInventoryUI_Parms;

	pFnToggleDeploymentInventoryUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleDeploymentInventoryUI, &ToggleDeploymentInventoryUI_Parms, NULL );

	pFnToggleDeploymentInventoryUI->FunctionFlags |= 0x400;

	return ToggleDeploymentInventoryUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleStorageInventoryUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleStorageInventoryUI ( )
{
	static UFunction* pFnToggleStorageInventoryUI = NULL;

	if ( ! pFnToggleStorageInventoryUI )
		pFnToggleStorageInventoryUI = (UFunction*) UObject::GObjObjects()->Data[ 35728 ];

	UcUIConsoleCommands_execToggleStorageInventoryUI_Parms ToggleStorageInventoryUI_Parms;

	pFnToggleStorageInventoryUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleStorageInventoryUI, &ToggleStorageInventoryUI_Parms, NULL );

	pFnToggleStorageInventoryUI->FunctionFlags |= 0x400;

	return ToggleStorageInventoryUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleSocialUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleSocialUI ( )
{
	static UFunction* pFnToggleSocialUI = NULL;

	if ( ! pFnToggleSocialUI )
		pFnToggleSocialUI = (UFunction*) UObject::GObjObjects()->Data[ 35726 ];

	UcUIConsoleCommands_execToggleSocialUI_Parms ToggleSocialUI_Parms;

	pFnToggleSocialUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleSocialUI, &ToggleSocialUI_Parms, NULL );

	pFnToggleSocialUI->FunctionFlags |= 0x400;

	return ToggleSocialUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleScoreboard
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleScoreboard ( )
{
	static UFunction* pFnToggleScoreboard = NULL;

	if ( ! pFnToggleScoreboard )
		pFnToggleScoreboard = (UFunction*) UObject::GObjObjects()->Data[ 35724 ];

	UcUIConsoleCommands_execToggleScoreboard_Parms ToggleScoreboard_Parms;

	pFnToggleScoreboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleScoreboard, &ToggleScoreboard_Parms, NULL );

	pFnToggleScoreboard->FunctionFlags |= 0x400;

	return ToggleScoreboard_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMissionSummary
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleMissionSummary ( )
{
	static UFunction* pFnToggleMissionSummary = NULL;

	if ( ! pFnToggleMissionSummary )
		pFnToggleMissionSummary = (UFunction*) UObject::GObjObjects()->Data[ 35722 ];

	UcUIConsoleCommands_execToggleMissionSummary_Parms ToggleMissionSummary_Parms;

	pFnToggleMissionSummary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleMissionSummary, &ToggleMissionSummary_Parms, NULL );

	pFnToggleMissionSummary->FunctionFlags |= 0x400;

	return ToggleMissionSummary_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.CloseMissionSummary
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::CloseMissionSummary ( )
{
	static UFunction* pFnCloseMissionSummary = NULL;

	if ( ! pFnCloseMissionSummary )
		pFnCloseMissionSummary = (UFunction*) UObject::GObjObjects()->Data[ 35720 ];

	UcUIConsoleCommands_execCloseMissionSummary_Parms CloseMissionSummary_Parms;

	pFnCloseMissionSummary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseMissionSummary, &CloseMissionSummary_Parms, NULL );

	pFnCloseMissionSummary->FunctionFlags |= 0x400;

	return CloseMissionSummary_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.OpenMissionSummary
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::OpenMissionSummary ( )
{
	static UFunction* pFnOpenMissionSummary = NULL;

	if ( ! pFnOpenMissionSummary )
		pFnOpenMissionSummary = (UFunction*) UObject::GObjObjects()->Data[ 35718 ];

	UcUIConsoleCommands_execOpenMissionSummary_Parms OpenMissionSummary_Parms;

	pFnOpenMissionSummary->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenMissionSummary, &OpenMissionSummary_Parms, NULL );

	pFnOpenMissionSummary->FunctionFlags |= 0x400;

	return OpenMissionSummary_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleMissionJustification
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleMissionJustification ( )
{
	static UFunction* pFnToggleMissionJustification = NULL;

	if ( ! pFnToggleMissionJustification )
		pFnToggleMissionJustification = (UFunction*) UObject::GObjObjects()->Data[ 35716 ];

	UcUIConsoleCommands_execToggleMissionJustification_Parms ToggleMissionJustification_Parms;

	pFnToggleMissionJustification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleMissionJustification, &ToggleMissionJustification_Parms, NULL );

	pFnToggleMissionJustification->FunctionFlags |= 0x400;

	return ToggleMissionJustification_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.CrimeEventAlertUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bShow                          ( CPF_Parm )

bool UcUIConsoleCommands::CrimeEventAlertUI ( unsigned long bShow )
{
	static UFunction* pFnCrimeEventAlertUI = NULL;

	if ( ! pFnCrimeEventAlertUI )
		pFnCrimeEventAlertUI = (UFunction*) UObject::GObjObjects()->Data[ 35713 ];

	UcUIConsoleCommands_execCrimeEventAlertUI_Parms CrimeEventAlertUI_Parms;
	CrimeEventAlertUI_Parms.bShow = bShow;

	pFnCrimeEventAlertUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCrimeEventAlertUI, &CrimeEventAlertUI_Parms, NULL );

	pFnCrimeEventAlertUI->FunctionFlags |= 0x400;

	return CrimeEventAlertUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.InGameQuestionDeclined
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::InGameQuestionDeclined ( )
{
	static UFunction* pFnInGameQuestionDeclined = NULL;

	if ( ! pFnInGameQuestionDeclined )
		pFnInGameQuestionDeclined = (UFunction*) UObject::GObjObjects()->Data[ 35711 ];

	UcUIConsoleCommands_execInGameQuestionDeclined_Parms InGameQuestionDeclined_Parms;

	pFnInGameQuestionDeclined->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInGameQuestionDeclined, &InGameQuestionDeclined_Parms, NULL );

	pFnInGameQuestionDeclined->FunctionFlags |= 0x400;

	return InGameQuestionDeclined_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.InGameQuestionAccepted
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::InGameQuestionAccepted ( )
{
	static UFunction* pFnInGameQuestionAccepted = NULL;

	if ( ! pFnInGameQuestionAccepted )
		pFnInGameQuestionAccepted = (UFunction*) UObject::GObjObjects()->Data[ 35709 ];

	UcUIConsoleCommands_execInGameQuestionAccepted_Parms InGameQuestionAccepted_Parms;

	pFnInGameQuestionAccepted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInGameQuestionAccepted, &InGameQuestionAccepted_Parms, NULL );

	pFnInGameQuestionAccepted->FunctionFlags |= 0x400;

	return InGameQuestionAccepted_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.AddInGameQuestion
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sText                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UcUIConsoleCommands::AddInGameQuestion ( struct FString sText )
{
	static UFunction* pFnAddInGameQuestion = NULL;

	if ( ! pFnAddInGameQuestion )
		pFnAddInGameQuestion = (UFunction*) UObject::GObjObjects()->Data[ 35706 ];

	UcUIConsoleCommands_execAddInGameQuestion_Parms AddInGameQuestion_Parms;
	memcpy ( &AddInGameQuestion_Parms.sText, &sText, 0xC );

	pFnAddInGameQuestion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddInGameQuestion, &AddInGameQuestion_Parms, NULL );

	pFnAddInGameQuestion->FunctionFlags |= 0x400;

	return AddInGameQuestion_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.InvertMouse
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bInvert                        ( CPF_Parm )

bool UcUIConsoleCommands::InvertMouse ( unsigned long bInvert )
{
	static UFunction* pFnInvertMouse = NULL;

	if ( ! pFnInvertMouse )
		pFnInvertMouse = (UFunction*) UObject::GObjObjects()->Data[ 35703 ];

	UcUIConsoleCommands_execInvertMouse_Parms InvertMouse_Parms;
	InvertMouse_Parms.bInvert = bInvert;

	pFnInvertMouse->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvertMouse, &InvertMouse_Parms, NULL );

	pFnInvertMouse->FunctionFlags |= 0x400;

	return InvertMouse_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ForceWorldsOffline
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bOffline                       ( CPF_Parm )

bool UcUIConsoleCommands::ForceWorldsOffline ( unsigned long bOffline )
{
	static UFunction* pFnForceWorldsOffline = NULL;

	if ( ! pFnForceWorldsOffline )
		pFnForceWorldsOffline = (UFunction*) UObject::GObjObjects()->Data[ 35700 ];

	UcUIConsoleCommands_execForceWorldsOffline_Parms ForceWorldsOffline_Parms;
	ForceWorldsOffline_Parms.bOffline = bOffline;

	pFnForceWorldsOffline->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnForceWorldsOffline, &ForceWorldsOffline_Parms, NULL );

	pFnForceWorldsOffline->FunctionFlags |= 0x400;

	return ForceWorldsOffline_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ToggleProvingGroundsChallengesUI
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ToggleProvingGroundsChallengesUI ( )
{
	static UFunction* pFnToggleProvingGroundsChallengesUI = NULL;

	if ( ! pFnToggleProvingGroundsChallengesUI )
		pFnToggleProvingGroundsChallengesUI = (UFunction*) UObject::GObjObjects()->Data[ 35698 ];

	UcUIConsoleCommands_execToggleProvingGroundsChallengesUI_Parms ToggleProvingGroundsChallengesUI_Parms;

	pFnToggleProvingGroundsChallengesUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleProvingGroundsChallengesUI, &ToggleProvingGroundsChallengesUI_Parms, NULL );

	pFnToggleProvingGroundsChallengesUI->FunctionFlags |= 0x400;

	return ToggleProvingGroundsChallengesUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.OpenCityMap
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::OpenCityMap ( )
{
	static UFunction* pFnOpenCityMap = NULL;

	if ( ! pFnOpenCityMap )
		pFnOpenCityMap = (UFunction*) UObject::GObjObjects()->Data[ 35696 ];

	UcUIConsoleCommands_execOpenCityMap_Parms OpenCityMap_Parms;

	pFnOpenCityMap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenCityMap, &OpenCityMap_Parms, NULL );

	pFnOpenCityMap->FunctionFlags |= 0x400;

	return OpenCityMap_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.OpenLobby
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::OpenLobby ( )
{
	static UFunction* pFnOpenLobby = NULL;

	if ( ! pFnOpenLobby )
		pFnOpenLobby = (UFunction*) UObject::GObjObjects()->Data[ 35694 ];

	UcUIConsoleCommands_execOpenLobby_Parms OpenLobby_Parms;

	pFnOpenLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenLobby, &OpenLobby_Parms, NULL );

	pFnOpenLobby->FunctionFlags |= 0x400;

	return OpenLobby_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ResetEULATOSAcceptDates
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ResetEULATOSAcceptDates ( )
{
	static UFunction* pFnResetEULATOSAcceptDates = NULL;

	if ( ! pFnResetEULATOSAcceptDates )
		pFnResetEULATOSAcceptDates = (UFunction*) UObject::GObjObjects()->Data[ 35692 ];

	UcUIConsoleCommands_execResetEULATOSAcceptDates_Parms ResetEULATOSAcceptDates_Parms;

	pFnResetEULATOSAcceptDates->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetEULATOSAcceptDates, &ResetEULATOSAcceptDates_Parms, NULL );

	pFnResetEULATOSAcceptDates->FunctionFlags |= 0x400;

	return ResetEULATOSAcceptDates_Parms.ReturnValue;
};

// Function APBUserInterface.cUIConsoleCommands.ResetUserNameAndPassword
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIConsoleCommands::ResetUserNameAndPassword ( )
{
	static UFunction* pFnResetUserNameAndPassword = NULL;

	if ( ! pFnResetUserNameAndPassword )
		pFnResetUserNameAndPassword = (UFunction*) UObject::GObjObjects()->Data[ 35690 ];

	UcUIConsoleCommands_execResetUserNameAndPassword_Parms ResetUserNameAndPassword_Parms;

	pFnResetUserNameAndPassword->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResetUserNameAndPassword, &ResetUserNameAndPassword_Parms, NULL );

	pFnResetUserNameAndPassword->FunctionFlags |= 0x400;

	return ResetUserNameAndPassword_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 33105 ];

	UcUIDataStore_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore.ReleaseAssets
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore::ReleaseAssets ( )
{
	static UFunction* pFnReleaseAssets = NULL;

	if ( ! pFnReleaseAssets )
		pFnReleaseAssets = (UFunction*) UObject::GObjObjects()->Data[ 33104 ];

	UcUIDataStore_execReleaseAssets_Parms ReleaseAssets_Parms;

	pFnReleaseAssets->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReleaseAssets, &ReleaseAssets_Parms, NULL );

	pFnReleaseAssets->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore.LoadAssets
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore::LoadAssets ( )
{
	static UFunction* pFnLoadAssets = NULL;

	if ( ! pFnLoadAssets )
		pFnLoadAssets = (UFunction*) UObject::GObjObjects()->Data[ 33103 ];

	UcUIDataStore_execLoadAssets_Parms LoadAssets_Parms;

	pFnLoadAssets->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnLoadAssets, &LoadAssets_Parms, NULL );

	pFnLoadAssets->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_CharacterMenu.OnRawInputKey
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   Input                          ( CPF_Parm )

bool UcUIDataStore_CharacterMenu::OnRawInputKey ( struct FInputEventParameters Input )
{
	static UFunction* pFnOnRawInputKey = NULL;

	if ( ! pFnOnRawInputKey )
		pFnOnRawInputKey = (UFunction*) UObject::GObjObjects()->Data[ 35949 ];

	UcUIDataStore_CharacterMenu_execOnRawInputKey_Parms OnRawInputKey_Parms;
	memcpy ( &OnRawInputKey_Parms.Input, &Input, 0x20 );

	pFnOnRawInputKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRawInputKey, &OnRawInputKey_Parms, NULL );

	pFnOnRawInputKey->FunctionFlags |= 0x400;

	return OnRawInputKey_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_FileSelector.OnSelectionDone
// [0x00120000] 
// Parameters infos:

void UcUIDataStore_FileSelector::OnSelectionDone ( )
{
	static UFunction* pFnOnSelectionDone = NULL;

	if ( ! pFnOnSelectionDone )
		pFnOnSelectionDone = (UFunction*) UObject::GObjObjects()->Data[ 34807 ];

	UcUIDataStore_FileSelector_execOnSelectionDone_Parms OnSelectionDone_Parms;

	this->ProcessEvent ( pFnOnSelectionDone, &OnSelectionDone_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_FileSelector.OnSelectionCanceled
// [0x00120000] 
// Parameters infos:

void UcUIDataStore_FileSelector::OnSelectionCanceled ( )
{
	static UFunction* pFnOnSelectionCanceled = NULL;

	if ( ! pFnOnSelectionCanceled )
		pFnOnSelectionCanceled = (UFunction*) UObject::GObjObjects()->Data[ 34806 ];

	UcUIDataStore_FileSelector_execOnSelectionCanceled_Parms OnSelectionCanceled_Parms;

	this->ProcessEvent ( pFnOnSelectionCanceled, &OnSelectionCanceled_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_FileSelector.OnSelectionMade
// [0x00120000] 
// Parameters infos:
// struct FString                 sSelectedPath                  ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_FileSelector::OnSelectionMade ( struct FString sSelectedPath )
{
	static UFunction* pFnOnSelectionMade = NULL;

	if ( ! pFnOnSelectionMade )
		pFnOnSelectionMade = (UFunction*) UObject::GObjObjects()->Data[ 34803 ];

	UcUIDataStore_FileSelector_execOnSelectionMade_Parms OnSelectionMade_Parms;
	memcpy ( &OnSelectionMade_Parms.sSelectedPath, &sSelectedPath, 0xC );

	this->ProcessEvent ( pFnOnSelectionMade, &OnSelectionMade_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.GetTotalPages
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIDataStore_Fnd_GroupFinder::eventGetTotalPages ( )
{
	static UFunction* pFnGetTotalPages = NULL;

	if ( ! pFnGetTotalPages )
		pFnGetTotalPages = (UFunction*) UObject::GObjObjects()->Data[ 36288 ];

	UcUIDataStore_Fnd_GroupFinder_eventGetTotalPages_Parms GetTotalPages_Parms;

	pFnGetTotalPages->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTotalPages, &GetTotalPages_Parms, NULL );

	pFnGetTotalPages->FunctionFlags |= 0x400;

	return GetTotalPages_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.SetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nPage                          ( CPF_Parm )

bool UcUIDataStore_Fnd_GroupFinder::eventSetCurrentPage ( int nPage )
{
	static UFunction* pFnSetCurrentPage = NULL;

	if ( ! pFnSetCurrentPage )
		pFnSetCurrentPage = (UFunction*) UObject::GObjObjects()->Data[ 36285 ];

	UcUIDataStore_Fnd_GroupFinder_eventSetCurrentPage_Parms SetCurrentPage_Parms;
	SetCurrentPage_Parms.nPage = nPage;

	pFnSetCurrentPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentPage, &SetCurrentPage_Parms, NULL );

	pFnSetCurrentPage->FunctionFlags |= 0x400;

	return SetCurrentPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.GetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIDataStore_Fnd_GroupFinder::eventGetCurrentPage ( )
{
	static UFunction* pFnGetCurrentPage = NULL;

	if ( ! pFnGetCurrentPage )
		pFnGetCurrentPage = (UFunction*) UObject::GObjObjects()->Data[ 36283 ];

	UcUIDataStore_Fnd_GroupFinder_eventGetCurrentPage_Parms GetCurrentPage_Parms;

	pFnGetCurrentPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentPage, &GetCurrentPage_Parms, NULL );

	pFnGetCurrentPage->FunctionFlags |= 0x400;

	return GetCurrentPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Ordering                       ( CPF_Parm )

bool UcUIDataStore_Fnd_GroupFinder::eventSetOrdering ( struct FName Ordering )
{
	static UFunction* pFnSetOrdering = NULL;

	if ( ! pFnSetOrdering )
		pFnSetOrdering = (UFunction*) UObject::GObjObjects()->Data[ 36280 ];

	UcUIDataStore_Fnd_GroupFinder_eventSetOrdering_Parms SetOrdering_Parms;
	memcpy ( &SetOrdering_Parms.Ordering, &Ordering, 0x8 );

	pFnSetOrdering->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOrdering, &SetOrdering_Parms, NULL );

	pFnSetOrdering->FunctionFlags |= 0x400;

	return SetOrdering_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.OnListDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Fnd_GroupFinder::OnListDataChanged ( )
{
	static UFunction* pFnOnListDataChanged = NULL;

	if ( ! pFnOnListDataChanged )
		pFnOnListDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 36279 ];

	UcUIDataStore_Fnd_GroupFinder_execOnListDataChanged_Parms OnListDataChanged_Parms;

	pFnOnListDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnListDataChanged, &OnListDataChanged_Parms, NULL );

	pFnOnListDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupFinder.OnLocalEntryDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Fnd_GroupFinder::OnLocalEntryDataChanged ( )
{
	static UFunction* pFnOnLocalEntryDataChanged = NULL;

	if ( ! pFnOnLocalEntryDataChanged )
		pFnOnLocalEntryDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 36278 ];

	UcUIDataStore_Fnd_GroupFinder_execOnLocalEntryDataChanged_Parms OnLocalEntryDataChanged_Parms;

	pFnOnLocalEntryDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLocalEntryDataChanged, &OnLocalEntryDataChanged_Parms, NULL );

	pFnOnLocalEntryDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupInfo.SetSelectedGroup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nGroupUID                      ( CPF_Parm )

void UcUIDataStore_Fnd_GroupInfo::SetSelectedGroup ( int nGroupUID )
{
	static UFunction* pFnSetSelectedGroup = NULL;

	if ( ! pFnSetSelectedGroup )
		pFnSetSelectedGroup = (UFunction*) UObject::GObjObjects()->Data[ 36304 ];

	UcUIDataStore_Fnd_GroupInfo_execSetSelectedGroup_Parms SetSelectedGroup_Parms;
	SetSelectedGroup_Parms.nGroupUID = nGroupUID;

	pFnSetSelectedGroup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSelectedGroup, &SetSelectedGroup_Parms, NULL );

	pFnSetSelectedGroup->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Fnd_GroupInfo.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Fnd_GroupInfo::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 36303 ];

	UcUIDataStore_Fnd_GroupInfo_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.GetTotalPages
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIDataStore_Fnd_TeamFinder::eventGetTotalPages ( )
{
	static UFunction* pFnGetTotalPages = NULL;

	if ( ! pFnGetTotalPages )
		pFnGetTotalPages = (UFunction*) UObject::GObjObjects()->Data[ 36343 ];

	UcUIDataStore_Fnd_TeamFinder_eventGetTotalPages_Parms GetTotalPages_Parms;

	pFnGetTotalPages->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTotalPages, &GetTotalPages_Parms, NULL );

	pFnGetTotalPages->FunctionFlags |= 0x400;

	return GetTotalPages_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.SetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nPage                          ( CPF_Parm )

bool UcUIDataStore_Fnd_TeamFinder::eventSetCurrentPage ( int nPage )
{
	static UFunction* pFnSetCurrentPage = NULL;

	if ( ! pFnSetCurrentPage )
		pFnSetCurrentPage = (UFunction*) UObject::GObjObjects()->Data[ 36340 ];

	UcUIDataStore_Fnd_TeamFinder_eventSetCurrentPage_Parms SetCurrentPage_Parms;
	SetCurrentPage_Parms.nPage = nPage;

	pFnSetCurrentPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentPage, &SetCurrentPage_Parms, NULL );

	pFnSetCurrentPage->FunctionFlags |= 0x400;

	return SetCurrentPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.GetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIDataStore_Fnd_TeamFinder::eventGetCurrentPage ( )
{
	static UFunction* pFnGetCurrentPage = NULL;

	if ( ! pFnGetCurrentPage )
		pFnGetCurrentPage = (UFunction*) UObject::GObjObjects()->Data[ 36338 ];

	UcUIDataStore_Fnd_TeamFinder_eventGetCurrentPage_Parms GetCurrentPage_Parms;

	pFnGetCurrentPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentPage, &GetCurrentPage_Parms, NULL );

	pFnGetCurrentPage->FunctionFlags |= 0x400;

	return GetCurrentPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Ordering                       ( CPF_Parm )

bool UcUIDataStore_Fnd_TeamFinder::eventSetOrdering ( struct FName Ordering )
{
	static UFunction* pFnSetOrdering = NULL;

	if ( ! pFnSetOrdering )
		pFnSetOrdering = (UFunction*) UObject::GObjObjects()->Data[ 36335 ];

	UcUIDataStore_Fnd_TeamFinder_eventSetOrdering_Parms SetOrdering_Parms;
	memcpy ( &SetOrdering_Parms.Ordering, &Ordering, 0x8 );

	pFnSetOrdering->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOrdering, &SetOrdering_Parms, NULL );

	pFnSetOrdering->FunctionFlags |= 0x400;

	return SetOrdering_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.OnListDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Fnd_TeamFinder::OnListDataChanged ( )
{
	static UFunction* pFnOnListDataChanged = NULL;

	if ( ! pFnOnListDataChanged )
		pFnOnListDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 36334 ];

	UcUIDataStore_Fnd_TeamFinder_execOnListDataChanged_Parms OnListDataChanged_Parms;

	pFnOnListDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnListDataChanged, &OnListDataChanged_Parms, NULL );

	pFnOnListDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamFinder.OnLocalEntryDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Fnd_TeamFinder::OnLocalEntryDataChanged ( )
{
	static UFunction* pFnOnLocalEntryDataChanged = NULL;

	if ( ! pFnOnLocalEntryDataChanged )
		pFnOnLocalEntryDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 36333 ];

	UcUIDataStore_Fnd_TeamFinder_execOnLocalEntryDataChanged_Parms OnLocalEntryDataChanged_Parms;

	pFnOnLocalEntryDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnLocalEntryDataChanged, &OnLocalEntryDataChanged_Parms, NULL );

	pFnOnLocalEntryDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamInfo.SetSelectedTeam
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nTeamUID                       ( CPF_Parm )

void UcUIDataStore_Fnd_TeamInfo::SetSelectedTeam ( int nTeamUID )
{
	static UFunction* pFnSetSelectedTeam = NULL;

	if ( ! pFnSetSelectedTeam )
		pFnSetSelectedTeam = (UFunction*) UObject::GObjObjects()->Data[ 36360 ];

	UcUIDataStore_Fnd_TeamInfo_execSetSelectedTeam_Parms SetSelectedTeam_Parms;
	SetSelectedTeam_Parms.nTeamUID = nTeamUID;

	pFnSetSelectedTeam->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSelectedTeam, &SetSelectedTeam_Parms, NULL );

	pFnSetSelectedTeam->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Fnd_TeamInfo.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Fnd_TeamInfo::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 36359 ];

	UcUIDataStore_Fnd_TeamInfo_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_Mission.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_HUD_Mission::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36678 ];

	UcUIDataStore_HUD_Mission_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_IgnoreList.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Soc_IgnoreList::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37694 ];

	UcUIDataStore_Soc_IgnoreList_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_IgnoreList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_IgnoreList::UnregisterCallbacks ( )
{
	static UFunction* pFnUnregisterCallbacks = NULL;

	if ( ! pFnUnregisterCallbacks )
		pFnUnregisterCallbacks = (UFunction*) UObject::GObjObjects()->Data[ 37693 ];

	UcUIDataStore_Soc_IgnoreList_execUnregisterCallbacks_Parms UnregisterCallbacks_Parms;

	pFnUnregisterCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterCallbacks, &UnregisterCallbacks_Parms, NULL );

	pFnUnregisterCallbacks->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_IgnoreList.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_IgnoreList::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37692 ];

	UcUIDataStore_Soc_IgnoreList_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_RecentSideList.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Soc_RecentSideList::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37721 ];

	UcUIDataStore_Soc_RecentSideList_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_RecentSideList.OnMissionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_RecentSideList::OnMissionEnded ( )
{
	static UFunction* pFnOnMissionEnded = NULL;

	if ( ! pFnOnMissionEnded )
		pFnOnMissionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37720 ];

	UcUIDataStore_Soc_RecentSideList_execOnMissionEnded_Parms OnMissionEnded_Parms;

	pFnOnMissionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMissionEnded, &OnMissionEnded_Parms, NULL );

	pFnOnMissionEnded->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_RecentSideList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_RecentSideList::UnregisterCallbacks ( )
{
	static UFunction* pFnUnregisterCallbacks = NULL;

	if ( ! pFnUnregisterCallbacks )
		pFnUnregisterCallbacks = (UFunction*) UObject::GObjObjects()->Data[ 37719 ];

	UcUIDataStore_Soc_RecentSideList_execUnregisterCallbacks_Parms UnregisterCallbacks_Parms;

	pFnUnregisterCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterCallbacks, &UnregisterCallbacks_Parms, NULL );

	pFnUnregisterCallbacks->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_RecentSideList.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_RecentSideList::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37718 ];

	UcUIDataStore_Soc_RecentSideList_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIEvent_DistrictMapInput.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIEvent_DistrictMapInput::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38040 ];

	UcUIEvent_DistrictMapInput_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIEvent_SliderCanvasBindChanged.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIEvent_SliderCanvasBindChanged::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38057 ];

	UcUIEvent_SliderCanvasBindChanged_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIEvent_SymbolCanvasInput.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIEvent_SymbolCanvasInput::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38064 ];

	UcUIEvent_SymbolCanvasInput_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIEvent_ThumbnailListItemChanged.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIEvent_ThumbnailListItemChanged::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38069 ];

	UcUIEvent_ThumbnailListItemChanged_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIFourWay.OnSetImage
// [0x00020002] 
// Parameters infos:
// class UcUIAction_SetImage*     Action                         ( CPF_Parm )

void UcUIFourWay::OnSetImage ( class UcUIAction_SetImage* Action )
{
	static UFunction* pFnOnSetImage = NULL;

	if ( ! pFnOnSetImage )
		pFnOnSetImage = (UFunction*) UObject::GObjObjects()->Data[ 38078 ];

	UcUIFourWay_execOnSetImage_Parms OnSetImage_Parms;
	OnSetImage_Parms.Action = Action;

	this->ProcessEvent ( pFnOnSetImage, &OnSetImage_Parms, NULL );
};

// Function APBUserInterface.cUIFourWay.OnSetFourWayPosition
// [0x00020002] 
// Parameters infos:
// class UcUIAction_SetFourWayPosition* Action                         ( CPF_Parm )

void UcUIFourWay::OnSetFourWayPosition ( class UcUIAction_SetFourWayPosition* Action )
{
	static UFunction* pFnOnSetFourWayPosition = NULL;

	if ( ! pFnOnSetFourWayPosition )
		pFnOnSetFourWayPosition = (UFunction*) UObject::GObjObjects()->Data[ 38076 ];

	UcUIFourWay_execOnSetFourWayPosition_Parms OnSetFourWayPosition_Parms;
	OnSetFourWayPosition_Parms.Action = Action;

	this->ProcessEvent ( pFnOnSetFourWayPosition, &OnSetFourWayPosition_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.MS_SetDSPDebugShowBounds
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void UcUIGameSceneClient::MS_SetDSPDebugShowBounds ( unsigned long bEnabled )
{
	static UFunction* pFnMS_SetDSPDebugShowBounds = NULL;

	if ( ! pFnMS_SetDSPDebugShowBounds )
		pFnMS_SetDSPDebugShowBounds = (UFunction*) UObject::GObjObjects()->Data[ 38228 ];

	UcUIGameSceneClient_execMS_SetDSPDebugShowBounds_Parms MS_SetDSPDebugShowBounds_Parms;
	MS_SetDSPDebugShowBounds_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnMS_SetDSPDebugShowBounds, &MS_SetDSPDebugShowBounds_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.MS_RemoveAllDSPs
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UcUIGameSceneClient::MS_RemoveAllDSPs ( )
{
	static UFunction* pFnMS_RemoveAllDSPs = NULL;

	if ( ! pFnMS_RemoveAllDSPs )
		pFnMS_RemoveAllDSPs = (UFunction*) UObject::GObjObjects()->Data[ 38226 ];

	UcUIGameSceneClient_execMS_RemoveAllDSPs_Parms MS_RemoveAllDSPs_Parms;

	this->ProcessEvent ( pFnMS_RemoveAllDSPs, &MS_RemoveAllDSPs_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.MS_RemoveDSPAtIndex
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            nPageIndex                     ( CPF_Parm )
// int                            nDspIndex                      ( CPF_Parm )

void UcUIGameSceneClient::MS_RemoveDSPAtIndex ( int nPageIndex, int nDspIndex )
{
	static UFunction* pFnMS_RemoveDSPAtIndex = NULL;

	if ( ! pFnMS_RemoveDSPAtIndex )
		pFnMS_RemoveDSPAtIndex = (UFunction*) UObject::GObjObjects()->Data[ 38222 ];

	UcUIGameSceneClient_execMS_RemoveDSPAtIndex_Parms MS_RemoveDSPAtIndex_Parms;
	MS_RemoveDSPAtIndex_Parms.nPageIndex = nPageIndex;
	MS_RemoveDSPAtIndex_Parms.nDspIndex = nDspIndex;

	this->ProcessEvent ( pFnMS_RemoveDSPAtIndex, &MS_RemoveDSPAtIndex_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.MS_AddDSP
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            nPageIndex                     ( CPF_Parm )
// int                            nDspType                       ( CPF_Parm )

void UcUIGameSceneClient::MS_AddDSP ( int nPageIndex, int nDspType )
{
	static UFunction* pFnMS_AddDSP = NULL;

	if ( ! pFnMS_AddDSP )
		pFnMS_AddDSP = (UFunction*) UObject::GObjObjects()->Data[ 38218 ];

	UcUIGameSceneClient_execMS_AddDSP_Parms MS_AddDSP_Parms;
	MS_AddDSP_Parms.nPageIndex = nPageIndex;
	MS_AddDSP_Parms.nDspType = nDspType;

	this->ProcessEvent ( pFnMS_AddDSP, &MS_AddDSP_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.MS_ShowDSPPage
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            nPageIndex                     ( CPF_Parm )

void UcUIGameSceneClient::MS_ShowDSPPage ( int nPageIndex )
{
	static UFunction* pFnMS_ShowDSPPage = NULL;

	if ( ! pFnMS_ShowDSPPage )
		pFnMS_ShowDSPPage = (UFunction*) UObject::GObjObjects()->Data[ 38215 ];

	UcUIGameSceneClient_execMS_ShowDSPPage_Parms MS_ShowDSPPage_Parms;
	MS_ShowDSPPage_Parms.nPageIndex = nPageIndex;

	this->ProcessEvent ( pFnMS_ShowDSPPage, &MS_ShowDSPPage_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.MS_RemoveDSPPage
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// int                            nPageIndex                     ( CPF_Parm )

void UcUIGameSceneClient::MS_RemoveDSPPage ( int nPageIndex )
{
	static UFunction* pFnMS_RemoveDSPPage = NULL;

	if ( ! pFnMS_RemoveDSPPage )
		pFnMS_RemoveDSPPage = (UFunction*) UObject::GObjObjects()->Data[ 38212 ];

	UcUIGameSceneClient_execMS_RemoveDSPPage_Parms MS_RemoveDSPPage_Parms;
	MS_RemoveDSPPage_Parms.nPageIndex = nPageIndex;

	this->ProcessEvent ( pFnMS_RemoveDSPPage, &MS_RemoveDSPPage_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.MS_AddDSPPage
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UcUIGameSceneClient::MS_AddDSPPage ( )
{
	static UFunction* pFnMS_AddDSPPage = NULL;

	if ( ! pFnMS_AddDSPPage )
		pFnMS_AddDSPPage = (UFunction*) UObject::GObjObjects()->Data[ 38210 ];

	UcUIGameSceneClient_execMS_AddDSPPage_Parms MS_AddDSPPage_Parms;

	this->ProcessEvent ( pFnMS_AddDSPPage, &MS_AddDSPPage_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.MS_RecreateDSPPages
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void UcUIGameSceneClient::MS_RecreateDSPPages ( )
{
	static UFunction* pFnMS_RecreateDSPPages = NULL;

	if ( ! pFnMS_RecreateDSPPages )
		pFnMS_RecreateDSPPages = (UFunction*) UObject::GObjObjects()->Data[ 38208 ];

	UcUIGameSceneClient_execMS_RecreateDSPPages_Parms MS_RecreateDSPPages_Parms;

	this->ProcessEvent ( pFnMS_RecreateDSPPages, &MS_RecreateDSPPages_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.MS_GetDSPContainer
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UcUIMSDSPContainer*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UcUIMSDSPContainer* UcUIGameSceneClient::MS_GetDSPContainer ( )
{
	static UFunction* pFnMS_GetDSPContainer = NULL;

	if ( ! pFnMS_GetDSPContainer )
		pFnMS_GetDSPContainer = (UFunction*) UObject::GObjObjects()->Data[ 38204 ];

	UcUIGameSceneClient_execMS_GetDSPContainer_Parms MS_GetDSPContainer_Parms;

	this->ProcessEvent ( pFnMS_GetDSPContainer, &MS_GetDSPContainer_Parms, NULL );

	return MS_GetDSPContainer_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.MS_FindScene
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UUIScene*                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SceneName                      ( CPF_Parm )

class UUIScene* UcUIGameSceneClient::MS_FindScene ( struct FName SceneName )
{
	static UFunction* pFnMS_FindScene = NULL;

	if ( ! pFnMS_FindScene )
		pFnMS_FindScene = (UFunction*) UObject::GObjObjects()->Data[ 38200 ];

	UcUIGameSceneClient_execMS_FindScene_Parms MS_FindScene_Parms;
	memcpy ( &MS_FindScene_Parms.SceneName, &SceneName, 0x8 );

	this->ProcessEvent ( pFnMS_FindScene, &MS_FindScene_Parms, NULL );

	return MS_FindScene_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.SetTutorialFlag
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void UcUIGameSceneClient::SetTutorialFlag ( unsigned long bEnable )
{
	static UFunction* pFnSetTutorialFlag = NULL;

	if ( ! pFnSetTutorialFlag )
		pFnSetTutorialFlag = (UFunction*) UObject::GObjObjects()->Data[ 38198 ];

	UcUIGameSceneClient_execSetTutorialFlag_Parms SetTutorialFlag_Parms;
	SetTutorialFlag_Parms.bEnable = bEnable;

	pFnSetTutorialFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTutorialFlag, &SetTutorialFlag_Parms, NULL );

	pFnSetTutorialFlag->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.DisplayTutorialFlag
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::DisplayTutorialFlag ( )
{
	static UFunction* pFnDisplayTutorialFlag = NULL;

	if ( ! pFnDisplayTutorialFlag )
		pFnDisplayTutorialFlag = (UFunction*) UObject::GObjObjects()->Data[ 38197 ];

	UcUIGameSceneClient_execDisplayTutorialFlag_Parms DisplayTutorialFlag_Parms;

	pFnDisplayTutorialFlag->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisplayTutorialFlag, &DisplayTutorialFlag_Parms, NULL );

	pFnDisplayTutorialFlag->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.ListUIScenes
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::ListUIScenes ( )
{
	static UFunction* pFnListUIScenes = NULL;

	if ( ! pFnListUIScenes )
		pFnListUIScenes = (UFunction*) UObject::GObjObjects()->Data[ 38196 ];

	UcUIGameSceneClient_execListUIScenes_Parms ListUIScenes_Parms;

	pFnListUIScenes->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnListUIScenes, &ListUIScenes_Parms, NULL );

	pFnListUIScenes->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.SetMaxLum
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// float                          fMaxLum                        ( CPF_Parm )

void UcUIGameSceneClient::SetMaxLum ( float fMaxLum )
{
	static UFunction* pFnSetMaxLum = NULL;

	if ( ! pFnSetMaxLum )
		pFnSetMaxLum = (UFunction*) UObject::GObjObjects()->Data[ 38194 ];

	UcUIGameSceneClient_execSetMaxLum_Parms SetMaxLum_Parms;
	SetMaxLum_Parms.fMaxLum = fMaxLum;

	pFnSetMaxLum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMaxLum, &SetMaxLum_Parms, NULL );

	pFnSetMaxLum->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.SetMinLum
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// float                          fMinLum                        ( CPF_Parm )

void UcUIGameSceneClient::SetMinLum ( float fMinLum )
{
	static UFunction* pFnSetMinLum = NULL;

	if ( ! pFnSetMinLum )
		pFnSetMinLum = (UFunction*) UObject::GObjObjects()->Data[ 38192 ];

	UcUIGameSceneClient_execSetMinLum_Parms SetMinLum_Parms;
	SetMinLum_Parms.fMinLum = fMinLum;

	pFnSetMinLum->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMinLum, &SetMinLum_Parms, NULL );

	pFnSetMinLum->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.SetMaxSat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// float                          fMaxSat                        ( CPF_Parm )

void UcUIGameSceneClient::SetMaxSat ( float fMaxSat )
{
	static UFunction* pFnSetMaxSat = NULL;

	if ( ! pFnSetMaxSat )
		pFnSetMaxSat = (UFunction*) UObject::GObjObjects()->Data[ 38190 ];

	UcUIGameSceneClient_execSetMaxSat_Parms SetMaxSat_Parms;
	SetMaxSat_Parms.fMaxSat = fMaxSat;

	pFnSetMaxSat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMaxSat, &SetMaxSat_Parms, NULL );

	pFnSetMaxSat->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.SetMinSat
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// float                          fMinSat                        ( CPF_Parm )

void UcUIGameSceneClient::SetMinSat ( float fMinSat )
{
	static UFunction* pFnSetMinSat = NULL;

	if ( ! pFnSetMinSat )
		pFnSetMinSat = (UFunction*) UObject::GObjObjects()->Data[ 38188 ];

	UcUIGameSceneClient_execSetMinSat_Parms SetMinSat_Parms;
	SetMinSat_Parms.fMinSat = fMinSat;

	pFnSetMinSat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMinSat, &SetMinSat_Parms, NULL );

	pFnSetMinSat->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.HideEditorLoadingScreen
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::HideEditorLoadingScreen ( )
{
	static UFunction* pFnHideEditorLoadingScreen = NULL;

	if ( ! pFnHideEditorLoadingScreen )
		pFnHideEditorLoadingScreen = (UFunction*) UObject::GObjObjects()->Data[ 38187 ];

	UcUIGameSceneClient_execHideEditorLoadingScreen_Parms HideEditorLoadingScreen_Parms;

	pFnHideEditorLoadingScreen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHideEditorLoadingScreen, &HideEditorLoadingScreen_Parms, NULL );

	pFnHideEditorLoadingScreen->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.ShowEditorLoadingScreen
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::ShowEditorLoadingScreen ( )
{
	static UFunction* pFnShowEditorLoadingScreen = NULL;

	if ( ! pFnShowEditorLoadingScreen )
		pFnShowEditorLoadingScreen = (UFunction*) UObject::GObjObjects()->Data[ 38186 ];

	UcUIGameSceneClient_execShowEditorLoadingScreen_Parms ShowEditorLoadingScreen_Parms;

	pFnShowEditorLoadingScreen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowEditorLoadingScreen, &ShowEditorLoadingScreen_Parms, NULL );

	pFnShowEditorLoadingScreen->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.GenericDelegate
// [0x00120000] 
// Parameters infos:

void UcUIGameSceneClient::GenericDelegate ( )
{
	static UFunction* pFnGenericDelegate = NULL;

	if ( ! pFnGenericDelegate )
		pFnGenericDelegate = (UFunction*) UObject::GObjObjects()->Data[ 38096 ];

	UcUIGameSceneClient_execGenericDelegate_Parms GenericDelegate_Parms;

	this->ProcessEvent ( pFnGenericDelegate, &GenericDelegate_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.EnableUIPostProcess
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void UcUIGameSceneClient::EnableUIPostProcess ( unsigned long bEnable )
{
	static UFunction* pFnEnableUIPostProcess = NULL;

	if ( ! pFnEnableUIPostProcess )
		pFnEnableUIPostProcess = (UFunction*) UObject::GObjObjects()->Data[ 38184 ];

	UcUIGameSceneClient_execEnableUIPostProcess_Parms EnableUIPostProcess_Parms;
	EnableUIPostProcess_Parms.bEnable = bEnable;

	pFnEnableUIPostProcess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableUIPostProcess, &EnableUIPostProcess_Parms, NULL );

	pFnEnableUIPostProcess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.GetCurrentCustomisationStudioType
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

unsigned char UcUIGameSceneClient::GetCurrentCustomisationStudioType ( )
{
	static UFunction* pFnGetCurrentCustomisationStudioType = NULL;

	if ( ! pFnGetCurrentCustomisationStudioType )
		pFnGetCurrentCustomisationStudioType = (UFunction*) UObject::GObjObjects()->Data[ 38182 ];

	UcUIGameSceneClient_execGetCurrentCustomisationStudioType_Parms GetCurrentCustomisationStudioType_Parms;

	pFnGetCurrentCustomisationStudioType->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentCustomisationStudioType, &GetCurrentCustomisationStudioType_Parms, NULL );

	pFnGetCurrentCustomisationStudioType->FunctionFlags |= 0x400;

	return GetCurrentCustomisationStudioType_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.IsSymbolEditorOpen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::IsSymbolEditorOpen ( )
{
	static UFunction* pFnIsSymbolEditorOpen = NULL;

	if ( ! pFnIsSymbolEditorOpen )
		pFnIsSymbolEditorOpen = (UFunction*) UObject::GObjObjects()->Data[ 38180 ];

	UcUIGameSceneClient_execIsSymbolEditorOpen_Parms IsSymbolEditorOpen_Parms;

	pFnIsSymbolEditorOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsSymbolEditorOpen, &IsSymbolEditorOpen_Parms, NULL );

	pFnIsSymbolEditorOpen->FunctionFlags |= 0x400;

	return IsSymbolEditorOpen_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.IsCustomisationStudioOpen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::IsCustomisationStudioOpen ( )
{
	static UFunction* pFnIsCustomisationStudioOpen = NULL;

	if ( ! pFnIsCustomisationStudioOpen )
		pFnIsCustomisationStudioOpen = (UFunction*) UObject::GObjObjects()->Data[ 38178 ];

	UcUIGameSceneClient_execIsCustomisationStudioOpen_Parms IsCustomisationStudioOpen_Parms;

	pFnIsCustomisationStudioOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCustomisationStudioOpen, &IsCustomisationStudioOpen_Parms, NULL );

	pFnIsCustomisationStudioOpen->FunctionFlags |= 0x400;

	return IsCustomisationStudioOpen_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.SetSymbolEditorOpen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bOpen                          ( CPF_Parm )

void UcUIGameSceneClient::SetSymbolEditorOpen ( unsigned long bOpen )
{
	static UFunction* pFnSetSymbolEditorOpen = NULL;

	if ( ! pFnSetSymbolEditorOpen )
		pFnSetSymbolEditorOpen = (UFunction*) UObject::GObjObjects()->Data[ 38176 ];

	UcUIGameSceneClient_execSetSymbolEditorOpen_Parms SetSymbolEditorOpen_Parms;
	SetSymbolEditorOpen_Parms.bOpen = bOpen;

	pFnSetSymbolEditorOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSymbolEditorOpen, &SetSymbolEditorOpen_Parms, NULL );

	pFnSetSymbolEditorOpen->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.EnableCustomisationStudio
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bEnable                        ( CPF_Parm )

void UcUIGameSceneClient::EnableCustomisationStudio ( unsigned long bEnable )
{
	static UFunction* pFnEnableCustomisationStudio = NULL;

	if ( ! pFnEnableCustomisationStudio )
		pFnEnableCustomisationStudio = (UFunction*) UObject::GObjObjects()->Data[ 38174 ];

	UcUIGameSceneClient_execEnableCustomisationStudio_Parms EnableCustomisationStudio_Parms;
	EnableCustomisationStudio_Parms.bEnable = bEnable;

	pFnEnableCustomisationStudio->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnEnableCustomisationStudio, &EnableCustomisationStudio_Parms, NULL );

	pFnEnableCustomisationStudio->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.ToggleMainScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScene*                pScene                         ( CPF_Parm )
// struct FString                 sCloseEvent                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCloseExistingScenes           ( CPF_OptionalParm | CPF_Parm )

bool UcUIGameSceneClient::ToggleMainScene ( class UUIScene* pScene, struct FString sCloseEvent, unsigned long bCloseExistingScenes )
{
	static UFunction* pFnToggleMainScene = NULL;

	if ( ! pFnToggleMainScene )
		pFnToggleMainScene = (UFunction*) UObject::GObjObjects()->Data[ 38169 ];

	UcUIGameSceneClient_execToggleMainScene_Parms ToggleMainScene_Parms;
	ToggleMainScene_Parms.pScene = pScene;
	memcpy ( &ToggleMainScene_Parms.sCloseEvent, &sCloseEvent, 0xC );
	ToggleMainScene_Parms.bCloseExistingScenes = bCloseExistingScenes;

	pFnToggleMainScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnToggleMainScene, &ToggleMainScene_Parms, NULL );

	pFnToggleMainScene->FunctionFlags |= 0x400;

	return ToggleMainScene_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.CloseMainScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScene*                pScene                         ( CPF_Parm )
// struct FString                 sCloseEvent                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UcUIGameSceneClient::CloseMainScene ( class UUIScene* pScene, struct FString sCloseEvent )
{
	static UFunction* pFnCloseMainScene = NULL;

	if ( ! pFnCloseMainScene )
		pFnCloseMainScene = (UFunction*) UObject::GObjObjects()->Data[ 38165 ];

	UcUIGameSceneClient_execCloseMainScene_Parms CloseMainScene_Parms;
	CloseMainScene_Parms.pScene = pScene;
	memcpy ( &CloseMainScene_Parms.sCloseEvent, &sCloseEvent, 0xC );

	pFnCloseMainScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseMainScene, &CloseMainScene_Parms, NULL );

	pFnCloseMainScene->FunctionFlags |= 0x400;

	return CloseMainScene_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.OpenMainScene
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScene*                pScene                         ( CPF_Parm )
// unsigned long                  bCloseExistingScenes           ( CPF_OptionalParm | CPF_Parm )
// class UUIScene*                pOpenedScene                   ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

bool UcUIGameSceneClient::OpenMainScene ( class UUIScene* pScene, unsigned long bCloseExistingScenes, class UUIScene** pOpenedScene )
{
	static UFunction* pFnOpenMainScene = NULL;

	if ( ! pFnOpenMainScene )
		pFnOpenMainScene = (UFunction*) UObject::GObjObjects()->Data[ 38160 ];

	UcUIGameSceneClient_execOpenMainScene_Parms OpenMainScene_Parms;
	OpenMainScene_Parms.pScene = pScene;
	OpenMainScene_Parms.bCloseExistingScenes = bCloseExistingScenes;

	pFnOpenMainScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenMainScene, &OpenMainScene_Parms, NULL );

	pFnOpenMainScene->FunctionFlags |= 0x400;

	if ( pOpenedScene )
		*pOpenedScene = OpenMainScene_Parms.pOpenedScene;

	return OpenMainScene_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.CloseEscapeMenu
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::CloseEscapeMenu ( )
{
	static UFunction* pFnCloseEscapeMenu = NULL;

	if ( ! pFnCloseEscapeMenu )
		pFnCloseEscapeMenu = (UFunction*) UObject::GObjObjects()->Data[ 38158 ];

	UcUIGameSceneClient_execCloseEscapeMenu_Parms CloseEscapeMenu_Parms;

	pFnCloseEscapeMenu->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseEscapeMenu, &CloseEscapeMenu_Parms, NULL );

	pFnCloseEscapeMenu->FunctionFlags |= 0x400;

	return CloseEscapeMenu_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.CloseAllMainScenes
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::CloseAllMainScenes ( )
{
	static UFunction* pFnCloseAllMainScenes = NULL;

	if ( ! pFnCloseAllMainScenes )
		pFnCloseAllMainScenes = (UFunction*) UObject::GObjObjects()->Data[ 38156 ];

	UcUIGameSceneClient_execCloseAllMainScenes_Parms CloseAllMainScenes_Parms;

	pFnCloseAllMainScenes->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseAllMainScenes, &CloseAllMainScenes_Parms, NULL );

	pFnCloseAllMainScenes->FunctionFlags |= 0x400;

	return CloseAllMainScenes_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.IsMainSceneVisible
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::IsMainSceneVisible ( )
{
	static UFunction* pFnIsMainSceneVisible = NULL;

	if ( ! pFnIsMainSceneVisible )
		pFnIsMainSceneVisible = (UFunction*) UObject::GObjObjects()->Data[ 38154 ];

	UcUIGameSceneClient_execIsMainSceneVisible_Parms IsMainSceneVisible_Parms;

	pFnIsMainSceneVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsMainSceneVisible, &IsMainSceneVisible_Parms, NULL );

	pFnIsMainSceneVisible->FunctionFlags |= 0x400;

	return IsMainSceneVisible_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.IsInventorySceneOpen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::IsInventorySceneOpen ( )
{
	static UFunction* pFnIsInventorySceneOpen = NULL;

	if ( ! pFnIsInventorySceneOpen )
		pFnIsInventorySceneOpen = (UFunction*) UObject::GObjObjects()->Data[ 38152 ];

	UcUIGameSceneClient_execIsInventorySceneOpen_Parms IsInventorySceneOpen_Parms;

	pFnIsInventorySceneOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsInventorySceneOpen, &IsInventorySceneOpen_Parms, NULL );

	pFnIsInventorySceneOpen->FunctionFlags |= 0x400;

	return IsInventorySceneOpen_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.IsMainSceneOpen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::IsMainSceneOpen ( )
{
	static UFunction* pFnIsMainSceneOpen = NULL;

	if ( ! pFnIsMainSceneOpen )
		pFnIsMainSceneOpen = (UFunction*) UObject::GObjObjects()->Data[ 38150 ];

	UcUIGameSceneClient_execIsMainSceneOpen_Parms IsMainSceneOpen_Parms;

	pFnIsMainSceneOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsMainSceneOpen, &IsMainSceneOpen_Parms, NULL );

	pFnIsMainSceneOpen->FunctionFlags |= 0x400;

	return IsMainSceneOpen_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.OnMusicStudioClosed
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::OnMusicStudioClosed ( )
{
	static UFunction* pFnOnMusicStudioClosed = NULL;

	if ( ! pFnOnMusicStudioClosed )
		pFnOnMusicStudioClosed = (UFunction*) UObject::GObjObjects()->Data[ 38149 ];

	UcUIGameSceneClient_execOnMusicStudioClosed_Parms OnMusicStudioClosed_Parms;

	pFnOnMusicStudioClosed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMusicStudioClosed, &OnMusicStudioClosed_Parms, NULL );

	pFnOnMusicStudioClosed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.OpenMusicEditor
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::OpenMusicEditor ( )
{
	static UFunction* pFnOpenMusicEditor = NULL;

	if ( ! pFnOpenMusicEditor )
		pFnOpenMusicEditor = (UFunction*) UObject::GObjObjects()->Data[ 38147 ];

	UcUIGameSceneClient_execOpenMusicEditor_Parms OpenMusicEditor_Parms;

	pFnOpenMusicEditor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenMusicEditor, &OpenMusicEditor_Parms, NULL );

	pFnOpenMusicEditor->FunctionFlags |= 0x400;

	return OpenMusicEditor_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.OnClosedMarketplaceUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::OnClosedMarketplaceUI ( )
{
	static UFunction* pFnOnClosedMarketplaceUI = NULL;

	if ( ! pFnOnClosedMarketplaceUI )
		pFnOnClosedMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 38146 ];

	UcUIGameSceneClient_execOnClosedMarketplaceUI_Parms OnClosedMarketplaceUI_Parms;

	pFnOnClosedMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnClosedMarketplaceUI, &OnClosedMarketplaceUI_Parms, NULL );

	pFnOnClosedMarketplaceUI->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.OpenMarketplaceUI
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::OpenMarketplaceUI ( )
{
	static UFunction* pFnOpenMarketplaceUI = NULL;

	if ( ! pFnOpenMarketplaceUI )
		pFnOpenMarketplaceUI = (UFunction*) UObject::GObjObjects()->Data[ 38144 ];

	UcUIGameSceneClient_execOpenMarketplaceUI_Parms OpenMarketplaceUI_Parms;

	pFnOpenMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenMarketplaceUI, &OpenMarketplaceUI_Parms, NULL );

	pFnOpenMarketplaceUI->FunctionFlags |= 0x400;

	return OpenMarketplaceUI_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.OpenClothingCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::OpenClothingCustomisation ( )
{
	static UFunction* pFnOpenClothingCustomisation = NULL;

	if ( ! pFnOpenClothingCustomisation )
		pFnOpenClothingCustomisation = (UFunction*) UObject::GObjObjects()->Data[ 38143 ];

	UcUIGameSceneClient_execOpenClothingCustomisation_Parms OpenClothingCustomisation_Parms;

	pFnOpenClothingCustomisation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenClothingCustomisation, &OpenClothingCustomisation_Parms, NULL );

	pFnOpenClothingCustomisation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.DebugOpenClothingCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::DebugOpenClothingCustomisation ( )
{
	static UFunction* pFnDebugOpenClothingCustomisation = NULL;

	if ( ! pFnDebugOpenClothingCustomisation )
		pFnDebugOpenClothingCustomisation = (UFunction*) UObject::GObjObjects()->Data[ 38142 ];

	UcUIGameSceneClient_execDebugOpenClothingCustomisation_Parms DebugOpenClothingCustomisation_Parms;

	pFnDebugOpenClothingCustomisation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDebugOpenClothingCustomisation, &DebugOpenClothingCustomisation_Parms, NULL );

	pFnDebugOpenClothingCustomisation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.OpenVehicleCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::OpenVehicleCustomisation ( )
{
	static UFunction* pFnOpenVehicleCustomisation = NULL;

	if ( ! pFnOpenVehicleCustomisation )
		pFnOpenVehicleCustomisation = (UFunction*) UObject::GObjObjects()->Data[ 38141 ];

	UcUIGameSceneClient_execOpenVehicleCustomisation_Parms OpenVehicleCustomisation_Parms;

	pFnOpenVehicleCustomisation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenVehicleCustomisation, &OpenVehicleCustomisation_Parms, NULL );

	pFnOpenVehicleCustomisation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.DebugOpenVehicleCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::DebugOpenVehicleCustomisation ( )
{
	static UFunction* pFnDebugOpenVehicleCustomisation = NULL;

	if ( ! pFnDebugOpenVehicleCustomisation )
		pFnDebugOpenVehicleCustomisation = (UFunction*) UObject::GObjObjects()->Data[ 38140 ];

	UcUIGameSceneClient_execDebugOpenVehicleCustomisation_Parms DebugOpenVehicleCustomisation_Parms;

	pFnDebugOpenVehicleCustomisation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDebugOpenVehicleCustomisation, &DebugOpenVehicleCustomisation_Parms, NULL );

	pFnDebugOpenVehicleCustomisation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.OpenCharacterCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::OpenCharacterCustomisation ( )
{
	static UFunction* pFnOpenCharacterCustomisation = NULL;

	if ( ! pFnOpenCharacterCustomisation )
		pFnOpenCharacterCustomisation = (UFunction*) UObject::GObjObjects()->Data[ 38139 ];

	UcUIGameSceneClient_execOpenCharacterCustomisation_Parms OpenCharacterCustomisation_Parms;

	pFnOpenCharacterCustomisation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenCharacterCustomisation, &OpenCharacterCustomisation_Parms, NULL );

	pFnOpenCharacterCustomisation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.DebugOpenCharacterCustomisation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::DebugOpenCharacterCustomisation ( )
{
	static UFunction* pFnDebugOpenCharacterCustomisation = NULL;

	if ( ! pFnDebugOpenCharacterCustomisation )
		pFnDebugOpenCharacterCustomisation = (UFunction*) UObject::GObjObjects()->Data[ 38138 ];

	UcUIGameSceneClient_execDebugOpenCharacterCustomisation_Parms DebugOpenCharacterCustomisation_Parms;

	pFnDebugOpenCharacterCustomisation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDebugOpenCharacterCustomisation, &DebugOpenCharacterCustomisation_Parms, NULL );

	pFnDebugOpenCharacterCustomisation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.OpenCharacterCreation
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::OpenCharacterCreation ( )
{
	static UFunction* pFnOpenCharacterCreation = NULL;

	if ( ! pFnOpenCharacterCreation )
		pFnOpenCharacterCreation = (UFunction*) UObject::GObjObjects()->Data[ 38137 ];

	UcUIGameSceneClient_execOpenCharacterCreation_Parms OpenCharacterCreation_Parms;

	pFnOpenCharacterCreation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenCharacterCreation, &OpenCharacterCreation_Parms, NULL );

	pFnOpenCharacterCreation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.OpenSymbolEditor
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIGameSceneClient::OpenSymbolEditor ( )
{
	static UFunction* pFnOpenSymbolEditor = NULL;

	if ( ! pFnOpenSymbolEditor )
		pFnOpenSymbolEditor = (UFunction*) UObject::GObjObjects()->Data[ 38135 ];

	UcUIGameSceneClient_execOpenSymbolEditor_Parms OpenSymbolEditor_Parms;

	pFnOpenSymbolEditor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenSymbolEditor, &OpenSymbolEditor_Parms, NULL );

	pFnOpenSymbolEditor->FunctionFlags |= 0x400;

	return OpenSymbolEditor_Parms.ReturnValue;
};

// Function APBUserInterface.cUIGameSceneClient.DebugOpenSymbolEditor
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::DebugOpenSymbolEditor ( )
{
	static UFunction* pFnDebugOpenSymbolEditor = NULL;

	if ( ! pFnDebugOpenSymbolEditor )
		pFnDebugOpenSymbolEditor = (UFunction*) UObject::GObjObjects()->Data[ 38134 ];

	UcUIGameSceneClient_execDebugOpenSymbolEditor_Parms DebugOpenSymbolEditor_Parms;

	pFnDebugOpenSymbolEditor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDebugOpenSymbolEditor, &DebugOpenSymbolEditor_Parms, NULL );

	pFnDebugOpenSymbolEditor->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.NotifyGameSessionEndedNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIGameSceneClient::NotifyGameSessionEndedNative ( )
{
	static UFunction* pFnNotifyGameSessionEndedNative = NULL;

	if ( ! pFnNotifyGameSessionEndedNative )
		pFnNotifyGameSessionEndedNative = (UFunction*) UObject::GObjObjects()->Data[ 38133 ];

	UcUIGameSceneClient_execNotifyGameSessionEndedNative_Parms NotifyGameSessionEndedNative_Parms;

	pFnNotifyGameSessionEndedNative->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyGameSessionEndedNative, &NotifyGameSessionEndedNative_Parms, NULL );

	pFnNotifyGameSessionEndedNative->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIGameSceneClient.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:

void UcUIGameSceneClient::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 38132 ];

	UcUIGameSceneClient_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );
};

// Function APBUserInterface.cUIGameSceneClient.FireEvent
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sEventName                     ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bActivateImmediately           ( CPF_OptionalParm | CPF_Parm )
// TArray< float >                FloatParams                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< struct FString >       StringParams                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// TArray< class UObject* >       ObjectParams                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// class UUIScreenObject*         TargetUIObject                 ( CPF_OptionalParm | CPF_Parm )
// class UObject*                 Activator                      ( CPF_OptionalParm | CPF_Parm )

bool UcUIGameSceneClient::FireEvent ( struct FString sEventName, unsigned long bActivateImmediately, TArray< float > FloatParams, TArray< struct FString > StringParams, TArray< class UObject* > ObjectParams, class UUIScreenObject* TargetUIObject, class UObject* Activator )
{
	static UFunction* pFnFireEvent = NULL;

	if ( ! pFnFireEvent )
		pFnFireEvent = (UFunction*) UObject::GObjObjects()->Data[ 38120 ];

	UcUIGameSceneClient_execFireEvent_Parms FireEvent_Parms;
	memcpy ( &FireEvent_Parms.sEventName, &sEventName, 0xC );
	FireEvent_Parms.bActivateImmediately = bActivateImmediately;
	memcpy ( &FireEvent_Parms.FloatParams, &FloatParams, 0xC );
	memcpy ( &FireEvent_Parms.StringParams, &StringParams, 0xC );
	memcpy ( &FireEvent_Parms.ObjectParams, &ObjectParams, 0xC );
	FireEvent_Parms.TargetUIObject = TargetUIObject;
	FireEvent_Parms.Activator = Activator;

	pFnFireEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFireEvent, &FireEvent_Parms, NULL );

	pFnFireEvent->FunctionFlags |= 0x400;

	return FireEvent_Parms.ReturnValue;
};

// Function APBUserInterface.cUISymbolCanvas.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUISymbolCanvas::SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 38266 ];

	UcUISymbolCanvas_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0xC );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUISymbolCanvas.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUISymbolCanvas::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 38265 ];

	UcUISymbolCanvas_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUISymbolCanvas.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUISymbolCanvas::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 38262 ];

	UcUISymbolCanvas_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function APBUserInterface.cUISymbolCanvas.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UcUISymbolCanvas::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = (UFunction*) UObject::GObjObjects()->Data[ 38256 ];

	UcUISymbolCanvas_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUISymbolCanvas.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UcUISymbolCanvas::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 38253 ];

	UcUISymbolCanvas_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUISymbolCanvas.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UcUISymbolCanvas::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 38250 ];

	UcUISymbolCanvas_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function APBUserInterface.cUISymbolCanvas.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UcUISymbolCanvas::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 38247 ];

	UcUISymbolCanvas_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIImage_DistrictMap.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUIImage_DistrictMap::SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 38296 ];

	UcUIImage_DistrictMap_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0xC );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIImage_DistrictMap.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIImage_DistrictMap::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 38295 ];

	UcUIImage_DistrictMap_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIImage_DistrictMap.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIImage_DistrictMap::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 38292 ];

	UcUIImage_DistrictMap_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function APBUserInterface.cUIImage_DistrictMap.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UcUIImage_DistrictMap::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = (UFunction*) UObject::GObjObjects()->Data[ 38286 ];

	UcUIImage_DistrictMap_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIImage_DistrictMap.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIImage_DistrictMap::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 38283 ];

	UcUIImage_DistrictMap_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIImage_DistrictMap.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UcUIImage_DistrictMap::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 38280 ];

	UcUIImage_DistrictMap_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function APBUserInterface.cUIImage_DistrictMap.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UcUIImage_DistrictMap::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 38277 ];

	UcUIImage_DistrictMap_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIImage_DistrictMap.TickAnim
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )

void UcUIImage_DistrictMap::TickAnim ( float fDeltaTime )
{
	static UFunction* pFnTickAnim = NULL;

	if ( ! pFnTickAnim )
		pFnTickAnim = (UFunction*) UObject::GObjObjects()->Data[ 38275 ];

	UcUIImage_DistrictMap_execTickAnim_Parms TickAnim_Parms;
	TickAnim_Parms.fDeltaTime = fDeltaTime;

	pFnTickAnim->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTickAnim, &TickAnim_Parms, NULL );

	pFnTickAnim->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIImage_DistrictMap.RegisterTickAnim
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIImage_DistrictMap::eventRegisterTickAnim ( )
{
	static UFunction* pFnRegisterTickAnim = NULL;

	if ( ! pFnRegisterTickAnim )
		pFnRegisterTickAnim = (UFunction*) UObject::GObjObjects()->Data[ 38273 ];

	UcUIImage_DistrictMap_eventRegisterTickAnim_Parms RegisterTickAnim_Parms;

	this->ProcessEvent ( pFnRegisterTickAnim, &RegisterTickAnim_Parms, NULL );
};

// Function APBUserInterface.cUILabelButton.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUILabelButton::SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 38351 ];

	UcUILabelButton_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0xC );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUILabelButton.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUILabelButton::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 38350 ];

	UcUILabelButton_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUILabelButton.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUILabelButton::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 38347 ];

	UcUILabelButton_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function APBUserInterface.cUILabelButton.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UcUILabelButton::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = (UFunction*) UObject::GObjObjects()->Data[ 38341 ];

	UcUILabelButton_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUILabelButton.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UcUILabelButton::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 38338 ];

	UcUILabelButton_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUILabelButton.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UcUILabelButton::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 38335 ];

	UcUILabelButton_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function APBUserInterface.cUILabelButton.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UcUILabelButton::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 38332 ];

	UcUILabelButton_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUILargeList.ClickedScrollZone
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UUIScrollbar*            Sender                         ( CPF_Parm )
// float                          PositionPerc                   ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

void UcUILargeList::ClickedScrollZone ( class UUIScrollbar* Sender, float PositionPerc, int PlayerIndex )
{
	static UFunction* pFnClickedScrollZone = NULL;

	if ( ! pFnClickedScrollZone )
		pFnClickedScrollZone = (UFunction*) UObject::GObjObjects()->Data[ 38375 ];

	UcUILargeList_execClickedScrollZone_Parms ClickedScrollZone_Parms;
	ClickedScrollZone_Parms.Sender = Sender;
	ClickedScrollZone_Parms.PositionPerc = PositionPerc;
	ClickedScrollZone_Parms.PlayerIndex = PlayerIndex;

	pFnClickedScrollZone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClickedScrollZone, &ClickedScrollZone_Parms, NULL );

	pFnClickedScrollZone->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUILargeList.ScrollVerticalPage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nPageChange                    ( CPF_Parm )

bool UcUILargeList::ScrollVerticalPage ( int nPageChange )
{
	static UFunction* pFnScrollVerticalPage = NULL;

	if ( ! pFnScrollVerticalPage )
		pFnScrollVerticalPage = (UFunction*) UObject::GObjObjects()->Data[ 38372 ];

	UcUILargeList_execScrollVerticalPage_Parms ScrollVerticalPage_Parms;
	ScrollVerticalPage_Parms.nPageChange = nPageChange;

	pFnScrollVerticalPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnScrollVerticalPage, &ScrollVerticalPage_Parms, NULL );

	pFnScrollVerticalPage->FunctionFlags |= 0x400;

	return ScrollVerticalPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUILargeList.ScrollVertical
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScrollbar*            Sender                         ( CPF_Parm )
// float                          PositionChange                 ( CPF_Parm )
// unsigned long                  bPositionMaxed                 ( CPF_OptionalParm | CPF_Parm )

bool UcUILargeList::ScrollVertical ( class UUIScrollbar* Sender, float PositionChange, unsigned long bPositionMaxed )
{
	static UFunction* pFnScrollVertical = NULL;

	if ( ! pFnScrollVertical )
		pFnScrollVertical = (UFunction*) UObject::GObjObjects()->Data[ 38367 ];

	UcUILargeList_execScrollVertical_Parms ScrollVertical_Parms;
	ScrollVertical_Parms.Sender = Sender;
	ScrollVertical_Parms.PositionChange = PositionChange;
	ScrollVertical_Parms.bPositionMaxed = bPositionMaxed;

	pFnScrollVertical->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnScrollVertical, &ScrollVertical_Parms, NULL );

	pFnScrollVertical->FunctionFlags |= 0x400;

	return ScrollVertical_Parms.ReturnValue;
};

// Function APBUserInterface.cUILargeList.GetSelectedItems
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// TArray< int >                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

TArray< int > UcUILargeList::GetSelectedItems ( )
{
	static UFunction* pFnGetSelectedItems = NULL;

	if ( ! pFnGetSelectedItems )
		pFnGetSelectedItems = (UFunction*) UObject::GObjObjects()->Data[ 38364 ];

	UcUILargeList_execGetSelectedItems_Parms GetSelectedItems_Parms;

	pFnGetSelectedItems->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetSelectedItems, &GetSelectedItems_Parms, NULL );

	pFnGetSelectedItems->FunctionFlags |= 0x400;

	return GetSelectedItems_Parms.ReturnValue;
};

// Function APBUserInterface.cUIRangeLabel.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIRangeLabel::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 39527 ];

	UcUIRangeLabel_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIScene_BaseScene.FadeScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// float                          gTargetOpacity                 ( CPF_Parm )
// float                          gTargetTime                    ( CPF_Parm )

void UcUIScene_BaseScene::eventFadeScene ( float gTargetOpacity, float gTargetTime )
{
	static UFunction* pFnFadeScene = NULL;

	if ( ! pFnFadeScene )
		pFnFadeScene = (UFunction*) UObject::GObjObjects()->Data[ 33845 ];

	UcUIScene_BaseScene_eventFadeScene_Parms FadeScene_Parms;
	FadeScene_Parms.gTargetOpacity = gTargetOpacity;
	FadeScene_Parms.gTargetTime = gTargetTime;

	this->ProcessEvent ( pFnFadeScene, &FadeScene_Parms, NULL );
};

// Function APBUserInterface.cUIScene_BaseScene.FadeCompleted
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIScene_BaseScene::eventFadeCompleted ( )
{
	static UFunction* pFnFadeCompleted = NULL;

	if ( ! pFnFadeCompleted )
		pFnFadeCompleted = (UFunction*) UObject::GObjObjects()->Data[ 33844 ];

	UcUIScene_BaseScene_eventFadeCompleted_Parms FadeCompleted_Parms;

	this->ProcessEvent ( pFnFadeCompleted, &FadeCompleted_Parms, NULL );
};

// Function APBUserInterface.cUIScene_BaseScene.FadeInactive
// [0x00020002] 
// Parameters infos:

void UcUIScene_BaseScene::FadeInactive ( )
{
	static UFunction* pFnFadeInactive = NULL;

	if ( ! pFnFadeInactive )
		pFnFadeInactive = (UFunction*) UObject::GObjObjects()->Data[ 33843 ];

	UcUIScene_BaseScene_execFadeInactive_Parms FadeInactive_Parms;

	this->ProcessEvent ( pFnFadeInactive, &FadeInactive_Parms, NULL );
};

// Function APBUserInterface.cUIScene_BaseScene.FadeOut
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIScene_BaseScene::eventFadeOut ( )
{
	static UFunction* pFnFadeOut = NULL;

	if ( ! pFnFadeOut )
		pFnFadeOut = (UFunction*) UObject::GObjObjects()->Data[ 33842 ];

	UcUIScene_BaseScene_eventFadeOut_Parms FadeOut_Parms;

	this->ProcessEvent ( pFnFadeOut, &FadeOut_Parms, NULL );
};

// Function APBUserInterface.cUIScene_BaseScene.FadeIn
// [0x00020002] 
// Parameters infos:
// unsigned long                  bResetOpacity                  ( CPF_Parm )

void UcUIScene_BaseScene::FadeIn ( unsigned long bResetOpacity )
{
	static UFunction* pFnFadeIn = NULL;

	if ( ! pFnFadeIn )
		pFnFadeIn = (UFunction*) UObject::GObjObjects()->Data[ 33840 ];

	UcUIScene_BaseScene_execFadeIn_Parms FadeIn_Parms;
	FadeIn_Parms.bResetOpacity = bResetOpacity;

	this->ProcessEvent ( pFnFadeIn, &FadeIn_Parms, NULL );
};

// Function APBUserInterface.cUIScene_BaseScene.UpdateScene
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// class AWorldInfo*              WorldInfo                      ( CPF_Parm )

void UcUIScene_BaseScene::eventUpdateScene ( float fDeltaTime, class AWorldInfo* WorldInfo )
{
	static UFunction* pFnUpdateScene = NULL;

	if ( ! pFnUpdateScene )
		pFnUpdateScene = (UFunction*) UObject::GObjObjects()->Data[ 33837 ];

	UcUIScene_BaseScene_eventUpdateScene_Parms UpdateScene_Parms;
	UpdateScene_Parms.fDeltaTime = fDeltaTime;
	UpdateScene_Parms.WorldInfo = WorldInfo;

	this->ProcessEvent ( pFnUpdateScene, &UpdateScene_Parms, NULL );
};

// Function APBUserInterface.cUIScene_BaseScene.UpdateData
// [0x00020000] 
// Parameters infos:

void UcUIScene_BaseScene::UpdateData ( )
{
	static UFunction* pFnUpdateData = NULL;

	if ( ! pFnUpdateData )
		pFnUpdateData = (UFunction*) UObject::GObjObjects()->Data[ 33836 ];

	UcUIScene_BaseScene_execUpdateData_Parms UpdateData_Parms;

	this->ProcessEvent ( pFnUpdateData, &UpdateData_Parms, NULL );
};

// Function APBUserInterface.cUIScene_BaseScene.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIScene_BaseScene::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = (UFunction*) UObject::GObjObjects()->Data[ 33835 ];

	UcUIScene_BaseScene_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function APBUserInterface.cUIScene_BaseScene.OnFadeOutCompleted
// [0x00120000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIScene_BaseScene::OnFadeOutCompleted ( )
{
	static UFunction* pFnOnFadeOutCompleted = NULL;

	if ( ! pFnOnFadeOutCompleted )
		pFnOnFadeOutCompleted = (UFunction*) UObject::GObjObjects()->Data[ 33826 ];

	UcUIScene_BaseScene_execOnFadeOutCompleted_Parms OnFadeOutCompleted_Parms;

	this->ProcessEvent ( pFnOnFadeOutCompleted, &OnFadeOutCompleted_Parms, NULL );

	return OnFadeOutCompleted_Parms.ReturnValue;
};

// Function APBUserInterface.cUIScene_CharacterSelect.UpdateScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )
// class AWorldInfo*              WorldInfo                      ( CPF_Parm )

void UcUIScene_CharacterSelect::UpdateScene ( float fDeltaTime, class AWorldInfo* WorldInfo )
{
	static UFunction* pFnUpdateScene = NULL;

	if ( ! pFnUpdateScene )
		pFnUpdateScene = (UFunction*) UObject::GObjObjects()->Data[ 39538 ];

	UcUIScene_CharacterSelect_execUpdateScene_Parms UpdateScene_Parms;
	UpdateScene_Parms.fDeltaTime = fDeltaTime;
	UpdateScene_Parms.WorldInfo = WorldInfo;

	pFnUpdateScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateScene, &UpdateScene_Parms, NULL );

	pFnUpdateScene->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIScene_CharacterSelect.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIScene_CharacterSelect::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = (UFunction*) UObject::GObjObjects()->Data[ 39535 ];

	UcUIScene_CharacterSelect_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.OnCloseMessageBoxNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIScene_MessageBox::OnCloseMessageBoxNative ( )
{
	static UFunction* pFnOnCloseMessageBoxNative = NULL;

	if ( ! pFnOnCloseMessageBoxNative )
		pFnOnCloseMessageBoxNative = (UFunction*) UObject::GObjObjects()->Data[ 33890 ];

	UcUIScene_MessageBox_execOnCloseMessageBoxNative_Parms OnCloseMessageBoxNative_Parms;

	pFnOnCloseMessageBoxNative->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCloseMessageBoxNative, &OnCloseMessageBoxNative_Parms, NULL );

	pFnOnCloseMessageBoxNative->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIScene_MessageBox.OnCloseMessageBox
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UcUIAction_CloseMessageBox* Action                         ( CPF_Parm )

void UcUIScene_MessageBox::eventOnCloseMessageBox ( class UcUIAction_CloseMessageBox* Action )
{
	static UFunction* pFnOnCloseMessageBox = NULL;

	if ( ! pFnOnCloseMessageBox )
		pFnOnCloseMessageBox = (UFunction*) UObject::GObjObjects()->Data[ 33887 ];

	UcUIScene_MessageBox_eventOnCloseMessageBox_Parms OnCloseMessageBox_Parms;
	OnCloseMessageBox_Parms.Action = Action;

	this->ProcessEvent ( pFnOnCloseMessageBox, &OnCloseMessageBox_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.SetDefaultCloseResult
// [0x00020002] 
// Parameters infos:
// unsigned char                  eMessageBoxResult              ( CPF_Parm )

void UcUIScene_MessageBox::SetDefaultCloseResult ( unsigned char eMessageBoxResult )
{
	static UFunction* pFnSetDefaultCloseResult = NULL;

	if ( ! pFnSetDefaultCloseResult )
		pFnSetDefaultCloseResult = (UFunction*) UObject::GObjObjects()->Data[ 33885 ];

	UcUIScene_MessageBox_execSetDefaultCloseResult_Parms SetDefaultCloseResult_Parms;
	SetDefaultCloseResult_Parms.eMessageBoxResult = eMessageBoxResult;

	this->ProcessEvent ( pFnSetDefaultCloseResult, &SetDefaultCloseResult_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.SetMode
// [0x00020002] 
// Parameters infos:
// unsigned char                  eMessageBoxMode                ( CPF_Parm )

void UcUIScene_MessageBox::SetMode ( unsigned char eMessageBoxMode )
{
	static UFunction* pFnSetMode = NULL;

	if ( ! pFnSetMode )
		pFnSetMode = (UFunction*) UObject::GObjObjects()->Data[ 33881 ];

	UcUIScene_MessageBox_execSetMode_Parms SetMode_Parms;
	SetMode_Parms.eMessageBoxMode = eMessageBoxMode;

	this->ProcessEvent ( pFnSetMode, &SetMode_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.ShowDisableOption
// [0x00020002] 
// Parameters infos:

void UcUIScene_MessageBox::ShowDisableOption ( )
{
	static UFunction* pFnShowDisableOption = NULL;

	if ( ! pFnShowDisableOption )
		pFnShowDisableOption = (UFunction*) UObject::GObjObjects()->Data[ 33879 ];

	UcUIScene_MessageBox_execShowDisableOption_Parms ShowDisableOption_Parms;

	this->ProcessEvent ( pFnShowDisableOption, &ShowDisableOption_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.SetCancelDatastoreBinding
// [0x00020002] 
// Parameters infos:
// struct FString                 Markup                         ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_MessageBox::SetCancelDatastoreBinding ( struct FString Markup )
{
	static UFunction* pFnSetCancelDatastoreBinding = NULL;

	if ( ! pFnSetCancelDatastoreBinding )
		pFnSetCancelDatastoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 33876 ];

	UcUIScene_MessageBox_execSetCancelDatastoreBinding_Parms SetCancelDatastoreBinding_Parms;
	memcpy ( &SetCancelDatastoreBinding_Parms.Markup, &Markup, 0xC );

	this->ProcessEvent ( pFnSetCancelDatastoreBinding, &SetCancelDatastoreBinding_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.SetNoDatastoreBinding
// [0x00020002] 
// Parameters infos:
// struct FString                 Markup                         ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_MessageBox::SetNoDatastoreBinding ( struct FString Markup )
{
	static UFunction* pFnSetNoDatastoreBinding = NULL;

	if ( ! pFnSetNoDatastoreBinding )
		pFnSetNoDatastoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 33873 ];

	UcUIScene_MessageBox_execSetNoDatastoreBinding_Parms SetNoDatastoreBinding_Parms;
	memcpy ( &SetNoDatastoreBinding_Parms.Markup, &Markup, 0xC );

	this->ProcessEvent ( pFnSetNoDatastoreBinding, &SetNoDatastoreBinding_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.SetOKYesDatastoreBinding
// [0x00020002] 
// Parameters infos:
// struct FString                 Markup                         ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_MessageBox::SetOKYesDatastoreBinding ( struct FString Markup )
{
	static UFunction* pFnSetOKYesDatastoreBinding = NULL;

	if ( ! pFnSetOKYesDatastoreBinding )
		pFnSetOKYesDatastoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 33870 ];

	UcUIScene_MessageBox_execSetOKYesDatastoreBinding_Parms SetOKYesDatastoreBinding_Parms;
	memcpy ( &SetOKYesDatastoreBinding_Parms.Markup, &Markup, 0xC );

	this->ProcessEvent ( pFnSetOKYesDatastoreBinding, &SetOKYesDatastoreBinding_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.SetMessageDatastoreBinding
// [0x00020002] 
// Parameters infos:
// struct FString                 Markup                         ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_MessageBox::SetMessageDatastoreBinding ( struct FString Markup )
{
	static UFunction* pFnSetMessageDatastoreBinding = NULL;

	if ( ! pFnSetMessageDatastoreBinding )
		pFnSetMessageDatastoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 33867 ];

	UcUIScene_MessageBox_execSetMessageDatastoreBinding_Parms SetMessageDatastoreBinding_Parms;
	memcpy ( &SetMessageDatastoreBinding_Parms.Markup, &Markup, 0xC );

	this->ProcessEvent ( pFnSetMessageDatastoreBinding, &SetMessageDatastoreBinding_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.SetTitleDatastoreBinding
// [0x00020002] 
// Parameters infos:
// struct FString                 Markup                         ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_MessageBox::SetTitleDatastoreBinding ( struct FString Markup )
{
	static UFunction* pFnSetTitleDatastoreBinding = NULL;

	if ( ! pFnSetTitleDatastoreBinding )
		pFnSetTitleDatastoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 33864 ];

	UcUIScene_MessageBox_execSetTitleDatastoreBinding_Parms SetTitleDatastoreBinding_Parms;
	memcpy ( &SetTitleDatastoreBinding_Parms.Markup, &Markup, 0xC );

	this->ProcessEvent ( pFnSetTitleDatastoreBinding, &SetTitleDatastoreBinding_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.SetMessage
// [0x00020002] 
// Parameters infos:
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_MessageBox::SetMessage ( struct FString Message )
{
	static UFunction* pFnSetMessage = NULL;

	if ( ! pFnSetMessage )
		pFnSetMessage = (UFunction*) UObject::GObjObjects()->Data[ 33861 ];

	UcUIScene_MessageBox_execSetMessage_Parms SetMessage_Parms;
	memcpy ( &SetMessage_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnSetMessage, &SetMessage_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.SetTitle
// [0x00020002] 
// Parameters infos:
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_MessageBox::SetTitle ( struct FString Title )
{
	static UFunction* pFnSetTitle = NULL;

	if ( ! pFnSetTitle )
		pFnSetTitle = (UFunction*) UObject::GObjObjects()->Data[ 33858 ];

	UcUIScene_MessageBox_execSetTitle_Parms SetTitle_Parms;
	memcpy ( &SetTitle_Parms.Title, &Title, 0xC );

	this->ProcessEvent ( pFnSetTitle, &SetTitle_Parms, NULL );
};

// Function APBUserInterface.cUIScene_MessageBox.OnBoxClosed
// [0x00120000] 
// Parameters infos:
// unsigned char                  eResult                        ( CPF_Parm )
// unsigned long                  bDisableOption                 ( CPF_Parm )

void UcUIScene_MessageBox::OnBoxClosed ( unsigned char eResult, unsigned long bDisableOption )
{
	static UFunction* pFnOnBoxClosed = NULL;

	if ( ! pFnOnBoxClosed )
		pFnOnBoxClosed = (UFunction*) UObject::GObjObjects()->Data[ 33850 ];

	UcUIScene_MessageBox_execOnBoxClosed_Parms OnBoxClosed_Parms;
	OnBoxClosed_Parms.eResult = eResult;
	OnBoxClosed_Parms.bDisableOption = bDisableOption;

	this->ProcessEvent ( pFnOnBoxClosed, &OnBoxClosed_Parms, NULL );
};

// Function APBUserInterface.cUIScene_TextEntry.OnCloseTextEntry
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UcUIAction_CloseTextEntry* Action                         ( CPF_Parm )

void UcUIScene_TextEntry::eventOnCloseTextEntry ( class UcUIAction_CloseTextEntry* Action )
{
	static UFunction* pFnOnCloseTextEntry = NULL;

	if ( ! pFnOnCloseTextEntry )
		pFnOnCloseTextEntry = (UFunction*) UObject::GObjObjects()->Data[ 33954 ];

	UcUIScene_TextEntry_eventOnCloseTextEntry_Parms OnCloseTextEntry_Parms;
	OnCloseTextEntry_Parms.Action = Action;

	this->ProcessEvent ( pFnOnCloseTextEntry, &OnCloseTextEntry_Parms, NULL );
};

// Function APBUserInterface.cUIScene_TextEntry.SetEditBoxCharacterRestrictions
// [0x00020002] 
// Parameters infos:
// unsigned char                  eCharacterRestrictions         ( CPF_Parm )

void UcUIScene_TextEntry::SetEditBoxCharacterRestrictions ( unsigned char eCharacterRestrictions )
{
	static UFunction* pFnSetEditBoxCharacterRestrictions = NULL;

	if ( ! pFnSetEditBoxCharacterRestrictions )
		pFnSetEditBoxCharacterRestrictions = (UFunction*) UObject::GObjObjects()->Data[ 33951 ];

	UcUIScene_TextEntry_execSetEditBoxCharacterRestrictions_Parms SetEditBoxCharacterRestrictions_Parms;
	SetEditBoxCharacterRestrictions_Parms.eCharacterRestrictions = eCharacterRestrictions;

	this->ProcessEvent ( pFnSetEditBoxCharacterRestrictions, &SetEditBoxCharacterRestrictions_Parms, NULL );
};

// Function APBUserInterface.cUIScene_TextEntry.SetEditBoxMaxCharacters
// [0x00020002] 
// Parameters infos:
// int                            nMaxCharacters                 ( CPF_Parm )

void UcUIScene_TextEntry::SetEditBoxMaxCharacters ( int nMaxCharacters )
{
	static UFunction* pFnSetEditBoxMaxCharacters = NULL;

	if ( ! pFnSetEditBoxMaxCharacters )
		pFnSetEditBoxMaxCharacters = (UFunction*) UObject::GObjObjects()->Data[ 33948 ];

	UcUIScene_TextEntry_execSetEditBoxMaxCharacters_Parms SetEditBoxMaxCharacters_Parms;
	SetEditBoxMaxCharacters_Parms.nMaxCharacters = nMaxCharacters;

	this->ProcessEvent ( pFnSetEditBoxMaxCharacters, &SetEditBoxMaxCharacters_Parms, NULL );
};

// Function APBUserInterface.cUIScene_TextEntry.SetMessageDatastoreBinding
// [0x00020002] 
// Parameters infos:
// struct FString                 Markup                         ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_TextEntry::SetMessageDatastoreBinding ( struct FString Markup )
{
	static UFunction* pFnSetMessageDatastoreBinding = NULL;

	if ( ! pFnSetMessageDatastoreBinding )
		pFnSetMessageDatastoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 33945 ];

	UcUIScene_TextEntry_execSetMessageDatastoreBinding_Parms SetMessageDatastoreBinding_Parms;
	memcpy ( &SetMessageDatastoreBinding_Parms.Markup, &Markup, 0xC );

	this->ProcessEvent ( pFnSetMessageDatastoreBinding, &SetMessageDatastoreBinding_Parms, NULL );
};

// Function APBUserInterface.cUIScene_TextEntry.SetInitialText
// [0x00020002] 
// Parameters infos:
// struct FString                 sInitialText                   ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_TextEntry::SetInitialText ( struct FString sInitialText )
{
	static UFunction* pFnSetInitialText = NULL;

	if ( ! pFnSetInitialText )
		pFnSetInitialText = (UFunction*) UObject::GObjObjects()->Data[ 33942 ];

	UcUIScene_TextEntry_execSetInitialText_Parms SetInitialText_Parms;
	memcpy ( &SetInitialText_Parms.sInitialText, &sInitialText, 0xC );

	this->ProcessEvent ( pFnSetInitialText, &SetInitialText_Parms, NULL );
};

// Function APBUserInterface.cUIScene_TextEntry.SetTitleDatastoreBinding
// [0x00020002] 
// Parameters infos:
// struct FString                 Markup                         ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_TextEntry::SetTitleDatastoreBinding ( struct FString Markup )
{
	static UFunction* pFnSetTitleDatastoreBinding = NULL;

	if ( ! pFnSetTitleDatastoreBinding )
		pFnSetTitleDatastoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 33939 ];

	UcUIScene_TextEntry_execSetTitleDatastoreBinding_Parms SetTitleDatastoreBinding_Parms;
	memcpy ( &SetTitleDatastoreBinding_Parms.Markup, &Markup, 0xC );

	this->ProcessEvent ( pFnSetTitleDatastoreBinding, &SetTitleDatastoreBinding_Parms, NULL );
};

// Function APBUserInterface.cUIScene_TextEntry.SetMessage
// [0x00020002] 
// Parameters infos:
// struct FString                 Message                        ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_TextEntry::SetMessage ( struct FString Message )
{
	static UFunction* pFnSetMessage = NULL;

	if ( ! pFnSetMessage )
		pFnSetMessage = (UFunction*) UObject::GObjObjects()->Data[ 33936 ];

	UcUIScene_TextEntry_execSetMessage_Parms SetMessage_Parms;
	memcpy ( &SetMessage_Parms.Message, &Message, 0xC );

	this->ProcessEvent ( pFnSetMessage, &SetMessage_Parms, NULL );
};

// Function APBUserInterface.cUIScene_TextEntry.SetTitle
// [0x00020002] 
// Parameters infos:
// struct FString                 Title                          ( CPF_Parm | CPF_NeedCtorLink )

void UcUIScene_TextEntry::SetTitle ( struct FString Title )
{
	static UFunction* pFnSetTitle = NULL;

	if ( ! pFnSetTitle )
		pFnSetTitle = (UFunction*) UObject::GObjObjects()->Data[ 33933 ];

	UcUIScene_TextEntry_execSetTitle_Parms SetTitle_Parms;
	memcpy ( &SetTitle_Parms.Title, &Title, 0xC );

	this->ProcessEvent ( pFnSetTitle, &SetTitle_Parms, NULL );
};

// Function APBUserInterface.cUIScene_TextEntry.OnBoxClosed
// [0x00120000] 
// Parameters infos:
// unsigned long                  bInAcceptOk                    ( CPF_Parm )

void UcUIScene_TextEntry::OnBoxClosed ( unsigned long bInAcceptOk )
{
	static UFunction* pFnOnBoxClosed = NULL;

	if ( ! pFnOnBoxClosed )
		pFnOnBoxClosed = (UFunction*) UObject::GObjObjects()->Data[ 33930 ];

	UcUIScene_TextEntry_execOnBoxClosed_Parms OnBoxClosed_Parms;
	OnBoxClosed_Parms.bInAcceptOk = bInAcceptOk;

	this->ProcessEvent ( pFnOnBoxClosed, &OnBoxClosed_Parms, NULL );
};

// Function APBUserInterface.cUISliderCanvas.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UcUISliderCanvas::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = (UFunction*) UObject::GObjObjects()->Data[ 39613 ];

	UcUISliderCanvas_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUISliderCanvas.SaveSubscriberValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUISliderCanvas::SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 39608 ];

	UcUISliderCanvas_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0xC );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUISliderCanvas.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUISliderCanvas::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 39605 ];

	UcUISliderCanvas_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function APBUserInterface.cUISliderCanvas.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UcUISliderCanvas::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 39602 ];

	UcUISliderCanvas_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUISliderCanvas.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UcUISliderCanvas::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 39599 ];

	UcUISliderCanvas_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function APBUserInterface.cUISliderCanvas.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UcUISliderCanvas::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 39596 ];

	UcUISliderCanvas_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUISliderCanvas.GetValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eOrientation                   ( CPF_Parm )
// unsigned long                  bPercentageValue               ( CPF_OptionalParm | CPF_Parm )

float UcUISliderCanvas::GetValue ( unsigned char eOrientation, unsigned long bPercentageValue )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 39592 ];

	UcUISliderCanvas_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.eOrientation = eOrientation;
	GetValue_Parms.bPercentageValue = bPercentageValue;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUISliderCanvas.SetValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eOrientation                   ( CPF_Parm )
// float                          NewValue                       ( CPF_Parm | CPF_CoerceParm )
// unsigned long                  bPercentageValue               ( CPF_OptionalParm | CPF_Parm )

bool UcUISliderCanvas::SetValue ( unsigned char eOrientation, float NewValue, unsigned long bPercentageValue )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 39587 ];

	UcUISliderCanvas_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.eOrientation = eOrientation;
	SetValue_Parms.NewValue = NewValue;
	SetValue_Parms.bPercentageValue = bPercentageValue;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUISliderCanvas.SetSliderDataStoreMarkup
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  eOrientation                   ( CPF_Parm )
// struct FString                 sNewMarkup                     ( CPF_Parm | CPF_NeedCtorLink )

void UcUISliderCanvas::SetSliderDataStoreMarkup ( unsigned char eOrientation, struct FString sNewMarkup )
{
	static UFunction* pFnSetSliderDataStoreMarkup = NULL;

	if ( ! pFnSetSliderDataStoreMarkup )
		pFnSetSliderDataStoreMarkup = (UFunction*) UObject::GObjObjects()->Data[ 39584 ];

	UcUISliderCanvas_execSetSliderDataStoreMarkup_Parms SetSliderDataStoreMarkup_Parms;
	SetSliderDataStoreMarkup_Parms.eOrientation = eOrientation;
	memcpy ( &SetSliderDataStoreMarkup_Parms.sNewMarkup, &sNewMarkup, 0xC );

	pFnSetSliderDataStoreMarkup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSliderDataStoreMarkup, &SetSliderDataStoreMarkup_Parms, NULL );

	pFnSetSliderDataStoreMarkup->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUISliderCanvas.OnBindSliderCanvas
// [0x00020002] 
// Parameters infos:
// class UcUIAction_BindSliderCanvas* Action                         ( CPF_Parm )

void UcUISliderCanvas::OnBindSliderCanvas ( class UcUIAction_BindSliderCanvas* Action )
{
	static UFunction* pFnOnBindSliderCanvas = NULL;

	if ( ! pFnOnBindSliderCanvas )
		pFnOnBindSliderCanvas = (UFunction*) UObject::GObjObjects()->Data[ 39582 ];

	UcUISliderCanvas_execOnBindSliderCanvas_Parms OnBindSliderCanvas_Parms;
	OnBindSliderCanvas_Parms.Action = Action;

	this->ProcessEvent ( pFnOnBindSliderCanvas, &OnBindSliderCanvas_Parms, NULL );
};

// Function APBUserInterface.iUIListOrderedElementProvider.SetOrdering
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Ordering                       ( CPF_Parm )

bool UiUIListOrderedElementProvider::eventSetOrdering ( struct FName Ordering )
{
	static UFunction* pFnSetOrdering = NULL;

	if ( ! pFnSetOrdering )
		pFnSetOrdering = (UFunction*) UObject::GObjObjects()->Data[ 39805 ];

	UiUIListOrderedElementProvider_eventSetOrdering_Parms SetOrdering_Parms;
	memcpy ( &SetOrdering_Parms.Ordering, &Ordering, 0x8 );

	this->ProcessEvent ( pFnSetOrdering, &SetOrdering_Parms, NULL );

	return SetOrdering_Parms.ReturnValue;
};

// Function APBUserInterface.iUIListPagedElementProvider.GetTotalPages
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UiUIListPagedElementProvider::eventGetTotalPages ( )
{
	static UFunction* pFnGetTotalPages = NULL;

	if ( ! pFnGetTotalPages )
		pFnGetTotalPages = (UFunction*) UObject::GObjObjects()->Data[ 39813 ];

	UiUIListPagedElementProvider_eventGetTotalPages_Parms GetTotalPages_Parms;

	this->ProcessEvent ( pFnGetTotalPages, &GetTotalPages_Parms, NULL );

	return GetTotalPages_Parms.ReturnValue;
};

// Function APBUserInterface.iUIListPagedElementProvider.SetCurrentPage
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nPage                          ( CPF_Parm )

bool UiUIListPagedElementProvider::eventSetCurrentPage ( int nPage )
{
	static UFunction* pFnSetCurrentPage = NULL;

	if ( ! pFnSetCurrentPage )
		pFnSetCurrentPage = (UFunction*) UObject::GObjObjects()->Data[ 39810 ];

	UiUIListPagedElementProvider_eventSetCurrentPage_Parms SetCurrentPage_Parms;
	SetCurrentPage_Parms.nPage = nPage;

	this->ProcessEvent ( pFnSetCurrentPage, &SetCurrentPage_Parms, NULL );

	return SetCurrentPage_Parms.ReturnValue;
};

// Function APBUserInterface.iUIListPagedElementProvider.GetCurrentPage
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UiUIListPagedElementProvider::eventGetCurrentPage ( )
{
	static UFunction* pFnGetCurrentPage = NULL;

	if ( ! pFnGetCurrentPage )
		pFnGetCurrentPage = (UFunction*) UObject::GObjObjects()->Data[ 39808 ];

	UiUIListPagedElementProvider_eventGetCurrentPage_Parms GetCurrentPage_Parms;

	this->ProcessEvent ( pFnGetCurrentPage, &GetCurrentPage_Parms, NULL );

	return GetCurrentPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_ActivateAPBRemoteEvent.OnFinishAPBRemoteEvent
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UcUIAction_FinishAPBRemoteEvent* Action                         ( CPF_Parm )

void UcUIAction_ActivateAPBRemoteEvent::OnFinishAPBRemoteEvent ( class UcUIAction_FinishAPBRemoteEvent* Action )
{
	static UFunction* pFnOnFinishAPBRemoteEvent = NULL;

	if ( ! pFnOnFinishAPBRemoteEvent )
		pFnOnFinishAPBRemoteEvent = (UFunction*) UObject::GObjObjects()->Data[ 33642 ];

	UcUIAction_ActivateAPBRemoteEvent_execOnFinishAPBRemoteEvent_Parms OnFinishAPBRemoteEvent_Parms;
	OnFinishAPBRemoteEvent_Parms.Action = Action;

	pFnOnFinishAPBRemoteEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFinishAPBRemoteEvent, &OnFinishAPBRemoteEvent_Parms, NULL );

	pFnOnFinishAPBRemoteEvent->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DisplayMessageBox.OnBoxClosed
// [0x00020002] 
// Parameters infos:
// unsigned char                  eResult                        ( CPF_Parm )
// unsigned long                  bDisableMessage                ( CPF_Parm )

void UcUIAction_DisplayMessageBox::OnBoxClosed ( unsigned char eResult, unsigned long bDisableMessage )
{
	static UFunction* pFnOnBoxClosed = NULL;

	if ( ! pFnOnBoxClosed )
		pFnOnBoxClosed = (UFunction*) UObject::GObjObjects()->Data[ 33911 ];

	UcUIAction_DisplayMessageBox_execOnBoxClosed_Parms OnBoxClosed_Parms;
	OnBoxClosed_Parms.eResult = eResult;
	OnBoxClosed_Parms.bDisableMessage = bDisableMessage;

	this->ProcessEvent ( pFnOnBoxClosed, &OnBoxClosed_Parms, NULL );
};

// Function APBUserInterface.cUIAction_DisplayMessageBox.SetupScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UcUIScene_MessageBox*    Scene                          ( CPF_Parm )

void UcUIAction_DisplayMessageBox::eventSetupScene ( class UcUIScene_MessageBox* Scene )
{
	static UFunction* pFnSetupScene = NULL;

	if ( ! pFnSetupScene )
		pFnSetupScene = (UFunction*) UObject::GObjObjects()->Data[ 33909 ];

	UcUIAction_DisplayMessageBox_eventSetupScene_Parms SetupScene_Parms;
	SetupScene_Parms.Scene = Scene;

	this->ProcessEvent ( pFnSetupScene, &SetupScene_Parms, NULL );
};

// Function APBUserInterface.cUIAction_OpenContextPanel.OnSceneDeactivated
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UUIScene*                DeactivatedScene               ( CPF_Parm )

void UcUIAction_OpenContextPanel::OnSceneDeactivated ( class UUIScene* DeactivatedScene )
{
	static UFunction* pFnOnSceneDeactivated = NULL;

	if ( ! pFnOnSceneDeactivated )
		pFnOnSceneDeactivated = (UFunction*) UObject::GObjObjects()->Data[ 34787 ];

	UcUIAction_OpenContextPanel_execOnSceneDeactivated_Parms OnSceneDeactivated_Parms;
	OnSceneDeactivated_Parms.DeactivatedScene = DeactivatedScene;

	pFnOnSceneDeactivated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSceneDeactivated, &OnSceneDeactivated_Parms, NULL );

	pFnOnSceneDeactivated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_SetDisplayPointWaypoint.OnGetHUDMarkerPosition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FVector                 Position                       ( CPF_Parm )

void UcUIAction_SetDisplayPointWaypoint::OnGetHUDMarkerPosition ( unsigned long bSuccess, struct FVector Position )
{
	static UFunction* pFnOnGetHUDMarkerPosition = NULL;

	if ( ! pFnOnGetHUDMarkerPosition )
		pFnOnGetHUDMarkerPosition = (UFunction*) UObject::GObjObjects()->Data[ 34999 ];

	UcUIAction_SetDisplayPointWaypoint_execOnGetHUDMarkerPosition_Parms OnGetHUDMarkerPosition_Parms;
	OnGetHUDMarkerPosition_Parms.bSuccess = bSuccess;
	memcpy ( &OnGetHUDMarkerPosition_Parms.Position, &Position, 0xC );

	pFnOnGetHUDMarkerPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGetHUDMarkerPosition, &OnGetHUDMarkerPosition_Parms, NULL );

	pFnOnGetHUDMarkerPosition->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cAttribute.SetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute::SetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 32868 ];

	UcAttribute_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.pObject = pObject;
	SetValue_Parms.nArrayIndex = nArrayIndex;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &SetValue_Parms.Value, 0x48 );

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute.GetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Const | CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute::GetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 32863 ];

	UcAttribute_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.pObject = pObject;
	GetValue_Parms.nArrayIndex = nArrayIndex;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &GetValue_Parms.Value, 0x48 );

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_ArrayVariable.RemoveItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_Parm )

bool UcAttribute_ArrayVariable::RemoveItem ( class UObject* pObject, int nArrayIndex )
{
	static UFunction* pFnRemoveItem = NULL;

	if ( ! pFnRemoveItem )
		pFnRemoveItem = (UFunction*) UObject::GObjObjects()->Data[ 32889 ];

	UcAttribute_ArrayVariable_execRemoveItem_Parms RemoveItem_Parms;
	RemoveItem_Parms.pObject = pObject;
	RemoveItem_Parms.nArrayIndex = nArrayIndex;

	pFnRemoveItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveItem, &RemoveItem_Parms, NULL );

	pFnRemoveItem->FunctionFlags |= 0x400;

	return RemoveItem_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_ArrayVariable.InsertZeroedItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nInsertIndex                   ( CPF_Parm )

bool UcAttribute_ArrayVariable::InsertZeroedItem ( class UObject* pObject, int nInsertIndex )
{
	static UFunction* pFnInsertZeroedItem = NULL;

	if ( ! pFnInsertZeroedItem )
		pFnInsertZeroedItem = (UFunction*) UObject::GObjObjects()->Data[ 32885 ];

	UcAttribute_ArrayVariable_execInsertZeroedItem_Parms InsertZeroedItem_Parms;
	InsertZeroedItem_Parms.pObject = pObject;
	InsertZeroedItem_Parms.nInsertIndex = nInsertIndex;

	pFnInsertZeroedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInsertZeroedItem, &InsertZeroedItem_Parms, NULL );

	pFnInsertZeroedItem->FunctionFlags |= 0x400;

	return InsertZeroedItem_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_ArrayVariable.SetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_ArrayVariable::SetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 32880 ];

	UcAttribute_ArrayVariable_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.pObject = pObject;
	SetValue_Parms.nArrayIndex = nArrayIndex;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &SetValue_Parms.Value, 0x48 );

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_ArrayVariable.GetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Const | CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_ArrayVariable::GetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 32875 ];

	UcAttribute_ArrayVariable_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.pObject = pObject;
	GetValue_Parms.nArrayIndex = nArrayIndex;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &GetValue_Parms.Value, 0x48 );

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_BaseArrayLocalisedString.SetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_BaseArrayLocalisedString::SetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 32899 ];

	UcAttribute_BaseArrayLocalisedString_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.pObject = pObject;
	SetValue_Parms.nArrayIndex = nArrayIndex;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &SetValue_Parms.Value, 0x48 );

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_BaseArrayLocalisedString.GetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Const | CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_BaseArrayLocalisedString::GetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 32894 ];

	UcAttribute_BaseArrayLocalisedString_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.pObject = pObject;
	GetValue_Parms.nArrayIndex = nArrayIndex;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &GetValue_Parms.Value, 0x48 );

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_Variable.SetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_Variable::SetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 32911 ];

	UcAttribute_Variable_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.pObject = pObject;
	SetValue_Parms.nArrayIndex = nArrayIndex;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &SetValue_Parms.Value, 0x48 );

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_Variable.GetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Const | CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_Variable::GetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 32906 ];

	UcAttribute_Variable_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.pObject = pObject;
	GetValue_Parms.nArrayIndex = nArrayIndex;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &GetValue_Parms.Value, 0x48 );

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_Colour.SetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_Colour::SetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 32921 ];

	UcAttribute_Colour_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.pObject = pObject;
	SetValue_Parms.nArrayIndex = nArrayIndex;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &SetValue_Parms.Value, 0x48 );

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_Colour.GetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Const | CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_Colour::GetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 32916 ];

	UcAttribute_Colour_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.pObject = pObject;
	GetValue_Parms.nArrayIndex = nArrayIndex;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &GetValue_Parms.Value, 0x48 );

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_FacialHair.RemoveItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_Parm )

bool UcAttribute_FacialHair::RemoveItem ( class UObject* pObject, int nArrayIndex )
{
	static UFunction* pFnRemoveItem = NULL;

	if ( ! pFnRemoveItem )
		pFnRemoveItem = (UFunction*) UObject::GObjObjects()->Data[ 32940 ];

	UcAttribute_FacialHair_execRemoveItem_Parms RemoveItem_Parms;
	RemoveItem_Parms.pObject = pObject;
	RemoveItem_Parms.nArrayIndex = nArrayIndex;

	pFnRemoveItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveItem, &RemoveItem_Parms, NULL );

	pFnRemoveItem->FunctionFlags |= 0x400;

	return RemoveItem_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_FacialHair.InsertZeroedItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nInsertIndex                   ( CPF_Parm )

bool UcAttribute_FacialHair::InsertZeroedItem ( class UObject* pObject, int nInsertIndex )
{
	static UFunction* pFnInsertZeroedItem = NULL;

	if ( ! pFnInsertZeroedItem )
		pFnInsertZeroedItem = (UFunction*) UObject::GObjObjects()->Data[ 32936 ];

	UcAttribute_FacialHair_execInsertZeroedItem_Parms InsertZeroedItem_Parms;
	InsertZeroedItem_Parms.pObject = pObject;
	InsertZeroedItem_Parms.nInsertIndex = nInsertIndex;

	pFnInsertZeroedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInsertZeroedItem, &InsertZeroedItem_Parms, NULL );

	pFnInsertZeroedItem->FunctionFlags |= 0x400;

	return InsertZeroedItem_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_FacialHair.SetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_FacialHair::SetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 32931 ];

	UcAttribute_FacialHair_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.pObject = pObject;
	SetValue_Parms.nArrayIndex = nArrayIndex;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &SetValue_Parms.Value, 0x48 );

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_FacialHair.GetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Const | CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_FacialHair::GetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 32926 ];

	UcAttribute_FacialHair_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.pObject = pObject;
	GetValue_Parms.nArrayIndex = nArrayIndex;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &GetValue_Parms.Value, 0x48 );

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_MakeUpColour.SetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_MakeUpColour::SetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 32950 ];

	UcAttribute_MakeUpColour_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.pObject = pObject;
	SetValue_Parms.nArrayIndex = nArrayIndex;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &SetValue_Parms.Value, 0x48 );

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_MakeUpColour.GetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Const | CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_MakeUpColour::GetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 32945 ];

	UcAttribute_MakeUpColour_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.pObject = pObject;
	GetValue_Parms.nArrayIndex = nArrayIndex;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &GetValue_Parms.Value, 0x48 );

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_Morph.SetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_Morph::SetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 32964 ];

	UcAttribute_Morph_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.pObject = pObject;
	SetValue_Parms.nArrayIndex = nArrayIndex;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &SetValue_Parms.Value, 0x48 );

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_Morph.GetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Const | CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_Morph::GetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 32959 ];

	UcAttribute_Morph_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.pObject = pObject;
	GetValue_Parms.nArrayIndex = nArrayIndex;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &GetValue_Parms.Value, 0x48 );

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_TESTexture.RemoveItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_Parm )

bool UcAttribute_TESTexture::RemoveItem ( class UObject* pObject, int nArrayIndex )
{
	static UFunction* pFnRemoveItem = NULL;

	if ( ! pFnRemoveItem )
		pFnRemoveItem = (UFunction*) UObject::GObjObjects()->Data[ 32985 ];

	UcAttribute_TESTexture_execRemoveItem_Parms RemoveItem_Parms;
	RemoveItem_Parms.pObject = pObject;
	RemoveItem_Parms.nArrayIndex = nArrayIndex;

	pFnRemoveItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveItem, &RemoveItem_Parms, NULL );

	pFnRemoveItem->FunctionFlags |= 0x400;

	return RemoveItem_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_TESTexture.InsertZeroedItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nInsertIndex                   ( CPF_Parm )

bool UcAttribute_TESTexture::InsertZeroedItem ( class UObject* pObject, int nInsertIndex )
{
	static UFunction* pFnInsertZeroedItem = NULL;

	if ( ! pFnInsertZeroedItem )
		pFnInsertZeroedItem = (UFunction*) UObject::GObjObjects()->Data[ 32981 ];

	UcAttribute_TESTexture_execInsertZeroedItem_Parms InsertZeroedItem_Parms;
	InsertZeroedItem_Parms.pObject = pObject;
	InsertZeroedItem_Parms.nInsertIndex = nInsertIndex;

	pFnInsertZeroedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInsertZeroedItem, &InsertZeroedItem_Parms, NULL );

	pFnInsertZeroedItem->FunctionFlags |= 0x400;

	return InsertZeroedItem_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_TESTexture.SetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_TESTexture::SetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 32976 ];

	UcAttribute_TESTexture_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.pObject = pObject;
	SetValue_Parms.nArrayIndex = nArrayIndex;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &SetValue_Parms.Value, 0x48 );

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cAttribute_TESTexture.GetValue
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 pObject                        ( CPF_Const | CPF_Parm )
// int                            nArrayIndex                    ( CPF_OptionalParm | CPF_Parm )
// struct FAttributeValue         Value                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcAttribute_TESTexture::GetValue ( class UObject* pObject, int nArrayIndex, struct FAttributeValue* Value )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 32971 ];

	UcAttribute_TESTexture_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.pObject = pObject;
	GetValue_Parms.nArrayIndex = nArrayIndex;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	if ( Value )
		memcpy ( Value, &GetValue_Parms.Value, 0x48 );

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_GetCustomisableItemInfo.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIAction_GetCustomisableItemInfo::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 34157 ];

	UcUIAction_GetCustomisableItemInfo_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_CustomisationEditor.OnInputAxis
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UcUIDataStore_CustomisationEditor::OnInputAxis ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnOnInputAxis = NULL;

	if ( ! pFnOnInputAxis )
		pFnOnInputAxis = (UFunction*) UObject::GObjObjects()->Data[ 35884 ];

	UcUIDataStore_CustomisationEditor_execOnInputAxis_Parms OnInputAxis_Parms;

	pFnOnInputAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInputAxis, &OnInputAxis_Parms, NULL );

	pFnOnInputAxis->FunctionFlags |= 0x400;

	if ( EventParms )
		memcpy ( EventParms, &OnInputAxis_Parms.EventParms, 0x20 );

	return OnInputAxis_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_CustomisationEditor.OnKeyPress
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UcUIDataStore_CustomisationEditor::OnKeyPress ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnOnKeyPress = NULL;

	if ( ! pFnOnKeyPress )
		pFnOnKeyPress = (UFunction*) UObject::GObjObjects()->Data[ 35881 ];

	UcUIDataStore_CustomisationEditor_execOnKeyPress_Parms OnKeyPress_Parms;

	pFnOnKeyPress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnKeyPress, &OnKeyPress_Parms, NULL );

	pFnOnKeyPress->FunctionFlags |= 0x400;

	if ( EventParms )
		memcpy ( EventParms, &OnKeyPress_Parms.EventParms, 0x20 );

	return OnKeyPress_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_CustomisationEditor.GetTimeSecondsInEditor
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UcUIDataStore_CustomisationEditor::GetTimeSecondsInEditor ( )
{
	static UFunction* pFnGetTimeSecondsInEditor = NULL;

	if ( ! pFnGetTimeSecondsInEditor )
		pFnGetTimeSecondsInEditor = (UFunction*) UObject::GObjObjects()->Data[ 35879 ];

	UcUIDataStore_CustomisationEditor_execGetTimeSecondsInEditor_Parms GetTimeSecondsInEditor_Parms;

	pFnGetTimeSecondsInEditor->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTimeSecondsInEditor, &GetTimeSecondsInEditor_Parms, NULL );

	pFnGetTimeSecondsInEditor->FunctionFlags |= 0x400;

	return GetTimeSecondsInEditor_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_TESTexture.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_TESTexture::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 35367 ];

	UcUIDataStore_TESTexture_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_TESTexture.ReleaseAssets
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_TESTexture::ReleaseAssets ( )
{
	static UFunction* pFnReleaseAssets = NULL;

	if ( ! pFnReleaseAssets )
		pFnReleaseAssets = (UFunction*) UObject::GObjObjects()->Data[ 35366 ];

	UcUIDataStore_TESTexture_execReleaseAssets_Parms ReleaseAssets_Parms;

	pFnReleaseAssets->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReleaseAssets, &ReleaseAssets_Parms, NULL );

	pFnReleaseAssets->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_TESTexture.ClearUndoSlots
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_TESTexture::ClearUndoSlots ( )
{
	static UFunction* pFnClearUndoSlots = NULL;

	if ( ! pFnClearUndoSlots )
		pFnClearUndoSlots = (UFunction*) UObject::GObjObjects()->Data[ 35365 ];

	UcUIDataStore_TESTexture_execClearUndoSlots_Parms ClearUndoSlots_Parms;

	pFnClearUndoSlots->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearUndoSlots, &ClearUndoSlots_Parms, NULL );

	pFnClearUndoSlots->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_TESTexture.PopRedoSlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_TESTexture::PopRedoSlot ( )
{
	static UFunction* pFnPopRedoSlot = NULL;

	if ( ! pFnPopRedoSlot )
		pFnPopRedoSlot = (UFunction*) UObject::GObjObjects()->Data[ 35364 ];

	UcUIDataStore_TESTexture_execPopRedoSlot_Parms PopRedoSlot_Parms;

	pFnPopRedoSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopRedoSlot, &PopRedoSlot_Parms, NULL );

	pFnPopRedoSlot->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_TESTexture.PopUndoSlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_TESTexture::PopUndoSlot ( )
{
	static UFunction* pFnPopUndoSlot = NULL;

	if ( ! pFnPopUndoSlot )
		pFnPopUndoSlot = (UFunction*) UObject::GObjObjects()->Data[ 35363 ];

	UcUIDataStore_TESTexture_execPopUndoSlot_Parms PopUndoSlot_Parms;

	pFnPopUndoSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopUndoSlot, &PopUndoSlot_Parms, NULL );

	pFnPopUndoSlot->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_TESTexture.PushUndoSlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_TESTexture::PushUndoSlot ( )
{
	static UFunction* pFnPushUndoSlot = NULL;

	if ( ! pFnPushUndoSlot )
		pFnPushUndoSlot = (UFunction*) UObject::GObjObjects()->Data[ 35360 ];

	UcUIDataStore_TESTexture_execPushUndoSlot_Parms PushUndoSlot_Parms;

	pFnPushUndoSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPushUndoSlot, &PushUndoSlot_Parms, NULL );

	pFnPushUndoSlot->FunctionFlags |= 0x400;

	return PushUndoSlot_Parms.ReturnValue;
};

// Function APBUserInterface.cRandomCharacterGenerator.AddRandomFields
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcRandomCharacterGenerator::eventAddRandomFields ( )
{
	static UFunction* pFnAddRandomFields = NULL;

	if ( ! pFnAddRandomFields )
		pFnAddRandomFields = (UFunction*) UObject::GObjObjects()->Data[ 33078 ];

	UcRandomCharacterGenerator_eventAddRandomFields_Parms AddRandomFields_Parms;

	this->ProcessEvent ( pFnAddRandomFields, &AddRandomFields_Parms, NULL );
};

// Function APBUserInterface.cRandomCharacterGenerator.CreateRandomFieldInt
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   FieldName                      ( CPF_Parm )
// unsigned char                  eGender                        ( CPF_Parm )
// TArray< int >                  aValues                        ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned char                  eMode                          ( CPF_OptionalParm | CPF_Parm )

void UcRandomCharacterGenerator::CreateRandomFieldInt ( struct FName FieldName, unsigned char eGender, TArray< int > aValues, unsigned char eMode )
{
	static UFunction* pFnCreateRandomFieldInt = NULL;

	if ( ! pFnCreateRandomFieldInt )
		pFnCreateRandomFieldInt = (UFunction*) UObject::GObjObjects()->Data[ 33071 ];

	UcRandomCharacterGenerator_execCreateRandomFieldInt_Parms CreateRandomFieldInt_Parms;
	memcpy ( &CreateRandomFieldInt_Parms.FieldName, &FieldName, 0x8 );
	CreateRandomFieldInt_Parms.eGender = eGender;
	memcpy ( &CreateRandomFieldInt_Parms.aValues, &aValues, 0xC );
	CreateRandomFieldInt_Parms.eMode = eMode;

	pFnCreateRandomFieldInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateRandomFieldInt, &CreateRandomFieldInt_Parms, NULL );

	pFnCreateRandomFieldInt->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cRandomCharacterGenerator.CreateRandomField
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   FieldName                      ( CPF_Parm )
// unsigned char                  eGender                        ( CPF_Parm )
// float                          fTolerance                     ( CPF_OptionalParm | CPF_Parm )

void UcRandomCharacterGenerator::CreateRandomField ( struct FName FieldName, unsigned char eGender, float fTolerance )
{
	static UFunction* pFnCreateRandomField = NULL;

	if ( ! pFnCreateRandomField )
		pFnCreateRandomField = (UFunction*) UObject::GObjObjects()->Data[ 33067 ];

	UcRandomCharacterGenerator_execCreateRandomField_Parms CreateRandomField_Parms;
	memcpy ( &CreateRandomField_Parms.FieldName, &FieldName, 0x8 );
	CreateRandomField_Parms.eGender = eGender;
	CreateRandomField_Parms.fTolerance = fTolerance;

	pFnCreateRandomField->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateRandomField, &CreateRandomField_Parms, NULL );

	pFnCreateRandomField->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CC_GetContext.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIAction_CC_GetContext::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 33721 ];

	UcUIAction_CC_GetContext_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_CharacterCustomisation::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 35938 ];

	UcUIDataStore_CharacterCustomisation_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.GetCompressedDescriptorInDefaultOutfit
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< unsigned char >        aData                          ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUIDataStore_CharacterCustomisation::GetCompressedDescriptorInDefaultOutfit ( TArray< unsigned char >* aData )
{
	static UFunction* pFnGetCompressedDescriptorInDefaultOutfit = NULL;

	if ( ! pFnGetCompressedDescriptorInDefaultOutfit )
		pFnGetCompressedDescriptorInDefaultOutfit = (UFunction*) UObject::GObjObjects()->Data[ 35934 ];

	UcUIDataStore_CharacterCustomisation_execGetCompressedDescriptorInDefaultOutfit_Parms GetCompressedDescriptorInDefaultOutfit_Parms;

	pFnGetCompressedDescriptorInDefaultOutfit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCompressedDescriptorInDefaultOutfit, &GetCompressedDescriptorInDefaultOutfit_Parms, NULL );

	pFnGetCompressedDescriptorInDefaultOutfit->FunctionFlags |= 0x400;

	if ( aData )
		memcpy ( aData, &GetCompressedDescriptorInDefaultOutfit_Parms.aData, 0xC );

	return GetCompressedDescriptorInDefaultOutfit_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.ReleaseAssets
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_CharacterCustomisation::ReleaseAssets ( )
{
	static UFunction* pFnReleaseAssets = NULL;

	if ( ! pFnReleaseAssets )
		pFnReleaseAssets = (UFunction*) UObject::GObjObjects()->Data[ 35933 ];

	UcUIDataStore_CharacterCustomisation_execReleaseAssets_Parms ReleaseAssets_Parms;

	pFnReleaseAssets->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReleaseAssets, &ReleaseAssets_Parms, NULL );

	pFnReleaseAssets->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.SetContext
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eContext                       ( CPF_Parm )

void UcUIDataStore_CharacterCustomisation::SetContext ( unsigned char eContext )
{
	static UFunction* pFnSetContext = NULL;

	if ( ! pFnSetContext )
		pFnSetContext = (UFunction*) UObject::GObjObjects()->Data[ 35931 ];

	UcUIDataStore_CharacterCustomisation_execSetContext_Parms SetContext_Parms;
	SetContext_Parms.eContext = eContext;

	pFnSetContext->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContext, &SetContext_Parms, NULL );

	pFnSetContext->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.AddArrayLists
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIDataStore_CharacterCustomisation::eventAddArrayLists ( )
{
	static UFunction* pFnAddArrayLists = NULL;

	if ( ! pFnAddArrayLists )
		pFnAddArrayLists = (UFunction*) UObject::GObjObjects()->Data[ 35930 ];

	UcUIDataStore_CharacterCustomisation_eventAddArrayLists_Parms AddArrayLists_Parms;

	this->ProcessEvent ( pFnAddArrayLists, &AddArrayLists_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_CharacterCustomisation.CreateArrayList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   ArrayVariable                  ( CPF_Parm )
// int                            nMaxItems                      ( CPF_Parm )
// unsigned char                  eAssetRebuildType              ( CPF_Parm )

void UcUIDataStore_CharacterCustomisation::CreateArrayList ( struct FName ArrayVariable, int nMaxItems, unsigned char eAssetRebuildType )
{
	static UFunction* pFnCreateArrayList = NULL;

	if ( ! pFnCreateArrayList )
		pFnCreateArrayList = (UFunction*) UObject::GObjObjects()->Data[ 35926 ];

	UcUIDataStore_CharacterCustomisation_execCreateArrayList_Parms CreateArrayList_Parms;
	memcpy ( &CreateArrayList_Parms.ArrayVariable, &ArrayVariable, 0x8 );
	CreateArrayList_Parms.nMaxItems = nMaxItems;
	CreateArrayList_Parms.eAssetRebuildType = eAssetRebuildType;

	pFnCreateArrayList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateArrayList, &CreateArrayList_Parms, NULL );

	pFnCreateArrayList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIListProvider_CC_HairMorphs.AddHairMorphItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sDisplayName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sVertAttributeTag              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sHorizAttributeTag             ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UcUIListProvider_CC_HairMorphs::AddHairMorphItem ( struct FString sDisplayName, struct FString sVertAttributeTag, struct FString sHorizAttributeTag )
{
	static UFunction* pFnAddHairMorphItem = NULL;

	if ( ! pFnAddHairMorphItem )
		pFnAddHairMorphItem = (UFunction*) UObject::GObjObjects()->Data[ 38407 ];

	UcUIListProvider_CC_HairMorphs_execAddHairMorphItem_Parms AddHairMorphItem_Parms;
	memcpy ( &AddHairMorphItem_Parms.sDisplayName, &sDisplayName, 0xC );
	memcpy ( &AddHairMorphItem_Parms.sVertAttributeTag, &sVertAttributeTag, 0xC );
	memcpy ( &AddHairMorphItem_Parms.sHorizAttributeTag, &sHorizAttributeTag, 0xC );

	pFnAddHairMorphItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddHairMorphItem, &AddHairMorphItem_Parms, NULL );

	pFnAddHairMorphItem->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIListProvider_CC_HairMorphs.AddMairMorphItems
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIListProvider_CC_HairMorphs::eventAddMairMorphItems ( )
{
	static UFunction* pFnAddMairMorphItems = NULL;

	if ( ! pFnAddMairMorphItems )
		pFnAddMairMorphItems = (UFunction*) UObject::GObjObjects()->Data[ 38406 ];

	UcUIListProvider_CC_HairMorphs_eventAddMairMorphItems_Parms AddMairMorphItems_Parms;

	this->ProcessEvent ( pFnAddMairMorphItems, &AddMairMorphItems_Parms, NULL );
};

// Function APBUserInterface.cUIAction_StoreItemCustomisation.OnFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eErr                           ( CPF_Parm )

void UcUIAction_StoreItemCustomisation::OnFailed ( int eErr )
{
	static UFunction* pFnOnFailed = NULL;

	if ( ! pFnOnFailed )
		pFnOnFailed = (UFunction*) UObject::GObjObjects()->Data[ 35334 ];

	UcUIAction_StoreItemCustomisation_execOnFailed_Parms OnFailed_Parms;
	OnFailed_Parms.eErr = eErr;

	pFnOnFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFailed, &OnFailed_Parms, NULL );

	pFnOnFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_StoreItemCustomisation.OnSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_StoreItemCustomisation::OnSuccess ( )
{
	static UFunction* pFnOnSuccess = NULL;

	if ( ! pFnOnSuccess )
		pFnOnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 35333 ];

	UcUIAction_StoreItemCustomisation_execOnSuccess_Parms OnSuccess_Parms;

	pFnOnSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSuccess, &OnSuccess_Parms, NULL );

	pFnOnSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_StoreItemCustomisation.OnEditCompleted
// [0x00020002] 
// Parameters infos:
// int                            eErr                           ( CPF_Parm )
// struct FGuid                   ItemGuid                       ( CPF_Parm )
// unsigned char                  eOperation                     ( CPF_Parm )
// struct FPointer                pUserData                      ( CPF_Parm )

void UcUIAction_StoreItemCustomisation::OnEditCompleted ( int eErr, struct FGuid ItemGuid, unsigned char eOperation, struct FPointer pUserData )
{
	static UFunction* pFnOnEditCompleted = NULL;

	if ( ! pFnOnEditCompleted )
		pFnOnEditCompleted = (UFunction*) UObject::GObjObjects()->Data[ 35328 ];

	UcUIAction_StoreItemCustomisation_execOnEditCompleted_Parms OnEditCompleted_Parms;
	OnEditCompleted_Parms.eErr = eErr;
	memcpy ( &OnEditCompleted_Parms.ItemGuid, &ItemGuid, 0x10 );
	OnEditCompleted_Parms.eOperation = eOperation;
	memcpy ( &OnEditCompleted_Parms.pUserData, &pUserData, 0x4 );

	this->ProcessEvent ( pFnOnEditCompleted, &OnEditCompleted_Parms, NULL );
};

// Function APBUserInterface.cUIAction_StoreItemCustomisation.OnItemCustomisationChanged
// [0x00020002] 
// Parameters infos:
// class AActor*                  pItemCustomisationInfo         ( CPF_Parm )

void UcUIAction_StoreItemCustomisation::OnItemCustomisationChanged ( class AActor* pItemCustomisationInfo )
{
	static UFunction* pFnOnItemCustomisationChanged = NULL;

	if ( ! pFnOnItemCustomisationChanged )
		pFnOnItemCustomisationChanged = (UFunction*) UObject::GObjObjects()->Data[ 35326 ];

	UcUIAction_StoreItemCustomisation_execOnItemCustomisationChanged_Parms OnItemCustomisationChanged_Parms;
	OnItemCustomisationChanged_Parms.pItemCustomisationInfo = pItemCustomisationInfo;

	this->ProcessEvent ( pFnOnItemCustomisationChanged, &OnItemCustomisationChanged_Parms, NULL );
};

// Function APBUserInterface.cUIAction_VC_StoreCustomisation.OnFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eErr                           ( CPF_Parm )

void UcUIAction_VC_StoreCustomisation::OnFailed ( int eErr )
{
	static UFunction* pFnOnFailed = NULL;

	if ( ! pFnOnFailed )
		pFnOnFailed = (UFunction*) UObject::GObjObjects()->Data[ 35475 ];

	UcUIAction_VC_StoreCustomisation_execOnFailed_Parms OnFailed_Parms;
	OnFailed_Parms.eErr = eErr;

	pFnOnFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFailed, &OnFailed_Parms, NULL );

	pFnOnFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_VC_StoreCustomisation.OnSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_VC_StoreCustomisation::OnSuccess ( )
{
	static UFunction* pFnOnSuccess = NULL;

	if ( ! pFnOnSuccess )
		pFnOnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 35474 ];

	UcUIAction_VC_StoreCustomisation_execOnSuccess_Parms OnSuccess_Parms;

	pFnOnSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSuccess, &OnSuccess_Parms, NULL );

	pFnOnSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_VehicleCustomisation.OnDeploymentChangedCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_VehicleCustomisation::OnDeploymentChangedCallback ( )
{
	static UFunction* pFnOnDeploymentChangedCallback = NULL;

	if ( ! pFnOnDeploymentChangedCallback )
		pFnOnDeploymentChangedCallback = (UFunction*) UObject::GObjObjects()->Data[ 37965 ];

	UcUIDataStore_VehicleCustomisation_execOnDeploymentChangedCallback_Parms OnDeploymentChangedCallback_Parms;

	pFnOnDeploymentChangedCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDeploymentChangedCallback, &OnDeploymentChangedCallback_Parms, NULL );

	pFnOnDeploymentChangedCallback->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_VehicleCustomisation.OnInventoryChangedCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_VehicleCustomisation::OnInventoryChangedCallback ( )
{
	static UFunction* pFnOnInventoryChangedCallback = NULL;

	if ( ! pFnOnInventoryChangedCallback )
		pFnOnInventoryChangedCallback = (UFunction*) UObject::GObjObjects()->Data[ 37964 ];

	UcUIDataStore_VehicleCustomisation_execOnInventoryChangedCallback_Parms OnInventoryChangedCallback_Parms;

	pFnOnInventoryChangedCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInventoryChangedCallback, &OnInventoryChangedCallback_Parms, NULL );

	pFnOnInventoryChangedCallback->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_S_ItemPreview.OnItemCreatorNameCacheUpdated
// [0x00020002] 
// Parameters infos:

void UcUIDataStore_S_ItemPreview::OnItemCreatorNameCacheUpdated ( )
{
	static UFunction* pFnOnItemCreatorNameCacheUpdated = NULL;

	if ( ! pFnOnItemCreatorNameCacheUpdated )
		pFnOnItemCreatorNameCacheUpdated = (UFunction*) UObject::GObjObjects()->Data[ 36106 ];

	UcUIDataStore_S_ItemPreview_execOnItemCreatorNameCacheUpdated_Parms OnItemCreatorNameCacheUpdated_Parms;

	this->ProcessEvent ( pFnOnItemCreatorNameCacheUpdated, &OnItemCreatorNameCacheUpdated_Parms, NULL );
};

// Function APBUserInterface.cUIAction_Wardrobe_StoreOutfit.OnItemCustomisationChanged
// [0x00020002] 
// Parameters infos:
// class AActor*                  pItemCustomisationInfo         ( CPF_Parm )

void UcUIAction_Wardrobe_StoreOutfit::OnItemCustomisationChanged ( class AActor* pItemCustomisationInfo )
{
	static UFunction* pFnOnItemCustomisationChanged = NULL;

	if ( ! pFnOnItemCustomisationChanged )
		pFnOnItemCustomisationChanged = (UFunction*) UObject::GObjObjects()->Data[ 35484 ];

	UcUIAction_Wardrobe_StoreOutfit_execOnItemCustomisationChanged_Parms OnItemCustomisationChanged_Parms;
	OnItemCustomisationChanged_Parms.pItemCustomisationInfo = pItemCustomisationInfo;

	this->ProcessEvent ( pFnOnItemCustomisationChanged, &OnItemCustomisationChanged_Parms, NULL );
};

// Function APBUserInterface.cUIAction_Wardrobe_StorePart.OnFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eErr                           ( CPF_Parm )

void UcUIAction_Wardrobe_StorePart::OnFailed ( int eErr )
{
	static UFunction* pFnOnFailed = NULL;

	if ( ! pFnOnFailed )
		pFnOnFailed = (UFunction*) UObject::GObjObjects()->Data[ 35506 ];

	UcUIAction_Wardrobe_StorePart_execOnFailed_Parms OnFailed_Parms;
	OnFailed_Parms.eErr = eErr;

	pFnOnFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFailed, &OnFailed_Parms, NULL );

	pFnOnFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Wardrobe_StorePart.OnSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Wardrobe_StorePart::OnSuccess ( )
{
	static UFunction* pFnOnSuccess = NULL;

	if ( ! pFnOnSuccess )
		pFnOnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 35505 ];

	UcUIAction_Wardrobe_StorePart_execOnSuccess_Parms OnSuccess_Parms;

	pFnOnSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSuccess, &OnSuccess_Parms, NULL );

	pFnOnSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_ClothingCustomisation.OnDeploymentChangedCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_ClothingCustomisation::OnDeploymentChangedCallback ( )
{
	static UFunction* pFnOnDeploymentChangedCallback = NULL;

	if ( ! pFnOnDeploymentChangedCallback )
		pFnOnDeploymentChangedCallback = (UFunction*) UObject::GObjObjects()->Data[ 35996 ];

	UcUIDataStore_ClothingCustomisation_execOnDeploymentChangedCallback_Parms OnDeploymentChangedCallback_Parms;

	pFnOnDeploymentChangedCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDeploymentChangedCallback, &OnDeploymentChangedCallback_Parms, NULL );

	pFnOnDeploymentChangedCallback->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_ClothingCustomisation.OnInventoryChangedCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_ClothingCustomisation::OnInventoryChangedCallback ( )
{
	static UFunction* pFnOnInventoryChangedCallback = NULL;

	if ( ! pFnOnInventoryChangedCallback )
		pFnOnInventoryChangedCallback = (UFunction*) UObject::GObjObjects()->Data[ 35995 ];

	UcUIDataStore_ClothingCustomisation_execOnInventoryChangedCallback_Parms OnInventoryChangedCallback_Parms;

	pFnOnInventoryChangedCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInventoryChangedCallback, &OnInventoryChangedCallback_Parms, NULL );

	pFnOnInventoryChangedCallback->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_ClothingCustomisation.OnItemCreateCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FGuid                   ItemGuid                       ( CPF_Parm )
// class UObject*                 pUserData                      ( CPF_Parm )

void UcUIDataStore_ClothingCustomisation::OnItemCreateCallback ( struct FGuid ItemGuid, class UObject* pUserData )
{
	static UFunction* pFnOnItemCreateCallback = NULL;

	if ( ! pFnOnItemCreateCallback )
		pFnOnItemCreateCallback = (UFunction*) UObject::GObjObjects()->Data[ 35992 ];

	UcUIDataStore_ClothingCustomisation_execOnItemCreateCallback_Parms OnItemCreateCallback_Parms;
	memcpy ( &OnItemCreateCallback_Parms.ItemGuid, &ItemGuid, 0x10 );
	OnItemCreateCallback_Parms.pUserData = pUserData;

	pFnOnItemCreateCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnItemCreateCallback, &OnItemCreateCallback_Parms, NULL );

	pFnOnItemCreateCallback->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Wardrobe_DuplicateOutfit.OnItemCustomisationChanged
// [0x00020002] 
// Parameters infos:
// class AActor*                  pItemCustomisationInfo         ( CPF_Parm )

void UcUIAction_Wardrobe_DuplicateOutfit::OnItemCustomisationChanged ( class AActor* pItemCustomisationInfo )
{
	static UFunction* pFnOnItemCustomisationChanged = NULL;

	if ( ! pFnOnItemCustomisationChanged )
		pFnOnItemCustomisationChanged = (UFunction*) UObject::GObjObjects()->Data[ 35491 ];

	UcUIAction_Wardrobe_DuplicateOutfit_execOnItemCustomisationChanged_Parms OnItemCustomisationChanged_Parms;
	OnItemCustomisationChanged_Parms.pItemCustomisationInfo = pItemCustomisationInfo;

	this->ProcessEvent ( pFnOnItemCustomisationChanged, &OnItemCustomisationChanged_Parms, NULL );
};

// Function APBUserInterface.cUI_S_ItemCreatorNameCache.OnNameQueryFailedItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )
// int                            nCharacterUID                  ( CPF_Parm )

void UcUI_S_ItemCreatorNameCache::OnNameQueryFailedItem ( int nError, int nCharacterUID )
{
	static UFunction* pFnOnNameQueryFailedItem = NULL;

	if ( ! pFnOnNameQueryFailedItem )
		pFnOnNameQueryFailedItem = (UFunction*) UObject::GObjObjects()->Data[ 33449 ];

	UcUI_S_ItemCreatorNameCache_execOnNameQueryFailedItem_Parms OnNameQueryFailedItem_Parms;
	OnNameQueryFailedItem_Parms.nError = nError;
	OnNameQueryFailedItem_Parms.nCharacterUID = nCharacterUID;

	pFnOnNameQueryFailedItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnNameQueryFailedItem, &OnNameQueryFailedItem_Parms, NULL );

	pFnOnNameQueryFailedItem->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUI_S_ItemCreatorNameCache.OnNameQuerySuccessItem
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCharacterUID                  ( CPF_Parm )
// struct FString                 sCharacterName                 ( CPF_Parm | CPF_NeedCtorLink )

void UcUI_S_ItemCreatorNameCache::OnNameQuerySuccessItem ( int nCharacterUID, struct FString sCharacterName )
{
	static UFunction* pFnOnNameQuerySuccessItem = NULL;

	if ( ! pFnOnNameQuerySuccessItem )
		pFnOnNameQuerySuccessItem = (UFunction*) UObject::GObjObjects()->Data[ 33446 ];

	UcUI_S_ItemCreatorNameCache_execOnNameQuerySuccessItem_Parms OnNameQuerySuccessItem_Parms;
	OnNameQuerySuccessItem_Parms.nCharacterUID = nCharacterUID;
	memcpy ( &OnNameQuerySuccessItem_Parms.sCharacterName, &sCharacterName, 0xC );

	pFnOnNameQuerySuccessItem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnNameQuerySuccessItem, &OnNameQuerySuccessItem_Parms, NULL );

	pFnOnNameQuerySuccessItem->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUI_S_ItemCreatorNameCache.CacheUpdatedCallback
// [0x00120000] 
// Parameters infos:

void UcUI_S_ItemCreatorNameCache::CacheUpdatedCallback ( )
{
	static UFunction* pFnCacheUpdatedCallback = NULL;

	if ( ! pFnCacheUpdatedCallback )
		pFnCacheUpdatedCallback = (UFunction*) UObject::GObjObjects()->Data[ 33441 ];

	UcUI_S_ItemCreatorNameCache_execCacheUpdatedCallback_Parms CacheUpdatedCallback_Parms;

	this->ProcessEvent ( pFnCacheUpdatedCallback, &CacheUpdatedCallback_Parms, NULL );
};

// Function APBUserInterface.cUIAction_S_PurchaseItem.OnPurchaseCompleted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FGuid                   ItemGuid                       ( CPF_Parm )
// unsigned char                  eErrorCode                     ( CPF_Parm )
// struct FPointer                pUserData                      ( CPF_Parm )

void UcUIAction_S_PurchaseItem::OnPurchaseCompleted ( struct FGuid ItemGuid, unsigned char eErrorCode, struct FPointer pUserData )
{
	static UFunction* pFnOnPurchaseCompleted = NULL;

	if ( ! pFnOnPurchaseCompleted )
		pFnOnPurchaseCompleted = (UFunction*) UObject::GObjObjects()->Data[ 34915 ];

	UcUIAction_S_PurchaseItem_execOnPurchaseCompleted_Parms OnPurchaseCompleted_Parms;
	memcpy ( &OnPurchaseCompleted_Parms.ItemGuid, &ItemGuid, 0x10 );
	OnPurchaseCompleted_Parms.eErrorCode = eErrorCode;
	memcpy ( &OnPurchaseCompleted_Parms.pUserData, &pUserData, 0x4 );

	pFnOnPurchaseCompleted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPurchaseCompleted, &OnPurchaseCompleted_Parms, NULL );

	pFnOnPurchaseCompleted->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_S_SellItem.OnSaleCompleted
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eErr                           ( CPF_Parm )
// struct FGuid                   ItemGuid                       ( CPF_Parm )
// unsigned char                  eOperation                     ( CPF_Parm )
// struct FPointer                pUserData                      ( CPF_Parm )

void UcUIAction_S_SellItem::OnSaleCompleted ( int eErr, struct FGuid ItemGuid, unsigned char eOperation, struct FPointer pUserData )
{
	static UFunction* pFnOnSaleCompleted = NULL;

	if ( ! pFnOnSaleCompleted )
		pFnOnSaleCompleted = (UFunction*) UObject::GObjObjects()->Data[ 34928 ];

	UcUIAction_S_SellItem_execOnSaleCompleted_Parms OnSaleCompleted_Parms;
	OnSaleCompleted_Parms.eErr = eErr;
	memcpy ( &OnSaleCompleted_Parms.ItemGuid, &ItemGuid, 0x10 );
	OnSaleCompleted_Parms.eOperation = eOperation;
	memcpy ( &OnSaleCompleted_Parms.pUserData, &pUserData, 0x4 );

	pFnOnSaleCompleted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSaleCompleted, &OnSaleCompleted_Parms, NULL );

	pFnOnSaleCompleted->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_APBDistricts.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Ordering                       ( CPF_Parm )

bool UcUIDataStore_APBDistricts::eventSetOrdering ( struct FName Ordering )
{
	static UFunction* pFnSetOrdering = NULL;

	if ( ! pFnSetOrdering )
		pFnSetOrdering = (UFunction*) UObject::GObjObjects()->Data[ 35819 ];

	UcUIDataStore_APBDistricts_eventSetOrdering_Parms SetOrdering_Parms;
	memcpy ( &SetOrdering_Parms.Ordering, &Ordering, 0x8 );

	pFnSetOrdering->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOrdering, &SetOrdering_Parms, NULL );

	pFnSetOrdering->FunctionFlags |= 0x400;

	return SetOrdering_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_APBDistricts.OnGroupLeaderChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_APBDistricts::OnGroupLeaderChanged ( )
{
	static UFunction* pFnOnGroupLeaderChanged = NULL;

	if ( ! pFnOnGroupLeaderChanged )
		pFnOnGroupLeaderChanged = (UFunction*) UObject::GObjObjects()->Data[ 35818 ];

	UcUIDataStore_APBDistricts_execOnGroupLeaderChanged_Parms OnGroupLeaderChanged_Parms;

	pFnOnGroupLeaderChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGroupLeaderChanged, &OnGroupLeaderChanged_Parms, NULL );

	pFnOnGroupLeaderChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_APBDistricts.OnDistrictReserveFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIDataStore_APBDistricts::OnDistrictReserveFailed ( int nError )
{
	static UFunction* pFnOnDistrictReserveFailed = NULL;

	if ( ! pFnOnDistrictReserveFailed )
		pFnOnDistrictReserveFailed = (UFunction*) UObject::GObjObjects()->Data[ 35816 ];

	UcUIDataStore_APBDistricts_execOnDistrictReserveFailed_Parms OnDistrictReserveFailed_Parms;
	OnDistrictReserveFailed_Parms.nError = nError;

	pFnOnDistrictReserveFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDistrictReserveFailed, &OnDistrictReserveFailed_Parms, NULL );

	pFnOnDistrictReserveFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_APBDistricts.InvokeCityMap
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_APBDistricts::InvokeCityMap ( )
{
	static UFunction* pFnInvokeCityMap = NULL;

	if ( ! pFnInvokeCityMap )
		pFnInvokeCityMap = (UFunction*) UObject::GObjObjects()->Data[ 35815 ];

	UcUIDataStore_APBDistricts_execInvokeCityMap_Parms InvokeCityMap_Parms;

	pFnInvokeCityMap->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvokeCityMap, &InvokeCityMap_Parms, NULL );

	pFnInvokeCityMap->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_APBDistricts.GetDistrictInstNoFromInstanceListIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nIndex                         ( CPF_Parm )

int UcUIDataStore_APBDistricts::GetDistrictInstNoFromInstanceListIndex ( int nIndex )
{
	static UFunction* pFnGetDistrictInstNoFromInstanceListIndex = NULL;

	if ( ! pFnGetDistrictInstNoFromInstanceListIndex )
		pFnGetDistrictInstNoFromInstanceListIndex = (UFunction*) UObject::GObjObjects()->Data[ 35812 ];

	UcUIDataStore_APBDistricts_execGetDistrictInstNoFromInstanceListIndex_Parms GetDistrictInstNoFromInstanceListIndex_Parms;
	GetDistrictInstNoFromInstanceListIndex_Parms.nIndex = nIndex;

	pFnGetDistrictInstNoFromInstanceListIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDistrictInstNoFromInstanceListIndex, &GetDistrictInstNoFromInstanceListIndex_Parms, NULL );

	pFnGetDistrictInstNoFromInstanceListIndex->FunctionFlags |= 0x400;

	return GetDistrictInstNoFromInstanceListIndex_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_APBDistricts.GetDistrictUIDFromInstanceListIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nIndex                         ( CPF_Parm )

int UcUIDataStore_APBDistricts::GetDistrictUIDFromInstanceListIndex ( int nIndex )
{
	static UFunction* pFnGetDistrictUIDFromInstanceListIndex = NULL;

	if ( ! pFnGetDistrictUIDFromInstanceListIndex )
		pFnGetDistrictUIDFromInstanceListIndex = (UFunction*) UObject::GObjObjects()->Data[ 35809 ];

	UcUIDataStore_APBDistricts_execGetDistrictUIDFromInstanceListIndex_Parms GetDistrictUIDFromInstanceListIndex_Parms;
	GetDistrictUIDFromInstanceListIndex_Parms.nIndex = nIndex;

	pFnGetDistrictUIDFromInstanceListIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDistrictUIDFromInstanceListIndex, &GetDistrictUIDFromInstanceListIndex_Parms, NULL );

	pFnGetDistrictUIDFromInstanceListIndex->FunctionFlags |= 0x400;

	return GetDistrictUIDFromInstanceListIndex_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_HUD_ActionMessage.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_HUD_ActionMessage::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36398 ];

	UcUIDataStore_HUD_ActionMessage_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_HUD_ActionMessage.Native_NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_HUD_ActionMessage::Native_NotifyGameSessionEnded ( )
{
	static UFunction* pFnNative_NotifyGameSessionEnded = NULL;

	if ( ! pFnNative_NotifyGameSessionEnded )
		pFnNative_NotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36397 ];

	UcUIDataStore_HUD_ActionMessage_execNative_NotifyGameSessionEnded_Parms Native_NotifyGameSessionEnded_Parms;

	pFnNative_NotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNative_NotifyGameSessionEnded, &Native_NotifyGameSessionEnded_Parms, NULL );

	pFnNative_NotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_ActionMessage.GetInstance_Script
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// class UcUIDataStore_HUD_ActionMessage* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UcUIDataStore_HUD_ActionMessage* UcUIDataStore_HUD_ActionMessage::GetInstance_Script ( )
{
	static UFunction* pFnGetInstance_Script = NULL;

	if ( ! pFnGetInstance_Script )
		pFnGetInstance_Script = (UFunction*) UObject::GObjObjects()->Data[ 36395 ];

	UcUIDataStore_HUD_ActionMessage_execGetInstance_Script_Parms GetInstance_Script_Parms;

	pFnGetInstance_Script->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInstance_Script, &GetInstance_Script_Parms, NULL );

	pFnGetInstance_Script->FunctionFlags |= 0x400;

	return GetInstance_Script_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_HUD_BackupPending.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_HUD_BackupPending::OnPlayerProfileChanged ( )
{
	static UFunction* pFnOnPlayerProfileChanged = NULL;

	if ( ! pFnOnPlayerProfileChanged )
		pFnOnPlayerProfileChanged = (UFunction*) UObject::GObjObjects()->Data[ 36416 ];

	UcUIDataStore_HUD_BackupPending_execOnPlayerProfileChanged_Parms OnPlayerProfileChanged_Parms;

	pFnOnPlayerProfileChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPlayerProfileChanged, &OnPlayerProfileChanged_Parms, NULL );

	pFnOnPlayerProfileChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_Challenges.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_HUD_Challenges::OnPlayerProfileChanged ( )
{
	static UFunction* pFnOnPlayerProfileChanged = NULL;

	if ( ! pFnOnPlayerProfileChanged )
		pFnOnPlayerProfileChanged = (UFunction*) UObject::GObjObjects()->Data[ 36490 ];

	UcUIDataStore_HUD_Challenges_execOnPlayerProfileChanged_Parms OnPlayerProfileChanged_Parms;

	pFnOnPlayerProfileChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPlayerProfileChanged, &OnPlayerProfileChanged_Parms, NULL );

	pFnOnPlayerProfileChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_Clock.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_HUD_Clock::OnPlayerProfileChanged ( )
{
	static UFunction* pFnOnPlayerProfileChanged = NULL;

	if ( ! pFnOnPlayerProfileChanged )
		pFnOnPlayerProfileChanged = (UFunction*) UObject::GObjObjects()->Data[ 36504 ];

	UcUIDataStore_HUD_Clock_execOnPlayerProfileChanged_Parms OnPlayerProfileChanged_Parms;

	pFnOnPlayerProfileChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPlayerProfileChanged, &OnPlayerProfileChanged_Parms, NULL );

	pFnOnPlayerProfileChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_Group.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_HUD_Group::OnPlayerProfileChanged ( )
{
	static UFunction* pFnOnPlayerProfileChanged = NULL;

	if ( ! pFnOnPlayerProfileChanged )
		pFnOnPlayerProfileChanged = (UFunction*) UObject::GObjObjects()->Data[ 36584 ];

	UcUIDataStore_HUD_Group_execOnPlayerProfileChanged_Parms OnPlayerProfileChanged_Parms;

	pFnOnPlayerProfileChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPlayerProfileChanged, &OnPlayerProfileChanged_Parms, NULL );

	pFnOnPlayerProfileChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_HudMessages.OnPlayerSpawned
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_HUD_HudMessages::OnPlayerSpawned ( )
{
	static UFunction* pFnOnPlayerSpawned = NULL;

	if ( ! pFnOnPlayerSpawned )
		pFnOnPlayerSpawned = (UFunction*) UObject::GObjObjects()->Data[ 33282 ];

	UcUIDataStore_HUD_HudMessages_execOnPlayerSpawned_Parms OnPlayerSpawned_Parms;

	pFnOnPlayerSpawned->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPlayerSpawned, &OnPlayerSpawned_Parms, NULL );

	pFnOnPlayerSpawned->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_HudMessages.AddMessage_Script1
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sHudMessage                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sLocToken                      ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sLocValue                      ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_HUD_HudMessages::AddMessage_Script1 ( struct FString sHudMessage, struct FString sLocToken, struct FString sLocValue )
{
	static UFunction* pFnAddMessage_Script1 = NULL;

	if ( ! pFnAddMessage_Script1 )
		pFnAddMessage_Script1 = (UFunction*) UObject::GObjObjects()->Data[ 33278 ];

	UcUIDataStore_HUD_HudMessages_execAddMessage_Script1_Parms AddMessage_Script1_Parms;
	memcpy ( &AddMessage_Script1_Parms.sHudMessage, &sHudMessage, 0xC );
	memcpy ( &AddMessage_Script1_Parms.sLocToken, &sLocToken, 0xC );
	memcpy ( &AddMessage_Script1_Parms.sLocValue, &sLocValue, 0xC );

	pFnAddMessage_Script1->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddMessage_Script1, &AddMessage_Script1_Parms, NULL );

	pFnAddMessage_Script1->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_HudMessages.AddMessage_Script0
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sHudMessage                    ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_HUD_HudMessages::AddMessage_Script0 ( struct FString sHudMessage )
{
	static UFunction* pFnAddMessage_Script0 = NULL;

	if ( ! pFnAddMessage_Script0 )
		pFnAddMessage_Script0 = (UFunction*) UObject::GObjObjects()->Data[ 33276 ];

	UcUIDataStore_HUD_HudMessages_execAddMessage_Script0_Parms AddMessage_Script0_Parms;
	memcpy ( &AddMessage_Script0_Parms.sHudMessage, &sHudMessage, 0xC );

	pFnAddMessage_Script0->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddMessage_Script0, &AddMessage_Script0_Parms, NULL );

	pFnAddMessage_Script0->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_HudMessages.GetInstance_Script
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// class UcUIDataStore_HUD_HudMessages* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UcUIDataStore_HUD_HudMessages* UcUIDataStore_HUD_HudMessages::GetInstance_Script ( )
{
	static UFunction* pFnGetInstance_Script = NULL;

	if ( ! pFnGetInstance_Script )
		pFnGetInstance_Script = (UFunction*) UObject::GObjObjects()->Data[ 33274 ];

	UcUIDataStore_HUD_HudMessages_execGetInstance_Script_Parms GetInstance_Script_Parms;

	pFnGetInstance_Script->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInstance_Script, &GetInstance_Script_Parms, NULL );

	pFnGetInstance_Script->FunctionFlags |= 0x400;

	return GetInstance_Script_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_HUD_InfoBrowser.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_HUD_InfoBrowser::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36649 ];

	UcUIDataStore_HUD_InfoBrowser_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_HUD_Radar.CheckForPlayerSymbol
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UcUIDataStore_HUD_Radar::CheckForPlayerSymbol ( )
{
	static UFunction* pFnCheckForPlayerSymbol = NULL;

	if ( ! pFnCheckForPlayerSymbol )
		pFnCheckForPlayerSymbol = (UFunction*) UObject::GObjObjects()->Data[ 36751 ];

	UcUIDataStore_HUD_Radar_execCheckForPlayerSymbol_Parms CheckForPlayerSymbol_Parms;

	pFnCheckForPlayerSymbol->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckForPlayerSymbol, &CheckForPlayerSymbol_Parms, NULL );

	pFnCheckForPlayerSymbol->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_ReticuleHintIcon.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_HUD_ReticuleHintIcon::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36788 ];

	UcUIDataStore_HUD_ReticuleHintIcon_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_HUD_TaskMarkers.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_HUD_TaskMarkers::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36831 ];

	UcUIDataStore_HUD_TaskMarkers_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_HUD_Usables.RefreshIconTextures
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_HUD_Usables::RefreshIconTextures ( )
{
	static UFunction* pFnRefreshIconTextures = NULL;

	if ( ! pFnRefreshIconTextures )
		pFnRefreshIconTextures = (UFunction*) UObject::GObjObjects()->Data[ 36854 ];

	UcUIDataStore_HUD_Usables_execRefreshIconTextures_Parms RefreshIconTextures_Parms;

	pFnRefreshIconTextures->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshIconTextures, &RefreshIconTextures_Parms, NULL );

	pFnRefreshIconTextures->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_HUD_WSCharacterInfo.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_HUD_WSCharacterInfo::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36908 ];

	UcUIDataStore_HUD_WSCharacterInfo_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_HUD_WSCharacterInfo.Native_NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_HUD_WSCharacterInfo::Native_NotifyGameSessionEnded ( )
{
	static UFunction* pFnNative_NotifyGameSessionEnded = NULL;

	if ( ! pFnNative_NotifyGameSessionEnded )
		pFnNative_NotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36907 ];

	UcUIDataStore_HUD_WSCharacterInfo_execNative_NotifyGameSessionEnded_Parms Native_NotifyGameSessionEnded_Parms;

	pFnNative_NotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNative_NotifyGameSessionEnded, &Native_NotifyGameSessionEnded_Parms, NULL );

	pFnNative_NotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_ProvingGrounds.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Ordering                       ( CPF_Parm )

bool UcUIDataStore_ProvingGrounds::eventSetOrdering ( struct FName Ordering )
{
	static UFunction* pFnSetOrdering = NULL;

	if ( ! pFnSetOrdering )
		pFnSetOrdering = (UFunction*) UObject::GObjObjects()->Data[ 37539 ];

	UcUIDataStore_ProvingGrounds_eventSetOrdering_Parms SetOrdering_Parms;
	memcpy ( &SetOrdering_Parms.Ordering, &Ordering, 0x8 );

	pFnSetOrdering->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOrdering, &SetOrdering_Parms, NULL );

	pFnSetOrdering->FunctionFlags |= 0x400;

	return SetOrdering_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_CharacterNameChange.OnHostingFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_CharacterNameChange::OnHostingFailure ( int nError )
{
	static UFunction* pFnOnHostingFailure = NULL;

	if ( ! pFnOnHostingFailure )
		pFnOnHostingFailure = (UFunction*) UObject::GObjObjects()->Data[ 33758 ];

	UcUIAction_CharacterNameChange_execOnHostingFailure_Parms OnHostingFailure_Parms;
	OnHostingFailure_Parms.nError = nError;

	pFnOnHostingFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHostingFailure, &OnHostingFailure_Parms, NULL );

	pFnOnHostingFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_CharacterNameChange.OnHostingSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_CharacterNameChange::OnHostingSuccess ( )
{
	static UFunction* pFnOnHostingSuccess = NULL;

	if ( ! pFnOnHostingSuccess )
		pFnOnHostingSuccess = (UFunction*) UObject::GObjObjects()->Data[ 33757 ];

	UcUIAction_CharacterNameChange_execOnHostingSuccess_Parms OnHostingSuccess_Parms;

	pFnOnHostingSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHostingSuccess, &OnHostingSuccess_Parms, NULL );

	pFnOnHostingSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OnDistrictEnter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nDistrictUID                   ( CPF_Parm )
// int                            nInstanceNo                    ( CPF_Parm )

void UcUIDataStore_GameFlowManager::OnDistrictEnter ( int nDistrictUID, int nInstanceNo )
{
	static UFunction* pFnOnDistrictEnter = NULL;

	if ( ! pFnOnDistrictEnter )
		pFnOnDistrictEnter = (UFunction*) UObject::GObjObjects()->Data[ 36392 ];

	UcUIDataStore_GameFlowManager_execOnDistrictEnter_Parms OnDistrictEnter_Parms;
	OnDistrictEnter_Parms.nDistrictUID = nDistrictUID;
	OnDistrictEnter_Parms.nInstanceNo = nInstanceNo;

	pFnOnDistrictEnter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDistrictEnter, &OnDistrictEnter_Parms, NULL );

	pFnOnDistrictEnter->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OnWorldEnter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCharacterUID                  ( CPF_Parm )

void UcUIDataStore_GameFlowManager::OnWorldEnter ( int nCharacterUID )
{
	static UFunction* pFnOnWorldEnter = NULL;

	if ( ! pFnOnWorldEnter )
		pFnOnWorldEnter = (UFunction*) UObject::GObjObjects()->Data[ 36390 ];

	UcUIDataStore_GameFlowManager_execOnWorldEnter_Parms OnWorldEnter_Parms;
	OnWorldEnter_Parms.nCharacterUID = nCharacterUID;

	pFnOnWorldEnter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnWorldEnter, &OnWorldEnter_Parms, NULL );

	pFnOnWorldEnter->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.ShowLoadingScreen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bShow                          ( CPF_Parm )

void UcUIDataStore_GameFlowManager::ShowLoadingScreen ( unsigned long bShow )
{
	static UFunction* pFnShowLoadingScreen = NULL;

	if ( ! pFnShowLoadingScreen )
		pFnShowLoadingScreen = (UFunction*) UObject::GObjObjects()->Data[ 36388 ];

	UcUIDataStore_GameFlowManager_execShowLoadingScreen_Parms ShowLoadingScreen_Parms;
	ShowLoadingScreen_Parms.bShow = bShow;

	pFnShowLoadingScreen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowLoadingScreen, &ShowLoadingScreen_Parms, NULL );

	pFnShowLoadingScreen->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.DisplayDisconnectErrorMessage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nReason                        ( CPF_Parm )
// struct FString                 sInfo                          ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_GameFlowManager::DisplayDisconnectErrorMessage ( int nReason, struct FString sInfo )
{
	static UFunction* pFnDisplayDisconnectErrorMessage = NULL;

	if ( ! pFnDisplayDisconnectErrorMessage )
		pFnDisplayDisconnectErrorMessage = (UFunction*) UObject::GObjObjects()->Data[ 36385 ];

	UcUIDataStore_GameFlowManager_execDisplayDisconnectErrorMessage_Parms DisplayDisconnectErrorMessage_Parms;
	DisplayDisconnectErrorMessage_Parms.nReason = nReason;
	memcpy ( &DisplayDisconnectErrorMessage_Parms.sInfo, &sInfo, 0xC );

	pFnDisplayDisconnectErrorMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDisplayDisconnectErrorMessage, &DisplayDisconnectErrorMessage_Parms, NULL );

	pFnDisplayDisconnectErrorMessage->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OpenIntroMovieScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_GameFlowManager::OpenIntroMovieScene ( )
{
	static UFunction* pFnOpenIntroMovieScene = NULL;

	if ( ! pFnOpenIntroMovieScene )
		pFnOpenIntroMovieScene = (UFunction*) UObject::GObjObjects()->Data[ 36384 ];

	UcUIDataStore_GameFlowManager_execOpenIntroMovieScene_Parms OpenIntroMovieScene_Parms;

	pFnOpenIntroMovieScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenIntroMovieScene, &OpenIntroMovieScene_Parms, NULL );

	pFnOpenIntroMovieScene->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OpenLoginScreen
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_GameFlowManager::OpenLoginScreen ( )
{
	static UFunction* pFnOpenLoginScreen = NULL;

	if ( ! pFnOpenLoginScreen )
		pFnOpenLoginScreen = (UFunction*) UObject::GObjObjects()->Data[ 36383 ];

	UcUIDataStore_GameFlowManager_execOpenLoginScreen_Parms OpenLoginScreen_Parms;

	pFnOpenLoginScreen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenLoginScreen, &OpenLoginScreen_Parms, NULL );

	pFnOpenLoginScreen->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.InitBaseScene
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_GameFlowManager::InitBaseScene ( )
{
	static UFunction* pFnInitBaseScene = NULL;

	if ( ! pFnInitBaseScene )
		pFnInitBaseScene = (UFunction*) UObject::GObjObjects()->Data[ 36382 ];

	UcUIDataStore_GameFlowManager_execInitBaseScene_Parms InitBaseScene_Parms;

	pFnInitBaseScene->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitBaseScene, &InitBaseScene_Parms, NULL );

	pFnInitBaseScene->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OnWorldQueueStatusUpdate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPosition                      ( CPF_Parm )
// int                            nSize                          ( CPF_Parm )
// int                            nEstimatedWait                 ( CPF_Parm )

void UcUIDataStore_GameFlowManager::OnWorldQueueStatusUpdate ( int nPosition, int nSize, int nEstimatedWait )
{
	static UFunction* pFnOnWorldQueueStatusUpdate = NULL;

	if ( ! pFnOnWorldQueueStatusUpdate )
		pFnOnWorldQueueStatusUpdate = (UFunction*) UObject::GObjObjects()->Data[ 36378 ];

	UcUIDataStore_GameFlowManager_execOnWorldQueueStatusUpdate_Parms OnWorldQueueStatusUpdate_Parms;
	OnWorldQueueStatusUpdate_Parms.nPosition = nPosition;
	OnWorldQueueStatusUpdate_Parms.nSize = nSize;
	OnWorldQueueStatusUpdate_Parms.nEstimatedWait = nEstimatedWait;

	pFnOnWorldQueueStatusUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnWorldQueueStatusUpdate, &OnWorldQueueStatusUpdate_Parms, NULL );

	pFnOnWorldQueueStatusUpdate->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_GameFlowManager.OnWorldStatusUpdated
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_GameFlowManager::OnWorldStatusUpdated ( )
{
	static UFunction* pFnOnWorldStatusUpdated = NULL;

	if ( ! pFnOnWorldStatusUpdated )
		pFnOnWorldStatusUpdated = (UFunction*) UObject::GObjObjects()->Data[ 36377 ];

	UcUIDataStore_GameFlowManager_execOnWorldStatusUpdated_Parms OnWorldStatusUpdated_Parms;

	pFnOnWorldStatusUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnWorldStatusUpdated, &OnWorldStatusUpdated_Parms, NULL );

	pFnOnWorldStatusUpdated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Lobby.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Lobby::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37052 ];

	UcUIDataStore_Lobby_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_Contact_Buyoff.OnPayForHeatFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Contact_Buyoff::OnPayForHeatFailure ( )
{
	static UFunction* pFnOnPayForHeatFailure = NULL;

	if ( ! pFnOnPayForHeatFailure )
		pFnOnPayForHeatFailure = (UFunction*) UObject::GObjObjects()->Data[ 33806 ];

	UcUIAction_Contact_Buyoff_execOnPayForHeatFailure_Parms OnPayForHeatFailure_Parms;

	pFnOnPayForHeatFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPayForHeatFailure, &OnPayForHeatFailure_Parms, NULL );

	pFnOnPayForHeatFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Contact_Buyoff.OnPayForHeatSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Contact_Buyoff::OnPayForHeatSuccess ( )
{
	static UFunction* pFnOnPayForHeatSuccess = NULL;

	if ( ! pFnOnPayForHeatSuccess )
		pFnOnPayForHeatSuccess = (UFunction*) UObject::GObjObjects()->Data[ 33805 ];

	UcUIAction_Contact_Buyoff_execOnPayForHeatSuccess_Parms OnPayForHeatSuccess_Parms;

	pFnOnPayForHeatSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPayForHeatSuccess, &OnPayForHeatSuccess_Parms, NULL );

	pFnOnPayForHeatSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Contact_Action_Buyoff.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Contact_Action_Buyoff::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 36021 ];

	UcUIDataStore_Contact_Action_Buyoff_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Contact_ContactInfo.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Contact_ContactInfo::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36036 ];

	UcUIDataStore_Contact_ContactInfo_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Contact_ContactInfo.GetInstance
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// class UcUIDataStore_Contact_ContactInfo* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UcUIDataStore_Contact_ContactInfo* UcUIDataStore_Contact_ContactInfo::GetInstance ( )
{
	static UFunction* pFnGetInstance = NULL;

	if ( ! pFnGetInstance )
		pFnGetInstance = (UFunction*) UObject::GObjObjects()->Data[ 36034 ];

	UcUIDataStore_Contact_ContactInfo_execGetInstance_Parms GetInstance_Parms;

	pFnGetInstance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInstance, &GetInstance_Parms, NULL );

	pFnGetInstance->FunctionFlags |= 0x400;

	return GetInstance_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Contact_ContactInfo.Close
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Contact_ContactInfo::Close ( )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = (UFunction*) UObject::GObjObjects()->Data[ 36032 ];

	UcUIDataStore_Contact_ContactInfo_execClose_Parms Close_Parms;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;

	return Close_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Contact_ContactInfo.Open
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class AActor*                  pContact                       ( CPF_Parm )
// unsigned long                  bCloseMainScenes               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRemote                        ( CPF_OptionalParm | CPF_Parm )

bool UcUIDataStore_Contact_ContactInfo::Open ( class AActor* pContact, unsigned long bCloseMainScenes, unsigned long bRemote )
{
	static UFunction* pFnOpen = NULL;

	if ( ! pFnOpen )
		pFnOpen = (UFunction*) UObject::GObjObjects()->Data[ 36027 ];

	UcUIDataStore_Contact_ContactInfo_execOpen_Parms Open_Parms;
	Open_Parms.pContact = pContact;
	Open_Parms.bCloseMainScenes = bCloseMainScenes;
	Open_Parms.bRemote = bRemote;

	pFnOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpen, &Open_Parms, NULL );

	pFnOpen->FunctionFlags |= 0x400;

	return Open_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_DepInv_Inventory.OnInventoryChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_DepInv_Inventory::OnInventoryChanged ( )
{
	static UFunction* pFnOnInventoryChanged = NULL;

	if ( ! pFnOnInventoryChanged )
		pFnOnInventoryChanged = (UFunction*) UObject::GObjObjects()->Data[ 36187 ];

	UcUIDataStore_DepInv_Inventory_execOnInventoryChanged_Parms OnInventoryChanged_Parms;

	pFnOnInventoryChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInventoryChanged, &OnInventoryChanged_Parms, NULL );

	pFnOnInventoryChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_DepInv_Inventory.OnInventoryChangedGameCallback
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UcUIDataStore_DepInv_Inventory::OnInventoryChangedGameCallback ( )
{
	static UFunction* pFnOnInventoryChangedGameCallback = NULL;

	if ( ! pFnOnInventoryChangedGameCallback )
		pFnOnInventoryChangedGameCallback = (UFunction*) UObject::GObjObjects()->Data[ 36186 ];

	UcUIDataStore_DepInv_Inventory_execOnInventoryChangedGameCallback_Parms OnInventoryChangedGameCallback_Parms;

	pFnOnInventoryChangedGameCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInventoryChangedGameCallback, &OnInventoryChangedGameCallback_Parms, NULL );

	pFnOnInventoryChangedGameCallback->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_DepInv2_Inventory.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_DepInv2_Inventory::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36169 ];

	UcUIDataStore_DepInv2_Inventory_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_DepInv2_Inventory.SetNoSelectedSlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_DepInv2_Inventory::SetNoSelectedSlot ( )
{
	static UFunction* pFnSetNoSelectedSlot = NULL;

	if ( ! pFnSetNoSelectedSlot )
		pFnSetNoSelectedSlot = (UFunction*) UObject::GObjObjects()->Data[ 36168 ];

	UcUIDataStore_DepInv2_Inventory_execSetNoSelectedSlot_Parms SetNoSelectedSlot_Parms;

	pFnSetNoSelectedSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNoSelectedSlot, &SetNoSelectedSlot_Parms, NULL );

	pFnSetNoSelectedSlot->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_DepInv2_Inventory.OnInventoryChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_DepInv2_Inventory::OnInventoryChanged ( )
{
	static UFunction* pFnOnInventoryChanged = NULL;

	if ( ! pFnOnInventoryChanged )
		pFnOnInventoryChanged = (UFunction*) UObject::GObjObjects()->Data[ 36167 ];

	UcUIDataStore_DepInv2_Inventory_execOnInventoryChanged_Parms OnInventoryChanged_Parms;

	pFnOnInventoryChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInventoryChanged, &OnInventoryChanged_Parms, NULL );

	pFnOnInventoryChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_IGS_Inspect_Character.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_IGS_Inspect_Character::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36940 ];

	UcUIDataStore_IGS_Inspect_Character_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_IGS_Inspect_Character.Native_NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_IGS_Inspect_Character::Native_NotifyGameSessionEnded ( )
{
	static UFunction* pFnNative_NotifyGameSessionEnded = NULL;

	if ( ! pFnNative_NotifyGameSessionEnded )
		pFnNative_NotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36939 ];

	UcUIDataStore_IGS_Inspect_Character_execNative_NotifyGameSessionEnded_Parms Native_NotifyGameSessionEnded_Parms;

	pFnNative_NotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNative_NotifyGameSessionEnded, &Native_NotifyGameSessionEnded_Parms, NULL );

	pFnNative_NotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_IGS_PlayerInfo_Character.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_IGS_PlayerInfo_Character::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37007 ];

	UcUIDataStore_IGS_PlayerInfo_Character_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_StoInv_Inventory.OnInventoryChanged
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UcUIDataStore_StoInv_Inventory::OnInventoryChanged ( )
{
	static UFunction* pFnOnInventoryChanged = NULL;

	if ( ! pFnOnInventoryChanged )
		pFnOnInventoryChanged = (UFunction*) UObject::GObjObjects()->Data[ 37825 ];

	UcUIDataStore_StoInv_Inventory_execOnInventoryChanged_Parms OnInventoryChanged_Parms;

	pFnOnInventoryChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInventoryChanged, &OnInventoryChanged_Parms, NULL );

	pFnOnInventoryChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_StoInv2_CopyItem.OnItemCopied
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eErr                           ( CPF_Parm )
// struct FGuid                   Item                           ( CPF_Parm )
// int                            eOperation                     ( CPF_Parm )
// struct FPointer                pUserData                      ( CPF_Parm )

void UcUIAction_StoInv2_CopyItem::OnItemCopied ( int eErr, struct FGuid Item, int eOperation, struct FPointer pUserData )
{
	static UFunction* pFnOnItemCopied = NULL;

	if ( ! pFnOnItemCopied )
		pFnOnItemCopied = (UFunction*) UObject::GObjObjects()->Data[ 35264 ];

	UcUIAction_StoInv2_CopyItem_execOnItemCopied_Parms OnItemCopied_Parms;
	OnItemCopied_Parms.eErr = eErr;
	memcpy ( &OnItemCopied_Parms.Item, &Item, 0x10 );
	OnItemCopied_Parms.eOperation = eOperation;
	memcpy ( &OnItemCopied_Parms.pUserData, &pUserData, 0x4 );

	pFnOnItemCopied->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnItemCopied, &OnItemCopied_Parms, NULL );

	pFnOnItemCopied->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_StoInv2_GetMsExtension.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIAction_StoInv2_GetMsExtension::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 35274 ];

	UcUIAction_StoInv2_GetMsExtension_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_StoInv2_OpenStorageInventory.OnInventoryClosed
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_StoInv2_OpenStorageInventory::OnInventoryClosed ( )
{
	static UFunction* pFnOnInventoryClosed = NULL;

	if ( ! pFnOnInventoryClosed )
		pFnOnInventoryClosed = (UFunction*) UObject::GObjObjects()->Data[ 35294 ];

	UcUIAction_StoInv2_OpenStorageInventory_execOnInventoryClosed_Parms OnInventoryClosed_Parms;

	pFnOnInventoryClosed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInventoryClosed, &OnInventoryClosed_Parms, NULL );

	pFnOnInventoryClosed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_StoInv2_SetMsExtension.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIAction_StoInv2_SetMsExtension::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 35296 ];

	UcUIAction_StoInv2_SetMsExtension_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_StoInv2_Inventory.OnInventoryChanged
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UcUIDataStore_StoInv2_Inventory::OnInventoryChanged ( )
{
	static UFunction* pFnOnInventoryChanged = NULL;

	if ( ! pFnOnInventoryChanged )
		pFnOnInventoryChanged = (UFunction*) UObject::GObjObjects()->Data[ 37796 ];

	UcUIDataStore_StoInv2_Inventory_execOnInventoryChanged_Parms OnInventoryChanged_Parms;

	pFnOnInventoryChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnInventoryChanged, &OnInventoryChanged_Parms, NULL );

	pFnOnInventoryChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_TM_CreateTeam.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIAction_TM_CreateTeam::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 35404 ];

	UcUIAction_TM_CreateTeam_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_TM_CreateTeam.Processed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_TM_CreateTeam::Processed ( int nError )
{
	static UFunction* pFnProcessed = NULL;

	if ( ! pFnProcessed )
		pFnProcessed = (UFunction*) UObject::GObjObjects()->Data[ 35402 ];

	UcUIAction_TM_CreateTeam_execProcessed_Parms Processed_Parms;
	Processed_Parms.nError = nError;

	pFnProcessed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessed, &Processed_Parms, NULL );

	pFnProcessed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_TM_TeamMembersList.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_TM_TeamMembersList::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37911 ];

	UcUIDataStore_TM_TeamMembersList_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_TM_TeamProfile.OnTeamSymbolChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_TM_TeamProfile::OnTeamSymbolChanged ( )
{
	static UFunction* pFnOnTeamSymbolChanged = NULL;

	if ( ! pFnOnTeamSymbolChanged )
		pFnOnTeamSymbolChanged = (UFunction*) UObject::GObjObjects()->Data[ 37920 ];

	UcUIDataStore_TM_TeamProfile_execOnTeamSymbolChanged_Parms OnTeamSymbolChanged_Parms;

	pFnOnTeamSymbolChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnTeamSymbolChanged, &OnTeamSymbolChanged_Parms, NULL );

	pFnOnTeamSymbolChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_TM_TeamProfile.OnPermissionsChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_TM_TeamProfile::OnPermissionsChanged ( )
{
	static UFunction* pFnOnPermissionsChanged = NULL;

	if ( ! pFnOnPermissionsChanged )
		pFnOnPermissionsChanged = (UFunction*) UObject::GObjObjects()->Data[ 37919 ];

	UcUIDataStore_TM_TeamProfile_execOnPermissionsChanged_Parms OnPermissionsChanged_Parms;

	pFnOnPermissionsChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPermissionsChanged, &OnPermissionsChanged_Parms, NULL );

	pFnOnPermissionsChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_TM_TeamProfile.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_TM_TeamProfile::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37918 ];

	UcUIDataStore_TM_TeamProfile_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_O_PlayerProfile.OnAudioOptionsSceneActivated
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_O_PlayerProfile::OnAudioOptionsSceneActivated ( )
{
	static UFunction* pFnOnAudioOptionsSceneActivated = NULL;

	if ( ! pFnOnAudioOptionsSceneActivated )
		pFnOnAudioOptionsSceneActivated = (UFunction*) UObject::GObjObjects()->Data[ 37454 ];

	UcUIDataStore_O_PlayerProfile_execOnAudioOptionsSceneActivated_Parms OnAudioOptionsSceneActivated_Parms;

	pFnOnAudioOptionsSceneActivated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAudioOptionsSceneActivated, &OnAudioOptionsSceneActivated_Parms, NULL );

	pFnOnAudioOptionsSceneActivated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_O_PlayerProfile.OnAppliedStateChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_O_PlayerProfile::OnAppliedStateChanged ( )
{
	static UFunction* pFnOnAppliedStateChanged = NULL;

	if ( ! pFnOnAppliedStateChanged )
		pFnOnAppliedStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 37453 ];

	UcUIDataStore_O_PlayerProfile_execOnAppliedStateChanged_Parms OnAppliedStateChanged_Parms;

	pFnOnAppliedStateChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAppliedStateChanged, &OnAppliedStateChanged_Parms, NULL );

	pFnOnAppliedStateChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_O_PlayerProfile.OnCurrentStateChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_O_PlayerProfile::OnCurrentStateChanged ( )
{
	static UFunction* pFnOnCurrentStateChanged = NULL;

	if ( ! pFnOnCurrentStateChanged )
		pFnOnCurrentStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 37452 ];

	UcUIDataStore_O_PlayerProfile_execOnCurrentStateChanged_Parms OnCurrentStateChanged_Parms;

	pFnOnCurrentStateChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCurrentStateChanged, &OnCurrentStateChanged_Parms, NULL );

	pFnOnCurrentStateChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Marketplace_AuctionItem.OnFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Marketplace_AuctionItem::OnFailure ( int nError )
{
	static UFunction* pFnOnFailure = NULL;

	if ( ! pFnOnFailure )
		pFnOnFailure = (UFunction*) UObject::GObjObjects()->Data[ 34352 ];

	UcUIAction_Marketplace_AuctionItem_execOnFailure_Parms OnFailure_Parms;
	OnFailure_Parms.nError = nError;

	pFnOnFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFailure, &OnFailure_Parms, NULL );

	pFnOnFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Marketplace_AuctionItem.OnSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Marketplace_AuctionItem::OnSuccess ( )
{
	static UFunction* pFnOnSuccess = NULL;

	if ( ! pFnOnSuccess )
		pFnOnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34351 ];

	UcUIAction_Marketplace_AuctionItem_execOnSuccess_Parms OnSuccess_Parms;

	pFnOnSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSuccess, &OnSuccess_Parms, NULL );

	pFnOnSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Marketplace_CancelAuction.OnFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Marketplace_CancelAuction::OnFailure ( int nError )
{
	static UFunction* pFnOnFailure = NULL;

	if ( ! pFnOnFailure )
		pFnOnFailure = (UFunction*) UObject::GObjObjects()->Data[ 34369 ];

	UcUIAction_Marketplace_CancelAuction_execOnFailure_Parms OnFailure_Parms;
	OnFailure_Parms.nError = nError;

	pFnOnFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFailure, &OnFailure_Parms, NULL );

	pFnOnFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Marketplace_CancelAuction.OnSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Marketplace_CancelAuction::OnSuccess ( )
{
	static UFunction* pFnOnSuccess = NULL;

	if ( ! pFnOnSuccess )
		pFnOnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34368 ];

	UcUIAction_Marketplace_CancelAuction_execOnSuccess_Parms OnSuccess_Parms;

	pFnOnSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSuccess, &OnSuccess_Parms, NULL );

	pFnOnSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Marketplace_CompleteCreatorName.OnHostingFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Marketplace_CompleteCreatorName::OnHostingFailure ( int nError )
{
	static UFunction* pFnOnHostingFailure = NULL;

	if ( ! pFnOnHostingFailure )
		pFnOnHostingFailure = (UFunction*) UObject::GObjObjects()->Data[ 34381 ];

	UcUIAction_Marketplace_CompleteCreatorName_execOnHostingFailure_Parms OnHostingFailure_Parms;
	OnHostingFailure_Parms.nError = nError;

	pFnOnHostingFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHostingFailure, &OnHostingFailure_Parms, NULL );

	pFnOnHostingFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Marketplace_CompleteCreatorName.OnHostingSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Marketplace_CompleteCreatorName::OnHostingSuccess ( )
{
	static UFunction* pFnOnHostingSuccess = NULL;

	if ( ! pFnOnHostingSuccess )
		pFnOnHostingSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34380 ];

	UcUIAction_Marketplace_CompleteCreatorName_execOnHostingSuccess_Parms OnHostingSuccess_Parms;

	pFnOnHostingSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHostingSuccess, &OnHostingSuccess_Parms, NULL );

	pFnOnHostingSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Marketplace_PlaceBid.OnFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Marketplace_PlaceBid::OnFailure ( int nError )
{
	static UFunction* pFnOnFailure = NULL;

	if ( ! pFnOnFailure )
		pFnOnFailure = (UFunction*) UObject::GObjObjects()->Data[ 34392 ];

	UcUIAction_Marketplace_PlaceBid_execOnFailure_Parms OnFailure_Parms;
	OnFailure_Parms.nError = nError;

	pFnOnFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFailure, &OnFailure_Parms, NULL );

	pFnOnFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Marketplace_PlaceBid.OnSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Marketplace_PlaceBid::OnSuccess ( )
{
	static UFunction* pFnOnSuccess = NULL;

	if ( ! pFnOnSuccess )
		pFnOnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34391 ];

	UcUIAction_Marketplace_PlaceBid_execOnSuccess_Parms OnSuccess_Parms;

	pFnOnSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSuccess, &OnSuccess_Parms, NULL );

	pFnOnSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.NotifyGameSessionEndedNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Marketplace::NotifyGameSessionEndedNative ( )
{
	static UFunction* pFnNotifyGameSessionEndedNative = NULL;

	if ( ! pFnNotifyGameSessionEndedNative )
		pFnNotifyGameSessionEndedNative = (UFunction*) UObject::GObjObjects()->Data[ 37247 ];

	UcUIDataStore_Marketplace_execNotifyGameSessionEndedNative_Parms NotifyGameSessionEndedNative_Parms;

	pFnNotifyGameSessionEndedNative->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyGameSessionEndedNative, &NotifyGameSessionEndedNative_Parms, NULL );

	pFnNotifyGameSessionEndedNative->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Marketplace::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37245 ];

	UcUIDataStore_Marketplace_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnHostingCleanup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnHostingCleanup ( int nCurrency )
{
	static UFunction* pFnOnHostingCleanup = NULL;

	if ( ! pFnOnHostingCleanup )
		pFnOnHostingCleanup = (UFunction*) UObject::GObjObjects()->Data[ 37243 ];

	UcUIDataStore_Marketplace_execOnHostingCleanup_Parms OnHostingCleanup_Parms;
	OnHostingCleanup_Parms.nCurrency = nCurrency;

	pFnOnHostingCleanup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHostingCleanup, &OnHostingCleanup_Parms, NULL );

	pFnOnHostingCleanup->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnHostingDataChanged_GetItemFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )
// int                            nAuctionID                     ( CPF_Parm )

void UcUIDataStore_Marketplace::OnHostingDataChanged_GetItemFailure ( int nCurrency, int nAuctionID )
{
	static UFunction* pFnOnHostingDataChanged_GetItemFailure = NULL;

	if ( ! pFnOnHostingDataChanged_GetItemFailure )
		pFnOnHostingDataChanged_GetItemFailure = (UFunction*) UObject::GObjObjects()->Data[ 37240 ];

	UcUIDataStore_Marketplace_execOnHostingDataChanged_GetItemFailure_Parms OnHostingDataChanged_GetItemFailure_Parms;
	OnHostingDataChanged_GetItemFailure_Parms.nCurrency = nCurrency;
	OnHostingDataChanged_GetItemFailure_Parms.nAuctionID = nAuctionID;

	pFnOnHostingDataChanged_GetItemFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHostingDataChanged_GetItemFailure, &OnHostingDataChanged_GetItemFailure_Parms, NULL );

	pFnOnHostingDataChanged_GetItemFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnHostingDataChanged_GetItemSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )
// int                            nAuctionID                     ( CPF_Parm )
// struct FString                 sItemXMLData                   ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Marketplace::OnHostingDataChanged_GetItemSuccess ( int nCurrency, int nAuctionID, struct FString sItemXMLData )
{
	static UFunction* pFnOnHostingDataChanged_GetItemSuccess = NULL;

	if ( ! pFnOnHostingDataChanged_GetItemSuccess )
		pFnOnHostingDataChanged_GetItemSuccess = (UFunction*) UObject::GObjObjects()->Data[ 37236 ];

	UcUIDataStore_Marketplace_execOnHostingDataChanged_GetItemSuccess_Parms OnHostingDataChanged_GetItemSuccess_Parms;
	OnHostingDataChanged_GetItemSuccess_Parms.nCurrency = nCurrency;
	OnHostingDataChanged_GetItemSuccess_Parms.nAuctionID = nAuctionID;
	memcpy ( &OnHostingDataChanged_GetItemSuccess_Parms.sItemXMLData, &sItemXMLData, 0xC );

	pFnOnHostingDataChanged_GetItemSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHostingDataChanged_GetItemSuccess, &OnHostingDataChanged_GetItemSuccess_Parms, NULL );

	pFnOnHostingDataChanged_GetItemSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListEntryDeleted_ReviewBidList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListEntryDeleted_ReviewBidList ( int nCurrency )
{
	static UFunction* pFnOnAuctionListEntryDeleted_ReviewBidList = NULL;

	if ( ! pFnOnAuctionListEntryDeleted_ReviewBidList )
		pFnOnAuctionListEntryDeleted_ReviewBidList = (UFunction*) UObject::GObjObjects()->Data[ 37234 ];

	UcUIDataStore_Marketplace_execOnAuctionListEntryDeleted_ReviewBidList_Parms OnAuctionListEntryDeleted_ReviewBidList_Parms;
	OnAuctionListEntryDeleted_ReviewBidList_Parms.nCurrency = nCurrency;

	pFnOnAuctionListEntryDeleted_ReviewBidList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListEntryDeleted_ReviewBidList, &OnAuctionListEntryDeleted_ReviewBidList_Parms, NULL );

	pFnOnAuctionListEntryDeleted_ReviewBidList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListEntryDeleted_SellList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListEntryDeleted_SellList ( int nCurrency )
{
	static UFunction* pFnOnAuctionListEntryDeleted_SellList = NULL;

	if ( ! pFnOnAuctionListEntryDeleted_SellList )
		pFnOnAuctionListEntryDeleted_SellList = (UFunction*) UObject::GObjObjects()->Data[ 37232 ];

	UcUIDataStore_Marketplace_execOnAuctionListEntryDeleted_SellList_Parms OnAuctionListEntryDeleted_SellList_Parms;
	OnAuctionListEntryDeleted_SellList_Parms.nCurrency = nCurrency;

	pFnOnAuctionListEntryDeleted_SellList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListEntryDeleted_SellList, &OnAuctionListEntryDeleted_SellList_Parms, NULL );

	pFnOnAuctionListEntryDeleted_SellList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListEntryDeleted_BidList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListEntryDeleted_BidList ( int nCurrency )
{
	static UFunction* pFnOnAuctionListEntryDeleted_BidList = NULL;

	if ( ! pFnOnAuctionListEntryDeleted_BidList )
		pFnOnAuctionListEntryDeleted_BidList = (UFunction*) UObject::GObjObjects()->Data[ 37230 ];

	UcUIDataStore_Marketplace_execOnAuctionListEntryDeleted_BidList_Parms OnAuctionListEntryDeleted_BidList_Parms;
	OnAuctionListEntryDeleted_BidList_Parms.nCurrency = nCurrency;

	pFnOnAuctionListEntryDeleted_BidList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListEntryDeleted_BidList, &OnAuctionListEntryDeleted_BidList_Parms, NULL );

	pFnOnAuctionListEntryDeleted_BidList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListModified_ReviewBidList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListModified_ReviewBidList ( int nCurrency )
{
	static UFunction* pFnOnAuctionListModified_ReviewBidList = NULL;

	if ( ! pFnOnAuctionListModified_ReviewBidList )
		pFnOnAuctionListModified_ReviewBidList = (UFunction*) UObject::GObjObjects()->Data[ 37228 ];

	UcUIDataStore_Marketplace_execOnAuctionListModified_ReviewBidList_Parms OnAuctionListModified_ReviewBidList_Parms;
	OnAuctionListModified_ReviewBidList_Parms.nCurrency = nCurrency;

	pFnOnAuctionListModified_ReviewBidList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListModified_ReviewBidList, &OnAuctionListModified_ReviewBidList_Parms, NULL );

	pFnOnAuctionListModified_ReviewBidList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListModified_SellList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListModified_SellList ( int nCurrency )
{
	static UFunction* pFnOnAuctionListModified_SellList = NULL;

	if ( ! pFnOnAuctionListModified_SellList )
		pFnOnAuctionListModified_SellList = (UFunction*) UObject::GObjObjects()->Data[ 37226 ];

	UcUIDataStore_Marketplace_execOnAuctionListModified_SellList_Parms OnAuctionListModified_SellList_Parms;
	OnAuctionListModified_SellList_Parms.nCurrency = nCurrency;

	pFnOnAuctionListModified_SellList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListModified_SellList, &OnAuctionListModified_SellList_Parms, NULL );

	pFnOnAuctionListModified_SellList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListModified_BidList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListModified_BidList ( int nCurrency )
{
	static UFunction* pFnOnAuctionListModified_BidList = NULL;

	if ( ! pFnOnAuctionListModified_BidList )
		pFnOnAuctionListModified_BidList = (UFunction*) UObject::GObjObjects()->Data[ 37224 ];

	UcUIDataStore_Marketplace_execOnAuctionListModified_BidList_Parms OnAuctionListModified_BidList_Parms;
	OnAuctionListModified_BidList_Parms.nCurrency = nCurrency;

	pFnOnAuctionListModified_BidList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListModified_BidList, &OnAuctionListModified_BidList_Parms, NULL );

	pFnOnAuctionListModified_BidList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListReceived_Failed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListReceived_Failed ( int nError )
{
	static UFunction* pFnOnAuctionListReceived_Failed = NULL;

	if ( ! pFnOnAuctionListReceived_Failed )
		pFnOnAuctionListReceived_Failed = (UFunction*) UObject::GObjObjects()->Data[ 37222 ];

	UcUIDataStore_Marketplace_execOnAuctionListReceived_Failed_Parms OnAuctionListReceived_Failed_Parms;
	OnAuctionListReceived_Failed_Parms.nError = nError;

	pFnOnAuctionListReceived_Failed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListReceived_Failed, &OnAuctionListReceived_Failed_Parms, NULL );

	pFnOnAuctionListReceived_Failed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListReceived_ReviewBidList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListReceived_ReviewBidList ( int nCurrency )
{
	static UFunction* pFnOnAuctionListReceived_ReviewBidList = NULL;

	if ( ! pFnOnAuctionListReceived_ReviewBidList )
		pFnOnAuctionListReceived_ReviewBidList = (UFunction*) UObject::GObjObjects()->Data[ 37220 ];

	UcUIDataStore_Marketplace_execOnAuctionListReceived_ReviewBidList_Parms OnAuctionListReceived_ReviewBidList_Parms;
	OnAuctionListReceived_ReviewBidList_Parms.nCurrency = nCurrency;

	pFnOnAuctionListReceived_ReviewBidList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListReceived_ReviewBidList, &OnAuctionListReceived_ReviewBidList_Parms, NULL );

	pFnOnAuctionListReceived_ReviewBidList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListReceived_SellList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListReceived_SellList ( int nCurrency )
{
	static UFunction* pFnOnAuctionListReceived_SellList = NULL;

	if ( ! pFnOnAuctionListReceived_SellList )
		pFnOnAuctionListReceived_SellList = (UFunction*) UObject::GObjObjects()->Data[ 37218 ];

	UcUIDataStore_Marketplace_execOnAuctionListReceived_SellList_Parms OnAuctionListReceived_SellList_Parms;
	OnAuctionListReceived_SellList_Parms.nCurrency = nCurrency;

	pFnOnAuctionListReceived_SellList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListReceived_SellList, &OnAuctionListReceived_SellList_Parms, NULL );

	pFnOnAuctionListReceived_SellList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OnAuctionListReceived_BidList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCurrency                      ( CPF_Parm )

void UcUIDataStore_Marketplace::OnAuctionListReceived_BidList ( int nCurrency )
{
	static UFunction* pFnOnAuctionListReceived_BidList = NULL;

	if ( ! pFnOnAuctionListReceived_BidList )
		pFnOnAuctionListReceived_BidList = (UFunction*) UObject::GObjObjects()->Data[ 37216 ];

	UcUIDataStore_Marketplace_execOnAuctionListReceived_BidList_Parms OnAuctionListReceived_BidList_Parms;
	OnAuctionListReceived_BidList_Parms.nCurrency = nCurrency;

	pFnOnAuctionListReceived_BidList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnAuctionListReceived_BidList, &OnAuctionListReceived_BidList_Parms, NULL );

	pFnOnAuctionListReceived_BidList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.CloseMarketplace
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Marketplace::CloseMarketplace ( )
{
	static UFunction* pFnCloseMarketplace = NULL;

	if ( ! pFnCloseMarketplace )
		pFnCloseMarketplace = (UFunction*) UObject::GObjObjects()->Data[ 37215 ];

	UcUIDataStore_Marketplace_execCloseMarketplace_Parms CloseMarketplace_Parms;

	pFnCloseMarketplace->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseMarketplace, &CloseMarketplace_Parms, NULL );

	pFnCloseMarketplace->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.OpenMarketplace
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FScriptDelegate         ClosedCallback                 ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Marketplace::OpenMarketplace ( struct FScriptDelegate ClosedCallback )
{
	static UFunction* pFnOpenMarketplace = NULL;

	if ( ! pFnOpenMarketplace )
		pFnOpenMarketplace = (UFunction*) UObject::GObjObjects()->Data[ 37213 ];

	UcUIDataStore_Marketplace_execOpenMarketplace_Parms OpenMarketplace_Parms;
	memcpy ( &OpenMarketplace_Parms.ClosedCallback, &ClosedCallback, 0xC );

	pFnOpenMarketplace->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOpenMarketplace, &OpenMarketplace_Parms, NULL );

	pFnOpenMarketplace->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Marketplace.MarketplaceClosed
// [0x00120000] 
// Parameters infos:

void UcUIDataStore_Marketplace::MarketplaceClosed ( )
{
	static UFunction* pFnMarketplaceClosed = NULL;

	if ( ! pFnMarketplaceClosed )
		pFnMarketplaceClosed = (UFunction*) UObject::GObjObjects()->Data[ 37185 ];

	UcUIDataStore_Marketplace_execMarketplaceClosed_Parms MarketplaceClosed_Parms;

	this->ProcessEvent ( pFnMarketplaceClosed, &MarketplaceClosed_Parms, NULL );
};

// Function APBUserInterface.cUIAction_Mail_DetachCash.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIAction_Mail_DetachCash::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 34313 ];

	UcUIAction_Mail_DetachCash_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_Mail_DetachCash.OnCashDetached
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Mail_DetachCash::OnCashDetached ( int nError )
{
	static UFunction* pFnOnCashDetached = NULL;

	if ( ! pFnOnCashDetached )
		pFnOnCashDetached = (UFunction*) UObject::GObjObjects()->Data[ 34311 ];

	UcUIAction_Mail_DetachCash_execOnCashDetached_Parms OnCashDetached_Parms;
	OnCashDetached_Parms.nError = nError;

	pFnOnCashDetached->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCashDetached, &OnCashDetached_Parms, NULL );

	pFnOnCashDetached->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Mail_DetachItem.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIAction_Mail_DetachItem::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = (UFunction*) UObject::GObjObjects()->Data[ 34322 ];

	UcUIAction_Mail_DetachItem_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_Mail_DetachItem.OnItemDetached
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Mail_DetachItem::OnItemDetached ( int nError )
{
	static UFunction* pFnOnItemDetached = NULL;

	if ( ! pFnOnItemDetached )
		pFnOnItemDetached = (UFunction*) UObject::GObjObjects()->Data[ 34320 ];

	UcUIAction_Mail_DetachItem_execOnItemDetached_Parms OnItemDetached_Parms;
	OnItemDetached_Parms.nError = nError;

	pFnOnItemDetached->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnItemDetached, &OnItemDetached_Parms, NULL );

	pFnOnItemDetached->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Mail_SendMessage.OnMailSendFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Mail_SendMessage::OnMailSendFailed ( int nError )
{
	static UFunction* pFnOnMailSendFailed = NULL;

	if ( ! pFnOnMailSendFailed )
		pFnOnMailSendFailed = (UFunction*) UObject::GObjObjects()->Data[ 34340 ];

	UcUIAction_Mail_SendMessage_execOnMailSendFailed_Parms OnMailSendFailed_Parms;
	OnMailSendFailed_Parms.nError = nError;

	pFnOnMailSendFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMailSendFailed, &OnMailSendFailed_Parms, NULL );

	pFnOnMailSendFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Mail_SendMessage.OnMailSent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Mail_SendMessage::OnMailSent ( )
{
	static UFunction* pFnOnMailSent = NULL;

	if ( ! pFnOnMailSent )
		pFnOnMailSent = (UFunction*) UObject::GObjObjects()->Data[ 34339 ];

	UcUIAction_Mail_SendMessage_execOnMailSent_Parms OnMailSent_Parms;

	pFnOnMailSent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMailSent, &OnMailSent_Parms, NULL );

	pFnOnMailSent->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_Message.OnHostingDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_Message::OnHostingDataChanged ( )
{
	static UFunction* pFnOnHostingDataChanged = NULL;

	if ( ! pFnOnHostingDataChanged )
		pFnOnHostingDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37104 ];

	UcUIDataStore_Mail_Message_execOnHostingDataChanged_Parms OnHostingDataChanged_Parms;

	pFnOnHostingDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHostingDataChanged, &OnHostingDataChanged_Parms, NULL );

	pFnOnHostingDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.DoCheckForUnreadMail
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Mail_MessageList::eventDoCheckForUnreadMail ( )
{
	static UFunction* pFnDoCheckForUnreadMail = NULL;

	if ( ! pFnDoCheckForUnreadMail )
		pFnDoCheckForUnreadMail = (UFunction*) UObject::GObjObjects()->Data[ 37161 ];

	UcUIDataStore_Mail_MessageList_eventDoCheckForUnreadMail_Parms DoCheckForUnreadMail_Parms;

	this->ProcessEvent ( pFnDoCheckForUnreadMail, &DoCheckForUnreadMail_Parms, NULL );

	return DoCheckForUnreadMail_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.SetCheckForUnreadMail
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bSet                           ( CPF_Parm )

void UcUIDataStore_Mail_MessageList::eventSetCheckForUnreadMail ( unsigned long bSet )
{
	static UFunction* pFnSetCheckForUnreadMail = NULL;

	if ( ! pFnSetCheckForUnreadMail )
		pFnSetCheckForUnreadMail = (UFunction*) UObject::GObjObjects()->Data[ 37159 ];

	UcUIDataStore_Mail_MessageList_eventSetCheckForUnreadMail_Parms SetCheckForUnreadMail_Parms;
	SetCheckForUnreadMail_Parms.bSet = bSet;

	this->ProcessEvent ( pFnSetCheckForUnreadMail, &SetCheckForUnreadMail_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.ToggleMainScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Mail_MessageList::eventToggleMainScene ( )
{
	static UFunction* pFnToggleMainScene = NULL;

	if ( ! pFnToggleMainScene )
		pFnToggleMainScene = (UFunction*) UObject::GObjObjects()->Data[ 37157 ];

	UcUIDataStore_Mail_MessageList_eventToggleMainScene_Parms ToggleMainScene_Parms;

	this->ProcessEvent ( pFnToggleMainScene, &ToggleMainScene_Parms, NULL );

	return ToggleMainScene_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.CloseMainScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::eventCloseMainScene ( )
{
	static UFunction* pFnCloseMainScene = NULL;

	if ( ! pFnCloseMainScene )
		pFnCloseMainScene = (UFunction*) UObject::GObjObjects()->Data[ 37155 ];

	UcUIDataStore_Mail_MessageList_eventCloseMainScene_Parms CloseMainScene_Parms;

	this->ProcessEvent ( pFnCloseMainScene, &CloseMainScene_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OpenMainScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Mail_MessageList::eventOpenMainScene ( struct FScriptDelegate Callback )
{
	static UFunction* pFnOpenMainScene = NULL;

	if ( ! pFnOpenMainScene )
		pFnOpenMainScene = (UFunction*) UObject::GObjObjects()->Data[ 37151 ];

	UcUIDataStore_Mail_MessageList_eventOpenMainScene_Parms OpenMainScene_Parms;
	memcpy ( &OpenMainScene_Parms.Callback, &Callback, 0xC );

	this->ProcessEvent ( pFnOpenMainScene, &OpenMainScene_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.RefreshCache
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::RefreshCache ( )
{
	static UFunction* pFnRefreshCache = NULL;

	if ( ! pFnRefreshCache )
		pFnRefreshCache = (UFunction*) UObject::GObjObjects()->Data[ 37150 ];

	UcUIDataStore_Mail_MessageList_execRefreshCache_Parms RefreshCache_Parms;

	pFnRefreshCache->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshCache, &RefreshCache_Parms, NULL );

	pFnRefreshCache->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.UpdatePageWidgets
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::UpdatePageWidgets ( )
{
	static UFunction* pFnUpdatePageWidgets = NULL;

	if ( ! pFnUpdatePageWidgets )
		pFnUpdatePageWidgets = (UFunction*) UObject::GObjObjects()->Data[ 37149 ];

	UcUIDataStore_Mail_MessageList_execUpdatePageWidgets_Parms UpdatePageWidgets_Parms;

	pFnUpdatePageWidgets->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdatePageWidgets, &UpdatePageWidgets_Parms, NULL );

	pFnUpdatePageWidgets->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnKeyPress
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UcUIDataStore_Mail_MessageList::OnKeyPress ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnOnKeyPress = NULL;

	if ( ! pFnOnKeyPress )
		pFnOnKeyPress = (UFunction*) UObject::GObjObjects()->Data[ 37146 ];

	UcUIDataStore_Mail_MessageList_execOnKeyPress_Parms OnKeyPress_Parms;

	pFnOnKeyPress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnKeyPress, &OnKeyPress_Parms, NULL );

	pFnOnKeyPress->FunctionFlags |= 0x400;

	if ( EventParms )
		memcpy ( EventParms, &OnKeyPress_Parms.EventParms, 0x20 );

	return OnKeyPress_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.UnregisterPlayerProfileCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::UnregisterPlayerProfileCallback ( )
{
	static UFunction* pFnUnregisterPlayerProfileCallback = NULL;

	if ( ! pFnUnregisterPlayerProfileCallback )
		pFnUnregisterPlayerProfileCallback = (UFunction*) UObject::GObjObjects()->Data[ 37145 ];

	UcUIDataStore_Mail_MessageList_execUnregisterPlayerProfileCallback_Parms UnregisterPlayerProfileCallback_Parms;

	pFnUnregisterPlayerProfileCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterPlayerProfileCallback, &UnregisterPlayerProfileCallback_Parms, NULL );

	pFnUnregisterPlayerProfileCallback->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.RegisterPlayerProfileCallback
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::RegisterPlayerProfileCallback ( )
{
	static UFunction* pFnRegisterPlayerProfileCallback = NULL;

	if ( ! pFnRegisterPlayerProfileCallback )
		pFnRegisterPlayerProfileCallback = (UFunction*) UObject::GObjObjects()->Data[ 37144 ];

	UcUIDataStore_Mail_MessageList_execRegisterPlayerProfileCallback_Parms RegisterPlayerProfileCallback_Parms;

	pFnRegisterPlayerProfileCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterPlayerProfileCallback, &RegisterPlayerProfileCallback_Parms, NULL );

	pFnRegisterPlayerProfileCallback->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::OnPlayerProfileChanged ( )
{
	static UFunction* pFnOnPlayerProfileChanged = NULL;

	if ( ! pFnOnPlayerProfileChanged )
		pFnOnPlayerProfileChanged = (UFunction*) UObject::GObjObjects()->Data[ 37143 ];

	UcUIDataStore_Mail_MessageList_execOnPlayerProfileChanged_Parms OnPlayerProfileChanged_Parms;

	pFnOnPlayerProfileChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPlayerProfileChanged, &OnPlayerProfileChanged_Parms, NULL );

	pFnOnPlayerProfileChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailInfoReceived
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nUnread                        ( CPF_Parm )

void UcUIDataStore_Mail_MessageList::OnMailInfoReceived ( int nUnread )
{
	static UFunction* pFnOnMailInfoReceived = NULL;

	if ( ! pFnOnMailInfoReceived )
		pFnOnMailInfoReceived = (UFunction*) UObject::GObjObjects()->Data[ 37141 ];

	UcUIDataStore_Mail_MessageList_execOnMailInfoReceived_Parms OnMailInfoReceived_Parms;
	OnMailInfoReceived_Parms.nUnread = nUnread;

	pFnOnMailInfoReceived->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMailInfoReceived, &OnMailInfoReceived_Parms, NULL );

	pFnOnMailInfoReceived->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailCleanup
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::OnMailCleanup ( )
{
	static UFunction* pFnOnMailCleanup = NULL;

	if ( ! pFnOnMailCleanup )
		pFnOnMailCleanup = (UFunction*) UObject::GObjObjects()->Data[ 37140 ];

	UcUIDataStore_Mail_MessageList_execOnMailCleanup_Parms OnMailCleanup_Parms;

	pFnOnMailCleanup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMailCleanup, &OnMailCleanup_Parms, NULL );

	pFnOnMailCleanup->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailNotificationChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::OnMailNotificationChanged ( )
{
	static UFunction* pFnOnMailNotificationChanged = NULL;

	if ( ! pFnOnMailNotificationChanged )
		pFnOnMailNotificationChanged = (UFunction*) UObject::GObjObjects()->Data[ 37139 ];

	UcUIDataStore_Mail_MessageList_execOnMailNotificationChanged_Parms OnMailNotificationChanged_Parms;

	pFnOnMailNotificationChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMailNotificationChanged, &OnMailNotificationChanged_Parms, NULL );

	pFnOnMailNotificationChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMessageDeleted
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::OnMessageDeleted ( )
{
	static UFunction* pFnOnMessageDeleted = NULL;

	if ( ! pFnOnMessageDeleted )
		pFnOnMessageDeleted = (UFunction*) UObject::GObjObjects()->Data[ 37138 ];

	UcUIDataStore_Mail_MessageList_execOnMessageDeleted_Parms OnMessageDeleted_Parms;

	pFnOnMessageDeleted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMessageDeleted, &OnMessageDeleted_Parms, NULL );

	pFnOnMessageDeleted->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailListDetailsChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::OnMailListDetailsChanged ( )
{
	static UFunction* pFnOnMailListDetailsChanged = NULL;

	if ( ! pFnOnMailListDetailsChanged )
		pFnOnMailListDetailsChanged = (UFunction*) UObject::GObjObjects()->Data[ 37137 ];

	UcUIDataStore_Mail_MessageList_execOnMailListDetailsChanged_Parms OnMailListDetailsChanged_Parms;

	pFnOnMailListDetailsChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMailListDetailsChanged, &OnMailListDetailsChanged_Parms, NULL );

	pFnOnMailListDetailsChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.OnMailListChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Mail_MessageList::OnMailListChanged ( )
{
	static UFunction* pFnOnMailListChanged = NULL;

	if ( ! pFnOnMailListChanged )
		pFnOnMailListChanged = (UFunction*) UObject::GObjObjects()->Data[ 37136 ];

	UcUIDataStore_Mail_MessageList_execOnMailListChanged_Parms OnMailListChanged_Parms;

	pFnOnMailListChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnMailListChanged, &OnMailListChanged_Parms, NULL );

	pFnOnMailListChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.GetTotalPages
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIDataStore_Mail_MessageList::eventGetTotalPages ( )
{
	static UFunction* pFnGetTotalPages = NULL;

	if ( ! pFnGetTotalPages )
		pFnGetTotalPages = (UFunction*) UObject::GObjObjects()->Data[ 37134 ];

	UcUIDataStore_Mail_MessageList_eventGetTotalPages_Parms GetTotalPages_Parms;

	pFnGetTotalPages->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetTotalPages, &GetTotalPages_Parms, NULL );

	pFnGetTotalPages->FunctionFlags |= 0x400;

	return GetTotalPages_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.SetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nPage                          ( CPF_Parm )

bool UcUIDataStore_Mail_MessageList::eventSetCurrentPage ( int nPage )
{
	static UFunction* pFnSetCurrentPage = NULL;

	if ( ! pFnSetCurrentPage )
		pFnSetCurrentPage = (UFunction*) UObject::GObjObjects()->Data[ 37131 ];

	UcUIDataStore_Mail_MessageList_eventSetCurrentPage_Parms SetCurrentPage_Parms;
	SetCurrentPage_Parms.nPage = nPage;

	pFnSetCurrentPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetCurrentPage, &SetCurrentPage_Parms, NULL );

	pFnSetCurrentPage->FunctionFlags |= 0x400;

	return SetCurrentPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.GetCurrentPage
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIDataStore_Mail_MessageList::eventGetCurrentPage ( )
{
	static UFunction* pFnGetCurrentPage = NULL;

	if ( ! pFnGetCurrentPage )
		pFnGetCurrentPage = (UFunction*) UObject::GObjObjects()->Data[ 37129 ];

	UcUIDataStore_Mail_MessageList_eventGetCurrentPage_Parms GetCurrentPage_Parms;

	pFnGetCurrentPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetCurrentPage, &GetCurrentPage_Parms, NULL );

	pFnGetCurrentPage->FunctionFlags |= 0x400;

	return GetCurrentPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Ordering                       ( CPF_Parm )

bool UcUIDataStore_Mail_MessageList::eventSetOrdering ( struct FName Ordering )
{
	static UFunction* pFnSetOrdering = NULL;

	if ( ! pFnSetOrdering )
		pFnSetOrdering = (UFunction*) UObject::GObjObjects()->Data[ 37126 ];

	UcUIDataStore_Mail_MessageList_eventSetOrdering_Parms SetOrdering_Parms;
	memcpy ( &SetOrdering_Parms.Ordering, &Ordering, 0x8 );

	pFnSetOrdering->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOrdering, &SetOrdering_Parms, NULL );

	pFnSetOrdering->FunctionFlags |= 0x400;

	return SetOrdering_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Mail_MessageList.MainScene_CloseCallback
// [0x00120000] 
// Parameters infos:

void UcUIDataStore_Mail_MessageList::MainScene_CloseCallback ( )
{
	static UFunction* pFnMainScene_CloseCallback = NULL;

	if ( ! pFnMainScene_CloseCallback )
		pFnMainScene_CloseCallback = (UFunction*) UObject::GObjObjects()->Data[ 37106 ];

	UcUIDataStore_Mail_MessageList_execMainScene_CloseCallback_Parms MainScene_CloseCallback_Parms;

	this->ProcessEvent ( pFnMainScene_CloseCallback, &MainScene_CloseCallback_Parms, NULL );
};

// Function APBUserInterface.cUIAction_Soc_GetSelectedGroupList.OnGetGroupInfoFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )
// struct FString                 sGroupLeaderName               ( CPF_Parm | CPF_NeedCtorLink )

void UcUIAction_Soc_GetSelectedGroupList::OnGetGroupInfoFailure ( int nError, struct FString sGroupLeaderName )
{
	static UFunction* pFnOnGetGroupInfoFailure = NULL;

	if ( ! pFnOnGetGroupInfoFailure )
		pFnOnGetGroupInfoFailure = (UFunction*) UObject::GObjObjects()->Data[ 35185 ];

	UcUIAction_Soc_GetSelectedGroupList_execOnGetGroupInfoFailure_Parms OnGetGroupInfoFailure_Parms;
	OnGetGroupInfoFailure_Parms.nError = nError;
	memcpy ( &OnGetGroupInfoFailure_Parms.sGroupLeaderName, &sGroupLeaderName, 0xC );

	pFnOnGetGroupInfoFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGetGroupInfoFailure, &OnGetGroupInfoFailure_Parms, NULL );

	pFnOnGetGroupInfoFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_GetSelectedGroupList.OnGetGroupInfoSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sGroupLeaderName               ( CPF_Parm | CPF_NeedCtorLink )

void UcUIAction_Soc_GetSelectedGroupList::OnGetGroupInfoSuccess ( struct FString sGroupLeaderName )
{
	static UFunction* pFnOnGetGroupInfoSuccess = NULL;

	if ( ! pFnOnGetGroupInfoSuccess )
		pFnOnGetGroupInfoSuccess = (UFunction*) UObject::GObjObjects()->Data[ 35183 ];

	UcUIAction_Soc_GetSelectedGroupList_execOnGetGroupInfoSuccess_Parms OnGetGroupInfoSuccess_Parms;
	memcpy ( &OnGetGroupInfoSuccess_Parms.sGroupLeaderName, &sGroupLeaderName, 0xC );

	pFnOnGetGroupInfoSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGetGroupInfoSuccess, &OnGetGroupInfoSuccess_Parms, NULL );

	pFnOnGetGroupInfoSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_JoinGroup.OnGroupJoinFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )
// struct FString                 sGroupLeaderName               ( CPF_Parm | CPF_NeedCtorLink )

void UcUIAction_Soc_JoinGroup::OnGroupJoinFailure ( int nError, struct FString sGroupLeaderName )
{
	static UFunction* pFnOnGroupJoinFailure = NULL;

	if ( ! pFnOnGroupJoinFailure )
		pFnOnGroupJoinFailure = (UFunction*) UObject::GObjObjects()->Data[ 35192 ];

	UcUIAction_Soc_JoinGroup_execOnGroupJoinFailure_Parms OnGroupJoinFailure_Parms;
	OnGroupJoinFailure_Parms.nError = nError;
	memcpy ( &OnGroupJoinFailure_Parms.sGroupLeaderName, &sGroupLeaderName, 0xC );

	pFnOnGroupJoinFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGroupJoinFailure, &OnGroupJoinFailure_Parms, NULL );

	pFnOnGroupJoinFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_JoinGroup.OnGroupJoinSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sGroupLeaderName               ( CPF_Parm | CPF_NeedCtorLink )

void UcUIAction_Soc_JoinGroup::OnGroupJoinSuccess ( struct FString sGroupLeaderName )
{
	static UFunction* pFnOnGroupJoinSuccess = NULL;

	if ( ! pFnOnGroupJoinSuccess )
		pFnOnGroupJoinSuccess = (UFunction*) UObject::GObjObjects()->Data[ 35190 ];

	UcUIAction_Soc_JoinGroup_execOnGroupJoinSuccess_Parms OnGroupJoinSuccess_Parms;
	memcpy ( &OnGroupJoinSuccess_Parms.sGroupLeaderName, &sGroupLeaderName, 0xC );

	pFnOnGroupJoinSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGroupJoinSuccess, &OnGroupJoinSuccess_Parms, NULL );

	pFnOnGroupJoinSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_SetGroupInvitePermissions.OnRequestFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Soc_SetGroupInvitePermissions::OnRequestFailed ( int nError )
{
	static UFunction* pFnOnRequestFailed = NULL;

	if ( ! pFnOnRequestFailed )
		pFnOnRequestFailed = (UFunction*) UObject::GObjObjects()->Data[ 35230 ];

	UcUIAction_Soc_SetGroupInvitePermissions_execOnRequestFailed_Parms OnRequestFailed_Parms;
	OnRequestFailed_Parms.nError = nError;

	pFnOnRequestFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRequestFailed, &OnRequestFailed_Parms, NULL );

	pFnOnRequestFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_SetGroupInvitePermissions.OnRequestSent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Soc_SetGroupInvitePermissions::OnRequestSent ( )
{
	static UFunction* pFnOnRequestSent = NULL;

	if ( ! pFnOnRequestSent )
		pFnOnRequestSent = (UFunction*) UObject::GObjObjects()->Data[ 35229 ];

	UcUIAction_Soc_SetGroupInvitePermissions_execOnRequestSent_Parms OnRequestSent_Parms;

	pFnOnRequestSent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRequestSent, &OnRequestSent_Parms, NULL );

	pFnOnRequestSent->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_SetPublicGroup.OnRequestFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_Soc_SetPublicGroup::OnRequestFailed ( int nError )
{
	static UFunction* pFnOnRequestFailed = NULL;

	if ( ! pFnOnRequestFailed )
		pFnOnRequestFailed = (UFunction*) UObject::GObjObjects()->Data[ 35240 ];

	UcUIAction_Soc_SetPublicGroup_execOnRequestFailed_Parms OnRequestFailed_Parms;
	OnRequestFailed_Parms.nError = nError;

	pFnOnRequestFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRequestFailed, &OnRequestFailed_Parms, NULL );

	pFnOnRequestFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_Soc_SetPublicGroup.OnRequestSent
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIAction_Soc_SetPublicGroup::OnRequestSent ( )
{
	static UFunction* pFnOnRequestSent = NULL;

	if ( ! pFnOnRequestSent )
		pFnOnRequestSent = (UFunction*) UObject::GObjObjects()->Data[ 35239 ];

	UcUIAction_Soc_SetPublicGroup_execOnRequestSent_Parms OnRequestSent_Parms;

	pFnOnRequestSent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnRequestSent, &OnRequestSent_Parms, NULL );

	pFnOnRequestSent->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_FindList.CharacterGetInfoFailure
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nError                         ( CPF_Parm )
// struct FString                 sCharacterName                 ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Soc_FindList::CharacterGetInfoFailure ( int nError, struct FString sCharacterName )
{
	static UFunction* pFnCharacterGetInfoFailure = NULL;

	if ( ! pFnCharacterGetInfoFailure )
		pFnCharacterGetInfoFailure = (UFunction*) UObject::GObjObjects()->Data[ 37643 ];

	UcUIDataStore_Soc_FindList_execCharacterGetInfoFailure_Parms CharacterGetInfoFailure_Parms;
	CharacterGetInfoFailure_Parms.nError = nError;
	memcpy ( &CharacterGetInfoFailure_Parms.sCharacterName, &sCharacterName, 0xC );

	pFnCharacterGetInfoFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCharacterGetInfoFailure, &CharacterGetInfoFailure_Parms, NULL );

	pFnCharacterGetInfoFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_FindList.CharacterGetInfoSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nCharacterUID                  ( CPF_Parm )
// int                            nDistrictUID                   ( CPF_Parm )
// int                            nInstanceNo                    ( CPF_Parm )
// unsigned char                  eFaction                       ( CPF_Parm )
// struct FString                 sCharacterName                 ( CPF_Parm | CPF_NeedCtorLink )
// float                          fInstanceAverageSkillRating    ( CPF_Parm )

void UcUIDataStore_Soc_FindList::CharacterGetInfoSuccess ( int nCharacterUID, int nDistrictUID, int nInstanceNo, unsigned char eFaction, struct FString sCharacterName, float fInstanceAverageSkillRating )
{
	static UFunction* pFnCharacterGetInfoSuccess = NULL;

	if ( ! pFnCharacterGetInfoSuccess )
		pFnCharacterGetInfoSuccess = (UFunction*) UObject::GObjObjects()->Data[ 37636 ];

	UcUIDataStore_Soc_FindList_execCharacterGetInfoSuccess_Parms CharacterGetInfoSuccess_Parms;
	CharacterGetInfoSuccess_Parms.nCharacterUID = nCharacterUID;
	CharacterGetInfoSuccess_Parms.nDistrictUID = nDistrictUID;
	CharacterGetInfoSuccess_Parms.nInstanceNo = nInstanceNo;
	CharacterGetInfoSuccess_Parms.eFaction = eFaction;
	memcpy ( &CharacterGetInfoSuccess_Parms.sCharacterName, &sCharacterName, 0xC );
	CharacterGetInfoSuccess_Parms.fInstanceAverageSkillRating = fInstanceAverageSkillRating;

	pFnCharacterGetInfoSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCharacterGetInfoSuccess, &CharacterGetInfoSuccess_Parms, NULL );

	pFnCharacterGetInfoSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_FriendList.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Soc_FriendList::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37665 ];

	UcUIDataStore_Soc_FriendList_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_FriendList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_FriendList::UnregisterCallbacks ( )
{
	static UFunction* pFnUnregisterCallbacks = NULL;

	if ( ! pFnUnregisterCallbacks )
		pFnUnregisterCallbacks = (UFunction*) UObject::GObjObjects()->Data[ 37664 ];

	UcUIDataStore_Soc_FriendList_execUnregisterCallbacks_Parms UnregisterCallbacks_Parms;

	pFnUnregisterCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterCallbacks, &UnregisterCallbacks_Parms, NULL );

	pFnUnregisterCallbacks->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_FriendList.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Ordering                       ( CPF_Parm )

bool UcUIDataStore_Soc_FriendList::eventSetOrdering ( struct FName Ordering )
{
	static UFunction* pFnSetOrdering = NULL;

	if ( ! pFnSetOrdering )
		pFnSetOrdering = (UFunction*) UObject::GObjObjects()->Data[ 37661 ];

	UcUIDataStore_Soc_FriendList_eventSetOrdering_Parms SetOrdering_Parms;
	memcpy ( &SetOrdering_Parms.Ordering, &Ordering, 0x8 );

	pFnSetOrdering->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOrdering, &SetOrdering_Parms, NULL );

	pFnSetOrdering->FunctionFlags |= 0x400;

	return SetOrdering_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_FriendList.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_FriendList::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37660 ];

	UcUIDataStore_Soc_FriendList_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_GroupList.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Soc_GroupList::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37679 ];

	UcUIDataStore_Soc_GroupList_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_GroupList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_GroupList::UnregisterCallbacks ( )
{
	static UFunction* pFnUnregisterCallbacks = NULL;

	if ( ! pFnUnregisterCallbacks )
		pFnUnregisterCallbacks = (UFunction*) UObject::GObjObjects()->Data[ 37678 ];

	UcUIDataStore_Soc_GroupList_execUnregisterCallbacks_Parms UnregisterCallbacks_Parms;

	pFnUnregisterCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterCallbacks, &UnregisterCallbacks_Parms, NULL );

	pFnUnregisterCallbacks->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_GroupList.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_GroupList::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37677 ];

	UcUIDataStore_Soc_GroupList_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_PublicGroupsList.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Soc_PublicGroupsList::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37708 ];

	UcUIDataStore_Soc_PublicGroupsList_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_PublicGroupsList.NotifyGameSessionEndedNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_PublicGroupsList::NotifyGameSessionEndedNative ( )
{
	static UFunction* pFnNotifyGameSessionEndedNative = NULL;

	if ( ! pFnNotifyGameSessionEndedNative )
		pFnNotifyGameSessionEndedNative = (UFunction*) UObject::GObjObjects()->Data[ 37707 ];

	UcUIDataStore_Soc_PublicGroupsList_execNotifyGameSessionEndedNative_Parms NotifyGameSessionEndedNative_Parms;

	pFnNotifyGameSessionEndedNative->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyGameSessionEndedNative, &NotifyGameSessionEndedNative_Parms, NULL );

	pFnNotifyGameSessionEndedNative->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_PublicGroupsList.OnGetGroupListFailure
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nDistrictUID                   ( CPF_Parm )
// int                            nInstanceNo                    ( CPF_Parm )

void UcUIDataStore_Soc_PublicGroupsList::OnGetGroupListFailure ( int nDistrictUID, int nInstanceNo )
{
	static UFunction* pFnOnGetGroupListFailure = NULL;

	if ( ! pFnOnGetGroupListFailure )
		pFnOnGetGroupListFailure = (UFunction*) UObject::GObjObjects()->Data[ 37704 ];

	UcUIDataStore_Soc_PublicGroupsList_execOnGetGroupListFailure_Parms OnGetGroupListFailure_Parms;
	OnGetGroupListFailure_Parms.nDistrictUID = nDistrictUID;
	OnGetGroupListFailure_Parms.nInstanceNo = nInstanceNo;

	pFnOnGetGroupListFailure->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGetGroupListFailure, &OnGetGroupListFailure_Parms, NULL );

	pFnOnGetGroupListFailure->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_PublicGroupsList.OnGetGroupListSuccess
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            nDistrictUID                   ( CPF_Parm )
// int                            nInstanceNo                    ( CPF_Parm )

void UcUIDataStore_Soc_PublicGroupsList::OnGetGroupListSuccess ( int nDistrictUID, int nInstanceNo )
{
	static UFunction* pFnOnGetGroupListSuccess = NULL;

	if ( ! pFnOnGetGroupListSuccess )
		pFnOnGetGroupListSuccess = (UFunction*) UObject::GObjObjects()->Data[ 37701 ];

	UcUIDataStore_Soc_PublicGroupsList_execOnGetGroupListSuccess_Parms OnGetGroupListSuccess_Parms;
	OnGetGroupListSuccess_Parms.nDistrictUID = nDistrictUID;
	OnGetGroupListSuccess_Parms.nInstanceNo = nInstanceNo;

	pFnOnGetGroupListSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnGetGroupListSuccess, &OnGetGroupListSuccess_Parms, NULL );

	pFnOnGetGroupListSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_SideList.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Soc_SideList::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37734 ];

	UcUIDataStore_Soc_SideList_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_SideList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_SideList::UnregisterCallbacks ( )
{
	static UFunction* pFnUnregisterCallbacks = NULL;

	if ( ! pFnUnregisterCallbacks )
		pFnUnregisterCallbacks = (UFunction*) UObject::GObjObjects()->Data[ 37733 ];

	UcUIDataStore_Soc_SideList_execUnregisterCallbacks_Parms UnregisterCallbacks_Parms;

	pFnUnregisterCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterCallbacks, &UnregisterCallbacks_Parms, NULL );

	pFnUnregisterCallbacks->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_SideList.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_SideList::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37732 ];

	UcUIDataStore_Soc_SideList_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_TeamList.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Soc_TeamList::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37753 ];

	UcUIDataStore_Soc_TeamList_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_TeamList.UnregisterCallbacks
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_TeamList::UnregisterCallbacks ( )
{
	static UFunction* pFnUnregisterCallbacks = NULL;

	if ( ! pFnUnregisterCallbacks )
		pFnUnregisterCallbacks = (UFunction*) UObject::GObjObjects()->Data[ 37752 ];

	UcUIDataStore_Soc_TeamList_execUnregisterCallbacks_Parms UnregisterCallbacks_Parms;

	pFnUnregisterCallbacks->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterCallbacks, &UnregisterCallbacks_Parms, NULL );

	pFnUnregisterCallbacks->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Soc_TeamList.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Ordering                       ( CPF_Parm )

bool UcUIDataStore_Soc_TeamList::eventSetOrdering ( struct FName Ordering )
{
	static UFunction* pFnSetOrdering = NULL;

	if ( ! pFnSetOrdering )
		pFnSetOrdering = (UFunction*) UObject::GObjObjects()->Data[ 37749 ];

	UcUIDataStore_Soc_TeamList_eventSetOrdering_Parms SetOrdering_Parms;
	memcpy ( &SetOrdering_Parms.Ordering, &Ordering, 0x8 );

	pFnSetOrdering->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOrdering, &SetOrdering_Parms, NULL );

	pFnSetOrdering->FunctionFlags |= 0x400;

	return SetOrdering_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Soc_TeamList.OnDataChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Soc_TeamList::OnDataChanged ( )
{
	static UFunction* pFnOnDataChanged = NULL;

	if ( ! pFnOnDataChanged )
		pFnOnDataChanged = (UFunction*) UObject::GObjObjects()->Data[ 37748 ];

	UcUIDataStore_Soc_TeamList_execOnDataChanged_Parms OnDataChanged_Parms;

	pFnOnDataChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnDataChanged, &OnDataChanged_Parms, NULL );

	pFnOnDataChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DisplayPrimitiveSelector.nativeOnBoxClosed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eResult                        ( CPF_Parm )

void UcUIAction_DisplayPrimitiveSelector::nativeOnBoxClosed ( unsigned char eResult )
{
	static UFunction* pFnnativeOnBoxClosed = NULL;

	if ( ! pFnnativeOnBoxClosed )
		pFnnativeOnBoxClosed = (UFunction*) UObject::GObjObjects()->Data[ 33928 ];

	UcUIAction_DisplayPrimitiveSelector_execnativeOnBoxClosed_Parms nativeOnBoxClosed_Parms;
	nativeOnBoxClosed_Parms.eResult = eResult;

	pFnnativeOnBoxClosed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnnativeOnBoxClosed, &nativeOnBoxClosed_Parms, NULL );

	pFnnativeOnBoxClosed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DisplayPrimitiveSelector.OnBoxClosed
// [0x00020002] 
// Parameters infos:
// unsigned char                  eResult                        ( CPF_Parm )
// unsigned long                  bDisableMessage                ( CPF_Parm )

void UcUIAction_DisplayPrimitiveSelector::OnBoxClosed ( unsigned char eResult, unsigned long bDisableMessage )
{
	static UFunction* pFnOnBoxClosed = NULL;

	if ( ! pFnOnBoxClosed )
		pFnOnBoxClosed = (UFunction*) UObject::GObjObjects()->Data[ 33925 ];

	UcUIAction_DisplayPrimitiveSelector_execOnBoxClosed_Parms OnBoxClosed_Parms;
	OnBoxClosed_Parms.eResult = eResult;
	OnBoxClosed_Parms.bDisableMessage = bDisableMessage;

	this->ProcessEvent ( pFnOnBoxClosed, &OnBoxClosed_Parms, NULL );
};

// Function APBUserInterface.cUIAction_SE_StoreSymbol.OnItemCustomisationChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class AActor*                  pItemCustomisation             ( CPF_Parm )

void UcUIAction_SE_StoreSymbol::OnItemCustomisationChanged ( class AActor* pItemCustomisation )
{
	static UFunction* pFnOnItemCustomisationChanged = NULL;

	if ( ! pFnOnItemCustomisationChanged )
		pFnOnItemCustomisationChanged = (UFunction*) UObject::GObjObjects()->Data[ 34974 ];

	UcUIAction_SE_StoreSymbol_execOnItemCustomisationChanged_Parms OnItemCustomisationChanged_Parms;
	OnItemCustomisationChanged_Parms.pItemCustomisation = pItemCustomisation;

	pFnOnItemCustomisationChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnItemCustomisationChanged, &OnItemCustomisationChanged_Parms, NULL );

	pFnOnItemCustomisationChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.GetAbsoluteMaxNumLayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIDataStore_SymbolEditor::GetAbsoluteMaxNumLayers ( )
{
	static UFunction* pFnGetAbsoluteMaxNumLayers = NULL;

	if ( ! pFnGetAbsoluteMaxNumLayers )
		pFnGetAbsoluteMaxNumLayers = (UFunction*) UObject::GObjObjects()->Data[ 37888 ];

	UcUIDataStore_SymbolEditor_execGetAbsoluteMaxNumLayers_Parms GetAbsoluteMaxNumLayers_Parms;

	pFnGetAbsoluteMaxNumLayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetAbsoluteMaxNumLayers, &GetAbsoluteMaxNumLayers_Parms, NULL );

	pFnGetAbsoluteMaxNumLayers->FunctionFlags |= 0x400;

	return GetAbsoluteMaxNumLayers_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.GetMaxNumLayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIDataStore_SymbolEditor::GetMaxNumLayers ( )
{
	static UFunction* pFnGetMaxNumLayers = NULL;

	if ( ! pFnGetMaxNumLayers )
		pFnGetMaxNumLayers = (UFunction*) UObject::GObjObjects()->Data[ 37886 ];

	UcUIDataStore_SymbolEditor_execGetMaxNumLayers_Parms GetMaxNumLayers_Parms;

	pFnGetMaxNumLayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMaxNumLayers, &GetMaxNumLayers_Parms, NULL );

	pFnGetMaxNumLayers->FunctionFlags |= 0x400;

	return GetMaxNumLayers_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.GetNumLayers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UcUIDataStore_SymbolEditor::GetNumLayers ( )
{
	static UFunction* pFnGetNumLayers = NULL;

	if ( ! pFnGetNumLayers )
		pFnGetNumLayers = (UFunction*) UObject::GObjObjects()->Data[ 37884 ];

	UcUIDataStore_SymbolEditor_execGetNumLayers_Parms GetNumLayers_Parms;

	pFnGetNumLayers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumLayers, &GetNumLayers_Parms, NULL );

	pFnGetNumLayers->FunctionFlags |= 0x400;

	return GetNumLayers_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.ClearUndoSlots
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_SymbolEditor::ClearUndoSlots ( )
{
	static UFunction* pFnClearUndoSlots = NULL;

	if ( ! pFnClearUndoSlots )
		pFnClearUndoSlots = (UFunction*) UObject::GObjObjects()->Data[ 37883 ];

	UcUIDataStore_SymbolEditor_execClearUndoSlots_Parms ClearUndoSlots_Parms;

	pFnClearUndoSlots->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearUndoSlots, &ClearUndoSlots_Parms, NULL );

	pFnClearUndoSlots->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.PopRedoSlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_SymbolEditor::PopRedoSlot ( )
{
	static UFunction* pFnPopRedoSlot = NULL;

	if ( ! pFnPopRedoSlot )
		pFnPopRedoSlot = (UFunction*) UObject::GObjObjects()->Data[ 37882 ];

	UcUIDataStore_SymbolEditor_execPopRedoSlot_Parms PopRedoSlot_Parms;

	pFnPopRedoSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopRedoSlot, &PopRedoSlot_Parms, NULL );

	pFnPopRedoSlot->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.PopUndoSlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_SymbolEditor::PopUndoSlot ( )
{
	static UFunction* pFnPopUndoSlot = NULL;

	if ( ! pFnPopUndoSlot )
		pFnPopUndoSlot = (UFunction*) UObject::GObjObjects()->Data[ 37881 ];

	UcUIDataStore_SymbolEditor_execPopUndoSlot_Parms PopUndoSlot_Parms;

	pFnPopUndoSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPopUndoSlot, &PopUndoSlot_Parms, NULL );

	pFnPopUndoSlot->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.PushUndoSlot
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_SymbolEditor::PushUndoSlot ( )
{
	static UFunction* pFnPushUndoSlot = NULL;

	if ( ! pFnPushUndoSlot )
		pFnPushUndoSlot = (UFunction*) UObject::GObjObjects()->Data[ 37879 ];

	UcUIDataStore_SymbolEditor_execPushUndoSlot_Parms PushUndoSlot_Parms;

	pFnPushUndoSlot->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPushUndoSlot, &PushUndoSlot_Parms, NULL );

	pFnPushUndoSlot->FunctionFlags |= 0x400;

	return PushUndoSlot_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_SymbolEditor.OnKeyPress
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInputEventParameters   EventParms                     ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UcUIDataStore_SymbolEditor::OnKeyPress ( struct FInputEventParameters* EventParms )
{
	static UFunction* pFnOnKeyPress = NULL;

	if ( ! pFnOnKeyPress )
		pFnOnKeyPress = (UFunction*) UObject::GObjObjects()->Data[ 37876 ];

	UcUIDataStore_SymbolEditor_execOnKeyPress_Parms OnKeyPress_Parms;

	pFnOnKeyPress->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnKeyPress, &OnKeyPress_Parms, NULL );

	pFnOnKeyPress->FunctionFlags |= 0x400;

	if ( EventParms )
		memcpy ( EventParms, &OnKeyPress_Parms.EventParms, 0x20 );

	return OnKeyPress_Parms.ReturnValue;
};

// Function APBUserInterface.cUI_Gecko_Widget.OnScrollBarSpaceClicked
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIScrollbar*            Sender                         ( CPF_Parm )
// float                          PositionPerc                   ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

void UcUI_Gecko_Widget::OnScrollBarSpaceClicked ( class UUIScrollbar* Sender, float PositionPerc, int PlayerIndex )
{
	static UFunction* pFnOnScrollBarSpaceClicked = NULL;

	if ( ! pFnOnScrollBarSpaceClicked )
		pFnOnScrollBarSpaceClicked = (UFunction*) UObject::GObjObjects()->Data[ 33244 ];

	UcUI_Gecko_Widget_execOnScrollBarSpaceClicked_Parms OnScrollBarSpaceClicked_Parms;
	OnScrollBarSpaceClicked_Parms.Sender = Sender;
	OnScrollBarSpaceClicked_Parms.PositionPerc = PositionPerc;
	OnScrollBarSpaceClicked_Parms.PlayerIndex = PlayerIndex;

	pFnOnScrollBarSpaceClicked->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnScrollBarSpaceClicked, &OnScrollBarSpaceClicked_Parms, NULL );

	pFnOnScrollBarSpaceClicked->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUI_Gecko_Widget.OnScrollBarMoved
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScrollbar*            Sender                         ( CPF_Parm )
// float                          PositionChange                 ( CPF_Parm )
// unsigned long                  bPositionMaxed                 ( CPF_OptionalParm | CPF_Parm )

bool UcUI_Gecko_Widget::OnScrollBarMoved ( class UUIScrollbar* Sender, float PositionChange, unsigned long bPositionMaxed )
{
	static UFunction* pFnOnScrollBarMoved = NULL;

	if ( ! pFnOnScrollBarMoved )
		pFnOnScrollBarMoved = (UFunction*) UObject::GObjObjects()->Data[ 33239 ];

	UcUI_Gecko_Widget_execOnScrollBarMoved_Parms OnScrollBarMoved_Parms;
	OnScrollBarMoved_Parms.Sender = Sender;
	OnScrollBarMoved_Parms.PositionChange = PositionChange;
	OnScrollBarMoved_Parms.bPositionMaxed = bPositionMaxed;

	pFnOnScrollBarMoved->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnScrollBarMoved, &OnScrollBarMoved_Parms, NULL );

	pFnOnScrollBarMoved->FunctionFlags |= 0x400;

	return OnScrollBarMoved_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Music_PlaylistList.NativeNotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Music_PlaylistList::NativeNotifyGameSessionEnded ( )
{
	static UFunction* pFnNativeNotifyGameSessionEnded = NULL;

	if ( ! pFnNativeNotifyGameSessionEnded )
		pFnNativeNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37369 ];

	UcUIDataStore_Music_PlaylistList_execNativeNotifyGameSessionEnded_Parms NativeNotifyGameSessionEnded_Parms;

	pFnNativeNotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNativeNotifyGameSessionEnded, &NativeNotifyGameSessionEnded_Parms, NULL );

	pFnNativeNotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Music_PlaylistList.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_Music_PlaylistList::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37367 ];

	UcUIDataStore_Music_PlaylistList_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Music_TrackList.OnItemCreatorNameCacheUpdated
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void UcUIDataStore_Music_TrackList::OnItemCreatorNameCacheUpdated ( )
{
	static UFunction* pFnOnItemCreatorNameCacheUpdated = NULL;

	if ( ! pFnOnItemCreatorNameCacheUpdated )
		pFnOnItemCreatorNameCacheUpdated = (UFunction*) UObject::GObjObjects()->Data[ 37412 ];

	UcUIDataStore_Music_TrackList_execOnItemCreatorNameCacheUpdated_Parms OnItemCreatorNameCacheUpdated_Parms;

	this->ProcessEvent ( pFnOnItemCreatorNameCacheUpdated, &OnItemCreatorNameCacheUpdated_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_MusicStudio.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_MusicStudio::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 37440 ];

	UcUIDataStore_MusicStudio_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_MusicStudio.FreeMusicStudioResources
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UcUIDataStore_MusicStudio::FreeMusicStudioResources ( )
{
	static UFunction* pFnFreeMusicStudioResources = NULL;

	if ( ! pFnFreeMusicStudioResources )
		pFnFreeMusicStudioResources = (UFunction*) UObject::GObjObjects()->Data[ 37439 ];

	UcUIDataStore_MusicStudio_execFreeMusicStudioResources_Parms FreeMusicStudioResources_Parms;

	pFnFreeMusicStudioResources->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFreeMusicStudioResources, &FreeMusicStudioResources_Parms, NULL );

	pFnFreeMusicStudioResources->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_MusicStudio.SwapTrackDSP
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nTrackIndex                    ( CPF_Parm )
// int                            nDspIndex1                     ( CPF_Parm )
// int                            nDspIndex2                     ( CPF_Parm )

bool UcUIDataStore_MusicStudio::SwapTrackDSP ( int nTrackIndex, int nDspIndex1, int nDspIndex2 )
{
	static UFunction* pFnSwapTrackDSP = NULL;

	if ( ! pFnSwapTrackDSP )
		pFnSwapTrackDSP = (UFunction*) UObject::GObjObjects()->Data[ 37434 ];

	UcUIDataStore_MusicStudio_execSwapTrackDSP_Parms SwapTrackDSP_Parms;
	SwapTrackDSP_Parms.nTrackIndex = nTrackIndex;
	SwapTrackDSP_Parms.nDspIndex1 = nDspIndex1;
	SwapTrackDSP_Parms.nDspIndex2 = nDspIndex2;

	pFnSwapTrackDSP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSwapTrackDSP, &SwapTrackDSP_Parms, NULL );

	pFnSwapTrackDSP->FunctionFlags |= 0x400;

	return SwapTrackDSP_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_MusicStudio.InsertTrackDSP
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nTrackIndex                    ( CPF_Parm )
// int                            nDspType                       ( CPF_Parm )
// int                            nAtIndex                       ( CPF_Parm | CPF_OutParm )

bool UcUIDataStore_MusicStudio::InsertTrackDSP ( int nTrackIndex, int nDspType, int* nAtIndex )
{
	static UFunction* pFnInsertTrackDSP = NULL;

	if ( ! pFnInsertTrackDSP )
		pFnInsertTrackDSP = (UFunction*) UObject::GObjObjects()->Data[ 37429 ];

	UcUIDataStore_MusicStudio_execInsertTrackDSP_Parms InsertTrackDSP_Parms;
	InsertTrackDSP_Parms.nTrackIndex = nTrackIndex;
	InsertTrackDSP_Parms.nDspType = nDspType;

	pFnInsertTrackDSP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInsertTrackDSP, &InsertTrackDSP_Parms, NULL );

	pFnInsertTrackDSP->FunctionFlags |= 0x400;

	if ( nAtIndex )
		*nAtIndex = InsertTrackDSP_Parms.nAtIndex;

	return InsertTrackDSP_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_MusicStudio.DeleteTrackDSP
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nTrackIndex                    ( CPF_Parm )
// int                            nDspIndex                      ( CPF_Parm )

bool UcUIDataStore_MusicStudio::DeleteTrackDSP ( int nTrackIndex, int nDspIndex )
{
	static UFunction* pFnDeleteTrackDSP = NULL;

	if ( ! pFnDeleteTrackDSP )
		pFnDeleteTrackDSP = (UFunction*) UObject::GObjObjects()->Data[ 37425 ];

	UcUIDataStore_MusicStudio_execDeleteTrackDSP_Parms DeleteTrackDSP_Parms;
	DeleteTrackDSP_Parms.nTrackIndex = nTrackIndex;
	DeleteTrackDSP_Parms.nDspIndex = nDspIndex;

	pFnDeleteTrackDSP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDeleteTrackDSP, &DeleteTrackDSP_Parms, NULL );

	pFnDeleteTrackDSP->FunctionFlags |= 0x400;

	return DeleteTrackDSP_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_MusicStudio.GetInstance_
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// class UcUIDataStore_MusicStudio* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UcUIDataStore_MusicStudio* UcUIDataStore_MusicStudio::GetInstance_ ( )
{
	static UFunction* pFnGetInstance_ = NULL;

	if ( ! pFnGetInstance_ )
		pFnGetInstance_ = (UFunction*) UObject::GObjObjects()->Data[ 37423 ];

	UcUIDataStore_MusicStudio_execGetInstance__Parms GetInstance__Parms;

	pFnGetInstance_->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetInstance_, &GetInstance__Parms, NULL );

	pFnGetInstance_->FunctionFlags |= 0x400;

	return GetInstance__Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_AddPattern.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_AddPattern::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38818 ];

	UcUIMSAction_AddPattern_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_AddTabPage.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_AddTabPage::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38824 ];

	UcUIMSAction_AddTabPage_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_AddTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_AddTrack::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38827 ];

	UcUIMSAction_AddTrack_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_DataStoreCreateEmptyTheme.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_DataStoreCreateEmptyTheme::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38830 ];

	UcUIMSAction_DataStoreCreateEmptyTheme_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_DataStoreLoadSaveFromFile.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_DataStoreLoadSaveFromFile::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38835 ];

	UcUIMSAction_DataStoreLoadSaveFromFile_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_DataStoreLoadThemeFromInventory.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_DataStoreLoadThemeFromInventory::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38839 ];

	UcUIMSAction_DataStoreLoadThemeFromInventory_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_DataStorePlayTheme.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_DataStorePlayTheme::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38844 ];

	UcUIMSAction_DataStorePlayTheme_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_DataStoreSaveThemeToInventory.OnFailed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            eErr                           ( CPF_Parm )

void UcUIMSAction_DataStoreSaveThemeToInventory::OnFailed ( int eErr )
{
	static UFunction* pFnOnFailed = NULL;

	if ( ! pFnOnFailed )
		pFnOnFailed = (UFunction*) UObject::GObjObjects()->Data[ 38849 ];

	UcUIMSAction_DataStoreSaveThemeToInventory_execOnFailed_Parms OnFailed_Parms;
	OnFailed_Parms.eErr = eErr;

	pFnOnFailed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnFailed, &OnFailed_Parms, NULL );

	pFnOnFailed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSAction_DataStoreSaveThemeToInventory.OnSuccess
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIMSAction_DataStoreSaveThemeToInventory::OnSuccess ( )
{
	static UFunction* pFnOnSuccess = NULL;

	if ( ! pFnOnSuccess )
		pFnOnSuccess = (UFunction*) UObject::GObjObjects()->Data[ 38848 ];

	UcUIMSAction_DataStoreSaveThemeToInventory_execOnSuccess_Parms OnSuccess_Parms;

	pFnOnSuccess->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnSuccess, &OnSuccess_Parms, NULL );

	pFnOnSuccess->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSAction_DeactivateLiveDisplayPoint.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_DeactivateLiveDisplayPoint::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38851 ];

	UcUIMSAction_DeactivateLiveDisplayPoint_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_DeletePattern.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_DeletePattern::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38856 ];

	UcUIMSAction_DeletePattern_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_DeleteTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_DeleteTrack::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38860 ];

	UcUIMSAction_DeleteTrack_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_FlushInstruments.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_FlushInstruments::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38873 ];

	UcUIMSAction_FlushInstruments_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_FlushThemeCache.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_FlushThemeCache::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38876 ];

	UcUIMSAction_FlushThemeCache_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_FreeMusicStudioResources.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_FreeMusicStudioResources::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38879 ];

	UcUIMSAction_FreeMusicStudioResources_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_GetOperatingContext.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_GetOperatingContext::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38883 ];

	UcUIMSAction_GetOperatingContext_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_GetTrackPatternName.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_GetTrackPatternName::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38888 ];

	UcUIMSAction_GetTrackPatternName_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_IsInventoryFull.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_IsInventoryFull::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38892 ];

	UcUIMSAction_IsInventoryFull_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_LiveModeEndPerformance.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_LiveModeEndPerformance::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38897 ];

	UcUIMSAction_LiveModeEndPerformance_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_LiveModeSetSong.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_LiveModeSetSong::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38903 ];

	UcUIMSAction_LiveModeSetSong_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_LiveModeStartPerformance.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_LiveModeStartPerformance::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38908 ];

	UcUIMSAction_LiveModeStartPerformance_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_LoadInstrument.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_LoadInstrument::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38913 ];

	UcUIMSAction_LoadInstrument_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_PlayCachedTheme.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_PlayCachedTheme::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38917 ];

	UcUIMSAction_PlayCachedTheme_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_PlayThemeByGuid.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_PlayThemeByGuid::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38921 ];

	UcUIMSAction_PlayThemeByGuid_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_ProcessContextOption.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_ProcessContextOption::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38925 ];

	UcUIMSAction_ProcessContextOption_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_ProcessRawMidiSequence.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_ProcessRawMidiSequence::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38933 ];

	UcUIMSAction_ProcessRawMidiSequence_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_RefreshPianoNoteRange.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_RefreshPianoNoteRange::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38937 ];

	UcUIMSAction_RefreshPianoNoteRange_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_RefreshTrackPattern.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_RefreshTrackPattern::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38941 ];

	UcUIMSAction_RefreshTrackPattern_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_RemoveTabPage.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_RemoveTabPage::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38946 ];

	UcUIMSAction_RemoveTabPage_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_SetAnimatorTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_SetAnimatorTrack::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38962 ];

	UcUIMSAction_SetAnimatorTrack_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_SetGridScrollPosition.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_SetGridScrollPosition::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38970 ];

	UcUIMSAction_SetGridScrollPosition_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_SetNoteEditorPattern.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_SetNoteEditorPattern::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38976 ];

	UcUIMSAction_SetNoteEditorPattern_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_SetOperatingContext.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_SetOperatingContext::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38981 ];

	UcUIMSAction_SetOperatingContext_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_SetPianoKeyboardTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_SetPianoKeyboardTrack::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38986 ];

	UcUIMSAction_SetPianoKeyboardTrack_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_SetPianoParameters.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_SetPianoParameters::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38993 ];

	UcUIMSAction_SetPianoParameters_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_SetTrackPatternName.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_SetTrackPatternName::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 38998 ];

	UcUIMSAction_SetTrackPatternName_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_SetTrackPatternSelection.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_SetTrackPatternSelection::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 39003 ];

	UcUIMSAction_SetTrackPatternSelection_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_SoloTrack.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_SoloTrack::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 39007 ];

	UcUIMSAction_SoloTrack_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_StopAllThemes.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_StopAllThemes::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 39012 ];

	UcUIMSAction_StopAllThemes_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_StopCachedTheme.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_StopCachedTheme::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 39015 ];

	UcUIMSAction_StopCachedTheme_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_Track_Sequencer.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_Track_Sequencer::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 39021 ];

	UcUIMSAction_Track_Sequencer_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSAction_UnlockInstruments.IsValidUISequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         TargetObject                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSAction_UnlockInstruments::eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject )
{
	static UFunction* pFnIsValidUISequenceObject = NULL;

	if ( ! pFnIsValidUISequenceObject )
		pFnIsValidUISequenceObject = (UFunction*) UObject::GObjObjects()->Data[ 39024 ];

	UcUIMSAction_UnlockInstruments_eventIsValidUISequenceObject_Parms IsValidUISequenceObject_Parms;
	IsValidUISequenceObject_Parms.TargetObject = TargetObject;

	this->ProcessEvent ( pFnIsValidUISequenceObject, &IsValidUISequenceObject_Parms, NULL );

	return IsValidUISequenceObject_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSGrid.OnClickedScrollZone
// [0x00040C01] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:
// class UUIScrollbar*            Sender                         ( CPF_Parm )
// float                          PositionPerc                   ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

void UcUIMSGrid::eventOnClickedScrollZone ( class UUIScrollbar* Sender, float PositionPerc, int PlayerIndex )
{
	static UFunction* pFnOnClickedScrollZone = NULL;

	if ( ! pFnOnClickedScrollZone )
		pFnOnClickedScrollZone = (UFunction*) UObject::GObjObjects()->Data[ 39105 ];

	UcUIMSGrid_eventOnClickedScrollZone_Parms OnClickedScrollZone_Parms;
	OnClickedScrollZone_Parms.Sender = Sender;
	OnClickedScrollZone_Parms.PositionPerc = PositionPerc;
	OnClickedScrollZone_Parms.PlayerIndex = PlayerIndex;

	pFnOnClickedScrollZone->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnClickedScrollZone, &OnClickedScrollZone_Parms, NULL );

	pFnOnClickedScrollZone->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSGrid.OnScrollActivity
// [0x00040C01] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScrollbar*            Sender                         ( CPF_Parm )
// float                          PositionChange                 ( CPF_Parm )
// unsigned long                  bPositionMaxed                 ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSGrid::eventOnScrollActivity ( class UUIScrollbar* Sender, float PositionChange, unsigned long bPositionMaxed )
{
	static UFunction* pFnOnScrollActivity = NULL;

	if ( ! pFnOnScrollActivity )
		pFnOnScrollActivity = (UFunction*) UObject::GObjObjects()->Data[ 39100 ];

	UcUIMSGrid_eventOnScrollActivity_Parms OnScrollActivity_Parms;
	OnScrollActivity_Parms.Sender = Sender;
	OnScrollActivity_Parms.PositionChange = PositionChange;
	OnScrollActivity_Parms.bPositionMaxed = bPositionMaxed;

	pFnOnScrollActivity->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnScrollActivity, &OnScrollActivity_Parms, NULL );

	pFnOnScrollActivity->FunctionFlags |= 0x400;

	return OnScrollActivity_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPContainer.ShowPage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nPageIndex                     ( CPF_Parm )

void UcUIMSDSPContainer::ShowPage ( int nPageIndex )
{
	static UFunction* pFnShowPage = NULL;

	if ( ! pFnShowPage )
		pFnShowPage = (UFunction*) UObject::GObjObjects()->Data[ 39169 ];

	UcUIMSDSPContainer_execShowPage_Parms ShowPage_Parms;
	ShowPage_Parms.nPageIndex = nPageIndex;

	pFnShowPage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnShowPage, &ShowPage_Parms, NULL );

	pFnShowPage->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSDSPContainer.RemoveDSPAtIndex
// [0x00020002] 
// Parameters infos:
// int                            nPageIndex                     ( CPF_Parm )
// int                            nDspIndex                      ( CPF_Parm )

void UcUIMSDSPContainer::RemoveDSPAtIndex ( int nPageIndex, int nDspIndex )
{
	static UFunction* pFnRemoveDSPAtIndex = NULL;

	if ( ! pFnRemoveDSPAtIndex )
		pFnRemoveDSPAtIndex = (UFunction*) UObject::GObjObjects()->Data[ 39165 ];

	UcUIMSDSPContainer_execRemoveDSPAtIndex_Parms RemoveDSPAtIndex_Parms;
	RemoveDSPAtIndex_Parms.nPageIndex = nPageIndex;
	RemoveDSPAtIndex_Parms.nDspIndex = nDspIndex;

	this->ProcessEvent ( pFnRemoveDSPAtIndex, &RemoveDSPAtIndex_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPContainer.RemoveAllDSPs
// [0x00020002] 
// Parameters infos:

void UcUIMSDSPContainer::RemoveAllDSPs ( )
{
	static UFunction* pFnRemoveAllDSPs = NULL;

	if ( ! pFnRemoveAllDSPs )
		pFnRemoveAllDSPs = (UFunction*) UObject::GObjObjects()->Data[ 39163 ];

	UcUIMSDSPContainer_execRemoveAllDSPs_Parms RemoveAllDSPs_Parms;

	this->ProcessEvent ( pFnRemoveAllDSPs, &RemoveAllDSPs_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPContainer.AddDSP
// [0x00020002] 
// Parameters infos:
// int                            nPageIndex                     ( CPF_Parm )
// int                            nDspType                       ( CPF_Parm )

void UcUIMSDSPContainer::AddDSP ( int nPageIndex, int nDspType )
{
	static UFunction* pFnAddDSP = NULL;

	if ( ! pFnAddDSP )
		pFnAddDSP = (UFunction*) UObject::GObjObjects()->Data[ 39159 ];

	UcUIMSDSPContainer_execAddDSP_Parms AddDSP_Parms;
	AddDSP_Parms.nPageIndex = nPageIndex;
	AddDSP_Parms.nDspType = nDspType;

	this->ProcessEvent ( pFnAddDSP, &AddDSP_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPContainer.RemoveAllPages
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIMSDSPContainer::eventRemoveAllPages ( )
{
	static UFunction* pFnRemoveAllPages = NULL;

	if ( ! pFnRemoveAllPages )
		pFnRemoveAllPages = (UFunction*) UObject::GObjObjects()->Data[ 39158 ];

	UcUIMSDSPContainer_eventRemoveAllPages_Parms RemoveAllPages_Parms;

	this->ProcessEvent ( pFnRemoveAllPages, &RemoveAllPages_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPContainer.RemovePage
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            nPageIndex                     ( CPF_Parm )

void UcUIMSDSPContainer::eventRemovePage ( int nPageIndex )
{
	static UFunction* pFnRemovePage = NULL;

	if ( ! pFnRemovePage )
		pFnRemovePage = (UFunction*) UObject::GObjObjects()->Data[ 39154 ];

	UcUIMSDSPContainer_eventRemovePage_Parms RemovePage_Parms;
	RemovePage_Parms.nPageIndex = nPageIndex;

	this->ProcessEvent ( pFnRemovePage, &RemovePage_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPContainer.GetDSPPage
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// class UcUIMSDSPPage*           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nPageIndex                     ( CPF_Parm )

class UcUIMSDSPPage* UcUIMSDSPContainer::GetDSPPage ( int nPageIndex )
{
	static UFunction* pFnGetDSPPage = NULL;

	if ( ! pFnGetDSPPage )
		pFnGetDSPPage = (UFunction*) UObject::GObjObjects()->Data[ 39151 ];

	UcUIMSDSPContainer_execGetDSPPage_Parms GetDSPPage_Parms;
	GetDSPPage_Parms.nPageIndex = nPageIndex;

	this->ProcessEvent ( pFnGetDSPPage, &GetDSPPage_Parms, NULL );

	return GetDSPPage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPContainer.AddPage
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIMSDSPContainer::eventAddPage ( )
{
	static UFunction* pFnAddPage = NULL;

	if ( ! pFnAddPage )
		pFnAddPage = (UFunction*) UObject::GObjObjects()->Data[ 39149 ];

	UcUIMSDSPContainer_eventAddPage_Parms AddPage_Parms;

	this->ProcessEvent ( pFnAddPage, &AddPage_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPContainer.RecreatePages
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIMSDSPContainer::RecreatePages ( )
{
	static UFunction* pFnRecreatePages = NULL;

	if ( ! pFnRecreatePages )
		pFnRecreatePages = (UFunction*) UObject::GObjObjects()->Data[ 39148 ];

	UcUIMSDSPContainer_execRecreatePages_Parms RecreatePages_Parms;

	pFnRecreatePages->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRecreatePages, &RecreatePages_Parms, NULL );

	pFnRecreatePages->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSDSPContainer.SetDSPDebugShowBounds
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void UcUIMSDSPContainer::eventSetDSPDebugShowBounds ( unsigned long bEnabled )
{
	static UFunction* pFnSetDSPDebugShowBounds = NULL;

	if ( ! pFnSetDSPDebugShowBounds )
		pFnSetDSPDebugShowBounds = (UFunction*) UObject::GObjObjects()->Data[ 39145 ];

	UcUIMSDSPContainer_eventSetDSPDebugShowBounds_Parms SetDSPDebugShowBounds_Parms;
	SetDSPDebugShowBounds_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnSetDSPDebugShowBounds, &SetDSPDebugShowBounds_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.SetDebugShowBounds
// [0x00042401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIObject*               pObj                           ( CPF_Parm )
// unsigned long                  bEnabled                       ( CPF_Parm )

void UcUIMSDSPPage::SetDebugShowBounds ( class UUIObject* pObj, unsigned long bEnabled )
{
	static UFunction* pFnSetDebugShowBounds = NULL;

	if ( ! pFnSetDebugShowBounds )
		pFnSetDebugShowBounds = (UFunction*) UObject::GObjObjects()->Data[ 39304 ];

	UcUIMSDSPPage_execSetDebugShowBounds_Parms SetDebugShowBounds_Parms;
	SetDebugShowBounds_Parms.pObj = pObj;
	SetDebugShowBounds_Parms.bEnabled = bEnabled;

	pFnSetDebugShowBounds->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDebugShowBounds, &SetDebugShowBounds_Parms, NULL );

	pFnSetDebugShowBounds->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSDSPPage.ResolveAllStyles
// [0x00042401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIObject*               pObj                           ( CPF_Parm )

void UcUIMSDSPPage::ResolveAllStyles ( class UUIObject* pObj )
{
	static UFunction* pFnResolveAllStyles = NULL;

	if ( ! pFnResolveAllStyles )
		pFnResolveAllStyles = (UFunction*) UObject::GObjObjects()->Data[ 39292 ];

	UcUIMSDSPPage_execResolveAllStyles_Parms ResolveAllStyles_Parms;
	ResolveAllStyles_Parms.pObj = pObj;

	pFnResolveAllStyles->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnResolveAllStyles, &ResolveAllStyles_Parms, NULL );

	pFnResolveAllStyles->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSDSPPage.UpdateStyleFromParent
// [0x00042401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sParentStyleTag                ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sStyleName                     ( CPF_Parm | CPF_NeedCtorLink )

void UcUIMSDSPPage::UpdateStyleFromParent ( struct FString sParentStyleTag, struct FString sStyleName )
{
	static UFunction* pFnUpdateStyleFromParent = NULL;

	if ( ! pFnUpdateStyleFromParent )
		pFnUpdateStyleFromParent = (UFunction*) UObject::GObjObjects()->Data[ 39329 ];

	UcUIMSDSPPage_execUpdateStyleFromParent_Parms UpdateStyleFromParent_Parms;
	memcpy ( &UpdateStyleFromParent_Parms.sParentStyleTag, &sParentStyleTag, 0xC );
	memcpy ( &UpdateStyleFromParent_Parms.sStyleName, &sStyleName, 0xC );

	pFnUpdateStyleFromParent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateStyleFromParent, &UpdateStyleFromParent_Parms, NULL );

	pFnUpdateStyleFromParent->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSDSPPage.ChangeWidgetStyle
// [0x00042401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIObject*               pObj                           ( CPF_Parm )
// struct FString                 sResolverTag                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sStyle                         ( CPF_Parm | CPF_NeedCtorLink )
// int                            ArrayIndex                     ( CPF_OptionalParm | CPF_Parm )

void UcUIMSDSPPage::ChangeWidgetStyle ( class UUIObject* pObj, struct FString sResolverTag, struct FString sStyle, int ArrayIndex )
{
	static UFunction* pFnChangeWidgetStyle = NULL;

	if ( ! pFnChangeWidgetStyle )
		pFnChangeWidgetStyle = (UFunction*) UObject::GObjObjects()->Data[ 39321 ];

	UcUIMSDSPPage_execChangeWidgetStyle_Parms ChangeWidgetStyle_Parms;
	ChangeWidgetStyle_Parms.pObj = pObj;
	memcpy ( &ChangeWidgetStyle_Parms.sResolverTag, &sResolverTag, 0xC );
	memcpy ( &ChangeWidgetStyle_Parms.sStyle, &sStyle, 0xC );
	ChangeWidgetStyle_Parms.ArrayIndex = ArrayIndex;

	pFnChangeWidgetStyle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnChangeWidgetStyle, &ChangeWidgetStyle_Parms, NULL );

	pFnChangeWidgetStyle->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSDSPPage.SetPanelStyle
// [0x00022002] 
// Parameters infos:
// class UUIPanel*                pObj                           ( CPF_Parm )
// struct FString                 sStyleName                     ( CPF_Parm | CPF_NeedCtorLink )

void UcUIMSDSPPage::SetPanelStyle ( class UUIPanel* pObj, struct FString sStyleName )
{
	static UFunction* pFnSetPanelStyle = NULL;

	if ( ! pFnSetPanelStyle )
		pFnSetPanelStyle = (UFunction*) UObject::GObjObjects()->Data[ 39322 ];

	UcUIMSDSPPage_execSetPanelStyle_Parms SetPanelStyle_Parms;
	SetPanelStyle_Parms.pObj = pObj;
	memcpy ( &SetPanelStyle_Parms.sStyleName, &sStyleName, 0xC );

	this->ProcessEvent ( pFnSetPanelStyle, &SetPanelStyle_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.SetButtonStyle
// [0x00022002] 
// Parameters infos:
// class UUIButton*               pObj                           ( CPF_Parm )
// struct FString                 sStyleName                     ( CPF_Parm | CPF_NeedCtorLink )

void UcUIMSDSPPage::SetButtonStyle ( class UUIButton* pObj, struct FString sStyleName )
{
	static UFunction* pFnSetButtonStyle = NULL;

	if ( ! pFnSetButtonStyle )
		pFnSetButtonStyle = (UFunction*) UObject::GObjObjects()->Data[ 39318 ];

	UcUIMSDSPPage_execSetButtonStyle_Parms SetButtonStyle_Parms;
	SetButtonStyle_Parms.pObj = pObj;
	memcpy ( &SetButtonStyle_Parms.sStyleName, &sStyleName, 0xC );

	this->ProcessEvent ( pFnSetButtonStyle, &SetButtonStyle_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.SetTrackIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            nTrackIndex                    ( CPF_Parm )

void UcUIMSDSPPage::eventSetTrackIndex ( int nTrackIndex )
{
	static UFunction* pFnSetTrackIndex = NULL;

	if ( ! pFnSetTrackIndex )
		pFnSetTrackIndex = (UFunction*) UObject::GObjObjects()->Data[ 39316 ];

	UcUIMSDSPPage_eventSetTrackIndex_Parms SetTrackIndex_Parms;
	SetTrackIndex_Parms.nTrackIndex = nTrackIndex;

	this->ProcessEvent ( pFnSetTrackIndex, &SetTrackIndex_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.UpdateAllMarkupText
// [0x00020002] 
// Parameters infos:

void UcUIMSDSPPage::UpdateAllMarkupText ( )
{
	static UFunction* pFnUpdateAllMarkupText = NULL;

	if ( ! pFnUpdateAllMarkupText )
		pFnUpdateAllMarkupText = (UFunction*) UObject::GObjObjects()->Data[ 39314 ];

	UcUIMSDSPPage_execUpdateAllMarkupText_Parms UpdateAllMarkupText_Parms;

	this->ProcessEvent ( pFnUpdateAllMarkupText, &UpdateAllMarkupText_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.UpdateDSPMarkupText
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nDspIndex                      ( CPF_Parm )

void UcUIMSDSPPage::UpdateDSPMarkupText ( int nDspIndex )
{
	static UFunction* pFnUpdateDSPMarkupText = NULL;

	if ( ! pFnUpdateDSPMarkupText )
		pFnUpdateDSPMarkupText = (UFunction*) UObject::GObjObjects()->Data[ 39312 ];

	UcUIMSDSPPage_execUpdateDSPMarkupText_Parms UpdateDSPMarkupText_Parms;
	UpdateDSPMarkupText_Parms.nDspIndex = nDspIndex;

	pFnUpdateDSPMarkupText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUpdateDSPMarkupText, &UpdateDSPMarkupText_Parms, NULL );

	pFnUpdateDSPMarkupText->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSDSPPage.RecreateDSPs
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIMSDSPPage::RecreateDSPs ( )
{
	static UFunction* pFnRecreateDSPs = NULL;

	if ( ! pFnRecreateDSPs )
		pFnRecreateDSPs = (UFunction*) UObject::GObjObjects()->Data[ 39311 ];

	UcUIMSDSPPage_execRecreateDSPs_Parms RecreateDSPs_Parms;

	pFnRecreateDSPs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRecreateDSPs, &RecreateDSPs_Parms, NULL );

	pFnRecreateDSPs->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSDSPPage.NotifyPreRemove
// [0x00020002] 
// Parameters infos:

void UcUIMSDSPPage::NotifyPreRemove ( )
{
	static UFunction* pFnNotifyPreRemove = NULL;

	if ( ! pFnNotifyPreRemove )
		pFnNotifyPreRemove = (UFunction*) UObject::GObjObjects()->Data[ 39307 ];

	UcUIMSDSPPage_execNotifyPreRemove_Parms NotifyPreRemove_Parms;

	this->ProcessEvent ( pFnNotifyPreRemove, &NotifyPreRemove_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.NotifyAdded
// [0x00020002] 
// Parameters infos:
// int                            nPageIndex                     ( CPF_Parm )

void UcUIMSDSPPage::NotifyAdded ( int nPageIndex )
{
	static UFunction* pFnNotifyAdded = NULL;

	if ( ! pFnNotifyAdded )
		pFnNotifyAdded = (UFunction*) UObject::GObjObjects()->Data[ 39305 ];

	UcUIMSDSPPage_execNotifyAdded_Parms NotifyAdded_Parms;
	NotifyAdded_Parms.nPageIndex = nPageIndex;

	this->ProcessEvent ( pFnNotifyAdded, &NotifyAdded_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.SetDSPDebugShowBounds
// [0x00820002] 
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void UcUIMSDSPPage::SetDSPDebugShowBounds ( unsigned long bEnabled )
{
	static UFunction* pFnSetDSPDebugShowBounds = NULL;

	if ( ! pFnSetDSPDebugShowBounds )
		pFnSetDSPDebugShowBounds = (UFunction*) UObject::GObjObjects()->Data[ 39301 ];

	UcUIMSDSPPage_execSetDSPDebugShowBounds_Parms SetDSPDebugShowBounds_Parms;
	SetDSPDebugShowBounds_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnSetDSPDebugShowBounds, &SetDSPDebugShowBounds_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.RemoveDSPAtIndex
// [0x00020002] 
// Parameters infos:
// int                            nDspIndex                      ( CPF_Parm )

void UcUIMSDSPPage::RemoveDSPAtIndex ( int nDspIndex )
{
	static UFunction* pFnRemoveDSPAtIndex = NULL;

	if ( ! pFnRemoveDSPAtIndex )
		pFnRemoveDSPAtIndex = (UFunction*) UObject::GObjObjects()->Data[ 39297 ];

	UcUIMSDSPPage_execRemoveDSPAtIndex_Parms RemoveDSPAtIndex_Parms;
	RemoveDSPAtIndex_Parms.nDspIndex = nDspIndex;

	this->ProcessEvent ( pFnRemoveDSPAtIndex, &RemoveDSPAtIndex_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.RemoveAllDSPs
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIMSDSPPage::eventRemoveAllDSPs ( )
{
	static UFunction* pFnRemoveAllDSPs = NULL;

	if ( ! pFnRemoveAllDSPs )
		pFnRemoveAllDSPs = (UFunction*) UObject::GObjObjects()->Data[ 39293 ];

	UcUIMSDSPPage_eventRemoveAllDSPs_Parms RemoveAllDSPs_Parms;

	this->ProcessEvent ( pFnRemoveAllDSPs, &RemoveAllDSPs_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.AddDSP
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// int                            nDspType                       ( CPF_Parm )

void UcUIMSDSPPage::eventAddDSP ( int nDspType )
{
	static UFunction* pFnAddDSP = NULL;

	if ( ! pFnAddDSP )
		pFnAddDSP = (UFunction*) UObject::GObjObjects()->Data[ 39289 ];

	UcUIMSDSPPage_eventAddDSP_Parms AddDSP_Parms;
	AddDSP_Parms.nDspType = nDspType;

	this->ProcessEvent ( pFnAddDSP, &AddDSP_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSPControls
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// int                            nDspType                       ( CPF_Parm )
// struct FUIMSDspInfo            Info                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIMSDSPPage::CreateDSPControls ( int nDspType, struct FUIMSDspInfo* Info )
{
	static UFunction* pFnCreateDSPControls = NULL;

	if ( ! pFnCreateDSPControls )
		pFnCreateDSPControls = (UFunction*) UObject::GObjObjects()->Data[ 39213 ];

	UcUIMSDSPPage_execCreateDSPControls_Parms CreateDSPControls_Parms;
	CreateDSPControls_Parms.nDspType = nDspType;

	this->ProcessEvent ( pFnCreateDSPControls, &CreateDSPControls_Parms, NULL );

	if ( Info )
		memcpy ( Info, &CreateDSPControls_Parms.Info, 0x34 );
};

// Function APBUserInterface.cUIMSDSPPage.DeleteDSPControlsPanel
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// int                            nDspIndex                      ( CPF_Parm )

void UcUIMSDSPPage::DeleteDSPControlsPanel ( int nDspIndex )
{
	static UFunction* pFnDeleteDSPControlsPanel = NULL;

	if ( ! pFnDeleteDSPControlsPanel )
		pFnDeleteDSPControlsPanel = (UFunction*) UObject::GObjObjects()->Data[ 39211 ];

	UcUIMSDSPPage_execDeleteDSPControlsPanel_Parms DeleteDSPControlsPanel_Parms;
	DeleteDSPControlsPanel_Parms.nDspIndex = nDspIndex;

	this->ProcessEvent ( pFnDeleteDSPControlsPanel, &DeleteDSPControlsPanel_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSP_LowPassFilter
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// struct FUIMSDspInfo            Info                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIMSDSPPage::CreateDSP_LowPassFilter ( struct FUIMSDspInfo* Info )
{
	static UFunction* pFnCreateDSP_LowPassFilter = NULL;

	if ( ! pFnCreateDSP_LowPassFilter )
		pFnCreateDSP_LowPassFilter = (UFunction*) UObject::GObjObjects()->Data[ 39281 ];

	UcUIMSDSPPage_execCreateDSP_LowPassFilter_Parms CreateDSP_LowPassFilter_Parms;

	this->ProcessEvent ( pFnCreateDSP_LowPassFilter, &CreateDSP_LowPassFilter_Parms, NULL );

	if ( Info )
		memcpy ( Info, &CreateDSP_LowPassFilter_Parms.Info, 0x34 );
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSP_Delay
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// struct FUIMSDspInfo            Info                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIMSDSPPage::CreateDSP_Delay ( struct FUIMSDspInfo* Info )
{
	static UFunction* pFnCreateDSP_Delay = NULL;

	if ( ! pFnCreateDSP_Delay )
		pFnCreateDSP_Delay = (UFunction*) UObject::GObjObjects()->Data[ 39279 ];

	UcUIMSDSPPage_execCreateDSP_Delay_Parms CreateDSP_Delay_Parms;

	this->ProcessEvent ( pFnCreateDSP_Delay, &CreateDSP_Delay_Parms, NULL );

	if ( Info )
		memcpy ( Info, &CreateDSP_Delay_Parms.Info, 0x34 );
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSPPanel_Empty
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUIMSDspInfo            Info                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUIMSDSPPage::CreateDSPPanel_Empty ( struct FUIMSDspInfo* Info )
{
	static UFunction* pFnCreateDSPPanel_Empty = NULL;

	if ( ! pFnCreateDSPPanel_Empty )
		pFnCreateDSPPanel_Empty = (UFunction*) UObject::GObjObjects()->Data[ 39275 ];

	UcUIMSDSPPage_execCreateDSPPanel_Empty_Parms CreateDSPPanel_Empty_Parms;

	this->ProcessEvent ( pFnCreateDSPPanel_Empty, &CreateDSPPanel_Empty_Parms, NULL );

	if ( Info )
		memcpy ( Info, &CreateDSPPanel_Empty_Parms.Info, 0x34 );

	return CreateDSPPanel_Empty_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPPage.CreateKnobControl
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// struct FString                 sTitle                         ( CPF_Parm | CPF_NeedCtorLink )
// int                            nParameterIndex                ( CPF_Parm )
// float                          fWidthPerc                     ( CPF_Parm )
// float                          fHeightPerc                    ( CPF_Parm )
// struct FUIMSDspInfo            Info                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIMSDSPPage::CreateKnobControl ( struct FString sTitle, int nParameterIndex, float fWidthPerc, float fHeightPerc, struct FUIMSDspInfo* Info )
{
	static UFunction* pFnCreateKnobControl = NULL;

	if ( ! pFnCreateKnobControl )
		pFnCreateKnobControl = (UFunction*) UObject::GObjObjects()->Data[ 39264 ];

	UcUIMSDSPPage_execCreateKnobControl_Parms CreateKnobControl_Parms;
	memcpy ( &CreateKnobControl_Parms.sTitle, &sTitle, 0xC );
	CreateKnobControl_Parms.nParameterIndex = nParameterIndex;
	CreateKnobControl_Parms.fWidthPerc = fWidthPerc;
	CreateKnobControl_Parms.fHeightPerc = fHeightPerc;

	this->ProcessEvent ( pFnCreateKnobControl, &CreateKnobControl_Parms, NULL );

	if ( Info )
		memcpy ( Info, &CreateKnobControl_Parms.Info, 0x34 );
};

// Function APBUserInterface.cUIMSDSPPage.CreateDSPPanel_Top
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            nDspType                       ( CPF_Parm )
// struct FUIMSDspInfo            Info                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUIMSDSPPage::CreateDSPPanel_Top ( int nDspType, struct FUIMSDspInfo* Info )
{
	static UFunction* pFnCreateDSPPanel_Top = NULL;

	if ( ! pFnCreateDSPPanel_Top )
		pFnCreateDSPPanel_Top = (UFunction*) UObject::GObjObjects()->Data[ 39258 ];

	UcUIMSDSPPage_execCreateDSPPanel_Top_Parms CreateDSPPanel_Top_Parms;
	CreateDSPPanel_Top_Parms.nDspType = nDspType;

	this->ProcessEvent ( pFnCreateDSPPanel_Top, &CreateDSPPanel_Top_Parms, NULL );

	if ( Info )
		memcpy ( Info, &CreateDSPPanel_Top_Parms.Info, 0x34 );

	return CreateDSPPanel_Top_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPPage.CreateParameterBinding
// [0x00C40003] ( FUNC_Final )
// Parameters infos:
// class UUIScreenObject*         pObj                           ( CPF_Parm )
// int                            nParameterIndex                ( CPF_Parm )
// unsigned long                  bONParameter                   ( CPF_OptionalParm | CPF_Parm )
// struct FUIMSDspInfo            Info                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIMSDSPPage::CreateParameterBinding ( class UUIScreenObject* pObj, int nParameterIndex, unsigned long bONParameter, struct FUIMSDspInfo* Info )
{
	static UFunction* pFnCreateParameterBinding = NULL;

	if ( ! pFnCreateParameterBinding )
		pFnCreateParameterBinding = (UFunction*) UObject::GObjObjects()->Data[ 39212 ];

	UcUIMSDSPPage_execCreateParameterBinding_Parms CreateParameterBinding_Parms;
	CreateParameterBinding_Parms.pObj = pObj;
	CreateParameterBinding_Parms.nParameterIndex = nParameterIndex;
	CreateParameterBinding_Parms.bONParameter = bONParameter;

	this->ProcessEvent ( pFnCreateParameterBinding, &CreateParameterBinding_Parms, NULL );

	if ( Info )
		memcpy ( Info, &CreateParameterBinding_Parms.Info, 0x34 );
};

// Function APBUserInterface.cUIMSDSPPage.SetWidgetPositionsPixels
// [0x00022002] 
// Parameters infos:
// class UUIObject*               pObj                           ( CPF_Parm )
// float                          fLeft                          ( CPF_Parm )
// float                          fTop                           ( CPF_Parm )
// float                          fRight                         ( CPF_Parm )
// float                          fBottom                        ( CPF_Parm )

void UcUIMSDSPPage::SetWidgetPositionsPixels ( class UUIObject* pObj, float fLeft, float fTop, float fRight, float fBottom )
{
	static UFunction* pFnSetWidgetPositionsPixels = NULL;

	if ( ! pFnSetWidgetPositionsPixels )
		pFnSetWidgetPositionsPixels = (UFunction*) UObject::GObjObjects()->Data[ 39247 ];

	UcUIMSDSPPage_execSetWidgetPositionsPixels_Parms SetWidgetPositionsPixels_Parms;
	SetWidgetPositionsPixels_Parms.pObj = pObj;
	SetWidgetPositionsPixels_Parms.fLeft = fLeft;
	SetWidgetPositionsPixels_Parms.fTop = fTop;
	SetWidgetPositionsPixels_Parms.fRight = fRight;
	SetWidgetPositionsPixels_Parms.fBottom = fBottom;

	this->ProcessEvent ( pFnSetWidgetPositionsPixels, &SetWidgetPositionsPixels_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.SetWidgetPositions
// [0x00022002] 
// Parameters infos:
// class UUIObject*               pObj                           ( CPF_Parm )
// float                          fLeft                          ( CPF_Parm )
// float                          fTop                           ( CPF_Parm )
// float                          fRight                         ( CPF_Parm )
// float                          fBottom                        ( CPF_Parm )

void UcUIMSDSPPage::SetWidgetPositions ( class UUIObject* pObj, float fLeft, float fTop, float fRight, float fBottom )
{
	static UFunction* pFnSetWidgetPositions = NULL;

	if ( ! pFnSetWidgetPositions )
		pFnSetWidgetPositions = (UFunction*) UObject::GObjObjects()->Data[ 39241 ];

	UcUIMSDSPPage_execSetWidgetPositions_Parms SetWidgetPositions_Parms;
	SetWidgetPositions_Parms.pObj = pObj;
	SetWidgetPositions_Parms.fLeft = fLeft;
	SetWidgetPositions_Parms.fTop = fTop;
	SetWidgetPositions_Parms.fRight = fRight;
	SetWidgetPositions_Parms.fBottom = fBottom;

	this->ProcessEvent ( pFnSetWidgetPositions, &SetWidgetPositions_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.FindDSPIndex
// [0x00440003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         pObjToLookFor                  ( CPF_Parm )
// int                            nDspIndex                      ( CPF_Parm | CPF_OutParm )

bool UcUIMSDSPPage::FindDSPIndex ( class UUIScreenObject* pObjToLookFor, int* nDspIndex )
{
	static UFunction* pFnFindDSPIndex = NULL;

	if ( ! pFnFindDSPIndex )
		pFnFindDSPIndex = (UFunction*) UObject::GObjObjects()->Data[ 39210 ];

	UcUIMSDSPPage_execFindDSPIndex_Parms FindDSPIndex_Parms;
	FindDSPIndex_Parms.pObjToLookFor = pObjToLookFor;

	this->ProcessEvent ( pFnFindDSPIndex, &FindDSPIndex_Parms, NULL );

	if ( nDspIndex )
		*nDspIndex = FindDSPIndex_Parms.nDspIndex;

	return FindDSPIndex_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPPage.OnEnableDSP
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UcUIMSDSPPage::OnEnableDSP ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnEnableDSP = NULL;

	if ( ! pFnOnEnableDSP )
		pFnOnEnableDSP = (UFunction*) UObject::GObjObjects()->Data[ 39230 ];

	UcUIMSDSPPage_execOnEnableDSP_Parms OnEnableDSP_Parms;
	OnEnableDSP_Parms.EventObject = EventObject;
	OnEnableDSP_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnEnableDSP, &OnEnableDSP_Parms, NULL );

	return OnEnableDSP_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPPage.OnMoveDSPRight
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UcUIMSDSPPage::OnMoveDSPRight ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnMoveDSPRight = NULL;

	if ( ! pFnOnMoveDSPRight )
		pFnOnMoveDSPRight = (UFunction*) UObject::GObjObjects()->Data[ 39226 ];

	UcUIMSDSPPage_execOnMoveDSPRight_Parms OnMoveDSPRight_Parms;
	OnMoveDSPRight_Parms.EventObject = EventObject;
	OnMoveDSPRight_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnMoveDSPRight, &OnMoveDSPRight_Parms, NULL );

	return OnMoveDSPRight_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPPage.OnMoveDSPLeft
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UcUIMSDSPPage::OnMoveDSPLeft ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnMoveDSPLeft = NULL;

	if ( ! pFnOnMoveDSPLeft )
		pFnOnMoveDSPLeft = (UFunction*) UObject::GObjObjects()->Data[ 39222 ];

	UcUIMSDSPPage_execOnMoveDSPLeft_Parms OnMoveDSPLeft_Parms;
	OnMoveDSPLeft_Parms.EventObject = EventObject;
	OnMoveDSPLeft_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnMoveDSPLeft, &OnMoveDSPLeft_Parms, NULL );

	return OnMoveDSPLeft_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPPage.OnRemoveDSP
// [0x00040003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScreenObject*         EventObject                    ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

bool UcUIMSDSPPage::OnRemoveDSP ( class UUIScreenObject* EventObject, int PlayerIndex )
{
	static UFunction* pFnOnRemoveDSP = NULL;

	if ( ! pFnOnRemoveDSP )
		pFnOnRemoveDSP = (UFunction*) UObject::GObjObjects()->Data[ 39217 ];

	UcUIMSDSPPage_execOnRemoveDSP_Parms OnRemoveDSP_Parms;
	OnRemoveDSP_Parms.EventObject = EventObject;
	OnRemoveDSP_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnRemoveDSP, &OnRemoveDSP_Parms, NULL );

	return OnRemoveDSP_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPPage.OnCreateCustomComboList
// [0x00040401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIList*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIComboBox*             ListOwner                      ( CPF_Parm )

class UUIList* UcUIMSDSPPage::OnCreateCustomComboList ( class UUIComboBox* ListOwner )
{
	static UFunction* pFnOnCreateCustomComboList = NULL;

	if ( ! pFnOnCreateCustomComboList )
		pFnOnCreateCustomComboList = (UFunction*) UObject::GObjObjects()->Data[ 39214 ];

	UcUIMSDSPPage_execOnCreateCustomComboList_Parms OnCreateCustomComboList_Parms;
	OnCreateCustomComboList_Parms.ListOwner = ListOwner;

	pFnOnCreateCustomComboList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnCreateCustomComboList, &OnCreateCustomComboList_Parms, NULL );

	pFnOnCreateCustomComboList->FunctionFlags |= 0x400;

	return OnCreateCustomComboList_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSDSPPage.OnSelectDSP
// [0x00840003] ( FUNC_Final )
// Parameters infos:
// class UUIObject*               Sender                         ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )

void UcUIMSDSPPage::OnSelectDSP ( class UUIObject* Sender, int PlayerIndex )
{
	static UFunction* pFnOnSelectDSP = NULL;

	if ( ! pFnOnSelectDSP )
		pFnOnSelectDSP = (UFunction*) UObject::GObjObjects()->Data[ 39199 ];

	UcUIMSDSPPage_execOnSelectDSP_Parms OnSelectDSP_Parms;
	OnSelectDSP_Parms.Sender = Sender;
	OnSelectDSP_Parms.PlayerIndex = PlayerIndex;

	this->ProcessEvent ( pFnOnSelectDSP, &OnSelectDSP_Parms, NULL );
};

// Function APBUserInterface.cUIMSDSPPage.GetMSDataStore
// [0x00042003] ( FUNC_Final )
// Parameters infos:
// class UcUIDataStore_MusicStudio* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UcUIDataStore_MusicStudio* UcUIMSDSPPage::GetMSDataStore ( )
{
	static UFunction* pFnGetMSDataStore = NULL;

	if ( ! pFnGetMSDataStore )
		pFnGetMSDataStore = (UFunction*) UObject::GObjObjects()->Data[ 39196 ];

	UcUIMSDSPPage_execGetMSDataStore_Parms GetMSDataStore_Parms;

	this->ProcessEvent ( pFnGetMSDataStore, &GetMSDataStore_Parms, NULL );

	return GetMSDataStore_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSKnob.SetImage
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class USurface*                BackImage                      ( CPF_Parm )
// class USurface*                ForeImage                      ( CPF_Parm )

void UcUIMSKnob::SetImage ( class USurface* BackImage, class USurface* ForeImage )
{
	static UFunction* pFnSetImage = NULL;

	if ( ! pFnSetImage )
		pFnSetImage = (UFunction*) UObject::GObjObjects()->Data[ 39399 ];

	UcUIMSKnob_execSetImage_Parms SetImage_Parms;
	SetImage_Parms.BackImage = BackImage;
	SetImage_Parms.ForeImage = ForeImage;

	pFnSetImage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetImage, &SetImage_Parms, NULL );

	pFnSetImage->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSKnob.OnStateChanged
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// class UUIScreenObject*         Sender                         ( CPF_Parm )
// int                            PlayerIndex                    ( CPF_Parm )
// class UUIState*                NewlyActiveState               ( CPF_Parm )
// class UUIState*                PreviouslyActiveState          ( CPF_OptionalParm | CPF_Parm )

void UcUIMSKnob::OnStateChanged ( class UUIScreenObject* Sender, int PlayerIndex, class UUIState* NewlyActiveState, class UUIState* PreviouslyActiveState )
{
	static UFunction* pFnOnStateChanged = NULL;

	if ( ! pFnOnStateChanged )
		pFnOnStateChanged = (UFunction*) UObject::GObjObjects()->Data[ 39394 ];

	UcUIMSKnob_execOnStateChanged_Parms OnStateChanged_Parms;
	OnStateChanged_Parms.Sender = Sender;
	OnStateChanged_Parms.PlayerIndex = PlayerIndex;
	OnStateChanged_Parms.NewlyActiveState = NewlyActiveState;
	OnStateChanged_Parms.PreviouslyActiveState = PreviouslyActiveState;

	this->ProcessEvent ( pFnOnStateChanged, &OnStateChanged_Parms, NULL );
};

// Function APBUserInterface.cUIMSKnob.GetValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bPercentageValue               ( CPF_OptionalParm | CPF_Parm )

float UcUIMSKnob::GetValue ( unsigned long bPercentageValue )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 39391 ];

	UcUIMSKnob_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.bPercentageValue = bPercentageValue;

	pFnGetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	pFnGetValue->FunctionFlags |= 0x400;

	return GetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSKnob.SetValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          NewValue                       ( CPF_Parm | CPF_CoerceParm )
// unsigned long                  bPercentageValue               ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSKnob::SetValue ( float NewValue, unsigned long bPercentageValue )
{
	static UFunction* pFnSetValue = NULL;

	if ( ! pFnSetValue )
		pFnSetValue = (UFunction*) UObject::GObjObjects()->Data[ 39387 ];

	UcUIMSKnob_execSetValue_Parms SetValue_Parms;
	SetValue_Parms.NewValue = NewValue;
	SetValue_Parms.bPercentageValue = bPercentageValue;

	pFnSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetValue, &SetValue_Parms, NULL );

	pFnSetValue->FunctionFlags |= 0x400;

	return SetValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSKnob.SaveSubscriberValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UcUIMSKnob::SaveSubscriberValue ( int BindingIndex, TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 39382 ];

	UcUIMSKnob_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0xC );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSKnob.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UcUIMSKnob::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 39381 ];

	UcUIMSKnob_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSKnob.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIMSKnob::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 39378 ];

	UcUIMSKnob_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function APBUserInterface.cUIMSKnob.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UcUIMSKnob::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = (UFunction*) UObject::GObjObjects()->Data[ 39372 ];

	UcUIMSKnob_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSKnob.RefreshSubscriberValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSKnob::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 39369 ];

	UcUIMSKnob_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSKnob.GetDataStoreBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UcUIMSKnob::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 39366 ];

	UcUIMSKnob_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSKnob.SetDataStoreBinding
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UcUIMSKnob::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 39363 ];

	UcUIMSKnob_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSList.Initialized
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIMSList::eventInitialized ( )
{
	static UFunction* pFnInitialized = NULL;

	if ( ! pFnInitialized )
		pFnInitialized = (UFunction*) UObject::GObjObjects()->Data[ 39412 ];

	UcUIMSList_eventInitialized_Parms Initialized_Parms;

	this->ProcessEvent ( pFnInitialized, &Initialized_Parms, NULL );
};

// Function APBUserInterface.cUIMSList.ScrollVertical
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UUIScrollbar*            Sender                         ( CPF_Parm )
// float                          PositionChange                 ( CPF_Parm )
// unsigned long                  bPositionMaxed                 ( CPF_OptionalParm | CPF_Parm )

bool UcUIMSList::ScrollVertical ( class UUIScrollbar* Sender, float PositionChange, unsigned long bPositionMaxed )
{
	static UFunction* pFnScrollVertical = NULL;

	if ( ! pFnScrollVertical )
		pFnScrollVertical = (UFunction*) UObject::GObjObjects()->Data[ 39407 ];

	UcUIMSList_execScrollVertical_Parms ScrollVertical_Parms;
	ScrollVertical_Parms.Sender = Sender;
	ScrollVertical_Parms.PositionChange = PositionChange;
	ScrollVertical_Parms.bPositionMaxed = bPositionMaxed;

	pFnScrollVertical->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnScrollVertical, &ScrollVertical_Parms, NULL );

	pFnScrollVertical->FunctionFlags |= 0x400;

	return ScrollVertical_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMSSequencer.SelectRow
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            nRow                           ( CPF_Parm )

void UcUIMSSequencer::SelectRow ( int nRow )
{
	static UFunction* pFnSelectRow = NULL;

	if ( ! pFnSelectRow )
		pFnSelectRow = (UFunction*) UObject::GObjObjects()->Data[ 39465 ];

	UcUIMSSequencer_execSelectRow_Parms SelectRow_Parms;
	SelectRow_Parms.nRow = nRow;

	pFnSelectRow->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSelectRow, &SelectRow_Parms, NULL );

	pFnSelectRow->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSSequencer.RefreshData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIMSSequencer::RefreshData ( )
{
	static UFunction* pFnRefreshData = NULL;

	if ( ! pFnRefreshData )
		pFnRefreshData = (UFunction*) UObject::GObjObjects()->Data[ 39464 ];

	UcUIMSSequencer_execRefreshData_Parms RefreshData_Parms;

	pFnRefreshData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshData, &RefreshData_Parms, NULL );

	pFnRefreshData->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMSSequencerHeader.RefreshData
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIMSSequencerHeader::RefreshData ( )
{
	static UFunction* pFnRefreshData = NULL;

	if ( ! pFnRefreshData )
		pFnRefreshData = (UFunction*) UObject::GObjObjects()->Data[ 39474 ];

	UcUIMSSequencerHeader_execRefreshData_Parms RefreshData_Parms;

	pFnRefreshData->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshData, &RefreshData_Parms, NULL );

	pFnRefreshData->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMissionAccept.ReviewClosed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  Accepted                       ( CPF_Parm )

void UcUIMissionAccept::ReviewClosed ( unsigned char Accepted )
{
	static UFunction* pFnReviewClosed = NULL;

	if ( ! pFnReviewClosed )
		pFnReviewClosed = (UFunction*) UObject::GObjObjects()->Data[ 38814 ];

	UcUIMissionAccept_execReviewClosed_Parms ReviewClosed_Parms;
	ReviewClosed_Parms.Accepted = Accepted;

	pFnReviewClosed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReviewClosed, &ReviewClosed_Parms, NULL );

	pFnReviewClosed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMissionAccept.AcceptedForSideClosed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  Accepted                       ( CPF_Parm )

void UcUIMissionAccept::AcceptedForSideClosed ( unsigned char Accepted )
{
	static UFunction* pFnAcceptedForSideClosed = NULL;

	if ( ! pFnAcceptedForSideClosed )
		pFnAcceptedForSideClosed = (UFunction*) UObject::GObjObjects()->Data[ 38812 ];

	UcUIMissionAccept_execAcceptedForSideClosed_Parms AcceptedForSideClosed_Parms;
	AcceptedForSideClosed_Parms.Accepted = Accepted;

	pFnAcceptedForSideClosed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAcceptedForSideClosed, &AcceptedForSideClosed_Parms, NULL );

	pFnAcceptedForSideClosed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMissionAccept.ReviewJustification
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIMissionAccept::ReviewJustification ( )
{
	static UFunction* pFnReviewJustification = NULL;

	if ( ! pFnReviewJustification )
		pFnReviewJustification = (UFunction*) UObject::GObjObjects()->Data[ 38810 ];

	UcUIMissionAccept_execReviewJustification_Parms ReviewJustification_Parms;

	pFnReviewJustification->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReviewJustification, &ReviewJustification_Parms, NULL );

	pFnReviewJustification->FunctionFlags |= 0x400;

	return ReviewJustification_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMissionAccept.MissionAcceptedForSide
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIMissionAccept::MissionAcceptedForSide ( )
{
	static UFunction* pFnMissionAcceptedForSide = NULL;

	if ( ! pFnMissionAcceptedForSide )
		pFnMissionAcceptedForSide = (UFunction*) UObject::GObjObjects()->Data[ 38809 ];

	UcUIMissionAccept_execMissionAcceptedForSide_Parms MissionAcceptedForSide_Parms;

	pFnMissionAcceptedForSide->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnMissionAcceptedForSide, &MissionAcceptedForSide_Parms, NULL );

	pFnMissionAcceptedForSide->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIAction_DM_PlaceWaypoint.OnAddGroupWaypointCallback
// [0x00020002] 
// Parameters infos:
// int                            nMarkerID                      ( CPF_Parm )

void UcUIAction_DM_PlaceWaypoint::OnAddGroupWaypointCallback ( int nMarkerID )
{
	static UFunction* pFnOnAddGroupWaypointCallback = NULL;

	if ( ! pFnOnAddGroupWaypointCallback )
		pFnOnAddGroupWaypointCallback = (UFunction*) UObject::GObjObjects()->Data[ 34067 ];

	UcUIAction_DM_PlaceWaypoint_execOnAddGroupWaypointCallback_Parms OnAddGroupWaypointCallback_Parms;
	OnAddGroupWaypointCallback_Parms.nMarkerID = nMarkerID;

	this->ProcessEvent ( pFnOnAddGroupWaypointCallback, &OnAddGroupWaypointCallback_Parms, NULL );
};

// Function APBUserInterface.cUIAction_DM_PlaceWaypoint.OnDeleteWaypointCallback
// [0x00020002] 
// Parameters infos:
// unsigned long                  bDeleted                       ( CPF_Parm )

void UcUIAction_DM_PlaceWaypoint::OnDeleteWaypointCallback ( unsigned long bDeleted )
{
	static UFunction* pFnOnDeleteWaypointCallback = NULL;

	if ( ! pFnOnDeleteWaypointCallback )
		pFnOnDeleteWaypointCallback = (UFunction*) UObject::GObjObjects()->Data[ 34065 ];

	UcUIAction_DM_PlaceWaypoint_execOnDeleteWaypointCallback_Parms OnDeleteWaypointCallback_Parms;
	OnDeleteWaypointCallback_Parms.bDeleted = bDeleted;

	this->ProcessEvent ( pFnOnDeleteWaypointCallback, &OnDeleteWaypointCallback_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_DistrictMap.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_DistrictMap::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36245 ];

	UcUIDataStore_DistrictMap_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_DistrictMap.Native_NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_DistrictMap::Native_NotifyGameSessionEnded ( )
{
	static UFunction* pFnNative_NotifyGameSessionEnded = NULL;

	if ( ! pFnNative_NotifyGameSessionEnded )
		pFnNative_NotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36244 ];

	UcUIDataStore_DistrictMap_execNative_NotifyGameSessionEnded_Parms Native_NotifyGameSessionEnded_Parms;

	pFnNative_NotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNative_NotifyGameSessionEnded, &Native_NotifyGameSessionEnded_Parms, NULL );

	pFnNative_NotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_DistrictMap.OnSceneExitCallback
// [0x00120000] 
// Parameters infos:

void UcUIDataStore_DistrictMap::OnSceneExitCallback ( )
{
	static UFunction* pFnOnSceneExitCallback = NULL;

	if ( ! pFnOnSceneExitCallback )
		pFnOnSceneExitCallback = (UFunction*) UObject::GObjObjects()->Data[ 36197 ];

	UcUIDataStore_DistrictMap_execOnSceneExitCallback_Parms OnSceneExitCallback_Parms;

	this->ProcessEvent ( pFnOnSceneExitCallback, &OnSceneExitCallback_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_DistrictMap.OnHUDMarkersChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_DistrictMap::OnHUDMarkersChanged ( )
{
	static UFunction* pFnOnHUDMarkersChanged = NULL;

	if ( ! pFnOnHUDMarkersChanged )
		pFnOnHUDMarkersChanged = (UFunction*) UObject::GObjObjects()->Data[ 36243 ];

	UcUIDataStore_DistrictMap_execOnHUDMarkersChanged_Parms OnHUDMarkersChanged_Parms;

	pFnOnHUDMarkersChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnHUDMarkersChanged, &OnHUDMarkersChanged_Parms, NULL );

	pFnOnHUDMarkersChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_DistrictMap.SceneExitCallback
// [0x00020500] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_DistrictMap::SceneExitCallback ( )
{
	static UFunction* pFnSceneExitCallback = NULL;

	if ( ! pFnSceneExitCallback )
		pFnSceneExitCallback = (UFunction*) UObject::GObjObjects()->Data[ 36242 ];

	UcUIDataStore_DistrictMap_execSceneExitCallback_Parms SceneExitCallback_Parms;

	pFnSceneExitCallback->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSceneExitCallback, &SceneExitCallback_Parms, NULL );

	pFnSceneExitCallback->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_DistrictMap.IsDistrictMapVisible
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_DistrictMap::IsDistrictMapVisible ( )
{
	static UFunction* pFnIsDistrictMapVisible = NULL;

	if ( ! pFnIsDistrictMapVisible )
		pFnIsDistrictMapVisible = (UFunction*) UObject::GObjObjects()->Data[ 36240 ];

	UcUIDataStore_DistrictMap_execIsDistrictMapVisible_Parms IsDistrictMapVisible_Parms;

	pFnIsDistrictMapVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDistrictMapVisible, &IsDistrictMapVisible_Parms, NULL );

	pFnIsDistrictMapVisible->FunctionFlags |= 0x400;

	return IsDistrictMapVisible_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_DistrictMap.IsDistrictEntryMapVisible
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_DistrictMap::IsDistrictEntryMapVisible ( )
{
	static UFunction* pFnIsDistrictEntryMapVisible = NULL;

	if ( ! pFnIsDistrictEntryMapVisible )
		pFnIsDistrictEntryMapVisible = (UFunction*) UObject::GObjObjects()->Data[ 36238 ];

	UcUIDataStore_DistrictMap_execIsDistrictEntryMapVisible_Parms IsDistrictEntryMapVisible_Parms;

	pFnIsDistrictEntryMapVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsDistrictEntryMapVisible, &IsDistrictEntryMapVisible_Parms, NULL );

	pFnIsDistrictEntryMapVisible->FunctionFlags |= 0x400;

	return IsDistrictEntryMapVisible_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_ColourChooser.NotifyGameSessionEnded
// [0x00020002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_ColourChooser::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = (UFunction*) UObject::GObjObjects()->Data[ 36015 ];

	UcUIDataStore_ColourChooser_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	return NotifyGameSessionEnded_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_TooltipServer.SetOrdering
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   Ordering                       ( CPF_Parm )

bool UcUIDataStore_TooltipServer::eventSetOrdering ( struct FName Ordering )
{
	static UFunction* pFnSetOrdering = NULL;

	if ( ! pFnSetOrdering )
		pFnSetOrdering = (UFunction*) UObject::GObjObjects()->Data[ 37930 ];

	UcUIDataStore_TooltipServer_eventSetOrdering_Parms SetOrdering_Parms;
	memcpy ( &SetOrdering_Parms.Ordering, &Ordering, 0x8 );

	pFnSetOrdering->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetOrdering, &SetOrdering_Parms, NULL );

	pFnSetOrdering->FunctionFlags |= 0x400;

	return SetOrdering_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMultiPartProgressBar.ClearBoundDataStores
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIMultiPartProgressBar::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 39523 ];

	UcUIMultiPartProgressBar_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMultiPartProgressBar.GetBoundDataStores
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< class UUIDataStore* >  out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UcUIMultiPartProgressBar::GetBoundDataStores ( TArray< class UUIDataStore* >* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = (UFunction*) UObject::GObjObjects()->Data[ 39520 ];

	UcUIMultiPartProgressBar_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0xC );
};

// Function APBUserInterface.cUIMultiPartProgressBar.NotifyDataStoreValueUpdated
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UcUIMultiPartProgressBar::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = (UFunction*) UObject::GObjObjects()->Data[ 39514 ];

	UcUIMultiPartProgressBar_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIMultiPartProgressBar.RefreshSubscriberValue
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UcUIMultiPartProgressBar::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = (UFunction*) UObject::GObjObjects()->Data[ 39511 ];

	UcUIMultiPartProgressBar_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMultiPartProgressBar.GetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UcUIMultiPartProgressBar::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 39508 ];

	UcUIMultiPartProgressBar_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function APBUserInterface.cUIMultiPartProgressBar.SetDataStoreBinding
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UcUIMultiPartProgressBar::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = (UFunction*) UObject::GObjObjects()->Data[ 39505 ];

	UcUIMultiPartProgressBar_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0xC );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUI_APBConsoleCommand.IsCommandAvailable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUI_APBConsoleCommand::IsCommandAvailable ( )
{
	static UFunction* pFnIsCommandAvailable = NULL;

	if ( ! pFnIsCommandAvailable )
		pFnIsCommandAvailable = (UFunction*) UObject::GObjObjects()->Data[ 33206 ];

	UcUI_APBConsoleCommand_execIsCommandAvailable_Parms IsCommandAvailable_Parms;

	pFnIsCommandAvailable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsCommandAvailable, &IsCommandAvailable_Parms, NULL );

	pFnIsCommandAvailable->FunctionFlags |= 0x400;

	return IsCommandAvailable_Parms.ReturnValue;
};

// Function APBUserInterface.cUI_APBConsoleCommand.SetupConsoleCommand
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// unsigned char                  eCommandType                   ( CPF_Parm )
// struct FString                 sSlashCommand                  ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sSecondarySlashCommand         ( CPF_Parm | CPF_NeedCtorLink )
// struct FScriptDelegate         Callback                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDisplayName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDescription                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sTooltip                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sSyntaxHint                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sDefaultArgs                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            nMinArgCount                   ( CPF_Parm )
// int                            nMaxArgCount                   ( CPF_Parm )
// unsigned char                  eWorksFromState                ( CPF_Parm )
// unsigned long                  bWorksInEditors                ( CPF_Parm )

void UcUI_APBConsoleCommand::eventSetupConsoleCommand ( unsigned char eCommandType, struct FString sSlashCommand, struct FString sSecondarySlashCommand, struct FScriptDelegate Callback, struct FString sDisplayName, struct FString sDescription, struct FString sTooltip, struct FString sSyntaxHint, struct FString sDefaultArgs, int nMinArgCount, int nMaxArgCount, unsigned char eWorksFromState, unsigned long bWorksInEditors )
{
	static UFunction* pFnSetupConsoleCommand = NULL;

	if ( ! pFnSetupConsoleCommand )
		pFnSetupConsoleCommand = (UFunction*) UObject::GObjObjects()->Data[ 33192 ];

	UcUI_APBConsoleCommand_eventSetupConsoleCommand_Parms SetupConsoleCommand_Parms;
	SetupConsoleCommand_Parms.eCommandType = eCommandType;
	memcpy ( &SetupConsoleCommand_Parms.sSlashCommand, &sSlashCommand, 0xC );
	memcpy ( &SetupConsoleCommand_Parms.sSecondarySlashCommand, &sSecondarySlashCommand, 0xC );
	memcpy ( &SetupConsoleCommand_Parms.Callback, &Callback, 0xC );
	memcpy ( &SetupConsoleCommand_Parms.sDisplayName, &sDisplayName, 0xC );
	memcpy ( &SetupConsoleCommand_Parms.sDescription, &sDescription, 0xC );
	memcpy ( &SetupConsoleCommand_Parms.sTooltip, &sTooltip, 0xC );
	memcpy ( &SetupConsoleCommand_Parms.sSyntaxHint, &sSyntaxHint, 0xC );
	memcpy ( &SetupConsoleCommand_Parms.sDefaultArgs, &sDefaultArgs, 0xC );
	SetupConsoleCommand_Parms.nMinArgCount = nMinArgCount;
	SetupConsoleCommand_Parms.nMaxArgCount = nMaxArgCount;
	SetupConsoleCommand_Parms.eWorksFromState = eWorksFromState;
	SetupConsoleCommand_Parms.bWorksInEditors = bWorksInEditors;

	this->ProcessEvent ( pFnSetupConsoleCommand, &SetupConsoleCommand_Parms, NULL );
};

// Function APBUserInterface.cUI_APBConsoleCommand.APBConsoleCommandBase
// [0x00120002] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sArgString                     ( CPF_Parm | CPF_NeedCtorLink )

bool UcUI_APBConsoleCommand::APBConsoleCommandBase ( struct FString sArgString )
{
	static UFunction* pFnAPBConsoleCommandBase = NULL;

	if ( ! pFnAPBConsoleCommandBase )
		pFnAPBConsoleCommandBase = (UFunction*) UObject::GObjObjects()->Data[ 33177 ];

	UcUI_APBConsoleCommand_execAPBConsoleCommandBase_Parms APBConsoleCommandBase_Parms;
	memcpy ( &APBConsoleCommandBase_Parms.sArgString, &sArgString, 0xC );

	this->ProcessEvent ( pFnAPBConsoleCommandBase, &APBConsoleCommandBase_Parms, NULL );

	return APBConsoleCommandBase_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Chat.SetChatModeToDefault
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIDataStore_Chat::eventSetChatModeToDefault ( )
{
	static UFunction* pFnSetChatModeToDefault = NULL;

	if ( ! pFnSetChatModeToDefault )
		pFnSetChatModeToDefault = (UFunction*) UObject::GObjObjects()->Data[ 34691 ];

	UcUIDataStore_Chat_eventSetChatModeToDefault_Parms SetChatModeToDefault_Parms;

	this->ProcessEvent ( pFnSetChatModeToDefault, &SetChatModeToDefault_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_Chat.SetActiveChatMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  eChatMode                      ( CPF_Parm )

void UcUIDataStore_Chat::SetActiveChatMode ( unsigned char eChatMode )
{
	static UFunction* pFnSetActiveChatMode = NULL;

	if ( ! pFnSetActiveChatMode )
		pFnSetActiveChatMode = (UFunction*) UObject::GObjObjects()->Data[ 34689 ];

	UcUIDataStore_Chat_execSetActiveChatMode_Parms SetActiveChatMode_Parms;
	SetActiveChatMode_Parms.eChatMode = eChatMode;

	pFnSetActiveChatMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetActiveChatMode, &SetActiveChatMode_Parms, NULL );

	pFnSetActiveChatMode->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.ProcessEmote
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sEmote                         ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::ProcessEmote ( struct FString sEmote )
{
	static UFunction* pFnProcessEmote = NULL;

	if ( ! pFnProcessEmote )
		pFnProcessEmote = (UFunction*) UObject::GObjObjects()->Data[ 34687 ];

	UcUIDataStore_Chat_execProcessEmote_Parms ProcessEmote_Parms;
	memcpy ( &ProcessEmote_Parms.sEmote, &sEmote, 0xC );

	pFnProcessEmote->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessEmote, &ProcessEmote_Parms, NULL );

	pFnProcessEmote->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatDistrict
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ChatDistrict ( struct FString sMessage )
{
	static UFunction* pFnSlash_ChatDistrict = NULL;

	if ( ! pFnSlash_ChatDistrict )
		pFnSlash_ChatDistrict = (UFunction*) UObject::GObjObjects()->Data[ 34685 ];

	UcUIDataStore_Chat_execSlash_ChatDistrict_Parms Slash_ChatDistrict_Parms;
	memcpy ( &Slash_ChatDistrict_Parms.sMessage, &sMessage, 0xC );

	pFnSlash_ChatDistrict->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ChatDistrict, &Slash_ChatDistrict_Parms, NULL );

	pFnSlash_ChatDistrict->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatReply
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ChatReply ( struct FString sMessage )
{
	static UFunction* pFnSlash_ChatReply = NULL;

	if ( ! pFnSlash_ChatReply )
		pFnSlash_ChatReply = (UFunction*) UObject::GObjObjects()->Data[ 34683 ];

	UcUIDataStore_Chat_execSlash_ChatReply_Parms Slash_ChatReply_Parms;
	memcpy ( &Slash_ChatReply_Parms.sMessage, &sMessage, 0xC );

	pFnSlash_ChatReply->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ChatReply, &Slash_ChatReply_Parms, NULL );

	pFnSlash_ChatReply->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatWhisper
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ChatWhisper ( struct FString sMessage )
{
	static UFunction* pFnSlash_ChatWhisper = NULL;

	if ( ! pFnSlash_ChatWhisper )
		pFnSlash_ChatWhisper = (UFunction*) UObject::GObjObjects()->Data[ 34681 ];

	UcUIDataStore_Chat_execSlash_ChatWhisper_Parms Slash_ChatWhisper_Parms;
	memcpy ( &Slash_ChatWhisper_Parms.sMessage, &sMessage, 0xC );

	pFnSlash_ChatWhisper->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ChatWhisper, &Slash_ChatWhisper_Parms, NULL );

	pFnSlash_ChatWhisper->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatOfficer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ChatOfficer ( struct FString sMessage )
{
	static UFunction* pFnSlash_ChatOfficer = NULL;

	if ( ! pFnSlash_ChatOfficer )
		pFnSlash_ChatOfficer = (UFunction*) UObject::GObjObjects()->Data[ 34679 ];

	UcUIDataStore_Chat_execSlash_ChatOfficer_Parms Slash_ChatOfficer_Parms;
	memcpy ( &Slash_ChatOfficer_Parms.sMessage, &sMessage, 0xC );

	pFnSlash_ChatOfficer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ChatOfficer, &Slash_ChatOfficer_Parms, NULL );

	pFnSlash_ChatOfficer->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatClan
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ChatClan ( struct FString sMessage )
{
	static UFunction* pFnSlash_ChatClan = NULL;

	if ( ! pFnSlash_ChatClan )
		pFnSlash_ChatClan = (UFunction*) UObject::GObjObjects()->Data[ 34677 ];

	UcUIDataStore_Chat_execSlash_ChatClan_Parms Slash_ChatClan_Parms;
	memcpy ( &Slash_ChatClan_Parms.sMessage, &sMessage, 0xC );

	pFnSlash_ChatClan->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ChatClan, &Slash_ChatClan_Parms, NULL );

	pFnSlash_ChatClan->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatGroup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ChatGroup ( struct FString sMessage )
{
	static UFunction* pFnSlash_ChatGroup = NULL;

	if ( ! pFnSlash_ChatGroup )
		pFnSlash_ChatGroup = (UFunction*) UObject::GObjObjects()->Data[ 34675 ];

	UcUIDataStore_Chat_execSlash_ChatGroup_Parms Slash_ChatGroup_Parms;
	memcpy ( &Slash_ChatGroup_Parms.sMessage, &sMessage, 0xC );

	pFnSlash_ChatGroup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ChatGroup, &Slash_ChatGroup_Parms, NULL );

	pFnSlash_ChatGroup->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatTeam
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ChatTeam ( struct FString sMessage )
{
	static UFunction* pFnSlash_ChatTeam = NULL;

	if ( ! pFnSlash_ChatTeam )
		pFnSlash_ChatTeam = (UFunction*) UObject::GObjObjects()->Data[ 34673 ];

	UcUIDataStore_Chat_execSlash_ChatTeam_Parms Slash_ChatTeam_Parms;
	memcpy ( &Slash_ChatTeam_Parms.sMessage, &sMessage, 0xC );

	pFnSlash_ChatTeam->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ChatTeam, &Slash_ChatTeam_Parms, NULL );

	pFnSlash_ChatTeam->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatYell
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ChatYell ( struct FString sMessage )
{
	static UFunction* pFnSlash_ChatYell = NULL;

	if ( ! pFnSlash_ChatYell )
		pFnSlash_ChatYell = (UFunction*) UObject::GObjObjects()->Data[ 34671 ];

	UcUIDataStore_Chat_execSlash_ChatYell_Parms Slash_ChatYell_Parms;
	memcpy ( &Slash_ChatYell_Parms.sMessage, &sMessage, 0xC );

	pFnSlash_ChatYell->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ChatYell, &Slash_ChatYell_Parms, NULL );

	pFnSlash_ChatYell->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ChatSay
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ChatSay ( struct FString sMessage )
{
	static UFunction* pFnSlash_ChatSay = NULL;

	if ( ! pFnSlash_ChatSay )
		pFnSlash_ChatSay = (UFunction*) UObject::GObjObjects()->Data[ 34669 ];

	UcUIDataStore_Chat_execSlash_ChatSay_Parms Slash_ChatSay_Parms;
	memcpy ( &Slash_ChatSay_Parms.sMessage, &sMessage, 0xC );

	pFnSlash_ChatSay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ChatSay, &Slash_ChatSay_Parms, NULL );

	pFnSlash_ChatSay->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Browser
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Browser ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Browser = NULL;

	if ( ! pFnSlash_GM_Browser )
		pFnSlash_GM_Browser = (UFunction*) UObject::GObjObjects()->Data[ 34667 ];

	UcUIDataStore_Chat_execSlash_GM_Browser_Parms Slash_GM_Browser_Parms;
	memcpy ( &Slash_GM_Browser_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Browser->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Browser, &Slash_GM_Browser_Parms, NULL );

	pFnSlash_GM_Browser->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_SetHeatLevel
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_SetHeatLevel ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_SetHeatLevel = NULL;

	if ( ! pFnSlash_GM_SetHeatLevel )
		pFnSlash_GM_SetHeatLevel = (UFunction*) UObject::GObjObjects()->Data[ 34665 ];

	UcUIDataStore_Chat_execSlash_GM_SetHeatLevel_Parms Slash_GM_SetHeatLevel_Parms;
	memcpy ( &Slash_GM_SetHeatLevel_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_SetHeatLevel->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_SetHeatLevel, &Slash_GM_SetHeatLevel_Parms, NULL );

	pFnSlash_GM_SetHeatLevel->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_ToggleToD
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_ToggleToD ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_ToggleToD = NULL;

	if ( ! pFnSlash_GM_ToggleToD )
		pFnSlash_GM_ToggleToD = (UFunction*) UObject::GObjObjects()->Data[ 34663 ];

	UcUIDataStore_Chat_execSlash_GM_ToggleToD_Parms Slash_GM_ToggleToD_Parms;
	memcpy ( &Slash_GM_ToggleToD_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_ToggleToD->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_ToggleToD, &Slash_GM_ToggleToD_Parms, NULL );

	pFnSlash_GM_ToggleToD->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_SetToD
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_SetToD ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_SetToD = NULL;

	if ( ! pFnSlash_GM_SetToD )
		pFnSlash_GM_SetToD = (UFunction*) UObject::GObjObjects()->Data[ 34661 ];

	UcUIDataStore_Chat_execSlash_GM_SetToD_Parms Slash_GM_SetToD_Parms;
	memcpy ( &Slash_GM_SetToD_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_SetToD->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_SetToD, &Slash_GM_SetToD_Parms, NULL );

	pFnSlash_GM_SetToD->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Unspectate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Unspectate ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Unspectate = NULL;

	if ( ! pFnSlash_GM_Unspectate )
		pFnSlash_GM_Unspectate = (UFunction*) UObject::GObjObjects()->Data[ 34659 ];

	UcUIDataStore_Chat_execSlash_GM_Unspectate_Parms Slash_GM_Unspectate_Parms;
	memcpy ( &Slash_GM_Unspectate_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Unspectate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Unspectate, &Slash_GM_Unspectate_Parms, NULL );

	pFnSlash_GM_Unspectate->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Spectate
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Spectate ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Spectate = NULL;

	if ( ! pFnSlash_GM_Spectate )
		pFnSlash_GM_Spectate = (UFunction*) UObject::GObjObjects()->Data[ 34657 ];

	UcUIDataStore_Chat_execSlash_GM_Spectate_Parms Slash_GM_Spectate_Parms;
	memcpy ( &Slash_GM_Spectate_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Spectate->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Spectate, &Slash_GM_Spectate_Parms, NULL );

	pFnSlash_GM_Spectate->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Inspect
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Inspect ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Inspect = NULL;

	if ( ! pFnSlash_GM_Inspect )
		pFnSlash_GM_Inspect = (UFunction*) UObject::GObjObjects()->Data[ 34655 ];

	UcUIDataStore_Chat_execSlash_GM_Inspect_Parms Slash_GM_Inspect_Parms;
	memcpy ( &Slash_GM_Inspect_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Inspect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Inspect, &Slash_GM_Inspect_Parms, NULL );

	pFnSlash_GM_Inspect->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Identifier
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Identifier ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Identifier = NULL;

	if ( ! pFnSlash_GM_Identifier )
		pFnSlash_GM_Identifier = (UFunction*) UObject::GObjObjects()->Data[ 34653 ];

	UcUIDataStore_Chat_execSlash_GM_Identifier_Parms Slash_GM_Identifier_Parms;
	memcpy ( &Slash_GM_Identifier_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Identifier->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Identifier, &Slash_GM_Identifier_Parms, NULL );

	pFnSlash_GM_Identifier->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_SetOpposition
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_SetOpposition ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_SetOpposition = NULL;

	if ( ! pFnSlash_GM_SetOpposition )
		pFnSlash_GM_SetOpposition = (UFunction*) UObject::GObjObjects()->Data[ 34651 ];

	UcUIDataStore_Chat_execSlash_GM_SetOpposition_Parms Slash_GM_SetOpposition_Parms;
	memcpy ( &Slash_GM_SetOpposition_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_SetOpposition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_SetOpposition, &Slash_GM_SetOpposition_Parms, NULL );

	pFnSlash_GM_SetOpposition->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_EndMission
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_EndMission ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_EndMission = NULL;

	if ( ! pFnSlash_GM_EndMission )
		pFnSlash_GM_EndMission = (UFunction*) UObject::GObjObjects()->Data[ 34649 ];

	UcUIDataStore_Chat_execSlash_GM_EndMission_Parms Slash_GM_EndMission_Parms;
	memcpy ( &Slash_GM_EndMission_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_EndMission->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_EndMission, &Slash_GM_EndMission_Parms, NULL );

	pFnSlash_GM_EndMission->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_StartMission
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_StartMission ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_StartMission = NULL;

	if ( ! pFnSlash_GM_StartMission )
		pFnSlash_GM_StartMission = (UFunction*) UObject::GObjObjects()->Data[ 34647 ];

	UcUIDataStore_Chat_execSlash_GM_StartMission_Parms Slash_GM_StartMission_Parms;
	memcpy ( &Slash_GM_StartMission_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_StartMission->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_StartMission, &Slash_GM_StartMission_Parms, NULL );

	pFnSlash_GM_StartMission->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_ToggleMissionOffers
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_ToggleMissionOffers ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_ToggleMissionOffers = NULL;

	if ( ! pFnSlash_GM_ToggleMissionOffers )
		pFnSlash_GM_ToggleMissionOffers = (UFunction*) UObject::GObjObjects()->Data[ 34645 ];

	UcUIDataStore_Chat_execSlash_GM_ToggleMissionOffers_Parms Slash_GM_ToggleMissionOffers_Parms;
	memcpy ( &Slash_GM_ToggleMissionOffers_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_ToggleMissionOffers->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_ToggleMissionOffers, &Slash_GM_ToggleMissionOffers_Parms, NULL );

	pFnSlash_GM_ToggleMissionOffers->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_ConversationEnd
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_ConversationEnd ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_ConversationEnd = NULL;

	if ( ! pFnSlash_GM_ConversationEnd )
		pFnSlash_GM_ConversationEnd = (UFunction*) UObject::GObjObjects()->Data[ 34643 ];

	UcUIDataStore_Chat_execSlash_GM_ConversationEnd_Parms Slash_GM_ConversationEnd_Parms;
	memcpy ( &Slash_GM_ConversationEnd_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_ConversationEnd->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_ConversationEnd, &Slash_GM_ConversationEnd_Parms, NULL );

	pFnSlash_GM_ConversationEnd->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Kick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Kick ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Kick = NULL;

	if ( ! pFnSlash_GM_Kick )
		pFnSlash_GM_Kick = (UFunction*) UObject::GObjObjects()->Data[ 34641 ];

	UcUIDataStore_Chat_execSlash_GM_Kick_Parms Slash_GM_Kick_Parms;
	memcpy ( &Slash_GM_Kick_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Kick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Kick, &Slash_GM_Kick_Parms, NULL );

	pFnSlash_GM_Kick->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_RepairVehicle
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_RepairVehicle ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_RepairVehicle = NULL;

	if ( ! pFnSlash_GM_RepairVehicle )
		pFnSlash_GM_RepairVehicle = (UFunction*) UObject::GObjObjects()->Data[ 34639 ];

	UcUIDataStore_Chat_execSlash_GM_RepairVehicle_Parms Slash_GM_RepairVehicle_Parms;
	memcpy ( &Slash_GM_RepairVehicle_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_RepairVehicle->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_RepairVehicle, &Slash_GM_RepairVehicle_Parms, NULL );

	pFnSlash_GM_RepairVehicle->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_MoveToLocation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_MoveToLocation ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_MoveToLocation = NULL;

	if ( ! pFnSlash_GM_MoveToLocation )
		pFnSlash_GM_MoveToLocation = (UFunction*) UObject::GObjObjects()->Data[ 34637 ];

	UcUIDataStore_Chat_execSlash_GM_MoveToLocation_Parms Slash_GM_MoveToLocation_Parms;
	memcpy ( &Slash_GM_MoveToLocation_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_MoveToLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_MoveToLocation, &Slash_GM_MoveToLocation_Parms, NULL );

	pFnSlash_GM_MoveToLocation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_EnterFreeCameraMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_EnterFreeCameraMode ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_EnterFreeCameraMode = NULL;

	if ( ! pFnSlash_GM_EnterFreeCameraMode )
		pFnSlash_GM_EnterFreeCameraMode = (UFunction*) UObject::GObjObjects()->Data[ 34635 ];

	UcUIDataStore_Chat_execSlash_GM_EnterFreeCameraMode_Parms Slash_GM_EnterFreeCameraMode_Parms;
	memcpy ( &Slash_GM_EnterFreeCameraMode_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_EnterFreeCameraMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_EnterFreeCameraMode, &Slash_GM_EnterFreeCameraMode_Parms, NULL );

	pFnSlash_GM_EnterFreeCameraMode->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_SetRunSpeed
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_SetRunSpeed ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_SetRunSpeed = NULL;

	if ( ! pFnSlash_GM_SetRunSpeed )
		pFnSlash_GM_SetRunSpeed = (UFunction*) UObject::GObjObjects()->Data[ 34633 ];

	UcUIDataStore_Chat_execSlash_GM_SetRunSpeed_Parms Slash_GM_SetRunSpeed_Parms;
	memcpy ( &Slash_GM_SetRunSpeed_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_SetRunSpeed->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_SetRunSpeed, &Slash_GM_SetRunSpeed_Parms, NULL );

	pFnSlash_GM_SetRunSpeed->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Collision
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Collision ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Collision = NULL;

	if ( ! pFnSlash_GM_Collision )
		pFnSlash_GM_Collision = (UFunction*) UObject::GObjObjects()->Data[ 34631 ];

	UcUIDataStore_Chat_execSlash_GM_Collision_Parms Slash_GM_Collision_Parms;
	memcpy ( &Slash_GM_Collision_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Collision->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Collision, &Slash_GM_Collision_Parms, NULL );

	pFnSlash_GM_Collision->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Invincible
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Invincible ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Invincible = NULL;

	if ( ! pFnSlash_GM_Invincible )
		pFnSlash_GM_Invincible = (UFunction*) UObject::GObjObjects()->Data[ 34629 ];

	UcUIDataStore_Chat_execSlash_GM_Invincible_Parms Slash_GM_Invincible_Parms;
	memcpy ( &Slash_GM_Invincible_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Invincible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Invincible, &Slash_GM_Invincible_Parms, NULL );

	pFnSlash_GM_Invincible->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Invisibility
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Invisibility ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Invisibility = NULL;

	if ( ! pFnSlash_GM_Invisibility )
		pFnSlash_GM_Invisibility = (UFunction*) UObject::GObjObjects()->Data[ 34627 ];

	UcUIDataStore_Chat_execSlash_GM_Invisibility_Parms Slash_GM_Invisibility_Parms;
	memcpy ( &Slash_GM_Invisibility_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Invisibility->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Invisibility, &Slash_GM_Invisibility_Parms, NULL );

	pFnSlash_GM_Invisibility->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Unfreeze
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Unfreeze ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Unfreeze = NULL;

	if ( ! pFnSlash_GM_Unfreeze )
		pFnSlash_GM_Unfreeze = (UFunction*) UObject::GObjObjects()->Data[ 34625 ];

	UcUIDataStore_Chat_execSlash_GM_Unfreeze_Parms Slash_GM_Unfreeze_Parms;
	memcpy ( &Slash_GM_Unfreeze_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Unfreeze->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Unfreeze, &Slash_GM_Unfreeze_Parms, NULL );

	pFnSlash_GM_Unfreeze->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_Freeze
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_Freeze ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_Freeze = NULL;

	if ( ! pFnSlash_GM_Freeze )
		pFnSlash_GM_Freeze = (UFunction*) UObject::GObjObjects()->Data[ 34623 ];

	UcUIDataStore_Chat_execSlash_GM_Freeze_Parms Slash_GM_Freeze_Parms;
	memcpy ( &Slash_GM_Freeze_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_Freeze->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_Freeze, &Slash_GM_Freeze_Parms, NULL );

	pFnSlash_GM_Freeze->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_MovePlayerToGMLocation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_MovePlayerToGMLocation ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_MovePlayerToGMLocation = NULL;

	if ( ! pFnSlash_GM_MovePlayerToGMLocation )
		pFnSlash_GM_MovePlayerToGMLocation = (UFunction*) UObject::GObjObjects()->Data[ 34621 ];

	UcUIDataStore_Chat_execSlash_GM_MovePlayerToGMLocation_Parms Slash_GM_MovePlayerToGMLocation_Parms;
	memcpy ( &Slash_GM_MovePlayerToGMLocation_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_MovePlayerToGMLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_MovePlayerToGMLocation, &Slash_GM_MovePlayerToGMLocation_Parms, NULL );

	pFnSlash_GM_MovePlayerToGMLocation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GM_MoveToPlayerLocation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GM_MoveToPlayerLocation ( struct FString sArg )
{
	static UFunction* pFnSlash_GM_MoveToPlayerLocation = NULL;

	if ( ! pFnSlash_GM_MoveToPlayerLocation )
		pFnSlash_GM_MoveToPlayerLocation = (UFunction*) UObject::GObjObjects()->Data[ 34619 ];

	UcUIDataStore_Chat_execSlash_GM_MoveToPlayerLocation_Parms Slash_GM_MoveToPlayerLocation_Parms;
	memcpy ( &Slash_GM_MoveToPlayerLocation_Parms.sArg, &sArg, 0xC );

	pFnSlash_GM_MoveToPlayerLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GM_MoveToPlayerLocation, &Slash_GM_MoveToPlayerLocation_Parms, NULL );

	pFnSlash_GM_MoveToPlayerLocation->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ToggleCapturingMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ToggleCapturingMovie ( struct FString arg )
{
	static UFunction* pFnSlash_ToggleCapturingMovie = NULL;

	if ( ! pFnSlash_ToggleCapturingMovie )
		pFnSlash_ToggleCapturingMovie = (UFunction*) UObject::GObjObjects()->Data[ 34617 ];

	UcUIDataStore_Chat_execSlash_ToggleCapturingMovie_Parms Slash_ToggleCapturingMovie_Parms;
	memcpy ( &Slash_ToggleCapturingMovie_Parms.arg, &arg, 0xC );

	pFnSlash_ToggleCapturingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ToggleCapturingMovie, &Slash_ToggleCapturingMovie_Parms, NULL );

	pFnSlash_ToggleCapturingMovie->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_StopCapturingMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_StopCapturingMovie ( struct FString arg )
{
	static UFunction* pFnSlash_StopCapturingMovie = NULL;

	if ( ! pFnSlash_StopCapturingMovie )
		pFnSlash_StopCapturingMovie = (UFunction*) UObject::GObjObjects()->Data[ 34615 ];

	UcUIDataStore_Chat_execSlash_StopCapturingMovie_Parms Slash_StopCapturingMovie_Parms;
	memcpy ( &Slash_StopCapturingMovie_Parms.arg, &arg, 0xC );

	pFnSlash_StopCapturingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_StopCapturingMovie, &Slash_StopCapturingMovie_Parms, NULL );

	pFnSlash_StopCapturingMovie->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_StartCapturingMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_StartCapturingMovie ( struct FString arg )
{
	static UFunction* pFnSlash_StartCapturingMovie = NULL;

	if ( ! pFnSlash_StartCapturingMovie )
		pFnSlash_StartCapturingMovie = (UFunction*) UObject::GObjObjects()->Data[ 34613 ];

	UcUIDataStore_Chat_execSlash_StartCapturingMovie_Parms Slash_StartCapturingMovie_Parms;
	memcpy ( &Slash_StartCapturingMovie_Parms.arg, &arg, 0xC );

	pFnSlash_StartCapturingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_StartCapturingMovie, &Slash_StartCapturingMovie_Parms, NULL );

	pFnSlash_StartCapturingMovie->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_StartPrecapturingMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_StartPrecapturingMovie ( struct FString arg )
{
	static UFunction* pFnSlash_StartPrecapturingMovie = NULL;

	if ( ! pFnSlash_StartPrecapturingMovie )
		pFnSlash_StartPrecapturingMovie = (UFunction*) UObject::GObjObjects()->Data[ 34611 ];

	UcUIDataStore_Chat_execSlash_StartPrecapturingMovie_Parms Slash_StartPrecapturingMovie_Parms;
	memcpy ( &Slash_StartPrecapturingMovie_Parms.arg, &arg, 0xC );

	pFnSlash_StartPrecapturingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_StartPrecapturingMovie, &Slash_StartPrecapturingMovie_Parms, NULL );

	pFnSlash_StartPrecapturingMovie->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_AbandonMission
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_AbandonMission ( struct FString sArg )
{
	static UFunction* pFnSlash_AbandonMission = NULL;

	if ( ! pFnSlash_AbandonMission )
		pFnSlash_AbandonMission = (UFunction*) UObject::GObjObjects()->Data[ 34609 ];

	UcUIDataStore_Chat_execSlash_AbandonMission_Parms Slash_AbandonMission_Parms;
	memcpy ( &Slash_AbandonMission_Parms.sArg, &sArg, 0xC );

	pFnSlash_AbandonMission->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_AbandonMission, &Slash_AbandonMission_Parms, NULL );

	pFnSlash_AbandonMission->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_CancelUnstick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_CancelUnstick ( struct FString sArg )
{
	static UFunction* pFnSlash_CancelUnstick = NULL;

	if ( ! pFnSlash_CancelUnstick )
		pFnSlash_CancelUnstick = (UFunction*) UObject::GObjObjects()->Data[ 34607 ];

	UcUIDataStore_Chat_execSlash_CancelUnstick_Parms Slash_CancelUnstick_Parms;
	memcpy ( &Slash_CancelUnstick_Parms.sArg, &sArg, 0xC );

	pFnSlash_CancelUnstick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_CancelUnstick, &Slash_CancelUnstick_Parms, NULL );

	pFnSlash_CancelUnstick->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Unstick
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Unstick ( struct FString sArg )
{
	static UFunction* pFnSlash_Unstick = NULL;

	if ( ! pFnSlash_Unstick )
		pFnSlash_Unstick = (UFunction*) UObject::GObjObjects()->Data[ 34605 ];

	UcUIDataStore_Chat_execSlash_Unstick_Parms Slash_Unstick_Parms;
	memcpy ( &Slash_Unstick_Parms.sArg, &sArg, 0xC );

	pFnSlash_Unstick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Unstick, &Slash_Unstick_Parms, NULL );

	pFnSlash_Unstick->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_FPSDetail
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_FPSDetail ( struct FString sArg )
{
	static UFunction* pFnSlash_FPSDetail = NULL;

	if ( ! pFnSlash_FPSDetail )
		pFnSlash_FPSDetail = (UFunction*) UObject::GObjObjects()->Data[ 34603 ];

	UcUIDataStore_Chat_execSlash_FPSDetail_Parms Slash_FPSDetail_Parms;
	memcpy ( &Slash_FPSDetail_Parms.sArg, &sArg, 0xC );

	pFnSlash_FPSDetail->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_FPSDetail, &Slash_FPSDetail_Parms, NULL );

	pFnSlash_FPSDetail->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_FPS
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_FPS ( struct FString sArg )
{
	static UFunction* pFnSlash_FPS = NULL;

	if ( ! pFnSlash_FPS )
		pFnSlash_FPS = (UFunction*) UObject::GObjObjects()->Data[ 34601 ];

	UcUIDataStore_Chat_execSlash_FPS_Parms Slash_FPS_Parms;
	memcpy ( &Slash_FPS_Parms.sArg, &sArg, 0xC );

	pFnSlash_FPS->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_FPS, &Slash_FPS_Parms, NULL );

	pFnSlash_FPS->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Time
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Time ( struct FString sArg )
{
	static UFunction* pFnSlash_Time = NULL;

	if ( ! pFnSlash_Time )
		pFnSlash_Time = (UFunction*) UObject::GObjObjects()->Data[ 34599 ];

	UcUIDataStore_Chat_execSlash_Time_Parms Slash_Time_Parms;
	memcpy ( &Slash_Time_Parms.sArg, &sArg, 0xC );

	pFnSlash_Time->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Time, &Slash_Time_Parms, NULL );

	pFnSlash_Time->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Help
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Help ( struct FString sArg )
{
	static UFunction* pFnSlash_Help = NULL;

	if ( ! pFnSlash_Help )
		pFnSlash_Help = (UFunction*) UObject::GObjObjects()->Data[ 34597 ];

	UcUIDataStore_Chat_execSlash_Help_Parms Slash_Help_Parms;
	memcpy ( &Slash_Help_Parms.sArg, &sArg, 0xC );

	pFnSlash_Help->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Help, &Slash_Help_Parms, NULL );

	pFnSlash_Help->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_DoNotDisturb
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_DoNotDisturb ( struct FString sArg )
{
	static UFunction* pFnSlash_DoNotDisturb = NULL;

	if ( ! pFnSlash_DoNotDisturb )
		pFnSlash_DoNotDisturb = (UFunction*) UObject::GObjObjects()->Data[ 34595 ];

	UcUIDataStore_Chat_execSlash_DoNotDisturb_Parms Slash_DoNotDisturb_Parms;
	memcpy ( &Slash_DoNotDisturb_Parms.sArg, &sArg, 0xC );

	pFnSlash_DoNotDisturb->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_DoNotDisturb, &Slash_DoNotDisturb_Parms, NULL );

	pFnSlash_DoNotDisturb->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_AwayFromKeyboard
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_AwayFromKeyboard ( struct FString sArg )
{
	static UFunction* pFnSlash_AwayFromKeyboard = NULL;

	if ( ! pFnSlash_AwayFromKeyboard )
		pFnSlash_AwayFromKeyboard = (UFunction*) UObject::GObjObjects()->Data[ 34593 ];

	UcUIDataStore_Chat_execSlash_AwayFromKeyboard_Parms Slash_AwayFromKeyboard_Parms;
	memcpy ( &Slash_AwayFromKeyboard_Parms.sArg, &sArg, 0xC );

	pFnSlash_AwayFromKeyboard->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_AwayFromKeyboard, &Slash_AwayFromKeyboard_Parms, NULL );

	pFnSlash_AwayFromKeyboard->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Available
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Available ( struct FString sArg )
{
	static UFunction* pFnSlash_Available = NULL;

	if ( ! pFnSlash_Available )
		pFnSlash_Available = (UFunction*) UObject::GObjObjects()->Data[ 34591 ];

	UcUIDataStore_Chat_execSlash_Available_Parms Slash_Available_Parms;
	memcpy ( &Slash_Available_Parms.sArg, &sArg, 0xC );

	pFnSlash_Available->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Available, &Slash_Available_Parms, NULL );

	pFnSlash_Available->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ToggleTimestamp
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ToggleTimestamp ( struct FString sArg )
{
	static UFunction* pFnSlash_ToggleTimestamp = NULL;

	if ( ! pFnSlash_ToggleTimestamp )
		pFnSlash_ToggleTimestamp = (UFunction*) UObject::GObjObjects()->Data[ 34589 ];

	UcUIDataStore_Chat_execSlash_ToggleTimestamp_Parms Slash_ToggleTimestamp_Parms;
	memcpy ( &Slash_ToggleTimestamp_Parms.sArg, &sArg, 0xC );

	pFnSlash_ToggleTimestamp->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ToggleTimestamp, &Slash_ToggleTimestamp_Parms, NULL );

	pFnSlash_ToggleTimestamp->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ToggleProfanityFilter
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ToggleProfanityFilter ( struct FString sArg )
{
	static UFunction* pFnSlash_ToggleProfanityFilter = NULL;

	if ( ! pFnSlash_ToggleProfanityFilter )
		pFnSlash_ToggleProfanityFilter = (UFunction*) UObject::GObjObjects()->Data[ 34587 ];

	UcUIDataStore_Chat_execSlash_ToggleProfanityFilter_Parms Slash_ToggleProfanityFilter_Parms;
	memcpy ( &Slash_ToggleProfanityFilter_Parms.sArg, &sArg, 0xC );

	pFnSlash_ToggleProfanityFilter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ToggleProfanityFilter, &Slash_ToggleProfanityFilter_Parms, NULL );

	pFnSlash_ToggleProfanityFilter->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_SaveChatLog
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_SaveChatLog ( struct FString sArg )
{
	static UFunction* pFnSlash_SaveChatLog = NULL;

	if ( ! pFnSlash_SaveChatLog )
		pFnSlash_SaveChatLog = (UFunction*) UObject::GObjObjects()->Data[ 34585 ];

	UcUIDataStore_Chat_execSlash_SaveChatLog_Parms Slash_SaveChatLog_Parms;
	memcpy ( &Slash_SaveChatLog_Parms.sArg, &sArg, 0xC );

	pFnSlash_SaveChatLog->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_SaveChatLog, &Slash_SaveChatLog_Parms, NULL );

	pFnSlash_SaveChatLog->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ShowNames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ShowNames ( struct FString sArg )
{
	static UFunction* pFnSlash_ShowNames = NULL;

	if ( ! pFnSlash_ShowNames )
		pFnSlash_ShowNames = (UFunction*) UObject::GObjObjects()->Data[ 34583 ];

	UcUIDataStore_Chat_execSlash_ShowNames_Parms Slash_ShowNames_Parms;
	memcpy ( &Slash_ShowNames_Parms.sArg, &sArg, 0xC );

	pFnSlash_ShowNames->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ShowNames, &Slash_ShowNames_Parms, NULL );

	pFnSlash_ShowNames->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Who
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Who ( struct FString sArg )
{
	static UFunction* pFnSlash_Who = NULL;

	if ( ! pFnSlash_Who )
		pFnSlash_Who = (UFunction*) UObject::GObjObjects()->Data[ 34581 ];

	UcUIDataStore_Chat_execSlash_Who_Parms Slash_Who_Parms;
	memcpy ( &Slash_Who_Parms.sArg, &sArg, 0xC );

	pFnSlash_Who->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Who, &Slash_Who_Parms, NULL );

	pFnSlash_Who->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Population
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Population ( struct FString sArg )
{
	static UFunction* pFnSlash_Population = NULL;

	if ( ! pFnSlash_Population )
		pFnSlash_Population = (UFunction*) UObject::GObjObjects()->Data[ 34579 ];

	UcUIDataStore_Chat_execSlash_Population_Parms Slash_Population_Parms;
	memcpy ( &Slash_Population_Parms.sArg, &sArg, 0xC );

	pFnSlash_Population->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Population, &Slash_Population_Parms, NULL );

	pFnSlash_Population->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Played
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Played ( struct FString sArg )
{
	static UFunction* pFnSlash_Played = NULL;

	if ( ! pFnSlash_Played )
		pFnSlash_Played = (UFunction*) UObject::GObjObjects()->Data[ 34577 ];

	UcUIDataStore_Chat_execSlash_Played_Parms Slash_Played_Parms;
	memcpy ( &Slash_Played_Parms.sArg, &sArg, 0xC );

	pFnSlash_Played->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Played, &Slash_Played_Parms, NULL );

	pFnSlash_Played->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_UnIgnore
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_UnIgnore ( struct FString sArg )
{
	static UFunction* pFnSlash_UnIgnore = NULL;

	if ( ! pFnSlash_UnIgnore )
		pFnSlash_UnIgnore = (UFunction*) UObject::GObjObjects()->Data[ 34575 ];

	UcUIDataStore_Chat_execSlash_UnIgnore_Parms Slash_UnIgnore_Parms;
	memcpy ( &Slash_UnIgnore_Parms.sArg, &sArg, 0xC );

	pFnSlash_UnIgnore->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_UnIgnore, &Slash_UnIgnore_Parms, NULL );

	pFnSlash_UnIgnore->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Ignore
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Ignore ( struct FString sArg )
{
	static UFunction* pFnSlash_Ignore = NULL;

	if ( ! pFnSlash_Ignore )
		pFnSlash_Ignore = (UFunction*) UObject::GObjObjects()->Data[ 34573 ];

	UcUIDataStore_Chat_execSlash_Ignore_Parms Slash_Ignore_Parms;
	memcpy ( &Slash_Ignore_Parms.sArg, &sArg, 0xC );

	pFnSlash_Ignore->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Ignore, &Slash_Ignore_Parms, NULL );

	pFnSlash_Ignore->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_FriendRemove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_FriendRemove ( struct FString sArg )
{
	static UFunction* pFnSlash_FriendRemove = NULL;

	if ( ! pFnSlash_FriendRemove )
		pFnSlash_FriendRemove = (UFunction*) UObject::GObjObjects()->Data[ 34571 ];

	UcUIDataStore_Chat_execSlash_FriendRemove_Parms Slash_FriendRemove_Parms;
	memcpy ( &Slash_FriendRemove_Parms.sArg, &sArg, 0xC );

	pFnSlash_FriendRemove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_FriendRemove, &Slash_FriendRemove_Parms, NULL );

	pFnSlash_FriendRemove->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_FriendAdd
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_FriendAdd ( struct FString sArg )
{
	static UFunction* pFnSlash_FriendAdd = NULL;

	if ( ! pFnSlash_FriendAdd )
		pFnSlash_FriendAdd = (UFunction*) UObject::GObjObjects()->Data[ 34569 ];

	UcUIDataStore_Chat_execSlash_FriendAdd_Parms Slash_FriendAdd_Parms;
	memcpy ( &Slash_FriendAdd_Parms.sArg, &sArg, 0xC );

	pFnSlash_FriendAdd->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_FriendAdd, &Slash_FriendAdd_Parms, NULL );

	pFnSlash_FriendAdd->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ClanLeave
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ClanLeave ( struct FString sArg )
{
	static UFunction* pFnSlash_ClanLeave = NULL;

	if ( ! pFnSlash_ClanLeave )
		pFnSlash_ClanLeave = (UFunction*) UObject::GObjObjects()->Data[ 34567 ];

	UcUIDataStore_Chat_execSlash_ClanLeave_Parms Slash_ClanLeave_Parms;
	memcpy ( &Slash_ClanLeave_Parms.sArg, &sArg, 0xC );

	pFnSlash_ClanLeave->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ClanLeave, &Slash_ClanLeave_Parms, NULL );

	pFnSlash_ClanLeave->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ClanRemove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ClanRemove ( struct FString sArg )
{
	static UFunction* pFnSlash_ClanRemove = NULL;

	if ( ! pFnSlash_ClanRemove )
		pFnSlash_ClanRemove = (UFunction*) UObject::GObjObjects()->Data[ 34565 ];

	UcUIDataStore_Chat_execSlash_ClanRemove_Parms Slash_ClanRemove_Parms;
	memcpy ( &Slash_ClanRemove_Parms.sArg, &sArg, 0xC );

	pFnSlash_ClanRemove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ClanRemove, &Slash_ClanRemove_Parms, NULL );

	pFnSlash_ClanRemove->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ClanAccept
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ClanAccept ( struct FString sArg )
{
	static UFunction* pFnSlash_ClanAccept = NULL;

	if ( ! pFnSlash_ClanAccept )
		pFnSlash_ClanAccept = (UFunction*) UObject::GObjObjects()->Data[ 34563 ];

	UcUIDataStore_Chat_execSlash_ClanAccept_Parms Slash_ClanAccept_Parms;
	memcpy ( &Slash_ClanAccept_Parms.sArg, &sArg, 0xC );

	pFnSlash_ClanAccept->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ClanAccept, &Slash_ClanAccept_Parms, NULL );

	pFnSlash_ClanAccept->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_ClanInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_ClanInvite ( struct FString sArg )
{
	static UFunction* pFnSlash_ClanInvite = NULL;

	if ( ! pFnSlash_ClanInvite )
		pFnSlash_ClanInvite = (UFunction*) UObject::GObjObjects()->Data[ 34561 ];

	UcUIDataStore_Chat_execSlash_ClanInvite_Parms Slash_ClanInvite_Parms;
	memcpy ( &Slash_ClanInvite_Parms.sArg, &sArg, 0xC );

	pFnSlash_ClanInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_ClanInvite, &Slash_ClanInvite_Parms, NULL );

	pFnSlash_ClanInvite->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_LookingForGroup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_LookingForGroup ( struct FString sArg )
{
	static UFunction* pFnSlash_LookingForGroup = NULL;

	if ( ! pFnSlash_LookingForGroup )
		pFnSlash_LookingForGroup = (UFunction*) UObject::GObjObjects()->Data[ 34559 ];

	UcUIDataStore_Chat_execSlash_LookingForGroup_Parms Slash_LookingForGroup_Parms;
	memcpy ( &Slash_LookingForGroup_Parms.sArg, &sArg, 0xC );

	pFnSlash_LookingForGroup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_LookingForGroup, &Slash_LookingForGroup_Parms, NULL );

	pFnSlash_LookingForGroup->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupInfo
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupInfo ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupInfo = NULL;

	if ( ! pFnSlash_GroupInfo )
		pFnSlash_GroupInfo = (UFunction*) UObject::GObjObjects()->Data[ 34557 ];

	UcUIDataStore_Chat_execSlash_GroupInfo_Parms Slash_GroupInfo_Parms;
	memcpy ( &Slash_GroupInfo_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupInfo, &Slash_GroupInfo_Parms, NULL );

	pFnSlash_GroupInfo->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupList
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupList ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupList = NULL;

	if ( ! pFnSlash_GroupList )
		pFnSlash_GroupList = (UFunction*) UObject::GObjObjects()->Data[ 34555 ];

	UcUIDataStore_Chat_execSlash_GroupList_Parms Slash_GroupList_Parms;
	memcpy ( &Slash_GroupList_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupList->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupList, &Slash_GroupList_Parms, NULL );

	pFnSlash_GroupList->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupJoin
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupJoin ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupJoin = NULL;

	if ( ! pFnSlash_GroupJoin )
		pFnSlash_GroupJoin = (UFunction*) UObject::GObjObjects()->Data[ 34553 ];

	UcUIDataStore_Chat_execSlash_GroupJoin_Parms Slash_GroupJoin_Parms;
	memcpy ( &Slash_GroupJoin_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupJoin->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupJoin, &Slash_GroupJoin_Parms, NULL );

	pFnSlash_GroupJoin->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupInviteMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupInviteMode ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupInviteMode = NULL;

	if ( ! pFnSlash_GroupInviteMode )
		pFnSlash_GroupInviteMode = (UFunction*) UObject::GObjObjects()->Data[ 34551 ];

	UcUIDataStore_Chat_execSlash_GroupInviteMode_Parms Slash_GroupInviteMode_Parms;
	memcpy ( &Slash_GroupInviteMode_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupInviteMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupInviteMode, &Slash_GroupInviteMode_Parms, NULL );

	pFnSlash_GroupInviteMode->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupPublicMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupPublicMode ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupPublicMode = NULL;

	if ( ! pFnSlash_GroupPublicMode )
		pFnSlash_GroupPublicMode = (UFunction*) UObject::GObjObjects()->Data[ 34549 ];

	UcUIDataStore_Chat_execSlash_GroupPublicMode_Parms Slash_GroupPublicMode_Parms;
	memcpy ( &Slash_GroupPublicMode_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupPublicMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupPublicMode, &Slash_GroupPublicMode_Parms, NULL );

	pFnSlash_GroupPublicMode->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupInviteModeDefault
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupInviteModeDefault ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupInviteModeDefault = NULL;

	if ( ! pFnSlash_GroupInviteModeDefault )
		pFnSlash_GroupInviteModeDefault = (UFunction*) UObject::GObjObjects()->Data[ 34547 ];

	UcUIDataStore_Chat_execSlash_GroupInviteModeDefault_Parms Slash_GroupInviteModeDefault_Parms;
	memcpy ( &Slash_GroupInviteModeDefault_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupInviteModeDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupInviteModeDefault, &Slash_GroupInviteModeDefault_Parms, NULL );

	pFnSlash_GroupInviteModeDefault->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupPublicModeDefault
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupPublicModeDefault ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupPublicModeDefault = NULL;

	if ( ! pFnSlash_GroupPublicModeDefault )
		pFnSlash_GroupPublicModeDefault = (UFunction*) UObject::GObjObjects()->Data[ 34545 ];

	UcUIDataStore_Chat_execSlash_GroupPublicModeDefault_Parms Slash_GroupPublicModeDefault_Parms;
	memcpy ( &Slash_GroupPublicModeDefault_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupPublicModeDefault->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupPublicModeDefault, &Slash_GroupPublicModeDefault_Parms, NULL );

	pFnSlash_GroupPublicModeDefault->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupRemove
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupRemove ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupRemove = NULL;

	if ( ! pFnSlash_GroupRemove )
		pFnSlash_GroupRemove = (UFunction*) UObject::GObjObjects()->Data[ 34543 ];

	UcUIDataStore_Chat_execSlash_GroupRemove_Parms Slash_GroupRemove_Parms;
	memcpy ( &Slash_GroupRemove_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupRemove->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupRemove, &Slash_GroupRemove_Parms, NULL );

	pFnSlash_GroupRemove->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Transfer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Transfer ( struct FString sArg )
{
	static UFunction* pFnSlash_Transfer = NULL;

	if ( ! pFnSlash_Transfer )
		pFnSlash_Transfer = (UFunction*) UObject::GObjObjects()->Data[ 34541 ];

	UcUIDataStore_Chat_execSlash_Transfer_Parms Slash_Transfer_Parms;
	memcpy ( &Slash_Transfer_Parms.sArg, &sArg, 0xC );

	pFnSlash_Transfer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Transfer, &Slash_Transfer_Parms, NULL );

	pFnSlash_Transfer->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupLeave
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupLeave ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupLeave = NULL;

	if ( ! pFnSlash_GroupLeave )
		pFnSlash_GroupLeave = (UFunction*) UObject::GObjObjects()->Data[ 34539 ];

	UcUIDataStore_Chat_execSlash_GroupLeave_Parms Slash_GroupLeave_Parms;
	memcpy ( &Slash_GroupLeave_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupLeave->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupLeave, &Slash_GroupLeave_Parms, NULL );

	pFnSlash_GroupLeave->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupAccept
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupAccept ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupAccept = NULL;

	if ( ! pFnSlash_GroupAccept )
		pFnSlash_GroupAccept = (UFunction*) UObject::GObjObjects()->Data[ 34537 ];

	UcUIDataStore_Chat_execSlash_GroupAccept_Parms Slash_GroupAccept_Parms;
	memcpy ( &Slash_GroupAccept_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupAccept->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupAccept, &Slash_GroupAccept_Parms, NULL );

	pFnSlash_GroupAccept->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_GroupInvite
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_GroupInvite ( struct FString sArg )
{
	static UFunction* pFnSlash_GroupInvite = NULL;

	if ( ! pFnSlash_GroupInvite )
		pFnSlash_GroupInvite = (UFunction*) UObject::GObjObjects()->Data[ 34535 ];

	UcUIDataStore_Chat_execSlash_GroupInvite_Parms Slash_GroupInvite_Parms;
	memcpy ( &Slash_GroupInvite_Parms.sArg, &sArg, 0xC );

	pFnSlash_GroupInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_GroupInvite, &Slash_GroupInvite_Parms, NULL );

	pFnSlash_GroupInvite->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Logout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Logout ( struct FString sArg )
{
	static UFunction* pFnSlash_Logout = NULL;

	if ( ! pFnSlash_Logout )
		pFnSlash_Logout = (UFunction*) UObject::GObjObjects()->Data[ 34533 ];

	UcUIDataStore_Chat_execSlash_Logout_Parms Slash_Logout_Parms;
	memcpy ( &Slash_Logout_Parms.sArg, &sArg, 0xC );

	pFnSlash_Logout->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Logout, &Slash_Logout_Parms, NULL );

	pFnSlash_Logout->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.Slash_Exit
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sArg                           ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::Slash_Exit ( struct FString sArg )
{
	static UFunction* pFnSlash_Exit = NULL;

	if ( ! pFnSlash_Exit )
		pFnSlash_Exit = (UFunction*) UObject::GObjObjects()->Data[ 34531 ];

	UcUIDataStore_Chat_execSlash_Exit_Parms Slash_Exit_Parms;
	memcpy ( &Slash_Exit_Parms.sArg, &sArg, 0xC );

	pFnSlash_Exit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSlash_Exit, &Slash_Exit_Parms, NULL );

	pFnSlash_Exit->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.OnPlayerProfileChanged
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Chat::OnPlayerProfileChanged ( )
{
	static UFunction* pFnOnPlayerProfileChanged = NULL;

	if ( ! pFnOnPlayerProfileChanged )
		pFnOnPlayerProfileChanged = (UFunction*) UObject::GObjObjects()->Data[ 34530 ];

	UcUIDataStore_Chat_execOnPlayerProfileChanged_Parms OnPlayerProfileChanged_Parms;

	pFnOnPlayerProfileChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnOnPlayerProfileChanged, &OnPlayerProfileChanged_Parms, NULL );

	pFnOnPlayerProfileChanged->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.CloseChatSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Chat::CloseChatSystem ( )
{
	static UFunction* pFnCloseChatSystem = NULL;

	if ( ! pFnCloseChatSystem )
		pFnCloseChatSystem = (UFunction*) UObject::GObjObjects()->Data[ 34529 ];

	UcUIDataStore_Chat_execCloseChatSystem_Parms CloseChatSystem_Parms;

	pFnCloseChatSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseChatSystem, &CloseChatSystem_Parms, NULL );

	pFnCloseChatSystem->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.InitChatSystem
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Chat::InitChatSystem ( )
{
	static UFunction* pFnInitChatSystem = NULL;

	if ( ! pFnInitChatSystem )
		pFnInitChatSystem = (UFunction*) UObject::GObjObjects()->Data[ 34528 ];

	UcUIDataStore_Chat_execInitChatSystem_Parms InitChatSystem_Parms;

	pFnInitChatSystem->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitChatSystem, &InitChatSystem_Parms, NULL );

	pFnInitChatSystem->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.CloseChatLogFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Chat::CloseChatLogFile ( )
{
	static UFunction* pFnCloseChatLogFile = NULL;

	if ( ! pFnCloseChatLogFile )
		pFnCloseChatLogFile = (UFunction*) UObject::GObjObjects()->Data[ 34527 ];

	UcUIDataStore_Chat_execCloseChatLogFile_Parms CloseChatLogFile_Parms;

	pFnCloseChatLogFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCloseChatLogFile, &CloseChatLogFile_Parms, NULL );

	pFnCloseChatLogFile->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.InitChatLogFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UcUIDataStore_Chat::InitChatLogFile ( )
{
	static UFunction* pFnInitChatLogFile = NULL;

	if ( ! pFnInitChatLogFile )
		pFnInitChatLogFile = (UFunction*) UObject::GObjObjects()->Data[ 34526 ];

	UcUIDataStore_Chat_execInitChatLogFile_Parms InitChatLogFile_Parms;

	pFnInitChatLogFile->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInitChatLogFile, &InitChatLogFile_Parms, NULL );

	pFnInitChatLogFile->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIDataStore_Chat.CreateUIChatMessage
// [0x00020600] ( FUNC_Exec | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  eMsgType                       ( CPF_Parm )
// int                            nSenderUID                     ( CPF_Parm )
// struct FString                 m_sCharacterName               ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sMsg                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            nSenderAccountType             ( CPF_OptionalParm | CPF_Parm )
// float                          fDisplayTime                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIsBonus                       ( CPF_OptionalParm | CPF_Parm )

bool UcUIDataStore_Chat::CreateUIChatMessage ( unsigned char eMsgType, int nSenderUID, struct FString m_sCharacterName, struct FString sMsg, int nSenderAccountType, float fDisplayTime, unsigned long bIsBonus )
{
	static UFunction* pFnCreateUIChatMessage = NULL;

	if ( ! pFnCreateUIChatMessage )
		pFnCreateUIChatMessage = (UFunction*) UObject::GObjObjects()->Data[ 34517 ];

	UcUIDataStore_Chat_execCreateUIChatMessage_Parms CreateUIChatMessage_Parms;
	CreateUIChatMessage_Parms.eMsgType = eMsgType;
	CreateUIChatMessage_Parms.nSenderUID = nSenderUID;
	memcpy ( &CreateUIChatMessage_Parms.m_sCharacterName, &m_sCharacterName, 0xC );
	memcpy ( &CreateUIChatMessage_Parms.sMsg, &sMsg, 0xC );
	CreateUIChatMessage_Parms.nSenderAccountType = nSenderAccountType;
	CreateUIChatMessage_Parms.fDisplayTime = fDisplayTime;
	CreateUIChatMessage_Parms.bIsBonus = bIsBonus;

	pFnCreateUIChatMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateUIChatMessage, &CreateUIChatMessage_Parms, NULL );

	pFnCreateUIChatMessage->FunctionFlags |= 0x400;

	return CreateUIChatMessage_Parms.ReturnValue;
};

// Function APBUserInterface.cUIDataStore_Chat.ProcessCommand
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 sMessage                       ( CPF_Parm | CPF_NeedCtorLink )

void UcUIDataStore_Chat::ProcessCommand ( struct FString sMessage )
{
	static UFunction* pFnProcessCommand = NULL;

	if ( ! pFnProcessCommand )
		pFnProcessCommand = (UFunction*) UObject::GObjObjects()->Data[ 34515 ];

	UcUIDataStore_Chat_execProcessCommand_Parms ProcessCommand_Parms;
	memcpy ( &ProcessCommand_Parms.sMessage, &sMessage, 0xC );

	pFnProcessCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnProcessCommand, &ProcessCommand_Parms, NULL );

	pFnProcessCommand->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIInGameQuestionManager.Tick
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// float                          fDeltaTime                     ( CPF_Parm )

void UcUIInGameQuestionManager::eventTick ( float fDeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = (UFunction*) UObject::GObjObjects()->Data[ 33532 ];

	UcUIInGameQuestionManager_eventTick_Parms Tick_Parms;
	Tick_Parms.fDeltaTime = fDeltaTime;

	pFnTick->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );

	pFnTick->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIInGameQuestionManager.UserDeclined
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIInGameQuestionManager::eventUserDeclined ( )
{
	static UFunction* pFnUserDeclined = NULL;

	if ( ! pFnUserDeclined )
		pFnUserDeclined = (UFunction*) UObject::GObjObjects()->Data[ 33530 ];

	UcUIInGameQuestionManager_eventUserDeclined_Parms UserDeclined_Parms;

	pFnUserDeclined->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUserDeclined, &UserDeclined_Parms, NULL );

	pFnUserDeclined->FunctionFlags |= 0x400;

	return UserDeclined_Parms.ReturnValue;
};

// Function APBUserInterface.cUIInGameQuestionManager.UserAccepted
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIInGameQuestionManager::eventUserAccepted ( )
{
	static UFunction* pFnUserAccepted = NULL;

	if ( ! pFnUserAccepted )
		pFnUserAccepted = (UFunction*) UObject::GObjObjects()->Data[ 33528 ];

	UcUIInGameQuestionManager_eventUserAccepted_Parms UserAccepted_Parms;

	pFnUserAccepted->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUserAccepted, &UserAccepted_Parms, NULL );

	pFnUserAccepted->FunctionFlags |= 0x400;

	return UserAccepted_Parms.ReturnValue;
};

// Function APBUserInterface.cUIInGameQuestionManager.HasQueuedQuestions
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIInGameQuestionManager::HasQueuedQuestions ( )
{
	static UFunction* pFnHasQueuedQuestions = NULL;

	if ( ! pFnHasQueuedQuestions )
		pFnHasQueuedQuestions = (UFunction*) UObject::GObjObjects()->Data[ 33526 ];

	UcUIInGameQuestionManager_execHasQueuedQuestions_Parms HasQueuedQuestions_Parms;

	pFnHasQueuedQuestions->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHasQueuedQuestions, &HasQueuedQuestions_Parms, NULL );

	pFnHasQueuedQuestions->FunctionFlags |= 0x400;

	return HasQueuedQuestions_Parms.ReturnValue;
};

// Function APBUserInterface.cUIInGameQuestionManager.RemoveQuestion
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            nID                            ( CPF_Parm )

void UcUIInGameQuestionManager::eventRemoveQuestion ( int nID )
{
	static UFunction* pFnRemoveQuestion = NULL;

	if ( ! pFnRemoveQuestion )
		pFnRemoveQuestion = (UFunction*) UObject::GObjObjects()->Data[ 33524 ];

	UcUIInGameQuestionManager_eventRemoveQuestion_Parms RemoveQuestion_Parms;
	RemoveQuestion_Parms.nID = nID;

	pFnRemoveQuestion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRemoveQuestion, &RemoveQuestion_Parms, NULL );

	pFnRemoveQuestion->FunctionFlags |= 0x400;
};

// Function APBUserInterface.cUIInGameQuestionManager.AddQuestion
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FtUIInGameQuestionParam Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UcUIInGameQuestionManager::eventAddQuestion ( struct FtUIInGameQuestionParam Params )
{
	static UFunction* pFnAddQuestion = NULL;

	if ( ! pFnAddQuestion )
		pFnAddQuestion = (UFunction*) UObject::GObjObjects()->Data[ 33500 ];

	UcUIInGameQuestionManager_eventAddQuestion_Parms AddQuestion_Parms;
	memcpy ( &AddQuestion_Parms.Params, &Params, 0x70 );

	pFnAddQuestion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddQuestion, &AddQuestion_Parms, NULL );

	pFnAddQuestion->FunctionFlags |= 0x400;

	return AddQuestion_Parms.ReturnValue;
};

// Function APBUserInterface.cUIInGameQuestionManager.TimerCallback
// [0x00120000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UcUIInGameQuestionManager::TimerCallback ( )
{
	static UFunction* pFnTimerCallback = NULL;

	if ( ! pFnTimerCallback )
		pFnTimerCallback = (UFunction*) UObject::GObjObjects()->Data[ 33498 ];

	UcUIInGameQuestionManager_execTimerCallback_Parms TimerCallback_Parms;

	this->ProcessEvent ( pFnTimerCallback, &TimerCallback_Parms, NULL );

	return TimerCallback_Parms.ReturnValue;
};

// Function APBUserInterface.cUIInGameQuestionManager.AnswerCallback
// [0x00120000] 
// Parameters infos:
// unsigned char                  Answer                         ( CPF_Parm )

void UcUIInGameQuestionManager::AnswerCallback ( unsigned char Answer )
{
	static UFunction* pFnAnswerCallback = NULL;

	if ( ! pFnAnswerCallback )
		pFnAnswerCallback = (UFunction*) UObject::GObjObjects()->Data[ 33496 ];

	UcUIInGameQuestionManager_execAnswerCallback_Parms AnswerCallback_Parms;
	AnswerCallback_Parms.Answer = Answer;

	this->ProcessEvent ( pFnAnswerCallback, &AnswerCallback_Parms, NULL );
};

// Function APBUserInterface.cUIInGameQuestionManager.DisplayedCallback
// [0x00120000] 
// Parameters infos:

void UcUIInGameQuestionManager::DisplayedCallback ( )
{
	static UFunction* pFnDisplayedCallback = NULL;

	if ( ! pFnDisplayedCallback )
		pFnDisplayedCallback = (UFunction*) UObject::GObjObjects()->Data[ 33494 ];

	UcUIInGameQuestionManager_execDisplayedCallback_Parms DisplayedCallback_Parms;

	this->ProcessEvent ( pFnDisplayedCallback, &DisplayedCallback_Parms, NULL );
};

// Function APBUserInterface.cUIDataStore_DistrictQueuing.AvailableForJoinAsGroup
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UcUIDataStore_DistrictQueuing::AvailableForJoinAsGroup ( )
{
	static UFunction* pFnAvailableForJoinAsGroup = NULL;

	if ( ! pFnAvailableForJoinAsGroup )
		pFnAvailableForJoinAsGroup = (UFunction*) UObject::GObjObjects()->Data[ 36252 ];

	UcUIDataStore_DistrictQueuing_execAvailableForJoinAsGroup_Parms AvailableForJoinAsGroup_Parms;

	pFnAvailableForJoinAsGroup->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAvailableForJoinAsGroup, &AvailableForJoinAsGroup_Parms, NULL );

	pFnAvailableForJoinAsGroup->FunctionFlags |= 0x400;

	return AvailableForJoinAsGroup_Parms.ReturnValue;
};

// Function APBUserInterface.cUIAction_GetDistrictList.OnGetDistrictListFailed
// [0x00020002] 
// Parameters infos:
// int                            nError                         ( CPF_Parm )

void UcUIAction_GetDistrictList::OnGetDistrictListFailed ( int nError )
{
	static UFunction* pFnOnGetDistrictListFailed = NULL;

	if ( ! pFnOnGetDistrictListFailed )
		pFnOnGetDistrictListFailed = (UFunction*) UObject::GObjObjects()->Data[ 34162 ];

	UcUIAction_GetDistrictList_execOnGetDistrictListFailed_Parms OnGetDistrictListFailed_Parms;
	OnGetDistrictListFailed_Parms.nError = nError;

	this->ProcessEvent ( pFnOnGetDistrictListFailed, &OnGetDistrictListFailed_Parms, NULL );
};

// Function APBUserInterface.cUIAction_GetDistrictList.OnGetDistrictListSuccess
// [0x00020002] 
// Parameters infos:

void UcUIAction_GetDistrictList::OnGetDistrictListSuccess ( )
{
	static UFunction* pFnOnGetDistrictListSuccess = NULL;

	if ( ! pFnOnGetDistrictListSuccess )
		pFnOnGetDistrictListSuccess = (UFunction*) UObject::GObjObjects()->Data[ 34161 ];

	UcUIAction_GetDistrictList_execOnGetDistrictListSuccess_Parms OnGetDistrictListSuccess_Parms;

	this->ProcessEvent ( pFnOnGetDistrictListSuccess, &OnGetDistrictListSuccess_Parms, NULL );
};

// Function APBUserInterface.cUIAction_NoOp.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIAction_NoOp::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 34475 ];

	UcUIAction_NoOp_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function APBUserInterface.cUIMSAction_DSPContainer_RecreatePages.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIMSAction_DSPContainer_RecreatePages::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 38867 ];

	UcUIMSAction_DSPContainer_RecreatePages_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function APBUserInterface.cUIMSAction_DSPContainer_ShowPage.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIMSAction_DSPContainer_ShowPage::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 38871 ];

	UcUIMSAction_DSPContainer_ShowPage_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function APBUserInterface.cUIMSAction_Sequencer_Refresh.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIMSAction_Sequencer_Refresh::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 38954 ];

	UcUIMSAction_Sequencer_Refresh_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function APBUserInterface.cUIMSAction_Sequencer_SetSelectedRow.Activated
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIMSAction_Sequencer_SetSelectedRow::eventActivated ( )
{
	static UFunction* pFnActivated = NULL;

	if ( ! pFnActivated )
		pFnActivated = (UFunction*) UObject::GObjObjects()->Data[ 38958 ];

	UcUIMSAction_Sequencer_SetSelectedRow_eventActivated_Parms Activated_Parms;

	this->ProcessEvent ( pFnActivated, &Activated_Parms, NULL );
};

// Function APBUserInterface.cUIScene_Login.InitScene
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UcUIScene_Login::eventInitScene ( )
{
	static UFunction* pFnInitScene = NULL;

	if ( ! pFnInitScene )
		pFnInitScene = (UFunction*) UObject::GObjObjects()->Data[ 39545 ];

	UcUIScene_Login_eventInitScene_Parms InitScene_Parms;

	this->ProcessEvent ( pFnInitScene, &InitScene_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif