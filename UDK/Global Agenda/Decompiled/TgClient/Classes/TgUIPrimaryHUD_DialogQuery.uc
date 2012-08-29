/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_DialogQuery.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:1
 *	Properties:9
 *	Functions:6
 *
 *******************************************************************************/
class TgUIPrimaryHUD_DialogQuery extends Object
	native;

const TIME_TO_SHOW_INVITE = 30;

enum HUDDialogType
{
	DialogInviteToTeam,
	DialogInviteToAgency,
	HUDDialogType_MAX
};

var TgUIPrimaryHUD_Settings m_Settings;
var bool m_bActive;
var bool m_bUseInstigator;
var UILabel m_DialogText;
var UIImage m_BackingImage;
var string m_sInstigator;
var float m_fDialogTime;
var TgUISceneDriver m_PrimaryScene;
var TgUIPrimaryHUD_DialogQuery.HUDDialogType m_eDialogType;

native function TickPrimaryHUDElement(float TimeNow);
native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function ShowDialog(string sDialogText, float TimeNow);
native function HideDialog();
event SetDialogType(TgUIPrimaryHUD_DialogQuery.HUDDialogType eType)
{
	m_eDialogType = eType;
}

defaultproperties
{
	m_Settings=TgSettings0
}