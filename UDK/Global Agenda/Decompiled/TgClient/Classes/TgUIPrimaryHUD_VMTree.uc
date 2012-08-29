/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_VMTree.uc
 * 
 * Stats:
 *	Constants:1
 *	Properties:6
 *	Functions:7
 *
 *******************************************************************************/
class TgUIPrimaryHUD_VMTree extends Object
	native;

const NUM_VISIBLE_NEXTNODES = 9;

var TgUIPrimaryHUD_Settings m_Settings;
var TgUISceneDriver m_PrimaryScene;
var UIPanel m_BasePanel;
var UILabel m_ActiveNodeLabel;
var UILabel m_NextNodeLabels[9];
var TgVoiceMacroTree m_ActiveTree;

native function TickPrimaryHUDElement(float TimeNow);
native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function PopulateTreeDisplay();
native function ActivateTreeAndUI(TgVoiceMacroTree tree);
native function DeactivateTreeUI();
native function bool HandleKeyInput(name KeyInput);

defaultproperties
{
	begin object name=TgSettings0 class=TgUIPrimaryHUD_Settings 
		m_VisibilityConfigType=VCT_Managed
	object end
	m_Settings=TgSettings0
}