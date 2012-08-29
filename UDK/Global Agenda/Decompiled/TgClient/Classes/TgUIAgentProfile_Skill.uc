/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIAgentProfile_Skill.uc
 * 
 * Stats:
 *	Constants:3
 *	Structs:7
 *	Properties:14
 *	Functions:13
 *
 *******************************************************************************/
class TgUIAgentProfile_Skill extends TgUIAgentProfile
	native;

const MAX_COL_SKILLS = 4;
const MAX_ROW_SKILLS = 7;
const MAX_TREE_SKILLS = 3;

struct native sSkillGroupName
{
	var int nSkillGroupId;
	var int nSkillGroupNameMsgId;

	structdefaultproperties
	{
		nSkillGroupId=0
		nSkillGroupNameMsgId=0
	}
};

struct native SRankInfo
{
	var int nRank;
	var int nLevelRequired;
	var bool bAutoTrained;
	var string sDescription;
	var init array<init int> EquipEffectGroupList;

	structdefaultproperties
	{
		nRank=0
		nLevelRequired=0
		bAutoTrained=false
		sDescription=""
		EquipEffectGroupList=none
	}
};

struct native SSkillInfo
{
	var int nSkillGroupId;
	var int nSkillId;
	var int nCategory;
	var string sName;
	var string sDescription;
	var int nNbrOfRanks;
	var int nRankCurrent;
	var int nRankOriginal;
	var int nNbrOfATRanks;
	var int nLocX;
	var int nLocY;
	var int nIconId;
	var int nPrereqSkillId;
	var int nPrereqSkillPoints;
	var int nPrereqGroupPoints;
	var array<SRankInfo> Ranks;
	var bool bLockedPrereqSkill;
	var bool bLockedLevel;
	var bool bLockedGroup;

	structdefaultproperties
	{
		nSkillGroupId=0
		nSkillId=0
		nCategory=0
		sName=""
		sDescription=""
		nNbrOfRanks=0
		nRankCurrent=0
		nRankOriginal=0
		nNbrOfATRanks=0
		nLocX=0
		nLocY=0
		nIconId=0
		nPrereqSkillId=0
		nPrereqSkillPoints=0
		nPrereqGroupPoints=0
		Ranks=none
		bLockedPrereqSkill=false
		bLockedLevel=false
		bLockedGroup=false
	}
};

struct native SSkillTreeInfo
{
	var init array<init SSkillInfo> SkillInfoData;
	var int nSkillGroupId;
	var string sSkillGroupName;
	var int nPointsSpent;
	var int nPointsAT;

	structdefaultproperties
	{
		SkillInfoData=none
		nSkillGroupId=0
		sSkillGroupName=""
		nPointsSpent=0
		nPointsAT=0
	}
};

struct native SSkill
{
	var UIPanel SkillPanel;
	var UIPanel ArrowAvailPanel;
	var UIPanel ArrowUnavailPanel;
	var UIImage ArrowReferenceImage;
	var UIImage HasChildAvailImage;
	var UIImage HasChildUnavailImage;
	var UILabel PointsLabel;
	var UIButton IconButton;
	var MaterialInstanceConstant IconMIC;
	var int nSkillIdReference;

	structdefaultproperties
	{
		SkillPanel=none
		ArrowAvailPanel=none
		ArrowUnavailPanel=none
		ArrowReferenceImage=none
		HasChildAvailImage=none
		HasChildUnavailImage=none
		PointsLabel=none
		IconButton=none
		IconMIC=none
		nSkillIdReference=0
	}
};

struct native SSkillTreeRow
{
	var UIPanel RowParentPanel;
	var SSkill Skills[4];

	structdefaultproperties
	{
		RowParentPanel=none
		Skills[0]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0)
		Skills[1]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0)
		Skills[2]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0)
		Skills[3]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0)
	}
};

struct native SSkillTreePanel
{
	var UILabel PtsAllocLabel;
	var SSkillTreeRow SkillRows[7];
	var UIPanel TreePanel;
	var int SkillGroupId;
	var UILabel TreeNameLabel;
	var UIImage TreeBackground;

