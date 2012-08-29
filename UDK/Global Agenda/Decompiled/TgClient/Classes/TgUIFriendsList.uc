/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIFriendsList.uc
 * 
 * Stats:
 *	Enums:2
 *	Structs:6
 *	Properties:11
 *	Functions:9
 *
 *******************************************************************************/
class TgUIFriendsList extends TgUISceneDriver
	native;

enum eFLState
{
	ShowFriends,
	ShowIgnores,
	eFLState_MAX
};

enum eFLPopupContext
{
	FLNone,
	FLAdd,
	FLIgnore,
	FLNote,
	eFLPopupContext_MAX
};

struct native sFriendElement
{
	var UIPrefabInstance m_PrefabInstance;
	var UIButton m_OuterButton;
	var UIImage m_ClassIcon;
	var UILabel m_Name;
	var UILabel m_Level;
	var UILabel m_Location;
	var UIImage m_Highlight;
	var int m_Id;
	var bool m_bOnline;

	structdefaultproperties
	{
		m_PrefabInstance=none
		m_OuterButton=none
		m_ClassIcon=none
		m_Name=none
		m_Level=none
		m_Location=none
		m_Highlight=none
		m_Id=0
		m_bOnline=false
	}
};

struct native sFriendButtons
{
	var UIPanel m_OuterPanel;
	var UILabelButton m_AddFriend;
	var UILabelButton m_RemoveFriend;
	var UILabelButton m_SendMessage;
	var UILabelButton m_InviteFriend;
	var UIButton m_IgnoreTab;
	var UILabel m_IgnoreTabLabel;

	structdefaultproperties
	{
		m_OuterPanel=none
		m_AddFriend=none
		m_RemoveFriend=none
		m_SendMessage=none
		m_InviteFriend=none
		m_IgnoreTab=none
		m_IgnoreTabLabel=none
	}
};

struct native sIgnoreButtons
{
	var UIPanel m_OuterPanel;
	var UILabelButton m_IgnorePlayer;
	var UILabelButton m_RemoveIgnorePlayer;
	var UIButton m_FriendsTab;
	var UILabel m_FriendsTabLabel;

	structdefaultproperties
	{
		m_OuterPanel=none
		m_IgnorePlayer=none
		m_RemoveIgnorePlayer=none
		m_FriendsTab=none
		m_FriendsTabLabel=none
	}
};

struct native sFriendNotes
{
	var UILabel m_DisplayLabel;
	var UIButton m_UpdateButton;

	structdefaultproperties
	{
		m_DisplayLabel=none
		m_UpdateButton=none
	}
};

struct native sSelectedFriend
{
	var init string m_Name;
	var int m_Id;
	var int m_SelectedIdx;

	structdefaultproperties
	{
		m_Name=""
		m_Id=0
		m_SelectedIdx=0
	}
};

struct native sFriendPopup
{
	var UIPanel m_PopupPanel;
	var UILabelButton m_ConfirmButton;
	var UILabelButton m_CancelButton;
	var UILabel m_HeaderLabel;
	var UIEditBox m_TextEntryField;
	var UIButton m_BlockerButton;

	structdefaultproperties
	{
		m_PopupPanel=none
		m_ConfirmButton=none
		m_CancelButton=none
		m_HeaderLabel=none
		m_TextEntryField=none
		m_BlockerButton=none
	}
};

var TgUIFriendsList.eFLState m_eState;
var TgUIFriendsList.eFLPopupContext m_ePopupState;
var sSelectedFriend m_SelectedPlayer;
var sFriendButtons m_FriendsButtons;
var sIgnoreButtons m_IgnoreButtons;
var sFriendNotes m_Notes;
var sFriendPopup m_FriendPopup;
var UICheckbox m_HideOfflineCheckbox;
var UIButton m_CloseButton;
var TgUIScrollList m_ScrollList;
var array<sFriendElement> m_FriendsDisplayList;

native function FixupTgUIScene();
native function bool OnFriendButtons(const out InputEventParameters EventParms);
native function bool OnListItemSelected(const out InputEventParameters EventParms);
native function bool OnIgnoreButtons(const out InputEventParameters EventParms);
native function bool OnSceneInputKey(const out InputEventParameters EventParms);
native function bool OnSceneButtons(const out InputEventParameters EventParms);
native function bool OnPopupButtons(const out InputEventParameters EventParms);
native function bool OnPopupSubmitText(UIEditBox ebox, int PlayerIndex);
native function RegisterCallbacks();
