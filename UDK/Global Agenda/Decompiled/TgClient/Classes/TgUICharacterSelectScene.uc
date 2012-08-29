/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUICharacterSelectScene.uc
 * 
 * Stats:
 *	Constants:2
 *	Enums:1
 *	Structs:3
 *	Properties:31
 *	Functions:43
 *
 *******************************************************************************/
class TgUICharacterSelectScene extends TgUISceneDriver_Tooltip
	native;

const TGCS_MAX_CHARACTERS = 8;
const TGCS_NO_SELECTION = -1;

enum CHAR_SELECT_STATES
{
	CSS_SELECT_CHARACTER,
	CSS_WAITING_FOR_RESPONSE,
	CSS_CREATING_CHARACTER,
	CSS_DELETING_CHARACTER,
	CSS_CLONING_CHARACTER,
	CSS_MAX
};

struct native CharacterSelectEntry
{
	var UIButton cseButton;
	var UILabel cseClass;
	var UILabel cseLevel;
	var UILabel cseLocation;
	var UIImage cseIcon;
	var UIImage cseHighlight;

	structdefaultproperties
	{
		cseButton=none
		cseClass=none
		cseLevel=none
		cseLocation=none
		cseIcon=none
		cseHighlight=none
	}
};

struct native CharacterDeleteBox
{
	var UIPanel cdcPanel;
	var UIImage cdcIconImage;
	var UILabel cdcClassLabel;
	var UILabel cdcLevelLabel;
	var UIEditBox cdcDeleteEdit;
	var UIButton cdcOK;
	var UIButton cdcCancel;

	structdefaultproperties
	{
		cdcPanel=none
		cdcIconImage=none
		cdcClassLabel=none
		cdcLevelLabel=none
		cdcDeleteEdit=none
		cdcOK=none
		cdcCancel=none
	}
};

struct native CharacterErrorBox
{
	var UIPanel cebPanel;
	var UIButton cebOK;

	structdefaultproperties
	{
		cebPanel=none
		cebOK=none
	}
};

var TgDataSet c_DataSet;
var TgDataInterface c_DataInterface;
var int c_nCurrentSelection;
var int c_nNumCharacters;
var CustomCharacterAssembly c_CharacterList[8];
var DeviceAttachmentAssembly c_CharacterDeviceList[8];
var int c_CharacterIdList[8];
var int c_CharacterProfileList[8];
var int c_CharacterLevelList[8];
var string c_sCharacterNameList[8];
var CharacterSelectEntry c_CharacterListButton[8];
var CharacterDeleteBox c_CharacterDeleteDialogue;
var CharacterErrorBox c_CharacterErrorDialogue;
var UIButton c_SelectButton;
var UIButton c_CreateButton;
var UIButton c_DeleteButton;
var UIButton m_DragButton;
var UIButton c_BackButton;
var UIImage c_ClassIconImage;
var UIButton m_RotateBox;
var UIButton m_RotateCCWButton;
var UIButton m_RotateCWButton;
var UILabel c_StatusMessageBox;
var UILabel c_PlayerNameLabel;
var TgUICharacterSelectScene.CHAR_SELECT_STATES c_SelectState;
var TgUICharacterSelectScene.CHAR_SELECT_STATES c_SelectStatePrevious;
var TgSkeletalMeshActor_CharacterBuilder m_CustomModel;
var native Pointer c_pMorphSettings;
var int c_nCurrMorphSettings[255];
var int c_nMaxMorphIndexSentFromServer;
var bool c_bErrorMode;

native function PostInitSceneDriver();
native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function FixupWidgets();
native function UpdateShowHideWidgets();
native function ConfirmSelectCharacter();
native function ConfirmDeleteCharacter();
native function ClearCharacterData();
native function bool TickTgUIScene();
native function TickDialogueBoxes();
native function RegisterCallbacks();
native function UpdateCharacterListCallback(int eType);
native noexport function UpdateStatusPanel(bool bEnable, optional string DisplayString);
native function ZoomOnChar(bool bZoomIn);
native function PopulateCurrentMorphSettings();
native function OnDeleteFieldChangedDelegate(UIObject Sender, int PlayerIndex);
native function bool ValidateCharSlotFeature();
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnSelectPrevious(const out InputEventParameters EventParms);
native function bool OnSelectNext(const out InputEventParameters EventParms);
event InitializeDataInterface()
{
	c_DataSet = new class'TgDataSet';
	c_DataSet.RegisterForEvents(self, 'UpdateCharacterListCallback');
	c_DataInterface = new class'TgDataInterface';
}