	structdefaultproperties
	{
		PtsAllocLabel=none
		SkillRows[0]=(RowParentPanel=none,Skills=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[1]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[2]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[3]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0))
		SkillRows[1]=(RowParentPanel=none,Skills=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[1]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[2]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[3]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0))
		SkillRows[2]=(RowParentPanel=none,Skills=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[1]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[2]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[3]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0))
		SkillRows[3]=(RowParentPanel=none,Skills=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[1]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[2]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[3]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0))
		SkillRows[4]=(RowParentPanel=none,Skills=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[1]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[2]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[3]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0))
		SkillRows[5]=(RowParentPanel=none,Skills=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[1]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[2]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[3]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0))
		SkillRows[6]=(RowParentPanel=none,Skills=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[1]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[2]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0),Skills[3]=(SkillPanel=none,ArrowAvailPanel=none,ArrowUnavailPanel=none,ArrowReferenceImage=none,HasChildAvailImage=none,HasChildUnavailImage=none,PointsLabel=none,IconButton=none,IconMIC=none,nSkillIdReference=0))
		TreePanel=none
		SkillGroupId=0
		TreeNameLabel=none
		TreeBackground=none
	}
};

var SSkillTreeInfo m_SkillTreeInfoData[3];
var array<SSkillTreePanel> m_SkillTreeControls;
var UIButton m_ResetButton;
var UIButton m_ResetAllButton;
var UIButton m_SaveButton;
var TgPlayerController m_PC;
var int m_nCurrentLevel;
var int m_nTotalPoints;
var int m_nTotalPointsRemaining;
var bool m_IsDirty;
var bool m_bReceivedData;
var Material m_IconMaterialParent;
var UILabel m_PointsTotalLabel;
var UILabel m_FeedbackLabel;

native function bool TickTgUIScene();
native function FixupTgUIScene();
native function PreCloseScene();
native function PostOpenScene();
native function bool IsReadOnlyMode();
native function bool OnSaveDelegate(const out InputEventParameters EventParms);
native function bool OnResetDelegate(const out InputEventParameters EventParms);
native function bool OnResetAllDelegate(const out InputEventParameters EventParms);
native function bool OnSkillButtonDelegate(const out InputEventParameters EventParms);
native noexport function OnSkillButtonStateChangeDelegate(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function bool ValidateRespecSkillFeature();
event FixupWidgetsUC()
{
	local int I, J, nTreeSize, Idx;

	super.FixupWidgetsUC();
	// End:0x61 Loop:False
	if(IsReadOnlyMode() == false)
	{
		m_SaveButton.__OnRawInputKey__Delegate = OnSaveDelegate;		
		@NULL(201327872)
		@NULL(-54271)
		OnResetDelegate != ;
		@NULL(-54271)
		OnResetAllDelegate != @NULL(-1895746048);
	}
	@NULL(-1426059520)	
	@NULL(1594303744)
	@NULL(195756182)
	@NULL(195821568)
	@NULL(988672)
	 + @NULL(1426531584);
	@NULL(369568768)
	J = 0;
	// End:0x14b Loop:False
	if(J < 4)
	{
		m_SkillTreeControls[Idx].SkillRows[I].Skills[J].IconButton.__NotifyActiveStateChanged__Delegate = OnSkillButtonStateChangeDelegate;		
		@NULL(751616)
		@NULL(1703936)
		 % @NULL(192492800);
		@NULL(1703936)
		 + @NULL(192951552);
		@NULL(1048832)
		 * @NULL(193921280);
		@NULL(-54271)
		OnSkillButtonDelegate != @NULL(-1660545536);
	}
	@NULL(-1979312640)
}

event RequestPlayersSkillsFromServer()
{
	m_PlayerPawn.SendCharacterSkillMarshal();
}

defaultproperties
{
	m_IconMaterialParent=Material'HUD_A.MAT_GUI_HUD_DeviceSlotA'
}