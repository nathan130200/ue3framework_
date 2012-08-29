/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUINavScene.uc
 * 
 * Stats:
 *	Structs:1
 *	Properties:5
 *	Functions:14
 *
 *******************************************************************************/
class TgUINavScene extends TgUISceneDriver
	native;

struct native sNavDisplay
{
	var UIPrefabInstance PrefabInstance;
	var UIButton Button;
	var UIImage Highlight;
	var UIImage Icon;
	var UILabel Label;
	var UILabel Description;
	var TgPointOfInterest POI;

	structdefaultproperties
	{
		PrefabInstance=none
		Button=none
		Highlight=none
		Icon=none
		Label=none
		Description=none
		POI=none
	}
};

var TgUIScrollList m_ScrollList;
var init array<init sNavDisplay> m_ScrollListMembers;
var TgPointOfInterest m_SelectedPOI;
var UIButton m_CloseButton;
var UIButton m_ShowPathButton;

native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function bool OnSceneKey(const out InputEventParameters EventParms);
native function BuildPOIList();
native function bool SelectByButton(UIButton Button);
native function bool Select(int nIndex);
native function UpdateHighlight();
native function ShowPathToSelected();
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneKey;
	@NULL(-54271)[@NULL(201327872)];
	OnCloseButton != @NULL(-54271)[@NULL(201327872)];
}

event SetRawInputKeyForList(UIButton Button)
{
	// End:0x24 Loop:False
	if(Button != none)
	{
		Button.__OnRawInputKey__Delegate = OnSelect;
	}
}

function bool OnCloseButton(const out InputEventParameters EventParms)
{
	// End:0x60 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		CloseTgUIScene();
		return true;
	}
}

function bool OnSelect(const out InputEventParameters EventParms)
{
	// End:0x79 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)))
	{
		SelectByButton(UIButton(EventParms.UIObjectReference));
		return true;
	}
	return false;
}

function bool OnShowPath(const out InputEventParameters EventParms)
{
	// End:0x77 Loop:False
	if(EventParms.InputKeyName == 'LeftMouseButton' && (EventParms.EventType == 0 || (EventParms.EventType == 3)) && (m_SelectedPOI != none))
	{
		ShowPathToSelected();
		CloseTgUIScene();
		return true;
	}
	return false;
}
