/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIOmegaMenu.uc
 * 
 * Stats:
 *	Constants:1
 *	Enums:1
 *	Structs:1
 *	Properties:9
 *	Functions:8
 *
 *******************************************************************************/
class TgUIOmegaMenu extends TgUISceneDriver
	native;

const NUM_OMEGA_PANELS = 2;

enum eOmegaPanels
{
	OMEGA_PANEL_ALERT,
	OMEGA_PANEL_TITLE,
	OMEGA_PANEL_MAX
};

struct native sOmegaAlertStruct
{
	var UIPanel m_AlertPanel;
	var UILabel m_AlertLabel;
	var UIPanel m_UseMessagePanel;
	var UILabel m_UseMessageLabel;

	structdefaultproperties
	{
		m_AlertPanel=none
		m_AlertLabel=none
		m_UseMessagePanel=none
		m_UseMessageLabel=none
	}
};

var UISafeRegionPanel m_AspectPanel;
var UILabel m_OmegaLabel;
var UIPanel m_OmegaPanel[2];
var sOmegaAlertStruct m_OmegaAlert[2];
var int m_nOmegaMode;
var int m_nOmegaId;
var int m_nOmegaParentId;
var int m_nUseMessageId;
var bool m_bVisible;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native noexport function PopulateOmegaWidgets(int omegaId, optional int omegaMode)
{
	omegaMode = 0;	
}

native noexport function TriggerOmegaAlert(optional bool bForced)
{
	bForced = false;
}

native function SetOmegaVisibility(bool bVisible);
native noexport function SetUseMessage(int msgId, optional string vendorName)
{
	vendorName = "";	
}

native noexport function string GetUseMessage(int msgId, optional string vendorName)
{
	vendorName = "";	
}

event FixupWidgetsUC();

defaultproperties
{
	m_bVisible=true
	m_bCloseChildrenOnClose=false
}