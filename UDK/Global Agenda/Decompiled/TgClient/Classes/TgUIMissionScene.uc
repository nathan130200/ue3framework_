/*******************************************************************************
 * Decompiled by UE Explorer, an application developed by Eliot van Uytfanghe!
 * Path TgClient\Classes\TgUIMissionScene.uc
 * 
 * Stats:
 *	Constants:26
 *	Structs:2
 *	Properties:85
 *	Functions:29
 *
 *******************************************************************************/
class TgUIMissionScene extends TgUISceneDriver_Tooltip
	native
	config(UI);

const NUM_QUEUE_CLASSES = 4;
const GLOBE_MAX = -0.5;
const CLOUD_MAX = -1;
const GLOBE_ROTATION_RATE = -0.00018;
const CLOUD_ROTATION_RATE = -0.0009;
const BONUS_REWARD_EVENT_ID = 1353;
const DEFAULT_SITE_ID = 1;
const FILTER_ON = 2;
const FILTER_OFF = 1;
const NUM_GAME_TYPES = 6;
const MAX_QUEUE_COUNT = 50;
const MISSION_LIST_PAGE_HEIGHT = 10;
const MISSION_LIST_PAGE_HEIGHT_PVE = 6;
const VVG_LOCATION = 160;
const VVG_DIFFICULTY = 116;
const TE_WIN_PVE = 1;
const TE_WIN_ANY = 2;
const TE_LOSE_ANY = 3;
const TE_WIN_MERC = 4;
const TE_WIN_WARZONE = 5;
const TE_WIN_OPEN_ZONE_PVE = 6;
const TE_HOLD_TERRITORY = 10;
const TE_WIN_PVE_MERC = 11;
const TE_LOSE_PVE = 12;
const TE_WIN_ARENA = 14;
const TE_WIN_ARENA_MERC = 15;

struct native GameTypeButtonStruct
{
	var string HexButtonTag;
	var string NameButtonTag;
	var UIButton HexButton;
	var UIButton NameButton;
	var UILabel NameButtonLabel;
	var UILabel TimerLabel;
	var UIButton ConquestTokenIcon;
	var UIButton MercenaryTokenIcon;
	var MaterialInstanceConstant HexMIC;
	var UIImage AlarmFx;

	structdefaultproperties
	{
		HexButtonTag=""
		NameButtonTag=""
		HexButton=none
		NameButton=none
		NameButtonLabel=none
		TimerLabel=none
		ConquestTokenIcon=none
		MercenaryTokenIcon=none
		HexMIC=none
		AlarmFx=none
	}
};

struct native MissionRowStruct
{
	var int Id;
	var UIButton Button;
	var UICheckbox Checkbox;
	var UIImage Icon;
	var UILabel Name;
	var UIButton BriefingButton;
	var UIPanel HoverPanel;
	var UIPanel SelectedPanel;
	var UIButton ConquestTokenIcon;
	var UIButton MercenaryTokenIcon;
	var UIImage AlarmFx;
	var bool bOpen;
	var int nExpires;
	var string sMissionName;
	var int nQueueVideoResID;

	structdefaultproperties
	{
		Id=0
		Button=none
		Checkbox=none
		Icon=none
		Name=none
		BriefingButton=none
		HoverPanel=none
		SelectedPanel=none
		ConquestTokenIcon=none
		MercenaryTokenIcon=none
		AlarmFx=none
		bOpen=false
		nExpires=0
		sMissionName=""
		nQueueVideoResID=0
	}
};