event FixupWidgetsUC()
{
	local TgLoginHUD loginHUD;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	@NULL(622461184)[@NULL(1099264)];
	c_CharacterListButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnSelectCharacter0 != @NULL(639238400)[@NULL(1099264)];
		// BlockSize:3072
		switch(@NULL(-54271))
		{
			OnSelectCharacter1 != @NULL(739901696)[@NULL(1099264)];
			@NULL(786437)
			__OnRawInputKey__Delegate
			OnSelectCharacter2
			@NULL(739901696)[@NULL(1099264)];
			UnknownExprToken(0x03)
			c_CharacterListButton
			// BlockSize:3072
			switch(@NULL(-54271))
			{
				OnSelectCharacter3 != @NULL(739901696)[@NULL(1099264)];
				// BlockSize:3072
				switch(@NULL(-54271))
				{
					// BlockSize:58881
					OnSelectCharacter4 != @NULL(739901696)[@NULL(1099264)];
					{
						// This is an implied JumpToken;
						OnSelectCharacter5 != @NULL(739901696)[@NULL(1099264)];
						@NULL(-54271)[@NULL(201327872)];
						// End:0xe601 Loop:False
						OnSelectCharacter6 != @NULL(739901696)[@NULL(1099264)];
						{
							OnSelectCharacter7 != @NULL(-54271)[@NULL(201327872)];
							)
							m_RotateBox.__OnRawInputKey__Delegate = CamZoomToggleButton;
							@NULL(-452919040)[@NULL(1101312)];
							@NULL(-54271)[@NULL(201327872)];
							OnDeleteOK != @NULL(-452919040)[@NULL(1101312)];
							OnDeleteCancel != @NULL(-452919040)[@NULL(1101312)];
							OnDeleteFieldChangedDelegate != @NULL(-469696256)[@NULL(1102080)];
							OnErrorOK != @NULL(1101312);
							@NULL(1590555)[TickTgUIScene];
							@NULL(0)
							false
							)
							c_CharacterErrorDialogue.cebPanel.SetVisibility(false);
							loginHUD = TgLoginHUD(m_HUDParent);
							// End:0x2dc Loop:False
							if(loginHUD != none)
							{
								m_CustomModel = loginHUD.GetCharacterBuilderSkelMeshActor();
							}
						}
}

function bool OnSelectCharacter0(const out InputEventParameters EventParms)
{
	// End:0x1d Loop:False
	if(c_SelectState != 0 || (c_bErrorMode))
	{
		return false;
	}
	// End:0x67 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return SelectCharacter(0);
	}
	// End:0xb9
	else
	{
		// End:0xb9 Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 3))
		{
			SelectCharacter(0);
			ConfirmSelectCharacter();
			return true;
		}
	}
	return false;
}

function bool OnSelectCharacter1(const out InputEventParameters EventParms)
{
	// End:0x1d Loop:False
	if(c_SelectState != 0 || (c_bErrorMode))
	{
		return false;
	}
	// End:0x67 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return SelectCharacter(1);
	}
	// End:0xb9
	else
	{
		// End:0xb9 Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 3))
		{
			SelectCharacter(1);
			ConfirmSelectCharacter();
			return true;
		}
	}
	return false;
}

function bool OnSelectCharacter2(const out InputEventParameters EventParms)
{
	// End:0x1d Loop:False
	if(c_SelectState != 0 || (c_bErrorMode))
	{
		return false;
	}
	// End:0x68 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return SelectCharacter(2);
	}
	// End:0xbb
	else
	{
		// End:0xbb Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 3))
		{
			SelectCharacter(2);
			ConfirmSelectCharacter();
			return true;
		}
	}
	return false;
}

function bool OnSelectCharacter3(const out InputEventParameters EventParms)
{
	// End:0x1d Loop:False
	if(c_SelectState != 0 || (c_bErrorMode))
	{
		return false;
	}
	// End:0x68 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return SelectCharacter(3);
	}
	// End:0xbb
	else
	{
		// End:0xbb Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 3))
		{
			SelectCharacter(3);
			ConfirmSelectCharacter();
			return true;
		}
	}
	return false;
}

function bool OnSelectCharacter4(const out InputEventParameters EventParms)
{
	// End:0x1d Loop:False
	if(c_SelectState != 0 || (c_bErrorMode))
	{
		return false;
	}
	// End:0x68 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return SelectCharacter(4);
	}
	// End:0xbb
	else
	{
		// End:0xbb Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 3))
		{
			SelectCharacter(4);
			ConfirmSelectCharacter();
			return true;
		}
	}
	return false;
}

