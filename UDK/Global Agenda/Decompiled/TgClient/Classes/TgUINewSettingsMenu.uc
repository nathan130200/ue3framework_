/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUINewSettingsMenu.uc
 * 
 * Stats:
 *	Functions:5
 *
 *******************************************************************************/
class TgUINewSettingsMenu extends TgUISceneDriver
	native;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function FixupWidgets();
native function PopulateWidgets();
event FixupWidgetsUC();

defaultproperties
{
	m_bEscapeKeyCloses=true
}