/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIPrimaryHUD_MiniMap.uc
 * 
 * Stats:
 *	Constants:3
 *	Properties:4
 *	Functions:6
 *
 *******************************************************************************/
class TgUIPrimaryHUD_MiniMap extends Object
	native;

const RADARMAP_SIZE_PLAYER = 15;
const RADARMAP_SIZE_ENEMY = 12;
const RADARMAP_SIZE_FRIENDLY = 12;

var TgUIPrimaryHUD_Settings m_Settings;
var TgUILevelMap m_LevelMap;
var UILabel m_MapZoneName;
var TgUISceneDriver m_PrimaryScene;

native function FixupWidgets(UIPanel BasePanel, TgUISceneDriver OwnerScene);
native function FixupWidgetsAsEmbedded(UIScreenObject BaseScreenObject, TgUISceneDriver OwnerScene);
native function TickPrimaryHUDElement(float TimeNow);
native function InitPrimaryHUDElement();
native function Hide(bool Immediate);
native function Show(bool Immediate);

defaultproperties
{
	m_Settings=TgSettings0
}