function bool OnSelectCharacter5(const out InputEventParameters EventParms)
{
	// End:0x1d Loop:False
	if(c_SelectState != 0 || (c_bErrorMode))
	{
		return false;
	}
	// End:0x68 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return SelectCharacter(5);
	}
	// End:0xbb
	else
	{
		// End:0xbb Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 3))
		{
			SelectCharacter(5);
			ConfirmSelectCharacter();
			return true;
		}
	}
	return false;
}

function bool OnSelectCharacter6(const out InputEventParameters EventParms)
{
	// End:0x1d Loop:False
	if(c_SelectState != 0 || (c_bErrorMode))
	{
		return false;
	}
	// End:0x68 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return SelectCharacter(6);
	}
	// End:0xbb
	else
	{
		// End:0xbb Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 3))
		{
			SelectCharacter(6);
			ConfirmSelectCharacter();
			return true;
		}
	}
	return false;
}

function bool OnSelectCharacter7(const out InputEventParameters EventParms)
{
	// End:0x1d Loop:False
	if(c_SelectState != 0 || (c_bErrorMode))
	{
		return false;
	}
	// End:0x68 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		return SelectCharacter(7);
	}
	// End:0xbb
	else
	{
		// End:0xbb Loop:False
		if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 3))
		{
			SelectCharacter(7);
			ConfirmSelectCharacter();
			return true;
		}
	}
	return false;
}

function bool OnBackButton(const out InputEventParameters EventParms)
{
	local TgLoginHUD loginHUD;

	// End:0xb1 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		loginHUD = TgLoginHUD(m_HUDParent);
		// End:0xaf Loop:False
		if(loginHUD != none)
		{
			c_bErrorMode = false;
			c_CharacterErrorDialogue.cebPanel.SetVisibility(false);
			loginHUD.BackToLogin();
		}
		return true;
	}
	return false;
}

function bool OnSelectSelection(const out InputEventParameters EventParms)
{
	// End:0x66 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0) && (c_SelectState == 0) && (!c_bErrorMode))
	{
		ConfirmSelectCharacter();
		return true;
	}
	return false;
}

function bool OnCreateSelection(const out InputEventParameters EventParms)
{
	// End:0x83 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0) && (c_SelectState == 0) && (!c_bErrorMode))
	{
		// End:0x6b Loop:False
		if(!ValidateCharSlotFeature())
		{
			return true;
		}
		// End:0x83 Loop:False
		if(c_nNumCharacters < 8)
		{
			OpenCreateCharacterScreen();
			return true;
		}
	}
	return false;
}

function bool OnDeleteSelection(const out InputEventParameters EventParms)
{
	// End:0x64 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0) && (c_SelectState == 0) && (!c_bErrorMode))
	{
		c_SelectState = 3;
		return true;
	}
	return false;
}

function bool CamZoomToggleButton(const out InputEventParameters EventParms)
{
	// End:0x6e Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton')
	{
		// End:0x6e Loop:False
		if(EventParms.EventType == 0 || (EventParms.EventType == 3))
		{
			ZoomOnChar(false);
			ZoomOnChar(true);
			return true;
		}
	}
	return false;
}

function bool OnDeleteOK(const out InputEventParameters EventParms)
{
	// End:0x59 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0) && (c_SelectState == 3))
	{
		ConfirmDeleteCharacter();
		return true;
	}
	return false;
}

function bool OnErrorOK(const out InputEventParameters EventParms)
{
	// End:0x65 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0))
	{
		c_bErrorMode = false;
		c_CharacterErrorDialogue.cebPanel.SetVisibility(false);
		return true;
	}
	return false;
}

function bool OnDeleteCancel(const out InputEventParameters EventParms)
{
	// End:0x57 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0) && (c_SelectState == 3))
	{
		c_SelectState = 0;
		return true;
	}
	return false;
}

function OpenCreateCharacterScreen()
{
	local TgLoginHUD loginHUD;

	loginHUD = TgLoginHUD(m_HUDParent);
	// End:0x4e Loop:False
	if(loginHUD != none)
	{
		c_SelectState = 2;
		m_CustomModel.SetHidden(false);
		CloseTgUIScene();
		loginHUD.LoadClassSelect();
	}
}

