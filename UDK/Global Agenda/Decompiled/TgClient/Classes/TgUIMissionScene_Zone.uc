/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIMissionScene_Zone.uc
 * 
 * Stats:
 *	Properties:11
 *	Functions:9
 *
 *******************************************************************************/
class TgUIMissionScene_Zone extends TgUISceneDriver_Tooltip
	native;

var TgPlayerController m_PC;
var UIButton m_CloseButton;
var UIButton m_GlobeTab;
var TgUIMapWidget m_MapWidget;
var UIImage m_MapImage;
var UILabel m_BeaconHelp;
var bool m_bBeaconNetworkActive;
var MaterialInstanceConstant m_IconLocalPlayer;
var MaterialInstanceConstant m_IconTeamPlayer;
var MaterialInstanceConstant m_IconObjective;
var native transient Pointer m_pPortalNetwork;

native function FixupTgUIScene();
native function bool TickTgUIScene();
native function TickVisual(float DeltaTime);
native function PreCloseScene();
native function bool OnSceneKeyDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnMapClickDelegate(const out InputEventParameters EventParms);
native function bool OnTabClickDelegate(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	m_UIScene.__OnRawInputKey__Delegate = OnSceneKeyDelegate;
	@NULL(-54271)[@NULL(201327872)];
	OnCloseButtonDelegate != @NULL(-54271)[@NULL(201327872)];
}

defaultproperties
{
	m_bHookChat=true
}