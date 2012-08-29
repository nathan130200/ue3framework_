/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIRaidMenu.uc
 * 
 * Stats:
 *	Constants:3
 *	Structs:4
 *	Properties:23
 *	Functions:17
 *
 *******************************************************************************/
class TgUIRaidMenu extends TgUISceneDriver
	native;

const RM_MAX_MEMBER_COUNT = 12;
const RM_MAX_TEAM_COUNT = 6;
const NUM_TAB_PANELS = 4;

struct native MemberStruct
{
	var UIButton MemberButton;
	var UIPanel MemberPanel;
	var UIImage ClassIconImage;
	var UILabel MemberNameLabel;
	var UIImage SelectedImage;
	var UIImage TeamLeadImage;
	var UIImage RaidLeadImage;
	var int nMemberIndex;
	var int nTeamIndex;
	var int nTaskTeamNum;
	var int nCharId;
	var int nProfileId;
	var bool bIsTeamLead;

	structdefaultproperties
	{
		MemberButton=none
		MemberPanel=none
		ClassIconImage=none
		MemberNameLabel=none
		SelectedImage=none
		TeamLeadImage=none
		RaidLeadImage=none
		nMemberIndex=0
		nTeamIndex=0
		nTaskTeamNum=0
		nCharId=0
		nProfileId=0
		bIsTeamLead=false
	}
};

struct native RaidTeamStruct
{
	var UIPanel TeamPanel;
	var UILabel TeamLabel;
	var UILabel TeamNumberLabel;
	var UIImage TeamGraphicImage;
	var UIButton TeamButton;
	var UIPanel TeamMemberPanel;
	var MemberStruct Members[12];
	var int nTeamIndex;
	var int nTaskTeamNum;

	structdefaultproperties
	{
		TeamPanel=none
		TeamLabel=none
		TeamNumberLabel=none
		TeamGraphicImage=none
		TeamButton=none
		TeamMemberPanel=none
		Members[0]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[1]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[2]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[3]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[4]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[5]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[6]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[7]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[8]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[9]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[10]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		Members[11]=(MemberButton=none,MemberPanel=none,ClassIconImage=none,MemberNameLabel=none,SelectedImage=none,TeamLeadImage=none,RaidLeadImage=none,nMemberIndex=0,nTeamIndex=0,nTaskTeamNum=0,nCharId=0,nProfileId=0,bIsTeamLead=false)
		nTeamIndex=0
		nTaskTeamNum=0
	}
};

struct native TotalAgentsStruct
{
	var UIPanel TotalAgentsPanel;
	var UILabel TotalAgentsLabel;
	var UILabel TotalNumberLabel;

	structdefaultproperties
	{
		TotalAgentsPanel=none
		TotalAgentsLabel=none
		TotalNumberLabel=none
	}
};

struct native SelectedSlot
{
	var int nTeamIndex;
	var int nMemberIndex;

	structdefaultproperties
	{
		nTeamIndex=-1
		nMemberIndex=-1
	}
};

var sTabButtonStruct m_TabStruct[4];
var RaidTeamStruct m_RaidTeams[6];
var MemberStruct m_MovingMember;
var TotalAgentsStruct m_TotalAgentsStruct;
var ButtonStruct m_MoveToBtnStruct;
var ButtonStruct m_PromoteBtnStruct;
var SelectedSlot m_SelectedSlot;
var SelectedSlot m_PickedUpSlot;
var SelectedSlot m_MySlot;
var RaidControlPanelStruct m_ControlPanelStruct;
var UIButton m_CloseButton;
var UIButton m_wRemoveButton;
var UIButton m_wPromoteButton;
var UIButton m_wLeaveButton;
var UILabel m_RaidLeaderLabel;
var UIPanel m_RaidTimePanel;
var UILabel m_RaidTimeLabel;
var UILabel m_RaidTimeHeader;
var TgPawn_Character m_pawn;
var TgPlayerController m_PC;
var int m_nCharId;
var bool m_bIsRaidLead;
var int m_nTeamUpdateSeq;

