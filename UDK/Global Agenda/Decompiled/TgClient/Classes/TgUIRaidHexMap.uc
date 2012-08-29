/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIRaidHexMap.uc
 * 
 * Stats:
 *	Constants:4
 *	Structs:3
 *	Properties:24
 *	Functions:15
 *
 *******************************************************************************/
class TgUIRaidHexMap extends TgUISceneDriver
	native;

const MAX_HEXES = 61;
const MAX_TEAMS = 6;
const HEX_POLL_FREQUENCY = 120;
const NUM_TAB_PANELS = 4;

struct native MissionDelayStruct
{
	var UIPanel MissionDelayPanel;
	var UILabel MissionDelayLabel;
	var UILabel MissionTimeLabel;
	var int nBaseWorldTime;
	var int nTimeRemaining;

	structdefaultproperties
	{
		MissionDelayPanel=none
		MissionDelayLabel=none
		MissionTimeLabel=none
		nBaseWorldTime=0
		nTimeRemaining=0
	}
};

struct native ButtonStruct
{
	var UIButton bsButton;
	var UILabel bsLabel;

	structdefaultproperties
	{
		bsButton=none
		bsLabel=none
	}
};

struct native RaidControlPanelStruct
{
	var UIPanel rcpContainerPanel;
	var UIImage rcpClassIcon;
	var UILabel rcpNameLabel;
	var UILabel rcpTeamNumber;
	var ButtonStruct rcpLaunchButtonStruct;
	var ButtonStruct rcpReturnButtonStruct;

	structdefaultproperties
	{
		rcpContainerPanel=none
		rcpClassIcon=none
		rcpNameLabel=none
		rcpTeamNumber=none
		rcpLaunchButtonStruct=(bsButton=none,bsLabel=none)
		rcpReturnButtonStruct=(bsButton=none,bsLabel=none)
	}
};

var sTabButtonStruct m_TabStruct[4];
var TgUIHexWidget_Raid m_pHexWidget;
var UIPanel m_RaidTimePanel;
var UILabel m_RaidTimeLabel;
var UILabel m_RaidTimeHeader;
var UILabel m_HexInfoLabel;
var UILabel m_HexTypeLabel;
var UILabel m_HexBonusLabel;
var UILabel m_TeamLeaders[6];
var UILabel m_TeamCount[6];
var UIPanel m_HexInfoPanel;
var UIPanel m_BaseInfoPanel;
var UILabel m_RaidLeaderLabel;
var MissionDelayStruct m_MissionDelay;
var bool m_bIsTeamLead;
var int m_eRaidPhase;
var int m_nCharId;
var UIButton m_CloseButton;
var UIButton m_wRemoveButton;
var UIButton m_wPromoteButton;
var UIButton m_wLeaveButton;
var int m_nCachedRaidHexUpdateCount;
var RaidControlPanelStruct m_ControlPanelStruct;
var int m_nTeamUpdateSeq;

native function PostOpenScene();
native function PreCloseScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function bool OnSceneKey(const out InputEventParameters EventParms);
native function UpdateInfoPanel();
native function bool OnLaunchClickDelegate(const out InputEventParameters EventParms);
native function bool OnReturnDelegate(const out InputEventParameters EventParms);
native function bool OnCloseDelegate(const out InputEventParameters EventParms);
native function bool OnSceneLeaveDelegate(const out InputEventParameters EventParms);
native function bool OnSceneTeamDelegate(const out InputEventParameters EventParms);
native function bool OnSceneDetailDelegate(const out InputEventParameters EventParms);
native function bool OnSceneCargoDelegate(const out InputEventParameters EventParms);
native function bool OnSceneRaidDelegate(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	local int I;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneKey;
	ObjectConstToken-ObjectConstToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.ObjectConstToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())	
	@NULL(423886848)
	m_ControlPanelStruct.rcpLaunchButtonStruct.bsButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnLaunchClickDelegate != ObjectConstToken(ArgumentOutOfRangeException);
		ObjectConstToken(ArgumentOutOfRangeException) != @NULL(16842752);		
		@NULL(423886848)
		m_wLeaveButton
		// BlockSize:3072
		switch(@NULL(-54271))
		{
			OnSceneLeaveDelegate != @NULL(-100195072);
			J0xb0:

			@NULL(369372160)
			// End:0x102 Loop:False
			if(m_TabStruct[I].m_SearchTabButton != none)
			{
				m_TabStruct[I].m_SearchTabButton.__OnRawInputKey__Delegate = OnSceneTeamDelegate;
			}
			m_TabStruct[I].m_DetailTabButton;
			none
			)
			m_TabStruct[I].m_DetailTabButton.__OnRawInputKey__Delegate = OnSceneDetailDelegate;
			m_TabStruct[I].m_CargoTabButton;
			none
			)
			m_TabStruct[I].m_CargoTabButton.__OnRawInputKey__Delegate = OnSceneCargoDelegate;
			m_TabStruct[I].m_ManageTabButton;
			none
			)
			m_TabStruct[I].m_ManageTabButton.__OnRawInputKey__Delegate = OnSceneRaidDelegate;
			m_TabStruct[I].m_MapTabButton;
			none
			)
			++ I;
			// This is an implied JumpToken; Continue!
			goto J0xb0;
}

defaultproperties
{
	m_nCachedRaidHexUpdateCount=-1
}