var GameTypeButtonStruct m_GameTypes[6];
var int m_nSelectedGameType;
var int m_nSelectedQueueIndex;
var bool m_bPlayerInQueue;
var bool m_bIsLeaderOrSolo;
var bool m_bPvEUseTeam;
var bool m_bDisableJoin;
var bool m_bPurchased;
var bool m_bSubscribed;
var bool m_bIsConquestTokenLevel;
var bool m_bLastInTeam;
var bool m_bClouds;
var UIImage m_MapImage;
var UIPanel m_ScenarioPanel;
var UIImage m_ScenarioLocked;
var UILabel m_ScenarioPlayerLabel[4];
var UILabel m_ScenarioPlayerCount[4];
var UILabel m_ScenarioActiveLabel;
var UILabel m_ScenarioActiveCount;
var UILabel m_ScenarioName;
var UIImage m_ScenarioImage;
var UIImage m_ScenarioFill;
var UILabel m_ScenarioDescription;
var UIButton m_ScenarioJoin;
var UILabel m_ScenarioJoinLabel;
var MissionRowStruct m_MissionRows[10];
var MissionRowStruct m_DifficultyRows[6];
var MissionRowStruct m_MissionRowsPvE[6];
var int m_nCurrentPage;
var float m_fLastSecondUpdate;
var int m_nHoverQueueIndex;
var const Texture2D m_IconTextures[10];
var const Texture2D m_CurrentQueueTexture;
var UIButton m_SoloButton;
var UIButton m_TeamButton;
var int m_nDifficulty;
var int m_nHoverDifficultyIndex;
var UIPanel m_GlobalMapPanel;
var UIPanel m_MissionListPanel;
var UIPanel m_MissionListPanelPvE;
var sPagingPanel m_MissionListPanelPvEPaging;
var UIButton m_LeaveButton;
var UIButton m_CloseButton;
var SoundCue m_JoinSoundCue;
var SoundCue m_LeaveSoundCue;
var UIButton m_ZoneTab;
var UIButton m_GlobeTab;
var UIPanel m_TabPanel;
var UIPanel m_TabBackground;
var name m_nmBriefingMovie;
var TgPlayerController m_PC;
var int m_nMyLevel;
var UICheckbox m_ControlCheckBox;
var UICheckbox m_BreachCheckBox;
var UICheckbox m_DemolitionCheckBox;
var UICheckbox m_PayloadCheckBox;
var UICheckbox m_ScrambleCheckBox;
var UICheckbox m_BalancedCheckBox;
var UICheckbox m_FullTeamCheckBox;
var UICheckbox m_NoTeamCheckBox;
var UIButton m_BalancedButton;
var UIButton m_FullTeamButton;
var globalconfig int m_nControlSelected;
var globalconfig int m_nBreachSelected;
var globalconfig int m_nDemolitionSelected;
var globalconfig int m_nPayloadSelected;
var globalconfig int m_nScrambleSelected;
var globalconfig int m_nBalancedSelected;
var globalconfig int m_nFullTeamSelected;
var export editinline SkeletalMeshComponent GlobeMeshComp;
var export editinline SkeletalMeshComponent PathsMeshComp;
var TgUISkeletalMeshWidget m_MeshWidget;
var UIPanel m_QueueNamesPanel;
var MaterialInstanceConstant m_GlobeMIC;
var MaterialInstanceConstant m_FlightMIC;
var MaterialInstanceConstant m_PvEMIC;
var MaterialInstanceConstant m_micDefenseActive;
var MaterialInstanceConstant m_micDefenseInActive;
var float m_fGlobeRotation;
var float m_fCloudRotation;
var UIPanel m_HexPanel;
var float m_fInterpStartTick;
var float m_fInterpStartRotation;
var float m_fCloudStartRotation;
var int m_nMapPosition;