event bool SelectCharacter(int Index)
{
	local int oldSelection;

	// End:0x12 Loop:False
	if(c_SelectState != 0)
	{
		return false;
	}
	oldSelection = c_nCurrentSelection;
	c_nCurrentSelection = Index;
	// End:0x53 Loop:False
	if(c_nCurrentSelection == -1 || (c_nCurrentSelection != oldSelection))
	{
		return UpdateCustomModel();
	}
	return true;
}

event bool UpdateCustomModel()
{
	// End:0xce Loop:False
	if(m_CustomModel != none && (c_nCurrentSelection != -1))
	{
		m_CustomModel.SetCustomAssembly(c_CharacterList[c_nCurrentSelection]);
		m_CustomModel.SetDeviceAssembly(c_CharacterDeviceList[c_nCurrentSelection]);
		PopulateCurrentMorphSettings();
		m_CustomModel.SetMorphSettings(c_nCurrMorphSettings);
		m_CustomModel.c_bIsCharacterSelect = true;
		m_CustomModel.m_nMaxMorphIndexSentFromServer = c_nMaxMorphIndexSentFromServer;
		m_CustomModel.BuildDude();
		m_CustomModel.SetHidden(false);
		return true;
	}
	// End:0x117
	else
	{
		// End:0x115 Loop:False
		if(m_CustomModel != none && (c_nCurrentSelection == -1))
		{
			m_CustomModel.SetHidden(true);
			m_CustomModel.SetAssemblyToDefaults();
			return true;
		}
		// End:0x117
		else
		{
			return false;
		}
	}
}

event ClearModelData()
{
	local CustomCharacterAssembly defaultcharassembly;
	local DeviceAttachmentAssembly defaultdeviceassembly;
	local int I;

	I = 0;
	J0x07:

	// End:0x3f Loop:True
	if(I < 8)
	{
		c_CharacterList[I] = defaultcharassembly;
		c_CharacterDeviceList[I] = defaultdeviceassembly;
		++ I;
		// This is an implied JumpToken; Continue!
		goto J0x07;
	}
}