native function bool OnRaidMemberDelegate(const out InputEventParameters EventParms);
native function bool OnRaidTeamDelegate(const out InputEventParameters EventParms);
native function bool OnMoveToDelegate(const out InputEventParameters EventParms);
native function bool OnSceneInputKeyDelegate(const out InputEventParameters EventParms);
native function bool OnSceneRemoveDelegate(const out InputEventParameters EventParms);
native function bool OnScenePromoteDelegate(const out InputEventParameters EventParms);
native function bool OnSceneLeaveDelegate(const out InputEventParameters EventParms);
native function bool OnCloseDelegate(const out InputEventParameters EventParms);
native function bool OnReturnDelegate(const out InputEventParameters EventParms);
native function bool OnSceneTeamDelegate(const out InputEventParameters EventParms);
native function bool OnSceneDetailDelegate(const out InputEventParameters EventParms);
native function bool OnSceneCargoDelegate(const out InputEventParameters EventParms);
native function bool OnSceneMapDelegate(const out InputEventParameters EventParms);
native function PostOpenScene();
native function FixupTgUIScene();
native function bool TickTgUIScene();
event FixupWidgetsUC()
{
	local int I, J;

	m_UIScene.__OnRawInputKey__Delegate = OnSceneInputKeyDelegate;
	ObjectConstToken-ObjectConstToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.ObjectConstToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())	
	@NULL(423886848)
	m_wRemoveButton
	// BlockSize:3072
	switch(@NULL(-54271))
	{
		OnSceneRemoveDelegate != ObjectConstToken(ArgumentOutOfRangeException);
		@NULL(423886848)
		m_wLeaveButton
		// BlockSize:3072
		switch(@NULL(-54271))
		{
			OnSceneLeaveDelegate != @NULL(470230272);
			@NULL(369503232)
			J = 0;
			// End:0xe8 Loop:False
			if(J < 12)
			{
				m_RaidTeams[I].Members[J].MemberButton.__OnRawInputKey__Delegate = OnRaidMemberDelegate;
				@NULL(-1761208832)
				@NULL(-801826492)
			}
			ObjectConstToken-ObjectConstToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.ObjectConstToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())
			@NULL(436273152)
			I
			m_RaidTeams
			// BlockSize:3072
			switch(@NULL(-54271))
			{
				OnRaidTeamDelegate != @NULL(-2079975936);
				ObjectConstToken-ObjectConstToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.ObjectConstToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())
				@NULL(16842752)
				NativeFunctionToken-ObjectConstToken(System.ArgumentOutOfRangeException: Index was out of range. Must be non-negative and less than the size of the collection.
Parameter name: index
   at UELib.UnrealPackage.GetIndexObject(Int32 objectIndex)
   at UELib.Core.UStruct.UByteCodeDecompiler.ObjectConstToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.FunctionToken.DecompileParms()
   at UELib.Core.UStruct.UByteCodeDecompiler.FunctionToken.DecompileCall(String functionName)
   at UELib.Core.UStruct.UByteCodeDecompiler.NativeFunctionToken.Decompile()
   at UELib.Core.UStruct.UByteCodeDecompiler.Decompile())				
				@NULL(423886848)
				m_ControlPanelStruct.rcpReturnButtonStruct.bsButton
				// BlockSize:3072
				switch(@NULL(-54271))
				{
					OnReturnDelegate != @NULL(-1073273600);
					@NULL(369372160)
					// End:0x1c8 Loop:False
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
					// End:0x2b6 Loop:False
					if(m_TabStruct[I].m_MapTabButton != none)
					{
						m_TabStruct[I].m_MapTabButton.__OnRawInputKey__Delegate = OnSceneMapDelegate;
					}
}

defaultproperties
{
	m_SelectedSlot=(nTeamIndex=-1,nMemberIndex=-1)
	m_PickedUpSlot=(nTeamIndex=-1,nMemberIndex=-1)
	m_MySlot=(nTeamIndex=-1,nMemberIndex=-1)
}