native function PostOpenScene();
native function RegisterCallbacks();
native function FixupTgUIScene();
native function bool TickTgUIScene();
native function PostRender();
native function TickVisual(float DeltaTime);
native function UpdateInfoPanel();
native function ShowMissionPage(int nPage);
native function SelectTeamType(UIButton btn);
native function bool OnSceneKeyDelegate(const out InputEventParameters EventParms);
native function bool OnSelectQueueDelegate(const out InputEventParameters EventParms);
native function bool OnJoinQueueDelegate(const out InputEventParameters EventParms);
native function bool OnLeaveQueueDelegate(const out InputEventParameters EventParms);
native function bool OnCloseButtonDelegate(const out InputEventParameters EventParms);
native function bool OnBriefingButtonDelegate(const out InputEventParameters EventParms);
native function bool OnPreferenceChangeDelegate(const out InputEventParameters EventParms);
native function bool OnTabClickDelegate(const out InputEventParameters EventParms);
native function bool OnSelectGameTypeDelegate(const out InputEventParameters EventParms);
native function bool OnSelectTeamTypeDelegate(const out InputEventParameters EventParms);
native function bool OnSelectDifficultyDelegate(const out InputEventParameters EventParms);
native function bool OnLocationNextButton(const out InputEventParameters EventParms);
native function bool OnLocationPrevButton(const out InputEventParameters EventParms);
native noexport function OnButtonStateChangeDelegate(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native noexport function ToolTipDelegate(UIScreenObject Sender, int PlayerIndex, UIState NewlyActiveState, optional UIState PreviouslyActiveState);
native function GetQueueListCallback(int eType);
native function bool CheckStopBriefing(const out InputEventParameters EventParms);
event FixupWidgetsUC()
{
	local int I;

	I = 0;
	// End:0x71 Loop:False
	if(I < 6)
	{
		m_GameTypes[I].HexButton.__OnRawInputKey__Delegate = OnSelectGameTypeDelegate;
		@NULL(1692928).I
		m_GameTypes
		// BlockSize:3072
		switch(@NULL(-54271))
		{
			OnSelectGameTypeDelegate != @NULL(117839360);
		}
		return @NULL(201327872);
		@NULL(-54271)
		OnSceneKeyDelegate != @NULL(-54271)[@NULL(201327872)];
		)
		m_BalancedButton.__NotifyActiveStateChanged__Delegate = ToolTipDelegate;
		@NULL(-54015)[@NULL(201327872)];
		// BlockSize:3072
		ToolTipDelegate != @NULL(-54271)[@NULL(201327872)];
		{
			OnButtonStateChangeDelegate != @NULL(1697024).I;
			// BlockSize:3072
			switch(@NULL(-54271))
			{
				OnBriefingButtonDelegate != @NULL(1697024).I;
				// BlockSize:3072
				switch(@NULL(-54271))
				{
					OnPreferenceChangeDelegate != @NULL(1697024).I;
					// BlockSize:3072
					switch(@NULL(-54015))
					{
						ToolTipDelegate != @NULL(1697024).I;
						// BlockSize:3072
						switch(@NULL(-54015))
						{
							ToolTipDelegate != @NULL(1107695104);
							@NULL(1829184768)
							return I < 6;
							m_MissionRowsPvE[I].Button.__OnRawInputKey__Delegate = OnSelectQueueDelegate;
							@NULL(1697024).I
							m_MissionRowsPvE
							// BlockSize:3072
							switch(@NULL(-54015))
							{
								OnButtonStateChangeDelegate != @NULL(1697024).I;
								// BlockSize:3072
								switch(@NULL(-54271))
								{
									OnBriefingButtonDelegate != @NULL(1697024).I;
									// BlockSize:3072
									switch(@NULL(-54271))
									{
										OnPreferenceChangeDelegate != @NULL(1697024).I;
										// BlockSize:3072
										switch(@NULL(-54015))
										{
											ToolTipDelegate != @NULL(1697024).I;
											// BlockSize:3072
											switch(@NULL(-54015))
											{
												ToolTipDelegate != @NULL(1527125504);
												I = 0;
												// End:0x586 Loop:False
												if(I < 6)
												{
													m_DifficultyRows[I].Button.__OnRawInputKey__Delegate = OnSelectDifficultyDelegate;
													@NULL(1697024).I
													m_DifficultyRows
													// BlockSize:3072
													switch(@NULL(-54015))
													{
														OnButtonStateChangeDelegate != @NULL(1697024).I;
														// BlockSize:3072
														switch(@NULL(-54271))
														{
															OnBriefingButtonDelegate != @NULL(1697024).I;
															// BlockSize:3072
															switch(@NULL(-54271))
															{
																OnPreferenceChangeDelegate != @NULL(1697024).I;
																// BlockSize:3072
																switch(@NULL(-54015))
																{
																	ToolTipDelegate != @NULL(1697024).I;
																	// BlockSize:3072
																	switch(@NULL(-54015))
																	{
																		ToolTipDelegate != @NULL(1946555904);
																	}
																	// End:0x5f7 Loop:False
																	if(I < 6)
																	{
																		m_GameTypes[I].ConquestTokenIcon.__NotifyActiveStateChanged__Delegate = ToolTipDelegate;
																		@NULL(1692928).I
																		m_GameTypes
																		// BlockSize:3072
																		switch(@NULL(-54015))
																		{
																			// BlockSize:2820
																			ToolTipDelegate != @NULL(-1928980992);
																			{
																			}
}

event SetIconButtonDelegate(UIButton btn)
{
	btn.__OnRawInputKey__Delegate = OnSelectQueueDelegate;
}

event SetMissionReturn()
{
	local TgOmegaVolume vol;
	local TgPawn MyPawn;

	MyPawn = GetLocalTgPawn();
	// End:0x67 Loop:False
	if(m_PC != none && (MyPawn != none))
	{
		// End:0x66
		foreach MyPawn.TouchingActors(class'TgOmegaVolume', vol)
		{
			m_PC.ServerMarkSpawnReturn(vol.m_QueueTeleporter);						
		}
	}
}

defaultproperties
{
	m_GameTypes[0]=(HexButtonTag="Hex_SpecialOps",NameButtonTag="Button_gametype_a",HexButton=none,NameButton=none,NameButtonLabel=none,TimerLabel=none,ConquestTokenIcon=none,MercenaryTokenIcon=none,HexMIC=none,AlarmFx=none)
	m_GameTypes[1]=(HexButtonTag="Hex_Mecenary",NameButtonTag="Button_gametype_b",HexButton=none,NameButton=none,NameButtonLabel=none,TimerLabel=none,ConquestTokenIcon=none,MercenaryTokenIcon=none,HexMIC=none,AlarmFx=none)
	m_GameTypes[2]=(HexButtonTag="Hex_Warzone",NameButtonTag="Button_gametype_c",HexButton=none,NameButton=none,NameButtonLabel=none,TimerLabel=none,ConquestTokenIcon=none,MercenaryTokenIcon=none,HexMIC=none,AlarmFx=none)
	m_GameTypes[3]=(HexButtonTag="Hex_Arena",NameButtonTag="Button_gametype_d",HexButton=none,NameButton=none,NameButtonLabel=none,TimerLabel=none,ConquestTokenIcon=none,MercenaryTokenIcon=none,HexMIC=none,AlarmFx=none)
	m_GameTypes[4]=(HexButtonTag="Hex_Conquest",NameButtonTag="Button_gametype_e",HexButton=none,NameButton=none,NameButtonLabel=none,TimerLabel=none,ConquestTokenIcon=none,MercenaryTokenIcon=none,HexMIC=none,AlarmFx=none)
	m_GameTypes[5]=(HexButtonTag="Hex_Defense",NameButtonTag="Button_gametype_f",HexButton=none,NameButton=none,NameButtonLabel=none,TimerLabel=none,ConquestTokenIcon=none,MercenaryTokenIcon=none,HexMIC=none,AlarmFx=none)
	m_nSelectedQueueIndex=-1
	m_bClouds=true
	m_nHoverQueueIndex=-1
	m_IconTextures[0]=Texture2D'GA_Menu_Mission_Map.GametypeIcons.T_GUI_GameType_Control'
	m_IconTextures[1]=Texture2D'GA_Menu_Mission_Map.GametypeIcons.T_GUI_GameType_Breach'
	m_IconTextures[2]=Texture2D'GA_Menu_Mission_Map.GametypeIcons.T_GUI_GameType_Demolition'
	m_IconTextures[3]=Texture2D'GA_Menu_Mission_Map.GametypeIcons.T_GUI_GameType_Payload'
	m_IconTextures[4]=Texture2D'GA_Menu_Mission_Map.GametypeIcons.T_GUI_GameType_Scramble'
	m_CurrentQueueTexture=Texture2D'HUD_A.Missions_GlobalMap.ICON_U_R_N_Here'
	m_JoinSoundCue=SoundCue'SND_B_UI.A_CUE_UI_Click_QueueJoin'
	m_LeaveSoundCue=SoundCue'SND_B_UI.A_CUE_UI_Click_QueueLeave'
	begin object name=GlobeMeshObject class=SkeletalMeshComponent 
		SkeletalMesh=SkeletalMesh'GUI_Globe_MissionMap.SKL_GUI_EarthGlobe_sm'
		Scale3D=(X=1.00,Y=0.01,Z=1.00)
	object end
	GlobeMeshComp=GlobeMeshObject
	begin object name=PathsMeshObject class=SkeletalMeshComponent 
		SkeletalMesh=SkeletalMesh'GUI_Globe_MissionMap.SKL_GUI_flightpaths'
		Scale=1.03
		Scale3D=(X=1.00,Y=0.01,Z=1.00)
	object end
	PathsMeshComp=PathsMeshObject
	m_GlobeMIC=MaterialInstanceConstant'GUI_Globe_MissionMap.MIC_3DGUI_Globe_Controls'
	m_FlightMIC=MaterialInstanceConstant'GUI_Globe_MissionMap.MIC_MissionMap_Flightpaths_PvP'
	m_PvEMIC=MaterialInstanceConstant'GUI_Globe_MissionMap.MIC_MissionMap_Flightpaths_PvE'
	m_micDefenseActive=MaterialInstanceConstant'GA_Menu_Mission_Map.MIC_GUI_GlobalMapHex_Defense'
	m_micDefenseInActive=MaterialInstanceConstant'GA_Menu_Mission_Map.MIC_GUI_GlobalMapHex_Defense_InActive'
	m_bHookChat=true
}