defaultproperties
{
	c_nCurrentSelection=-1
	c_CharacterList[0]=(SuitMeshId=1752,HeadMeshId=1605,HairMeshId=1757,HelmetMeshId=-1,SkinToneParameterId=2,SkinRaceParameterId=0,EyeColorParameterId=8,bBald=false,bHideHelmet=false,bValidCustomAssembly=false,bHalfHelmet=false,nGenderTypeId=853,HeadFlairId=0,SuitFlairId=0,JetpackTrailId=0,DyeList=0,DyeList[1]=0,DyeList[2]=0,DyeList[3]=0,DyeList[4]=0)
	c_CharacterList[1]=(SuitMeshId=1752,HeadMeshId=1605,HairMeshId=1757,HelmetMeshId=-1,SkinToneParameterId=2,SkinRaceParameterId=0,EyeColorParameterId=8,bBald=false,bHideHelmet=false,bValidCustomAssembly=false,bHalfHelmet=false,nGenderTypeId=853,HeadFlairId=0,SuitFlairId=0,JetpackTrailId=0,DyeList=0,DyeList[1]=0,DyeList[2]=0,DyeList[3]=0,DyeList[4]=0)
	c_CharacterList[2]=(SuitMeshId=1752,HeadMeshId=1605,HairMeshId=1757,HelmetMeshId=-1,SkinToneParameterId=2,SkinRaceParameterId=0,EyeColorParameterId=8,bBald=false,bHideHelmet=false,bValidCustomAssembly=false,bHalfHelmet=false,nGenderTypeId=853,HeadFlairId=0,SuitFlairId=0,JetpackTrailId=0,DyeList=0,DyeList[1]=0,DyeList[2]=0,DyeList[3]=0,DyeList[4]=0)
	c_CharacterList[3]=(SuitMeshId=1752,HeadMeshId=1605,HairMeshId=1757,HelmetMeshId=-1,SkinToneParameterId=2,SkinRaceParameterId=0,EyeColorParameterId=8,bBald=false,bHideHelmet=false,bValidCustomAssembly=false,bHalfHelmet=false,nGenderTypeId=853,HeadFlairId=0,SuitFlairId=0,JetpackTrailId=0,DyeList=0,DyeList[1]=0,DyeList[2]=0,DyeList[3]=0,DyeList[4]=0)
	c_CharacterList[4]=(SuitMeshId=1752,HeadMeshId=1605,HairMeshId=1757,HelmetMeshId=-1,SkinToneParameterId=2,SkinRaceParameterId=0,EyeColorParameterId=8,bBald=false,bHideHelmet=false,bValidCustomAssembly=false,bHalfHelmet=false,nGenderTypeId=853,HeadFlairId=0,SuitFlairId=0,JetpackTrailId=0,DyeList=0,DyeList[1]=0,DyeList[2]=0,DyeList[3]=0,DyeList[4]=0)
	c_CharacterList[5]=(SuitMeshId=1752,HeadMeshId=1605,HairMeshId=1757,HelmetMeshId=-1,SkinToneParameterId=2,SkinRaceParameterId=0,EyeColorParameterId=8,bBald=false,bHideHelmet=false,bValidCustomAssembly=false,bHalfHelmet=false,nGenderTypeId=853,HeadFlairId=0,SuitFlairId=0,JetpackTrailId=0,DyeList=0,DyeList[1]=0,DyeList[2]=0,DyeList[3]=0,DyeList[4]=0)
	c_CharacterList[6]=(SuitMeshId=1752,HeadMeshId=1605,HairMeshId=1757,HelmetMeshId=-1,SkinToneParameterId=2,SkinRaceParameterId=0,EyeColorParameterId=8,bBald=false,bHideHelmet=false,bValidCustomAssembly=false,bHalfHelmet=false,nGenderTypeId=853,HeadFlairId=0,SuitFlairId=0,JetpackTrailId=0,DyeList=0,DyeList[1]=0,DyeList[2]=0,DyeList[3]=0,DyeList[4]=0)
	c_CharacterList[7]=(SuitMeshId=1752,HeadMeshId=1605,HairMeshId=1757,HelmetMeshId=-1,SkinToneParameterId=2,SkinRaceParameterId=0,EyeColorParameterId=8,bBald=false,bHideHelmet=false,bValidCustomAssembly=false,bHalfHelmet=false,nGenderTypeId=853,HeadFlairId=0,SuitFlairId=0,JetpackTrailId=0,DyeList=0,DyeList[1]=0,DyeList[2]=0,DyeList[3]=0,DyeList[4]=0)
	c_CharacterDeviceList[0]=(BackpackMeshId=-1,InHandDeviceMeshId=-1,InHandAnimSetDeviceId=-1,InHandLeftHandDeviceMeshId=-1,InHandLeftHandDeviceAnimSetId=0,LeftHandDeviceSocketName=CSO_LHand_01)
	c_CharacterDeviceList[1]=(BackpackMeshId=-1,InHandDeviceMeshId=-1,InHandAnimSetDeviceId=-1,InHandLeftHandDeviceMeshId=-1,InHandLeftHandDeviceAnimSetId=0,LeftHandDeviceSocketName=CSO_LHand_01)
	c_CharacterDeviceList[2]=(BackpackMeshId=-1,InHandDeviceMeshId=-1,InHandAnimSetDeviceId=-1,InHandLeftHandDeviceMeshId=-1,InHandLeftHandDeviceAnimSetId=0,LeftHandDeviceSocketName=CSO_LHand_01)
	c_CharacterDeviceList[3]=(BackpackMeshId=-1,InHandDeviceMeshId=-1,InHandAnimSetDeviceId=-1,InHandLeftHandDeviceMeshId=-1,InHandLeftHandDeviceAnimSetId=0,LeftHandDeviceSocketName=CSO_LHand_01)
	c_CharacterDeviceList[4]=(BackpackMeshId=-1,InHandDeviceMeshId=-1,InHandAnimSetDeviceId=-1,InHandLeftHandDeviceMeshId=-1,InHandLeftHandDeviceAnimSetId=0,LeftHandDeviceSocketName=CSO_LHand_01)
	c_CharacterDeviceList[5]=(BackpackMeshId=-1,InHandDeviceMeshId=-1,InHandAnimSetDeviceId=-1,InHandLeftHandDeviceMeshId=-1,InHandLeftHandDeviceAnimSetId=0,LeftHandDeviceSocketName=CSO_LHand_01)
	c_CharacterDeviceList[6]=(BackpackMeshId=-1,InHandDeviceMeshId=-1,InHandAnimSetDeviceId=-1,InHandLeftHandDeviceMeshId=-1,InHandLeftHandDeviceAnimSetId=0,LeftHandDeviceSocketName=CSO_LHand_01)
	c_CharacterDeviceList[7]=(BackpackMeshId=-1,InHandDeviceMeshId=-1,InHandAnimSetDeviceId=-1,InHandLeftHandDeviceMeshId=-1,InHandLeftHandDeviceAnimSetId=0,LeftHandDeviceSocketName=CSO_LHand_01)
}