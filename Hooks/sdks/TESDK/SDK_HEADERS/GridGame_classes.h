/*
#############################################################################################
# Tron Evolution (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GridGame_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_INVALID_TEAM_ID                                    255
#define CONST_NUM_TEAM_COLORS                                    4
#define CONST_DEFAULT_3D_STRENGTH                                0.16f
#define CONST_STATS_COLUMN_DISCONNECTS                           7
#define CONST_STATS_COLUMN_GAMES_PLAYED                          6
#define CONST_STATS_COLUMN_POINTS                                5
#define CONST_STATS_COLUMN_ASSISTS                               4
#define CONST_STATS_COLUMN_DEATHS                                3
#define CONST_STATS_COLUMN_KILLS                                 2
#define CONST_STATS_COLUMN_XP                                    1
#define CONST_STATS_COLUMN_RATING                                0
#define CONST_CONTEXT_PRESENCE_PRESENCEGAMEGRID                  3
#define CONST_CONTEXT_PRESENCE_PRESENCEJOINABLE                  2
#define CONST_CONTEXT_PRESENCE_PRESENCESTORY                     1
#define CONST_CONTEXT_PRESENCE_PRESENCEMEMU                      0
#define CONST_STATS_VIEW_BR                                      7
#define CONST_STATS_VIEW_PM                                      5
#define CONST_STATS_VIEW_DM                                      4
#define CONST_STATS_VIEW_TDM                                     3
#define CONST_STATS_VIEW_ELO                                     2
#define CONST_STATS_VIEW_EXP                                     1
#define CONST_PROPERTY_SESSIONID                                 0x20000016
#define CONST_PROPERTY_RATING                                    0x2000000C
#define CONST_PROPERTY_TIMECURRENT                               0x10000018
#define CONST_PROPERTY_TIMELIMIT                                 0x10000017
#define CONST_PROPERTY_DLCFLAGS                                  0x10000015
#define CONST_PROPERTY_DISCONNECTS                               0x10000014
#define CONST_PROPERTY_PRIVATE                                   0x10000013
#define CONST_PROPERTY_CHAPTER                                   0x10000012
#define CONST_PROPERTY_LEVEL                                     0x10000011
#define CONST_PROPERTY_POINTS                                    0x10000010
#define CONST_PROPERTY_ASSISTS                                   0x1000000F
#define CONST_PROPERTY_DEATHS                                    0x1000000E
#define CONST_PROPERTY_KILLS                                     0x1000000D
#define CONST_PROPERTY_SKILLRATINGMIN                            0x10000009
#define CONST_PROPERTY_SKILLRATINGMAX                            0x10000008
#define CONST_PROPERTY_SKILLRATING                               0x10000006
#define CONST_PROPERTY_GAMESPLAYED                               0x10000005
#define CONST_PROPERTY_XPSCORE                                   0x10000004
#define CONST_PROPERTY_NUMPLAYERSMAX                             0x10000003
#define CONST_PROPERTY_NUMPLAYERSMIN                             0x10000002
#define CONST_PROPERTY_NUMPLAYERS                                0x10000001
#define CONST_CONTEXT_MODE_BR                                    5
#define CONST_CONTEXT_MODE_PM                                    4
#define CONST_CONTEXT_MODE_DM                                    3
#define CONST_CONTEXT_MODE_TDM                                   2
#define CONST_CONTEXT_MODE_STORYMODE                             1
#define CONST_CONTEXT_MODE_MP_LOBBY                              0
#define CONST_CONTEXT_MAP                                        4
#define CONST_CONTEXT_MODE                                       3
#define CONST_NUMPASSIVEPOWERS                                   4
#define CONST_NUMREPINV                                          4
#define CONST_DAMAGETRACK_MAX                                    100
#define CONST_MAX_COMBO_CHAIN_LENGTH                             8
#define CONST_ORBITCAM_EXPECTED_VERSION                          2
#define CONST_MAX_CAPTURING_PLAYERS                              10
#define CONST_GAMEEVENT_PLAYER_ENERGYACTOR_HEALTH                1002
#define CONST_GAMEEVENT_PLAYER_WORLD_DEATH                       1001
#define CONST_MAX_PLAYERS                                        10
#define CONST_INVALID_INDEX                                      -1
#define CONST_ANY_GAME_MODE                                      255
#define CONST_ANY_MAP                                            255
#define CONST_STORY_GAME_MODE                                    1
#define CONST_LOBBY_GAME_MODE                                    0
#define CONST_DEFAULT_GAME_MODE                                  1
#define CONST_DEFAULT_RULE_SET                                   0
#define CONST_DEFAULT_PLAYER_SKILL                               1600
#define CONST_MIN_PLAYER_SKILL                                   0
#define CONST_MAX_PLAYER_SKILL                                   3200
#define CONST_INVALID_MAP_INDEX                                  -1
#define CONST_INVALID_CONTROLLER_ID                              255
#define CONST_DEFAULT_MAP_INDEX                                  0
#define CONST_LOBBY_MAP_INDEX                                    0
#define CONST_NUM_GAME_STATS                                     10
#define CONST_MAX_GAME_OPTIONS                                   4
#define CONST_DEBUG_MP                                           FALSE
#define CONST_NET_FLOORDIST_IGNORE                               2.5f
#define CONST_NUM_BITS_PER_INT                                   32
#define CONST_COMPLETED_ACHIEVEMENT_MASK_A                       140
#define CONST_COMPLETED_ACHIEVEMENT_MASK_B                       141
#define CONST_GGAID_Achievement_Start                            800
#define CONST_GCAID_ACHIEVEMENT_ACH                              801
#define CONST_GCAID_ACHIEVEMENT_ACH01                            802
#define CONST_GCAID_ACHIEVEMENT_ACH02                            803
#define CONST_GCAID_ACHIEVEMENT_ACH03                            804
#define CONST_GCAID_ACHIEVEMENT_ACH04                            805
#define CONST_GCAID_ACHIEVEMENT_ACH05                            806
#define CONST_GCAID_ACHIEVEMENT_ACH06                            807
#define CONST_GCAID_ACHIEVEMENT_ACH07                            808
#define CONST_GCAID_ACHIEVEMENT_ACH08                            809
#define CONST_GCAID_ACHIEVEMENT_ACH09                            810
#define CONST_GCAID_ACHIEVEMENT_ACH10                            811
#define CONST_GCAID_ACHIEVEMENT_ACH11                            812
#define CONST_GCAID_ACHIEVEMENT_ACH12                            813
#define CONST_GCAID_ACHIEVEMENT_ACH13                            814
#define CONST_GCAID_ACHIEVEMENT_ACH14                            815
#define CONST_GCAID_ACHIEVEMENT_ACH15                            816
#define CONST_GCAID_ACHIEVEMENT_ACH16                            817
#define CONST_GCAID_ACHIEVEMENT_ACH17                            818
#define CONST_GCAID_ACHIEVEMENT_ACH18                            819
#define CONST_GCAID_ACHIEVEMENT_ACH19                            820
#define CONST_GCAID_ACHIEVEMENT_ACH20                            821
#define CONST_GCAID_ACHIEVEMENT_ACH21                            822
#define CONST_GCAID_ACHIEVEMENT_ACH22                            823
#define CONST_GCAID_ACHIEVEMENT_ACH23                            824
#define CONST_GCAID_ACHIEVEMENT_ACH24                            825
#define CONST_GCAID_ACHIEVEMENT_ACH25                            826
#define CONST_GCAID_ACHIEVEMENT_ACH26                            827
#define CONST_GCAID_ACHIEVEMENT_ACH27                            828
#define CONST_GCAID_ACHIEVEMENT_ACH28                            829
#define CONST_GCAID_ACHIEVEMENT_ACH29                            830
#define CONST_GCAID_ACHIEVEMENT_ACH30                            831
#define CONST_GCAID_ACHIEVEMENT_ACH31                            832
#define CONST_GCAID_ACHIEVEMENT_ACH32                            833
#define CONST_GCAID_ACHIEVEMENT_ACH33                            834
#define CONST_GCAID_ACHIEVEMENT_ACH34                            835
#define CONST_GCAID_ACHIEVEMENT_ACH35                            836
#define CONST_GCAID_ACHIEVEMENT_ACH36                            837
#define CONST_GCAID_ACHIEVEMENT_ACH37                            838
#define CONST_GCAID_ACHIEVEMENT_ACH38                            839
#define CONST_GCAID_ACHIEVEMENT_ACH39                            840
#define CONST_GCAID_ACHIEVEMENT_ACH40                            841
#define CONST_ONLINE_GAME_SEARCH_MinPlayers                      1
#define CONST_ONLINE_GAME_SEARCH_MaxPlayers                      10
#define CONST_ONLINE_GAME_SEARCH_DefaultMinRating                0
#define CONST_ONLINE_GAME_SEARCH_DefaultMaxRating                3200
#define CONST_ONLINE_GAME_SEARCH_AnyDLC                          0x80000000
#define CONST_ONLINE_GAME_SETTING_PingTimeout                    1000000
#define CONST_ONLINE_GAME_SETTING_MaxNumPings                    3
#define CONST_ONLINE_GAME_SETTING_BadPingRTT                     9999000
#define CONST_ONLINE_GAME_SETTING_MinPlayers                     0
#define CONST_ONLINE_GAME_SETTING_MaxPlayers                     10
#define CONST_ONLINE_GAME_SETTING_MinPlayerSlots                 1
#define CONST_ONLINE_GAME_SETTING_MaxPlayerSlots                 10

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GridGame.InterpTrackCollision.ETrackCollisionAction
/*enum ETrackCollisionAction
{
	ETCA_Off                                           = 0,
	ETCA_On                                            = 1,
	ETCA_MAX                                           = 2
};*/

// Enum GridGame.PgActorPlugInConditional.EConditionTestType
/*enum EConditionTestType
{
	ECTT_Tick                                          = 0,
	ECTT_Spawn                                         = 1,
	ECTT_ButtonPress                                   = 2,
	ECTT_InventoryChanged                              = 3,
	ECTT_SkinChanged                                   = 4,
	ECTT_MAX                                           = 5
};*/

// Enum GridGame.PgActorPlugInConditional.EConditionGameModeType
/*enum EConditionGameModeType
{
	ECGMT_AllModes                                     = 0,
	ECGMT_SinglePlayer                                 = 1,
	ECGMT_Multiplayer                                  = 2,
	ECGMT_MAX                                          = 3
};*/

// Enum GridGame.PgActorPlugInConditional.EActorPlugInReplication
/*enum EActorPlugInReplication
{
	EAPIR_SimulatedActivation                          = 0,
	EAPIR_ServerSideActivation                         = 1,
	EAPIR_LocallyControlledActivation                  = 2,
	EAPIR_MAX                                          = 3
};*/

// Enum GridGame.PgSideEffectContainer.SideEffectFireMode
/*enum SideEffectFireMode
{
	SEFM_AllPlayers                                    = 0,
	SEFM_AllOtherPlayers                               = 1,
	SEFM_JustThisPlayer                                = 2,
	SEFM_MAX                                           = 3
};*/

// Enum GridGame.PgActorPlugInModifyCameraScore.AffectedCameras
/*enum AffectedCameras
{
	AFFECT_BY_CAMERA_STYLE                             = 0,
	AFFECT_BY_CAMERA_MAX                               = 1
};*/

// Enum GridGame.PgActorPlugInModifyProperty.EModifyType
/*enum EModifyType
{
	EMT_AssignValue                                    = 0,
	EMT_AddValue                                       = 1,
	EMT_SubValue                                       = 2,
	EMT_MultValue                                      = 3,
	EMT_DivValue                                       = 4,
	EMT_MAX                                            = 5
};*/

// Enum GridGame.PgCriticallyDampedSpring_Float.Integrator
/*enum Integrator
{
	INTEGRATOR_Euler                                   = 0,
	INTEGRATOR_RK4                                     = 1,
	INTEGRATOR_MAX                                     = 2
};*/

// Enum GridGame.PgTeamEnumeration.eTeamAlignment
/*enum eTeamAlignment
{
	TEAMALIGN_MyTeam                                   = 0,
	TEAMALIGN_EnemyTeam                                = 1,
	TEAMALIGN_Neutral                                  = 2,
	TEAMALIGN_MAX                                      = 3
};*/

// Enum GridGame.PgAIAwareness.AIAwarenessState
/*enum AIAwarenessState
{
	AIAS_None                                          = 0,
	AIAS_Low                                           = 1,
	AIAS_Medium                                        = 2,
	AIAS_High                                          = 3,
	AIAS_Maximum                                       = 4,
	AIAS_MAX                                           = 5
};*/

// Enum GridGame.PgCondition.EConditionCompare
/*enum EConditionCompare
{
	EPC_EqualTo                                        = 0,
	EPC_GreaterThan                                    = 1,
	EPC_GreaterThanOrEqualTo                           = 2,
	EPC_LessThan                                       = 3,
	EPC_LessThanOrEqualTo                              = 4,
	EPC_MAX                                            = 5
};*/

// Enum GridGame.PgPlayerCamera.ViewTargetType
/*enum ViewTargetType
{
	VTT_CURRENT                                        = 0,
	VTT_PENDING                                        = 1,
	VTT_MAX                                            = 2
};*/

// Enum GridGame.PgPlayerCamera.CameraListType
/*enum CameraListType
{
	VCS_None                                           = 0,
	VCS_Death                                          = 1,
	VCS_Default                                        = 2,
	VCS_MAX                                            = 3
};*/

// Enum GridGame.PgAnimBehaviorLineup.LineupTarget
/*enum LineupTarget
{
	EnemyTarget                                        = 0,
	LineupTarget_MAX                                   = 1
};*/

// Enum GridGame.PgAnimBehaviorLineup.RotationOption
/*enum RotationOption
{
	SnapRotation                                       = 0,
	SetDesired                                         = 1,
	RotationOption_MAX                                 = 2
};*/

// Enum GridGame.PgPawn.PgMovementMode
/*enum PgMovementMode
{
	PGMM_Normal                                        = 0,
	PGMM_Block                                         = 1,
	PGMM_Sprint                                        = 2,
	PGMM_MAX                                           = 3
};*/

// Enum GridGame.PgPawn.KnockdownState
/*enum KnockdownState
{
	KS_KnockedDown                                     = 0,
	KS_DriveToRecovery                                 = 1,
	KS_Getup                                           = 2,
	KS_MAX                                             = 3
};*/

// Enum GridGame.PgPawn.FootImpactType
/*enum FootImpactType
{
	FIT_Footstep                                       = 0,
	FIT_FootShuffle                                    = 1,
	FIT_FootJumpLand                                   = 2,
	FIT_MAX                                            = 3
};*/

// Enum GridGame.PgPawn.TargetLockState
/*enum TargetLockState
{
	TLS_None                                           = 0,
	TLS_SoftLock                                       = 1,
	TLS_HardLock                                       = 2,
	TLS_MAX                                            = 3
};*/

// Enum GridGame.PgPawn.PgComboActionBranchability
/*enum PgComboActionBranchability
{
	COMBOBRANCH_Invalid                                = 0,
	COMBOBRANCH_Valid                                  = 1,
	COMBOBRANCH_NewTree                                = 2,
	COMBOBRANCH_MAX                                    = 3
};*/

// Enum GridGame.PgPawn.PgComboAction
/*enum PgComboAction
{
	COMBOACTION_None                                   = 0,
	COMBOACTION_Jump                                   = 1,
	COMBOACTION_SmartObject                            = 2,
	COMBOACTION_RangedAttack                           = 3,
	COMBOACTION_Melee                                  = 4,
	COMBOACTION_Block                                  = 5,
	COMBOACTION_PowerAttack                            = 6,
	COMBOACTION_Locomotion                             = 7,
	COMBOACTION_MAX                                    = 8
};*/

// Enum GridGame.PgPawn.MovementBlockedBehavior
/*enum MovementBlockedBehavior
{
	MBB_None                                           = 0,
	MBB_ComboEnd                                       = 1,
	MBB_MAX                                            = 2
};*/

// Enum GridGame.PgGridTypes.EGridGameAchievements
/*enum EGridGameAchievements
{
	EGGA_InvalidAchievement                            = 0,
	EGGA_ACH                                           = 1,
	EGGA_ACH01                                         = 2,
	EGGA_ACH02                                         = 3,
	EGGA_ACH03                                         = 4,
	EGGA_ACH04                                         = 5,
	EGGA_ACH05                                         = 6,
	EGGA_ACH06                                         = 7,
	EGGA_ACH07                                         = 8,
	EGGA_ACH08                                         = 9,
	EGGA_ACH09                                         = 10,
	EGGA_ACH10                                         = 11,
	EGGA_ACH11                                         = 12,
	EGGA_ACH12                                         = 13,
	EGGA_ACH13                                         = 14,
	EGGA_ACH14                                         = 15,
	EGGA_ACH15                                         = 16,
	EGGA_ACH16                                         = 17,
	EGGA_ACH17                                         = 18,
	EGGA_ACH18                                         = 19,
	EGGA_ACH19                                         = 20,
	EGGA_ACH20                                         = 21,
	EGGA_ACH21                                         = 22,
	EGGA_ACH22                                         = 23,
	EGGA_ACH23                                         = 24,
	EGGA_ACH24                                         = 25,
	EGGA_ACH25                                         = 26,
	EGGA_ACH26                                         = 27,
	EGGA_ACH27                                         = 28,
	EGGA_ACH28                                         = 29,
	EGGA_ACH29                                         = 30,
	EGGA_ACH30                                         = 31,
	EGGA_ACH31                                         = 32,
	EGGA_ACH32                                         = 33,
	EGGA_ACH33                                         = 34,
	EGGA_ACH34                                         = 35,
	EGGA_ACH35                                         = 36,
	EGGA_ACH36                                         = 37,
	EGGA_ACH37                                         = 38,
	EGGA_ACH38                                         = 39,
	EGGA_ACH39                                         = 40,
	EGGA_ACH40                                         = 41,
	EGGA_MAX                                           = 42
};*/

// Enum GridGame.PgAnimBehaviorRotation.SnapRotationOption
/*enum SnapRotationOption
{
	NoSnap                                             = 0,
	SnapToRotation                                     = 1,
	SnapToDesired                                      = 2,
	SnapRotationOption_MAX                             = 3
};*/

// Enum GridGame.PgRule.eComparison
/*enum eComparison
{
	C_EqualOrAbove                                     = 0,
	C_EqualOrBelow                                     = 1,
	C_Above                                            = 2,
	C_Below                                            = 3,
	C_Equal                                            = 4,
	C_MAX                                              = 5
};*/

// Enum GridGame.PgRule.eRankOrder
/*enum eRankOrder
{
	RO_Highest                                         = 0,
	RO_Lowest                                          = 1,
	RO_MAX                                             = 2
};*/

// Enum GridGame.PgCameraBase.SocketRetrievalType
/*enum SocketRetrievalType
{
	SRT_Normal                                         = 0,
	SRT_ZUp                                            = 1,
	SRT_MAX                                            = 2
};*/

// Enum GridGame.PgCamera_PgOrbit_Behaviour_RightStickFreeCam.RightStickFreeCamState
/*enum RightStickFreeCamState
{
	RSFCS_Normal                                       = 0,
	RSFCS_ForcedReset                                  = 1,
	RSFCS_MAX                                          = 2
};*/

// Enum GridGame.PgCameraModifier.EPlayMode
/*enum EPlayMode
{
	EPM_Once                                           = 0,
	EPM_Looping                                        = 1,
	EPM_Continuous                                     = 2,
	EPM_MAX                                            = 3
};*/

// Enum GridGame.PgStatThresholdMonitor.EStatTriggerType
/*enum EStatTriggerType
{
	STT_OneShot                                        = 0,
	STT_Always                                         = 1,
	STT_MAX                                            = 2
};*/

// Enum GridGame.PgStatThresholdMonitor.EStatComparisonType
/*enum EStatComparisonType
{
	SCT_Greater                                        = 0,
	SCT_Less                                           = 1,
	SCT_Equal                                          = 2,
	SCT_GreaterOrEqual                                 = 3,
	SCT_LessOrEqual                                    = 4,
	SCT_MAX                                            = 5
};*/

// Enum GridGame.PgConditionVelocity.EVelocityDirectionCondition
/*enum EVelocityDirectionCondition
{
	EVDP_HorizontalAndVertical                         = 0,
	EVDP_Horizontal                                    = 1,
	EVDP_Vertical                                      = 2,
	EVDP_MAX                                           = 3
};*/

// Enum GridGame.PgConditionButtonPress.EButtonState
/*enum EButtonState
{
	EBS_Press                                          = 0,
	EBS_Hold                                           = 1,
	EBS_Release                                        = 2,
	EBS_MAX                                            = 3
};*/

// Enum GridGame.PgConditionCompareDistance.EConditionDistanceCompare
/*enum EConditionDistanceCompare
{
	EPDAC_AllAxis                                      = 0,
	EPDAC_XY                                           = 1,
	EPDAC_ABSZ                                         = 2,
	EPDAC_Z                                            = 3,
	EPDAC_MAX                                          = 4
};*/

// Enum GridGame.PgConditionPawnLastKillerIs.LastKillerType
/*enum LastKillerType
{
	LASTKILLER_None                                    = 0,
	LASTKILLER_Self                                    = 1,
	LASTKILLER_Other                                   = 2,
	LASTKILLER_Someone                                 = 3,
	LASTKILLER_MAX                                     = 4
};*/

// Enum GridGame.PgInterpActor.PgInterpActorBlend
/*enum PgInterpActorBlend
{
	PGBLEND_POPTOLOW                                   = 0,
	PGBLEND_BLENDTOLOW                                 = 1,
	PGBLEND_POPTOHIGH                                  = 2,
	PGBLEND_BLENDTOHIGH                                = 3,
	PGBLEND_None                                       = 4,
	PGBLEND_MAX                                        = 5
};*/

// Enum GridGame.PgEnergyActor.EEnergyActorType
/*enum EEnergyActorType
{
	EEAT_Health                                        = 0,
	EEAT_Energy                                        = 1,
	EEAT_MAX                                           = 2
};*/

// Enum GridGame.PgStatInfo.eStatResetCondition
/*enum eStatResetCondition
{
	SRC_RoundStart                                     = 0,
	SRC_GameStart                                      = 1,
	SRC_Death                                          = 2,
	SRC_MAX                                            = 3
};*/

// Enum GridGame.PgStatInfo.eStatOp
/*enum eStatOp
{
	SO_Add                                             = 0,
	SO_Set                                             = 1,
	SO_MAX                                             = 2
};*/

// Enum GridGame.PgDebugCameraController.DebugCameraControllerState
/*enum DebugCameraControllerState
{
	DCCS_Drive                                         = 0,
	DCCS_Fixed                                         = 1,
	DCCS_MAX                                           = 2
};*/

// Enum GridGame.PgDistanceTravelledStatHandler.ETravelMode
/*enum ETravelMode
{
	TMD_Unknown                                        = 0,
	TMD_Driving                                        = 1,
	TMD_Walking                                        = 2,
	TMD_MAX                                            = 3
};*/

// Enum GridGame.PgOnlineEnumerations.EOnlinePlayerState
/*enum EOnlinePlayerState
{
	EOPS_Idle                                          = 0,
	EOPS_PreGame                                       = 1,
	EOPS_InGame                                        = 2,
	EOPS_PostGame                                      = 3,
	EOPS_Results                                       = 4,
	EOPS_Lobby                                         = 5,
	EOPS_MAX                                           = 6
};*/

// Enum GridGame.PgOnlineEnumerations.EEventBoxMessageType
/*enum EEventBoxMessageType
{
	EBM_Kill_Bike                                      = 0,
	EBM_Kill_Disc                                      = 1,
	EBM_Kill_Bomb                                      = 2,
	EBM_Kill_Heavy                                     = 3,
	EBM_Kill_Corruption                                = 4,
	EBM_Kill_Stasis                                    = 5,
	EBM_Kill_Melee                                     = 6,
	EBM_Kill_Tank                                      = 7,
	EBM_Kill_Other                                     = 8,
	EBM_Kill_Suicide                                   = 9,
	EBM_Bit_Stolen                                     = 10,
	EBM_Bit_Dropped                                    = 11,
	EBM_Bit_Returned                                   = 12,
	EBM_Bit_Captured                                   = 13,
	EBM_Game_Joined                                    = 14,
	EBM_Game_Left                                      = 15,
	EBM_Game_Countdown                                 = 16,
	EBM_PlayerPromoted                                 = 17,
	EBM_Node_Captured                                  = 18,
	EBM_Node_Attacked                                  = 19,
	EBM_TankNode_Captured                              = 20,
	EBM_TankNode_Attacked                              = 21,
	EBM_AutoUpgrade                                    = 22,
	EBM_UpgradeUnlocked                                = 23,
	EBM_AwardKillBonus                                 = 24,
	EBM_AwardXp                                        = 25,
	EBM_TestMessage                                    = 26,
	EBM_MAX                                            = 27
};*/

// Enum GridGame.PgOnlineEnumerations.EGameMode
/*enum EGameMode
{
	CONTEXT_GAME_MODE_MULTIPLAYER                      = 0,
	GAME_MODE_MAX                                      = 1,
	EGameMode_MAX                                      = 2
};*/

// Enum GridGame.PgPlayerPlugInLockOn.ELockOnTargetScan
/*enum ELockOnTargetScan
{
	ELTS_Default                                       = 0,
	ELTS_Left                                          = 1,
	ELTS_Right                                         = 2,
	ELTS_Up                                            = 3,
	ELTS_Down                                          = 4,
	ELTS_MAX                                           = 5
};*/

// Enum GridGame.PgPlayerPlugInLockOn.RelativeRotationType
/*enum RelativeRotationType
{
	RR_PawnRot                                         = 0,
	RR_PawnAccel                                       = 1,
	RR_RawJoy                                          = 2,
	RR_Camera                                          = 3,
	RR_Target                                          = 4,
	RR_MAX                                             = 5
};*/

// Enum GridGame.PgPlayerController.eDifficulty
/*enum eDifficulty
{
	eD_Casual                                          = 0,
	eD_Normal                                          = 1,
	eD_Hard                                            = 2,
	eD_IronMan                                         = 3,
	eD_MAX                                             = 4
};*/

// Enum GridGame.PgPlayerController.PendingAck
/*enum PendingAck
{
	PA_BadMove                                         = 0,
	PA_GoodMove                                        = 1,
	PA_MAX                                             = 2
};*/

// Enum GridGame.PgUnlockSystem.eProcessChangeType
/*enum eProcessChangeType
{
	UNCT_LevelChanged                                  = 0,
	UNCT_ItemPurchased                                 = 1,
	UNCT_MAX                                           = 2
};*/

// Enum GridGame.PgFireController.AIFireControlState
/*enum AIFireControlState
{
	AIFCS_WeaponsHold                                  = 0,
	AIFCS_WeaponsTight                                 = 1,
	AIFCS_WeaponsFree                                  = 2,
	AIFCS_MAX                                          = 3
};*/

// Enum GridGame.PgGFxGameViewportClient.eAutoQuickmatchState
/*enum eAutoQuickmatchState
{
	AQMS_None                                          = 0,
	AQMS_Pending                                       = 1,
	AQMS_InProgress                                    = 2,
	AQMS_MAX                                           = 3
};*/

// Enum GridGame.PgInputLabels.ePgInputControlType
/*enum ePgInputControlType
{
	PGINPUT_CONTROLTYPE_Combat                         = 0,
	PGINPUT_CONTROLTYPE_Vehicle                        = 1,
	PGINPUT_CONTROLTYPE_Tank                           = 2,
	PGINPUT_CONTROLTYPE_MAX                            = 3
};*/

// Enum GridGame.PgInterface.HudDisplay
/*enum HudDisplay
{
	HUD_Off                                            = 0,
	HUD_On                                             = 1,
	HUD_AutoHide                                       = 2,
	HUD_MAX                                            = 3
};*/

// Enum GridGame.PgMPGameInfo.MPKismetEvent
/*enum MPKismetEvent
{
	MPKE_BeginGame                                     = 0,
	MPKE_EndRound                                      = 1,
	MPKE_BeginRound                                    = 2,
	MPKE_EndGame                                       = 3,
	MPKE_MAX                                           = 4
};*/

// Enum GridGame.PgOnline.EOnlineEvent
/*enum EOnlineEvent
{
	OnlineEvent_Login                                  = 0,
	OnlineEvent_CreateGame                             = 1,
	OnlineEvent_JoinGame                               = 2,
	OnlineEvent_QuickMatch_Completed                   = 3,
	OnlineEvent_Leaderboard_Read                       = 4,
	OnlineEvent_Leaderboard_Update                     = 5,
	OnlineEvent_Update_Local_Leaderboard               = 6,
	OnlineEvent_Party_Change                           = 7,
	OnlineEvent_Begin_GameInvite                       = 8,
	OnlineEvent_End_GameInvite                         = 9,
	OnlineEvent_FindSession                            = 10,
	OnlineEvent_FindFriendSession                      = 11,
	OnlineEvent_MAX                                    = 12
};*/

// Enum GridGame.PgOnlineLoginManager.ELoginAttemptResult
/*enum ELoginAttemptResult
{
	LoginAttempt_Cancelled                             = 0,
	LoginAttempt_Failure                               = 1,
	LoginAttempt_Success                               = 2,
	LoginAttempt_NotReqd                               = 3,
	LoginAttempt_MAX                                   = 4
};*/

// Enum GridGame.PgOnlinePlayerList.eVoiceInterfaceDelegate
/*enum eVoiceInterfaceDelegate
{
	VoiceInterface_OnPlayerTalking                     = 0,
	VoiceInterface_OnRecognitionComplete               = 1,
	VoiceInterface_MAX                                 = 2
};*/

// Enum GridGame.PgProjectile.EProjectileImpactBehavior
/*enum EProjectileImpactBehavior
{
	EPIT_Explode                                       = 0,
	EPIT_Stick                                         = 1,
	EPIT_Bounce                                        = 2,
	EPIT_BounceExplode                                 = 3,
	EPIT_PawnExplode                                   = 4,
	EPIT_MAX                                           = 5
};*/

// Enum GridGame.PgSeqAct_AutotestComplete.EAutoTestCompleteStatus
/*enum EAutoTestCompleteStatus
{
	EAutoTestCompleteStatus_Success                    = 0,
	EAutoTestCompleteStatus_Failure                    = 1,
	EAutoTestCompleteStatus_MAX                        = 2
};*/

// Enum GridGame.PgSeqAct_StatMessage.eStatMessages
/*enum eStatMessages
{
	ESTM_None                                          = 0,
	ESTM_MAX                                           = 1
};*/

// Enum GridGame.PgSeqAct_StatMessage.eStats
/*enum eStats
{
	ES_None                                            = 0,
	ES_MAX                                             = 1
};*/

// Enum GridGame.PgSeqAct_HudText.eHudTextPosition
/*enum eHudTextPosition
{
	eHudText_Low_Centre                                = 0,
	eHudText_Top_Centre                                = 1,
	eHudText_Bottom_Centre                             = 2,
	eHudText_MAX                                       = 3
};*/

// Enum GridGame.PgSeqAct_ModifyProperty.eModPropertyOp
/*enum eModPropertyOp
{
	EMPO_SET                                           = 0,
	EMPO_ADD                                           = 1,
	EMPO_SUBTRACT                                      = 2,
	EMPO_MULTIPLY                                      = 3,
	EMPO_DIVIDE                                        = 4,
	EMPO_MAX                                           = 5
};*/

// Enum GridGame.PgStat.eStatUnitType
/*enum eStatUnitType
{
	SUT_None                                           = 0,
	SUT_Distance                                       = 1,
	SUT_Minutes                                        = 2,
	SUT_Seconds                                        = 3,
	SUT_MAX                                            = 4
};*/

// Enum GridGame.PgStat.eStatOps
/*enum eStatOps
{
	SOP_Set                                            = 0,
	SOP_Increment                                      = 1,
	SOP_Decrement                                      = 2,
	SOP_Highest                                        = 3,
	SOP_Lowest                                         = 4,
	SOP_Add                                            = 5,
	SOP_Subtract                                       = 6,
	SOP_MAX                                            = 7
};*/

// Enum GridGame.PgStat.eStatImageWidth
/*enum eStatImageWidth
{
	SIW_Normal                                         = 0,
	SIW_Wide                                           = 1,
	SIW_Tall                                           = 2,
	SIW_MAX                                            = 3
};*/

// Enum GridGame.PgSeqEvent_Death.eKillerCatagory
/*enum eKillerCatagory
{
	EKC_ANY                                            = 0,
	EKC_PLAYER                                         = 1,
	EKC_AI                                             = 2,
	EKC_WORLD                                          = 3,
	EKC_MAX                                            = 4
};*/

// Enum GridGame.PgSeqEvent_Death.eDeceasedCatagory
/*enum eDeceasedCatagory
{
	EDC_ANY                                            = 0,
	EDC_PLAYER                                         = 1,
	EDC_AI                                             = 2,
	EDC_ANYPLAYER                                      = 3,
	EDC_MAX                                            = 4
};*/

// Enum GridGame.PgSideEffect.FallOffType
/*enum FallOffType
{
	FOT_PassOrFail                                     = 0,
	FOT_Linear                                         = 1,
	FOT_Quadratic                                      = 2,
	FOT_MAX                                            = 3
};*/

// Enum GridGame.PgSmartObject.ESmartObjectLineUpType
/*enum ESmartObjectLineUpType
{
	ESOLT_Standard                                     = 0,
	ESOLT_CalcLoc                                      = 1,
	ESOLT_CalcRot                                      = 2,
	ESOLT_CalcBoth                                     = 3,
	ESOLT_MAX                                          = 4
};*/

// Enum GridGame.PgSmartObject.ESmartObjectUseAngleType
/*enum ESmartObjectUseAngleType
{
	ESOUAT_None                                        = 0,
	ESOUAT_SmartObject                                 = 1,
	ESOUAT_LineUp                                      = 2,
	ESOUAT_MAX                                         = 3
};*/

// Enum GridGame.PgSmartObject.ESmartObjectTarget
/*enum ESmartObjectTarget
{
	ESOT_Everyone                                      = 0,
	ESOT_Player                                        = 1,
	ESOT_AI                                            = 2,
	ESOT_MAX                                           = 3
};*/

// Enum GridGame.PgUnlockItem.eUnlockType
/*enum eUnlockType
{
	UNT_Invalid                                        = 0,
	UNT_Disc                                           = 1,
	UNT_DiscPower                                      = 2,
	UNT_Perk                                           = 3,
	UNT_Vehicle                                        = 4,
	UNT_Slot                                           = 5,
	UNT_PlayerUgrade                                   = 6,
	UNT_PlayerSkin                                     = 7,
	UNT_MAX                                            = 8
};*/

// Enum GridGame.PgUnlockItem.eUnlockState
/*enum eUnlockState
{
	UNS_Locked                                         = 0,
	UNS_RecentlyAvailable                              = 1,
	UNS_Available                                      = 2,
	UNS_RecentlyOwned                                  = 3,
	UNS_Owned                                          = 4,
	UNS_Disabled                                       = 5,
	UNS_MAX                                            = 6
};*/

// Enum GridGame.PgUnlockItemDisc.eUnlockDiscType
/*enum eUnlockDiscType
{
	UNDT_Invalid                                       = 0,
	UNDT_HeavyDisc                                     = 1,
	UNDT_StasisDisc                                    = 2,
	UNDT_BombDisc                                      = 3,
	UNDT_CorruptionDisc                                = 4,
	UNDT_MAX                                           = 5
};*/

// Enum GridGame.PgUnlockItemDiscPower.eDiscPowerType
/*enum eDiscPowerType
{
	UNPT_Invalid                                       = 0,
	UNPT_Active                                        = 1,
	UNPT_Passive                                       = 2,
	UNPT_MAX                                           = 3
};*/

// Enum GridGame.PgVehicle.DriverExitAction
/*enum DriverExitAction
{
	DEA_Leave                                          = 0,
	DEA_Hide                                           = 1,
	DEA_Destroy                                        = 2,
	DEA_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GridGame.GridEngine
// 0x0000 (0x0708 - 0x0708)
class UGridEngine : public UGameEngine
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1807 ];

		return pClassPointer;
	};

};

UClass* UGridEngine::pClassPointer = NULL;

// Class GridGame.GridMemcard
// 0x0000 (0x0040 - 0x0040)
class UGridMemcard : public USubsystem
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1808 ];

		return pClassPointer;
	};

};

UClass* UGridMemcard::pClassPointer = NULL;

// Class GridGame.InterpTrackCollision
// 0x0010 (0x006C - 0x005C)
class UInterpTrackCollision : public UInterpTrack
{
public:
	TArray< struct FCollisionTrackKey >                CollisionTrack;                                   		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFireEventsWhenForwards : 1;                      		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bFireEventsWhenBackwards : 1;                     		// 0x0068 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bFireEventsWhenJumpingForwards : 1;               		// 0x0068 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1809 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackCollision::pClassPointer = NULL;

// Class GridGame.InterpTrackInstCollision
// 0x0008 (0x0044 - 0x003C)
class UInterpTrackInstCollision : public UInterpTrackInst
{
public:
	unsigned char                                      Action;                                           		// 0x003C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mCachedCollisionType;                             		// 0x003D (0x0001) [0x0000000000000000]              
	float                                              LastUpdatePosition;                               		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1810 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstCollision::pClassPointer = NULL;

// Class GridGame.PgAltConfig
// 0x0000 (0x003C - 0x003C)
class UPgAltConfig : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1811 ];

		return pClassPointer;
	};

	void LoadAltConfig ( struct FString configName, struct FString altName );
};

UClass* UPgAltConfig::pClassPointer = NULL;

// Class GridGame.PgCommonControllerInterface
// 0x0000 (0x003C - 0x003C)
class UPgCommonControllerInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1812 ];

		return pClassPointer;
	};

};

UClass* UPgCommonControllerInterface::pClassPointer = NULL;

// Class GridGame.PgDamageCauserInterface
// 0x0000 (0x003C - 0x003C)
class UPgDamageCauserInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1813 ];

		return pClassPointer;
	};

};

UClass* UPgDamageCauserInterface::pClassPointer = NULL;

// Class GridGame.PgDamageParamInterface
// 0x0000 (0x003C - 0x003C)
class UPgDamageParamInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1814 ];

		return pClassPointer;
	};

	void OnDamageCaused ( int damageCaused, class AActor* damageVictim, class AActor* DamageCauser );
	class UPgDamageParam* GetCauseDamageParam ( );
};

UClass* UPgDamageParamInterface::pClassPointer = NULL;

// Class GridGame.PgDamageType
// 0x0000 (0x0088 - 0x0088)
class UPgDamageType : public UDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1815 ];

		return pClassPointer;
	};

};

UClass* UPgDamageType::pClassPointer = NULL;

// Class GridGame.PgEventTrackerInterface
// 0x0000 (0x003C - 0x003C)
class UPgEventTrackerInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1816 ];

		return pClassPointer;
	};

	void ClearTrackedEvents ( );
	bool GetTrackedEventInfo ( struct FName EventName, struct FTrackedEventInfo* Info );
	bool CheckForTrackedEvent ( struct FName EventName );
	void TrackEventByName ( struct FName EventName, struct FVector HitNormal );
};

UClass* UPgEventTrackerInterface::pClassPointer = NULL;

// Class GridGame.PgGridProfileSettings
// 0x0000 (0x008C - 0x008C)
class UPgGridProfileSettings : public UOnlineProfileSettings
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1817 ];

		return pClassPointer;
	};

	bool eventHasCompletedAchievement ( unsigned char AchievementId );
	bool eventMarkAchievementAsCompleted ( unsigned char AchievementId, class APgPlayerController* GPC, unsigned long bSaveProfile );
	bool GetProfileSettingValueIdByName ( struct FName SettingName, int* OutValue );
	bool GetProfileSettingValueStringByName ( struct FName SettingName, struct FString* OutValue );
	bool GetProfileSettingValueFloatByName ( struct FName SettingName, float* OutValue );
	bool GetProfileSettingValueIntByName ( struct FName SettingName, int* OutValue );
};

UClass* UPgGridProfileSettings::pClassPointer = NULL;

// Class GridGame.PgGridTypes
// 0x0000 (0x003C - 0x003C)
class UPgGridTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1818 ];

		return pClassPointer;
	};

};

UClass* UPgGridTypes::pClassPointer = NULL;

// Class GridGame.PgHud
// 0x0018 (0x0490 - 0x0478)
class APgHud : public AHUD
{
public:
	unsigned long                                      mShowGammaCalibration : 1;                        		// 0x0478 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                mGammaX;                                          		// 0x047C (0x0004) [0x0000000000000000]              
	int                                                mGammaY;                                          		// 0x0480 (0x0004) [0x0000000000000000]              
	int                                                mGammaXL;                                         		// 0x0484 (0x0004) [0x0000000000000000]              
	int                                                mGammaYL;                                         		// 0x0488 (0x0004) [0x0000000000000000]              
	class UMaterialInterface*                          mGammaMI;                                         		// 0x048C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1819 ];

		return pClassPointer;
	};

	void eventShowGammaCalibration ( unsigned long show, int X, int Y, int Width, int Height );
	void eventPostRender ( );
};

UClass* APgHud::pClassPointer = NULL;

// Class GridGame.PgMailboxInterface
// 0x0000 (0x003C - 0x003C)
class UPgMailboxInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1820 ];

		return pClassPointer;
	};

};

UClass* UPgMailboxInterface::pClassPointer = NULL;

// Class GridGame.PgMailingListInterface
// 0x0000 (0x003C - 0x003C)
class UPgMailingListInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1821 ];

		return pClassPointer;
	};

};

UClass* UPgMailingListInterface::pClassPointer = NULL;

// Class GridGame.PgMailmanNative
// 0x0000 (0x003C - 0x003C)
class UPgMailmanNative : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1822 ];

		return pClassPointer;
	};

};

UClass* UPgMailmanNative::pClassPointer = NULL;

// Class GridGame.PgMaterialInstanceInterface
// 0x0000 (0x003C - 0x003C)
class UPgMaterialInstanceInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1823 ];

		return pClassPointer;
	};

	TArray< class UMaterialInstanceConstant* > GetMaterialInstanceList ( );
	void InitMaterialInstanceList ( );
};

UClass* UPgMaterialInstanceInterface::pClassPointer = NULL;

// Class GridGame.PgObjectPropertyInterface
// 0x0000 (0x003C - 0x003C)
class UPgObjectPropertyInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1824 ];

		return pClassPointer;
	};

};

UClass* UPgObjectPropertyInterface::pClassPointer = NULL;

// Class GridGame.PgPlayerInputConfiguration
// 0x000C (0x0048 - 0x003C)
class UPgPlayerInputConfiguration : public UUIRoot
{
public:
	TArray< struct FUIAxisEmulationDefinition >        AxisEmulationDefinitions;                         		// 0x003C (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1825 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerInputConfiguration::pClassPointer = NULL;

// Class GridGame.PgPlugInInterface
// 0x0000 (0x003C - 0x003C)
class UPgPlugInInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1826 ];

		return pClassPointer;
	};

	void PlugIns ( class UClass* BaseClass, class UPgActorPlugIn** PlugIn );
	bool TriggerInputPlugIns ( unsigned long pressed, struct FName Button );
	void SyncClientPlugIns ( );
	void eventSyncServerPlugIns ( int plugInRep );
	int GetConditionalPlugInField ( );
	void SetConditionalPlugInField ( int plugInRep );
};

UClass* UPgPlugInInterface::pClassPointer = NULL;

// Class GridGame.PgRadialBlurComponent
// 0x0010 (0x00D0 - 0x00C0)
class UPgRadialBlurComponent : public URadialBlurComponent
{
public:
	struct FInterpCurveFloat                           mSpeedBasedBlurScaleCurve;                        		// 0x00C0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1827 ];

		return pClassPointer;
	};

};

UClass* UPgRadialBlurComponent::pClassPointer = NULL;

// Class GridGame.PgRB_ConstraintInstance
// 0x0000 (0x00AC - 0x00AC)
class UPgRB_ConstraintInstance : public URB_ConstraintInstance
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1828 ];

		return pClassPointer;
	};

};

UClass* UPgRB_ConstraintInstance::pClassPointer = NULL;

// Class GridGame.PgRB_StayUprightSetup
// 0x0018 (0x0118 - 0x0100)
class UPgRB_StayUprightSetup : public URB_StayUprightSetup
{
public:
	struct FVector                                     mLocalAnchor1;                                    		// 0x0100 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mLocalAnchor2;                                    		// 0x010C (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1829 ];

		return pClassPointer;
	};

};

UClass* UPgRB_StayUprightSetup::pClassPointer = NULL;

// Class GridGame.PgSimpleMenuMovie
// 0x0000 (0x00BC - 0x00BC)
class UPgSimpleMenuMovie : public UPgGFxMovie
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1830 ];

		return pClassPointer;
	};

	bool eventStart ( unsigned long StartPaused );
};

UClass* UPgSimpleMenuMovie::pClassPointer = NULL;

// Class GridGame.PgStasisEffectInterface
// 0x0000 (0x003C - 0x003C)
class UPgStasisEffectInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1831 ];

		return pClassPointer;
	};

};

UClass* UPgStasisEffectInterface::pClassPointer = NULL;

// Class GridGame.PgTargetableInterface
// 0x0000 (0x003C - 0x003C)
class UPgTargetableInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1832 ];

		return pClassPointer;
	};

	bool CanTarget ( class APawn* thePawn );
	float GetMaxTargetableDist ( );
	float GetMinTargetableDist ( );
};

UClass* UPgTargetableInterface::pClassPointer = NULL;

// Class GridGame.PgActorPlugIn
// 0x0030 (0x006C - 0x003C)
class UPgActorPlugIn : public UObject
{
public:
	class AActor*                                      mOwner;                                           		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UMeshComponent*                              mOwnerMesh;                                       		// 0x0040 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	struct FName                                       mName;                                            		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mActive : 1;                                      		// 0x004C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mAlwaysTick : 1;                                  		// 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mOutputComment : 1;                               		// 0x004C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mLoop : 1;                                        		// 0x004C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	float                                              mTimeActive;                                      		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     mComment;                                         		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mLifeSpan;                                        		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mActivateDelay;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCurrentActivateDelay;                            		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1833 ];

		return pClassPointer;
	};

	void Detach ( );
	void Deactivate ( );
	void Activate ( );
	bool OnDeactivate ( );
	bool OnActivate ( );
};

UClass* UPgActorPlugIn::pClassPointer = NULL;

// Class GridGame.PgActorPlugInActorFactory
// 0x002C (0x0098 - 0x006C)
class UPgActorPlugInActorFactory : public UPgActorPlugIn
{
public:
	class AActor*                                      mSpawnedActor;                                    		// 0x006C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mAttach : 1;                                      		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mCheckSpawnCollision : 1;                         		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mbHardAttach : 1;                                 		// 0x0070 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mbUseRelativeOffset : 1;                          		// 0x0070 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      mbUseRelativeRotation : 1;                        		// 0x0070 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDestroyOnDeactivate : 1;                         		// 0x0070 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	struct FName                                       mAttachName;                                      		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mRelativeOffset;                                  		// 0x007C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mRelativeRotation;                                		// 0x0088 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UActorFactory*                               mFactory;                                         		// 0x0094 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1834 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
};

UClass* UPgActorPlugInActorFactory::pClassPointer = NULL;

// Class GridGame.PgActorPlugInAkSetRTPCValue
// 0x001C (0x0088 - 0x006C)
class UPgActorPlugInAkSetRTPCValue : public UPgActorPlugIn
{
public:
	struct FName                                       mRealTimeParameterControlName;                    		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mNameOfActorPropertyToForward;                    		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mParamPropOwner;                                  		// 0x007C (0x0004) [0x0000000000000000]              
	struct FPointer                                    mParamPropPtr;                                    		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              mLastForwardedValue;                              		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1835 ];

		return pClassPointer;
	};

};

UClass* UPgActorPlugInAkSetRTPCValue::pClassPointer = NULL;

// Class GridGame.PgActorPlugInAkSetState
// 0x0010 (0x007C - 0x006C)
class UPgActorPlugInAkSetState : public UPgActorPlugIn
{
public:
	struct FName                                       mWwiseStateGroup;                                 		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mWwiseStateName;                                  		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1836 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInAkSetState::pClassPointer = NULL;

// Class GridGame.PgActorPlugInAkSetSwitch
// 0x0010 (0x007C - 0x006C)
class UPgActorPlugInAkSetSwitch : public UPgActorPlugIn
{
public:
	struct FName                                       mWwiseSwitchGroup;                                		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mWwiseSwitchName;                                 		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1837 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInAkSetSwitch::pClassPointer = NULL;

// Class GridGame.PgActorPlugInComponent
// 0x0011 (0x007D - 0x006C)
class UPgActorPlugInComponent : public UPgActorPlugIn
{
public:
	class UActorComponent*                             mComponent;                                       		// 0x006C (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       mAttachName;                                      		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mUseTickGroupOverride : 1;                        		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      mTickGroupOverride;                               		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1838 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
};

UClass* UPgActorPlugInComponent::pClassPointer = NULL;

// Class GridGame.PgActorPlugInConditional
// 0x0027 (0x0093 - 0x006C)
class UPgActorPlugInConditional : public UPgActorPlugIn
{
public:
	class UPgCondition*                                mPreconditionData;                                		// 0x006C (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgActorPlugIn*                              mPlugIn;                                          		// 0x0070 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCondition*                                mPostConditionData;                               		// 0x0074 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              mMaxDistanceActivation;                           		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mOffscreenActivation : 1;                         		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              mNextActivateWaitTime;                            		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mNextDeactivateWaitTime;                          		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLastActivateCheckTime;                           		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              mLastDeactivateCheckTime;                         		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned char                                      mActivationReplication;                           		// 0x0090 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      mConditionGameModeType;                           		// 0x0091 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      mConditionTestType;                               		// 0x0092 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1839 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
	void Detach ( );
};

UClass* UPgActorPlugInConditional::pClassPointer = NULL;

// Class GridGame.PgActorPlugInEmitter
// 0x0078 (0x00E4 - 0x006C)
class UPgActorPlugInEmitter : public UPgActorPlugIn
{
public:
	class UParticleSystem*                             mPSTemplate;                                      		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mAttach : 1;                                      		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mUseOwnerTeamColor : 1;                           		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mValidTeamColor : 1;                              		// 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mHiddenSceneCapture : 1;                          		// 0x0070 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      mHiddenSceneCaptureCube : 1;                      		// 0x0070 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	struct FName                                       mAttachName;                                      		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class APgDynamicEmitter*                           mEmitter;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              mPostDeactivateLifeSpan;                          		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mTranslation;                                     		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mRotation;                                        		// 0x0090 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              mScale;                                           		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mParticleSystemTickGroup;                         		// 0x00A0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mDepthPriorityGroup;                              		// 0x00A1 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mFloatParameterName;                              		// 0x00A4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mFloatParameterValue;                             		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mVectorParameterName;                             		// 0x00B0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mVectorParameterValue;                            		// 0x00B8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mColorParameterName;                              		// 0x00C4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      mColorParameterValue;                             		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                mTeamColor;                                       		// 0x00D0 (0x0010) [0x0000000000000000]              
	int                                                mLastLevel;                                       		// 0x00E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1840 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
};

UClass* UPgActorPlugInEmitter::pClassPointer = NULL;

// Class GridGame.PgActorPlugInBeamTrailEmitter
// 0x000C (0x00F0 - 0x00E4)
class UPgActorPlugInBeamTrailEmitter : public UPgActorPlugInEmitter
{
public:
	TArray< class APgDynamicEmitter* >                 mEmitterList;                                     		// 0x00E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1841 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
};

UClass* UPgActorPlugInBeamTrailEmitter::pClassPointer = NULL;

// Class GridGame.PgActorPlugInCameraEmitter
// 0x0000 (0x00E4 - 0x00E4)
class UPgActorPlugInCameraEmitter : public UPgActorPlugInEmitter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1842 ];

		return pClassPointer;
	};

};

UClass* UPgActorPlugInCameraEmitter::pClassPointer = NULL;

// Class GridGame.PgActorPlugInFireSideEffect
// 0x0009 (0x0075 - 0x006C)
class UPgActorPlugInFireSideEffect : public UPgActorPlugIn
{
public:
	class UPgSideEffectContainer*                      mSideEffectContainer;                             		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mbUseOwnerLocationAsEpicenter : 1;                		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      mFireMode;                                        		// 0x0074 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1843 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
};

UClass* UPgActorPlugInFireSideEffect::pClassPointer = NULL;

// Class GridGame.PgActorPlugInLightWall
// 0x002C (0x0098 - 0x006C)
class UPgActorPlugInLightWall : public UPgActorPlugIn
{
public:
	class APgDynamicSMActor*                           mWallArchetype;                                   		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mWallOffset;                                      		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mWallLifeSpan;                                    		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mOverrideVehicleTeamCollisionChannel : 1;         		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mOrientToOwner : 1;                               		// 0x0078 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mInitialWall : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                mTeamCollisionChannel;                            		// 0x007C (0x0004) [0x0000000000000000]              
	struct FVector                                     mLastWallPos;                                     		// 0x0080 (0x000C) [0x0000000000000000]              
	struct FRotator                                    mLastWallRot;                                     		// 0x008C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1844 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInLightWall::pClassPointer = NULL;

// Class GridGame.PgActorPlugInMaterialParam
// 0x00AC (0x0118 - 0x006C)
class UPgActorPlugInMaterialParam : public UPgActorPlugIn
{
public:
	float                                              mBlendTime;                                       		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCurrentBlendTime;                                		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FName                                       mScalarParameterName;                             		// 0x0074 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     mScalarParameterValue;                            		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mScalarParameterValueInitial;                     		// 0x0088 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mScalarParameterCurve;                            		// 0x0094 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mLastScalarParameterValue;                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	class AActor*                                      mScalarParamPropOwner;                            		// 0x00A8 (0x0004) [0x0000000000000000]              
	class AActor*                                      mScalarParamInitialPropOwner;                     		// 0x00AC (0x0004) [0x0000000000000000]              
	struct FPointer                                    mScalarParamPropPtr;                              		// 0x00B0 (0x0004) [0x0000000000000000]              
	struct FPointer                                    mScalarParamInitialPropPtr;                       		// 0x00B4 (0x0004) [0x0000000000000000]              
	float                                              mCurrentScalarBlendValue;                         		// 0x00B8 (0x0004) [0x0000000000000000]              
	struct FName                                       mVectorParameterName;                             		// 0x00BC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                mVectorParameterValue;                            		// 0x00C4 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveQuat                            mVectorParameterCurve;                            		// 0x00D4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                mLastVectorParameterValue;                        		// 0x00E4 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                mCurrentVectorBlendValue;                         		// 0x00F4 (0x0010) [0x0000000000000000]              
	struct FName                                       mTextureParameterName;                            		// 0x0104 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    mTextureParameterValue;                           		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinRenderTime;                                   		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APgInterpActor*                              mPgInterpActorOwner;                              		// 0x0114 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1845 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInMaterialParam::pClassPointer = NULL;

// Class GridGame.PgActorPlugInTeamColor
// 0x0000 (0x0118 - 0x0118)
class UPgActorPlugInTeamColor : public UPgActorPlugInMaterialParam
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1846 ];

		return pClassPointer;
	};

};

UClass* UPgActorPlugInTeamColor::pClassPointer = NULL;

// Class GridGame.PgActorPlugInModifyCameraScore
// 0x0010 (0x007C - 0x006C)
class UPgActorPlugInModifyCameraScore : public UPgActorPlugIn
{
public:
	unsigned char                                      mAffectedCameras;                                 		// 0x006C (0x0001) [0x0000000000000000]              
	struct FName                                       mCameraStyle;                                     		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAmount;                                          		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1847 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
};

UClass* UPgActorPlugInModifyCameraScore::pClassPointer = NULL;

// Class GridGame.PgActorPlugInModifyProperty
// 0x0044 (0x00B0 - 0x006C)
class UPgActorPlugInModifyProperty : public UPgActorPlugIn
{
public:
	struct FName                                       mPropertyName;                                    		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mPropertyOwner;                                   		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FPointer                                    mPropertyPtr;                                     		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FString                                     mPropertyValue;                                   		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AActor*                                      mPropertyValueOwner;                              		// 0x0088 (0x0004) [0x0000000000000000]              
	struct FPointer                                    mPropertyValuePtr;                                		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned char                                      mModifyType;                                      		// 0x0090 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     mPropertyValueMax;                                		// 0x0094 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mPropertyValueMin;                                		// 0x00A0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mRestoreToDefaultOnDeactivate : 1;                		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mReplicate : 1;                                   		// 0x00AC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1848 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
};

UClass* UPgActorPlugInModifyProperty::pClassPointer = NULL;

// Class GridGame.PgActorPlugInPhysMatEffect
// 0x0010 (0x007C - 0x006C)
class UPgActorPlugInPhysMatEffect : public UPgActorPlugIn
{
public:
	class UPgPhysMatEffect*                            mHitEffect;                                       		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mTraceFromSocketName;                             		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTraceDistance;                                   		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1849 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInPhysMatEffect::pClassPointer = NULL;

// Class GridGame.PgActorPlugInResetFreeCamera
// 0x0010 (0x007C - 0x006C)
class UPgActorPlugInResetFreeCamera : public UPgActorPlugIn
{
public:
	struct FRotationSpringParameters                   mSpringParameters;                                		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              mActiveTime;                                      		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1850 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInResetFreeCamera::pClassPointer = NULL;

// Class GridGame.PgActorPlugInSeqAction
// 0x0008 (0x0074 - 0x006C)
class UPgActorPlugInSeqAction : public UPgActorPlugIn
{
public:
	class USequenceAction*                             mSeqAction;                                       		// 0x006C (0x0004) [0x0000000014400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline | CPF_EditInlineUse )
	int                                                mImpulseInputLink;                                		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1851 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInSeqAction::pClassPointer = NULL;

// Class GridGame.PgActorPlugInSetCameraStyle
// 0x0008 (0x0074 - 0x006C)
class UPgActorPlugInSetCameraStyle : public UPgActorPlugIn
{
public:
	struct FName                                       mCameraStyle;                                     		// 0x006C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1852 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInSetCameraStyle::pClassPointer = NULL;

// Class GridGame.PgActorPlugInSetMaterial
// 0x000C (0x0078 - 0x006C)
class UPgActorPlugInSetMaterial : public UPgActorPlugIn
{
public:
	TArray< struct FSetMaterialInfo >                  mNewMaterialList;                                 		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1853 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInSetMaterial::pClassPointer = NULL;

// Class GridGame.PgActorPlugInSetPhysics
// 0x0001 (0x006D - 0x006C)
class UPgActorPlugInSetPhysics : public UPgActorPlugIn
{
public:
	unsigned char                                      mNewPhysics;                                      		// 0x006C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1854 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInSetPhysics::pClassPointer = NULL;

// Class GridGame.PgActorPlugInSetSkeletalMesh
// 0x000C (0x0078 - 0x006C)
class UPgActorPlugInSetSkeletalMesh : public UPgActorPlugIn
{
public:
	class USkeletalMesh*                               mSkelMesh;                                        		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mSkelMeshName;                                    		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1855 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInSetSkeletalMesh::pClassPointer = NULL;

// Class GridGame.PgActorPlugInSound
// 0x0014 (0x0080 - 0x006C)
class UPgActorPlugInSound : public UPgActorPlugIn
{
public:
	class UAkEvent*                                    mAkEventToPlay;                                   		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mAkEventToStop;                                   		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mStopWhenOwnerDestroyed : 1;                      		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mNotReplicated : 1;                               		// 0x0074 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mNoRepToOwner : 1;                                		// 0x0074 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FName                                       mAttachName;                                      		// 0x0078 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1856 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
};

UClass* UPgActorPlugInSound::pClassPointer = NULL;

// Class GridGame.PgActorPlugInTakeDamage
// 0x0008 (0x0074 - 0x006C)
class UPgActorPlugInTakeDamage : public UPgActorPlugIn
{
public:
	class UClass*                                      mDamageType;                                      		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDamageAmount;                                    		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1857 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgActorPlugInTakeDamage::pClassPointer = NULL;

// Class GridGame.PgPawnPlugInGib
// 0x001C (0x0088 - 0x006C)
class UPgPawnPlugInGib : public UPgActorPlugIn
{
public:
	class UPhysicsAsset*                               mGibPhysicsAsset;                                 		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USkeletalMesh*                               mGibSkeletalMesh;                                 		// 0x0070 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              mAdditionalZVelocity;                             		// 0x0074 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              mGibVelocityMultiplier;                           		// 0x0078 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< int >                                      mMaterialRemap;                                   		// 0x007C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1858 ];

		return pClassPointer;
	};

};

UClass* UPgPawnPlugInGib::pClassPointer = NULL;

// Class GridGame.PgPawnPlugInLean
// 0x0048 (0x00B4 - 0x006C)
class UPgPawnPlugInLean : public UPgActorPlugIn
{
public:
	struct FRotator                                    mMinLeanYaw;                                      		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mMaxLeanYaw;                                      		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mbUseDesiredSpeed : 1;                            		// 0x0084 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              mMinLeanSpeed;                                    		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxLeanSpeed;                                    		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mMaxRotationRoll;                                 		// 0x0090 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLeanNormalBlendSpeed;                            		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLeanFastBlendSpeed;                              		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLeanOutBlendSpeed;                               		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mRotation;                                        		// 0x00A8 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1859 ];

		return pClassPointer;
	};

};

UClass* UPgPawnPlugInLean::pClassPointer = NULL;

// Class GridGame.PgPawnPlugInSpecialMove
// 0x0008 (0x0074 - 0x006C)
class UPgPawnPlugInSpecialMove : public UPgActorPlugIn
{
public:
	class UPgSpecialMoveAsset*                         mSpecialMoveAsset;                                		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      mEndComboOnDeactivate : 1;                        		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1860 ];

		return pClassPointer;
	};

	void Deactivate ( );
	void Activate ( );
};

UClass* UPgPawnPlugInSpecialMove::pClassPointer = NULL;

// Class GridGame.PgPawnPlugInTerrainFollow
// 0x0060 (0x00CC - 0x006C)
class UPgPawnPlugInTerrainFollow : public UPgActorPlugIn
{
public:
	struct FVector                                     mTranslation;                                     		// 0x006C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mDefaultTranslation;                              		// 0x0078 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	TArray< class USkelControlBase* >                  mIKControllers;                                   		// 0x0084 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FName >                             mExcludeStates;                                   		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mTraceDist;                                       		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendRate;                                       		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinDist;                                         		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinRenderTime;                                   		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             mFootBoneNames;                                   		// 0x00AC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             mIKControllerNames;                               		// 0x00B8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mFootSize;                                        		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mDebugDraw : 1;                                   		// 0x00C8 (0x0004) [0x0000000000002001] [0x00000001] ( CPF_Edit | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1861 ];

		return pClassPointer;
	};

};

UClass* UPgPawnPlugInTerrainFollow::pClassPointer = NULL;

// Class GridGame.PgPawnPlugInVehicle
// 0x0004 (0x0070 - 0x006C)
class UPgPawnPlugInVehicle : public UPgActorPlugIn
{
public:
	class APgVehicle*                                  mVehicleArchetype;                                		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1862 ];

		return pClassPointer;
	};

	void Activate ( );
};

UClass* UPgPawnPlugInVehicle::pClassPointer = NULL;

// Class GridGame.PgPlayerPlugInLockOn
// 0x0048 (0x00B4 - 0x006C)
class UPgPlayerPlugInLockOn : public UPgActorPlugIn
{
public:
	unsigned long                                      mAutomatic : 1;                                   		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mNeedLOS : 1;                                     		// 0x006C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mPawnRelative : 1;                                		// 0x006C (0x0004) [0x0000000020000000] [0x00000004] ( CPF_Deprecated )
	unsigned long                                      mPawnAccelRelative : 1;                           		// 0x006C (0x0004) [0x0000000020000000] [0x00000008] ( CPF_Deprecated )
	unsigned long                                      mSwitchTarget : 1;                                		// 0x006C (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      mDebug : 1;                                       		// 0x006C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	float                                              mScanAngle;                                       		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinDistForScanAngle;                             		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinTimeToSwitchTargets;                          		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLastTargetSwitchTime;                            		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mScanNear;                                        		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              mScanFar;                                         		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mScanMaxZDiff;                                    		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mRelativeRotation;                                		// 0x008C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mTargetScan;                                      		// 0x008D (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              mDistanceWeight;                                  		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mProjectedScreenWeight;                           		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCurrentTargetWeightMultiplier;                   		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      mTargetClass;                                     		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTargetScanAngle;                                 		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AActor* >                            mAcquiredTargets;                                 		// 0x00A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FColor                                      mDebugColor;                                      		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1863 ];

		return pClassPointer;
	};

	void SetLockTarget ( unsigned long lockTarget );
	void Deactivate ( );
	void Activate ( );
	void SetTargetScan ( unsigned char targetScan, float targetScanAngle );
	void SwitchTarget ( );
	void GetTargets ( TArray< class AActor* >* Targets );
	class AActor* GetTarget ( class UClass* TargetClass );
	void DisplayDebug ( float DeltaTime );
};

UClass* UPgPlayerPlugInLockOn::pClassPointer = NULL;

// Class GridGame.PgPlayerPlugInLockOnEnemy
// 0x0000 (0x00B4 - 0x00B4)
class UPgPlayerPlugInLockOnEnemy : public UPgPlayerPlugInLockOn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1864 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerPlugInLockOnEnemy::pClassPointer = NULL;

// Class GridGame.PgPlayerPlugInLockOnSmartObject
// 0x0000 (0x00B4 - 0x00B4)
class UPgPlayerPlugInLockOnSmartObject : public UPgPlayerPlugInLockOn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1865 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerPlugInLockOnSmartObject::pClassPointer = NULL;

// Class GridGame.PgPlayerPlugInLockOnTargetActor
// 0x0000 (0x00B4 - 0x00B4)
class UPgPlayerPlugInLockOnTargetActor : public UPgPlayerPlugInLockOn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1866 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerPlugInLockOnTargetActor::pClassPointer = NULL;

// Class GridGame.PgPlayerPlugInTargetSelector
// 0x0000 (0x00B4 - 0x00B4)
class UPgPlayerPlugInTargetSelector : public UPgPlayerPlugInLockOn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1867 ];

		return pClassPointer;
	};

	void SetLockTarget ( unsigned long lockTarget );
};

UClass* UPgPlayerPlugInTargetSelector::pClassPointer = NULL;

// Class GridGame.PgPlayerPlugInLockTargetSelector
// 0x0000 (0x00B4 - 0x00B4)
class UPgPlayerPlugInLockTargetSelector : public UPgPlayerPlugInTargetSelector
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1868 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerPlugInLockTargetSelector::pClassPointer = NULL;

// Class GridGame.PgPlugInList
// 0x006C (0x00D8 - 0x006C)
class UPgPlugInList : public UPgActorPlugIn
{
public:
	TArray< class UPgActorPlugIn* >                    mPlugInList;                                      		// 0x006C (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UPgActorPlugInConditional* >         mPlugInConditionalList;                           		// 0x0078 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UPgActorPlugInConditional* >         mPlugInConditionalTickList;                       		// 0x0084 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UPgActorPlugIn* >                    mPlugInTickList;                                  		// 0x0090 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x009C (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgPlugInList.mEditorData

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1869 ];

		return pClassPointer;
	};

	void Detach ( );
	void Deactivate ( );
	void Activate ( );
};

UClass* UPgPlugInList::pClassPointer = NULL;

// Class GridGame.PgActorPlugInActorComponent
// 0x000F (0x0064 - 0x0055)
class UPgActorPlugInActorComponent : public UActorComponent
{
public:
	TArray< class UPgPlugInList* >                     mPlugInLists;                                     		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1870 ];

		return pClassPointer;
	};

};

UClass* UPgActorPlugInActorComponent::pClassPointer = NULL;

// Class GridGame.PgDynamicSMActor
// 0x0014 (0x0230 - 0x021C)
class APgDynamicSMActor : public ADynamicSMActor
{
public:
	struct FPointer                                    VfTable_IPgDamageParamInterface;                  		// 0x021C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              mInstigatorFriendlySeconds;                       		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mFriendlyFireEnabled : 1;                         		// 0x0224 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mSelfDamageEnabled : 1;                           		// 0x0224 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	class UPgDamageParam*                              mDamageParam;                                     		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AController*                                 mInstigatorController;                            		// 0x022C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1871 ];

		return pClassPointer;
	};

	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void TouchDamage ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventDetach ( class AActor* Other );
	void eventAttach ( class AActor* Other );
	void eventPostBeginPlay ( );
	void eventPreBeginPlay ( );
	void OnDamageCaused ( int damageCaused, class AActor* damageVictim, class AActor* DamageCauser );
	class UPgDamageParam* GetCauseDamageParam ( );
};

UClass* APgDynamicSMActor::pClassPointer = NULL;

// Class GridGame.PgPlugInActivator
// 0x001C (0x0058 - 0x003C)
class UPgPlugInActivator : public UObject
{
public:
	TArray< class UPgActorPlugIn* >                    mPlugInList;                                      		// 0x003C (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	struct FString                                     mComment;                                         		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mOutputComment : 1;                               		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1872 ];

		return pClassPointer;
	};

};

UClass* UPgPlugInActivator::pClassPointer = NULL;

// Class GridGame.PgPlugInComponent
// 0x0007 (0x005C - 0x0055)
class UPgPlugInComponent : public UActorComponent
{
public:
	class UPgPlugInList*                               mOwnerPlugInList;                                 		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1873 ];

		return pClassPointer;
	};

};

UClass* UPgPlugInComponent::pClassPointer = NULL;

// Class GridGame.PgPathNode
// 0x0004 (0x02C0 - 0x02BC)
class APgPathNode : public APathNode
{
public:
	class APgSmartObject*                              mSmartObject;                                     		// 0x02BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1874 ];

		return pClassPointer;
	};

	bool IsUsableAnchorFor ( class APawn* P );
};

UClass* APgPathNode::pClassPointer = NULL;

// Class GridGame.PgRallyPoint
// 0x00D0 (0x0390 - 0x02C0)
class APgRallyPoint : public APgPathNode
{
public:
	TArray< class UClass* >                            mActorClass;                                      		// 0x02C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRallyPointInfo >                   mRallyPointInfo;                                  		// 0x02CC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mEnabled : 1;                                     		// 0x02D8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mActivateOnAngle : 1;                             		// 0x02D8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mActivateOnLOS : 1;                               		// 0x02D8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mActivateOnRadius : 1;                            		// 0x02D8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      mDeactivateOnRadius : 1;                          		// 0x02D8 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x02DC (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgRallyPoint.mRallyPointActors
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x0318 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgRallyPoint.mNavPoints
	struct FControllerInRangeInfo                      mInRangeInfo;                                     		// 0x0354 (0x0008) [0x0000000000000000]              
	float                                              mGatherRadius;                                    		// 0x035C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mGatherHeight;                                    		// 0x0360 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mActivateAngle;                                   		// 0x0364 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mActivateHeight;                                  		// 0x0368 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mActivateRadius;                                  		// 0x036C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDeactivateRadius;                                		// 0x0370 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDeactivateHeight;                                		// 0x0374 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDrawCylinderComponent*                      mDrawActivateCylinder;                            		// 0x0378 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDrawCylinderComponent*                      mDrawDeactivateCylinder;                          		// 0x037C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDrawCylinderComponent*                      mDrawActiveCylinder;                              		// 0x0380 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             mDrawActivateArrowCentre;                         		// 0x0384 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             mDrawActivateArrowLeft;                           		// 0x0388 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             mDrawActivateArrowRight;                          		// 0x038C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1875 ];

		return pClassPointer;
	};

	void GenericToggle ( );
	void OnToggle ( class USeqAct_Toggle* Action );
	void UpdatePawnCounts ( );
	void GetAllRallyPointActors ( TArray< class AActor* >* rallyPointActors );
	bool IsValidRallyPoint ( class APgAIController* Controller );
};

UClass* APgRallyPoint::pClassPointer = NULL;

// Class GridGame.PgSpawnPoint
// 0x0014 (0x02D4 - 0x02C0)
class APgSpawnPoint : public APgPathNode
{
public:
	class USkeletalMeshComponent*                      mSkelMesh;                                        		// 0x02C0 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UStaticMeshComponent*                        mStaticMesh;                                      		// 0x02C4 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDynamicLightEnvironmentComponent*           mLightEnvironmentComponent;                       		// 0x02C8 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      mArchetype;                                       		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       mArchetypePawn;                                   		// 0x02D0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1876 ];

		return pClassPointer;
	};

};

UClass* APgSpawnPoint::pClassPointer = NULL;

// Class GridGame.PgPedestrianSpawnPoint
// 0x0054 (0x0328 - 0x02D4)
class APgPedestrianSpawnPoint : public APgSpawnPoint
{
public:
	float                                              mRadiusMin;                                       		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRadiusMax;                                       		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mHeightMin;                                       		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mHeightMax;                                       		// 0x02E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mCylinderSpawning : 1;                            		// 0x02E4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mEnabled : 1;                                     		// 0x02E4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mCheckLOS : 1;                                    		// 0x02E4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mSpawnOffscreen : 1;                              		// 0x02E4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      mRespawnPending : 1;                              		// 0x02E4 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                mSpawnMax;                                        		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mSpawnDelayMin;                                   		// 0x02EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mSpawnDelayMax;                                   		// 0x02F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mFacingAngle;                                     		// 0x02F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mSpawnNum;                                        		// 0x02F8 (0x0004) [0x0000000000000000]              
	int                                                mSpawnTotal;                                      		// 0x02FC (0x0004) [0x0000000000000000]              
	int                                                mSpawnActive;                                     		// 0x0300 (0x0004) [0x0000000000000000]              
	float                                              mTimeLastKilled;                                  		// 0x0304 (0x0004) [0x0000000000000000]              
	float                                              mSpawnDelay;                                      		// 0x0308 (0x0004) [0x0000000000000000]              
	class APgPathNode*                                 mInitialRespawnPoint;                             		// 0x030C (0x0004) [0x0000000000000000]              
	class ANavigationPoint*                            mRespawnPoint;                                    		// 0x0310 (0x0004) [0x0000000000000000]              
	class UDrawCylinderComponent*                      mDrawRadiusMinCylinder;                           		// 0x0314 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDrawCylinderComponent*                      mDrawRadiusMaxCylinder;                           		// 0x0318 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             mDrawFacingArrowCentre;                           		// 0x031C (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             mDrawFacingArrowLeft;                             		// 0x0320 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             mDrawFacingArrowRight;                            		// 0x0324 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1877 ];

		return pClassPointer;
	};

	void OnToggle ( class USeqAct_Toggle* Action );
};

UClass* APgPedestrianSpawnPoint::pClassPointer = NULL;

// Class GridGame.PgScout
// 0x0000 (0x0480 - 0x0480)
class APgScout : public AScout
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1878 ];

		return pClassPointer;
	};

};

UClass* APgScout::pClassPointer = NULL;

// Class GridGame.PgSmartReachSpec
// 0x0000 (0x0090 - 0x0090)
class UPgSmartReachSpec : public UReachSpec
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1879 ];

		return pClassPointer;
	};

};

UClass* UPgSmartReachSpec::pClassPointer = NULL;

// Class GridGame.PgCondition
// 0x0018 (0x0054 - 0x003C)
class UPgCondition : public UObject
{
public:
	unsigned long                                      mNot : 1;                                         		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mOr : 1;                                          		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mOutputComment : 1;                               		// 0x003C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      mCompare;                                         		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mOwner;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	struct FString                                     mComment;                                         		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1880 ];

		return pClassPointer;
	};

};

UClass* UPgCondition::pClassPointer = NULL;

// Class GridGame.PgConditionAICanAttackEnemy
// 0x0000 (0x0054 - 0x0054)
class UPgConditionAICanAttackEnemy : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1881 ];

		return pClassPointer;
	};

};

UClass* UPgConditionAICanAttackEnemy::pClassPointer = NULL;

// Class GridGame.PgConditionAIControlled
// 0x0000 (0x0054 - 0x0054)
class UPgConditionAIControlled : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1882 ];

		return pClassPointer;
	};

};

UClass* UPgConditionAIControlled::pClassPointer = NULL;

// Class GridGame.PgConditionAIObjectiveAvailable
// 0x0010 (0x0064 - 0x0054)
class UPgConditionAIObjectiveAvailable : public UPgCondition
{
public:
	struct FName                                       mName;                                            		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mTeamAlignment;                                   		// 0x005C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                mMaxBotsAtATime;                                  		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1883 ];

		return pClassPointer;
	};

};

UClass* UPgConditionAIObjectiveAvailable::pClassPointer = NULL;

// Class GridGame.PgConditionButtonPress
// 0x0018 (0x006C - 0x0054)
class UPgConditionButtonPress : public UPgCondition
{
public:
	struct FName                                       mButtonName;                                      		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mButtonState;                                     		// 0x005C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mCheckButtonName;                                 		// 0x0060 (0x0008) [0x0000000000000000]              
	unsigned long                                      mCheckPressed : 1;                                		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1884 ];

		return pClassPointer;
	};

};

UClass* UPgConditionButtonPress::pClassPointer = NULL;

// Class GridGame.PgConditionCanPerformCombo
// 0x0001 (0x0055 - 0x0054)
class UPgConditionCanPerformCombo : public UPgCondition
{
public:
	unsigned char                                      mComboAction;                                     		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1885 ];

		return pClassPointer;
	};

};

UClass* UPgConditionCanPerformCombo::pClassPointer = NULL;

// Class GridGame.PgConditionClassIsA
// 0x0004 (0x0058 - 0x0054)
class UPgConditionClassIsA : public UPgCondition
{
public:
	class UClass*                                      mCheckClass;                                      		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1886 ];

		return pClassPointer;
	};

};

UClass* UPgConditionClassIsA::pClassPointer = NULL;

// Class GridGame.PgConditionCollision
// 0x0001 (0x0055 - 0x0054)
class UPgConditionCollision : public UPgCondition
{
public:
	unsigned char                                      mCollisionType;                                   		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1887 ];

		return pClassPointer;
	};

};

UClass* UPgConditionCollision::pClassPointer = NULL;

// Class GridGame.PgConditionCompareDistance
// 0x0015 (0x0069 - 0x0054)
class UPgConditionCompareDistance : public UPgCondition
{
public:
	struct FName                                       mCompareActorPropertyName;                        		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mPropertyOwner;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	class UProperty*                                   mPropertyPtr;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              mDistance;                                        		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mDistanceCompare;                                 		// 0x0068 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1888 ];

		return pClassPointer;
	};

};

UClass* UPgConditionCompareDistance::pClassPointer = NULL;

// Class GridGame.PgConditionCompareDistanceToCamera
// 0x0004 (0x0058 - 0x0054)
class UPgConditionCompareDistanceToCamera : public UPgCondition
{
public:
	float                                              mDistance;                                        		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1889 ];

		return pClassPointer;
	};

};

UClass* UPgConditionCompareDistanceToCamera::pClassPointer = NULL;

// Class GridGame.PgConditionCompareFacing
// 0x000C (0x0060 - 0x0054)
class UPgConditionCompareFacing : public UPgCondition
{
public:
	struct FName                                       mCompareActorPropertyName;                        		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAngleTolerance;                                  		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1890 ];

		return pClassPointer;
	};

};

UClass* UPgConditionCompareFacing::pClassPointer = NULL;

// Class GridGame.PgConditionDamageTracking
// 0x0010 (0x0064 - 0x0054)
class UPgConditionDamageTracking : public UPgCondition
{
public:
	struct FName                                       mDamageCauserArchetypeName;                       		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTime;                                            		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mDamage;                                          		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1891 ];

		return pClassPointer;
	};

};

UClass* UPgConditionDamageTracking::pClassPointer = NULL;

// Class GridGame.PgConditionDiscPower
// 0x000C (0x0060 - 0x0054)
class UPgConditionDiscPower : public UPgCondition
{
public:
	struct FName                                       mDiscPowerArchetypeName;                          		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                mDiscPowerLevel;                                  		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1892 ];

		return pClassPointer;
	};

};

UClass* UPgConditionDiscPower::pClassPointer = NULL;

// Class GridGame.PgConditionEnhancer
// 0x0008 (0x005C - 0x0054)
class UPgConditionEnhancer : public UPgCondition
{
public:
	struct FName                                       mEnhancerName;                                    		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1893 ];

		return pClassPointer;
	};

};

UClass* UPgConditionEnhancer::pClassPointer = NULL;

// Class GridGame.PgConditionEvent
// 0x009C (0x00F0 - 0x0054)
class UPgConditionEvent : public UPgCondition
{
public:
	struct FString                                     _HelpText1;                                       		// 0x0054 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText2;                                       		// 0x0060 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText3;                                       		// 0x006C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText4;                                       		// 0x0078 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText5;                                       		// 0x0084 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText6;                                       		// 0x0090 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText7;                                       		// 0x009C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText8;                                       		// 0x00A8 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText9;                                       		// 0x00B4 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText10;                                      		// 0x00C0 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText11;                                      		// 0x00CC (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText12;                                      		// 0x00D8 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FName                                       mEventName;                                       		// 0x00E4 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FPgMailboxPtrNative                         mMailbox;                                         		// 0x00EC (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1894 ];

		return pClassPointer;
	};

};

UClass* UPgConditionEvent::pClassPointer = NULL;

// Class GridGame.PgConditionInVehicle
// 0x0008 (0x005C - 0x0054)
class UPgConditionInVehicle : public UPgCondition
{
public:
	struct FName                                       mVehicleArchetypeName;                            		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1895 ];

		return pClassPointer;
	};

};

UClass* UPgConditionInVehicle::pClassPointer = NULL;

// Class GridGame.PgConditionInventory
// 0x000C (0x0060 - 0x0054)
class UPgConditionInventory : public UPgCondition
{
public:
	unsigned long                                      mCheckEquippedWeapon : 1;                         		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mCheckReplicateInventory : 1;                     		// 0x0054 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FName                                       mInventoryArchetypeName;                          		// 0x0058 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1896 ];

		return pClassPointer;
	};

};

UClass* UPgConditionInventory::pClassPointer = NULL;

// Class GridGame.PgConditionIsCoop
// 0x0000 (0x0054 - 0x0054)
class UPgConditionIsCoop : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1897 ];

		return pClassPointer;
	};

};

UClass* UPgConditionIsCoop::pClassPointer = NULL;

// Class GridGame.PgConditionIsHost
// 0x0000 (0x0054 - 0x0054)
class UPgConditionIsHost : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1898 ];

		return pClassPointer;
	};

};

UClass* UPgConditionIsHost::pClassPointer = NULL;

// Class GridGame.PgConditionIsInvulnerable
// 0x0000 (0x0054 - 0x0054)
class UPgConditionIsInvulnerable : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1899 ];

		return pClassPointer;
	};

};

UClass* UPgConditionIsInvulnerable::pClassPointer = NULL;

// Class GridGame.PgConditionIsStereoscopic3D
// 0x0000 (0x0054 - 0x0054)
class UPgConditionIsStereoscopic3D : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1900 ];

		return pClassPointer;
	};

};

UClass* UPgConditionIsStereoscopic3D::pClassPointer = NULL;

// Class GridGame.PgConditionList
// 0x0010 (0x0064 - 0x0054)
class UPgConditionList : public UPgCondition
{
public:
	TArray< class UPgCondition* >                      mConditionDataList;                               		// 0x0054 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      mContainsEvent : 1;                               		// 0x0060 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mContainsOr : 1;                                  		// 0x0060 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1901 ];

		return pClassPointer;
	};

};

UClass* UPgConditionList::pClassPointer = NULL;

// Class GridGame.PgConditionMPGame
// 0x0000 (0x0054 - 0x0054)
class UPgConditionMPGame : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1902 ];

		return pClassPointer;
	};

};

UClass* UPgConditionMPGame::pClassPointer = NULL;

// Class GridGame.PgConditionObjectProperty
// 0x0024 (0x0078 - 0x0054)
class UPgConditionObjectProperty : public UPgCondition
{
public:
	struct FName                                       mPropertyName;                                    		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mPropertyOwner;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	class UProperty*                                   mPropertyPtr;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FString                                     mPropertyValue;                                   		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AActor*                                      mPropertyValueOwner;                              		// 0x0070 (0x0004) [0x0000000000000000]              
	class UProperty*                                   mPropertyValuePtr;                                		// 0x0074 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1903 ];

		return pClassPointer;
	};

};

UClass* UPgConditionObjectProperty::pClassPointer = NULL;

// Class GridGame.PgConditionObjectPropertyRatio
// 0x0034 (0x0088 - 0x0054)
class UPgConditionObjectPropertyRatio : public UPgCondition
{
public:
	struct FName                                       mNumeratorPropertyName;                           		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mDenominatorPropertyName;                         		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mNumeratorPropertyOwner;                          		// 0x0064 (0x0004) [0x0000000000000000]              
	class AActor*                                      mDenominatorPropertyOwner;                        		// 0x0068 (0x0004) [0x0000000000000000]              
	class UProperty*                                   mNumeratorPropertyPtr;                            		// 0x006C (0x0004) [0x0000000000000000]              
	class UProperty*                                   mDenominatorPropertyPtr;                          		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FString                                     mPropertyValue;                                   		// 0x0074 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AActor*                                      mPropertyValueOwner;                              		// 0x0080 (0x0004) [0x0000000000000000]              
	class UProperty*                                   mPropertyValuePtr;                                		// 0x0084 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1904 ];

		return pClassPointer;
	};

};

UClass* UPgConditionObjectPropertyRatio::pClassPointer = NULL;

// Class GridGame.PgConditionPassivePower
// 0x0008 (0x005C - 0x0054)
class UPgConditionPassivePower : public UPgCondition
{
public:
	struct FName                                       mPassivePowerName;                                		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1905 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPassivePower::pClassPointer = NULL;

// Class GridGame.PgConditionPawnIsAliveAndWell
// 0x0000 (0x0054 - 0x0054)
class UPgConditionPawnIsAliveAndWell : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1906 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPawnIsAliveAndWell::pClassPointer = NULL;

// Class GridGame.PgConditionPawnIsFacing
// 0x000C (0x0060 - 0x0054)
class UPgConditionPawnIsFacing : public UPgCondition
{
public:
	struct FName                                       mCompareActorPropertyName;                        		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAngleTolerance;                                  		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1907 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPawnIsFacing::pClassPointer = NULL;

// Class GridGame.PgConditionPawnLastKillerIs
// 0x0001 (0x0055 - 0x0054)
class UPgConditionPawnLastKillerIs : public UPgCondition
{
public:
	unsigned char                                      mLastKillerType;                                  		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1908 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPawnLastKillerIs::pClassPointer = NULL;

// Class GridGame.PgConditionPawnOnScreen
// 0x0000 (0x0054 - 0x0054)
class UPgConditionPawnOnScreen : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1909 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPawnOnScreen::pClassPointer = NULL;

// Class GridGame.PgConditionPhysics
// 0x0001 (0x0055 - 0x0054)
class UPgConditionPhysics : public UPgCondition
{
public:
	unsigned char                                      mCheckPhysics;                                    		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1910 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPhysics::pClassPointer = NULL;

// Class GridGame.PgConditionPlayerControlled
// 0x0004 (0x0058 - 0x0054)
class UPgConditionPlayerControlled : public UPgCondition
{
public:
	unsigned long                                      mbIsLocal : 1;                                    		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1911 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPlayerControlled::pClassPointer = NULL;

// Class GridGame.PgConditionPlayerLockedTarget
// 0x0000 (0x0054 - 0x0054)
class UPgConditionPlayerLockedTarget : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1912 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPlayerLockedTarget::pClassPointer = NULL;

// Class GridGame.PgConditionPlayingAnim
// 0x000C (0x0060 - 0x0054)
class UPgConditionPlayingAnim : public UPgCondition
{
public:
	struct FName                                       mAnimName;                                        		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCompareTime;                                     		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1913 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPlayingAnim::pClassPointer = NULL;

// Class GridGame.PgConditionPlayingSpecialMove
// 0x0008 (0x005C - 0x0054)
class UPgConditionPlayingSpecialMove : public UPgCondition
{
public:
	struct FName                                       mSpecialMoveArchetypeName;                        		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1914 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPlayingSpecialMove::pClassPointer = NULL;

// Class GridGame.PgConditionPropertyChanged
// 0x0020 (0x0074 - 0x0054)
class UPgConditionPropertyChanged : public UPgCondition
{
public:
	struct FName                                       mPropertyName;                                    		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mPropertyOwner;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	class UProperty*                                   mPropertyPtr;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	class UObject*                                     mCurrentObject;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                mCurrentInt;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              mCurrentFloat;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      mCurrentBool : 1;                                 		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1915 ];

		return pClassPointer;
	};

};

UClass* UPgConditionPropertyChanged::pClassPointer = NULL;

// Class GridGame.PgConditionRandom
// 0x0004 (0x0058 - 0x0054)
class UPgConditionRandom : public UPgCondition
{
public:
	int                                                mRandomChance;                                    		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1916 ];

		return pClassPointer;
	};

};

UClass* UPgConditionRandom::pClassPointer = NULL;

// Class GridGame.PgConditionScalarMaterialParamBlendType
// 0x0001 (0x0055 - 0x0054)
class UPgConditionScalarMaterialParamBlendType : public UPgCondition
{
public:
	unsigned char                                      mBlendType;                                       		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1917 ];

		return pClassPointer;
	};

};

UClass* UPgConditionScalarMaterialParamBlendType::pClassPointer = NULL;

// Class GridGame.PgConditionTargetLineOfSightToEnemy
// 0x0000 (0x0054 - 0x0054)
class UPgConditionTargetLineOfSightToEnemy : public UPgCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1918 ];

		return pClassPointer;
	};

};

UClass* UPgConditionTargetLineOfSightToEnemy::pClassPointer = NULL;

// Class GridGame.PgConditionTargetMarker
// 0x0008 (0x005C - 0x0054)
class UPgConditionTargetMarker : public UPgCondition
{
public:
	struct FName                                       mTarget;                                          		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1919 ];

		return pClassPointer;
	};

};

UClass* UPgConditionTargetMarker::pClassPointer = NULL;

// Class GridGame.PgConditionTeamColor
// 0x0008 (0x005C - 0x0054)
class UPgConditionTeamColor : public UPgCondition
{
public:
	struct FName                                       mTeamColorName;                                   		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1920 ];

		return pClassPointer;
	};

};

UClass* UPgConditionTeamColor::pClassPointer = NULL;

// Class GridGame.PgConditionTeamInfo
// 0x0008 (0x005C - 0x0054)
class UPgConditionTeamInfo : public UPgCondition
{
public:
	struct FName                                       mTeamName;                                        		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1921 ];

		return pClassPointer;
	};

};

UClass* UPgConditionTeamInfo::pClassPointer = NULL;

// Class GridGame.PgConditionTeammateInventory
// 0x000C (0x0060 - 0x0054)
class UPgConditionTeammateInventory : public UPgCondition
{
public:
	struct FName                                       mInventoryArchetypeName;                          		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mCheckOtherTeammateOnly : 1;                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1922 ];

		return pClassPointer;
	};

};

UClass* UPgConditionTeammateInventory::pClassPointer = NULL;

// Class GridGame.PgConditionTouching
// 0x000C (0x0060 - 0x0054)
class UPgConditionTouching : public UPgCondition
{
public:
	struct FName                                       mTouchingArchetypeName;                           		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      mTouchingActorClass;                              		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1923 ];

		return pClassPointer;
	};

};

UClass* UPgConditionTouching::pClassPointer = NULL;

// Class GridGame.PgConditionUsingEnergyActor
// 0x0005 (0x0059 - 0x0054)
class UPgConditionUsingEnergyActor : public UPgCondition
{
public:
	unsigned long                                      mIsPositiveEnergyFlow : 1;                        		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      mType;                                            		// 0x0058 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1924 ];

		return pClassPointer;
	};

};

UClass* UPgConditionUsingEnergyActor::pClassPointer = NULL;

// Class GridGame.PgConditionVelocity
// 0x0008 (0x005C - 0x0054)
class UPgConditionVelocity : public UPgCondition
{
public:
	unsigned char                                      mDirection;                                       		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mThreshold;                                       		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1925 ];

		return pClassPointer;
	};

};

UClass* UPgConditionVelocity::pClassPointer = NULL;

// Class GridGame.PgConditionAcceleration
// 0x0000 (0x005C - 0x005C)
class UPgConditionAcceleration : public UPgConditionVelocity
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1926 ];

		return pClassPointer;
	};

};

UClass* UPgConditionAcceleration::pClassPointer = NULL;

// Class GridGame.PgConditionWasPromoted
// 0x0004 (0x0058 - 0x0054)
class UPgConditionWasPromoted : public UPgCondition
{
public:
	int                                                mOldRank;                                         		// 0x0054 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1927 ];

		return pClassPointer;
	};

};

UClass* UPgConditionWasPromoted::pClassPointer = NULL;

// Class GridGame.PgConditionWeaponState
// 0x0004 (0x0058 - 0x0054)
class UPgConditionWeaponState : public UPgCondition
{
public:
	unsigned long                                      mCheckIsFiring : 1;                               		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1928 ];

		return pClassPointer;
	};

};

UClass* UPgConditionWeaponState::pClassPointer = NULL;

// Class GridGame.PgAIController
// 0x0098 (0x0420 - 0x0388)
class APgAIController : public AAIController
{
public:
	struct FPointer                                    VfTable_IPgCommonControllerInterface;             		// 0x0388 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgMailingListInterface;                  		// 0x038C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x0390 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bDestroyOnPawnDeath : 1;                          		// 0x0394 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mPaused : 1;                                      		// 0x0394 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      mMovementFrozen : 1;                              		// 0x0394 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      mForceWeaponsHold : 1;                            		// 0x0394 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      mPossiblyStuck : 1;                               		// 0x0394 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mGettingUnStuck : 1;                              		// 0x0394 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mLineOfSightToEnemy : 1;                          		// 0x0394 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      mIsLeavingGame : 1;                               		// 0x0394 (0x0004) [0x0000000000000000] [0x00000080] 
	class UPgAIPlanner*                                mPlanner;                                         		// 0x0398 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class APgRallyPoint*                               mRallyPoint;                                      		// 0x039C (0x0004) [0x0000000000000000]              
	class APgRallyPoint*                               mPreviousRallyPoint;                              		// 0x03A0 (0x0004) [0x0000000000000000]              
	class UPgActorFactoryPedestrian*                   mPedestrianActorFactory;                          		// 0x03A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APgPedestrianSpawnPoint*                     mSpawnPoint;                                      		// 0x03A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mStuckTime;                                       		// 0x03AC (0x0004) [0x0000000000000000]              
	class AActor*                                      mWaitingMoveTarget;                               		// 0x03B0 (0x0004) [0x0000000000000000]              
	class UPgAISenses*                                 mSenses;                                          		// 0x03B4 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgAIAwareness*                              mAwareness;                                       		// 0x03B8 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgFireController*                           mFireController;                                  		// 0x03BC (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	struct FName                                       mTeam;                                            		// 0x03C0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AProjectile*                                 mIncomingProjectile;                              		// 0x03C8 (0x0004) [0x0000000000000000]              
	int                                                mWeaponFireMode;                                  		// 0x03CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mMinEnterVehicleRange;                            		// 0x03D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxExitVehicleRange;                             		// 0x03D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBikeTurnRadius;                                  		// 0x03D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBikeTransformClearance;                          		// 0x03DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APgObjective*                                mObjectiveTarget;                                 		// 0x03E0 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x03E4 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgAIController.mMailingLists

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1929 ];

		return pClassPointer;
	};

	void Restart ( unsigned long bVehicleTransition );
	bool CanFireWeapon ( class AWeapon* Weap, unsigned char FireModeNum );
	void PawnDied ( class APawn* inPawn );
	void eventTick ( float Delta );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void ReceiveProjectileWarning ( class AProjectile* Proj );
	void ReceiveWarning ( class APawn* shooter, float projSpeed, struct FVector FireDir );
	void ReceiveFireWarning ( class AActor* shooter, class AWeapon* FiredWeapon, struct FVector FireDir );
	struct FRotator GetAdjustedAimFor ( class AWeapon* InWeapon, struct FVector projStart );
	void eventNotifyLandedFromHighFall ( );
	void eventNotifyRagdollKnockdown ( );
	void NotifyKilled ( class AController* Killer, class AController* Killed, class APawn* KilledPawn );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void NotifyWeaponFiredShot ( class AWeapon* Weapon, unsigned char FiringMode );
	void NotifyWeaponFinishedReloading ( );
	void NotifyWeaponFinishedFiring ( class AWeapon* W, unsigned char FireMode );
	void NotifyWeaponFired ( class AWeapon* W, unsigned char FireMode );
	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition );
	void eventPlayerAimingAt ( class APawn* aimer );
	void eventFriendlyDied ( class APawn* friendly );
	void eventPlayerNotVisible ( class APawn* Player );
	void eventHearNoise ( float Loudness, class AActor* NoiseMaker, struct FName NoiseType );
	void eventEnemyNotVisible ( );
	void eventSeeMonster ( class APawn* seenMonster );
	void eventSeePlayer ( class APawn* seenPlayer );
	bool eventNotifyLanded ( struct FVector HitNormal, class AActor* FloorActor );
	bool eventNotifyBump ( class AActor* Other, struct FVector HitNormal );
	bool eventNotifyHitWall ( struct FVector HitNormal, class AActor* Wall );
	void OnCheckCondition ( class UPgSeqAct_CheckCondition* inAction );
	void Release ( class APgObjective* Obj );
	void Claim ( class APgObjective* Obj );
	void VehicleCourseCorrect ( );
	void LeaveVehicle ( );
	void EnterVehicle ( );
	bool ShouldLeaveVehicle ( );
	bool ShouldEnterVehicle ( );
	bool CanLeaveVehicle ( );
	bool CanEnterVehicle ( );
	bool IsDriving ( );
	void LeaveGame ( );
	bool CanLeaveGame ( );
	bool IsLeavingGame ( );
	void SetIsLeavingGame ( unsigned long Leaving );
	class AActor* GetTarget ( );
	class AProjectile* GetIncomingProjectile ( );
	bool IsPedestrian ( );
	int GetTeamSpawnOrder ( );
	int GetTeamSpawnCount ( );
	int GetTeamIndex ( );
	bool IsFriendly ( class AActor* Target );
	bool ReadyToFire ( );
	void SetEnemy ( class APawn* newEnemy );
	bool LineOfSightToEnemy ( );
	class APgTargetMarker* GetInvestigateMarker ( );
	class APgTargetMarker* GetTargetMarkerFor ( class AActor* Target );
	void EndPlannerAnimation ( );
	void UnPauseAIController ( );
	void PauseAIController ( );
	struct FName GetAIState ( );
	void PostEvent ( struct FName EventName, struct FName listName );
};

UClass* APgAIController::pClassPointer = NULL;

// Class GridGame.PgAIAwareness
// 0x006C (0x00A8 - 0x003C)
class UPgAIAwareness : public UObject
{
public:
	unsigned char                                      mState;                                           		// 0x003C (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              mAwareness;                                       		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class APgTargetMarker* >                   mTargetMarkers;                                   		// 0x0044 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0050 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgAIAwareness.mRawAwareness
	TArray< struct FAIAwarenessStateLevel >            mAwarenessLevels;                                 		// 0x008C (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	TArray< struct FAIAwarenessStateImpulse >          mAwarenessImpulses;                               		// 0x0098 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	unsigned long                                      mUnawareUntilPlayerSeen : 1;                      		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1930 ];

		return pClassPointer;
	};

	class APgTargetMarker* GetTargetMarkerFor ( class AActor* Target );
	class APgTargetMarker* SpawnTargetMarker ( class AActor* Target );
	float GetRawAwarenessOfTarget ( class AActor* Target );
	unsigned char GetAwarenessOfTarget ( class AActor* Target );
	unsigned char TargetNotVisible ( class AActor* Target );
	unsigned char HearTarget ( class AActor* Target, unsigned char awareness );
	unsigned char SeeTarget ( class AActor* Target, unsigned char awareness );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
};

UClass* UPgAIAwareness::pClassPointer = NULL;

// Class GridGame.PgAISenses
// 0x0024 (0x0060 - 0x003C)
class UPgAISenses : public UObject
{
public:
	TArray< struct FAISightCone >                      mSightCones;                                      		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAISightRange >                     mSightRanges;                                     		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAINoiseFilter >                    mNoiseFilters;                                    		// 0x0054 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1931 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
};

UClass* UPgAISenses::pClassPointer = NULL;

// Class GridGame.PgAIPlanner
// 0x001B (0x0070 - 0x0055)
class UPgAIPlanner : public UActorComponent
{
public:
	class UPgAIActionQueue*                            mActionQueue;                                     		// 0x0058 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgAIGoal*                                   mCurrentGoal;                                     		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                mCurrentGoalIndex;                                		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      mPaused : 1;                                      		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mPauseTime;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	class UPgAIPlannerAsset*                           mAsset;                                           		// 0x006C (0x0004) [0x0000000014400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline | CPF_EditInlineUse )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1932 ];

		return pClassPointer;
	};

	bool IsPaused ( );
	void SetPauseTime ( float Time );
	void UnPause ( );
	void Pause ( );
	void ContinuePlan ( );
};

UClass* UPgAIPlanner::pClassPointer = NULL;

// Class GridGame.PgAIPlannerAsset
// 0x0048 (0x0084 - 0x003C)
class UPgAIPlannerAsset : public UObject
{
public:
	TArray< class UPgAIGoal* >                         mGoal;                                            		// 0x003C (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0048 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgAIPlannerAsset.mEditorData

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1933 ];

		return pClassPointer;
	};

};

UClass* UPgAIPlannerAsset::pClassPointer = NULL;

// Class GridGame.PgAIPlannerObject
// 0x0034 (0x0070 - 0x003C)
class UPgAIPlannerObject : public UObject
{
public:
	struct FName                                       mName;                                            		// 0x003C (0x0008) [0x0000000000000000]              
	struct FString                                     mComment;                                         		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mOutputComment : 1;                               		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UPgAIPlanner*                                mPlanner;                                         		// 0x0054 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class AActor*                                      mOwner;                                           		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             mAIEventNames;                                    		// 0x005C (0x000C) [0x0000000000420002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	class UPgCondition*                                mPreconditionData;                                		// 0x0068 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCondition*                                mPostConditionData;                               		// 0x006C (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1934 ];

		return pClassPointer;
	};

};

UClass* UPgAIPlannerObject::pClassPointer = NULL;

// Class GridGame.PgAIAction
// 0x003C (0x00AC - 0x0070)
class UPgAIAction : public UPgAIPlannerObject
{
public:
	class USoundCue*                                   mSoundCue;                                        		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mSoundCueDuration;                                		// 0x0074 (0x0004) [0x0000000000000000]              
	class UPgSpecialMoveAsset*                         mSpecialMoveAsset;                                		// 0x0078 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              mTimeOut;                                         		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mUseTimeOutRange : 1;                             		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mShouldCrouch : 1;                                		// 0x0080 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              mTimeOutRangeMax;                                 		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTimeOutRangeMin;                                 		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBeginActionTime;                                 		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              mEndActionTime;                                   		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FName                                       mFocus;                                           		// 0x0094 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FPointer                                    mFocusPtr;                                        		// 0x009C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	float                                              mDesiredSpeed;                                    		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mControllerState;                                 		// 0x00A4 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1935 ];

		return pClassPointer;
	};

};

UClass* UPgAIAction::pClassPointer = NULL;

// Class GridGame.PgAIActionAttackEnemy
// 0x0004 (0x00B0 - 0x00AC)
class UPgAIActionAttackEnemy : public UPgAIAction
{
public:
	int                                                mWeaponFireMode;                                  		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1936 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionAttackEnemy::pClassPointer = NULL;

// Class GridGame.PgAIActionMoveToward
// 0x0014 (0x00C0 - 0x00AC)
class UPgAIActionMoveToward : public UPgAIAction
{
public:
	struct FName                                       mMoveTarget;                                      		// 0x00AC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FPointer                                    mMoveTargetPtr;                                   		// 0x00B4 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      mRandomMoveTargetOnNoPath : 1;                    		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mPathToSurroundingNodes : 1;                      		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              mStartedMoveTime;                                 		// 0x00BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1937 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionMoveToward::pClassPointer = NULL;

// Class GridGame.PgAIActionMoveAttackEnemy
// 0x0004 (0x00C4 - 0x00C0)
class UPgAIActionMoveAttackEnemy : public UPgAIActionMoveToward
{
public:
	int                                                mWeaponFireMode;                                  		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1938 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionMoveAttackEnemy::pClassPointer = NULL;

// Class GridGame.PgAIActionMoveAwayFrom
// 0x0000 (0x00C0 - 0x00C0)
class UPgAIActionMoveAwayFrom : public UPgAIActionMoveToward
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1939 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionMoveAwayFrom::pClassPointer = NULL;

// Class GridGame.PgAIActionMoveToActor
// 0x0004 (0x00C4 - 0x00C0)
class UPgAIActionMoveToActor : public UPgAIActionMoveToward
{
public:
	class AActor*                                      mMoveToActor;                                     		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1940 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionMoveToActor::pClassPointer = NULL;

// Class GridGame.PgAIActionMoveToInvestigate
// 0x0000 (0x00C0 - 0x00C0)
class UPgAIActionMoveToInvestigate : public UPgAIActionMoveToward
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1941 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionMoveToInvestigate::pClassPointer = NULL;

// Class GridGame.PgAIActionMoveToObjective
// 0x0001 (0x00C1 - 0x00C0)
class UPgAIActionMoveToObjective : public UPgAIActionMoveToward
{
public:
	unsigned char                                      mTeamAlignment;                                   		// 0x00C0 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1942 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionMoveToObjective::pClassPointer = NULL;

// Class GridGame.PgAIActionMoveToWander
// 0x0000 (0x00C0 - 0x00C0)
class UPgAIActionMoveToWander : public UPgAIActionMoveToward
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1943 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionMoveToWander::pClassPointer = NULL;

// Class GridGame.PgAIActionUseSmartObject
// 0x000C (0x00B8 - 0x00AC)
class UPgAIActionUseSmartObject : public UPgAIAction
{
public:
	unsigned long                                      mUseScriptedInfo : 1;                             		// 0x00AC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FScriptedSmartObjectUseInfo                 mScriptedUseInfo;                                 		// 0x00B0 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1944 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionUseSmartObject::pClassPointer = NULL;

// Class GridGame.PgAIActionVehicleAnimation
// 0x0008 (0x00B4 - 0x00AC)
class UPgAIActionVehicleAnimation : public UPgAIAction
{
public:
	struct FName                                       mVehicleAnimTag;                                  		// 0x00AC (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1945 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionVehicleAnimation::pClassPointer = NULL;

// Class GridGame.PgAIActionWait
// 0x0000 (0x00AC - 0x00AC)
class UPgAIActionWait : public UPgAIAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1946 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionWait::pClassPointer = NULL;

// Class GridGame.PgAIGoal
// 0x0038 (0x00A8 - 0x0070)
class UPgAIGoal : public UPgAIPlannerObject
{
public:
	class UPgAIAction*                                 mCurrentAction;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                mCurrentActionIndex;                              		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FString                                     _HelpText;                                        		// 0x0078 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FName                                       mState;                                           		// 0x0084 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             mStateNames;                                      		// 0x008C (0x000C) [0x0000000000420002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< class UPgAIAction* >                       mAction;                                          		// 0x0098 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      mAffectedByHitEffects : 1;                        		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1947 ];

		return pClassPointer;
	};

};

UClass* UPgAIGoal::pClassPointer = NULL;

// Class GridGame.PgAIActionQueue
// 0x000C (0x00B4 - 0x00A8)
class UPgAIActionQueue : public UPgAIGoal
{
public:
	struct FString                                     mSeqActAIActionQueue;                             		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1948 ];

		return pClassPointer;
	};

};

UClass* UPgAIActionQueue::pClassPointer = NULL;

// Class GridGame.PgAIGoalAttack
// 0x0000 (0x00A8 - 0x00A8)
class UPgAIGoalAttack : public UPgAIGoal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1949 ];

		return pClassPointer;
	};

};

UClass* UPgAIGoalAttack::pClassPointer = NULL;

// Class GridGame.PgAIGoalInvestigate
// 0x0004 (0x00AC - 0x00A8)
class UPgAIGoalInvestigate : public UPgAIGoal
{
public:
	class APgTargetMarker*                             mMarker;                                          		// 0x00A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1950 ];

		return pClassPointer;
	};

};

UClass* UPgAIGoalInvestigate::pClassPointer = NULL;

// Class GridGame.PgAnimBehavior
// 0x0010 (0x004C - 0x003C)
class UPgAnimBehavior : public UObject
{
public:
	float                                              mStartTime;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mEndTime;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCurrentTime;                                     		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mStarted : 1;                                     		// 0x0048 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mEnded : 1;                                       		// 0x0048 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1951 ];

		return pClassPointer;
	};

	bool DebugCompareBehaviorStates ( struct FDebugAnimBehaviorState* One, struct FDebugAnimBehaviorState* Two );
	struct FDebugAnimBehaviorState DebugGetState ( );
};

UClass* UPgAnimBehavior::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorApplyPhysicsAsset
// 0x0034 (0x0080 - 0x004C)
class UPgAnimBehaviorApplyPhysicsAsset : public UPgAnimBehavior
{
public:
	class UPhysicsAsset*                               mPhysicsAsset;                                    		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FFloatBlendValues                           mMotorsValues;                                    		// 0x0050 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FFloatBlendValues                           mDampingValues;                                   		// 0x005C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FFloatBlendValues                           mPhysicsWeight;                                   		// 0x0068 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mStayInRagdollOnEnd : 1;                          		// 0x0074 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              mBlendInLength;                                   		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendOutLength;                                  		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1952 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorApplyPhysicsAsset::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorAttack
// 0x0004 (0x0050 - 0x004C)
class UPgAnimBehaviorAttack : public UPgAnimBehavior
{
public:
	class UPgWeaponFireType*                           mFireType;                                        		// 0x004C (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1953 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorAttack::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorBoost
// 0x000C (0x0058 - 0x004C)
class UPgAnimBehaviorBoost : public UPgAnimBehavior
{
public:
	struct FVector                                     mVelocity;                                        		// 0x004C (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1954 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorBoost::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorCollision
// 0x0004 (0x0050 - 0x004C)
class UPgAnimBehaviorCollision : public UPgAnimBehavior
{
public:
	unsigned long                                      mIgnorePawns : 1;                                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1955 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorCollision::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorConditional
// 0x0008 (0x0054 - 0x004C)
class UPgAnimBehaviorConditional : public UPgAnimBehavior
{
public:
	class UPgCondition*                                mCondition;                                       		// 0x004C (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgAnimBehavior*                             mBehavior;                                        		// 0x0050 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1956 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorConditional::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorDamageSelf
// 0x0008 (0x0054 - 0x004C)
class UPgAnimBehaviorDamageSelf : public UPgAnimBehavior
{
public:
	int                                                mDamage;                                          		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgDamageParam*                              mPgDamageParam;                                   		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1957 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorDamageSelf::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorEvade
// 0x000C (0x0058 - 0x004C)
class UPgAnimBehaviorEvade : public UPgAnimBehavior
{
public:
	struct FName                                       mSocketThatBecomesTarget;                         		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mDebugDraw : 1;                                   		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1958 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorEvade::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorGib
// 0x0024 (0x0070 - 0x004C)
class UPgAnimBehaviorGib : public UPgAnimBehavior
{
public:
	class UPhysicsAsset*                               mGibPhysicsAsset;                                 		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class USkeletalMesh*                               mGibSkeletalMesh;                                 		// 0x0050 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              mDeathMomentumMultiplier;                         		// 0x0054 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector                                     mAdditionalVelocity;                              		// 0x0058 (0x000C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< int >                                      mMaterialRemap;                                   		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1959 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorGib::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorHitReaction
// 0x0004 (0x0050 - 0x004C)
class UPgAnimBehaviorHitReaction : public UPgAnimBehavior
{
public:
	unsigned long                                      mEnable : 1;                                      		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1960 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorHitReaction::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorIgnoreInput
// 0x0004 (0x0050 - 0x004C)
class UPgAnimBehaviorIgnoreInput : public UPgAnimBehavior
{
public:
	unsigned long                                      mbIgnoreMovement : 1;                             		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mbIgnoreLook : 1;                                 		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1961 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorIgnoreInput::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorLineup
// 0x000C (0x0058 - 0x004C)
class UPgAnimBehaviorLineup : public UPgAnimBehavior
{
public:
	unsigned char                                      mLineupTarget;                                    		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mRotationOption;                                  		// 0x004D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mMoveTowardsTarget : 1;                           		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              mMaxDistanceValid;                                		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1962 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorLineup::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorLockTarget
// 0x0000 (0x004C - 0x004C)
class UPgAnimBehaviorLockTarget : public UPgAnimBehavior
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1963 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorLockTarget::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorMagDisc
// 0x0000 (0x004C - 0x004C)
class UPgAnimBehaviorMagDisc : public UPgAnimBehavior
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1964 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorMagDisc::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorManualLineup
// 0x0008 (0x0054 - 0x004C)
class UPgAnimBehaviorManualLineup : public UPgAnimBehavior
{
public:
	float                                              mScaleSpeed;                                      		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBoostSpeed;                                      		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1965 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorManualLineup::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorModifyCameraScore
// 0x000C (0x0058 - 0x004C)
class UPgAnimBehaviorModifyCameraScore : public UPgAnimBehavior
{
public:
	struct FName                                       mCameraStyle;                                     		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAmount;                                          		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1966 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorModifyCameraScore::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorMovement
// 0x0004 (0x0050 - 0x004C)
class UPgAnimBehaviorMovement : public UPgAnimBehavior
{
public:
	float                                              mGroundSpeed;                                     		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1967 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorMovement::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorMovementBlocked
// 0x0011 (0x005D - 0x004C)
class UPgAnimBehaviorMovementBlocked : public UPgAnimBehavior
{
public:
	struct FVector                                     mDirection;                                       		// 0x004C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAngleToleranceInDegrees;                         		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mBehavior;                                        		// 0x005C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1968 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorMovementBlocked::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorPhysics
// 0x0001 (0x004D - 0x004C)
class UPgAnimBehaviorPhysics : public UPgAnimBehavior
{
public:
	unsigned char                                      mPhysics;                                         		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1969 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorPhysics::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorRagdollBoost
// 0x0008 (0x0054 - 0x004C)
class UPgAnimBehaviorRagdollBoost : public UPgAnimBehavior
{
public:
	float                                              mRagdollFromVehicleVerticalSpeedBoost;            		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRagdollFromVehicleSpeedScalar;                   		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1970 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorRagdollBoost::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorRotation
// 0x0020 (0x006C - 0x004C)
class UPgAnimBehaviorRotation : public UPgAnimBehavior
{
public:
	struct FRotator                                    mDesiredRotationOffset;                           		// 0x004C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mRotationOffset;                                  		// 0x0058 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mSnapOptions;                                     		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mLockRotation : 1;                                		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1971 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorRotation::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorScaleDamage
// 0x0004 (0x0050 - 0x004C)
class UPgAnimBehaviorScaleDamage : public UPgAnimBehavior
{
public:
	float                                              mDamageScale;                                     		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1972 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorScaleDamage::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorSetRBAngularVelocity
// 0x000C (0x0058 - 0x004C)
class UPgAnimBehaviorSetRBAngularVelocity : public UPgAnimBehavior
{
public:
	struct FVector                                     mAngularVelocity;                                 		// 0x004C (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1973 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorSetRBAngularVelocity::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorSetVelocity
// 0x000C (0x0058 - 0x004C)
class UPgAnimBehaviorSetVelocity : public UPgAnimBehavior
{
public:
	struct FVector                                     mVelocity;                                        		// 0x004C (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1974 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorSetVelocity::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorShowWeapon
// 0x0004 (0x0050 - 0x004C)
class UPgAnimBehaviorShowWeapon : public UPgAnimBehavior
{
public:
	unsigned long                                      mShowWeapon : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1975 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorShowWeapon::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorTerrainFollow
// 0x0018 (0x0064 - 0x004C)
class UPgAnimBehaviorTerrainFollow : public UPgAnimBehavior
{
public:
	unsigned long                                      mCancelComboOnFail : 1;                           		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mMoveToValidFloor : 1;                            		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FVector                                     mFloorDirection;                                  		// 0x0050 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxFloorDistance;                                		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxAngleChange;                                  		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1976 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorTerrainFollow::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorTimeDilation
// 0x0004 (0x0050 - 0x004C)
class UPgAnimBehaviorTimeDilation : public UPgAnimBehavior
{
public:
	float                                              mTimeDilation;                                    		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1977 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorTimeDilation::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorVault
// 0x0014 (0x0060 - 0x004C)
class UPgAnimBehaviorVault : public UPgAnimBehavior
{
public:
	float                                              mVehicleSpeedScalar;                              		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBoostSpeed;                                      		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mWorldUpFactor;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mVehicleUpFactor;                                 		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mGroundNormalFactor;                              		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1978 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorVault::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorVehicle
// 0x0004 (0x0050 - 0x004C)
class UPgAnimBehaviorVehicle : public UPgAnimBehavior
{
public:
	unsigned long                                      mContinueVelocity : 1;                            		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1979 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorVehicle::pClassPointer = NULL;

// Class GridGame.PgAnimBehaviorWeaponAttach
// 0x000C (0x0058 - 0x004C)
class UPgAnimBehaviorWeaponAttach : public UPgAnimBehavior
{
public:
	struct FName                                       mAttachSocketName;                                		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mReturnToDefaultOnEnd : 1;                        		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1980 ];

		return pClassPointer;
	};

};

UClass* UPgAnimBehaviorWeaponAttach::pClassPointer = NULL;

// Class GridGame.PgPawn
// 0x1090 (0x14AC - 0x041C)
class APgPawn : public AGamePawn
{
public:
	struct FPointer                                    VfTable_IPgMaterialInstanceInterface;             		// 0x041C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgMailingListInterface;                  		// 0x0420 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgCommonPawnInterface;                   		// 0x0424 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgStasisEffectInterface;                 		// 0x0428 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgEnergyInterface;                       		// 0x042C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgDamageParamInterface;                  		// 0x0430 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgCameraCollisionDataSpecifierInterface; 		// 0x0434 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgFreezeEffectInterface;                 		// 0x0438 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x043C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UAkEvent*                                    mFootstepSound;                                   		// 0x0440 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mFootShuffleSound;                                		// 0x0444 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mFootJumpLandSound;                               		// 0x0448 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mRemoteFootstepSound;                             		// 0x044C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mRemoteFootShuffleSound;                          		// 0x0450 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mRemoteFootJumpLandSound;                         		// 0x0454 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                 		// 0x0458 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mCleanupTime;                                     		// 0x045C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AController*                                 mLastController;                                  		// 0x0460 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ULevel*                                      mActorFactoryLevel;                               		// 0x0464 (0x0004) [0x0000000000000000]              
	struct FName                                       mDeadStateName;                                   		// 0x0468 (0x0008) [0x0000000000000000]              
	class AController*                                 mAIControllerArchetype;                           		// 0x0470 (0x0004) [0x0000000000200001]              ( CPF_Edit )
	float                                              mSpawnHiddenTime;                                 		// 0x0474 (0x0004) [0x0000000000000000]              
	class APgPlayerCamera*                             mPgPlayerCameraArchetype;                         		// 0x0478 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mDefaultCameraStyle;                              		// 0x047C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCameraCollisionStartPointOffset;                 		// 0x0484 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ACamera*                                     mLastCamera;                                      		// 0x0488 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mLastVehicleCameraLocation;                       		// 0x048C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mLastVehicleCameraLook;                           		// 0x0498 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mLastVehicleFOV;                                  		// 0x04A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mLastCameraVelocity;                              		// 0x04A8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mTimeLastInVehicle;                               		// 0x04B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mFramesInVehicle;                                 		// 0x04B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPgWeaponRepInfo                            mWeaponRepInfo;                                   		// 0x04BC (0x0008) [0x0000000000000020]              ( CPF_Net )
	TArray< class AInventory* >                        mInventoryArchetypeList;                          		// 0x04C4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                mEnergy;                                          		// 0x04D0 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	int                                                mEnergyMax;                                       		// 0x04D4 (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	unsigned long                                      mEnergyCheat : 1;                                 		// 0x04D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mFreezeEffected : 1;                              		// 0x04D8 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      mUseDefaultInventory : 1;                         		// 0x04D8 (0x0004) [0x0000000000004000] [0x00000004] ( CPF_Config )
	unsigned long                                      mUsingPosEnergyActor : 1;                         		// 0x04D8 (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      mUsingNegEnergyActor : 1;                         		// 0x04D8 (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      mIsSprinting : 1;                                 		// 0x04D8 (0x0004) [0x0000000000002020] [0x00000020] ( CPF_Net | CPF_Transient )
	unsigned long                                      mIsBlocking : 1;                                  		// 0x04D8 (0x0004) [0x0000000000002020] [0x00000040] ( CPF_Net | CPF_Transient )
	unsigned long                                      mWantsToBlock : 1;                                		// 0x04D8 (0x0004) [0x0000000000002020] [0x00000080] ( CPF_Net | CPF_Transient )
	unsigned long                                      mIgnoreBlockingPgPawns : 1;                       		// 0x04D8 (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      mLockDesiredRotation : 1;                         		// 0x04D8 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	unsigned long                                      mDebugWorldMobility : 1;                          		// 0x04D8 (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      mDisablePhysicsWhenNotInRagdoll : 1;              		// 0x04D8 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      mPendingRecovery : 1;                             		// 0x04D8 (0x0004) [0x0000000000002000] [0x00001000] ( CPF_Transient )
	unsigned long                                      mIsInvulnerable : 1;                              		// 0x04D8 (0x0004) [0x0000000000000020] [0x00002000] ( CPF_Net )
	unsigned long                                      mIsStunned : 1;                                   		// 0x04D8 (0x0004) [0x0000000000000020] [0x00004000] ( CPF_Net )
	unsigned long                                      mChangeToVehicle : 1;                             		// 0x04D8 (0x0004) [0x0000000000000020] [0x00008000] ( CPF_Net )
	unsigned long                                      mCanPromote : 1;                                  		// 0x04D8 (0x0004) [0x0000000000000001] [0x00010000] ( CPF_Edit )
	unsigned long                                      mEnhancerEnergyActorPosUseOnly : 1;               		// 0x04D8 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      mCanBeExecuted : 1;                               		// 0x04D8 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      mPerformingExecute : 1;                           		// 0x04D8 (0x0004) [0x0000000000000000] [0x00080000] 
	class APgInventoryPower*                           mPower;                                           		// 0x04DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	class APgInventoryEnhancer*                        mEnhancer;                                        		// 0x04E0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class APgInventoryPassivePower*                    mPassivePowers[ 0x4 ];                            		// 0x04E4 (0x0010) [0x0000000000000020]              ( CPF_Net )
	class APgInventory*                                mReplicatedInventory[ 0x4 ];                      		// 0x04F4 (0x0010) [0x0000000000000020]              ( CPF_Net )
	float                                              mLeechEnergyMult;                                 		// 0x0504 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mEnergyFlowMult;                                  		// 0x0508 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mStasisEffectDuration;                            		// 0x050C (0x0004) [0x0000000000000000]              
	float                                              mStasisEffectTimeDilation;                        		// 0x0510 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mFreezeEffectDuration;                            		// 0x0514 (0x0004) [0x0000000000000000]              
	int                                                mNumVariations;                                   		// 0x0518 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mVariation;                                       		// 0x051C (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              mPowerDamageScalingEffectDuration;                		// 0x0520 (0x0004) [0x0000000000000000]              
	float                                              mPowerDamageScaling;                              		// 0x0524 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mConsideredBlockingThresh;                        		// 0x0528 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxDamageScaling;                                		// 0x052C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgDamageParam*                              mLastMeleeDamageParam;                            		// 0x0530 (0x0004) [0x0000000000000000]              
	float                                              mLastPosEnergyActorUse;                           		// 0x0534 (0x0004) [0x0000000000000000]              
	float                                              mLastNegEnergyActorUse;                           		// 0x0538 (0x0004) [0x0000000000000000]              
	unsigned char                                      mUsingEnergyActorType;                            		// 0x053C (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      mLockedOnTo;                                      		// 0x053D (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mKnockdownState;                                  		// 0x053E (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mComboChainNetDirty;                              		// 0x053F (0x0001) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned char                                      mComboStartPhysics;                               		// 0x0540 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mComboSeqListBranchRep;                           		// 0x0541 (0x0001) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned char                                      mTeamCollisionChannel;                            		// 0x0542 (0x0001) [0x0000000000000000]              
	class APgSmartObject*                              mUsingSmartObject;                                		// 0x0544 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mSprintSpeedModifier;                             		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mWalkSpeedModifier;                               		// 0x054C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlockSpeedModifier;                              		// 0x0550 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mGroundSpeedScalar;                               		// 0x0554 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPgLandRepParameters                        mLandRepParams;                                   		// 0x0558 (0x000C) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0564 (0x000C) MISSED OFFSET
	struct FBoneAtom                                   mRootMotionAccumulation;                          		// 0x0570 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	struct FPgMovementBlockedInfo                      mMovementBlockedInfo;                             		// 0x0590 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	class UPgPlugInList*                               mPlugInListArchetype;                             		// 0x05A4 (0x0004) [0x0000000000200001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x05A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgPlugInComponent*                          mPlugInComponent;                                 		// 0x05AC (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class AActor*                                      mTarget;                                          		// 0x05B0 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class APgSmartObject*                              mTargetedSmartObject;                             		// 0x05B4 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	TArray< class UMaterialInstanceConstant* >         mMaterialInstanceList;                            		// 0x05B8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UPgAnimLocomotionSystem*                     mAnimLocomotionSystem;                            		// 0x05C4 (0x0004) [0x000000000660000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_NoClear | CPF_EditInline )
	TArray< class UPgAnimBehavior* >                   mAnimBehaviors;                                   		// 0x05C8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FPgPawnAnimNodes                            mAnimNodes;                                       		// 0x05D4 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class UPgPawnDamageReaction*                       mDamageReaction;                                  		// 0x05E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mDeathSpecialMove;                                		// 0x05E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mHitReactionSpecialMove;                          		// 0x05EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPgHitEffectReplicationInfo                 mLastHitRepInfo;                                  		// 0x05F0 (0x0038) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class AActor*                                      mLastDamageCauser;                                		// 0x0628 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      mLastDamageInstigator;                            		// 0x062C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mDeathYaw;                                        		// 0x0630 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	struct FPgVelocityForRagdoll                       mToRagdollVelocityInfo;                           		// 0x0634 (0x0030) [0x0000000000002000]              ( CPF_Transient )
	struct FBikeVaultInfo                              mBikeVaultInfo;                                   		// 0x0664 (0x0028) [0x0000000000002000]              ( CPF_Transient )
	class UPgSpecialMoveAsset*                         mSpecialMove;                                     		// 0x068C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPgSpecialMoveState                         mSpecialMoveState;                                		// 0x0690 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	class UPgSpecialMoveAsset*                         mSpecialMoveQueued;                               		// 0x06B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPgSpecialMoveParams                        mSpecialMoveParams;                               		// 0x06B4 (0x0018) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	struct FPgSpecialMoveManualLineupParams            mSpecialMoveManualLineupParams;                   		// 0x06CC (0x0024) [0x0000000000002000]              ( CPF_Transient )
	class UPgSpecialMoveAsset*                         mDodgeSpecialMove;                                		// 0x06F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mSprintJumpSpecialMove;                           		// 0x06F4 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	class UPgSpecialMoveAsset*                         mJumpSpecialMove;                                 		// 0x06F8 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	class UPgSpecialMoveAsset*                         mFallSpecialMove;                                 		// 0x06FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mStunSpecialMove;                                 		// 0x0700 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mStunReviverSpecialMove;                          		// 0x0704 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mStunRevivedSpecialMove;                          		// 0x0708 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mBlockSpecialMove;                                		// 0x070C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mVehicleSpecialMove;                              		// 0x0710 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	class UPgSpecialMoveAsset*                         mMagDiscAnticSpecalMove;                          		// 0x0714 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	class UPgSpecialMoveAsset*                         mMagDiscAnticSpecialMove;                         		// 0x0718 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mMagDiscSpecialMove;                              		// 0x071C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mJumpOffPawnSpecialMove;                          		// 0x0720 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPgSpecialMoveByModeInfo >          mJumpSpecialMoves;                                		// 0x0724 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )
	struct FPgWorldMobilityInfo                        mMuscleUpWallRunMobility;                         		// 0x0730 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FPgWorldMobilityInfo                        mMuscleUpGrabWallWorldMobility;                   		// 0x074C (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FPgWorldMobilityInfo                        mMuscleUpGrabLedgeWorldMobility;                  		// 0x0768 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FPgWorldMobilityInfo                        mWallRunVerticalWorldMobility;                    		// 0x0784 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FPgWorldMobilityInfo                        mWallRunRightWorldMobility;                       		// 0x07A0 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FPgWorldMobilityInfo                        mWallRunLeftWorldMobility;                        		// 0x07BC (0x001C) [0x0000000000000001]              ( CPF_Edit )
	int                                                mCanPerformMagDiscOn;                             		// 0x07D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mMagDiscStateName;                                		// 0x07DC (0x0008) [0x0000000000000000]              
	struct FName                                       mMagDiscAnticStateName;                           		// 0x07E4 (0x0008) [0x0000000000000000]              
	class UPhysicsAsset*                               mDriveToPosePhysicsAsset;                         		// 0x07EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicsAsset*                               mGetupPhysicsAsset;                               		// 0x07F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxKnockdownTimeBeforeRecovery;                  		// 0x07F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDriveToRecoverPositionTime;                      		// 0x07F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mRecoveryLastVelocity;                            		// 0x07FC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mRecoveryNonFreeFallTime;                         		// 0x0808 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mRecoveryNonFreeFallThresh_Vehicle;               		// 0x080C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRecoveryNonFreeFallThresh_Foot;                  		// 0x0810 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRecoveryNonFreeFallThresh;                       		// 0x0814 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mTimeSinceKnockdownStart;                         		// 0x0818 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mIgnoreHitReactionInKnockdownTime;                		// 0x081C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAllowHitReactionInKnockdownTime;                 		// 0x0820 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPgComboBranchInfo                          mComboBranchInfo;                                 		// 0x0824 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FPgComboTimingInfo                          mComboTimingInfo;                                 		// 0x082C (0x0060) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UPgSpecialMoveAsset*                         mComboChain[ 0x8 ];                               		// 0x088C (0x0020) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                mComboChainLength;                                		// 0x08AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mComboMoveTimeElapsed;                            		// 0x08B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mComboTimeToExecuteQueue;                         		// 0x08B4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimNodeSequence*                           mComboMoveNode;                                   		// 0x08B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mComboRandomBranchSeed;                           		// 0x08BC (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                mComboPendingRandomBranchSeed;                    		// 0x08C0 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              mComboRelativeAngleRep;                           		// 0x08C4 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              mComboHoldDurationRep;                            		// 0x08C8 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	struct FPgComboFrameState                          mComboPendingState;                               		// 0x08CC (0x0030) [0x0000000000002000]              ( CPF_Transient )
	float                                              mRagdollAvoidLightwallSec;                        		// 0x08FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRagdollAvoidLightwallTimer;                      		// 0x0900 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UCylinderComponent*                          mDodgeHitCylinderComponent;                       		// 0x0904 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     mLockOnLocation;                                  		// 0x0908 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FPgDamageTracker                            mDamageTracker[ 0x64 ];                           		// 0x0914 (0x0AF0) [0x0000000000000000]              
	int                                                mDamageTrackIndex;                                		// 0x1404 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x1408 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgPawn.mMailingLists
	float                                              mTimeOfLastVault;                                 		// 0x1444 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mBaseXP;                                          		// 0x1448 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mEnhancerEnergyActorHarmScaling;                  		// 0x144C (0x0004) [0x0000000000000000]              
	float                                              mEnhancerTeamEnergyActorHarmScaling;              		// 0x1450 (0x0004) [0x0000000000000000]              
	float                                              mEnhancerTeamEnergyActorHarmScalingTwo;           		// 0x1454 (0x0004) [0x0000000000000000]              
	float                                              mEnhancerEnergyActorBenefitScaling;               		// 0x1458 (0x0004) [0x0000000000000000]              
	float                                              mEnhancerBerserkDamageScaling;                    		// 0x145C (0x0004) [0x0000000000000000]              
	float                                              mEnhancerTeamBerserkDamageScaling;                		// 0x1460 (0x0004) [0x0000000000000000]              
	float                                              mEnhancerTeamBerserkDamageScalingTwo;             		// 0x1464 (0x0004) [0x0000000000000000]              
	float                                              mEnhancerAttackDamageScaling;                     		// 0x1468 (0x0004) [0x0000000000000000]              
	float                                              mEnhancerTeamAttackDamageScaling;                 		// 0x146C (0x0004) [0x0000000000000000]              
	float                                              mEnhancerTeamAttackDamageScalingTwo;              		// 0x1470 (0x0004) [0x0000000000000000]              
	float                                              mEnhancerDamageScaling;                           		// 0x1474 (0x0004) [0x0000000000000000]              
	float                                              mEnhancerTeamDamageScaling;                       		// 0x1478 (0x0004) [0x0000000000000000]              
	float                                              mEnhancerTeamDamageScalingTwo;                    		// 0x147C (0x0004) [0x0000000000000000]              
	int                                                mPlayerSkinIndex;                                 		// 0x1480 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mPowerupAttackDamageScaling;                      		// 0x1484 (0x0004) [0x0000000000000000]              
	float                                              mPowerupDamageScaling;                            		// 0x1488 (0x0004) [0x0000000000000000]              
	int                                                mIsInvisible;                                     		// 0x148C (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	class APgVehicle*                                  mHiddenVehicle;                                   		// 0x1490 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class APgVehicle*                                  mSpawnedVehicle;                                  		// 0x1494 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              mTeamInventoryCheckTime;                          		// 0x1498 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FName >                             mTeammateInventory;                               		// 0x149C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              mMaxAnchorAge;                                    		// 0x14A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1981 ];

		return pClassPointer;
	};

	bool IsInKnockdown ( );
	void eventStartRecoveryTimers ( );
	void ServerKnockdown ( struct FVector RBLinearVelocity, struct FVector RBAngularVelocity, struct FVector RadialOrigin, float RadialRadius, float RadialStrength, struct FVector PointImpulse, struct FVector PointImpulsePosition, struct FName PointImpulseBoneName );
	void OnRadialKnockdownPawn ( class UPgSeqAct_RadialKnockdownPawn* Widget );
	void eventKnockdownStartRecoveryTimer ( );
	void KnockdownRecoverToStanding ( );
	void KnockdownDriveToRecoveryPosition ( );
	bool IsInvisible ( );
	void UnTouchAllVolumes ( );
	bool SetVehicling ( unsigned long vehicling );
	void SetBlocking ( unsigned long blocking );
	void SetSprinting ( unsigned long sprinting );
	void OnTeleport ( class USeqAct_Teleport* Action );
	void StaticOnTeleport ( class AController* PlayerController );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum );
	void DetermineLastDamageCauser ( class AController* InstigatedBy, class AActor* DamageCauser );
	void UpdateStun ( );
	void PerformStunRevived ( );
	void PerformStunReviver ( );
	void PerformStun ( );
	bool StunAllowed ( int inDamage );
	bool IsMagDiscToSmartObj ( );
	void PerformMagDisc ( );
	void ServerPerformMagDiscAntic ( );
	void PerformMagDiscAntic ( );
	int GetBestPowerLevel ( );
	void FXHandleEnergyParticleEffect ( class UParticleSystemComponent* PSC );
	void eventServerSetEnergy ( int energy );
	void SetEnergyMax ( int energyMax );
	int EnergyFlow ( int inEnergy, unsigned long overCharge );
	int HealthFlow ( int inHealth, unsigned long overCharge );
	int EnergyDampenDamage ( int inDamage );
	void MeleeAttack ( struct FVector Center, int Damage, float DamageRadius, float Momentum, class UPgDamageParam* damageParam );
	void ServerPerformDodge ( );
	void PerformDodge ( );
	void UpdateWeaponReplication ( );
	struct FRotator eventGetBaseAimRotation ( );
	struct FRotator GetAdjustedAimFor ( class AWeapon* W, struct FVector StartFireLoc );
	void OnAssignControllerArch ( class UPgSeqAct_AssignControllerArch* inAction );
	void OnRemoveInventoryArch ( class UPgSeqAct_RemoveInventoryArch* inAction );
	void OnGiveInventoryArch ( class UPgSeqAct_GiveInventoryArch* inAction );
	void OnGiveInventory ( class USeqAct_GiveInventory* inAction );
	void RemoveRepInventory ( class APgInventory* Inv );
	void AddRepInventory ( class APgInventory* Inv );
	void ClearPassivePowers ( );
	void RestorePassivePower ( class APgInventoryPassivePower* Power );
	void TossInventory ( class AInventory* Inv, struct FVector ForceVelocity );
	void eventRestoreInventory ( struct FString invString, unsigned long Activate, float invLifeSpan );
	void SetupInventory ( );
	void AddDefaultInventory ( );
	bool CloneCoopInventory ( );
	bool IsFiring ( );
	void InventoryChanged ( );
	void eventServerSetPowerDamageScaling ( float DamageScale, float Duration );
	void PowerDamageScalingTick ( float DeltaSeconds );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void NotifyTakeHit ( class AController* InstigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void AddVelocity ( struct FVector NewVelocity, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo );
	float GetDamageCauserDamageScaling ( class AController* InstigatedBy );
	int GetCumlativeDamage ( float timePassed, struct FName damageCauserArchetypeName );
	void TrackDamage ( int Damage, struct FName damageCauserArchetypeName, struct FName damageInstigatorArchetypeName, int damageInstigatorPlayerIndex );
	float GetDamageScaling ( );
	struct FName GetDefaultCameraMode ( class APlayerController* RequestedBy );
	void SetCameraArchetype ( class APgPlayerCamera* newArchetype );
	class APgPlayerCamera* GetCameraArchetype ( );
	void DrawEnergyActorDebug3D ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void FindWalkBlockingActor ( class AActor** blockActor, struct FVector* HitLocation );
	void DebugDrawCombo ( class AHUD* HUD );
	void DebugDrawAnimation ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DebugDrawOnlinePlayerName ( class AHUD* HUD );
	void PgPostPossession ( class AController* inController );
	void eventFalling ( );
	void eventEncroachedBy ( class AActor* Other );
	void FirePgOnDeathEvents ( class AController* Killer, class AController* KilledController );
	void UnPossessed ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
	bool IsPlayingDriverLeave ( );
	bool IsPlayingDriverEnter ( );
	void eventStopDriving ( class AVehicle* V );
	void AdjustHealthOnStopDriving ( class AVehicle* V );
	void eventStartDriving ( class AVehicle* V );
	void AdjustHealthOnStartDriving ( class AVehicle* V );
	void SetSimulateGravity ( unsigned long Simulated );
	void BaseHiddenVehicle ( );
	void UnHideVehicle ( );
	void HideVehicle ( class APgVehicle* V );
	class APgVehicle* FindHiddenVehicle ( );
	class APgVehicle* GetOnVehicle ( class APgVehicle* newVehicleType, unsigned long playDriverEnter );
	void JumpOffPawn ( );
	bool DoJump ( unsigned long bUpdating );
	void eventSetWalking ( unsigned long bNewIsWalking );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	void event_Suicide ( );
	void SpawnDefaultController ( );
	void eventOnSetMesh ( class USeqAct_SetMesh* Action );
	void SetTargetedSmartObject ( class APgSmartObject* targetedSmartObject );
	class APgSmartObject* GetTargetedSmartObject ( );
	void SetTarget ( class AActor* Target );
	class AActor* GetTarget ( );
	bool LastHitWasKnockdown ( );
	void PerformHitReaction ( );
	class UPgSpecialMoveAsset* GetDamageReactionSpecialMove ( unsigned long findKnockDown );
	class UPgDamageParam* GetDamageReactionDamageParamOverride ( class AActor* DamageCauser );
	float GetDamageReactionDamageScaling ( class AActor* DamageCauser );
	void ReplicatedPlayHitEffects ( );
	void PopulateHitReactionRepInfo ( float Damage, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FVector hitFromLoc, struct FTraceHitInfo* HitInfo );
	int GetDamageReactionIndex ( class AActor* DamageCauser );
	unsigned char GetMovementMode ( );
	void event_TurnOff ( );
	void TurnOff ( );
	void PlayHit ( float Damage, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FVector Momentum, struct FTraceHitInfo HitInfo );
	bool IsPlayingHitReaction ( );
	void OnClothSim ( class UPgSeqAct_ClothSim* Action );
	void SetMovementPhysics ( );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void PlayHitWall ( struct FVector HitNormal );
	void PlayLanded ( float ImpactVel );
	void eventBaseChange ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void PgLockDesiredRotation ( unsigned long bLock );
	void PgSetDesiredRotation ( struct FRotator TargetDesiredRotation );
	void ComboStopProgression ( );
	void ComboSetTime ( float NewTime );
	bool DebugComboCompareStates ( struct FPgComboState* One, struct FPgComboState* Two );
	void ComboEnd ( );
	bool IsInCombo ( );
	void ComboSyncAnimAndBehaviorsToState ( struct FPgComboState* comboState );
	void ComboSetPendingState ( struct FPgComboFrameState* comboPendingState );
	struct FPgComboFrameState ComboGetPendingState ( );
	struct FPgComboState ComboGetState ( );
	bool ComboReplicateWithParams ( class UPgSpecialMoveAsset* specialMoveAsset, struct FPgSpecialMoveParams* Params );
	bool ComboReplicate ( class UPgSpecialMoveAsset* specialMoveAsset );
	bool ComboSimulateWithParams ( class UPgSpecialMoveAsset* SpecialMove, struct FPgSpecialMoveParams* Params );
	bool ComboSimulate ( class UPgSpecialMoveAsset* SpecialMove );
	void PgTickNetworkTime ( float DeltaTime );
	class UPgSpecialMoveAsset* GetSpecialMove ( );
	void OnPerformSpecialMove ( class UPgSeqAct_PerformSpecialMove* specialMoveSeqAct );
	void RagdollDisable ( );
	void SetGroundAudioSwitch ( struct FTraceHitInfo HitInfo );
	void PlayFootSound ( unsigned char WhichImpact );
	void eventPlayFootStepSound ( int FootDown );
	void eventPlayFootJumpSound ( int FootDown );
	void eventPlayFootShuffleSound ( int FootDown );
	bool eventPlayParticleEffect ( class UAnimNotify_PlayParticleEffect* AnimNotifyData );
	void eventPostInitAnimTree ( class USkeletalMeshComponent* SkelComp );
	void eventRootMotionExtracted ( class USkeletalMeshComponent* SkelComp, struct FBoneAtom* ExtractedRootMotionDelta );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	float AnimGetLocomotionTime ( );
	void AnimSetLocomotionTime ( float inTime );
	void AnimPlayActionTree ( class UPgAnimTreeInstance* AnimTreeInstance, float BlendTime );
	bool AnimIsLineup ( );
	void AnimApplyRootMotion ( float DeltaTime, struct FBoneAtom* rootMotionAtom );
	void AnimInit ( );
	void StartMeshLightwallCollisionTimer ( );
	void SetMeshLightwallCollision ( unsigned long collideWithLightwalls );
	void DeInitPlayerTeamCollisionChannels ( );
	void InitPlayerTeamCollisionChannels ( );
	void OnDamageCaused ( int damageCaused, class AActor* damageVictim, class AActor* DamageCauser );
	class UPgDamageParam* GetCauseDamageParam ( );
	TArray< class UMaterialInstanceConstant* > GetMaterialInstanceList ( );
	void InitMaterialInstanceList ( );
	void SetSpecialMoveManualLineup ( struct FVector lineupDist, struct FRotator rotDelta, struct FVector initialLoc );
	void UpdateSpecialMoveManualLineup ( struct FPgSpecialMoveManualLineupParams State );
	struct FPgSpecialMoveState GetSpecialMoveState ( );
	void UpdateSpecialMoveState ( struct FPgSpecialMoveState State );
	struct FName GetTeamName ( );
	void PostEvent ( struct FName EventName, struct FName listName );
	void SetSmartObjectUsage ( class APgSmartObject* smartObject );
	void OnUseSmartObject ( class UPgSeqAct_UseSmartObject* inAction );
	bool SpecialMoveTo ( class ANavigationPoint* Start, class ANavigationPoint* End, class AActor* Next );
	void eventDestroyed ( );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* APgPawn::pClassPointer = NULL;

// Class GridGame.PgAnimLocomotionSystem
// 0x0070 (0x00AC - 0x003C)
class UPgAnimLocomotionSystem : public UObject
{
public:
	struct FString                                     _StatusText;                                      		// 0x003C (0x000C) [0x0000000000422001]              ( CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FTurnTransitionData >               mTurnTransitions;                                 		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimTree*                                   mAnimTreeTemplate_RunToStop;                      		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendTime_RunToStop;                             		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgAnimTreeInstance*                         mAnimTreeInstance_RunToStop;                      		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimTree*                                   mAnimTreeTemplate_IdleToStart;                    		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendTime_IdleToStart;                           		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgAnimTreeInstance*                         mAnimTreeInstance_IdleToStart;                    		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimTree*                                   mAnimTreeTemplate_Landing;                        		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgAnimTreeInstance*                         mAnimTreeInstance_Landing;                        		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mIdleToInactiveSec;                               		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendTime_IdleToInactive;                        		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAnimTree*                                   mAnimTreeTemplate_IdleToInactive;                 		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgAnimTreeInstance*                         mAnimTreeInstance_IdleToInactive;                 		// 0x0080 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FPhaseTimingData >                  mLocomotionPhaseTimes;                            		// 0x0084 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              mLandMinimumImpactMagnitude;                      		// 0x0090 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mPlayingTurnTransition : 1;                       		// 0x0094 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mPlayingStartTransition : 1;                      		// 0x0094 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      mPlayingStopTransition : 1;                       		// 0x0094 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      mPlayingLandTransition : 1;                       		// 0x0094 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      mPlayingInactiveAnim : 1;                         		// 0x0094 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	class UAnimTree*                                   mPawnAnimTree;                                    		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgAnimNodeSequence*                         mCurrentAnimNodeSeq;                              		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimNodeSequence*                           mIdleAnimNodeSeq;                                 		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAnimNodeSequence*                           mLocoAnimNodeSeq;                                 		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mIdleSeconds;                                     		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1982 ];

		return pClassPointer;
	};

};

UClass* UPgAnimLocomotionSystem::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendByDriving
// 0x0004 (0x00FC - 0x00F8)
class UPgAnimNodeBlendByDriving : public UAnimNodeBlend
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x00F8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1983 ];

		return pClassPointer;
	};

	void StopDriving ( );
	void StartDriving ( );
};

UClass* UPgAnimNodeBlendByDriving::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendByPhysics
// 0x001C (0x0120 - 0x0104)
class UPgAnimNodeBlendByPhysics : public UAnimNodeBlendList
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x0104 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	float                                              mBlendTime;                                       		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mKeepInitialBranch : 1;                           		// 0x010C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< int >                                      mPhysicsToConnectorMap;                           		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mWaitTimeBeforeBlend;                             		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1984 ];

		return pClassPointer;
	};

	void SetTimeToWaitBeforeBlend ( float waitTime );
};

UClass* UPgAnimNodeBlendByPhysics::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendBySpeedBase
// 0x0000 (0x0128 - 0x0128)
class UPgAnimNodeBlendBySpeedBase : public UAnimNodeBlendBySpeed
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1985 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBlendBySpeedBase::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendByVehicle
// 0x0004 (0x0108 - 0x0104)
class UPgAnimNodeBlendByVehicle : public UAnimNodeBlendList
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x0104 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1986 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBlendByVehicle::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendByVehicleBrake
// 0x000F (0x00F4 - 0x00E5)
class UPgAnimNodeBlendByVehicleBrake : public UAnimNodeBlendBase
{
public:
	int                                                mSingleAnimAtOrAboveLOD;                          		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRate;                                            		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBrake;                                           		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1987 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBlendByVehicleBrake::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendByVehicleSteering
// 0x000F (0x00F4 - 0x00E5)
class UPgAnimNodeBlendByVehicleSteering : public UAnimNodeBlendBase
{
public:
	int                                                mSingleAnimAtOrAboveLOD;                          		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRate;                                            		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mSteering;                                        		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1988 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBlendByVehicleSteering::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendByVehicleThrottle
// 0x000F (0x00F4 - 0x00E5)
class UPgAnimNodeBlendByVehicleThrottle : public UAnimNodeBlendBase
{
public:
	int                                                mSingleAnimAtOrAboveLOD;                          		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRate;                                            		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mThrottle;                                        		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1989 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBlendByVehicleThrottle::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendListNamed
// 0x0000 (0x0104 - 0x0104)
class UPgAnimNodeBlendListNamed : public UAnimNodeBlendList
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1990 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBlendListNamed::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendListSubtree
// 0x000C (0x0110 - 0x0104)
class UPgAnimNodeBlendListSubtree : public UAnimNodeBlendList
{
public:
	struct FString                                     HelpText1;                                        		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1991 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBlendListSubtree::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendPreview
// 0x0018 (0x0110 - 0x00F8)
class UPgAnimNodeBlendPreview : public UAnimNodeBlend
{
public:
	struct FString                                     _HelpText;                                        		// 0x00F8 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	float                                              mBlendTime;                                       		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mWaitTime;                                        		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCurrentWaitTime;                                 		// 0x010C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1992 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBlendPreview::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBlendToBestMatch
// 0x0038 (0x013C - 0x0104)
class UPgAnimNodeBlendToBestMatch : public UAnimNodeBlendList
{
public:
	struct FString                                     _HelpText1;                                       		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _StatusText;                                      		// 0x0110 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FName                                       mBoneNamesToConsider[ 0x3 ];                      		// 0x011C (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mSocketToFace;                                    		// 0x0134 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1993 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBlendToBestMatch::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBranchByLandImpact
// 0x0024 (0x0128 - 0x0104)
class UPgAnimNodeBranchByLandImpact : public UAnimNodeBlendList
{
public:
	struct FString                                     _HelpText;                                        		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _StatusText;                                      		// 0x0110 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< float >                                    mImpactConstraints;                               		// 0x011C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1994 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBranchByLandImpact::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBranchByLandSpeed
// 0x0024 (0x0128 - 0x0104)
class UPgAnimNodeBranchByLandSpeed : public UAnimNodeBlendList
{
public:
	struct FString                                     _HelpText;                                        		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _StatusText;                                      		// 0x0110 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< float >                                    mSpeedConstraints;                                		// 0x011C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1995 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBranchByLandSpeed::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBranchBySpeed
// 0x0024 (0x0128 - 0x0104)
class UPgAnimNodeBranchBySpeed : public UAnimNodeBlendList
{
public:
	struct FString                                     __HelpText;                                       		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     __StatusText;                                     		// 0x0110 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< float >                                    mSpeeds;                                          		// 0x011C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1996 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBranchBySpeed::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBranchByTargetDir
// 0x000C (0x0110 - 0x0104)
class UPgAnimNodeBranchByTargetDir : public UAnimNodeBlendList
{
public:
	struct FString                                     _HelpText;                                        		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1997 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBranchByTargetDir::pClassPointer = NULL;

// Class GridGame.PgAnimNodeBranchByTurnAngle
// 0x0044 (0x0148 - 0x0104)
class UPgAnimNodeBranchByTurnAngle : public UAnimNodeBlendList
{
public:
	struct FString                                     _HelpText1;                                       		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText2;                                       		// 0x0110 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText3;                                       		// 0x011C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _StatusText;                                      		// 0x0128 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	float                                              mForwardStartsAtAngle;                            		// 0x0134 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              mSideStartsAtAngle;                               		// 0x0138 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              mBackStartsAtAngle;                               		// 0x013C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              mBlendIntoTurnAnim;                               		// 0x0140 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              mBlendIntoForwardAnim;                            		// 0x0144 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1998 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeBranchByTurnAngle::pClassPointer = NULL;

// Class GridGame.PgAnimNodeImpactSystemByAttack
// 0x000C (0x0110 - 0x0104)
class UPgAnimNodeImpactSystemByAttack : public UAnimNodeBlendList
{
public:
	struct FString                                     HelpText1;                                        		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1999 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeImpactSystemByAttack::pClassPointer = NULL;

// Class GridGame.PgAnimNodeImpactSystemByBone
// 0x000C (0x0110 - 0x0104)
class UPgAnimNodeImpactSystemByBone : public UAnimNodeBlendList
{
public:
	struct FString                                     HelpText1;                                        		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2000 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeImpactSystemByBone::pClassPointer = NULL;

// Class GridGame.PgAnimNodeImpactSystemKnockdown
// 0x0034 (0x0138 - 0x0104)
class UPgAnimNodeImpactSystemKnockdown : public UAnimNodeBlendList
{
public:
	struct FString                                     HelpText1;                                        		// 0x0104 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     HelpText2;                                        		// 0x0110 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     HelpText3;                                        		// 0x011C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _StatusText;                                      		// 0x0128 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	float                                              mBlendTime;                                       		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2001 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeImpactSystemKnockdown::pClassPointer = NULL;

// Class GridGame.PgAnimNodeImpactSystemRagdoll
// 0x000F (0x00F4 - 0x00E5)
class UPgAnimNodeImpactSystemRagdoll : public UAnimNodeBlendBase
{
public:
	struct FString                                     HelpText1;                                        		// 0x00E8 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2002 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeImpactSystemRagdoll::pClassPointer = NULL;

// Class GridGame.PgAnimNodeLoop
// 0x0004 (0x0108 - 0x0104)
class UPgAnimNodeLoop : public UAnimNodeBlendList
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x0104 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2003 ];

		return pClassPointer;
	};

	void PlayAnim ( unsigned long bLoop, float Rate, float StartTime );
};

UClass* UPgAnimNodeLoop::pClassPointer = NULL;

// Class GridGame.PgAnimNodeModifyExistingBlend
// 0x0027 (0x010C - 0x00E5)
class UPgAnimNodeModifyExistingBlend : public UAnimNodeBlendBase
{
public:
	struct FString                                     __HelpText1;                                      		// 0x00E8 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     __HelpText2;                                      		// 0x00F4 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FName                                       mBlendNodeNameToModify;                           		// 0x0100 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAnimNodeBlend*                              mAnimNodeBlend;                                   		// 0x0108 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2004 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeModifyExistingBlend::pClassPointer = NULL;

// Class GridGame.PgAnimNodeNoise
// 0x001B (0x0100 - 0x00E5)
class UPgAnimNodeNoise : public UAnimNodeBlendBase
{
public:
	struct FString                                     HelpText1;                                        		// 0x00E8 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FJointNoiseStruct >                 mJointSettings;                                   		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2005 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeNoise::pClassPointer = NULL;

// Class GridGame.PgAnimNodeRandom
// 0x0014 (0x012C - 0x0118)
class UPgAnimNodeRandom : public UAnimNodeRandom
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x0118 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     HelpText1;                                        		// 0x011C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	unsigned long                                      mChooseAgainOnChildAnimEnd : 1;                   		// 0x0128 (0x0004) [0x0000000020000000] [0x00000001] ( CPF_Deprecated )
	unsigned long                                      mChooseOnBecomeRelevant : 1;                      		// 0x0128 (0x0004) [0x0000000020002000] [0x00000002] ( CPF_Transient | CPF_Deprecated )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2006 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeRandom::pClassPointer = NULL;

// Class GridGame.PgAnimNodeSequence
// 0x003E (0x0168 - 0x012A)
class UPgAnimNodeSequence : public UAnimNodeSequence
{
public:
	struct FString                                     _HelpText;                                        		// 0x012C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _StatusText;                                      		// 0x0138 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	float                                              mLocomotionBlendTime;                             		// 0x0144 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLocomotionPhase;                                 		// 0x0148 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	unsigned long                                      mShouldMirrorBasedOnPhase : 1;                    		// 0x014C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mShouldMatchLocoPhaseOnEnd : 1;                   		// 0x014C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCamAnimRelativeToActor : 1;                      		// 0x014C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FName                                       mLandTransitionName;                              		// 0x0150 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLandTransitionBlendTime;                         		// 0x0158 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UPgAnimBehavior* >                   mAnimBehaviors;                                   		// 0x015C (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2007 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeSequence::pClassPointer = NULL;

// Class GridGame.PgAnimNodeSequenceList
// 0x0014 (0x0118 - 0x0104)
class UPgAnimNodeSequenceList : public UAnimNodeBlendList
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x0104 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     _StatusText;                                      		// 0x0108 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	float                                              mBlendTime;                                       		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2008 ];

		return pClassPointer;
	};

	void SetActiveChild ( int ChildIndex, float BlendTime );
};

UClass* UPgAnimNodeSequenceList::pClassPointer = NULL;

// Class GridGame.PgAnimNodeSequenceStack
// 0x0012 (0x013C - 0x012A)
class UPgAnimNodeSequenceStack : public UAnimNodeSequence
{
public:
	unsigned long                                      bAutoStart : 1;                                   		// 0x012C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLoopLastSequence : 1;                            		// 0x012C (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FName >                             SeqStack;                                         		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2009 ];

		return pClassPointer;
	};

	void eventOnInit ( );
	void PlayAnimationSet ( TArray< struct FName > Sequences, float SeqRate, unsigned long bLoopLast );
	void PlayAnimation ( struct FName Sequence, float SeqRate, unsigned long bSeqLoop );
};

UClass* UPgAnimNodeSequenceStack::pClassPointer = NULL;

// Class GridGame.PgAnimNodeSubtree
// 0x001C (0x00F0 - 0x00D4)
class UPgAnimNodeSubtree : public UAnimNode
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x00D4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      mbDynamic : 1;                                    		// 0x00D8 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      mbUseSavedPose : 1;                               		// 0x00D8 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	class UAnimTree*                                   mAnimTreeTemplate;                                		// 0x00DC (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UAnimTree*                                   mAnimTreeInstance;                                		// 0x00E0 (0x0004) [0x0000000000202002]              ( CPF_Const | CPF_Transient )
	TArray< struct FBoneAtom >                         mSavedPose;                                       		// 0x00E4 (0x000C) [0x0000000000602002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2010 ];

		return pClassPointer;
	};

	void StopAnim ( );
	void PlayAnim ( unsigned long bLoop, float Rate, float StartTime );
	void SetAnimTreeInstance ( class UPgAnimTreeInstance* animSubtree );
	void GenerateAnimTreeFromTemplate ( class UAnimTree* animSubtree );
};

UClass* UPgAnimNodeSubtree::pClassPointer = NULL;

// Class GridGame.PgAnimNotify_PhaseMarker
// 0x0004 (0x0040 - 0x003C)
class UPgAnimNotify_PhaseMarker : public UAnimNotify
{
public:
	float                                              mPhaseValue;                                      		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2011 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNotify_PhaseMarker::pClassPointer = NULL;

// Class GridGame.PgAnimTreeInstance
// 0x0004 (0x0040 - 0x003C)
class UPgAnimTreeInstance : public UObject
{
public:
	class UAnimTree*                                   mAnimTreeInstance;                                		// 0x003C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2012 ];

		return pClassPointer;
	};

	class UPgAnimTreeInstance* GenerateInstanceFromTemplate ( class UAnimTree* AnimTreeTemplate );
};

UClass* UPgAnimTreeInstance::pClassPointer = NULL;

// Class GridGame.PgComboNodeInterface
// 0x0000 (0x003C - 0x003C)
class UPgComboNodeInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2013 ];

		return pClassPointer;
	};

};

UClass* UPgComboNodeInterface::pClassPointer = NULL;

// Class GridGame.PgAutoTestManager
// 0x0000 (0x0264 - 0x0264)
class APgAutoTestManager : public AAutoTestManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2014 ];

		return pClassPointer;
	};

	void EnableMemUpdate ( unsigned long bEnable );
	void StopCurrentFMV ( );
	void AddSentinelLabel ( struct FString Label, struct FVector InLocation, struct FRotator InRotation );
	void eventOnAutotestComplete ( );
	void DoTravelTheWorld ( );
	void GatherStats ( );
	bool CheckForSentinelRun ( );
	void InitializeOptions ( struct FString Options );
};

UClass* APgAutoTestManager::pClassPointer = NULL;

// Class GridGame.PgSeqAct_AutotestComplete
// 0x0001 (0x00E9 - 0x00E8)
class UPgSeqAct_AutotestComplete : public USequenceAction
{
public:
	unsigned char                                      Status;                                           		// 0x00E8 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2015 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_AutotestComplete::pClassPointer = NULL;

// Class GridGame.PgSeqAct_AutotestMessage
// 0x000C (0x00F4 - 0x00E8)
class UPgSeqAct_AutotestMessage : public USequenceAction
{
public:
	struct FString                                     Message;                                          		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2016 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_AutotestMessage::pClassPointer = NULL;

// Class GridGame.PgCriticallyDampedSpring
// 0x0000 (0x003C - 0x003C)
class UPgCriticallyDampedSpring : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2017 ];

		return pClassPointer;
	};

};

UClass* UPgCriticallyDampedSpring::pClassPointer = NULL;

// Class GridGame.PgCriticallyDampedSpring_Float
// 0x0018 (0x0054 - 0x003C)
class UPgCriticallyDampedSpring_Float : public UObject
{
public:
	struct FPointer                                    VfTable_IPgCriticallyDampedSpring;                		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned char                                      mIntegrator;                                      		// 0x0040 (0x0001) [0x0000000000000000]              
	struct FIntegrationState                           mState;                                           		// 0x0044 (0x0008) [0x0000000000000000]              
	struct FSpringParameters                           mParameters;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              mGoal;                                            		// 0x0050 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2018 ];

		return pClassPointer;
	};

	struct FString ToString ( );
	struct FString SpringParametersToString ( struct FSpringParameters P );
	bool IsFullyCompressed ( float kThreshold );
	float GetGoal ( );
	float GetVelocity ( );
	float GetPosition ( );
	struct FSpringParameters GetParameters ( );
};

UClass* UPgCriticallyDampedSpring_Float::pClassPointer = NULL;

// Class GridGame.PgCriticallyDampedSpring_Orbit
// 0x000C (0x0048 - 0x003C)
class UPgCriticallyDampedSpring_Orbit : public UObject
{
public:
	struct FPointer                                    VfTable_IPgCriticallyDampedSpring;                		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPgCriticallyDampedSpring_Rotator*           Rotation;                                         		// 0x0040 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCriticallyDampedSpring_Float*             Magnitude;                                        		// 0x0044 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2019 ];

		return pClassPointer;
	};

	struct FString ToString ( );
	struct FString SpringParametersToString ( struct FOrbitSpringParameters P );
	struct FOrbitSpringParameters GetParameters ( );
	struct FOrbitComponents GetGoal ( );
	struct FOrbitComponents GetPosition ( );
	bool IsFullyCompressed ( );
};

UClass* UPgCriticallyDampedSpring_Orbit::pClassPointer = NULL;

// Class GridGame.PgCriticallyDampedSpring_Rotator
// 0x0010 (0x004C - 0x003C)
class UPgCriticallyDampedSpring_Rotator : public UObject
{
public:
	struct FPointer                                    VfTable_IPgCriticallyDampedSpring;                		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPgCriticallyDampedSpring_Float*             Pitch;                                            		// 0x0040 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCriticallyDampedSpring_Float*             Yaw;                                              		// 0x0044 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCriticallyDampedSpring_Float*             Roll;                                             		// 0x0048 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2020 ];

		return pClassPointer;
	};

	struct FString ToString ( );
	struct FString SpringParametersToString ( struct FRotationSpringParameters P );
	bool IsFullyCompressed ( );
	struct FRotator GetGoal ( );
	struct FRotator GetVelocity ( );
	struct FRotator GetPosition ( );
	struct FRotationSpringParameters GetParameters ( );
};

UClass* UPgCriticallyDampedSpring_Rotator::pClassPointer = NULL;

// Class GridGame.PgCriticallyDampedSpring_Vector
// 0x0010 (0x004C - 0x003C)
class UPgCriticallyDampedSpring_Vector : public UObject
{
public:
	struct FPointer                                    VfTable_IPgCriticallyDampedSpring;                		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPgCriticallyDampedSpring_Float*             X;                                                		// 0x0040 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCriticallyDampedSpring_Float*             Y;                                                		// 0x0044 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCriticallyDampedSpring_Float*             Z;                                                		// 0x0048 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2021 ];

		return pClassPointer;
	};

	struct FString ToString ( );
	struct FVectorSpringParameters GetParameters ( );
	bool IsFullyCompressed ( );
};

UClass* UPgCriticallyDampedSpring_Vector::pClassPointer = NULL;

// Class GridGame.PgPhysicsSimulationContainer
// 0x0014 (0x0050 - 0x003C)
class UPgPhysicsSimulationContainer : public UObject
{
public:
	TArray< class UPgPhysicsSimulationObject* >        mSimulationObjects;                               		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              mTimeAccumulator;                                 		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mTickRate;                                        		// 0x004C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2022 ];

		return pClassPointer;
	};

};

UClass* UPgPhysicsSimulationContainer::pClassPointer = NULL;

// Class GridGame.PgPhysicsSimulationContainer_PgCamera
// 0x0008 (0x0058 - 0x0050)
class UPgPhysicsSimulationContainer_PgCamera : public UPgPhysicsSimulationContainer
{
public:
	class UPgCamera*                                   mCamera;                                          		// 0x0050 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0054 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2023 ];

		return pClassPointer;
	};

};

UClass* UPgPhysicsSimulationContainer_PgCamera::pClassPointer = NULL;

// Class GridGame.PgPhysicsSimulationObject
// 0x0000 (0x003C - 0x003C)
class UPgPhysicsSimulationObject : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2024 ];

		return pClassPointer;
	};

};

UClass* UPgPhysicsSimulationObject::pClassPointer = NULL;

// Class GridGame.PgPhysicsSimulationObject_CriticallyDampedFloatSpring
// 0x000C (0x0048 - 0x003C)
class UPgPhysicsSimulationObject_CriticallyDampedFloatSpring : public UPgPhysicsSimulationObject
{
public:
	struct FPointer                                    VfTable_IPgPhysicsSimulationObject_Spring;        		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPgCriticallyDampedSpring_Float*             mSpring;                                          		// 0x0040 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	float                                              mPreviousState;                                   		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2025 ];

		return pClassPointer;
	};

	struct FString ToString ( );
};

UClass* UPgPhysicsSimulationObject_CriticallyDampedFloatSpring::pClassPointer = NULL;

// Class GridGame.PgPhysicsSimulationObject_CriticallyDampedOrbitSpring
// 0x0018 (0x0054 - 0x003C)
class UPgPhysicsSimulationObject_CriticallyDampedOrbitSpring : public UPgPhysicsSimulationObject
{
public:
	struct FPointer                                    VfTable_IPgPhysicsSimulationObject_Spring;        		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPgCriticallyDampedSpring_Orbit*             mSpring;                                          		// 0x0040 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	struct FOrbitComponents                            mPreviousState;                                   		// 0x0044 (0x0010) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2026 ];

		return pClassPointer;
	};

	struct FString ToString ( );
};

UClass* UPgPhysicsSimulationObject_CriticallyDampedOrbitSpring::pClassPointer = NULL;

// Class GridGame.PgPhysicsSimulationObject_CriticallyDampedRotatorSpring
// 0x0014 (0x0050 - 0x003C)
class UPgPhysicsSimulationObject_CriticallyDampedRotatorSpring : public UPgPhysicsSimulationObject
{
public:
	struct FPointer                                    VfTable_IPgPhysicsSimulationObject_Spring;        		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPgCriticallyDampedSpring_Rotator*           mSpring;                                          		// 0x0040 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	struct FRotator                                    mPreviousState;                                   		// 0x0044 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2027 ];

		return pClassPointer;
	};

	struct FString ToString ( );
};

UClass* UPgPhysicsSimulationObject_CriticallyDampedRotatorSpring::pClassPointer = NULL;

// Class GridGame.PgPhysicsSimulationObject_CriticallyDampedVectorSpring
// 0x0014 (0x0050 - 0x003C)
class UPgPhysicsSimulationObject_CriticallyDampedVectorSpring : public UPgPhysicsSimulationObject
{
public:
	struct FPointer                                    VfTable_IPgPhysicsSimulationObject_Spring;        		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPgCriticallyDampedSpring_Vector*            mSpring;                                          		// 0x0040 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	struct FVector                                     mPreviousState;                                   		// 0x0044 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2028 ];

		return pClassPointer;
	};

	struct FString ToString ( );
};

UClass* UPgPhysicsSimulationObject_CriticallyDampedVectorSpring::pClassPointer = NULL;

// Class GridGame.PgPhysicsSimulationObject_Spring
// 0x0000 (0x003C - 0x003C)
class UPgPhysicsSimulationObject_Spring : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2029 ];

		return pClassPointer;
	};

};

UClass* UPgPhysicsSimulationObject_Spring::pClassPointer = NULL;

// Class GridGame.PgCamera
// 0x0000 (0x003C - 0x003C)
class UPgCamera : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2030 ];

		return pClassPointer;
	};

	class UPgCamera* GetRootCamera ( );
	struct FTViewTarget GetViewTargetParameters ( );
	struct FName GetFullCameraStyle ( );
	void DisplayDebug ( class APgPlayerCamera* PlayerCamera, class UPgDisplayDebugHelper* helper );
	void DrawDebugInfo ( class AHUD* HUD );
	struct FName GetName ( );
};

UClass* UPgCamera::pClassPointer = NULL;

// Class GridGame.PgCamera_PgMatinee
// 0x0028 (0x0064 - 0x003C)
class UPgCamera_PgMatinee : public UObject
{
public:
	struct FPointer                                    VfTable_IPgCamera;                                		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      mbIsActive : 1;                                   		// 0x0040 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mbIsScrubber : 1;                                 		// 0x0040 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class UPgCameraBlenderSettings*                    mBlendSettings;                                   		// 0x0044 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	struct FTPOV                                       mPOV;                                             		// 0x0048 (0x001C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2031 ];

		return pClassPointer;
	};

	void DisplayDebug ( class APgPlayerCamera* PlayerCamera, class UPgDisplayDebugHelper* helper );
	struct FName GetName ( );
	struct FTViewTarget GetViewTargetParameters ( );
	void DrawDebugInfo ( class AHUD* HUD );
	class UPgCamera* GetRootCamera ( );
	struct FName GetFullCameraStyle ( );
};

UClass* UPgCamera_PgMatinee::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour
// 0x0064 (0x00A0 - 0x003C)
class UPgCamera_PgOrbit_Behaviour : public UObject
{
public:
	class UPgCamera_PgOrbitCam*                        mOrbitCamera;                                     		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mbIsActive : 1;                                   		// 0x0040 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mbEnabled : 1;                                    		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mbUseRotationSpringParametersYaw : 1;             		// 0x0040 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      mbUseRotationSpringParametersPitch : 1;           		// 0x0040 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      mbUseRotationSpringParametersRoll : 1;            		// 0x0040 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      mbUseOrbitSpringParametersMagnitude : 1;          		// 0x0040 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      mbUseOrbitSpringParametersYaw : 1;                		// 0x0040 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      mbUseOrbitSpringParametersPitch : 1;              		// 0x0040 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      mbUseOrbitSpringParametersRoll : 1;               		// 0x0040 (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      mbUseOrbitAnchorSpringParameters : 1;             		// 0x0040 (0x0004) [0x0000000000002000] [0x00000200] ( CPF_Transient )
	struct FString                                     __Description__;                                  		// 0x0044 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FRotator                                    mGoalRotationOffset;                              		// 0x0050 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FOrbitComponents                            mGoalOrbitOffset;                                 		// 0x005C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mGoalOrbitAnchorOffset;                           		// 0x006C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FSpringParameters                           mOrbitSpringParametersMagnitude;                  		// 0x0078 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FSpringParameters                           mOrbitSpringParametersYaw;                        		// 0x007C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FSpringParameters                           mOrbitSpringParametersPitch;                      		// 0x0080 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FSpringParameters                           mOrbitSpringParametersRoll;                       		// 0x0084 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVectorSpringParameters                     mOrbitAnchorSpringParameters;                     		// 0x0088 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FSpringParameters                           mRotationSpringParametersYaw;                     		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FSpringParameters                           mRotationSpringParametersPitch;                   		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FSpringParameters                           mRotationSpringParametersRoll;                    		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2032 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_Collision
// 0x0020 (0x00C0 - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_Collision : public UPgCamera_PgOrbit_Behaviour
{
public:
	unsigned long                                      mbDoAvoidance : 1;                                		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< struct FVector >                           mUnitVectors;                                     		// 0x00A4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< float >                                    mTraceResults;                                    		// 0x00B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                mNextIndex;                                       		// 0x00BC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2033 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_Collision::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_Idle
// 0x002C (0x00CC - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_Idle : public UPgCamera_PgOrbit_Behaviour
{
public:
	int                                                mTargetOffsetPitch;                               		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mTargetOffsetYaw;                                 		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mPositionPitch;                                   		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mPositionYaw;                                     		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTruncation;                                      		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendInTime;                                     		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendOutTime;                                    		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mIdleTriggerTime;                                 		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mActionScalar;                                    		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendFraction;                                   		// 0x00C4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mIdleTimer;                                       		// 0x00C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2034 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_Idle::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_KeepTargetInView
// 0x003C (0x00DC - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_KeepTargetInView : public UPgCamera_PgOrbit_Behaviour
{
public:
	struct FRotator                                    mMaxAdjustment;                                   		// 0x00A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FPointOfInterest >                  mPointsOfInterest;                                		// 0x00AC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              mExistenceBlendTime;                              		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinDistance;                                     		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxDistance;                                     		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTargetWeight;                                    		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mSelfWeight;                                      		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mOtherWeight;                                     		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinZoomOutSize;                                  		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mZoomOutPerSize;                                  		// 0x00D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxZoom;                                         		// 0x00D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2035 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_KeepTargetInView::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_ModifyCameraOrbit
// 0x0010 (0x00B0 - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_ModifyCameraOrbit : public UPgCamera_PgOrbit_Behaviour
{
public:
	struct FOrbitComponents                            mOrbitOffset;                                     		// 0x00A0 (0x0010) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2036 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_ModifyCameraOrbit::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_ModifyCameraRotation
// 0x000C (0x00AC - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_ModifyCameraRotation : public UPgCamera_PgOrbit_Behaviour
{
public:
	struct FRotator                                    mRotationOffset;                                  		// 0x00A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2037 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_ModifyCameraRotation::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_OrbitToFrameEnemyAndPlayer
// 0x0014 (0x00B4 - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_OrbitToFrameEnemyAndPlayer : public UPgCamera_PgOrbit_Behaviour
{
public:
	struct FRotator                                    mDesiredRotation;                                 		// 0x00A0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mMaxYaw;                                          		// 0x00AC (0x0004) [0x0000000000000000]              
	float                                              mMaxPitch;                                        		// 0x00B0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2038 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_OrbitToFrameEnemyAndPlayer::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_ResumeLastCameraPositionOnActivate
// 0x0004 (0x00A4 - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_ResumeLastCameraPositionOnActivate : public UPgCamera_PgOrbit_Behaviour
{
public:
	unsigned long                                      mbHasActivated : 1;                               		// 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2039 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_ResumeLastCameraPositionOnActivate::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_RightStickFreeCam
// 0x004C (0x00EC - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_RightStickFreeCam : public UPgCamera_PgOrbit_Behaviour
{
public:
	unsigned long                                      mbResetLocationWhenMovingAndNoInput : 1;          		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              mResetBackwardDeadZoneDegrees;                    		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mResetIgnoredByCameraProximity;                   		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mResetIgnoredIfStickDeflectedInLastXSeconds;      		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mResetIgnoredRadius;                              		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotationSpringParameters                   mGoalSeekSpringParameters;                        		// 0x00B4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotationSpringParameters                   mForcedResetGoalSeekSpringParameters;             		// 0x00C0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mForceResetTimer;                                 		// 0x00CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mForceResetTime;                                  		// 0x00D0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mState;                                           		// 0x00D4 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	struct FPgMailboxPtrNative                         mMailboxPtr;                                      		// 0x00D8 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FVector                                     mResetIgnoredCachedLocation;                      		// 0x00DC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mLastTouchedTimer;                                		// 0x00E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2040 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_RightStickFreeCam::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_RightStickFreeYawAndRotatePitch
// 0x0000 (0x00EC - 0x00EC)
class UPgCamera_PgOrbit_Behaviour_RightStickFreeYawAndRotatePitch : public UPgCamera_PgOrbit_Behaviour_RightStickFreeCam
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2041 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_RightStickFreeYawAndRotatePitch::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_RightStickYawsAroundTarget
// 0x0010 (0x00B0 - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_RightStickYawsAroundTarget : public UPgCamera_PgOrbit_Behaviour
{
public:
	float                                              mRotationForce;                                   		// 0x00A0 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	struct FSpringParameters                           mYawSpringParameters;                             		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mPreviousYawTarget;                               		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mYawTarget;                                       		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2042 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_RightStickYawsAroundTarget::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_RollCameraWithTarget
// 0x000C (0x00AC - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_RollCameraWithTarget : public UPgCamera_PgOrbit_Behaviour
{
public:
	float                                              mCameraRollToAngle;                               		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRollDeadZoneAngle;                               		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mJitterBuffer;                                    		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2043 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_RollCameraWithTarget::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_SetCameraTargetToLastKiller
// 0x0010 (0x00B0 - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_SetCameraTargetToLastKiller : public UPgCamera_PgOrbit_Behaviour
{
public:
	struct FViewTargetTransitionParams                 mTransitionParameters;                            		// 0x00A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mLastTarget;                                      		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2044 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_SetCameraTargetToLastKiller::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_TargetRelativeVelocityOffset
// 0x0010 (0x00B0 - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_TargetRelativeVelocityOffset : public UPgCamera_PgOrbit_Behaviour
{
public:
	struct FVector                                     mLookAheadAmount;                                 		// 0x00A0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinimumVelocity;                                 		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2045 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_TargetRelativeVelocityOffset::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbit_Behaviour_WorldSpring
// 0x0094 (0x0134 - 0x00A0)
class UPgCamera_PgOrbit_Behaviour_WorldSpring : public UPgCamera_PgOrbit_Behaviour
{
public:
	unsigned long                                      mbRelativeToPlayer : 1;                           		// 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FBiDirectionalSpringSettings                mXSettings;                                       		// 0x00A4 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FBiDirectionalSpringSettings                mYSettings;                                       		// 0x00C4 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FBiDirectionalSpringSettings                mZSettings;                                       		// 0x00E4 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FSpringState                                mX;                                               		// 0x0104 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FSpringState                                mY;                                               		// 0x0114 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FSpringState                                mZ;                                               		// 0x0124 (0x0010) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2046 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgOrbit_Behaviour_WorldSpring::pClassPointer = NULL;

// Class GridGame.PgCameraAndBlenderBase
// 0x0014 (0x0050 - 0x003C)
class UPgCameraAndBlenderBase : public UObject
{
public:
	struct FPointer                                    VfTable_IPgCamera;                                		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class APgPlayerCamera*                             mPgPlayerCamera;                                  		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mLocation;                                        		// 0x0044 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2047 ];

		return pClassPointer;
	};

	struct FName GetFullCameraStyle ( );
	class UPgCamera* GetRootCamera ( );
	void DrawDebugInfo ( class AHUD* HUD );
	struct FName GetName ( );
	struct FTViewTarget GetViewTargetParameters ( );
	void DisplayDebug ( class APgPlayerCamera* PlayerCamera, class UPgDisplayDebugHelper* helper );
};

UClass* UPgCameraAndBlenderBase::pClassPointer = NULL;

// Class GridGame.PgCameraBase
// 0x00B8 (0x0108 - 0x0050)
class UPgCameraBase : public UPgCameraAndBlenderBase
{
public:
	float                                              mPrevCollisionLookLen;                            		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mNoCollisionLookMagInc;                           		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mActualLocation;                                  		// 0x0058 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mDesiredLocation;                                 		// 0x0064 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      mLastViewTargetActor;                             		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mbCollided : 1;                                   		// 0x0074 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mbUseRotationSpring : 1;                          		// 0x0074 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mbRespectTimeDilation : 1;                        		// 0x0074 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mbShowDebugInfo : 1;                              		// 0x0074 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      mbOverridesUnrealBehavior : 1;                    		// 0x0074 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mbIsActive : 1;                                   		// 0x0074 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	struct FName                                       mCameraStyle;                                     		// 0x0078 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FRotationSpringParameters                   mDefaultRotationSpringParameters;                 		// 0x0080 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDesiredFOV;                                      		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FSpringParameters                           mDefaultFOVSpringParameters;                      		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPhysicsSimulationContainer_PgCamera*      mSimulationContainer;                             		// 0x0094 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgPhysicsSimulationObject_CriticallyDampedRotatorSpring* mRotationSpring;                                  		// 0x0098 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgPhysicsSimulationObject_CriticallyDampedFloatSpring* mFOVSpring;                                       		// 0x009C (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	float                                              mFOV;                                             		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FBlenderSettingsByCamera >          mBlendSettingsByPreviousCamera;                   		// 0x00A4 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCameraBlenderSettings*                    mBlendSettings;                                   		// 0x00B0 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UClass*                                      mBlenderClass;                                    		// 0x00B4 (0x0004) [0x0000000000000000]              
	struct FRotator                                    mRotationOffset;                                  		// 0x00B8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class UPgEddoCameraList*                           mEddoSwitchSubCameras;                            		// 0x00C4 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              mInitialScore;                                    		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x00CC (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgCameraBase.mStoredScoreByObject

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2048 ];

		return pClassPointer;
	};

	struct FName GetName ( );
	void DisplayDebug ( class APgPlayerCamera* PlayerCamera, class UPgDisplayDebugHelper* helper );
	void DisplayDebugDetails ( class UPgDisplayDebugHelper* helper );
	float GetScore ( );
	class UPgCamera* GetRootCamera ( );
	struct FName GetFullCameraStyle ( );
	void DrawDebugInfo ( class AHUD* HUD );
};

UClass* UPgCameraBase::pClassPointer = NULL;

// Class GridGame.PgCamera_PgFirstPersonCam
// 0x0014 (0x011C - 0x0108)
class UPgCamera_PgFirstPersonCam : public UPgCameraBase
{
public:
	float                                              mFOV;                                             		// 0x0108 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	struct FMeshSocketData                             mLocationSocketData;                              		// 0x010C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mbControlsAreCameraRelative : 1;                  		// 0x0118 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2049 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgFirstPersonCam::pClassPointer = NULL;

// Class GridGame.PgCamera_PgFixedCam
// 0x0004 (0x010C - 0x0108)
class UPgCamera_PgFixedCam : public UPgCameraBase
{
public:
	unsigned long                                      mbControlsAreCameraRelative : 1;                  		// 0x0108 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2050 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_PgFixedCam::pClassPointer = NULL;

// Class GridGame.PgCamera_PgOrbitCam
// 0x0080 (0x0188 - 0x0108)
class UPgCamera_PgOrbitCam : public UPgCameraBase
{
public:
	unsigned long                                      mbControlsAreCameraRelative : 1;                  		// 0x0108 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mbUseOrbitSpring : 1;                             		// 0x0108 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mbUseOrbitAnchorSpring : 1;                       		// 0x0108 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              mFOV;                                             		// 0x010C (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	struct FMeshSocketData                             mLocationSocketData;                              		// 0x0110 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FMeshSocketData                             mOrbitAnchorLocationSocketData;                   		// 0x011C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UPgCamera_PgOrbit_Behaviour* >       mCameraBehaviours;                                		// 0x0128 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              mMinimumOrbitPitch;                               		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaximumOrbitPitch;                               		// 0x0138 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FOrbitSpringParameters                      mDefaultOrbitSpringParameters;                    		// 0x013C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorSpringParameters                     mDefaultOrbitAnchorLocationSpringParameters;      		// 0x014C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UPgCamera_PgOrbit_Behaviour_Collision*       mCollisionBehaviour;                              		// 0x0158 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              mNoCollisionMagInc;                               		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mDesiredLocationAtFirstCollisionCorrection;       		// 0x0160 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mCollisionMagnitude;                              		// 0x016C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgPhysicsSimulationObject_CriticallyDampedOrbitSpring* mOrbitSpring;                                     		// 0x0170 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgPhysicsSimulationObject_CriticallyDampedVectorSpring* mOrbitAnchorSpring;                               		// 0x0174 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	struct FVector                                     mOrbitAnchorLocation;                             		// 0x0178 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                mVersionNumber;                                   		// 0x0184 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2051 ];

		return pClassPointer;
	};

	void DrawDebugInfo ( class AHUD* HUD );
};

UClass* UPgCamera_PgOrbitCam::pClassPointer = NULL;

// Class GridGame.PgCamera_UnrealBase
// 0x0000 (0x0108 - 0x0108)
class UPgCamera_UnrealBase : public UPgCameraBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2052 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_UnrealBase::pClassPointer = NULL;

// Class GridGame.PgCamera_UnrealFirstPerson
// 0x0000 (0x0108 - 0x0108)
class UPgCamera_UnrealFirstPerson : public UPgCamera_UnrealBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2053 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_UnrealFirstPerson::pClassPointer = NULL;

// Class GridGame.PgCamera_UnrealFixed
// 0x0000 (0x0108 - 0x0108)
class UPgCamera_UnrealFixed : public UPgCamera_UnrealBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2054 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_UnrealFixed::pClassPointer = NULL;

// Class GridGame.PgCamera_UnrealFree
// 0x0000 (0x0108 - 0x0108)
class UPgCamera_UnrealFree : public UPgCamera_UnrealBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2055 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_UnrealFree::pClassPointer = NULL;

// Class GridGame.PgCamera_UnrealThirdPerson
// 0x0000 (0x0108 - 0x0108)
class UPgCamera_UnrealThirdPerson : public UPgCamera_UnrealBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2056 ];

		return pClassPointer;
	};

};

UClass* UPgCamera_UnrealThirdPerson::pClassPointer = NULL;

// Class GridGame.PgCameraBlender
// 0x0024 (0x0074 - 0x0050)
class UPgCameraBlender : public UPgCameraAndBlenderBase
{
public:
	struct FPointer                                    mBlendSettings;                                   		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgCamera*                                   mNextCamera;                                      		// 0x0054 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0058 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              mCurrentBlendTime;                                		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mOriginalFOVDelta;                                		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    mOriginalRotationOffsetDelta;                     		// 0x0064 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mCachedPreviousBlendOutTime;                      		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2057 ];

		return pClassPointer;
	};

	void DisplayDebug ( class APgPlayerCamera* PlayerCamera, class UPgDisplayDebugHelper* helper );
	void DrawDebugInfo ( class AHUD* HUD );
	void DisplayDebug_DrawText ( struct FString T, class UCanvas* C, float* out_YL, float* out_YPos );
	class UPgCamera* GetRootCamera ( );
	float GetTotalBlendTime ( );
	struct FName GetFullCameraStyle ( );
};

UClass* UPgCameraBlender::pClassPointer = NULL;

// Class GridGame.PgCameraBlenderNullBlender
// 0x0000 (0x0074 - 0x0074)
class UPgCameraBlenderNullBlender : public UPgCameraBlender
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2058 ];

		return pClassPointer;
	};

};

UClass* UPgCameraBlenderNullBlender::pClassPointer = NULL;

// Class GridGame.PgCameraBlenderOrbit
// 0x001C (0x0090 - 0x0074)
class UPgCameraBlenderOrbit : public UPgCameraBlender
{
public:
	struct FOrbitComponents                            mOriginalOrbitDelta;                              		// 0x0074 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mOriginalOrbitAnchorDelta;                        		// 0x0084 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2059 ];

		return pClassPointer;
	};

	void DrawDebugInfo ( class AHUD* HUD );
};

UClass* UPgCameraBlenderOrbit::pClassPointer = NULL;

// Class GridGame.PgCameraBlenderSpringTension
// 0x0000 (0x0074 - 0x0074)
class UPgCameraBlenderSpringTension : public UPgCameraBlender
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2060 ];

		return pClassPointer;
	};

};

UClass* UPgCameraBlenderSpringTension::pClassPointer = NULL;

// Class GridGame.PgCameraBlenderWorldLocation
// 0x000C (0x0080 - 0x0074)
class UPgCameraBlenderWorldLocation : public UPgCameraBlender
{
public:
	struct FVector                                     mOriginalLocationDelta;                           		// 0x0074 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2061 ];

		return pClassPointer;
	};

};

UClass* UPgCameraBlenderWorldLocation::pClassPointer = NULL;

// Class GridGame.PgCameraBlenderSettings
// 0x0000 (0x003C - 0x003C)
class UPgCameraBlenderSettings : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2062 ];

		return pClassPointer;
	};

};

UClass* UPgCameraBlenderSettings::pClassPointer = NULL;

// Class GridGame.PgCameraBlenderSettingsNullBlender
// 0x0000 (0x003C - 0x003C)
class UPgCameraBlenderSettingsNullBlender : public UPgCameraBlenderSettings
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2063 ];

		return pClassPointer;
	};

};

UClass* UPgCameraBlenderSettingsNullBlender::pClassPointer = NULL;

// Class GridGame.PgCameraBlenderSettingsOrbit
// 0x0008 (0x0044 - 0x003C)
class UPgCameraBlenderSettingsOrbit : public UPgCameraBlenderSettings
{
public:
	float                                              mBlendOutTime;                                    		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendInTime;                                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2064 ];

		return pClassPointer;
	};

};

UClass* UPgCameraBlenderSettingsOrbit::pClassPointer = NULL;

// Class GridGame.PgCameraBlenderSettingsSpringTension
// 0x0000 (0x003C - 0x003C)
class UPgCameraBlenderSettingsSpringTension : public UPgCameraBlenderSettings
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2065 ];

		return pClassPointer;
	};

};

UClass* UPgCameraBlenderSettingsSpringTension::pClassPointer = NULL;

// Class GridGame.PgCameraBlenderSettingsWorldLocation
// 0x0008 (0x0044 - 0x003C)
class UPgCameraBlenderSettingsWorldLocation : public UPgCameraBlenderSettings
{
public:
	float                                              mBlendOutTime;                                    		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendInTime;                                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2066 ];

		return pClassPointer;
	};

};

UClass* UPgCameraBlenderSettingsWorldLocation::pClassPointer = NULL;

// Class GridGame.PgCameraList
// 0x0019 (0x0055 - 0x003C)
class UPgCameraList : public UObject
{
public:
	TArray< class UPgCameraBase* >                     mCameraList;                                      		// 0x003C (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	struct FName                                       mDefaultCameraStyle;                              		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                mCurrentCameraIndex;                              		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mCameraListType;                                  		// 0x0054 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2067 ];

		return pClassPointer;
	};

	void DisplayDebug ( class APgPlayerCamera* PlayerCamera, class UPgDisplayDebugHelper* helper );
	void DrawDebugInfo ( class AHUD* HUD );
};

UClass* UPgCameraList::pClassPointer = NULL;

// Class GridGame.PgEddoCameraList
// 0x0000 (0x0055 - 0x0055)
class UPgEddoCameraList : public UPgCameraList
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2068 ];

		return pClassPointer;
	};

	void DisplayDebug ( class APgPlayerCamera* PlayerCamera, class UPgDisplayDebugHelper* helper );
};

UClass* UPgEddoCameraList::pClassPointer = NULL;

// Class GridGame.PgCameraModifier
// 0x0030 (0x0088 - 0x0058)
class UPgCameraModifier : public UCameraModifier
{
public:
	float                                              TotalTimeAlive;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              mLifeTime;                                        		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mbDamper : 1;                                     		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      mPlayMode;                                        		// 0x0064 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTranslationDampen;                               		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRotationDampen;                                  		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RotationCache;                                    		// 0x0070 (0x000C) [0x0000000000000000]              
	struct FVector                                     TranslationCache;                                 		// 0x007C (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2069 ];

		return pClassPointer;
	};

	void eventPgGetCameraViewPoint ( struct FVector* OutCamLoc, struct FRotator* OutCamRot );
	bool IsAttached ( class ACamera* Cam, class UClass* CamClass, class UPgCameraModifier** Modifier );
	void EnableModifier ( );
	bool event_AddCameraModifier ( class ACamera* Camera );
	void Init ( );
	bool eventRemoveModifier ( class ACamera* Camera );
	float ComputeDamper ( );
	bool IsDone ( );
	void UpdateTime ( float DeltaTime );
	bool ModifyCamera ( class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV );
	float ComputeShakeValue ( float Amp, float Freq );
	float PercentageComplete ( );
	void ComputeNewFOV ( float* FOV );
	void ComputeNewTranslation ( struct FVector* TranslationDelta );
	void ComputeNewRotation ( struct FRotator* RotationDelta );
	void DampenShake ( struct FRotator* Rotation, struct FVector* Translation );
};

UClass* UPgCameraModifier::pClassPointer = NULL;

// Class GridGame.PgCameraModifier_Generic
// 0x004C (0x00D4 - 0x0088)
class UPgCameraModifier_Generic : public UPgCameraModifier
{
public:
	class UPgCubicSpline*                              mYawSpline;                                       		// 0x0088 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCubicSpline*                              mPitchSpline;                                     		// 0x008C (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCubicSpline*                              mRollSpline;                                      		// 0x0090 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCubicSpline*                              mTranslateXSpline;                                		// 0x0094 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCubicSpline*                              mTranslateYSpline;                                		// 0x0098 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCubicSpline*                              mTranslateZSpline;                                		// 0x009C (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCubicSpline*                              mFOVSpline;                                       		// 0x00A0 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	float                                              mEndSignatureCompressionFactor;                   		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mSignatureSplineLength;                           		// 0x00A8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mAmplitude;                                       		// 0x00AC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPointer                                    mpEpicenter;                                      		// 0x00B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mInitialEpicenter;                                		// 0x00B4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mCurrentTime;                                     		// 0x00C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mbActive : 1;                                     		// 0x00C4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mbEpicenterFollowsCamera : 1;                     		// 0x00C4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	float                                              mRadiusOfEffect;                                  		// 0x00C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mPhaseShift;                                      		// 0x00CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgSideEffect_GenericCameraModifier*         mSideEffectInstance;                              		// 0x00D0 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2070 ];

		return pClassPointer;
	};

	float ComputeDamper ( );
	void ComputeNewFOV ( float* FOV );
	void ComputeNewTranslation ( struct FVector* TranslationDelta );
	void ComputeNewRotation ( struct FRotator* RotationDelta );
	void Reset ( );
	void Init ( );
};

UClass* UPgCameraModifier_Generic::pClassPointer = NULL;

// Class GridGame.PgKeepTargetInView_ViewRectifier
// 0x0000 (0x003C - 0x003C)
class UPgKeepTargetInView_ViewRectifier : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2071 ];

		return pClassPointer;
	};

};

UClass* UPgKeepTargetInView_ViewRectifier::pClassPointer = NULL;

// Class GridGame.PgKeepTargetInView_ViewRectifier_RotateToEnemy
// 0x0014 (0x0050 - 0x003C)
class UPgKeepTargetInView_ViewRectifier_RotateToEnemy : public UPgKeepTargetInView_ViewRectifier
{
public:
	float                                              mMaxYawDegrees;                                   		// 0x003C (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	float                                              mMaxPitchDegrees;                                 		// 0x0040 (0x0004) [0x0000000020000000]              ( CPF_Deprecated )
	struct FRotator                                    mMaxAdjustment;                                   		// 0x0044 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2072 ];

		return pClassPointer;
	};

};

UClass* UPgKeepTargetInView_ViewRectifier_RotateToEnemy::pClassPointer = NULL;

// Class GridGame.PgPlayerCamera
// 0x0118 (0x05FC - 0x04E4)
class APgPlayerCamera : public ACamera
{
public:
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x04E4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned char                                      mCurrentViewTarget;                               		// 0x04E8 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	class UDrawFrustumComponent*                       DrawFrustum;                                      		// 0x04EC (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPgCameraList*                               mDefaultCameraList;                               		// 0x04F0 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCameraList*                               mDeathCameraList;                                 		// 0x04F4 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgCamera_PgMatinee*                         mMatineeCameras[ 0x2 ];                           		// 0x04F8 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UPgPlayerCameraComponent* >          mComponents;                                      		// 0x0500 (0x000C) [0x0000000004480009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x050C (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UPgPlayerCameraLocationChangeObserver* > mCameraLocationChangedObservers;                  		// 0x0510 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UPgCamera*                                   mCurrentCameras[ 0x2 ];                           		// 0x051C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0524 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned long                                      mFixAfterTeleports : 1;                           		// 0x052C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mJustTeleported : 1;                              		// 0x052C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      mCorrectLongLooks : 1;                            		// 0x052C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mBlastUpdate : 1;                                 		// 0x052C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      mPopRepairEnabled : 1;                            		// 0x052C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      mSkipTest1Frame : 1;                              		// 0x052C (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      mLastTargetWasVehicle : 1;                        		// 0x052C (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      mTargettingVehicleLastFrame : 1;                  		// 0x052C (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      mViewTargetFailure : 1;                           		// 0x052C (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	float                                              mMaxLookAfterTeleport;                            		// 0x0530 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mJustTeleportedCheckFramesLeft;                   		// 0x0534 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mJustTeleportedCheckFrames;                       		// 0x0538 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mWallCorrection;                                  		// 0x053C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mWallCorrectionSmoothness;                        		// 0x0548 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mContractionCollision;                            		// 0x054C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mMaxLookForFix;                                   		// 0x0558 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLongLookCheckTime;                               		// 0x055C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLongLookUpdateTime;                              		// 0x0560 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCameraAge;                                       		// 0x0564 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mPopBlendTime;                                    		// 0x0568 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPopDist;                                         		// 0x056C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxPopDetectDist;                                		// 0x0570 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mPopAngle;                                        		// 0x0574 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mMaxPopDetectAngle;                               		// 0x0578 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCameraAgeEnable;                                 		// 0x057C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mLastLocation;                                    		// 0x0580 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    mLastRotation;                                    		// 0x058C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mLastLocationChange;                              		// 0x0598 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    mLastRotationChange;                              		// 0x05A4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mPopTimer;                                        		// 0x05B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mPopDeltaPos;                                     		// 0x05B4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    mPopDeltaRot;                                     		// 0x05C0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mCameraAgeForPops;                                		// 0x05CC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mLastNonVehicleLocation;                          		// 0x05D0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mLastNonVehicleLook;                              		// 0x05DC (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mVehicleEntryBlendTimer;                          		// 0x05E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mVehicleEntryBlendTime;                           		// 0x05EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mVehicleToPawnBlendTime;                          		// 0x05F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mVehicleExitZVel;                                 		// 0x05F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mVehicleExitMaxVel;                               		// 0x05F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2073 ];

		return pClassPointer;
	};

	void SetScoreModifier ( class UObject* pOwner, struct FName kCameraStyle, float kAmount );
	void RemoveScoreModifier ( class UObject* pOwner, struct FName kCameraStyle );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	struct FString FriendlyRotator ( struct FRotator Rot );
	int AngleToDegrees ( int Angle );
	void DisplayCameraDebug ( class UPgCamera* CurrentCamera, class UPgDisplayDebugHelper** helper );
	void DisplayDebug_DrawText ( struct FString T, class UCanvas* C, float* out_YL, float* out_YPos );
	class UPgCamera* GetActiveRootCamera ( );
	class UPgCameraList* eventGetActiveCameraList ( );
	void PostBeginPlay ( );
	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
	void event_UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
	void eventUpdateCamera ( float DeltaTime );
	void InitializeFor ( class APlayerController* PC );
	bool eventShouldDisplayDebug ( );
	void OnTeleportNative ( );
	void SetViewTarget ( class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams );
	void ClearScoreModifiers ( class UPgCameraList* CamList );
	void InitializeForNative ( class APlayerController* PC );
	void UnRegisterCameraLocationChangeObserver ( class UPgPlayerCameraLocationChangeObserver* O );
	void RegisterCameraLocationChangeObserver ( class UPgPlayerCameraLocationChangeObserver* O );
	class UPgCameraBase* GetCameraByStyle ( struct FName Style );
	bool AreControlsCameraRelative ( );
	struct FName GetPreviousCameraStyle ( );
	struct FName GetNextCameraStyle ( );
};

UClass* APgPlayerCamera::pClassPointer = NULL;

// Class GridGame.PgPlayerCameraComponent
// 0x0000 (0x0055 - 0x0055)
class UPgPlayerCameraComponent : public UActorComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2074 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerCameraComponent::pClassPointer = NULL;

// Class GridGame.PgPlayerCameraComponent_SetAudioGroupAndState
// 0x001B (0x0070 - 0x0055)
class UPgPlayerCameraComponent_SetAudioGroupAndState : public UPgPlayerCameraComponent
{
public:
	struct FString                                     mGroup;                                           		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mState;                                           		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2075 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerCameraComponent_SetAudioGroupAndState::pClassPointer = NULL;

// Class GridGame.PgSeqAct_MatineeScrubber
// 0x001C (0x01D4 - 0x01B8)
class UPgSeqAct_MatineeScrubber : public USeqAct_Interp
{
public:
	class AActor*                                      mScrubActor;                                      		// 0x01B8 (0x0004) [0x0000000000000000]              
	class AActor*                                      mStartActor;                                      		// 0x01BC (0x0004) [0x0000000000000000]              
	class AActor*                                      mEndActor;                                        		// 0x01C0 (0x0004) [0x0000000000000000]              
	struct FViewTargetTransitionParams                 mTransitionOutParameters;                         		// 0x01C4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mbDeactiveWhenScrubActorDies : 1;                 		// 0x01D0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2076 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_MatineeScrubber::pClassPointer = NULL;

// Class GridGame.PgSeqAct_SetCameraScore
// 0x000C (0x00F4 - 0x00E8)
class UPgSeqAct_SetCameraScore : public USequenceAction
{
public:
	struct FName                                       mCameraStyle;                                     		// 0x00E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAmount;                                          		// 0x00F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2077 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_SetCameraScore::pClassPointer = NULL;

// Class GridGame.PgSeqAct_SetLastKiller
// 0x0008 (0x00F0 - 0x00E8)
class UPgSeqAct_SetLastKiller : public USequenceAction
{
public:
	class APawn*                                       mLastKiller;                                      		// 0x00E8 (0x0004) [0x0000000000000000]              
	class APawn*                                       mVictim;                                          		// 0x00EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2078 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_SetLastKiller::pClassPointer = NULL;

// Class GridGame.PgCameraCollisionDataSpecifierInterface
// 0x0000 (0x003C - 0x003C)
class UPgCameraCollisionDataSpecifierInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2079 ];

		return pClassPointer;
	};

};

UClass* UPgCameraCollisionDataSpecifierInterface::pClassPointer = NULL;

// Class GridGame.PgPlayerCameraLocationChangeObserver
// 0x0000 (0x003C - 0x003C)
class UPgPlayerCameraLocationChangeObserver : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2080 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerCameraLocationChangeObserver::pClassPointer = NULL;

// Class GridGame.PgGFxCameraListDebugMenu
// 0x0000 (0x00C8 - 0x00C8)
class UPgGFxCameraListDebugMenu : public UPgGFxDebugMenu
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2081 ];

		return pClassPointer;
	};

};

UClass* UPgGFxCameraListDebugMenu::pClassPointer = NULL;

// Class GridGame.PgDamageBehavior
// 0x0000 (0x003C - 0x003C)
class UPgDamageBehavior : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2082 ];

		return pClassPointer;
	};

};

UClass* UPgDamageBehavior::pClassPointer = NULL;

// Class GridGame.PgDamageBehaviorFreeze
// 0x0004 (0x0040 - 0x003C)
class UPgDamageBehaviorFreeze : public UPgDamageBehavior
{
public:
	float                                              mFreezeEffectDuration;                            		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2083 ];

		return pClassPointer;
	};

};

UClass* UPgDamageBehaviorFreeze::pClassPointer = NULL;

// Class GridGame.PgDamageBehaviorLeech
// 0x0008 (0x0044 - 0x003C)
class UPgDamageBehaviorLeech : public UPgDamageBehavior
{
public:
	float                                              mLeechEnergyMult;                                 		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mOvercharge : 1;                                  		// 0x0040 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2084 ];

		return pClassPointer;
	};

};

UClass* UPgDamageBehaviorLeech::pClassPointer = NULL;

// Class GridGame.PgDamageBehaviorStasis
// 0x0008 (0x0044 - 0x003C)
class UPgDamageBehaviorStasis : public UPgDamageBehavior
{
public:
	float                                              mStasisEffectDuration;                            		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mStasisEffectTimeDilation;                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2085 ];

		return pClassPointer;
	};

};

UClass* UPgDamageBehaviorStasis::pClassPointer = NULL;

// Class GridGame.PgDamageParam
// 0x0038 (0x0074 - 0x003C)
class UPgDamageParam : public UObject
{
public:
	TArray< struct FPgDamageParamInfo >                mDamageParamList;                                 		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UPgPhysMatEffect*                            mDamageEffect;                                    		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mValidForHitStreak : 1;                           		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mCancelsHitStreak : 1;                            		// 0x004C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIgnoreAllOtherDamagers : 1;                      		// 0x004C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	TArray< struct FDamageFilterInfo >                 mDamageFilterInfo;                                		// 0x0050 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTouchingDamageInfo >               mTouchingDamageInfo;                              		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mDamageDelay;                                     		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRigidBodyCollisionMult;                          		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLastFired;                                       		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2086 ];

		return pClassPointer;
	};

	bool DoesDoTouchingDamage ( );
	void ApplyTouchingDamage ( class AController* DamageCauser, class AActor* Other, struct FVector HitLocation, struct FVector HitNormal, class AActor* DamageCausingActor );
	int ScaleDamage ( class AActor* DamageCauser, int Damage );
	void PlayCauseDamageEffects ( class AActor* Instigator, struct FVector Location, struct FVector Normal, class UPhysicalMaterial* PhysMat );
	void ApplyDamageBehaviour ( int damageCaused, class AActor* damageVictim, class AActor* DamageCauser );
};

UClass* UPgDamageParam::pClassPointer = NULL;

// Class GridGame.PgAnimNodeComboBlendByAction
// 0x0068 (0x016C - 0x0104)
class UPgAnimNodeComboBlendByAction : public UAnimNodeBlendList
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x0104 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     __HelpText;                                       		// 0x0108 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     __HelpText1;                                      		// 0x0114 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     __StatusText;                                     		// 0x0120 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	float                                              mBlendTime;                                       		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPgComboBranchInfo                          mComboBranchInfo;                                 		// 0x0130 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	int                                                mComboChainDepthNumber;                           		// 0x0138 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                mComboActionToChild[ 0x8 ];                       		// 0x013C (0x0020) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	TArray< int >                                      mActionToChildMap;                                		// 0x015C (0x000C) [0x0000000020400000]              ( CPF_NeedCtorLink | CPF_Deprecated )
	int                                                mVersion;                                         		// 0x0168 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2087 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeComboBlendByAction::pClassPointer = NULL;

// Class GridGame.PgAnimNodeComboBlendByHold
// 0x002C (0x0130 - 0x0104)
class UPgAnimNodeComboBlendByHold : public UAnimNodeBlendList
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x0104 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     __HelpText;                                       		// 0x0108 (0x000C) [0x0000000000422001]              ( CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     __StatusText;                                     		// 0x0114 (0x000C) [0x0000000000422001]              ( CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	float                                              mBlendTime;                                       		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< float >                                    mHoldTimes;                                       		// 0x0124 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2088 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeComboBlendByHold::pClassPointer = NULL;

// Class GridGame.PgAnimNodeComboBranchByDirection
// 0x0024 (0x0128 - 0x0104)
class UPgAnimNodeComboBranchByDirection : public UAnimNodeBlendList
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x0104 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     _HelpText;                                        		// 0x0108 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText2;                                       		// 0x0114 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	float                                              mBackwardsAngle;                                  		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mForwardsAngle;                                   		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2089 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeComboBranchByDirection::pClassPointer = NULL;

// Class GridGame.PgAnimNodeSequenceCombo
// 0x0064 (0x01CC - 0x0168)
class UPgAnimNodeSequenceCombo : public UPgAnimNodeSequence
{
public:
	struct FPointer                                    VfTable_IPgComboNodeInterface;                    		// 0x0168 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPgComboTimingInfo                          mComboTimingInfo;                                 		// 0x016C (0x0060) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2090 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNodeSequenceCombo::pClassPointer = NULL;

// Class GridGame.PgAnimNotify_MaterialParam
// 0x000C (0x0048 - 0x003C)
class UPgAnimNotify_MaterialParam : public UAnimNotify
{
public:
	struct FName                                       mScalarParameterName;                             		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mScalarParameterValue;                            		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2091 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNotify_MaterialParam::pClassPointer = NULL;

// Class GridGame.PgAnimNotify_NamedEvent
// 0x0008 (0x0044 - 0x003C)
class UPgAnimNotify_NamedEvent : public UAnimNotify
{
public:
	struct FName                                       mEventName;                                       		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2092 ];

		return pClassPointer;
	};

};

UClass* UPgAnimNotify_NamedEvent::pClassPointer = NULL;

// Class GridGame.PgDecalManager
// 0x0000 (0x0214 - 0x0214)
class APgDecalManager : public ADecalManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2093 ];

		return pClassPointer;
	};

	class UDecalComponent* event_SpawnDecal ( class UMaterialInstance* DecalMaterial, struct FVector DecalLocation, struct FRotator DecalOrientation, float Width, float Height, float Thickness, unsigned long bNoClip, float DecalRotation, class UPrimitiveComponent* HitComponent, unsigned long bProjectOnTerrain, unsigned long bProjectOnSkeletalMeshes, struct FName HitBone, int HitNodeIndex, int HitLevelIndex, float InDecalLifeSpan );
};

UClass* APgDecalManager::pClassPointer = NULL;

// Class GridGame.PgDropShadowComponent
// 0x0027 (0x007C - 0x0055)
class UPgDropShadowComponent : public UActorComponent
{
public:
	TArray< struct FPgDropShadowInfo >                 mDropShadowInfo;                                  		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       mShadowBlendParam;                                		// 0x0064 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendRate;                                       		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mVectorParameterName;                             		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mUseOwnerTeamColor : 1;                           		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2094 ];

		return pClassPointer;
	};

};

UClass* UPgDropShadowComponent::pClassPointer = NULL;

// Class GridGame.PgDynamicEmitter
// 0x0000 (0x01F0 - 0x01F0)
class APgDynamicEmitter : public AEmitter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2095 ];

		return pClassPointer;
	};

	void SetColorParameter ( struct FName ParameterName, struct FColor Param );
	void SetVectorParameter ( struct FName ParameterName, struct FVector Param );
	void SetFloatParameter ( struct FName ParameterName, float Param );
};

UClass* APgDynamicEmitter::pClassPointer = NULL;

// Class GridGame.PgCameraEmitter
// 0x0004 (0x01F4 - 0x01F0)
class APgCameraEmitter : public APgDynamicEmitter
{
public:
	struct FPointer                                    VfTable_IPgPlayerCameraLocationChangeObserver;    		// 0x01F0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2096 ];

		return pClassPointer;
	};

};

UClass* APgCameraEmitter::pClassPointer = NULL;

// Class GridGame.PgEmitterPool
// 0x0030 (0x026C - 0x023C)
class APgEmitterPool : public AEmitterPool
{
public:
	int                                                MaxDynamicEmitters;                               		// 0x023C (0x0004) [0x0000000000000000]              
	TArray< struct FPooledActorInfo >                  mDynamicEmitterList;                              		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxLightWalls;                                    		// 0x024C (0x0004) [0x0000000000000000]              
	int                                                MaxLightWallStateChanges;                         		// 0x0250 (0x0004) [0x0000000000000000]              
	TArray< struct FLightWallMarkerInfo >              mLightWallMarkerList;                             		// 0x0254 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPooledActorInfo >                  mLightWallList;                                   		// 0x0260 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2097 ];

		return pClassPointer;
	};

	class UParticleSystemComponent* event_SpawnEmitterMeshAttachment ( class UParticleSystem* EmitterTemplate, class USkeletalMeshComponent* Mesh, struct FName AttachPointName, unsigned long bAttachToSocket, struct FVector RelativeLoc, struct FRotator RelativeRot );
	class UParticleSystemComponent* SpawnEmitter ( class UParticleSystem* EmitterTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* AttachToActor );
	class APgDynamicSMActor* PlacePooledLightWall ( class APgDynamicSMActor* wallArchetype, float customLifeSpan, class AController* lightWallOwner, int teamCollisionChannel, struct FVector SpawnLocation, struct FRotator SpawnRotation );
	void AddLightWallMarker ( class APgDynamicSMActor* wallArchetype, float customLifeSpan, class AActor* lightWallOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, int teamCollisionChannel );
	void ReturnDynamicEmitterToPool ( class APgDynamicEmitter* Emitter, float customLifeSpan );
	void DeactivatePooledDynamicEmitter ( int EmitterIndex );
	class APgDynamicEmitter* GetPooledDynamicEmitter ( class UParticleSystem* EmitterTemplate, struct FVector SpawnLocation, struct FRotator SpawnRotation );
	void ResetPools ( );
};

UClass* APgEmitterPool::pClassPointer = NULL;

// Class GridGame.PgMasterComponent
// 0x000F (0x0064 - 0x0055)
class UPgMasterComponent : public UActorComponent
{
public:
	struct FName                                       mFilter;                                          		// 0x0058 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UActorComponent*                             mComponent;                                       		// 0x0060 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2098 ];

		return pClassPointer;
	};

};

UClass* UPgMasterComponent::pClassPointer = NULL;

// Class GridGame.PgPhysMatEffect
// 0x000C (0x0048 - 0x003C)
class UPgPhysMatEffect : public UObject
{
public:
	TArray< struct FPhysMatEffectInfo >                mEffectList;                                      		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2099 ];

		return pClassPointer;
	};

	struct FPhysMatEffectInfo GetPhysMatEffectInfo ( class UPhysicalMaterial* hitMaterial );
	void PlayImpactEffects ( class AActor* Instigator, struct FVector Location, struct FVector Normal, class UPhysicalMaterial* PhysMat );
};

UClass* UPgPhysMatEffect::pClassPointer = NULL;

// Class GridGame.PgPhysMatProperty
// 0x0008 (0x0044 - 0x003C)
class UPgPhysMatProperty : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       mPhysMaterialName;                                		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2100 ];

		return pClassPointer;
	};

};

UClass* UPgPhysMatProperty::pClassPointer = NULL;

// Class GridGame.PgSceneCaptureCubeMapActor
// 0x0000 (0x01E8 - 0x01E8)
class APgSceneCaptureCubeMapActor : public ASceneCaptureActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2101 ];

		return pClassPointer;
	};

};

UClass* APgSceneCaptureCubeMapActor::pClassPointer = NULL;

// Class GridGame.PgSceneCaptureCubeMapComponent
// 0x0000 (0x00BC - 0x00BC)
class UPgSceneCaptureCubeMapComponent : public USceneCaptureCubeMapComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2102 ];

		return pClassPointer;
	};

};

UClass* UPgSceneCaptureCubeMapComponent::pClassPointer = NULL;

// Class GridGame.PgSkeletalMeshActor
// 0x0020 (0x0228 - 0x0208)
class APgSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	struct FPointer                                    VfTable_IPgMaterialInstanceInterface;             		// 0x0208 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x020C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPgPlugInList*                               mPlugInListArchetype;                             		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x0214 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mTakeFullDamage : 1;                              		// 0x0218 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class UMaterialInstanceConstant* >         mMaterialInstanceList;                            		// 0x021C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2103 ];

		return pClassPointer;
	};

	void TakeRadiusDamage ( class AController* InstigatedBy, float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, struct FVector HurtOrigin, unsigned long bFullDamage, class AActor* DamageCauser, float DamageFalloffExponent );
	void OnClothSim ( class UPgSeqAct_ClothSim* Action );
	TArray< class UMaterialInstanceConstant* > GetMaterialInstanceList ( );
	void InitMaterialInstanceList ( );
};

UClass* APgSkeletalMeshActor::pClassPointer = NULL;

// Class GridGame.PgSlaveComponent
// 0x0017 (0x006C - 0x0055)
class UPgSlaveComponent : public UActorComponent
{
public:
	struct FName                                       mFilter;                                          		// 0x0058 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      mMasterClass;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mHighestPrioritySlave : 1;                        		// 0x0064 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mTickAttach : 1;                                  		// 0x0064 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class UActorComponent*                             mComponent;                                       		// 0x0068 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2104 ];

		return pClassPointer;
	};

};

UClass* UPgSlaveComponent::pClassPointer = NULL;

// Class GridGame.PgCheatManagerBase
// 0x0010 (0x0054 - 0x0044)
class UPgCheatManagerBase : public UCheatManager
{
public:
	TArray< struct FDebugDisplay3dInfo >               DebugDisplay3d;                                   		// 0x0044 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bShow3dDebugInfo : 1;                             		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2105 ];

		return pClassPointer;
	};

	void DebugIncStat ( struct FString StatName, float Delta );
	void DebugSetStat ( struct FString StatName, float Value );
	void DoApplyXP ( int XPPoints );
	void DebugEndLogging ( );
	void DebugStartLogging ( struct FString remoteIP, int Port );
	void DebugAwardTenKills ( );
	void DebugAwardSkillPoints ( int SkillPoints );
	void DebugAwardXP ( int XPPoints );
	void DebugPurchaseEveything ( struct FString Types, int PlayerLevel );
	void DebugPurchase ( struct FString Item );
	void DebugJumpToLevel ( int Level );
	void PlayFmvs ( unsigned long Enable );
	void HealViewedActor ( int Amount );
	void DamageViewedActor ( int Amount );
	void MPForceVehicles ( unsigned long SetVehicling );
	void DrawDebugLightWalls ( );
	void DumpEmitterPool ( );
	void DebugMobility ( unsigned long toggle );
	void DebugSmartObjects ( unsigned long toggle );
	void ClearDebugLines ( );
	void DrawDebugKismet ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DrawObjectivesDebug3D ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DrawRallyPointDebug3D ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DrawSpawnDebug3D ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DrawDebugActorInfo3D ( class AHUD* HUD );
	void DisplayDebug3D ( class AHUD* HUD );
	void ShowDebug3d ( struct FName debugClass, struct FName PropertyName );
	void KillAllPawns ( class UClass* aClass );
	void ToggleForceFeedback ( );
	void SetDestination ( struct FName destActor );
	void Summon ( struct FString archetypeName );
	void GetActorPropertyValue ( class AActor* propActor, struct FName PropertyName, struct FString* PropertyValue );
	void ToggleRootCameraDebug ( struct FString rootCameraListName );
	void ToggleCameraDebug ( struct FString fullCameraStyle );
	void ToggleCameraListDebug ( struct FString fullCameraStyle );
	void ToggleCameraAndDescendants ( class UPgCameraBase* Camera );
	void ToggleCameraList ( class UPgCameraList* CameraList );
	class APgPlayerCamera* GetPgPlayerCamera ( class APlayerController* PlayerController );
	void AIFreezeMovement ( unsigned long frozen );
	void AIForceWeaponsHold ( unsigned long forceHold );
	void SetTickGroupComponent ( unsigned char NewTickGroup, struct FName componentName );
	void SetTickGroupActor ( unsigned char NewTickGroup, struct FName ClassName, struct FName componentName );
	void ToggleGripDESShadows ( );
	void ToggleGripDES ( );
	void OnScreenWarnings ( );
	void ToggleSloMo ( float GameSpeed );
};

UClass* UPgCheatManagerBase::pClassPointer = NULL;

// Class GridGame.PgPlayerController
// 0x0230 (0x07F8 - 0x05C8)
class APgPlayerController : public AGamePlayerController
{
public:
	struct FPointer                                    VfTable_IPgCommonControllerInterface;             		// 0x05C8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x05CC (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class AActor*                                      mArchetypeReferenceList;                          		// 0x05D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APgPawn*                                     mPgPawn;                                          		// 0x05D4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                mPawnArchetypeIndex;                              		// 0x05D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mVehicleArchetypeIndex;                           		// 0x05DC (0x0004) [0x0000000000000000]              
	int                                                mPlayerSkinIndex;                                 		// 0x05E0 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x05E4 (0x000C) MISSED OFFSET
	struct FBoneAtom                                   BoneAtomIdentity;                                 		// 0x05F0 (0x0020) [0x0000000000002000]              ( CPF_Transient )
	class APawn*                                       mLastKiller;                                      		// 0x0610 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	class APgDebugCameraController*                    mDebugCameraControllerReference;                  		// 0x0614 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       mLastSetCameraMode;                               		// 0x0618 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              mRespawnPenaltyTime;                              		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              mRespawnDelayTimeout;                             		// 0x0624 (0x0004) [0x0000000000000000]              
	float                                              mRespawnDelayRemaining;                           		// 0x0628 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      mAutoRespawn : 1;                                 		// 0x062C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mInStoryModeParty : 1;                            		// 0x062C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mDrawNetCorrections : 1;                          		// 0x062C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      mHasVoiceToken : 1;                               		// 0x062C (0x0004) [0x0000000000000020] [0x00000008] ( CPF_Net )
	unsigned long                                      mHasSeenPlayerSummary : 1;                        		// 0x062C (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	unsigned long                                      mInviteJoin : 1;                                  		// 0x062C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mCanStartVehicling : 1;                           		// 0x062C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mLockTarget : 1;                                  		// 0x062C (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	unsigned long                                      mForceLockTarget : 1;                             		// 0x062C (0x0004) [0x0000000000002000] [0x00000100] ( CPF_Transient )
	unsigned long                                      mIsSprinting : 1;                                 		// 0x062C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      mIsBlocking : 1;                                  		// 0x062C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      mAccelRateFromInputAxes : 1;                      		// 0x062C (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      mOneShotKill : 1;                                 		// 0x062C (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bCinematicModeShowHud : 1;                        		// 0x062C (0x0004) [0x0000000000000000] [0x00002000] 
	TArray< struct FUniqueNetId >                      mMutedPlayers;                                    		// 0x0630 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      mRemotelyMutedPlayers;                            		// 0x063C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FLinearColor                                mNetCorrectionDebugDrawColor;                     		// 0x0648 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mLastAckClientLoc;                                		// 0x0658 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	int                                                mTeamSwitchCount;                                 		// 0x0664 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mTeamSwitchTime;                                  		// 0x0668 (0x0004) [0x0000000000000000]              
	float                                              mAckTimeStamp;                                    		// 0x066C (0x0004) [0x0000000000000000]              
	struct FOnlineGameSearchResult                     mInviteResult;                                    		// 0x0670 (0x0008) [0x0000000000000000]              
	struct FPgNetPendingCombo                          mClientPendingCombo;                              		// 0x0678 (0x0024) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       mCurrentSelectedPower;                            		// 0x069C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              mLastSelectPowerTime;                             		// 0x06A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       mEnteringVehicleStateName;                        		// 0x06A8 (0x0008) [0x0000000000000000]              
	float                                              mStartVehiclingWaitTime;                          		// 0x06B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mStopVehiclingWaitTime;                           		// 0x06B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mNextVehiclingTime;                               		// 0x06B8 (0x0004) [0x0000000000000000]              
	TArray< struct FServerSavedMove >                  mServerSavedMoves;                                		// 0x06BC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FPgDifficultyInfo                           mDifficultyInfo[ 0x4 ];                           		// 0x06C8 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mDifficultyLevel;                                 		// 0x06E8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UPgPlayerPlugInTargetSelector*               mTargetSelectorArchetype;                         		// 0x06EC (0x0004) [0x0000000006000001]              ( CPF_Edit | CPF_NoClear | CPF_EditInline )
	class UPgPlayerPlugInTargetSelector*               mTargetSelector;                                  		// 0x06F0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FPointer                                    mSceneView;                                       		// 0x06F4 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x06F8 (0x0004) [0x0000000014400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline | CPF_EditInlineUse )
	struct FName                                       mTeam;                                            		// 0x06FC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      mVehicleInputClass;                               		// 0x0704 (0x0004) [0x0000000000000000]              
	TArray< class AActor* >                            mTargetActors;                                    		// 0x0708 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class AActor* >                            mTargets;                                         		// 0x0714 (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< class UPgPlayerPlugInLockOn* >             mLockOnPlugIns;                                   		// 0x0720 (0x000C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UPgPlayerPlugInLockOn*                       mTargetLockPlugIn;                                		// 0x072C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class APgPawn*                                     mReviveStunnedPawn;                               		// 0x0730 (0x0004) [0x0000000000000000]              
	float                                              mStunInteractDist;                                		// 0x0734 (0x0004) [0x0000000000000000]              
	class UPgStatsTracker*                             mStatsTrackerArchetype;                           		// 0x0738 (0x0004) [0x0000000000000000]              
	class UPgStatsTracker*                             mStatsTracker;                                    		// 0x073C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgUnlockSystem*                             mUnlockSystemArchetype;                           		// 0x0740 (0x0004) [0x0000000000000000]              
	class UPgUnlockSystem*                             mUnlockSystem;                                    		// 0x0744 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgGridProfileSettings*                      ProfileSettings;                                  		// 0x0748 (0x0004) [0x0000000000000000]              
	float                                              mWalkTransitionThreshold;                         		// 0x074C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mHitStreakTimeout;                                		// 0x0750 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mCameraTarget;                                    		// 0x0754 (0x0004) [0x0000000000000000]              
	struct FViewTargetTransitionParams                 mTransitionParams;                                		// 0x0758 (0x000C) [0x0000000000000000]              
	class UForceFeedbackWaveform*                      DefaultRumble;                                    		// 0x0764 (0x0004) [0x0000000000000000]              
	struct FMultiMap_Mirror                            mQueuedEffects;                                   		// 0x0768 (0x003C) [0x0000000000001000]              ( CPF_Native )
	struct FMap_Mirror                                 mPlayingEffects;                                  		// 0x07A4 (0x003C) [0x0000000000001000]              ( CPF_Native )
	TArray< class AActor* >                            mOnScreenActors;                                  		// 0x07E0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x07EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2106 ];

		return pClassPointer;
	};

	void AltTankControls ( );
	void ToggleTankControls ( );
	void ServerToggleTankControls ( );
	void ListConsoleEvents ( );
	struct FName event_GetStateName ( );
	bool IsOnScreen ( class AActor* Target );
	void eventInitInputSystem ( );
	void NotifyAttemptToSwitchPower ( struct FName Power );
	void eventNotifyAddInventoryPower ( struct FName itemTypeName );
	void event_NotifyNotEnoughSpaceInInvite ( );
	void NotifyNotEnoughSpaceInInvite ( );
	void event_NotifyNotAllPlayersCanJoinInvite ( );
	void NotifyNotAllPlayersCanJoinInvite ( );
	void event_NotifyInviteFailed ( );
	void NotifyInviteFailed ( );
	struct FString event_GetPlayerNickname ( class UOnlineSubsystem* oss, unsigned char LocalUserNum );
	void event_ClearInviteDelegates ( );
	void eventAddDestroyOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearDestroyOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void OnDestroyLBGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void event_OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	void event_OnDestroyForInviteComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnDestroyForInviteComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void OnInviteJoinComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void HitStreakUpdateTimer ( float DeltaSeconds );
	void HitStreakTakeDamage ( );
	void HitStreakCauseDamage ( );
	void SetPlayerInput ( class UClass* newInputClass );
	void eventDebugDrawOnlinePlayerNames ( class AHUD* HUD );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DisplayDebugSideEffects ( class AHUD* HUD, float* FontHeight, float* YPos );
	struct FRotator GetAdjustedAimFor ( class AWeapon* Weapon, struct FVector StartFireLoc );
	void ShowSystemMsgOnControllerChanged ( int ControllerId, unsigned long bIsConnected );
	bool CanUnpauseCheckUIState ( );
	void OnControllerChanged ( int ControllerId, unsigned long bIsConnected );
	void event_OnExternalUIChanged ( unsigned long bIsOpening );
	void event_GetTriggerUseList ( TArray< class ATrigger* >* triggerUseList );
	void eventRemoveScoreModifier ( class UObject* pOwner, struct FName kCameraStyle );
	void eventSetScoreModifier ( class UObject* pOwner, struct FName kCameraStyle, float kAmount );
	void eventResetCameraMode ( );
	void eventClientResetCameraMode ( );
	void eventSpawnPlayerCamera ( );
	void SetCameraMode ( struct FName NewCamMode );
	void PreviousCamera ( );
	void NextCamera ( );
	void eventStunRevive ( class APgPawn* reviveMe );
	bool HasPawnToPawnInteractions ( );
	void UpdateInteractions ( float DeltaTime );
	void SetShowSubtitles ( unsigned long bValue );
	void ToggleHudVisibility ( unsigned long bShow );
	void eventResetPlayerMovementInput ( );
	void event_ClientSetCinematicMode ( unsigned long bInCinematicMode, unsigned long bAffectsMovement, unsigned long bAffectsTurning, unsigned long bAffectsHUD, float fNearClipPlane );
	void EnableSideEffects ( unsigned long bEnable );
	void ClientSetCinematicMode ( unsigned long bInCinematicMode, unsigned long bAffectsMovement, unsigned long bAffectsTurning, unsigned long bAffectsHUD, float fNearClipPlane );
	void eventClientShowLoadingScreen ( unsigned long show );
	void eventClientClearStack ( int eStackID );
	void eventClientOpenMovie ( struct FString MovieInstance, unsigned char eStackID, float fDuration );
	void eventClientHideHudBar ( int Id );
	void eventClientShowHudBar ( float XPos, float YPos, float Scale, int curValue, int MaxValue, int Id );
	void eventClientHideHudText ( int Id, unsigned long locationText );
	void eventClientShowHudText ( struct FString szText, unsigned char ePos, float XPos, float YPos, int Id, unsigned long locationText, float fDuration );
	void eventClientEventBoxMessage ( unsigned char eType, int idPlayer1, int idPlayer2, struct FString szName );
	bool eventHUDIsOpen ( );
	void eventClientOpenHud ( unsigned long bOpen );
	void eventClientShowHud ( unsigned long bShow );
	void eventClientPostAkEvent ( class UAkEvent* Evt, class AActor* Actor );
	void AdminSetSkill ( int Skill );
	void AdminSetNumBots ( int NumBots );
	void AdminForceRespawnAt ( struct FString PlayerStartName );
	void AdminScore ( struct FString Event, int Num );
	void AdminReset ( );
	void AdminEnd ( struct FString Reason );
	void AdminEndRound ( struct FString Reason );
	void AdminKillAll ( int Num );
	void AdminKill ( struct FString PlayerName );
	void eventServerSetIsReady ( unsigned long Ready );
	void eventServerAdminSetSkill ( int Skill );
	void eventServerAdminSetNumBots ( int NumBots );
	void eventServerSuicide ( );
	void eventServerAdminForceRespawnAt ( struct FString PlayerStartName );
	void eventServerAdminScore ( struct FString Event, int Num );
	void eventServerAdminReset ( );
	void eventServerAdminEndGame ( struct FString Reason );
	void eventServerAdminEndRound ( struct FString Reason );
	void eventServerAdminKillAll ( int Num );
	void eventServerAdminKill ( struct FString PlayerName );
	void AdminMessage ( struct FString msg );
	void eventSendClientAdjustment ( );
	void AckGoodMove ( float TimeStamp );
	void PgServerComboMove ( struct FPgSavedMoveComboParams comboMoveParams );
	void AttemptMoveFixup ( struct FPgSavedMoveRepParams moveRepStruct, float DeltaTime );
	void PgServerMove ( struct FPgSavedMoveRepParams moveRepStruct );
	void PgAddNewServerMove ( float TimeStamp, struct FVector RootMotionDelta );
	void PgUpdateServerMovesToTimestamp ( float TimeStamp );
	void PgServerSendRootMotion ( float OldTimeStamp, float newTimeStamp, struct FVector RootMotionDelta );
	void PgServerComboQueueMove ( float TimeStamp, class UPgSpecialMoveAsset* comboMove, struct FPgSpecialMoveParams comboParams, unsigned long bIsNewCombo );
	void PgSendServerMove ( class USavedMove* NewMove, unsigned long bIgnoreCorrections );
	void PgCallServerMove ( );
	void PgClientShortCorrection ( float AckTimeStamp, class UPgSavedMove* CurrentMove, struct FVector LocationAtTimeStamp );
	void ClientComboBadQueue ( );
	void SendComboBadQueue ( );
	void LongClientAdjustPosition ( float TimeStamp, struct FName NewState, unsigned char newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase, float NewFloorX, float NewFloorY, float NewFloorZ );
	void PgDrawNetCorrection ( float TimeStamp, struct FName NewState, unsigned char newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ );
	void ShortClientAdjustPosition ( float TimeStamp, struct FName NewState, unsigned char newPhysics, float NewLocX, float NewLocY, float NewLocZ, class AActor* NewBase );
	void VeryShortClientAdjustPosition ( float TimeStamp, float NewLocX, float NewLocY, float NewLocZ, class AActor* NewBase );
	void ClientAdjustPosition ( float TimeStamp, struct FName NewState, unsigned char newPhysics, float NewLocX, float NewLocY, float NewLocZ, float NewVelX, float NewVelY, float NewVelZ, class AActor* NewBase );
	void ReplicateMove ( float DeltaTime, struct FVector newAccel, unsigned char DoubleClickMove, struct FRotator DeltaRot );
	void ClientUpdatePosition ( );
	class UPgSavedMove* FindSavedMoveByTimeStamp ( float TimeStamp );
	bool PgMod_ShouldSendNetCorrection ( struct FVector LocDiff );
	bool PgMod_IsCorrectionWithinTolerance ( class AActor* MoveActor, class USavedMove* CurrentMove, struct FVector NewLocation, struct FVector NewVelocity, struct FName NewState );
	bool eventNotifyLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void PgNetCompressVector ( struct FVector* vec );
	void eventClientSaveUserData ( );
	void eventClientFlushOnlineStats ( );
	void ClientWriteLeaderboardStats ( class UClass* OnlineStatsWriteClass );
	void RespawnTimerCleanup ( );
	void OnRespawnDelayTimeout ( );
	void OnBeginPlayerWaiting ( );
	void event_ClientGotoState ( struct FName NewState, struct FName NewLabel );
	void event_PreClientTravel ( struct FString PendingURL, unsigned char TravelType, unsigned long bIsSeamlessTravel );
	void eventPreClientTravel ( struct FString PendingURL, unsigned char TravelType, unsigned long bIsSeamlessTravel );
	void OnPlayerReceived ( );
	void eventReceivedPlayer ( );
	void ServerDrawNetCorrections ( unsigned long bDrawThem );
	void DrawNetCorrections ( );
	void RegisterCustomPlayerDataStores ( );
	void ClientUnlockAchievement ( unsigned char Achievement );
	void UpdatePlayerTickStats ( float DeltaSeconds );
	void eventClientSetStatInt ( int StatIndex, int StatValue );
	void eventClientUpdatePlayerKillsStats ( );
	void eventClientUpdatePlayerKilledStats ( );
	void eventClientIncStatInt ( int StatIndex );
	void ClientStartOnlineGame ( );
	void PgPlayerController_OnStartOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventRespawn ( );
	void event_GameplayUnmutePlayer ( struct FUniqueNetId PlayerNetId );
	void event_GameplayMutePlayer ( struct FUniqueNetId PlayerNetId );
	void StopTeamOnlySpeak ( );
	void StartTeamOnlySpeak ( );
	void StartRespawnDelayTimer ( float Time );
	void AddRespawnTime ( float Amount );
	void OnStartDelayTimeOut ( );
	void DelayedStart ( );
	bool event_CanRestartPlayer ( );
	bool CanRestartPlayer ( );
	void event_SetOnlineStatus ( int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties );
	void event_ClientSetOnlineStatus ( );
	void ClientSetOnlineStatus ( );
	void eventFailChangeTeam ( );
	void event_ServerChangeTeam ( int N );
	void ServerChangeTeam ( int N );
	void UpdateVoicePermission ( );
	bool IsMuted ( struct FUniqueNetId NetId );
	bool IsRemotelyMuted ( struct FUniqueNetId NetId );
	bool IsLocallyMuted ( struct FUniqueNetId NetId );
	void UnmutePlayer ( struct FUniqueNetId NetId );
	void MutePlayer ( struct FUniqueNetId NetId );
	void event_ClientWasKicked ( unsigned long bBanned );
	void eventClientWasKicked ( unsigned long bBanned );
	void event_ClientUnmutePlayer ( struct FUniqueNetId PlayerNetId );
	void eventClientUnmutePlayer ( struct FUniqueNetId PlayerNetId );
	void event_ClientMutePlayer ( struct FUniqueNetId PlayerNetId );
	void eventClientMutePlayer ( struct FUniqueNetId PlayerNetId );
	unsigned char GetOnlineState ( );
	void SetOnlineState ( unsigned char NewState );
	void eventServerSetOnlineState ( unsigned char NewState );
	bool CanCommunicate ( );
	void event_GameHasEnded ( class AActor* EndGameFocus, unsigned long bIsWinner );
	void GameHasEnded ( class AActor* EndGameFocus, unsigned long bIsWinner );
	void event_Reset ( );
	void Reset ( );
	void eventShowPreGameTips ( float fDuration );
	void energy ( );
	void eventServerEnergy ( );
	void GiveEnergy ( );
	void eventServerGiveEnergy ( );
	void AdjustRotationToFaceTarget ( float DeltaTime, struct FRotator* ViewRotation );
	void eventServerSetTargetedSmartObject ( class APgSmartObject* targetedSmartObject );
	void SetTargetedSmartObject ( class APgSmartObject* targetedSmartObject );
	void eventServerSetTarget ( class AActor* Target );
	void SetTarget ( class AActor* Target );
	void ClearAllTargets ( );
	class AActor* GetTarget ( class UClass* TargetClass );
	void StopJumping ( );
	void KeepJumping ( );
	void StopSpamming ( );
	void KeepSpamming ( );
	void event_IgnoreLookInput ( unsigned long bNewLookInput );
	void event_IgnoreMoveInput ( unsigned long bNewMoveInput );
	void ServerAcknowledgePossession ( class APawn* P );
	void AcknowledgePossession ( class APawn* P );
	void UpdateRotation ( float DeltaTime );
	bool PlayerCanSee ( struct FVector Point );
	void eventPlayerTick ( float DeltaTime );
	void HandleWalking ( );
	void ClientRestart ( class APawn* NewPawn );
	void SetUseTiltForwardAndBack ( unsigned long bActive );
	void SetOnlyUseControllerTiltInput ( unsigned long bActive );
	void SetControllerTiltActive ( unsigned long bActive );
	void SetControllerTiltDesiredIfAvailable ( unsigned long bActive );
	bool IsControllerTiltActive ( );
	bool TriggerInputSmartObjects ( unsigned long pressed, struct FName Button );
	bool TriggerInputPlugIns ( unsigned long pressed, struct FName Button );
	bool TriggerKismetInputEvents ( unsigned long pressed, struct FName Button );
	void CheckMoveController ( );
	void event_UnPossess ( );
	void UnPossess ( );
	void eventPossess ( class APawn* aPawn, unsigned long bVehicleTransition );
	void PostPossess ( );
	void StopAllSideEffects ( );
	void StopEffect ( class UPgSideEffect* Effect );
	void UpdateQueuedSideEffects ( float DeltaSeconds );
	void UnQueueSideEffects ( class UPgSideEffectContainer* EffectContainer );
	void QueueSideEffects ( class UPgSideEffectContainer* EffectContainer, class AActor* Epicenter );
	void DebugCamToFixedCamEnd ( );
	void DebugCamToFixedCamStart ( class APgDebugCameraController* PC );
	void SetDifficultyLevel ( unsigned char Level );
	unsigned char GetDifficultyLevel ( );
	bool CanPerformMagDisc ( );
	class APgSmartObject* GetTargetedSmartObj ( );
	void UseTargetedSmartObj ( );
	bool CanUseTargetedSmartObj ( );
	void DifficultyLevel ( int Level );
	void RequestShowMenu ( unsigned long Open );
	void ShowMenu ( );
	void KismetEvent ( unsigned long pressed, struct FName Button );
	void eventServerAdminRestartAll ( );
	void AdminRestartAll ( );
	bool RestartLastCheckpoint ( unsigned long full );
	void PerformDodge ( );
	void SetTargetScan ( unsigned char targetScan, float targetScanAngle );
	void SwitchTarget ( );
	void SetVehicleInputs ( float Throttle, float Steering );
	void SetVehicling ( unsigned long vehicling );
	void ServerSetVehiclingState ( );
	bool IsTargetLocked ( );
	void SetLockTarget ( unsigned long lockTarget );
	void eventClientSetupWeapon ( );
	void switchTo ( struct FName WeaponName );
	void SwitchToPower ( struct FName powerName );
	void ForceWallJump ( );
	void OnCheckCondition ( class UPgSeqAct_CheckCondition* inAction );
	void event_ReplicatedEvent ( struct FName VarName );
	void eventReplicatedEvent ( struct FName VarName );
	void eventServerAdjustSkillPoints ( int Delta );
	void eventServerUpdateLoadout ( struct FString loadoutString );
	void ClientUpdateLoadout ( );
	void eventClientPlayerLevelChanged ( int oldLevel, int newLevel );
	void eventServerSetVehicleIndex ( int I );
	void ChangeTeamSP ( int TeamNum );
	void ClientForceVehicles ( unsigned long SetVehicling );
	void ForceSetVehicling ( unsigned long SetVehicling );
	void RetroTurn ( unsigned char Direction );
	bool PlayerGTFO ( );
	void eventServerGTFO ( );
	void GTFO ( );
	void SetVehicleArchetype ( struct FString Archetype );
	void SetVehicleIndex ( int I );
	void DoProgressionTest ( int Test );
	void PrintStats ( );
	void UpdateVehicling ( );
	void SetCameraTargetTimer ( );
	void ClientSetCameraTargetTimer ( );
	void ClientCreateCameraTargetTimer ( class AActor* CameraTarget, float Delay, struct FViewTargetTransitionParams transParam );
	void CreateCameraTargetTimer ( class AActor* CameraTarget, float Delay, struct FViewTargetTransitionParams transParam );
	void OnClientSetCameraTarget ( class UPgSeqAct_ClientSetCameraTarget* inAction );
	void OnSetCameraSystem ( class UPgSeqAct_SetCameraSystem* Action );
	class APgPlayerCamera* GetPgPlayerCamera ( );
	class APgPlayerCamera* eventTryGetLocalPlayerCameraFromDebugCamera ( class APgDebugCameraController* DCC );
	bool AmInDebugFixedCam ( );
	class APgPlayerController* eventTryGetLocalPlayerControllerFromDebugCamera ( class APlayerController* PlayerController );
	class APgPlayerController* GetLocalPlayerController ( );
};

UClass* APgPlayerController::pClassPointer = NULL;

// Class GridGame.PgCheatManager
// 0x0000 (0x0054 - 0x0054)
class UPgCheatManager : public UPgCheatManagerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2107 ];

		return pClassPointer;
	};

	void ServerOneShotKill ( );
	void OneShotKill ( );
	void ToggleDebugFixedCam ( );
	void ToggleDebugCamera ( );
	void WarpToCheckpoint ( struct FString checkpointName );
	void ToggleCameraCollisionSpew ( );
	void ToggleSideEffects ( );
};

UClass* UPgCheatManager::pClassPointer = NULL;

// Class GridGame.PgPlayerInput
// 0x00E0 (0x0248 - 0x0168)
class UPgPlayerInput : public UGamePlayerInput
{
public:
	TArray< struct FPgInputButton >                    mPgButtonInput;                                   		// 0x0168 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0174 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgPlayerInput.mPressedKeysSeconds
	float                                              mHoldSeconds;                                     		// 0x01B0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x01B4 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgPlayerInput.AxisEmulationDefinitions
	struct FUIAxisEmulationData                        AxisInputEmulation;                               		// 0x01F0 (0x0014) [0x0000000000002000]              ( CPF_Transient )
	float                                              AxisEmulationDeadZone;                            		// 0x0204 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              AxisEmulationRepeatDelay;                         		// 0x0208 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	unsigned long                                      mCircularDeadZone : 1;                            		// 0x020C (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	float                                              aRefJoyUp;                                        		// 0x0210 (0x0004) [0x0000000000000004]              ( CPF_Input )
	float                                              aRefJoyRight;                                     		// 0x0214 (0x0004) [0x0000000000000004]              ( CPF_Input )
	float                                              mRefJoyUp;                                        		// 0x0218 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mRefJoyRight;                                     		// 0x021C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mRefJoyLookUp;                                    		// 0x0220 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mRefJoyLookRight;                                 		// 0x0224 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mRawJoyDeadZone;                                  		// 0x0228 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              mRawJoyLookDeadZone;                              		// 0x022C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	TArray< struct FName >                             mHoldKeys;                                        		// 0x0230 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FScriptDelegate                             __HandleButtonInput__Delegate;                    		// 0x023C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2108 ];

		return pClassPointer;
	};

	bool InvertMouse ( );
	struct FString GetNamedBind ( struct FName Key, struct FString BindName );
	struct FString GetBind ( struct FName Key );
	void ApplySquareDeadZone ( float deadZone, float* X, float* Y );
	void ApplyCircularDeadZone ( float deadZone, float* X, float* Y );
	void PreProcessInput ( float DeltaTime );
	void ShowGameStats ( unsigned long bPressed );
	void StartSwitchTargetRight ( unsigned long bPressed );
	void StartSwitchTargetLeft ( unsigned long bPressed );
	void StartSwitchTarget ( unsigned long bPressed );
	void ToggleLockTarget ( unsigned long bPressed );
	void lockTarget ( unsigned long bPressed );
	void bLock ( unsigned long bPressed );
	void Sprint ( unsigned long bPressed );
	void StartVehicle ( unsigned long bPressed );
	void StartUse ( unsigned long bPressed );
	void Power ( unsigned long bPressed );
	void Disc ( unsigned long bPressed );
	void Melee ( unsigned long bPressed );
	void MagDisc ( unsigned long bPressed );
	void StartJump ( unsigned long bPressed );
	void ButtonRelease ( struct FName ButtonName );
	void ButtonPress ( struct FName ButtonName );
	void HandleButtonInput ( unsigned long bPressed );
};

UClass* UPgPlayerInput::pClassPointer = NULL;

// Class GridGame.PgPlayerInputVehicle
// 0x0000 (0x0248 - 0x0248)
class UPgPlayerInputVehicle : public UPgPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2109 ];

		return pClassPointer;
	};

	void eventPlayerInput ( float DeltaTime );
	void ExitVehicle ( unsigned long bPressed );
	void TurnL90 ( unsigned long bPressed );
	void TurnR90 ( unsigned long bPressed );
	void Boost ( unsigned long bPressed );
	void PreProcessInput ( float DeltaTime );
};

UClass* UPgPlayerInputVehicle::pClassPointer = NULL;

// Class GridGame.PgPlayerInputVehicleCar
// 0x0000 (0x0248 - 0x0248)
class UPgPlayerInputVehicleCar : public UPgPlayerInputVehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2110 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerInputVehicleCar::pClassPointer = NULL;

// Class GridGame.PgPlayerInputVehicleCycle
// 0x0000 (0x0248 - 0x0248)
class UPgPlayerInputVehicleCycle : public UPgPlayerInputVehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2111 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerInputVehicleCycle::pClassPointer = NULL;

// Class GridGame.PgPlayerInputVehicleTank
// 0x0000 (0x0248 - 0x0248)
class UPgPlayerInputVehicleTank : public UPgPlayerInputVehicle
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2112 ];

		return pClassPointer;
	};

};

UClass* UPgPlayerInputVehicleTank::pClassPointer = NULL;

// Class GridGame.PgCommonPawnInterface
// 0x0000 (0x003C - 0x003C)
class UPgCommonPawnInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2113 ];

		return pClassPointer;
	};

};

UClass* UPgCommonPawnInterface::pClassPointer = NULL;

// Class GridGame.PgEnergyInterface
// 0x0000 (0x003C - 0x003C)
class UPgEnergyInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2114 ];

		return pClassPointer;
	};

	int EnergyFlow ( int inEnergy, unsigned long overCharge );
	int HealthFlow ( int inHealth, unsigned long overCharge );
};

UClass* UPgEnergyInterface::pClassPointer = NULL;

// Class GridGame.PgFreezeEffectInterface
// 0x0000 (0x003C - 0x003C)
class UPgFreezeEffectInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2115 ];

		return pClassPointer;
	};

};

UClass* UPgFreezeEffectInterface::pClassPointer = NULL;

// Class GridGame.PgPawnDamageReaction
// 0x000C (0x0048 - 0x003C)
class UPgPawnDamageReaction : public UObject
{
public:
	TArray< struct FPgDamageReactionInfo >             mDamageReactionList;                              		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2116 ];

		return pClassPointer;
	};

};

UClass* UPgPawnDamageReaction::pClassPointer = NULL;

// Class GridGame.PgSpecialMoveVolume
// 0x0004 (0x0264 - 0x0260)
class APgSpecialMoveVolume : public APhysicsVolume
{
public:
	unsigned long                                      mRestrictWallRun : 1;                             		// 0x0260 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mRestrictWallRunVertical : 1;                     		// 0x0260 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mRestrictWallRunHorizontal : 1;                   		// 0x0260 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mRestrictMuscleUp : 1;                            		// 0x0260 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2117 ];

		return pClassPointer;
	};

	bool StopsProjectile ( class AProjectile* P );
};

UClass* APgSpecialMoveVolume::pClassPointer = NULL;

// Class GridGame.PgActorFactoryArchetype
// 0x000C (0x0068 - 0x005C)
class UPgActorFactoryArchetype : public UActorFactoryArchetype
{
public:
	struct FName                                       mTeam;                                            		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mSpawnHiddenDuration;                             		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2118 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryArchetype::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPedestrian
// 0x0050 (0x00B8 - 0x0068)
class UPgActorFactoryPedestrian : public UPgActorFactoryArchetype
{
public:
	float                                              mGlobalSpawnDelayMin;                             		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              mGlobalSpawnDelayMax;                             		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      mEnabled : 1;                                     		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                mTeamIndex;                                       		// 0x0074 (0x0004) [0x0000000000000000]              
	class APgPedestrianSpawnPoint*                     mSpawnPoint;                                      		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x007C (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgActorFactoryPedestrian.mSpawnPointMap

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2119 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPedestrian::pClassPointer = NULL;

// Class GridGame.PgPedestrianSpawnManager
// 0x001C (0x0200 - 0x01E4)
class APgPedestrianSpawnManager : public AInfo
{
public:
	int                                                mNumPawns;                                        		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                mMaxPawns;                                        		// 0x01E8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	TArray< struct FPgPedestrianSpawnInfo >            mSpawnInfo;                                       		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mTimeLastSpawn;                                   		// 0x01F8 (0x0004) [0x0000000000000000]              
	float                                              mSpawnDelay;                                      		// 0x01FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2120 ];

		return pClassPointer;
	};

	void BroadCastPedestrianKilledEvent ( class APawn* KilledPawn );
	float GetSpawnDelay ( );
	float GetTimeLastSpawn ( );
	int GetMaxPawns ( );
	int GetNumPawns ( );
	void SetNumPawns ( int numPawns );
};

UClass* APgPedestrianSpawnManager::pClassPointer = NULL;

// Class GridGame.PgSeqAct_AddToPedSpawnSys
// 0x0000 (0x00F8 - 0x00F8)
class UPgSeqAct_AddToPedSpawnSys : public USeqAct_Latent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2121 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_AddToPedSpawnSys::pClassPointer = NULL;

// Class GridGame.PgSeqAct_PedestrianAIFactory
// 0x0018 (0x0110 - 0x00F8)
class UPgSeqAct_PedestrianAIFactory : public USeqAct_Latent
{
public:
	class UPgActorFactoryPedestrian*                   mFactory;                                         		// 0x00F8 (0x0004) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FPgPedestrianInfo >                 mPedestrianInfo;                                  		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mGlobalSpawnDelayMin;                             		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mGlobalSpawnDelayMax;                             		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2122 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_PedestrianAIFactory::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_PedestrianKilled
// 0x000C (0x010C - 0x0100)
class UPgSeqEvent_PedestrianKilled : public USequenceEvent
{
public:
	TArray< class APawn* >                             mPawnsKilledToMonitor;                            		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2123 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_PedestrianKilled::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_PedestrianSpawned
// 0x000C (0x010C - 0x0100)
class UPgSeqEvent_PedestrianSpawned : public USequenceEvent
{
public:
	TArray< class APawn* >                             mPawnsSpawnedToMonitor;                           		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2124 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_PedestrianSpawned::pClassPointer = NULL;

// Class GridGame.PgSeqAct_PerformSpecialMove
// 0x0008 (0x00F0 - 0x00E8)
class UPgSeqAct_PerformSpecialMove : public USequenceAction
{
public:
	class UPgSpecialMoveAsset*                         mSpecialMoveAsset;                                		// 0x00E8 (0x0004) [0x0000000014400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline | CPF_EditInlineUse )
	class AActor*                                      mLineupTarget;                                    		// 0x00EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2125 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_PerformSpecialMove::pClassPointer = NULL;

// Class GridGame.PgSpecialMoveAsset
// 0x002C (0x0068 - 0x003C)
class UPgSpecialMoveAsset : public UObject
{
public:
	struct FString                                     _HelpText1;                                       		// 0x003C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _HelpText2;                                       		// 0x0048 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     _StatusText;                                      		// 0x0054 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	class UPgSpecialMoveAction*                        mAction;                                          		// 0x0060 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                mVersion;                                         		// 0x0064 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2126 ];

		return pClassPointer;
	};

	unsigned char GetAction ( );
	bool CanExecuteOn ( class APgPawn* Pawn );
};

UClass* UPgSpecialMoveAsset::pClassPointer = NULL;

// Class GridGame.PgSpecialMoveAction
// 0x0000 (0x003C - 0x003C)
class UPgSpecialMoveAction : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2127 ];

		return pClassPointer;
	};

};

UClass* UPgSpecialMoveAction::pClassPointer = NULL;

// Class GridGame.PgSpecialMoveActionPlayTree
// 0x001C (0x0058 - 0x003C)
class UPgSpecialMoveActionPlayTree : public UPgSpecialMoveAction
{
public:
	class UAnimTree*                                   mAnimTreeTemplate;                                		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBlendTime;                                       		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mComboAction;                                     		// 0x0044 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mCancelPreviousCombo : 1;                         		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mShouldLineup : 1;                                		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FName                                       mLineupSocketName;                                		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTimeToLineup;                                    		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2128 ];

		return pClassPointer;
	};

};

UClass* UPgSpecialMoveActionPlayTree::pClassPointer = NULL;

// Class GridGame.PgSpecialMoveActionPlayAnim
// 0x000C (0x0064 - 0x0058)
class UPgSpecialMoveActionPlayAnim : public UPgSpecialMoveActionPlayTree
{
public:
	class UAnimSet*                                    mAnimSet;                                         		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mAnimSequenceName;                                		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2129 ];

		return pClassPointer;
	};

};

UClass* UPgSpecialMoveActionPlayAnim::pClassPointer = NULL;

// Class GridGame.PgGameplayEventsWriter
// 0x0010 (0x0134 - 0x0124)
class UPgGameplayEventsWriter : public UGameplayEventsWriter
{
public:
	struct FString                                     mRemoteIP;                                        		// 0x0124 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                mRemotePort;                                      		// 0x0130 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2130 ];

		return pClassPointer;
	};

	void LogEnergyActorUse ( int EventID, struct FString Type, struct FString Team, struct FString Usage, class AController* Player );
	void Poll ( );
	void SetConnection ( struct FString remoteIP, int remotePort );
	bool OpenStatsFile ( struct FString Filename );
	void LogAllPlayerPositionsEvent ( int EventID );
};

UClass* UPgGameplayEventsWriter::pClassPointer = NULL;

// Class GridGame.PgSeqAct_StatMessage
// 0x0020 (0x0108 - 0x00E8)
class UPgSeqAct_StatMessage : public USequenceAction
{
public:
	unsigned char                                      mStat;                                            		// 0x00E8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mStatMessage;                                     		// 0x00E9 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mStatNameCache;                                   		// 0x00EC (0x0008) [0x0000000000000000]              
	struct FName                                       mStatMessageCache;                                		// 0x00F4 (0x0008) [0x0000000000000000]              
	int                                                mStatValueCache;                                  		// 0x00FC (0x0004) [0x0000000000000000]              
	int                                                mStatMessageValueCache;                           		// 0x0100 (0x0004) [0x0000000000000000]              
	class UPgStatsTracker*                             mTrackerArchetype;                                		// 0x0104 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2131 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_StatMessage::pClassPointer = NULL;

// Class GridGame.PgSeqAct_StatOp
// 0x0010 (0x00F8 - 0x00E8)
class UPgSeqAct_StatOp : public USequenceAction
{
public:
	unsigned char                                      mStat;                                            		// 0x00E8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mStatNameCache;                                   		// 0x00EC (0x0008) [0x0000000000000000]              
	class UPgStatsTracker*                             mTrackerArchetype;                                		// 0x00F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2132 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_StatOp::pClassPointer = NULL;

// Class GridGame.PgSeqAct_GetStat
// 0x0000 (0x00F8 - 0x00F8)
class UPgSeqAct_GetStat : public UPgSeqAct_StatOp
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2133 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_GetStat::pClassPointer = NULL;

// Class GridGame.PgSeqAct_SetStat
// 0x0008 (0x0100 - 0x00F8)
class UPgSeqAct_SetStat : public UPgSeqAct_StatOp
{
public:
	unsigned char                                      mStatOp;                                          		// 0x00F8 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mValue;                                           		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2134 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_SetStat::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_StatThreshold
// 0x000C (0x010C - 0x0100)
class UPgSeqEvent_StatThreshold : public USequenceEvent
{
public:
	struct FString                                     mStatName;                                        		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2135 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_StatThreshold::pClassPointer = NULL;

// Class GridGame.PgStat
// 0x0054 (0x0090 - 0x003C)
class UPgStat : public UObject
{
public:
	struct FName                                       mStatName;                                        		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      mStatHandlerClass;                                		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgStatHandler*                              mStatHandler;                                     		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UPgStatMonitor* >                    mMonitors;                                        		// 0x004C (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	class UPgStatTag*                                  mTag;                                             		// 0x0058 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              mStatValue;                                       		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mVisible : 1;                                     		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mSystemMonitored : 1;                             		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mUpdateSaveGameWhenChanged : 1;                   		// 0x0060 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FString                                     mDisplayName;                                     		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mDisplayDescription;                              		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      mUnitType;                                        		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mImageWidth;                                      		// 0x007D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     mImageName;                                       		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class APgPlayerController*                         mPlayerController;                                		// 0x008C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2136 ];

		return pClassPointer;
	};

	void Changed ( );
	bool IsDifferent ( float NewValue );
	float GetStatFloat ( );
	bool GetStatBool ( );
	int GetStatInt ( );
	void Reset ( );
	void SetStatFloat ( unsigned char statOp, float StatValue );
	void SetStatBool ( unsigned char statOp, unsigned long StatValue );
	void SetStatInt ( unsigned char statOp, int StatValue );
};

UClass* UPgStat::pClassPointer = NULL;

// Class GridGame.PgStatHandler
// 0x0000 (0x003C - 0x003C)
class UPgStatHandler : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2137 ];

		return pClassPointer;
	};

	void Reset ( );
	TArray< struct FName > GetSupportedMessages ( );
	void StatMsg ( struct FName msg, class UPgStat* StatData, class APgPlayerController* Controller, float Payload );
};

UClass* UPgStatHandler::pClassPointer = NULL;

// Class GridGame.PgDistanceTravelledStatHandler
// 0x0010 (0x004C - 0x003C)
class UPgDistanceTravelledStatHandler : public UPgStatHandler
{
public:
	struct FVector                                     mLastPos;                                         		// 0x003C (0x000C) [0x0000000000000000]              
	unsigned long                                      mEnabled : 1;                                     		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2138 ];

		return pClassPointer;
	};

	void Reset ( );
	TArray< struct FName > GetSupportedMessages ( );
	void StatMsg ( struct FName msg, class UPgStat* StatData, class APgPlayerController* Controller, float Payload );
};

UClass* UPgDistanceTravelledStatHandler::pClassPointer = NULL;

// Class GridGame.PgDrivingDistanceStatHandler
// 0x0001 (0x004D - 0x004C)
class UPgDrivingDistanceStatHandler : public UPgDistanceTravelledStatHandler
{
public:
	unsigned char                                      mTravelMode;                                      		// 0x004C (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2139 ];

		return pClassPointer;
	};

	void Reset ( );
	void StatMsg ( struct FName msg, class UPgStat* StatData, class APgPlayerController* Controller, float Payload );
};

UClass* UPgDrivingDistanceStatHandler::pClassPointer = NULL;

// Class GridGame.PgWalkingDistanceStatHandler
// 0x0001 (0x004D - 0x004C)
class UPgWalkingDistanceStatHandler : public UPgDistanceTravelledStatHandler
{
public:
	unsigned char                                      mTravelMode;                                      		// 0x004C (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2140 ];

		return pClassPointer;
	};

	void Reset ( );
	void StatMsg ( struct FName msg, class UPgStat* StatData, class APgPlayerController* Controller, float Payload );
};

UClass* UPgWalkingDistanceStatHandler::pClassPointer = NULL;

// Class GridGame.PgHighestFallStatHandler
// 0x0004 (0x0040 - 0x003C)
class UPgHighestFallStatHandler : public UPgStatHandler
{
public:
	float                                              mBeginTrackHeight;                                		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2141 ];

		return pClassPointer;
	};

	void Reset ( );
	TArray< struct FName > GetSupportedMessages ( );
	void StatMsg ( struct FName msg, class UPgStat* StatData, class APgPlayerController* Controller, float Payload );
};

UClass* UPgHighestFallStatHandler::pClassPointer = NULL;

// Class GridGame.PgLongestKillStreakStatHandler
// 0x0004 (0x0040 - 0x003C)
class UPgLongestKillStreakStatHandler : public UPgStatHandler
{
public:
	int                                                mCurrentStreak;                                   		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2142 ];

		return pClassPointer;
	};

	void Reset ( );
	TArray< struct FName > GetSupportedMessages ( );
	void StatMsg ( struct FName msg, class UPgStat* StatData, class APgPlayerController* Controller, float Payload );
};

UClass* UPgLongestKillStreakStatHandler::pClassPointer = NULL;

// Class GridGame.PgTestStatHandler
// 0x0000 (0x003C - 0x003C)
class UPgTestStatHandler : public UPgStatHandler
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2143 ];

		return pClassPointer;
	};

	TArray< struct FName > GetSupportedMessages ( );
	void StatMsg ( struct FName msg, class UPgStat* StatData, class APgPlayerController* Controller, float Payload );
};

UClass* UPgTestStatHandler::pClassPointer = NULL;

// Class GridGame.PgTimeAliveStatHandler
// 0x0004 (0x0040 - 0x003C)
class UPgTimeAliveStatHandler : public UPgStatHandler
{
public:
	float                                              mTimeAlive;                                       		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2144 ];

		return pClassPointer;
	};

	void Reset ( );
	TArray< struct FName > GetSupportedMessages ( );
	void StatMsg ( struct FName msg, class UPgStat* StatData, class APgPlayerController* Controller, float Payload );
};

UClass* UPgTimeAliveStatHandler::pClassPointer = NULL;

// Class GridGame.PgTutorialCounterStatHandler
// 0x0004 (0x0040 - 0x003C)
class UPgTutorialCounterStatHandler : public UPgStatHandler
{
public:
	unsigned long                                      mEnabled : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2145 ];

		return pClassPointer;
	};

	TArray< struct FName > GetSupportedMessages ( );
	void StatMsg ( struct FName msg, class UPgStat* StatData, class APgPlayerController* Controller, float Payload );
};

UClass* UPgTutorialCounterStatHandler::pClassPointer = NULL;

// Class GridGame.PgStatMonitor
// 0x0008 (0x0044 - 0x003C)
class UPgStatMonitor : public UObject
{
public:
	struct FName                                       mName;                                            		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2146 ];

		return pClassPointer;
	};

	void Load ( struct FString loadString );
	void Save ( struct FString* saveString );
	void Reset ( );
	void Changed ( class UPgStat* Stat );
};

UClass* UPgStatMonitor::pClassPointer = NULL;

// Class GridGame.PgStatKismetMonitor
// 0x0004 (0x0048 - 0x0044)
class UPgStatKismetMonitor : public UPgStatMonitor
{
public:
	float                                              mTriggerValue;                                    		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2147 ];

		return pClassPointer;
	};

	void Changed ( class UPgStat* Stat );
};

UClass* UPgStatKismetMonitor::pClassPointer = NULL;

// Class GridGame.PgStatThresholdMonitor
// 0x002C (0x0070 - 0x0044)
class UPgStatThresholdMonitor : public UPgStatMonitor
{
public:
	struct FName                                       mStatName;                                        		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTriggerValue;                                    		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mTriggerType;                                     		// 0x0050 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mComparision;                                     		// 0x0051 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mAchievement;                                     		// 0x0052 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mTriggered : 1;                                   		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                mXPReward;                                        		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mHudMessage;                                      		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UPgStatThresholdMonitor* >           mDependantStats;                                  		// 0x0064 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2148 ];

		return pClassPointer;
	};

	void Load ( struct FString loadString );
	void Save ( struct FString* saveString );
	bool ConditionSatisfied ( class UPgStatsTracker* tracker );
	void NotifyHud ( );
	void Triggered ( class UPgStat* Stat );
	void Reset ( );
	void Changed ( class UPgStat* Stat );
};

UClass* UPgStatThresholdMonitor::pClassPointer = NULL;

// Class GridGame.PgCollectableStatMonitor
// 0x0000 (0x0070 - 0x0070)
class UPgCollectableStatMonitor : public UPgStatThresholdMonitor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2149 ];

		return pClassPointer;
	};

	void Changed ( class UPgStat* Stat );
};

UClass* UPgCollectableStatMonitor::pClassPointer = NULL;

// Class GridGame.PgStatsDamageLookup
// 0x0018 (0x0054 - 0x003C)
class UPgStatsDamageLookup : public UObject
{
public:
	struct FName                                       mDamageCause;                                     		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mStatName;                                        		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mDamagePawnType;                                  		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2150 ];

		return pClassPointer;
	};

};

UClass* UPgStatsDamageLookup::pClassPointer = NULL;

// Class GridGame.PgStatsTracker
// 0x0034 (0x0070 - 0x003C)
class UPgStatsTracker : public UObject
{
public:
	TArray< class UPgStat* >                           mStats;                                           		// 0x003C (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UPgStatMonitor* >                    mMonitors;                                        		// 0x0048 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UPgStatsDamageLookup* >              mKillLookup;                                      		// 0x0054 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UPgStatsDamageLookup* >              mDeathLookup;                                     		// 0x0060 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      mNewTronFileUnlocked : 1;                         		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mNewShardsUnlocked : 1;                           		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2151 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void StatChanged ( class UPgStat* Stat );
	void PrintStats ( );
	void GetKillStatIndices ( struct FName DamageCause, struct FName PawnType, unsigned long PlayerKilled, TArray< int >* Stats );
	void GetKillStat ( struct FName DamageCause, struct FName PawnType, unsigned long PlayerKilled, TArray< class UPgStat* >* Stats );
	class UPgStat* GetStatByIndex ( int Index );
	int GetStatIndex ( struct FName StatName );
	void Reset ( );
	void StatMessage ( struct FName StatName, struct FName StatMsg, float Payload );
	class UPgStat* GetStat ( struct FName StatName );
};

UClass* UPgStatsTracker::pClassPointer = NULL;

// Class GridGame.PgStatTag
// 0x0004 (0x0040 - 0x003C)
class UPgStatTag : public UObject
{
public:
	unsigned long                                      mDirty : 1;                                       		// 0x003C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2152 ];

		return pClassPointer;
	};

};

UClass* UPgStatTag::pClassPointer = NULL;

// Class GridGame.PgStatAbraxisShardTag
// 0x000C (0x004C - 0x0040)
class UPgStatAbraxisShardTag : public UPgStatTag
{
public:
	struct FString                                     mLevel;                                           		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2153 ];

		return pClassPointer;
	};

};

UClass* UPgStatAbraxisShardTag::pClassPointer = NULL;

// Class GridGame.PgStatTronFileTag
// 0x0010 (0x0050 - 0x0040)
class UPgStatTronFileTag : public UPgStatTag
{
public:
	struct FString                                     mLevel;                                           		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                mIndex;                                           		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2154 ];

		return pClassPointer;
	};

};

UClass* UPgStatTronFileTag::pClassPointer = NULL;

// Class GridGame.PgTutorialTracker
// 0x0028 (0x0064 - 0x003C)
class UPgTutorialTracker : public UObject
{
public:
	struct FName                                       mComboProjectile;                                 		// 0x003C (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FName                                       mParryProjectile;                                 		// 0x0044 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FName                                       mMobilityProjectile;                              		// 0x004C (0x0008) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FName >                             mDodgeAnimNames;                                  		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              mMinSecondsBetweenDamageReports;                  		// 0x0060 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2155 ];

		return pClassPointer;
	};

};

UClass* UPgTutorialTracker::pClassPointer = NULL;

// Class GridGame.PgAirVehicle
// 0x0010 (0x0A38 - 0x0A28)
class APgAirVehicle : public AUTAirVehicle
{
public:
	struct FPointer                                    VfTable_IPgCameraCollisionDataSpecifierInterface; 		// 0x0A28 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgCommonPawnInterface;                   		// 0x0A2C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class APgPlayerCamera*                             mPgPlayerCameraArchetype;                         		// 0x0A30 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCameraCollisionStartPointOffset;                 		// 0x0A34 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2156 ];

		return pClassPointer;
	};

	struct FName GetDefaultCameraMode ( class APlayerController* RequestedBy );
	void SetCameraArchetype ( class APgPlayerCamera* newArchetype );
	void OnTeleport ( class USeqAct_Teleport* Action );
	class APgPlayerCamera* GetCameraArchetype ( );
};

UClass* APgAirVehicle::pClassPointer = NULL;

// Class GridGame.PgHoverVehicle
// 0x0004 (0x0A00 - 0x09FC)
class APgHoverVehicle : public AUTHoverVehicle
{
public:
	struct FPointer                                    VfTable_IPgCommonPawnInterface;                   		// 0x09FC (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2157 ];

		return pClassPointer;
	};

	struct FName GetDefaultCameraMode ( class APlayerController* RequestedBy );
};

UClass* APgHoverVehicle::pClassPointer = NULL;

// Class GridGame.PgVehicle
// 0x028C (0x0C60 - 0x09D4)
class APgVehicle : public AUTVehicle
{
public:
	struct FPointer                                    VfTable_IPgMaterialInstanceInterface;             		// 0x09D4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgMailingListInterface;                  		// 0x09D8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgCommonPawnInterface;                   		// 0x09DC (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgStasisEffectInterface;                 		// 0x09E0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgEnergyInterface;                       		// 0x09E4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgCameraCollisionDataSpecifierInterface; 		// 0x09E8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgFreezeEffectInterface;                 		// 0x09EC (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgDamageParamInterface;                  		// 0x09F0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x09F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FInterpCurveFloat                           mPlatformAxisRemap_PS3;                           		// 0x09F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mPlatformAxisRemap_XBOX;                          		// 0x0A08 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mPlatformAxisRemap_WIN32;                         		// 0x0A18 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mPlatformAxisRemap_OTHER;                         		// 0x0A28 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mPlatformAxisRemap_PS3MOVE;                       		// 0x0A38 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mPlatformStrafeDamp_PS3;                          		// 0x0A48 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPlatformStrafeDamp_XBOX;                         		// 0x0A4C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPlatformStrafeDamp_WIN32;                        		// 0x0A50 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPlatformStrafeDamp_OTHER;                        		// 0x0A54 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPlatformStrafeDamp__PS3MOVE;                     		// 0x0A58 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRawStrafe;                                       		// 0x0A5C (0x0004) [0x0000000000000000]              
	float                                              mDampedStrafe;                                    		// 0x0A60 (0x0004) [0x0000000000000000]              
	float                                              mRemappedStrafe;                                  		// 0x0A64 (0x0004) [0x0000000000000000]              
	float                                              mViewRotationScalar;                              		// 0x0A68 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mOverrideThrottle;                                		// 0x0A6C (0x0004) [0x0000000000000000]              
	float                                              mOverrideSteering;                                		// 0x0A70 (0x0004) [0x0000000000000000]              
	unsigned char                                      mTeamCollisionChannel;                            		// 0x0A74 (0x0001) [0x0000000000000000]              
	unsigned char                                      mDriverExitAction;                                		// 0x0A75 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDeflectionTime;                                  		// 0x0A78 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinDeflectionCosine;                             		// 0x0A7C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDeflectionTimer;                                 		// 0x0A80 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0A84 (0x000C) MISSED OFFSET
	struct FQuat                                       mDeflectionFromOrientation;                       		// 0x0A90 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FQuat                                       mDeflectionToOrientation;                         		// 0x0AA0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class ACamera*                                     mLastCamera;                                      		// 0x0AB0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AController*                                 mLastController;                                  		// 0x0AB4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgPlugInList*                               mPlugInListArchetype;                             		// 0x0AB8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x0ABC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgPlugInComponent*                          mPlugInComponent;                                 		// 0x0AC0 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< class UMaterialInstanceConstant* >         mMaterialInstanceList;                            		// 0x0AC4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class APgPlayerCamera*                             mPgPlayerCameraArchetype;                         		// 0x0AD0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCameraCollisionStartPointOffset;                 		// 0x0AD4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mVehicleToVehicleDamageScalar;                    		// 0x0AD8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDamageSpeedExponent;                             		// 0x0ADC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgDamageParam*                              mCauseDamageParam;                                		// 0x0AE0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgDamageParam*                              mKnockdownDriverDamageParam;                      		// 0x0AE4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgDamageParam*                              mLastKnockdownDriverDamageParam;                  		// 0x0AE8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mPgPawnDamagePerVel;                              		// 0x0AEC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPgPawnMinRunOverSpeed;                           		// 0x0AF0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgDamageParam*                              mScaleDamageTakenParam;                           		// 0x0AF4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSideEffectContainer*                      mDeathSideEffect;                                 		// 0x0AF8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSideEffectContainer*                      mDamageSideEffect;                                		// 0x0AFC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mDamageSideEffectThreshold;                       		// 0x0B00 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mReset_MaxRoll;                                   		// 0x0B04 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mReset_MaxPitch;                                  		// 0x0B08 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mReset_MaxRollPitchTime;                          		// 0x0B0C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mReset_RollPitchTime;                             		// 0x0B10 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mReset_PinnedBikeSlowSpeed;                       		// 0x0B14 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mReset_PinnedMaxRoll;                             		// 0x0B18 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mReset_MaxPinnedTime;                             		// 0x0B1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mReset_ContiguousPinnedTime;                      		// 0x0B20 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mReset_UnresponsiveThrottleTime;                  		// 0x0B24 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mReset_StuckSlowSpeed;                            		// 0x0B28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mReset_MaxStuckTime;                              		// 0x0B2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mReset_TouchedSomething : 1;                      		// 0x0B30 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      mReset_ForwardStuck : 1;                          		// 0x0B30 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      mReset_ReverseStuck : 1;                          		// 0x0B30 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      mDestroyOnDriverExit : 1;                         		// 0x0B30 (0x0004) [0x0000000020000000] [0x00000008] ( CPF_Deprecated )
	unsigned long                                      mHideOnDriverExit : 1;                            		// 0x0B30 (0x0004) [0x0000000020000000] [0x00000010] ( CPF_Deprecated )
	unsigned long                                      mDisableOnDriverExit : 1;                         		// 0x0B30 (0x0004) [0x0000000020000000] [0x00000020] ( CPF_Deprecated )
	unsigned long                                      mAllowExitControl : 1;                            		// 0x0B30 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      mEnableWheelSlipControl : 1;                      		// 0x0B30 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      mIsBoosting : 1;                                  		// 0x0B30 (0x0004) [0x0000000000000020] [0x00000100] ( CPF_Net )
	unsigned long                                      mLeanUprightOnlyOnGround : 1;                     		// 0x0B30 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      mIsTightTurning : 1;                              		// 0x0B30 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      mCanPlayLightwallStartSound : 1;                  		// 0x0B30 (0x0004) [0x0000000000002000] [0x00000800] ( CPF_Transient )
	unsigned long                                      mbDriverJumpCapable : 1;                          		// 0x0B30 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned long                                      mAffectedByStasisEffects : 1;                     		// 0x0B30 (0x0004) [0x0000000000000020] [0x00002000] ( CPF_Net )
	unsigned long                                      mFreezeEffected : 1;                              		// 0x0B30 (0x0004) [0x0000000000000020] [0x00004000] ( CPF_Net )
	unsigned long                                      mLosesSpeedOnDamage : 1;                          		// 0x0B30 (0x0004) [0x0000000000000001] [0x00008000] ( CPF_Edit )
	unsigned long                                      bTurretIsMoving : 1;                              		// 0x0B30 (0x0004) [0x0000000000002000] [0x00010000] ( CPF_Transient )
	unsigned long                                      bGunIsMoving : 1;                                 		// 0x0B30 (0x0004) [0x0000000000002000] [0x00020000] ( CPF_Transient )
	float                                              mReset_UnresponsiveCollisionTime;                 		// 0x0B34 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mReset_MaxStuckCollisionTime;                     		// 0x0B38 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgVehicleAutoDriverExit*                    mAutoExit;                                        		// 0x0B3C (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UPgVehicleBoost* >                   mBoost;                                           		// 0x0B40 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgVehicleBoostEnter*                        mBoostEnter;                                      		// 0x0B4C (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                mBoostIndex;                                      		// 0x0B50 (0x0004) [0x0000000000000020]              ( CPF_Net )
	class UPgVehicleSetInputs*                         mSetInputs;                                       		// 0x0B54 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgSpecialMoveAsset*                         mDriverEnterSpecialMove;                          		// 0x0B58 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgSpecialMoveAsset*                         mDriverLeaveSpecialMove;                          		// 0x0B5C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x0B60 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgVehicle.mMailingLists
	class UPgRB_StayUprightSetup*                      mLeanUprightConstraintSetup;                      		// 0x0B9C (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgRB_ConstraintInstance*                    mLeanUprightConstraintInstance;                   		// 0x0BA0 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	struct FInterpCurveFloat                           mLeanUprightAngleCurve;                           		// 0x0BA4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mMaxLeanRateVsSpeed;                              		// 0x0BB4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mLeanScaleAirDecay;                               		// 0x0BC4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPrevLeanScale;                                   		// 0x0BC8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mLeanUprightStiffness;                            		// 0x0BCC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLeanUprightDamping;                              		// 0x0BD0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCustomGravityFactor;                             		// 0x0BD4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class APgVehicleWeapon* >                  mSeatGunClassArchetypes;                          		// 0x0BD8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UParticleSystem*                             mWheelSquealParticleSystem;                       		// 0x0BE4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mEngineRPM;                                       		// 0x0BE8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mStasisEffectDuration;                            		// 0x0BEC (0x0004) [0x0000000000000000]              
	float                                              mFreezeEffectDuration;                            		// 0x0BF0 (0x0004) [0x0000000000000000]              
	struct FKnockdownOnRBCollisionInfo                 mKnockdownOnRigidBodyCollision;                   		// 0x0BF4 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           mSpeedScalarVsDamage;                             		// 0x0C14 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mVehicleSpawnPenetrationCheckUp;                  		// 0x0C24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mVehicleSpawnPenetrationCheckFront;               		// 0x0C28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mVehicleSpawnPenetrationCheckRear;                		// 0x0C2C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mVehicleSpawnPenetrationCheckSpread;              		// 0x0C30 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      mInputClass;                                      		// 0x0C34 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgVehicleRetroTurn*                         mRetroTurn;                                       		// 0x0C38 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              mForwardVelTime;                                  		// 0x0C3C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              LastSteering;                                     		// 0x0C40 (0x0004) [0x0000000000000000]              
	float                                              LastThrottle;                                     		// 0x0C44 (0x0004) [0x0000000000000000]              
	struct FVector                                     mSpawnLocation;                                   		// 0x0C48 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FScriptDelegate                             __GraphFunction__Delegate;                        		// 0x0C54 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2158 ];

		return pClassPointer;
	};

	bool eventDriverGTFO ( );
	struct FRotator GetWeaponAim ( class AUTVehicleWeapon* VWeapon );
	struct FRotator eventGetWeaponAimDirection ( int SeatIndex );
	struct FVector eventGetProjectileExtent ( int SeatIndex );
	void ResetStrafeDamping ( );
	void eventOnAnimEnd ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void PlayVehicleAnimation ( struct FName EventTag );
	void OnGiveInventoryArch ( class UPgSeqAct_GiveInventoryArch* inAction );
	void OnRemoveInventoryArch ( class UPgSeqAct_RemoveInventoryArch* inAction );
	void OnTeleport ( class USeqAct_Teleport* Action );
	void ProcessViewRotation ( float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot );
	void FaceRotation ( struct FRotator NewRotation, float DeltaTime );
	void KnockdownDriver ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, float Momentum, struct FVector Impulse, struct FName bone );
	bool DoJump ( unsigned long bUpdating );
	void eventServerSeatWeaponRotation ( int SeatIndex, struct FRotator NewRotation );
	void VehicleWeaponFireEffects ( struct FVector HitLocation, int SeatIndex );
	void VehicleWeaponStoppedFiring ( unsigned long bViaReplication, int SeatIndex );
	void WeaponStoppedFiring ( class AWeapon* InWeapon, unsigned long bViaReplication );
	bool StopsProjectile ( class AProjectile* P );
	void InitializeSeats ( );
	void eventServerRetroTurn ( unsigned char Direction );
	void RetroTurn ( unsigned char Direction );
	void eventServerBoost ( );
	bool IsInvisible ( );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	struct FRotator GetExitRotation ( class AController* C );
	void HandleDeadVehicleDriver ( );
	bool eventDriverLeave ( unsigned long bForceLeave );
	void DriverLeft ( );
	void SitDriver ( class APawn* P, int SeatIndex );
	bool DriverEnter ( class APawn* P );
	bool CanEnterVehicle ( class APawn* P );
	bool event_TryToDrive ( class APawn* P );
	bool WouldVehiclePenetrateWorld ( class APawn* P, struct FVector* SpawnLocation );
	void SetInputs ( float Forward, float Strafe, float Up );
	float RemapAxisByPlatform ( float Value );
	void AdjustDamage ( class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, struct FTraceHitInfo HitInfo, int* inDamage, struct FVector* Momentum );
	void BlowupVehicle ( );
	bool Died ( class AController* Killer, class UClass* DamageType, struct FVector HitLocation );
	void StopCollisions ( );
	void FireDeathSideEffects ( );
	float GetCollisionDamageModifier ( TArray< struct FRigidBodyContactInfo >* ContactInfos );
	class AController* GetCollisionDamageInstigator ( );
	void eventRigidBodyCollision ( class UPrimitiveComponent* HitComponent, class UPrimitiveComponent* OtherComponent, int ContactIndex, struct FCollisionImpactData* Collision );
	void Deflect ( struct FCollisionImpactData* Collision );
	int EnergyFlow ( int inEnergy, unsigned long overCharge );
	int HealthFlow ( int inHealth, unsigned long overCharge );
	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void FireDamageSideEffects ( );
	float GetDamageCauserDamageScaling ( class AController* InstigatedBy );
	void PlayerChangedTeam ( );
	void event_Suicide ( );
	void Suicide ( );
	void eventCheckReset ( );
	bool eventContinueOnFoot ( );
	void eventRanInto ( class AActor* Other );
	void PancakeOther ( class APawn* Other );
	void DisplayGraphDebug ( class AHUD* HUD, float YL, struct FScriptDelegate GraphFunc, struct FString GraphName, struct FString AxisXName, struct FString AxisYName, float AxisXMax, float AxisYMax, struct FVector Offset, float GraphScale );
	float GraphFunction ( float InVal );
	void DisplayWheelsDebug ( class AHUD* HUD, float YL );
	void DisplayControlsDebug ( class AHUD* HUD );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DisplayDebugLine ( struct FVector vec, int R, int G, int B );
	void DebugDrawOnlinePlayerName ( class AHUD* HUD );
	void GetSVehicleDebug ( TArray< struct FString >* DebugInfo );
	void eventReplicatedEvent ( struct FName VarName );
	void SetMoveControllerLevel ( unsigned long Level );
	void DeInitTeamCollisionChannels ( );
	void InitTeamCollisionChannels ( );
	bool AnyWheelSquealing ( );
	void event_ZeroMovementVariables ( );
	void eventZeroMovementVariables ( );
	float TorqueVSpeedEval ( float Speed );
	float EngineRPMEval ( float Speed );
	float MaxSteerAngleEval ( float Angle );
	float ThrottleVSpeedEval ( float Speed );
	void OnDamageCaused ( int damageCaused, class AActor* damageVictim, class AActor* DamageCauser );
	class UPgDamageParam* GetCauseDamageParam ( );
	TArray< class UMaterialInstanceConstant* > GetMaterialInstanceList ( );
	void InitMaterialInstanceList ( );
	void TimeInitPlugins ( );
	void DeInitPlugins ( );
	void InitPlugins ( );
	void SetCameraArchetype ( class APgPlayerCamera* newArchetype );
	class APgPlayerCamera* GetCameraArchetype ( );
	void PostEvent ( struct FName EventName, struct FName listName );
	void AdjustSpeedOnDamage ( int Damage );
	void UnPossessed ( );
	void PossessedBy ( class AController* C, unsigned long bVehicleTransition );
};

UClass* APgVehicle::pClassPointer = NULL;

// Class GridGame.PgVehicleAutoDriverExit
// 0x0000 (0x003C - 0x003C)
class UPgVehicleAutoDriverExit : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2159 ];

		return pClassPointer;
	};

};

UClass* UPgVehicleAutoDriverExit::pClassPointer = NULL;

// Class GridGame.PgVehicleBoost
// 0x008C (0x00C8 - 0x003C)
class UPgVehicleBoost : public UObject
{
public:
	float                                              BoosterForceMagnitude;                            		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bBoostersActivated : 1;                           		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bScriptedBoosters : 1;                            		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bTryToBoost : 1;                                  		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWasThrottle : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              MaxBoostDuration;                                 		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostStartTime;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              BoostChargeDuration;                              		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostChargeTime;                                  		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostPowerSpeed;                                  		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostReleaseTime;                                 		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              BoostReleaseDelay;                                		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           mBoostVsSlope;                                    		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mBoostVsTime;                                     		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mBoostVsSpeed;                                    		// 0x0080 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mWheel0LatScalarVsSpeed;                          		// 0x0090 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           mWheel1LatScalarVsSpeed;                          		// 0x00A0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              ThrottleStartTime;                                		// 0x00B0 (0x0004) [0x0000000000000000]              
	float                                              RocketSpeed;                                      		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostUprightTorqueFactor;                         		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoostUprightMaxTorque;                            		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DefaultUprightTorqueFactor;                       		// 0x00C0 (0x0004) [0x0000000000000000]              
	float                                              DefaultUprightMaxTorque;                          		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2160 ];

		return pClassPointer;
	};

	void Reset ( );
	void DriverLeft ( );
	void DriverEnter ( class APawn* P );
	void SetInputs ( float Forward, float Strafe, float Up );
	void eventDeactivateRocketBoosters ( );
	void eventActivateRocketBoosters ( );
};

UClass* UPgVehicleBoost::pClassPointer = NULL;

// Class GridGame.PgVehicleBoostEnter
// 0x0000 (0x00C8 - 0x00C8)
class UPgVehicleBoostEnter : public UPgVehicleBoost
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2161 ];

		return pClassPointer;
	};

	void DriverEnter ( class APawn* P );
};

UClass* UPgVehicleBoostEnter::pClassPointer = NULL;

// Class GridGame.PgVehicleRetroTurn
// 0x0014 (0x0050 - 0x003C)
class UPgVehicleRetroTurn : public UObject
{
public:
	float                                              mMinSpeed;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxTimeOffGround;                                		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FRetroTurnEventInfo >               mEventTags;                                       		// 0x0044 (0x000C) [0x0000000000400041]              ( CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2162 ];

		return pClassPointer;
	};

	void TurnVehicle ( unsigned char Direction );
};

UClass* UPgVehicleRetroTurn::pClassPointer = NULL;

// Class GridGame.PgVehicleSetInputs
// 0x0000 (0x003C - 0x003C)
class UPgVehicleSetInputs : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2163 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void SetInputs ( float Forward, float Strafe, float Up );
};

UClass* UPgVehicleSetInputs::pClassPointer = NULL;

// Class GridGame.PgVehicleSetInputsTank
// 0x0050 (0x008C - 0x003C)
class UPgVehicleSetInputsTank : public UPgVehicleSetInputs
{
public:
	float                                              mSteerDeadzone;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           mSteerDeadzoneCurve;                              		// 0x0040 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mTurnInPlaceThreshold;                            		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           mTurnInPlaceThresholdCurve;                       		// 0x0054 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mForwardBiasThreshold;                            		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           mForwardBiasThresholdCurve;                       		// 0x0068 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mReverseThreshold;                                		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           mReverseThresholdCurve;                           		// 0x007C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2164 ];

		return pClassPointer;
	};

	void SetInputs ( float Forward, float Strafe, float Up );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	float GetReverseThreshold ( );
	float GetForwardBiasThreshold ( );
	float GetTurnInPlaceThreshold ( );
	float GetSteerDeadzone ( );
	void SteerVehicle ( struct FVector Direction );
};

UClass* UPgVehicleSetInputsTank::pClassPointer = NULL;

// Class GridGame.PgVehicleSimCar
// 0x0030 (0x016C - 0x013C)
class UPgVehicleSimCar : public UUTVehicleSimCar
{
public:
	struct FInterpCurveFloat                           mThrottleVSpeedCurve;                             		// 0x013C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mMinForwardVel;                                   		// 0x014C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBrakingMinForwardVel;                            		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBrakingMinForwardVelForThrottle;                 		// 0x0154 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBrakeApplyThreshold;                             		// 0x0158 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mBrakeApply;                                      		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mBrakeReleaseThreshold;                           		// 0x0160 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mBrakeRelease;                                    		// 0x0164 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAirborneRevScale;                                		// 0x0168 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2165 ];

		return pClassPointer;
	};

};

UClass* UPgVehicleSimCar::pClassPointer = NULL;

// Class GridGame.PgVehicleSimChopper
// 0x0000 (0x0134 - 0x0134)
class UPgVehicleSimChopper : public UUTVehicleSimChopper
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2166 ];

		return pClassPointer;
	};

};

UClass* UPgVehicleSimChopper::pClassPointer = NULL;

// Class GridGame.PgVehicleSimHover
// 0x0000 (0x0138 - 0x0138)
class UPgVehicleSimHover : public UUTVehicleSimHover
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2167 ];

		return pClassPointer;
	};

};

UClass* UPgVehicleSimHover::pClassPointer = NULL;

// Class GridGame.PgVehicleSimTank
// 0x0024 (0x0118 - 0x00F4)
class UPgVehicleSimTank : public USVehicleSimTank
{
public:
	float                                              FrontalCollisionGripFactor;                       		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           EngineRPMCurve;                                   		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAkEvent*                                    TurretStart;                                      		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    TurretStop;                                       		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    CannonStart;                                      		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    CannonStop;                                       		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2168 ];

		return pClassPointer;
	};

};

UClass* UPgVehicleSimTank::pClassPointer = NULL;

// Class GridGame.PgWeaponPawn
// 0x0000 (0x05CC - 0x05CC)
class APgWeaponPawn : public AUTWeaponPawn
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2169 ];

		return pClassPointer;
	};

};

UClass* APgWeaponPawn::pClassPointer = NULL;

// Class GridGame.PgExplosion
// 0x0010 (0x00FC - 0x00EC)
class UPgExplosion : public UGameExplosion
{
public:
	class UAkEvent*                                    ExplosionAkEvent;                                 		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mSpawnRotation;                                   		// 0x00F0 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2170 ];

		return pClassPointer;
	};

};

UClass* UPgExplosion::pClassPointer = NULL;

// Class GridGame.PgExplosionActor
// 0x0018 (0x024C - 0x0234)
class APgExplosionActor : public AGameExplosionActor
{
public:
	struct FPointer                                    VfTable_IPgDamageParamInterface;                  		// 0x0234 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UPgDamageParam*                              mDamageParam;                                     		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APgProjectile*                               mProjectileInstigator;                            		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mSpawnRotation;                                   		// 0x0240 (0x000C) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2171 ];

		return pClassPointer;
	};

	void SpawnExplosionParticleSystem ( class UParticleSystem* Template );
	void eventExplode ( class UGameExplosion* NewExplosionTemplate, struct FVector Direction );
	void OnDamageCaused ( int damageCaused, class AActor* damageVictim, class AActor* DamageCauser );
	class UPgDamageParam* GetCauseDamageParam ( );
};

UClass* APgExplosionActor::pClassPointer = NULL;

// Class GridGame.PgInventory
// 0x0028 (0x0258 - 0x0230)
class APgInventory : public AInventory
{
public:
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x0230 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class APgInventoryPickup*                          mDroppedPickupArchetype;                          		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mSpawnedDroppedPickup : 1;                        		// 0x0238 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mReplicate : 1;                                   		// 0x0238 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< struct FPgLootInfo >                       mLoot;                                            		// 0x023C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UPgPlugInList*                               mPlugInListArchetype;                             		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x024C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       mTypeName;                                        		// 0x0250 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2172 ];

		return pClassPointer;
	};

	bool DenyPickupQuery ( class UClass* ItemClass, class AActor* Pickup );
	void ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
	struct FString GetLocalString ( int Switch, class APlayerReplicationInfo* RelatedPRI, class APlayerReplicationInfo* RelatedPRI01 );
	void DetachPlugin ( );
	void AttachPlugin ( class APawn* Pawn );
};

UClass* APgInventory::pClassPointer = NULL;

// Class GridGame.PgInventoryEnhancer
// 0x0000 (0x0258 - 0x0258)
class APgInventoryEnhancer : public APgInventory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2173 ];

		return pClassPointer;
	};

};

UClass* APgInventoryEnhancer::pClassPointer = NULL;

// Class GridGame.PgInventoryPassivePower
// 0x0000 (0x0258 - 0x0258)
class APgInventoryPassivePower : public APgInventory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2174 ];

		return pClassPointer;
	};

};

UClass* APgInventoryPassivePower::pClassPointer = NULL;

// Class GridGame.PgInventoryPower
// 0x000C (0x0264 - 0x0258)
class APgInventoryPower : public APgInventory
{
public:
	TArray< struct FPgPowerGroup >                     mPowerGrp;                                        		// 0x0258 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2175 ];

		return pClassPointer;
	};

	int GetEnergyMax ( );
	bool BehaviorMatch ( class UPgPowerBehavior* Behavior, TArray< class UClass* >* behaviorClass );
	void GetEnergyCost ( class APawn* powerUser, class APgPawn* powerDeduct, TArray< int >* energyCosts );
	int GetTotalEnergyLevels ( class APawn* powerUser, class APgPawn* powerDeduct );
	class APgProjectile* GetPowerProj ( class APawn* powerUser, class APgPawn* powerDeduct, TArray< class UClass* >* behaviorClass );
	bool IsValidPawn ( class APawn* Pawn, int grpIndex );
	int GetBestPowerLevel ( class APgPawn* Pawn );
	bool CanUsePowerLevel ( class APgPawn* Pawn, int Level );
	bool CanUsePower ( class APgPawn* Pawn );
	class APgProjectile* UseBestPower ( class APawn* powerUser, class APgPawn* powerDeduct, TArray< class UClass* >* behaviorClass );
};

UClass* APgInventoryPower::pClassPointer = NULL;

// Class GridGame.PgInventoryManager
// 0x0000 (0x0200 - 0x0200)
class APgInventoryManager : public AInventoryManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2176 ];

		return pClassPointer;
	};

	void RestoreSelectedPower ( struct FString powerArchetype );
	void DestroyInventory ( );
	void eventDropSingleInventory ( class AInventory* Inv, class APgInventoryPickup* droppedArchetype, struct FVector StartLocation, struct FVector StartVelocity );
	void eventCleanupInventory ( class AInventory* Inv );
	void RemoveFromInventory ( class AInventory* ItemToRemove );
	void ChangedWeapon ( );
	void WeaponEquipped ( );
	void PuttingWeaponDown ( );
	void ReplicateWeapon ( class AWeapon* CurrentWeapon );
	bool QuickSwitch ( struct FName weaponTypeName );
	bool QuickSwitchPower ( struct FName powerName );
	class AInventory* eventFindInventoryByName ( struct FName typeName );
	void ClientWeaponSet ( class AWeapon* NewWeapon, unsigned long bOptionalSet, unsigned long bDoNotActivate );
	void eventServerSetPower ( class APgInventoryPower* desiredPower );
	void eventSetDefaultInvPower ( );
};

UClass* APgInventoryManager::pClassPointer = NULL;

// Class GridGame.PgInventoryPickup
// 0x008C (0x0280 - 0x01F4)
class APgInventoryPickup : public ADroppedPickup
{
public:
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x01F4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class AInventory*                                  mInventoryArchetype;                              		// 0x01F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMeshComponent*                              Mesh;                                             		// 0x01FC (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMeshComponent*                              mAttachedMesh;                                    		// 0x0200 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mDroppedLifeSpan;                                 		// 0x0204 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mSave : 1;                                        		// 0x0208 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mRespawn : 1;                                     		// 0x0208 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mGiveToDriver : 1;                                		// 0x0208 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mFlyToNearestPlayer : 1;                          		// 0x0208 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      mInitPlugins : 1;                                 		// 0x0208 (0x0004) [0x0000000000000020] [0x00000010] ( CPF_Net )
	float                                              mRespawnTime;                                     		// 0x020C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgCondition*                                mPreconditionData;                                		// 0x0210 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x0214 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UPgPlugInList*                               mPlugInListArchetype;                             		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mInitVelMult;                                     		// 0x021C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mInitVelMultUp;                                   		// 0x0220 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxFlySpeed;                                     		// 0x0224 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mStartFlyingTime;                                 		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APawn*                                       mFlyToPlayerPawn;                                 		// 0x022C (0x0004) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	struct FName                                       mPickupEvent;                                     		// 0x0230 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mPickupDelay;                                     		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mDeInitPluginsFuncName;                           		// 0x023C (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x0244 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgInventoryPickup.mMailingLists

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2177 ];

		return pClassPointer;
	};

	void PickedUpBy ( class APawn* P );
	void Respawn ( );
	void eventFellOutOfWorld ( class UClass* dmgType );
	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void GiveTo ( class APawn* P );
	void eventPreBeginPlay ( );
	void eventReplicatedEvent ( struct FName VarName );
	void CheckBase ( );
	void PostEvent ( struct FName EventName, struct FName listName );
	void UpdatePlugins ( );
	void StartFlyingTo ( class APawn* flyToPawn );
	void TriggerEventPickupStatusChange ( class AActor* theInstigator, class APgInventoryPickup* thePickup, class UObject* Archetype, TArray< int >* ActivateIndices );
	void UnHidePickup ( );
	void HidePickup ( );
	void DeInitPlugins ( );
	void InitPlugins ( );
	bool IsValidTouch ( class APawn* Other );
};

UClass* APgInventoryPickup::pClassPointer = NULL;

// Class GridGame.PgPowerBehavior
// 0x0000 (0x003C - 0x003C)
class UPgPowerBehavior : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2178 ];

		return pClassPointer;
	};

	class AActor* PerformPowerBehavior ( class APawn* performer );
};

UClass* UPgPowerBehavior::pClassPointer = NULL;

// Class GridGame.PgPowerBehaviorBoost
// 0x0004 (0x0040 - 0x003C)
class UPgPowerBehaviorBoost : public UPgPowerBehavior
{
public:
	int                                                mBoostLevel;                                      		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2179 ];

		return pClassPointer;
	};

	class AActor* PerformPowerBehavior ( class APawn* performer );
};

UClass* UPgPowerBehaviorBoost::pClassPointer = NULL;

// Class GridGame.PgPowerBehaviorDamageScaling
// 0x0008 (0x0044 - 0x003C)
class UPgPowerBehaviorDamageScaling : public UPgPowerBehavior
{
public:
	float                                              mDamageScaling;                                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDuration;                                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2180 ];

		return pClassPointer;
	};

	class AActor* PerformPowerBehavior ( class APawn* performer );
};

UClass* UPgPowerBehaviorDamageScaling::pClassPointer = NULL;

// Class GridGame.PgPowerBehaviorProjectile
// 0x0004 (0x0040 - 0x003C)
class UPgPowerBehaviorProjectile : public UPgPowerBehavior
{
public:
	class APgProjectile*                               mProjectileArchetype;                             		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2181 ];

		return pClassPointer;
	};

	class AActor* PerformPowerBehavior ( class APawn* performer );
};

UClass* UPgPowerBehaviorProjectile::pClassPointer = NULL;

// Class GridGame.PgPowerBehaviorMelee
// 0x0000 (0x0040 - 0x0040)
class UPgPowerBehaviorMelee : public UPgPowerBehaviorProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2182 ];

		return pClassPointer;
	};

};

UClass* UPgPowerBehaviorMelee::pClassPointer = NULL;

// Class GridGame.PgPowerBehaviorMeleeAlt
// 0x0000 (0x0040 - 0x0040)
class UPgPowerBehaviorMeleeAlt : public UPgPowerBehaviorProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2183 ];

		return pClassPointer;
	};

};

UClass* UPgPowerBehaviorMeleeAlt::pClassPointer = NULL;

// Class GridGame.PgProjectile
// 0x0148 (0x03A4 - 0x025C)
class APgProjectile : public AGameProjectile
{
public:
	struct FPointer                                    VfTable_IPgMailingListInterface;                  		// 0x025C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgMailboxInterface;                      		// 0x0260 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgDamageParamInterface;                  		// 0x0264 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgMaterialInstanceInterface;             		// 0x0268 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x026C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UMeshComponent*                              Mesh;                                             		// 0x0270 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UMeshComponent*                              mAttachedMesh;                                    		// 0x0274 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned char                                      mImpactBehavior;                                  		// 0x0278 (0x0001) [0x0000000020000000]              ( CPF_Deprecated )
	TArray< unsigned char >                            mImpactBehaviorList;                              		// 0x027C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              mImpactDamage;                                    		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mImpactMomentumTransfer;                          		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPhysMatEffect*                            mImpactEffects;                                   		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPhysMatEffect*                            mBlockedImpactEffects;                            		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mCausesFracture : 1;                              		// 0x0298 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mIgnoreInstigatorVelocity : 1;                    		// 0x0298 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mPostedFireEvent : 1;                             		// 0x0298 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      mLockingOn : 1;                                   		// 0x0298 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      mReturning : 1;                                   		// 0x0298 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )
	unsigned long                                      mReturningStarted : 1;                            		// 0x0298 (0x0004) [0x0000000000002000] [0x00000020] ( CPF_Transient )
	unsigned long                                      mCanLockOn : 1;                                   		// 0x0298 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      mSprintModeLockOn : 1;                            		// 0x0298 (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      mReturnOnLockTargetHit : 1;                       		// 0x0298 (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      mCanReturn : 1;                                   		// 0x0298 (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bHasExploded : 1;                                 		// 0x0298 (0x0004) [0x0000000000002000] [0x00000400] ( CPF_Transient )
	unsigned long                                      mDiscFlightDynamics : 1;                          		// 0x0298 (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      mOrientToSurface : 1;                             		// 0x0298 (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	TArray< class APawn* >                             mDamagedPawns;                                    		// 0x029C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              mBounceRestitution;                               		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAcceleration;                                    		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mExplosionTime;                                   		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPhysMatEffect*                            mExplosionEffects;                                		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgExplosion*                                mExplosionTemplate;                               		// 0x02B8 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	float                                              mNextExplosionTime;                               		// 0x02BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mNextEffectsTime;                                 		// 0x02C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      mLockOnTarget;                                    		// 0x02C4 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              mCurrentTimeStepToDest;                           		// 0x02C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mTimeToStartLockOn;                               		// 0x02CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTimeForFullLockOn;                               		// 0x02D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTimeToReturnOnLockTargetHit;                     		// 0x02D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTimeToStartReturning;                            		// 0x02D8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTimeToFinishReturning;                           		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mReturnToSocket;                                  		// 0x02E0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mPrevLocation;                                    		// 0x02E8 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     mPrevFrameTarget;                                 		// 0x02F4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              mDiscFlightLerpRate;                              		// 0x0300 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTurnThreshold;                                   		// 0x0304 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMeshImpulse;                                     		// 0x0308 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mReorientFeelerDist;                              		// 0x030C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugInListArchetype;                             		// 0x0310 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x0314 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgPlugInComponent*                          mPlugInComponent;                                 		// 0x0318 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< class UMaterialInstanceConstant* >         mMaterialInstanceList;                            		// 0x031C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UPgDamageParam*                              mDamageParam;                                     		// 0x0328 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x032C (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgProjectile.mMailingLists
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x0368 (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgProjectile.mMailboxes

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2184 ];

		return pClassPointer;
	};

	void eventLanded ( struct FVector HitNormal, class AActor* FloorActor );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
	void eventUnTouch ( class AActor* Other );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void ProcessStick ( class AActor* Other, struct FVector HitLocation, struct FTraceHitInfo traceInfo );
	void GetImpactTraceHitInfo ( struct FVector HitLocation, class AActor* otherHitActor, struct FTraceHitInfo* HitInfo, class AActor** outHitActor );
	void eventTick ( float DeltaTime );
	void TriggerExplosion ( struct FVector HitLocation, struct FVector HitNormal, class AActor* HitActor, class UPhysicalMaterial* hitMaterial );
	void eventDeferredDestroy ( float DelaySec );
	bool CanUpdateExplosionTimer ( );
	void Init ( struct FVector Direction );
	void ReorientToSurface ( );
	bool eventHasImpactBehavior ( unsigned char impactBehavior );
	void eventInitFromNative ( struct FVector Direction );
	void eventPostBeginPlay ( );
	void eventPreBeginPlay ( );
	void OnDamageCaused ( int damageCaused, class AActor* damageVictim, class AActor* DamageCauser );
	class UPgDamageParam* GetCauseDamageParam ( );
	void PostEventHit ( struct FName EventName, struct FName listName, struct FVector HitNormal );
	void PostEvent ( struct FName EventName, struct FName listName );
	TArray< class UMaterialInstanceConstant* > GetMaterialInstanceList ( );
	void InitMaterialInstanceList ( );
};

UClass* APgProjectile::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_PickupStatusChange
// 0x000C (0x010C - 0x0100)
class UPgSeqEvent_PickupStatusChange : public USequenceEvent
{
public:
	TArray< class APgInventoryPickup* >                mPickupsToMonitor;                                		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2185 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_PickupStatusChange::pClassPointer = NULL;

// Class GridGame.PgWeapon
// 0x0034 (0x0308 - 0x02D4)
class APgWeapon : public AGameWeapon
{
public:
	struct FPointer                                    VfTable_IPgMaterialInstanceInterface;             		// 0x02D4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x02D8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class APgPawn*                                     mPgPawn;                                          		// 0x02DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgPlugInList*                               mPlugInListArchetype;                             		// 0x02E0 (0x0004) [0x0000000000200001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x02E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgPlugInComponent*                          mPlugInComponent;                                 		// 0x02E8 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< class UMaterialInstanceConstant* >         mMaterialInstanceList;                            		// 0x02EC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FName                                       mAttachEquippedSocketName;                        		// 0x02F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mCurrentSocketName;                               		// 0x0300 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2186 ];

		return pClassPointer;
	};

	struct FVector eventGetMuzzleLoc ( );
	bool GetSocketOrBoneLocationRotation ( struct FName boneOrSocketName, struct FVector* BoneLocation, struct FRotator* BoneRotation );
	void TimeWeaponEquipping ( );
	void TimeWeaponPutDown ( );
	void DetachWeapon ( );
	void AttachWeaponTo ( class USkeletalMeshComponent* MeshCpnt, struct FName SocketName );
	void DropFrom ( struct FVector StartLocation, struct FVector StartVelocity );
	void ClientGivenTo ( class APawn* NewOwner, unsigned long bDoNotActivate );
	void GivenTo ( class APawn* thisPawn, unsigned long bDoNotActivate );
	TArray< class UMaterialInstanceConstant* > GetMaterialInstanceList ( );
	void InitMaterialInstanceList ( );
};

UClass* APgWeapon::pClassPointer = NULL;

// Class GridGame.PgWeaponCombo
// 0x001C (0x0324 - 0x0308)
class APgWeaponCombo : public APgWeapon
{
public:
	TArray< class UPgSpecialMoveAsset* >               mSprintFireModeToSpecialMove;                     		// 0x0308 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UPgSpecialMoveAsset* >               mFireModeToSpecialMove;                           		// 0x0314 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UPgWeaponFireType*                           mCurrentPgWeaponFireType;                         		// 0x0320 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2187 ];

		return pClassPointer;
	};

	void eventComboMoveEnd ( );
	void eventComboMoveStarted ( );
	void HolderDied ( );
	void ServerStopFire ( unsigned char FireModeNum );
	void ServerStartFire ( unsigned char FireModeNum );
	void StopFire ( unsigned char FireModeNum );
	void StartFire ( unsigned char FireModeNum );
	void CustomFire ( );
	void StopFireEffects ( unsigned char FireModeNum );
	void PlayFireEffects ( unsigned char FireModeNum, struct FVector HitLocation );
	bool HasAmmo ( unsigned char FireModeNum, int Amount );
	class UPgSpecialMoveAsset* GetFireModeSpecialMove ( unsigned char FireModeNum );
	void PostBeginPlay ( );
};

UClass* APgWeaponCombo::pClassPointer = NULL;

// Class GridGame.PgWeaponFireType
// 0x0000 (0x003C - 0x003C)
class UPgWeaponFireType : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2188 ];

		return pClassPointer;
	};

	void CustomFire ( class AWeapon* Weapon );
};

UClass* UPgWeaponFireType::pClassPointer = NULL;

// Class GridGame.PgWeapFireTypeMelee
// 0x0020 (0x005C - 0x003C)
class UPgWeapFireTypeMelee : public UPgWeaponFireType
{
public:
	int                                                mDamage;                                          		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDamageRadius;                                    		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMomentum;                                        		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgDamageParam*                              mDamageParam;                                     		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mOffset;                                          		// 0x004C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mDebugDraw : 1;                                   		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2189 ];

		return pClassPointer;
	};

	void CustomFire ( class AWeapon* Weapon );
};

UClass* UPgWeapFireTypeMelee::pClassPointer = NULL;

// Class GridGame.PgWeapFireTypeProjectile
// 0x0020 (0x005C - 0x003C)
class UPgWeapFireTypeProjectile : public UPgWeaponFireType
{
public:
	class APgProjectile*                               mProjectileArchetype;                             		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APgProjectile*                               mSuperchargeProjArchetype;                        		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mTrackToTarget : 1;                               		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	struct FName                                       mSpawnAtSocket;                                   		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     mSpawnOffset;                                     		// 0x0050 (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2190 ];

		return pClassPointer;
	};

	class AProjectile* SpawnProjectile ( class AWeapon* Weapon, struct FVector RealStartLocation );
	void CustomFire ( class AWeapon* Weapon );
	class AProjectile* GetProjectileToFire ( class AWeapon* Weapon );
	void ComputeProjectileSpawnLocationRotation ( class APawn* Instigator, class AProjectile* projArchetype, struct FVector* SpawnLocation, struct FRotator* SpawnRotation );
};

UClass* UPgWeapFireTypeProjectile::pClassPointer = NULL;

// Class GridGame.PgWeapFireTypePower
// 0x000C (0x0068 - 0x005C)
class UPgWeapFireTypePower : public UPgWeapFireTypeProjectile
{
public:
	TArray< class UClass* >                            mBehaviorClasses;                                 		// 0x005C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2191 ];

		return pClassPointer;
	};

	class AProjectile* SpawnProjectile ( class AWeapon* Weapon, struct FVector RealStartLocation );
	class AProjectile* GetProjectileToFire ( class AWeapon* Weapon );
};

UClass* UPgWeapFireTypePower::pClassPointer = NULL;

// Class GridGame.PgWeapFireTypeVehicleDriver
// 0x0000 (0x003C - 0x003C)
class UPgWeapFireTypeVehicleDriver : public UPgWeaponFireType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2192 ];

		return pClassPointer;
	};

	void CustomFire ( class AWeapon* Weapon );
};

UClass* UPgWeapFireTypeVehicleDriver::pClassPointer = NULL;

// Class GridGame.PgTeamEnumeration
// 0x0000 (0x003C - 0x003C)
class UPgTeamEnumeration : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2193 ];

		return pClassPointer;
	};

};

UClass* UPgTeamEnumeration::pClassPointer = NULL;

// Class GridGame.PgOnline
// 0x0014 (0x0054 - 0x0040)
class UPgOnline : public USubsystem
{
public:
	class UPgOnlinePlayerList*                         mPlayerList;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	class UPgOnlineSessionManager*                     mSessionManager;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	class UPgOnlineGameManager*                        mGameManager;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	class UPgOnlineLoginManager*                       mLoginManager;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	class UPgOnlineLeaderboard*                        mLeaderboard;                                     		// 0x0050 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2194 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* FontHeight, float* YPos );
	class UPgOnlineLeaderboard* GetLeaderboard ( );
	class UPgOnlineLoginManager* GetLoginManager ( );
	class UPgOnlineGameManager* GetGameManager ( );
	class UPgOnlineSessionManager* GetSessionManager ( );
	class UPgOnlinePlayerList* GetPlayerList ( );
	bool IsStandAlone ( );
	bool IsClient ( );
	bool IsHost ( );
	bool IsMultiplayer ( );
	class UPgOnline* GetInstance ( );
};

UClass* UPgOnline::pClassPointer = NULL;

// Class GridGame.PgOnlineGameManager
// 0x004C (0x008C - 0x0040)
class UPgOnlineGameManager : public USubsystem
{
public:
	unsigned char                                      mNextGameMode;                                    		// 0x0040 (0x0001) [0x0000000000000000]              
	class UPgRuleSet*                                  mRuleSet;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
	class UPgRuleSet*                                  mDefaultRuleSet;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                mMapIndex;                                        		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                mCompletionMapIndex;                              		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FGameOption                                 mOptions[ 0x4 ];                                  		// 0x0054 (0x0030) [0x0000000000000000]              
	unsigned long                                      mPublic : 1;                                      		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsSeamlessGame : 1;                              		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mUsePersistentLevelLoading : 1;                   		// 0x0084 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mQosWarningEnabled : 1;                           		// 0x0084 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                mMaxPlayers;                                      		// 0x0088 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2195 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* FontHeight, float* YPos );
	struct FString event_GetPlayerNickname ( class UOnlineSubsystem* oss, unsigned char LocalUserNum );
	void lobbyStartCountdown ( );
	void lobbyLeaveSession ( unsigned long shouldSave );
	void lobbyStartReady ( );
	void DebugGoto ( struct FString URL );
	void DebugReset ( );
	int GetCurrentGameTime ( );
	int GetGameTimeLimit ( );
	void SetGameTimeLimit ( int TimeLimit );
	bool IsInPreGameLobby ( );
	int GetCompletionMapIndex ( );
	void SetCompletionMap ( struct FString MapName );
	int GetCurrentMapIndex ( );
	int GetNextMapIndex ( );
	struct FString GetNextMap ( );
	void SetNextMap ( int mapIndex );
	void GotoMap ( struct FString URL );
	bool IsSeamless ( );
	void SetSeamless ( unsigned long Seamless );
	void ShowQosWarning ( );
	void EnableQosWarning ( unsigned long Enabled );
	int GetRecommendedNumPlayers ( unsigned char GameModeIndex );
	int GetMaxNumPlayersForNextGame ( );
	void SetMaxPlayers ( int Max );
	bool IsPublic ( );
	void SetPublic ( unsigned long Public );
	void UpdateGRI ( );
	bool GetOptionValue ( struct FName OptionName, float* Value );
	void SetOptionAt ( int Index, struct FName OptionName, float Value );
	bool SetOption ( struct FName OptionName, float Value );
	class UPgRuleSet* GetStaticRuleSet ( unsigned char GameModeIndex );
	struct FString GetRuleSetFilename ( unsigned char GameModeIndex );
	class UPgRuleSet* GetRuleSet ( );
	void InitRuleSet ( unsigned char GameModeIndex );
	unsigned char GetNextGameMode ( );
	unsigned char GetCurrentGameMode ( );
	void SetNextGameMode ( unsigned char GameModeIndex );
	struct FString GetGameSettingsURL ( unsigned char GameModeIndex );
	void RestartLevel ( );
	void GameCompleted ( );
	void LaunchGame ( unsigned long bForceHardLoad, unsigned long bIgnoreChapterPoints );
	void InitGRI ( );
};

UClass* UPgOnlineGameManager::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboard
// 0x0064 (0x00A4 - 0x0040)
class UPgOnlineLeaderboard : public USubsystem
{
public:
	TArray< struct FLeaderboardData >                  mLeaderboards;                                    		// 0x0040 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FLeaderboardStatData >              mLeaderboardStats;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      mLeaderboardUpdates;                              		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineStatsRead*                            mCurrentRead;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                mCurrentLocalUpdateIndex;                         		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned char                                      mCurrentFriendRead;                               		// 0x006C (0x0001) [0x0000000000000000]              
	unsigned long                                      mDoneLeaderboardSync : 1;                         		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mGameInProgress : 1;                              		// 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mIsReady : 1;                                     		// 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mDoFixup : 1;                                     		// 0x0070 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                mCurrentLeaderBoardUpdateID;                      		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              mLastLeaderboardUpdateTime;                       		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              mMinLeaderboardUpdateTime;                        		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2196 ];

		return pClassPointer;
	};

	void DebugLog ( class UOnlineStatsRead* Read );
	void eventAddDestroyOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearDestroyOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventAddStartOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearStartOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventAddCreateOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearCreateOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventClearReadFriendsCompleteDelegate ( class UOnlineSubsystem* os, unsigned char LocalUserNum, struct FScriptDelegate dgt );
	void eventAddReadFriendsCompleteDelegate ( class UOnlineSubsystem* os, unsigned char LocalUserNum, struct FScriptDelegate dgt );
	void eventClearReadOnlineStatsCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventAddReadOnlineStatsCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	bool eventDoLeaderboardFriendRead ( class UOnlineSubsystem* os, int LocalUserIndex );
	void OnReadFriendsComplete ( unsigned long bWasSuccessful );
	void OnUpdateLocalLbStatsComplete ( unsigned long successful );
	void OnReadLeaderboardComplete ( unsigned long successful );
	void OnReadFriendLeaderboardComplete ( unsigned long successful );
	void UpdateLocalLbRating ( int LeaderboardId );
	int GetReaderId ( struct FString ReaderName );
	class UClass* GetWriterClass ( int Id );
	class UClass* GetReaderClass ( int Id );
	void FlushLeaderboardStats ( int LeaderboardId );
	void EndLeaderBoardSession ( );
	void StartLeaderBoardSession ( );
	void OnDestroyLBGameComplete ( struct FName SessionName, unsigned long successful );
	void OnStartLBGameComplete ( struct FName SessionName, unsigned long successful );
	void OnCreateLBGameComplete ( struct FName SessionName, unsigned long successful );
	void UpdateLBviaLocalData ( int LeaderboardId );
	void ClearLocalStats ( );
	void LbReadNearMe ( struct FString LeaderboardName, int Num );
	void LbReadRange ( struct FString LeaderboardName, int Start, int Num );
	void LbReadFriends ( struct FString LeaderboardName );
	void LbRead ( struct FString LeaderboardName );
	bool UpdateXPLeaderboard ( class APgPlayerReplicationInfo* PRI );
	struct FLeaderboardStatData UpdateLocalPlayerStats ( int LeaderboardId, class APgPlayerReplicationInfo* PRI );
	void UpdateLocalLeaderboardStats ( int LeaderboardId );
	void FixupLeaderboardStats ( );
	void UpdateAllLocalLeaderboardStats ( );
	void FinishRead ( int LeaderboardId );
	class UOnlineStatsRead* GetLeaderBoardReadData ( int LeaderboardId );
	void ReadNearPlayer ( int LeaderboardId, int Num, int LocalUserIndex );
	void ReadRange ( int LeaderboardId, int Start, int Num );
	void ReadFriends ( int LeaderboardId, int LocalUserIndex );
	void ReadPlayersEx ( int LeaderboardId, TArray< struct FUniqueNetId >* playerIds );
	void ReadPlayers ( int LeaderboardId, unsigned long onlyLocalPlayer );
};

UClass* UPgOnlineLeaderboard::pClassPointer = NULL;

// Class GridGame.PgOnlinePlayerList
// 0x000C (0x004C - 0x0040)
class UPgOnlinePlayerList : public USubsystem
{
public:
	struct FScriptDelegate                             __OnPlayerUpdated__Delegate;                      		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2197 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* FontHeight, float* YPos );
	void DebugListPlayers ( );
	void NotifyPlayerUpdated ( class APlayerReplicationInfo* PRI );
	void SetOnPlayerUpdatedDelegate ( struct FScriptDelegate UpdatedDelegate );
	void OnPlayerUpdated ( class APlayerReplicationInfo* PRI );
	bool IsEveryoneReady ( );
	int GetAvgPlayerSkill ( );
	void SetClientsToState ( unsigned char eState );
	bool KickPlayer ( struct FUniqueNetId UniqueId );
	bool IsLocalPlayer ( class APlayerReplicationInfo* PRI );
	bool HasPlayer ( class APlayerReplicationInfo* PRI );
	class APgPlayerReplicationInfo* GetHost ( );
	class APgPlayerReplicationInfo* GetLocalPlayer ( );
	class APgPlayerReplicationInfo* GetExPlayerByID ( int PlayerID );
	class APgPlayerReplicationInfo* GetPlayerByID ( int PlayerID );
	class APgPlayerReplicationInfo* GetPlayer ( struct FUniqueNetId UniqueId );
	void GetAIPlayers ( TArray< class APgPlayerReplicationInfo* >* Bots );
	void GetHumanPlayers ( TArray< class APgPlayerReplicationInfo* >* Humans );
	class APgPlayerReplicationInfo* GetPlayerAt ( int Index );
	int GetNumAIPlayers ( );
	int GetNumHumanPlayers ( );
	int GetNumPlayers ( );
};

UClass* UPgOnlinePlayerList::pClassPointer = NULL;

// Class GridGame.PgOnlineSessionManager
// 0x00AC (0x00EC - 0x0040)
class UPgOnlineSessionManager : public USubsystem
{
public:
	class UPgOnlineGameSearch*                         mOnlineGameSearch;                                		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      mLoadToLobby : 1;                                 		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mAutoJoin : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mAutoHost : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mQuickmatch : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mIsLeavingGame : 1;                               		// 0x0044 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mAutoStart : 1;                                   		// 0x0044 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mAutoQuit : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000040] 
	int                                                mMatchmakingAttempts;                             		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                mSessionToJoin;                                   		// 0x004C (0x0004) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      mBannedList;                                      		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      mBannedByList;                                    		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                mAutoMatchTime;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                mAutoHostMap;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                mAutohostMode;                                    		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnServiceQosCheckComplete__Delegate;            		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2198 ];

		return pClassPointer;
	};

	void eventAddEndOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearEndOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventAddStartOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearStartOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventAddGameInviteAcceptedDelegate ( class UOnlineSubsystem* os, unsigned char LocalUserNum, struct FScriptDelegate dgt );
	void eventClearGameInviteAcceptedDelegate ( class UOnlineSubsystem* os, unsigned char LocalUserNum, struct FScriptDelegate dgt );
	void OnGameInviteAccepted ( class UOnlineGameSettings* Settings );
	void eventAddJoinOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearJoinOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventAddCancelFindOnlineGamesCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearCancelFindOnlineGamesCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnCancelFindOnlineGamesComplete ( unsigned long successful );
	void eventAddFindOnlineGamesCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearFindOnlineGamesCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnFindOnlineGamesComplete ( unsigned long successful );
	void eventAddDestroyOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearDestroyOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventAddUpdateOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearUpdateOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventAddCreateOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventClearCreateOnlineGameCompleteDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventClearReadFriendsCompleteDelegate ( class UOnlineSubsystem* os, unsigned char LocalUserNum, struct FScriptDelegate dgt );
	void eventAddReadFriendsCompleteDelegate ( class UOnlineSubsystem* os, unsigned char LocalUserNum, struct FScriptDelegate dgt );
	bool eventDoFriendRead ( class UOnlineSubsystem* os, int LocalUserIndex );
	void eventClearServiceQosDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate ServiceQosDelegate );
	void eventAddServiceQosDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate ServiceQosDelegate );
	void OnServiceQosCheckComplete ( );
	struct FString event_GetPlayerNickname ( class UOnlineSubsystem* oss, unsigned char LocalUserNum );
	void EndQuickmatch ( );
	void AutoHostCompleted ( unsigned long successful );
	void AutoJoinCompleted ( unsigned long successful );
	int GetAutoJoinSessionIndex ( class UPgOnlineGameSearch* Search );
	int GetNumValidSearchResults ( class UPgOnlineGameSearch* Search );
	bool IsValidSearchResult ( struct FOnlineGameSearchResult* SearchResult );
	void GetNextMatchSkillRatings ( int* MinSkill, int* MaxSkill );
	bool ShouldRetrySkillMatching ( );
	void ResetSkillMatchingAttempts ( );
	void OnDestroyLeaderBoardGameComplete ( struct FName SessionName, unsigned long successful );
	void OnEndLeaderBoardGameComplete ( struct FName SessionName, unsigned long successful );
	void OnCreateLBGameComplete ( struct FName SessionName, unsigned long successful );
	void EndLeaderBoardSession ( struct FName SessionName );
	void StartLeaderBoardSession ( struct FName SessionName );
	void Debug_OnStartLeaderBoardGameComplete ( struct FName SessionName, unsigned long successful );
	void Debug_OnCreateLeaderBoardGameComplete ( struct FName SessionName, unsigned long successful );
	void DebugUpdateLeaderBoard ( int LeaderboardId );
	void DebugCreateLeaderBoardSession ( int LeaderboardId );
	void ToggleNATFilter ( );
	void StopAutoMatch ( );
	void StartAutoMatch ( struct FString Mode, struct FString Map, unsigned long autoQuit, int matchTime );
	void MP_JoinGame ( int nSession );
	void MP_StartGame ( struct FString Mode, struct FString Map );
	void eventClearAutoLoginDelegates ( class UOnlineSubsystem* oss );
	void eventAddAutoLoginDelegates ( class UOnlineSubsystem* oss );
	void AutoSignInDelegate ( unsigned char netStatus, struct FUniqueNetId NewId );
	void ShowFriendGames ( );
	void DebugCreateParty ( );
	void StartQuickMatch ( );
	void StartStoryMode ( );
	void StartMPMode ( );
	void DebugLeaveAllSessions ( );
	void DebugStartMap ( struct FString Mode, struct FString Map, unsigned long ignoreChapterPoints );
	void DebugAccessGameGrid ( int modeIndex, int mapIndex, struct FString CompletionMap );
	void DebugDestroy ( );
	void DebugLeave ( );
	void DebugJoin ( struct FString Address );
	void DebugCreate ( struct FString Map );
	void ShowInvites ( );
	void LeaveMP ( );
	bool IsBannedBy ( struct FUniqueNetId NetId );
	void AddBannedBy ( struct FUniqueNetId NetId );
	void BannedBySession ( );
	bool IsBanned ( struct FUniqueNetId NetId );
	void AddBannedId ( struct FUniqueNetId NetId );
	void Reset ( );
	void CancelQuickmatch ( );
	void PgOnlineSessionManager_OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void PgOnlineSessionManager_OnEndOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void LeaveGameSession ( unsigned long shouldSave );
	void PgOnlineSessionManager_OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void JoinSession ( int serverSearchResultsIndex );
	void PgOnlineSessionManager_OnCancelFindOnlineGamesComplete ( unsigned long successful );
	void CancelFindSession ( );
	void PgOnlineSessionManager_OnReadFriendsComplete ( unsigned long bWasSuccessful );
	void PgOnlineSessionManager_OnFindFriendGamesComplete ( unsigned long successful );
	void FindFriendSessions ( );
	void PgOnlineSessionManager_OnFindOnlineGamesComplete ( unsigned long successful );
	void RetryFindSession ( );
	void FindSession ( unsigned char gameMode, int minPlayers, int MaxPlayers, int DLCFlags, unsigned long AutoJoin );
	void UpdateClientSession ( );
	void UpdateSession ( );
	void PgOnlineSessionManager_OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void CreateSession ( unsigned char gameMode, int Map, unsigned long isRanked, unsigned long IsPublic, int numPlayerSlots );
	void PgOnlineSessionManager_OnQosCheckComplete ( );
	void StartSeamlessMP ( unsigned char modeIndex, int mapIndex, struct FString CompletionMap );
	void CreateSeamlessGame ( );
	void CreateLobby ( );
	bool CanPlayOnlineSeamless ( );
	bool IsAutoHosting ( );
	bool IsAutoJoining ( );
	bool IsQuickmatch ( );
	bool IsStrictNAT ( );
	unsigned char GetNewPlayerState ( );
};

UClass* UPgOnlineSessionManager::pClassPointer = NULL;

// Class GridGame.PgOnlineGameSearch
// 0x000C (0x010C - 0x0100)
class UPgOnlineGameSearch : public UOnlineGameSearch
{
public:
	struct FPointer                                    mPlatformSearchResults;                           		// 0x0100 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      mRoomInviteSearch : 1;                            		// 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                mNumServersToPing;                                		// 0x0108 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2199 ];

		return pClassPointer;
	};

	int GetDLCFlags ( );
	void SetDLCFlags ( int DLCFlags );
	int GetMaxSkillRating ( );
	void SetMaxSkillRating ( int maxRating );
	int GetMinSkillRating ( );
	void SetMinSkillRating ( int minRating );
	int GetMaxNumPlayers ( );
	void SetMaxNumPlayers ( int N );
	int GetMinNumPlayers ( );
	void SetMinNumPlayers ( int N );
	unsigned char GetGameMode ( );
	void SetGameMode ( unsigned char gameMode );
};

UClass* UPgOnlineGameSearch::pClassPointer = NULL;

// Class GridGame.PgOnlineGameSettings
// 0x0010 (0x00F8 - 0x00E8)
class UPgOnlineGameSettings : public UOnlineGameSettings
{
public:
	int                                                mPingRequestIds[ 0x3 ];                           		// 0x00E8 (0x000C) [0x0000000000000000]              
	int                                                mPingsCompleted;                                  		// 0x00F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2200 ];

		return pClassPointer;
	};

	unsigned char GetOnlineGameState ( );
	void SetOnlineGameState ( unsigned char S );
	int GetAvgPlayerRating ( );
	void SetAvgPlayerRating ( int avgRating );
	int GetTimeCurrent ( );
	void SetTimeCurrent ( int Time );
	int GetTimeLimit ( );
	void SetTimeLimit ( int Time );
	int GetDLCFlags ( );
	void SetDLCFlags ( int DLCFlags );
	int GetMap ( );
	void SetMap ( int Map );
	unsigned char GetGameMode ( );
	void SetGameMode ( unsigned char gameMode );
	int GetNumPlayerSlots ( );
	void SetNumPlayerSlots ( int N );
	int GetNumPlayers ( );
	void SetNumPlayers ( int N );
	bool GetIsPublic ( );
	void SetIsPublic ( unsigned long B );
	bool GetIsRanked ( );
	void SetIsRanked ( unsigned long B );
	struct FString GetHostName ( );
	void SetHostName ( struct FString S );
	void Copy ( class UPgOnlineGameSettings* GameSettings );
};

UClass* UPgOnlineGameSettings::pClassPointer = NULL;

// Class GridGame.PgOnlineLoginManager
// 0x000C (0x0048 - 0x003C)
class UPgOnlineLoginManager : public UObject
{
public:
	unsigned char                                      mNeedProfileReloadMask;                           		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned long                                      mWatchProfileChange : 1;                          		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mMainControllerSignedIn : 1;                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mSeamlessOnlineGame : 1;                          		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                mMainControllerId;                                		// 0x0044 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2201 ];

		return pClassPointer;
	};

	void GoOnline ( );
	void eventSetLocalPlayerControllerId ( int NewControllerId );
	bool event_ShowContentMarketplaceUI ( class UOnlineSubsystem* oss, unsigned char LocalUserNum, int CategoryMask, int OfferId );
	bool ShowContentMarketplaceUI ( unsigned char LocalUserNum, int CategoryMask, int OfferId );
	int GetMainControllerId ( );
	void SetMainControllerId ( int loginControllerId );
	void HanldeLoginStatusChange ( unsigned char ControllerId );
	void LoginAttempt ( unsigned char loginControllerId, unsigned char minReqLoginStatus );
	struct FString event_GetPlayerNickname ( class UOnlineSubsystem* oss, unsigned char LocalUserNum );
	struct FString GetPlayerNickname ( unsigned char LocalUserNum );
	unsigned char GetLoginStatus ( unsigned char LocalUserNum, unsigned long useCache );
	class ULocalPlayer* GetLocalPlayerAt ( int Index );
	int GetNumLocalPlayers ( );
	void OnLoginAttemptComplete ( unsigned char loginAttemptResult, unsigned char ControllerId );
	void Cleanup ( );
	void Init ( );
	void eventClearPlayerInterfaceLoginDelegates ( class UOnlineSubsystem* oss );
	void eventAddPlayerInterfaceLoginDelegates ( class UOnlineSubsystem* oss );
	void ProfileLoaded ( unsigned char ControllerId );
	bool NeedProfileReload ( unsigned char ControllerId );
	void NotifyStorageDeviceChanged ( );
	void OnPartyChange ( );
	void OnLoginCancelled ( );
	void OnLoginStatusChangeP6 ( unsigned char netStatus, struct FUniqueNetId NewId );
	void OnLoginStatusChangeP5 ( unsigned char netStatus, struct FUniqueNetId NewId );
	void OnLoginStatusChangeP4 ( unsigned char netStatus, struct FUniqueNetId NewId );
	void OnLoginStatusChangeP3 ( unsigned char netStatus, struct FUniqueNetId NewId );
	void OnLoginStatusChangeP2 ( unsigned char netStatus, struct FUniqueNetId NewId );
	void OnLoginStatusChangeP1 ( unsigned char netStatus, struct FUniqueNetId NewId );
	void OnLoginStatusChangeP0 ( unsigned char netStatus, struct FUniqueNetId NewId );
	void OnLoginChange ( unsigned char LocalUserNum );
	void OnConnectionStatusChange ( unsigned char ConnectionStatus );
	void OnLinkStatusChanged ( unsigned long bIsConnected );
	void OnExternalUIChanged ( unsigned long bIsOpening );
};

UClass* UPgOnlineLoginManager::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardRead_ELO
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardRead_ELO : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2202 ];

		return pClassPointer;
	};

};

UClass* UPgOnlineLeaderboardRead_ELO::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardRead_EXP
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardRead_EXP : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2203 ];

		return pClassPointer;
	};

};

UClass* UPgOnlineLeaderboardRead_EXP::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardRead_GameModeBR
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardRead_GameModeBR : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2204 ];

		return pClassPointer;
	};

};

UClass* UPgOnlineLeaderboardRead_GameModeBR::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardRead_GameModeDM
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardRead_GameModeDM : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2205 ];

		return pClassPointer;
	};

};

UClass* UPgOnlineLeaderboardRead_GameModeDM::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardRead_GameModePM
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardRead_GameModePM : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2206 ];

		return pClassPointer;
	};

};

UClass* UPgOnlineLeaderboardRead_GameModePM::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardRead_GameModeTDM
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardRead_GameModeTDM : public UOnlineStatsRead
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2207 ];

		return pClassPointer;
	};

};

UClass* UPgOnlineLeaderboardRead_GameModeTDM::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardWrite
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardWrite : public UOnlineStatsWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2208 ];

		return pClassPointer;
	};

	void SetQWordStat ( int StatId, struct FQWord Value );
	void UpdateFromLocalData ( );
	void eventUpdateFromPRI ( class APgPlayerReplicationInfo* PRI );
};

UClass* UPgOnlineLeaderboardWrite::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardWrite_ELO
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardWrite_ELO : public UPgOnlineLeaderboardWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2209 ];

		return pClassPointer;
	};

	void UpdateFromLocalData ( );
	void UpdateFromPRI ( class APgPlayerReplicationInfo* PRI );
};

UClass* UPgOnlineLeaderboardWrite_ELO::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardWrite_EXP
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardWrite_EXP : public UPgOnlineLeaderboardWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2210 ];

		return pClassPointer;
	};

	void UpdateFromLocalData ( );
	void UpdateFromPRI ( class APgPlayerReplicationInfo* PRI );
};

UClass* UPgOnlineLeaderboardWrite_EXP::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardWrite_GameModeBR
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardWrite_GameModeBR : public UPgOnlineLeaderboardWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2211 ];

		return pClassPointer;
	};

	void UpdateFromLocalData ( );
	void UpdateFromPRI ( class APgPlayerReplicationInfo* PRI );
};

UClass* UPgOnlineLeaderboardWrite_GameModeBR::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardWrite_GameModeDM
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardWrite_GameModeDM : public UPgOnlineLeaderboardWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2212 ];

		return pClassPointer;
	};

	void UpdateFromLocalData ( );
	void UpdateFromPRI ( class APgPlayerReplicationInfo* PRI );
};

UClass* UPgOnlineLeaderboardWrite_GameModeDM::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardWrite_GameModePM
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardWrite_GameModePM : public UPgOnlineLeaderboardWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2213 ];

		return pClassPointer;
	};

	void UpdateFromLocalData ( );
	void UpdateFromPRI ( class APgPlayerReplicationInfo* PRI );
};

UClass* UPgOnlineLeaderboardWrite_GameModePM::pClassPointer = NULL;

// Class GridGame.PgOnlineLeaderboardWrite_GameModeTDM
// 0x0000 (0x0088 - 0x0088)
class UPgOnlineLeaderboardWrite_GameModeTDM : public UPgOnlineLeaderboardWrite
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2214 ];

		return pClassPointer;
	};

	void UpdateFromLocalData ( );
	void UpdateFromPRI ( class APgPlayerReplicationInfo* PRI );
};

UClass* UPgOnlineLeaderboardWrite_GameModeTDM::pClassPointer = NULL;

// Class GridGame.PgOnlineEnumerations
// 0x0098 (0x00D4 - 0x003C)
class UPgOnlineEnumerations : public UObject
{
public:
	struct FString                                     kStoryModeStartMap;                               		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FName                                       kDefaultMPGameMode;                               		// 0x0048 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FName                                       kDefaultMPMap;                                    		// 0x0050 (0x0008) [0x0000000000004000]              ( CPF_Config )
	float                                              kWaitingForHostTimeout;                           		// 0x0058 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                kBestPingThreshold;                               		// 0x005C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                kBadPingThreshold;                                		// 0x0060 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FQosScaleData >                     kQosScale;                                        		// 0x0064 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              kQosCheckTimeout;                                 		// 0x0070 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                kMaxNumSkillMatchAttempts;                        		// 0x0074 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                kInitialMatchSkillDiff;                           		// 0x0078 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                kMaxVoiceTokens;                                  		// 0x007C (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FUIProfile >                        kUIData;                                          		// 0x0080 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMapData >                          kMapData;                                         		// 0x008C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FGameModeData >                     kGameModeData;                                    		// 0x0098 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FSeamlessData >                     kSeamlessData;                                    		// 0x00A4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FColor                                      kVoiceChatTintColour;                             		// 0x00B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              kPlayerLabel_MinDistance;                         		// 0x00B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              kPlayerLabel_MaxDistance;                         		// 0x00B8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              kPlayerLabel_HeightOffset;                        		// 0x00BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FColor                                      kEventBox_DefaultPlayerColour;                    		// 0x00C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              kEventBox_ScrollRate;                             		// 0x00C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              kLobbyCountdown_Length;                           		// 0x00C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              kInvulnerability_Timer;                           		// 0x00CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              kPreGameTips_Timer;                               		// 0x00D0 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2215 ];

		return pClassPointer;
	};

	bool GetModeUIProfile ( unsigned char modeIndex, struct FString* ProfileName );
	bool GetModeRuleset ( unsigned char modeIndex, struct FName* rulesetName );
	bool GetModeTitle ( unsigned char modeIndex, struct FString* modeTitle );
	bool GetModeName ( unsigned char modeIndex, struct FName* modeName );
	int GetModeIndex ( struct FName modeName );
	int GetNumModes ( );
	int GetMapForMode ( int mapIndex, unsigned char modeIndex );
	bool IsModeSupportedByMap ( int mapIndex, unsigned char modeIndex );
	bool GetMapName ( int mapIndex, struct FName* MapName );
	bool GetMapTitle ( int mapIndex, struct FString* mapTitle );
	bool GetMapFilename ( int mapIndex, struct FString* Filename );
	int MapFilenametoIndex ( struct FString Filename );
	int GetNumMaps ( );
	bool GetUIProfileIndexByName ( struct FString ProfileName, int* ProfileIndex );
	int GetNumUIProfiles ( );
};

UClass* UPgOnlineEnumerations::pClassPointer = NULL;

// Class GridGame.PgGameInfo
// 0x00EC (0x04C0 - 0x03D4)
class APgGameInfo : public AGameInfo
{
public:
	TArray< struct FString >                           mDefaultArchetypes;                               		// 0x03D4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           mVehicleArchetypes;                               		// 0x03E0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class APlayerController*                           mPlayerControllerArchetype;                       		// 0x03EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           mGameMgrClasses;                                  		// 0x03F0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x03FC (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgGameInfo.mGameMgrs
	unsigned char                                      mDefaultOnlinePlayerState;                        		// 0x0438 (0x0001) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x3C ];                            		// 0x043C (0x003C) UNKNOWN PROPERTY: MapProperty GridGame.PgGameInfo.mActorMap
	TArray< struct FPlayerCollisionChannelInfo >       mPlayerCollisionChannels;                         		// 0x0478 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class APgObjective* >                      mObjectives;                                      		// 0x0484 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTeamData >                         mTeamMetaData;                                    		// 0x0490 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPlayerStartInfo >                  mLastStarts;                                      		// 0x049C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class APgTeamBase* >                       mTeamBases;                                       		// 0x04A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      mUseCheckpoints : 1;                              		// 0x04B4 (0x0004) [0x0000000000000000] [0x00000001] 
	class UPgGameplayEventsWriter*                     mGameplayEventsWriter;                            		// 0x04B8 (0x0004) [0x0000000000000000]              
	class APlayerStart*                                mDebugForcedPlayerStart;                          		// 0x04BC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2216 ];

		return pClassPointer;
	};

	void SetGameSpeedNative ( float T );
	class APlayerController* SpawnPlayerController ( struct FVector SpawnLocation, struct FRotator SpawnRotation );
	void SetDebugPlayerStart ( class APlayerStart* Start );
	void LogSettings ( );
	void event_ChangeName ( class AController* C, struct FString S, unsigned long bNameChange );
	bool event_CheckForSentinelRun ( );
	void RemovePlayerFromCollisionTeams ( class APgPlayerReplicationInfo* PlayerRepInfo );
	void AddPlayerToCollisionTeams ( class APgPlayerReplicationInfo* PlayerRepInfo );
	void UpdateResetRelatedStats ( class AController* Player );
	void UpdateDeathRelatedStats ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void AwardXPForKill ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn );
	void event_HandleSeamlessTravelPlayer ( class AController** C );
	void eventHandleSeamlessTravelPlayer ( class AController** C );
	bool AllowCheats ( class APlayerController* P );
	class APgObjective* GetObjective ( struct FName ObjName, unsigned char TeamIndex );
	bool IsObjectiveInList ( class APgObjective* Obj );
	void RemoveObjective ( class APgObjective* Obj );
	void AddObjective ( class APgObjective* Obj );
	unsigned char GetPreferredEnemyTeam ( unsigned char TeamIndex );
	bool ChangeTeam ( class AController* C, int NewTeam, unsigned long CreateNewTeam );
	unsigned char PickTeam ( unsigned char Current, class AController* C );
	void CreateTeams ( );
	int event_GetNumPlayers ( );
	bool AtCapacity ( unsigned long bSpectator );
	class APawn* GetFirstAliveAndWellPlayer ( class APawn* excludingPawn );
	int NumAliveAndWellPlayers ( );
	void event_Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void event_ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	void ReduceDamage ( class APawn* injured, class AController* InstigatedBy, struct FVector HitLocation, class UClass* DamageType, class AActor* DamageCauser, int* Damage, struct FVector* Momentum );
	float ScaleDamage ( class APgPlayerController* damageTaker, class APgPlayerController* InstigatedBy );
	void event_KickBan ( struct FString S );
	void KickBan ( struct FString S );
	void event_Kick ( struct FString S );
	void ScoreKill ( class AController* Killer, class AController* Victim );
	void ScoreObjective ( class APlayerReplicationInfo* Scorer, int Score );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	void UnregisterTeamBase ( class APgTeamBase* TeamBase );
	void RegisterTeamBase ( class APgTeamBase* TeamBase );
	class AInfo* GetGameMgr ( class UClass* requestMgr );
	class AActor* GetDefaultPlayerArchetype ( class AController* C );
	class UClass* event_GetDefaultPlayerClass ( class AController* C );
	class UClass* GetDefaultPlayerClass ( class AController* C );
	void LoadArchetypePackages ( );
	class APgVehicle* eventSpawnDefaultVehicleFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	class APawn* event_SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	class APawn* SpawnDefaultPawnFor ( class AController* NewPlayer, class ANavigationPoint* StartSpot );
	void DisableReferencingScrubbers ( class AController* Player );
	void ResetLastPlayerStarts ( );
	void AddLastPlayerStart ( class AController* Player, class ANavigationPoint* Start );
	class ANavigationPoint* FindLastPlayerStart ( class AController* Player );
	float event_RatePlayerStart ( class APlayerStart* Start, unsigned char Team, class AController* Player );
	float RatePlayerStart ( class APlayerStart* Start, unsigned char Team, class AController* Player );
	class ANavigationPoint* event_FindPlayerStart ( class AController* Player, unsigned char InTeam, struct FString IncomingName );
	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam, struct FString IncomingName );
	void eventShowLoadingScreen ( unsigned long show );
	void eventClearScreenStack ( int eStack );
	void eventActivateGFxScreen ( struct FString szInstanceName, unsigned char eStack, float fDuration, struct FString szHostInstance );
	void eventSendEventBoxMessage ( unsigned char eType, int idPlayer1, int idPlayer2, struct FString szName );
	void eventOpenPgHud ( unsigned long bOpen );
	void eventShowPgHud ( unsigned long bShow );
	void event_NotifyArbitratedMatchEnd ( );
	void event_EndOnlineGame ( );
	void event_WriteOnlinePlayerScores ( );
	void event_WriteOnlineStats ( );
	void UpdatePlayerHitStreak ( float DeltaSeconds );
	void eventUpdatePostMatchPlayerStats ( );
	void eventSaveUserData ( );
	void eventFlushOnlineStats ( );
	void PerformEndGameHandling ( );
	void ClearCheckpointURL ( );
	void BeginLobbyCountdown ( );
	void StartHumans ( );
	void EnableSaveLoad ( unsigned long bEnable );
	void StreamLevelWait ( );
	void LoadPlayerData ( class AController* Player );
	bool UsesCheckpoints ( );
	class ANavigationPoint* FindCoopPlayerStart ( class AController* Player );
	void event_RestartPlayer ( class AController* Player );
	void RestartPlayer ( class AController* Player );
	void event_ResetLevel ( );
	void ResetLevel ( );
	void event_GameEnding ( );
	void eventGameEnding ( );
	void event_EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void event_StartMatch ( );
	void StartMatch ( );
	void eventPreExit ( );
	void EndLogging ( struct FString Reason );
	void StartLogging ( struct FString remoteIP, int Port );
	void PostBeginPlay ( );
	void ForceGameplayEventsLogging ( unsigned long Force );
	bool ShouldLogGameplayEvents ( );
	unsigned char GetDefaultOnlinePlayerState ( );
	void eventPostCommitMapChange ( );
	void PostLogout ( class AController* C );
	void event_Logout ( class AController* Exiting );
	void eventLogout ( class AController* Exiting );
	void event_PostLogin ( class APlayerController* NewPlayer );
	void eventPostLogin ( class APlayerController* NewPlayer );
	class APlayerController* event_Login ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage );
	class APlayerController* eventLogin ( struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage );
	void event_PreLogin ( struct FString Options, struct FString Address, struct FString* ErrorMessage );
	void eventPreLogin ( struct FString Options, struct FString Address, struct FString* ErrorMessage );
	void event_InitGameReplicationInfo ( );
	void InitGameReplicationInfo ( );
	void event_InitGame ( struct FString Options, struct FString* ErrorMessage );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
	class UClass* eventSetGameType ( struct FString MapName, struct FString Options, struct FString Portal );
	class APgGameInfo* GetGameInfo ( );
};

UClass* APgGameInfo::pClassPointer = NULL;

// Class GridGame.PgFEGameInfo
// 0x0000 (0x04C0 - 0x04C0)
class APgFEGameInfo : public APgGameInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2217 ];

		return pClassPointer;
	};

};

UClass* APgFEGameInfo::pClassPointer = NULL;

// Class GridGame.PgMPLobbyGameInfo
// 0x0000 (0x04C0 - 0x04C0)
class APgMPLobbyGameInfo : public APgFEGameInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2218 ];

		return pClassPointer;
	};

	bool AllowPausing ( class APlayerController* PC );
};

UClass* APgMPLobbyGameInfo::pClassPointer = NULL;

// Class GridGame.PgMPGameInfo
// 0x0025 (0x04E5 - 0x04C0)
class APgMPGameInfo : public APgGameInfo
{
public:
	float                                              mStartGameDelay;                                  		// 0x04C0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mEndRoundDelay;                                   		// 0x04C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mEndGameDelay;                                    		// 0x04C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mBaseRespawnDelay;                                		// 0x04CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mMaxAutoSpawnBots;                                		// 0x04D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mNumBotNames;                                     		// 0x04D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mLastUpdateGameTime;                              		// 0x04D8 (0x0004) [0x0000000000000000]              
	class AActor*                                      mDefaultBotArchetype;                             		// 0x04DC (0x0004) [0x0000000000000000]              
	unsigned long                                      mInSeamlessTravel : 1;                            		// 0x04E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      mDelayedMPKismetEvent;                            		// 0x04E4 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2219 ];

		return pClassPointer;
	};

	void LogSettings ( );
	void OnEndGameDelayTimeOut ( );
	void OnStartGameDelayTimeOut ( );
	void event_Timer ( );
	void eventTimer ( );
	bool AllowPausing ( class APlayerController* PC );
	void SwitchSides ( );
	void ResetStats ( unsigned char Reason );
	void InitNextRound ( );
	void InitRounds ( );
	bool CanStartMatch ( );
	struct FString GetRandomBotName ( unsigned long Reset );
	void RemoveBot ( );
	void RemoveBots ( int Num );
	int NumExcessBots ( );
	bool TooManyBots ( );
	void SpawnBot ( class AActor* BotArchetype );
	void AddBots ( int Num );
	void FillBots ( );
	void UpdateBotCount ( );
	void UpdateTeamSpeakers ( );
	unsigned char GetPreferredEnemyTeam ( unsigned char TeamIndex );
	void InitDefendingTeam ( );
	unsigned char PickTeam ( unsigned char Current, class AController* C );
	void FreeColorIndexFrom ( class APgPlayerReplicationInfo* PRI );
	void AssignColorIndexTo ( class APgPlayerReplicationInfo* PRI );
	void UpdateEndGameStats ( );
	void AwardXPForEndGame ( );
	void OnFireDelayedKismetEvent ( );
	void FireKismetEvent ( unsigned char eEvent, float Delay );
	void PickWinner ( );
	void Killed ( class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, class UClass* DamageType );
	void ScoreTimeup ( );
	void ScoreDeath ( class AController* Victim );
	void ScoreKill ( class AController* Killer, class AController* Victim );
	void ScoreObjective ( class APlayerReplicationInfo* Scorer, int Amount );
	void Score ( struct FName Event, class AActor* Scorer );
	bool CheckTimeup ( );
	bool CheckLivesRemaining ( );
	bool CheckScore ( class APlayerReplicationInfo* Scorer );
	bool PlayerCanRestartGame ( class APlayerController* Player );
	void EndGame ( class APlayerReplicationInfo* Winner, struct FString Reason );
	void EndRound ( struct FString Reason );
	void ResetLevel ( );
	void DelayedStartMatch ( );
	void StartMatch ( );
	void eventHandleSeamlessTravelPlayer ( class AController** C );
	class AActor* GetDefaultPlayerArchetype ( class AController* C );
	void event_PostSeamlessTravel ( );
	void eventPostSeamlessTravel ( );
	void PostLogout ( class AController* C );
	void eventLogout ( class AController* Exiting );
	void eventPostLogin ( class APlayerController* NewPlayer );
	void eventInitGame ( struct FString Options, struct FString* ErrorMessage );
};

UClass* APgMPGameInfo::pClassPointer = NULL;

// Class GridGame.PgMPVehicleGameInfo
// 0x0000 (0x04E5 - 0x04E5)
class APgMPVehicleGameInfo : public APgMPGameInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2220 ];

		return pClassPointer;
	};

};

UClass* APgMPVehicleGameInfo::pClassPointer = NULL;

// Class GridGame.PgGameReplicationInfo
// 0x0040 (0x0284 - 0x0244)
class APgGameReplicationInfo : public AGameReplicationInfo
{
public:
	unsigned char                                      mCurrentGameModeIndex;                            		// 0x0244 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      mNextGameModeIndex;                               		// 0x0245 (0x0001) [0x0000000000000020]              ( CPF_Net )
	int                                                mCurrentMapIndex;                                 		// 0x0248 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mNextMapIndex;                                    		// 0x024C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mStartGameDelayTimeout;                           		// 0x0250 (0x0004) [0x0000000000000000]              
	float                                              mStartGameDelayRemaining;                         		// 0x0254 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mEndGameDelayTimeout;                             		// 0x0258 (0x0004) [0x0000000000000000]              
	float                                              mEndGameDelayRemaining;                           		// 0x025C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mNumRounds;                                       		// 0x0260 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mRound;                                           		// 0x0264 (0x0004) [0x0000000000000020]              ( CPF_Net )
	unsigned long                                      mRoundIsOver : 1;                                 		// 0x0268 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      mPublic : 1;                                      		// 0x0268 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	int                                                mDefenderID;                                      		// 0x026C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mMaxPlayers;                                      		// 0x0270 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mTimeLimit;                                       		// 0x0274 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mLobbyCountdown;                                  		// 0x0278 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mNumFreeVoiceTokens;                              		// 0x027C (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mGameModeRepCount;                                		// 0x0280 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2221 ];

		return pClassPointer;
	};

	void OnTalkingStateChanged ( class APgPlayerReplicationInfo* PRI );
	void InitVoiceTokens ( );
	bool IsLastRound ( );
	bool IsRoundBasedGame ( );
	class APgTeamInfo* GetDefendingTeam ( );
	class APgTeamInfo* GetRandomTeam ( );
	class APgTeamInfo* GetLeastHumanTeam ( unsigned long AllowTies );
	class APgTeamInfo* GetMostHumanTeam ( unsigned long AllowTies );
	class APgTeamInfo* GetSmallestTeam ( unsigned long AllowTies );
	class APgTeamInfo* GetBiggestTeam ( unsigned long AllowTies );
	class APgTeamInfo* GetTeamByName ( struct FName TeamName );
	class APgTeamInfo* GetTeam ( unsigned char TeamID );
	bool OnSameTeam ( class AActor* A, class AActor* B );
	bool IsTeamGame ( );
	int GetNumTeams ( );
	class APgPlayerReplicationInfo* GetWinningPlayer ( );
	bool GameInProgress ( );
	void event_EndGame ( );
	void EndGame ( );
	void event_SortPRIArray ( );
	void SortPRIArray ( );
	void event_RemovePRI ( class APlayerReplicationInfo* PRI );
	void RemovePRI ( class APlayerReplicationInfo* PRI );
	void eventTimer ( );
	void event_SetTeam ( int Index, class ATeamInfo* TI );
	void event_Reset ( );
	void Reset ( );
	class APgGameReplicationInfo* GetGRI ( );
	void event_ReplicatedEvent ( struct FName VarName );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* APgGameReplicationInfo::pClassPointer = NULL;

// Class GridGame.PgPlayerReplicationInfo
// 0x0078 (0x0334 - 0x02BC)
class APgPlayerReplicationInfo : public APlayerReplicationInfo
{
public:
	unsigned long                                      mIsHost : 1;                                      		// 0x02BC (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      mIsSpeaking : 1;                                  		// 0x02BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      mOnlineState;                                     		// 0x02C0 (0x0001) [0x0000000000000020]              ( CPF_Net )
	unsigned char                                      mPrevState;                                       		// 0x02C1 (0x0001) [0x0000000000000000]              
	unsigned char                                      mTeamCollisionChannel;                            		// 0x02C2 (0x0001) [0x0000000000000020]              ( CPF_Net )
	class APgStatInfo*                                 mStats;                                           		// 0x02C4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mPoints;                                          		// 0x02C8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mXPScore;                                         		// 0x02CC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mXPSession;                                       		// 0x02D0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mXPGame;                                          		// 0x02D4 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mSkillPoints;                                     		// 0x02D8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mAssists;                                         		// 0x02DC (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mHitStreak;                                       		// 0x02E0 (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mHitStreakTime;                                   		// 0x02E4 (0x0004) [0x0000000000000000]              
	int                                                mDLClist;                                         		// 0x02E8 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                PlayerSkill;                                      		// 0x02EC (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FVector                                     mPosition;                                        		// 0x02F0 (0x000C) [0x0000000000000020]              ( CPF_Net )
	int                                                mTargetID;                                        		// 0x02FC (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mHealth;                                          		// 0x0300 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mEndGameXpBonus;                                  		// 0x0304 (0x0004) [0x0000000000000020]              ( CPF_Net )
	int                                                mColorIndex;                                      		// 0x0308 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FLinearColor                                mCachedColor;                                     		// 0x030C (0x0010) [0x0000000000000000]              
	struct FName                                       mCachedColorName;                                 		// 0x031C (0x0008) [0x0000000000000000]              
	int                                                mCachedColorIndex;                                		// 0x0324 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnPlayerSpeaking__Delegate;                     		// 0x0328 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2222 ];

		return pClassPointer;
	};

	void OnStateChanged ( unsigned char NewState, unsigned char OldState );
	bool event_IsInvalidName ( );
	void UpdateHitStreak ( );
	void AwardSkillPoints ( int nPoints );
	void AwardXP ( int nPoints, int nBonus );
	void event_Reset ( );
	void Reset ( );
	void ResetStats ( unsigned char Reason );
	float GetStatValue ( struct FName Stat );
	void WriteStatValue ( struct FName Stat, unsigned char Op, float Value );
	bool HasStat ( struct FName Stat );
	void InitStats ( );
	void eventClearPlayerSpeakingDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void eventAddPlayerSpeakingDelegate ( class UOnlineSubsystem* os, struct FScriptDelegate dgt );
	void OnPlayerSpeaking ( struct FUniqueNetId Id, unsigned long bIsTalking );
	void PgPlayerReplicationInfo_OnPlayerSpeaking ( struct FUniqueNetId Id, unsigned long bIsTalking );
	void UnregisterPlayerTalker ( );
	void RegisterPlayerTalker ( );
	bool IsMuted ( );
	bool IsSpeaking ( );
	struct FName GetPlayerColorName ( );
	struct FLinearColor GetPlayerColor ( );
	struct FString GetPlayerName ( );
	void event_UnregisterPlayerFromSession ( );
	void UnregisterPlayerFromSession ( );
	void event_RegisterPlayerWithSession ( );
	void RegisterPlayerWithSession ( );
	void event_SetUniqueId ( struct FUniqueNetId PlayerUniqueId );
	void SetUniqueId ( struct FUniqueNetId PlayerUniqueId );
	void event_OverrideWith ( class APlayerReplicationInfo* PRI );
	void OverrideWith ( class APlayerReplicationInfo* PRI );
	void event_CopyProperties ( class APlayerReplicationInfo* Dest );
	void CopyProperties ( class APlayerReplicationInfo* Dest );
	void event_ClientInitialize ( class AController* C );
	void ClientInitialize ( class AController* C );
	void event_ReplicatedEvent ( struct FName VarName );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* APgPlayerReplicationInfo::pClassPointer = NULL;

// Class GridGame.PgPlayerStart
// 0x0010 (0x02D4 - 0x02C4)
class APgPlayerStart : public APlayerStart
{
public:
	float                                              fStandOnRadius;                                   		// 0x02C4 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              fLookAtRadius;                                    		// 0x02C8 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UDrawCylinderComponent*                      mDrawStandOnCylinder;                             		// 0x02CC (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDrawCylinderComponent*                      mDrawLookAtCylinder;                              		// 0x02D0 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2223 ];

		return pClassPointer;
	};

	bool IsUsableAnchorFor ( class APawn* P );
	void TriggerEvent ( );
	bool IsActiveCheckpoint ( );
};

UClass* APgPlayerStart::pClassPointer = NULL;

// Class GridGame.PgRule
// 0x0008 (0x0044 - 0x003C)
class UPgRule : public UObject
{
public:
	struct FName                                       mOptionName;                                      		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2224 ];

		return pClassPointer;
	};

	bool Compare ( unsigned char Comparison, float Value1, float Value2 );
	bool InOrder ( unsigned char Order, float Value1, float Value2 );
	struct FString GetCmdLineString ( );
	float GetValue ( );
};

UClass* UPgRule::pClassPointer = NULL;

// Class GridGame.PgEndRule
// 0x0008 (0x004C - 0x0044)
class UPgEndRule : public UPgRule
{
public:
	struct FName                                       kReason;                                          		// 0x0044 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2225 ];

		return pClassPointer;
	};

	bool Check ( );
};

UClass* UPgEndRule::pClassPointer = NULL;

// Class GridGame.PgGoalReachedEndRule
// 0x0010 (0x005C - 0x004C)
class UPgGoalReachedEndRule : public UPgEndRule
{
public:
	struct FName                                       mStat;                                            		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mComparison;                                      		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mGoal;                                            		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2226 ];

		return pClassPointer;
	};

	bool Check ( );
	float GetValue ( );
};

UClass* UPgGoalReachedEndRule::pClassPointer = NULL;

// Class GridGame.PgOneRemainingEndRule
// 0x0010 (0x005C - 0x004C)
class UPgOneRemainingEndRule : public UPgEndRule
{
public:
	struct FName                                       mStat;                                            		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mComparison;                                      		// 0x0054 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mThreshold;                                       		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2227 ];

		return pClassPointer;
	};

	bool Check ( );
	float GetValue ( );
};

UClass* UPgOneRemainingEndRule::pClassPointer = NULL;

// Class GridGame.PgTimeLimitEndRule
// 0x0004 (0x0050 - 0x004C)
class UPgTimeLimitEndRule : public UPgEndRule
{
public:
	int                                                mTimeLimit;                                       		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2228 ];

		return pClassPointer;
	};

	bool Check ( );
	struct FString GetCmdLineString ( );
	float GetValue ( );
};

UClass* UPgTimeLimitEndRule::pClassPointer = NULL;

// Class GridGame.PgGameRule
// 0x0004 (0x0048 - 0x0044)
class UPgGameRule : public UPgRule
{
public:
	class UPgCondition*                                mCondition;                                       		// 0x0044 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2229 ];

		return pClassPointer;
	};

	void Apply ( );
	bool CheckCondition ( );
};

UClass* UPgGameRule::pClassPointer = NULL;

// Class GridGame.PgScoreRule
// 0x000C (0x0050 - 0x0044)
class UPgScoreRule : public UPgRule
{
public:
	unsigned char                                      mOperation;                                       		// 0x0044 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mStat;                                            		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2230 ];

		return pClassPointer;
	};

	void UpdateTeam ( class APgTeamInfo* Team, float Amount );
	void UpdatePlayer ( class APgPlayerReplicationInfo* Player, float Amount );
	void Apply ( class AActor* Scorer );
	float GetValue ( );
	bool Matches ( struct FName Tag );
};

UClass* UPgScoreRule::pClassPointer = NULL;

// Class GridGame.PgCustomScoreRule
// 0x000C (0x005C - 0x0050)
class UPgCustomScoreRule : public UPgScoreRule
{
public:
	struct FName                                       mTag;                                             		// 0x0050 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mValue;                                           		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2231 ];

		return pClassPointer;
	};

	float GetValue ( );
	bool Matches ( struct FName Tag );
};

UClass* UPgCustomScoreRule::pClassPointer = NULL;

// Class GridGame.PgPresetScoreRule
// 0x000C (0x005C - 0x0050)
class UPgPresetScoreRule : public UPgScoreRule
{
public:
	struct FName                                       mTag;                                             		// 0x0050 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              mValue;                                           		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2232 ];

		return pClassPointer;
	};

	float GetValue ( );
	bool Matches ( struct FName Tag );
};

UClass* UPgPresetScoreRule::pClassPointer = NULL;

// Class GridGame.PgScoreDeathRule
// 0x0000 (0x005C - 0x005C)
class UPgScoreDeathRule : public UPgPresetScoreRule
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2233 ];

		return pClassPointer;
	};

};

UClass* UPgScoreDeathRule::pClassPointer = NULL;

// Class GridGame.PgScoreDefenseRule
// 0x0000 (0x005C - 0x005C)
class UPgScoreDefenseRule : public UPgPresetScoreRule
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2234 ];

		return pClassPointer;
	};

};

UClass* UPgScoreDefenseRule::pClassPointer = NULL;

// Class GridGame.PgScoreKillRule
// 0x0000 (0x005C - 0x005C)
class UPgScoreKillRule : public UPgPresetScoreRule
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2235 ];

		return pClassPointer;
	};

};

UClass* UPgScoreKillRule::pClassPointer = NULL;

// Class GridGame.PgScoreSuicideRule
// 0x0000 (0x005C - 0x005C)
class UPgScoreSuicideRule : public UPgPresetScoreRule
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2236 ];

		return pClassPointer;
	};

};

UClass* UPgScoreSuicideRule::pClassPointer = NULL;

// Class GridGame.PgScoreTeamKillRule
// 0x0000 (0x005C - 0x005C)
class UPgScoreTeamKillRule : public UPgPresetScoreRule
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2237 ];

		return pClassPointer;
	};

};

UClass* UPgScoreTeamKillRule::pClassPointer = NULL;

// Class GridGame.PgWinRule
// 0x0000 (0x0044 - 0x0044)
class UPgWinRule : public UPgRule
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2238 ];

		return pClassPointer;
	};

	bool InOrderTeams ( class APgTeamInfo* Player1, class APgTeamInfo* Player2 );
	bool InOrderPlayers ( class APgPlayerReplicationInfo* Player1, class APgPlayerReplicationInfo* Player2 );
	void GetTeamsSorted ( unsigned long Ascending, TArray< class ATeamInfo* >* Teams );
	void GetPlayersSorted ( unsigned long Ascending, TArray< class APlayerReplicationInfo* >* Players );
};

UClass* UPgWinRule::pClassPointer = NULL;

// Class GridGame.PgBestStatWinRule
// 0x000C (0x0050 - 0x0044)
class UPgBestStatWinRule : public UPgWinRule
{
public:
	unsigned char                                      mOrder;                                           		// 0x0044 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mStat;                                            		// 0x0048 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2239 ];

		return pClassPointer;
	};

	bool InOrderTeams ( class APgTeamInfo* Player1, class APgTeamInfo* Player2 );
	bool InOrderPlayers ( class APgPlayerReplicationInfo* Player1, class APgPlayerReplicationInfo* Player2 );
};

UClass* UPgBestStatWinRule::pClassPointer = NULL;

// Class GridGame.PgStatThresholdWinRule
// 0x0010 (0x0054 - 0x0044)
class UPgStatThresholdWinRule : public UPgWinRule
{
public:
	struct FName                                       mStat;                                            		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mComparison;                                      		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mThreshold;                                       		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2240 ];

		return pClassPointer;
	};

	bool InOrderTeams ( class APgTeamInfo* Player1, class APgTeamInfo* Player2 );
	bool InOrderPlayers ( class APgPlayerReplicationInfo* Player1, class APgPlayerReplicationInfo* Player2 );
};

UClass* UPgStatThresholdWinRule::pClassPointer = NULL;

// Class GridGame.PgRuleSet
// 0x0210 (0x024C - 0x003C)
class UPgRuleSet : public UObject
{
public:
	int                                                mMinRequiredPlayers;                              		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mMaxAllowedPlayers;                               		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mDefenderID;                                      		// 0x0044 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mFriendlyFireEnabled : 1;                         		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mSwitchSidesEachRound : 1;                        		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mAllowBots : 1;                                   		// 0x0048 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FGameStatData                               mPlayerStats[ 0xA ];                              		// 0x004C (0x00C8) [0x0000000000000001]              ( CPF_Edit )
	struct FGameStatData                               mTeamStats[ 0xA ];                                		// 0x0114 (0x00C8) [0x0000000000000001]              ( CPF_Edit )
	int                                                mNumRounds;                                       		// 0x01DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRespawnDelay;                                    		// 0x01E0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPlayerStartFactorInfo                      mPlayerStartFactors;                              		// 0x01E4 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UPgScoreRule* >                      mScoringRules;                                    		// 0x01F8 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UPgEndRule* >                        mEndConditions;                                   		// 0x0204 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class UPgWinRule* >                        mWinConditions;                                   		// 0x0210 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< struct FTeamData >                         mTeams;                                           		// 0x021C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AActor*                                      mAIArchetype;                                     		// 0x0228 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mPawnArchetype;                                   		// 0x022C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FUserConfigOption >                 mOptions;                                         		// 0x0230 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                mWinXP;                                           		// 0x023C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mXPModifier;                                      		// 0x0240 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mWinStatName;                                     		// 0x0244 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2241 ];

		return pClassPointer;
	};

	void GetAllStats ( TArray< struct FName >* Stats );
	void LogSettings ( );
	class AActor* GetBotPawnArchetype ( );
	class AActor* GetBotAIArchetype ( );
	bool GetOption ( struct FName OptionName, struct FUserConfigOption* Option );
	void GetTeamsRanked ( unsigned long Descending, TArray< class APgTeamInfo* >* Teams );
	void GetPlayersRanked ( unsigned long Descending, unsigned char TeamIndex, TArray< class APgPlayerReplicationInfo* >* Players );
	class APgTeamInfo* GetLosingTeam ( );
	class APgPlayerReplicationInfo* GetLosingPlayer ( unsigned char TeamIndex );
	class APgTeamInfo* GetWinningTeam ( );
	class APgPlayerReplicationInfo* GetWinningPlayer ( unsigned char TeamIndex );
	class AActor* GetWinner ( );
	bool CheckEndRound ( struct FName Reason );
	void Score ( struct FName Event, class AActor* Scorer );
	struct FString GetCmdLineString ( );
	class UPgRuleSet* GetRuleSet ( );
};

UClass* UPgRuleSet::pClassPointer = NULL;

// Class GridGame.PgSeqAct_AwardXP
// 0x0004 (0x00EC - 0x00E8)
class UPgSeqAct_AwardXP : public USequenceAction
{
public:
	int                                                Amount;                                           		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2242 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_AwardXP::pClassPointer = NULL;

// Class GridGame.PgSeqAct_Score
// 0x0008 (0x00F0 - 0x00E8)
class UPgSeqAct_Score : public USequenceAction
{
public:
	struct FName                                       Tag;                                              		// 0x00E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2243 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_Score::pClassPointer = NULL;

// Class GridGame.PgStatInfo
// 0x00C8 (0x02AC - 0x01E4)
class APgStatInfo : public AActor
{
public:
	struct FGameStatData                               mStats[ 0xA ];                                    		// 0x01E4 (0x00C8) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2244 ];

		return pClassPointer;
	};

	void ResetStats ( unsigned char Reason );
	float GetStatValue ( struct FName Stat );
	void WriteStatValue ( struct FName Stat, unsigned char Op, float Value );
	void GetStatData ( struct FName Stat, struct FGameStatData* Data );
	bool HasStat ( struct FName Stat );
	void event_ReplicatedEvent ( struct FName VarName );
	void eventReplicatedEvent ( struct FName VarName );
};

UClass* APgStatInfo::pClassPointer = NULL;

// Class GridGame.PgTeamBase
// 0x001C (0x0200 - 0x01E4)
class APgTeamBase : public AActor
{
public:
	unsigned char                                      mTeamId;                                          		// 0x01E4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              mWeight;                                          		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mEnabled : 1;                                     		// 0x01EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              mRadius;                                          		// 0x01F0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USpriteComponent*                            mSprite;                                          		// 0x01F4 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDrawCylinderComponent*                      mTeamColorCylinder;                               		// 0x01F8 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UDrawCylinderComponent*                      mRadiusCylinder;                                  		// 0x01FC (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2245 ];

		return pClassPointer;
	};

	void OnToggle ( class USeqAct_Toggle* Action );
};

UClass* APgTeamBase::pClassPointer = NULL;

// Class GridGame.PgTeamInfo
// 0x0084 (0x0284 - 0x0200)
class APgTeamInfo : public ATeamInfo
{
public:
	struct FLinearColor                                mLinearColor;                                     		// 0x0200 (0x0010) [0x0000000000000020]              ( CPF_Net )
	struct FLinearColor                                mColors[ 0x4 ];                                   		// 0x0210 (0x0040) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       mColorNames[ 0x4 ];                               		// 0x0250 (0x0020) [0x0000000000000020]              ( CPF_Net )
	class APgStatInfo*                                 mStats;                                           		// 0x0270 (0x0004) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       mTeamFName;                                       		// 0x0274 (0x0008) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       mTeamColorName;                                   		// 0x027C (0x0008) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2246 ];

		return pClassPointer;
	};

	void ResetStats ( unsigned char Reason );
	float GetStatValue ( struct FName Stat );
	void WriteStatValue ( struct FName Stat, unsigned char Op, float Value );
	bool HasStat ( struct FName Stat );
	void InitStats ( );
	struct FName GetTeamColorName ( int Idx );
	void GetTeamColor ( int Index, struct FLinearColor* Colour );
	void GetPlayers ( TArray< class APlayerReplicationInfo* >* Players );
	int GetNumBots ( );
	int GetNumHumans ( );
	int GetNumPlayers ( );
	void eventReset ( );
	void event_RemoveFromTeam ( class AController* Member );
	bool event_AddToTeam ( class AController* NewMember );
};

UClass* APgTeamInfo::pClassPointer = NULL;

// Class GridGame.PgBlockingVolume
// 0x0010 (0x0234 - 0x0224)
class APgBlockingVolume : public ABlockingVolume
{
public:
	TArray< class APawn* >                             mAllowedPawnTypes;                                		// 0x0224 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mAllowPlayers : 1;                                		// 0x0230 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mAllowAI : 1;                                     		// 0x0230 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2247 ];

		return pClassPointer;
	};

	bool StopsProjectile ( class AProjectile* P );
};

UClass* APgBlockingVolume::pClassPointer = NULL;

// Class GridGame.PgEnergyActor
// 0x00C0 (0x02A4 - 0x01E4)
class APgEnergyActor : public AActor
{
public:
	struct FPointer                                    VfTable_IPgMaterialInstanceInterface;             		// 0x01E4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x01E8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< class UMaterialInstanceConstant* >         mMaterialInstanceList;                            		// 0x01EC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UMeshComponent*                              mEnergyMesh;                                      		// 0x01F8 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                mAmountTransferPerTick;                           		// 0x01FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTickTime;                                        		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mType;                                            		// 0x0204 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mTeamName;                                        		// 0x0208 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mPrevTeamName;                                    		// 0x0210 (0x0008) [0x0000000000000000]              
	TArray< struct FPgEnergyActorTeamInfo >            mTeamArray;                                       		// 0x0218 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       mBlendTrans[ 0x2 ];                               		// 0x0224 (0x0010) [0x0000000000000020]              ( CPF_Net )
	struct FName                                       mTeamTrans[ 0x2 ];                                		// 0x0234 (0x0010) [0x0000000000000020]              ( CPF_Net )
	class UPgCondition*                                mUseConditions;                                   		// 0x0244 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	unsigned long                                      mEnabled : 1;                                     		// 0x0248 (0x0004) [0x0000000000000021] [0x00000001] ( CPF_Edit | CPF_Net )
	float                                              mTeamBlendTime;                                   		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mStateBlendTime;                                  		// 0x0250 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mTeamBlendAlpha;                                  		// 0x0254 (0x0008) [0x0000000000000000]              
	struct FName                                       mTeamBlendBeta;                                   		// 0x025C (0x0008) [0x0000000000000000]              
	float                                              mCoolDownTime;                                    		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCoolDown;                                        		// 0x0268 (0x0004) [0x0000000000000000]              
	float                                              mCoolDownTimeRemaining;                           		// 0x026C (0x0004) [0x0000000000000000]              
	float                                              mUsageTime;                                       		// 0x0270 (0x0004) [0x0000000000000000]              
	class UPgPlugInList*                               mPlugInListArchetype;                             		// 0x0274 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x0278 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgPlugInComponent*                          mPlugInComponent;                                 		// 0x027C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class UAkEvent*                                    mFlowAkEvent;                                     		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mDrainAkEvent;                                    		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mEnabledAkEvent;                                  		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mDisabledAkEvent;                                 		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mChangeTeamAkEvent;                               		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mCoolDownEndAkEvent;                              		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTimeSeconds;                                     		// 0x0298 (0x0004) [0x0000000000000000]              
	float                                              mTeamRatio;                                       		// 0x029C (0x0004) [0x0000000000000020]              ( CPF_Net )
	float                                              mStateRatio;                                      		// 0x02A0 (0x0004) [0x0000000000000020]              ( CPF_Net )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2248 ];

		return pClassPointer;
	};

	void OnToggle ( class USeqAct_Toggle* Action );
	void OnEnergyActor ( class UPgSeqAct_EnergyActor* Action );
	TArray< class UMaterialInstanceConstant* > GetMaterialInstanceList ( );
	void InitMaterialInstanceList ( );
	void eventEnergyActorUse ( struct FString Type, struct FString Team, struct FString Usage, class AController* Controller );
	void LogEnergyActorUse ( unsigned char Type, struct FName Team, unsigned long IsPositiveFlow, class AController* Controller );
	void TriggerEvent ( class AActor* InInstigator, int ActivateIndex );
	void Initialize ( );
	void PostTeamChange ( unsigned long playAudio );
	void PostStateChange ( class AActor* TheActor, unsigned long playAudio );
	bool IsPositiveFlow ( class APgPawn* thePawn );
	bool CanUseEnergyActor ( class APawn* thePawn );
	void SetCooldown ( float cooldown );
};

UClass* APgEnergyActor::pClassPointer = NULL;

// Class GridGame.PgInterpActor
// 0x0040 (0x0288 - 0x0248)
class APgInterpActor : public AInterpActor
{
public:
	struct FPointer                                    VfTable_IPgMaterialInstanceInterface;             		// 0x0248 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgScalarMaterialParamBlendInterface;     		// 0x024C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgDamageParamInterface;                  		// 0x0250 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IPgObjectPropertyInterface;               		// 0x0254 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UStaticMeshComponent*                        mMesh;                                            		// 0x0258 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UPgDamageParam*                              mDamageParam;                                     		// 0x025C (0x0004) [0x0000000014400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline | CPF_EditInlineUse )
	unsigned char                                      mBlendType;                                       		// 0x0260 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugInListArchetype;                             		// 0x0264 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UPgPlugInList*                               mPlugIns;                                         		// 0x0268 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UPgPlugInComponent*                          mPlugInComponent;                                 		// 0x026C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< class UMaterialInstanceConstant* >         mMaterialInstanceList;                            		// 0x0270 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FPgScalarParamBlend >               mPgScalarParamBlend;                              		// 0x027C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2249 ];

		return pClassPointer;
	};

	void OnInterpActor ( class UPgSeqAct_InterpActor* Action );
	void eventBump ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitNormal );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void eventTakeDamage ( int Damage, class AController* InstigatedBy, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	void OnDamageCaused ( int damageCaused, class AActor* damageVictim, class AActor* DamageCauser );
	class UPgDamageParam* GetCauseDamageParam ( );
	void SetScalarParam ( float currentBlend, float baseBlend, float desiredBlend, float BlendTime, struct FName ParamName );
	float GetScalarParameterBlendValue ( struct FName Param );
	void TickMaterialParamBlend ( float DeltaTime );
	TArray< class UMaterialInstanceConstant* > GetMaterialInstanceList ( );
	void InitMaterialInstanceList ( );
};

UClass* APgInterpActor::pClassPointer = NULL;

// Class GridGame.PgObjective
// 0x0030 (0x0214 - 0x01E4)
class APgObjective : public AActor
{
public:
	unsigned long                                      mActive : 1;                                      		// 0x01E4 (0x0004) [0x0000000000000020] [0x00000001] ( CPF_Net )
	unsigned long                                      mComplete : 1;                                    		// 0x01E4 (0x0004) [0x0000000000000020] [0x00000002] ( CPF_Net )
	unsigned long                                      mShowMapLocation : 1;                             		// 0x01E4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mShowObjText : 1;                                 		// 0x01E4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	struct FName                                       mText;                                            		// 0x01E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              mTextShownTime;                                   		// 0x01F0 (0x0004) [0x0000000000000000]              
	float                                              mShowDelay;                                       		// 0x01F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mCurrentShowDelay;                                		// 0x01F8 (0x0004) [0x0000000000000000]              
	struct FName                                       mName;                                            		// 0x01FC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mTeamIndex;                                       		// 0x0204 (0x0001) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	TArray< class AAIController* >                     mClaimedBy;                                       		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2250 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void OnObjectiveControl ( class UPgSeqAct_ObjectiveControl* Action );
	void Release ( class AAIController* C );
	void Claim ( class AAIController* C );
	unsigned char GetTeamNum ( );
	struct FName GetObjectiveText ( );
	bool CanShowObjectiveText ( );
	bool CanShowMapLocation ( );
	bool IsComplete ( );
	void Complete ( class AActor* Player );
	bool IsActive ( );
	void Activate ( );
};

UClass* APgObjective::pClassPointer = NULL;

// Class GridGame.PgCapturePoint
// 0x0044 (0x0258 - 0x0214)
class APgCapturePoint : public APgObjective
{
public:
	unsigned char                                      mCapturingTeam;                                   		// 0x0214 (0x0001) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	float                                              mCaptureProgress;                                 		// 0x0218 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                mCaptorIds[ 0xA ];                                		// 0x021C (0x0028) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	int                                                mNumCaptors;                                      		// 0x0244 (0x0004) [0x0000000000002020]              ( CPF_Net | CPF_Transient )
	unsigned long                                      mAllowDefense : 1;                                		// 0x0248 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mAutoShowEventMessages : 1;                       		// 0x0248 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              mCaptureRate;                                     		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDepleteRate;                                     		// 0x0250 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mUniqueNumber;                                    		// 0x0254 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2251 ];

		return pClassPointer;
	};

	void KismetFireCaptured ( TArray< class AActor* > Captors );
	void OnCapturePointControl ( class UPgSeqAct_CapturePointControl* Action );
	void AwardCapture ( TArray< class AActor* > Captors );
	void SetCaptors ( TArray< class AActor* > Captors );
	bool IsCaptor ( class APgPlayerReplicationInfo* Player );
	class APgPlayerReplicationInfo* GetCaptorAt ( int Index );
	int GetNumCaptors ( );
	bool IsEnergized ( );
	void SetNeutral ( );
	void ClearProgress ( );
	void Deplete ( float DepleteRate );
	void Capture ( TArray< class AActor* > Captors, float CaptureRate );
};

UClass* APgCapturePoint::pClassPointer = NULL;

// Class GridGame.PgPowerLine
// 0x0020 (0x0204 - 0x01E4)
class APgPowerLine : public AActor
{
public:
	unsigned long                                      mLastConnectedState : 1;                          		// 0x01E4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FName                                       mTeamName;                                        		// 0x01E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class APgCapturePoint* >                   mCapturePoints;                                   		// 0x01F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class APgTeamBase*                                 mTeamBase;                                        		// 0x01FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class APgPowerSource*                              mPowerSource;                                     		// 0x0200 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2252 ];

		return pClassPointer;
	};

	void KismetFireConnected ( unsigned long Connected );
	bool Contains ( class APgCapturePoint* Point );
	bool IsConnected ( );
};

UClass* APgPowerLine::pClassPointer = NULL;

// Class GridGame.PgPowerSource
// 0x0000 (0x01E4 - 0x01E4)
class APgPowerSource : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2253 ];

		return pClassPointer;
	};

};

UClass* APgPowerSource::pClassPointer = NULL;

// Class GridGame.PgRallyPointManager
// 0x0000 (0x01E4 - 0x01E4)
class APgRallyPointManager : public AInfo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2254 ];

		return pClassPointer;
	};

};

UClass* APgRallyPointManager::pClassPointer = NULL;

// Class GridGame.PgSaveLoadManager
// 0x0024 (0x0064 - 0x0040)
class UPgSaveLoadManager : public USubsystem
{
public:
	TArray< struct FString >                           ChapterpointMap;                                  		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPointer                                    mSaveData;                                        		// 0x004C (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                mActiveSlotNum;                                   		// 0x0050 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      mLoadComplete : 1;                                		// 0x0054 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      mSaving : 1;                                      		// 0x0054 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      mSaveRequested : 1;                               		// 0x0054 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      mbEnabled : 1;                                    		// 0x0054 (0x0004) [0x0000000000000002] [0x00000008] ( CPF_Const )
	unsigned long                                      mbTrophiesEnabled : 1;                            		// 0x0054 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
	unsigned long                                      mFirePlayerStartEventsOnLoad : 1;                 		// 0x0054 (0x0004) [0x0000000000000002] [0x00000020] ( CPF_Const )
	unsigned long                                      mEnablePCSaveLoad : 1;                            		// 0x0054 (0x0004) [0x0000000000004000] [0x00000040] ( CPF_Config )
	TArray< unsigned char >                            mHardBuffer;                                      		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2255 ];

		return pClassPointer;
	};

	bool GetOtherPlayerIsHost ( class APgPawn* currentPawn, int* IsHost );
	bool GetIsHost ( class APgPawn* PlayerPawn, int* IsHost );
	bool LastSavedMapMatch ( );
	bool HasValidPlayerData ( class AController* Controller );
	bool MapMatch ( );
	void CheckSerialization ( );
	void DiskLoad ( );
	void ApplyPlayerData ( class APgPawn* PlayerPawn, unsigned long IsHost );
	void DeleteActiveSaveSlot ( );
	void AllocateActiveSaveSlot ( );
	void ResetStreamingVolumeStates ( );
	void SetupPlayerStarts ( );
	void RestoreLevelState ( );
	void SetFireEventsOnLoad ( unsigned long FireLoadEvents );
	void FireLoadedEvents ( );
	void LoadFromMemory ( );
	void CopyDataFromPlayerController ( class APgPlayerController* PlayerController );
	void CopyDataToPlayerController ( class APgPlayerController* PlayerController );
	void SetupForNewPlaythrough ( );
	struct FString TranslateChapterNumToMapName ( int iChapterNum );
	int TranslateMapNameToChapterNum ( struct FString MapName );
	void CommitStatToSaveDataByIndex ( class APgPlayerController* PlayerController, int StatIndex );
	void CommitStatToSaveData ( class APgPlayerController* PlayerController, struct FName StatName );
	void PopulateHardBufferFromMemCard ( );
	bool HasValidHardBuffer ( );
	void InitializeHardBuffer ( );
	void CopySaveDataToHardBuffer ( );
	void CopyHardBufferToSaveData ( );
	void ResetToDefaults ( );
	void RestoreToLastHardSave ( );
	void EnableTrophies ( unsigned long bEnable );
	void EnableSaveLoad ( unsigned long bEnable );
	void DiskSave ( );
	void SavePlayerData ( );
	void SaveToMemoryUserDataGlobalOnly ( );
	void SaveToMemory ( class APgPlayerStart* Checkpoint );
	void RestartAllToLastCheckpoint ( );
	void SetMapName ( struct FString MapName );
	struct FString GetMapName ( );
	struct FString GetCheckpointName ( );
	bool HasValidCheckpointData ( int iSlotNum );
	void LoadPlayerData ( class APgPawn* PlayerPawn );
	struct FVector GetSpawnLocation ( );
	void SetActiveSlot ( int iSlotNum );
	class UPgSaveLoadManager* GetInstance ( );
};

UClass* UPgSaveLoadManager::pClassPointer = NULL;

// Class GridGame.PgScalarMaterialParamBlendInterface
// 0x0000 (0x003C - 0x003C)
class UPgScalarMaterialParamBlendInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2256 ];

		return pClassPointer;
	};

	void SetScalarParam ( float currentBlend, float baseBlend, float desiredBlend, float BlendTime, struct FName ParamName );
	float GetScalarParameterBlendValue ( struct FName Param );
	void TickMaterialParamBlend ( float DeltaTime );
};

UClass* UPgScalarMaterialParamBlendInterface::pClassPointer = NULL;

// Class GridGame.PgSeqAct_CapturePointControl
// 0x0008 (0x00F0 - 0x00E8)
class UPgSeqAct_CapturePointControl : public USequenceAction
{
public:
	float                                              mCaptureAmount;                                   		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDepleteAmount;                                   		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2257 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_CapturePointControl::pClassPointer = NULL;

// Class GridGame.PgSeqAct_CheckCondition
// 0x0004 (0x00EC - 0x00E8)
class UPgSeqAct_CheckCondition : public USequenceAction
{
public:
	class UPgCondition*                                mCondition;                                       		// 0x00E8 (0x0004) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2258 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_CheckCondition::pClassPointer = NULL;

// Class GridGame.PgSeqAct_DriveVehicle
// 0x0008 (0x00F0 - 0x00E8)
class UPgSeqAct_DriveVehicle : public USequenceAction
{
public:
	class APgVehicle*                                  mVehicleArchetype;                                		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mSpawnDefaultControllerForDriver : 1;             		// 0x00EC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mPlayDriverEnter : 1;                             		// 0x00EC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2259 ];

		return pClassPointer;
	};

	void eventActivated ( );
	void Spawned ( class UObject* newSpawn );
};

UClass* UPgSeqAct_DriveVehicle::pClassPointer = NULL;

// Class GridGame.PgSeqAct_ModifyProperty
// 0x0001 (0x00F5 - 0x00F4)
class UPgSeqAct_ModifyProperty : public USeqAct_ModifyProperty
{
public:
	unsigned char                                      mOperation;                                       		// 0x00F4 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2260 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_ModifyProperty::pClassPointer = NULL;

// Class GridGame.PgSeqAct_NumObjects
// 0x0010 (0x00F8 - 0x00E8)
class UPgSeqAct_NumObjects : public USequenceAction
{
public:
	int                                                Count;                                            		// 0x00E8 (0x0004) [0x0000000000000000]              
	TArray< class UObject* >                           Objects;                                          		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2261 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_NumObjects::pClassPointer = NULL;

// Class GridGame.PgSeqAct_ObjectiveControl
// 0x0000 (0x00E8 - 0x00E8)
class UPgSeqAct_ObjectiveControl : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2262 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_ObjectiveControl::pClassPointer = NULL;

// Class GridGame.PgSeqAct_PawnCounter
// 0x000C (0x0104 - 0x00F8)
class UPgSeqAct_PawnCounter : public USeqAct_Latent
{
public:
	TArray< class APawn* >                             mPawnsToCount;                                    		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2263 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_PawnCounter::pClassPointer = NULL;

// Class GridGame.PgSeqAct_PS3MoveController
// 0x0000 (0x00E8 - 0x00E8)
class UPgSeqAct_PS3MoveController : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2264 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_PS3MoveController::pClassPointer = NULL;

// Class GridGame.PgSeqAct_QueueAIActions
// 0x0004 (0x00FC - 0x00F8)
class UPgSeqAct_QueueAIActions : public USeqAct_Latent
{
public:
	class UPgAIActionQueue*                            mAIActionQueue;                                   		// 0x00F8 (0x0004) [0x0000000006400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_NoClear | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2265 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_QueueAIActions::pClassPointer = NULL;

// Class GridGame.PgSeqAct_SaveAtCheckpoint
// 0x0014 (0x010C - 0x00F8)
class UPgSeqAct_SaveAtCheckpoint : public USeqAct_Latent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x00F8 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      mDiskSave : 1;                                    		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mSavePlayerDataOnly : 1;                          		// 0x00FC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mHasRequestedLoadIndication : 1;                  		// 0x00FC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mCheckVisibility : 1;                             		// 0x00FC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      mIgnoreStreaming : 1;                             		// 0x00FC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	TArray< struct FName >                             mRequiredLevels;                                  		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2266 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_SaveAtCheckpoint::pClassPointer = NULL;

// Class GridGame.PgSeqAct_TargetActor
// 0x0000 (0x00F8 - 0x00F8)
class UPgSeqAct_TargetActor : public USeqAct_Latent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2267 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_TargetActor::pClassPointer = NULL;

// Class GridGame.PgSeqAct_TriggerUse
// 0x0004 (0x00FC - 0x00F8)
class UPgSeqAct_TriggerUse : public USeqAct_Latent
{
public:
	unsigned long                                      mEnabled : 1;                                     		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mCanFire : 1;                                     		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2268 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_TriggerUse::pClassPointer = NULL;

// Class GridGame.PgSeqAct_UseSmartObject
// 0x0000 (0x00E8 - 0x00E8)
class UPgSeqAct_UseSmartObject : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2269 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_UseSmartObject::pClassPointer = NULL;

// Class GridGame.PgSeqAct_WaitForLoading
// 0x000C (0x0104 - 0x00F8)
class UPgSeqAct_WaitForLoading : public USeqAct_Latent
{
public:
	unsigned long                                      mHasRequestedLoadIndication : 1;                  		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mWaitTime;                                        		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              mTimeUntilBlackness;                              		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2270 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_WaitForLoading::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_CapturePointCaptured
// 0x0000 (0x0100 - 0x0100)
class UPgSeqEvent_CapturePointCaptured : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2271 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_CapturePointCaptured::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_ChapterPoint
// 0x000C (0x010C - 0x0100)
class UPgSeqEvent_ChapterPoint : public USequenceEvent
{
public:
	TArray< struct FLevelRecord >                      SubLevelsToLoad;                                  		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2272 ];

		return pClassPointer;
	};

	void eventDeactivated ( );
	void eventActivated ( );
};

UClass* UPgSeqEvent_ChapterPoint::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_CheckpointLoaded
// 0x0000 (0x0100 - 0x0100)
class UPgSeqEvent_CheckpointLoaded : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2273 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_CheckpointLoaded::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_ContinueFromCheckpoint
// 0x0000 (0x0100 - 0x0100)
class UPgSeqEvent_ContinueFromCheckpoint : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2274 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_ContinueFromCheckpoint::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_Death
// 0x0002 (0x0102 - 0x0100)
class UPgSeqEvent_Death : public USequenceEvent
{
public:
	unsigned char                                      mFireIfKillerIs;                                  		// 0x0100 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      mFireIfDeceasedIs;                                		// 0x0101 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2275 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_Death::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_EnergyActor
// 0x0000 (0x0100 - 0x0100)
class UPgSeqEvent_EnergyActor : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2276 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_EnergyActor::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_Input
// 0x000C (0x010C - 0x0100)
class UPgSeqEvent_Input : public USequenceEvent
{
public:
	struct FName                                       mButton;                                          		// 0x0100 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mPressed : 1;                                     		// 0x0108 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mIgnoreInCinematicMode : 1;                       		// 0x0108 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mBlockInput : 1;                                  		// 0x0108 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2277 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_Input::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_PowerLineConnected
// 0x0000 (0x0100 - 0x0100)
class UPgSeqEvent_PowerLineConnected : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2278 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_PowerLineConnected::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_TargetActor
// 0x0000 (0x0100 - 0x0100)
class UPgSeqEvent_TargetActor : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2279 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_TargetActor::pClassPointer = NULL;

// Class GridGame.PgSeqVar_HumanPlayer
// 0x0014 (0x00C4 - 0x00B0)
class UPgSeqVar_HumanPlayer : public USeqVar_Object
{
public:
	TArray< class UObject* >                           mHumans;                                          		// 0x00B0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      mAllHumans : 1;                                   		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                mHumanIndex;                                      		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2280 ];

		return pClassPointer;
	};

	class UObject* GetObjectValue ( );
	void UpdatePlayersList ( );
};

UClass* UPgSeqVar_HumanPlayer::pClassPointer = NULL;

// Class GridGame.PgSeqVar_Team
// 0x0008 (0x00B8 - 0x00B0)
class UPgSeqVar_Team : public USeqVar_Object
{
public:
	struct FName                                       TeamName;                                         		// 0x00B0 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2281 ];

		return pClassPointer;
	};

	class UObject* GetObjectValue ( );
};

UClass* UPgSeqVar_Team::pClassPointer = NULL;

// Class GridGame.PgTargetActor
// 0x0080 (0x0264 - 0x01E4)
class APgTargetActor : public AActor
{
public:
	struct FPointer                                    VfTable_IPgTargetableInterface;                   		// 0x01E4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPgTargetActorStateInfo                     mStateInfo[ 0x3 ];                                		// 0x01E8 (0x003C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       mState;                                           		// 0x0224 (0x0008) [0x0000000000000021]              ( CPF_Edit | CPF_Net )
	TArray< struct FPgTargetActorAudioTransInfo >      mAudioInfo;                                       		// 0x022C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class AActor* >                            mAllowedDamageCausers;                            		// 0x0238 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAkEvent*                                    mInvalidAKEvent;                                  		// 0x0244 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinTargetableDist;                               		// 0x0248 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxTargetableDist;                               		// 0x024C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       mTeamName;                                        		// 0x0250 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FTargetActorLinkedListMirror                mTargetActorLink;                                 		// 0x0258 (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2282 ];

		return pClassPointer;
	};

	void eventTakeDamage ( int DamageAmount, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool CanTarget ( class APawn* targeter );
	float GetMaxTargetableDist ( );
	float GetMinTargetableDist ( );
	void TriggerEvent ( int ActivateIndex, class AActor* changeCauser );
	void PlayAudioTrans ( struct FName fromState, struct FName toState );
	void ReloadState ( struct FName State );
	void SetTargetActorState ( struct FName State, unsigned long shouldPlayAudioTrans, class AActor* changeCauser, unsigned long shouldFireEvent );
	void ApplyState ( class AActor* changeCauser, unsigned long shouldFireEvent );
	void HandleStateChange ( class AActor* changeCauser, unsigned long shouldFireEvent );
	void HandleTakeDamage ( class AActor* DamageCauser );
};

UClass* APgTargetActor::pClassPointer = NULL;

// Class GridGame.PgVolume
// 0x0000 (0x0220 - 0x0220)
class APgVolume : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2283 ];

		return pClassPointer;
	};

	void event_PlayerControllerSpawned ( class AController* NewController );
};

UClass* APgVolume::pClassPointer = NULL;

// Class GridGame.PgSceneCaptureEnablerVolume
// 0x0014 (0x0234 - 0x0220)
class APgSceneCaptureEnablerVolume : public APgVolume
{
public:
	TArray< struct FSceneCaptureTriggerInfo >          SceneCaptureStates;                               		// 0x0220 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class AInfo*                                       mStateTimer;                                      		// 0x022C (0x0004) [0x0000000000000000]              
	int                                                mNumberControllersTouching;                       		// 0x0230 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2284 ];

		return pClassPointer;
	};

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
	void UpdateSceneCapture ( class AController* UpdateCauser, unsigned long Enable );
	void event_PlayerControllerSpawned ( class AController* NewController );
	void PopulateTouchingActors ( );
};

UClass* APgSceneCaptureEnablerVolume::pClassPointer = NULL;

// Class GridGame.PgCubicSpline
// 0x0024 (0x0060 - 0x003C)
class UPgCubicSpline : public UObject
{
public:
	TArray< float >                                    mX;                                               		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    mY;                                               		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    mY2;                                              		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2285 ];

		return pClassPointer;
	};

	float Evaluate ( float X );
};

UClass* UPgCubicSpline::pClassPointer = NULL;

// Class GridGame.PgForceFeedbackComponent
// 0x000B (0x0060 - 0x0055)
class UPgForceFeedbackComponent : public UActorComponent
{
public:
	class UPgSideEffect_ForceFeedback*                 mSideEffect;                                      		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      mpEpicenter;                                      		// 0x005C (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2286 ];

		return pClassPointer;
	};

	void eventStopForceFeedbackWaveform ( class APlayerController* PlayerController, class UForceFeedbackWaveform* WaveformToMatch );
	void eventSetRumbleScale ( class APlayerController* PlayerController, float scaleAmount );
	void eventPlayForceFeedbackWaveform ( class APlayerController* PlayerController, class UForceFeedbackWaveform* WaveForm, float scaleAmount );
};

UClass* UPgForceFeedbackComponent::pClassPointer = NULL;

// Class GridGame.PgGenericCameraModifierSignature
// 0x0060 (0x009C - 0x003C)
class UPgGenericCameraModifierSignature : public UObject
{
public:
	TArray< struct FVector2D >                         YawPoints;                                        		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector2D >                         RollPoints;                                       		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector2D >                         PitchPoints;                                      		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector2D >                         TranslateXPoints;                                 		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector2D >                         TranslateYPoints;                                 		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector2D >                         TranslateZPoints;                                 		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector2D >                         FovPoints;                                        		// 0x0084 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Wavelength;                                       		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      RandomStartPoint : 1;                             		// 0x0094 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              EndSignatureCompressionFactor;                    		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2287 ];

		return pClassPointer;
	};

};

UClass* UPgGenericCameraModifierSignature::pClassPointer = NULL;

// Class GridGame.PgSeqAct_FireSideEffectContainer
// 0x0008 (0x00F0 - 0x00E8)
class UPgSeqAct_FireSideEffectContainer : public USequenceAction
{
public:
	class UPgSideEffectContainer*                      SideEffects;                                      		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Epicenter;                                        		// 0x00EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2288 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_FireSideEffectContainer::pClassPointer = NULL;

// Class GridGame.PgSideEffect
// 0x0000 (0x003C - 0x003C)
class UPgSideEffect : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2289 ];

		return pClassPointer;
	};

};

UClass* UPgSideEffect::pClassPointer = NULL;

// Class GridGame.PgSideEffect_ForceFeedback
// 0x0010 (0x004C - 0x003C)
class UPgSideEffect_ForceFeedback : public UPgSideEffect
{
public:
	class UForceFeedbackWaveform*                      mForceFeedbackWaveform;                           		// 0x003C (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                mRadius;                                          		// 0x0040 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      mFallOffType;                                     		// 0x0044 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPgForceFeedbackComponent*                   mComponent;                                       		// 0x0048 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2290 ];

		return pClassPointer;
	};

};

UClass* UPgSideEffect_ForceFeedback::pClassPointer = NULL;

// Class GridGame.PgSideEffect_GenericCameraModifier
// 0x0018 (0x0054 - 0x003C)
class UPgSideEffect_GenericCameraModifier : public UPgSideEffect
{
public:
	unsigned char                                      mFallOffType;                                     		// 0x003C (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UPgGenericCameraModifierSignature*           mSignature;                                       		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mAmplitude;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mDuration;                                        		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mRadius;                                          		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mbEpicenterFollowsCamera : 1;                     		// 0x0050 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mbDamper : 1;                                     		// 0x0050 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2291 ];

		return pClassPointer;
	};

};

UClass* UPgSideEffect_GenericCameraModifier::pClassPointer = NULL;

// Class GridGame.PgSideEffectContainer
// 0x000C (0x0048 - 0x003C)
class UPgSideEffectContainer : public UObject
{
public:
	TArray< class UPgSideEffect* >                     mEffects;                                         		// 0x003C (0x000C) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2292 ];

		return pClassPointer;
	};

};

UClass* UPgSideEffectContainer::pClassPointer = NULL;

// Class GridGame.PgSmartObject
// 0x00C4 (0x02A8 - 0x01E4)
class APgSmartObject : public AActor
{
public:
	struct FPointer                                    VfTable_IPgTargetableInterface;                   		// 0x01E4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      mEnabled : 1;                                     		// 0x01E8 (0x0004) [0x0000000000000021] [0x00000001] ( CPF_Edit | CPF_Net )
	unsigned long                                      mCanTarget : 1;                                   		// 0x01E8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mDebugShowPreview : 1;                            		// 0x01E8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mDebugLineUp : 1;                                 		// 0x01E8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	TArray< struct FUseInfo >                          mUseInfo;                                         		// 0x01EC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  mWhiteSprite;                                     		// 0x01F8 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  mRedSprite;                                       		// 0x01FC (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  mBlueSprite;                                      		// 0x0200 (0x0004) [0x0000000000000000]              
	unsigned char                                      mTargetPawn;                                      		// 0x0204 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USpriteComponent*                            mEditorSprite;                                    		// 0x0208 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mMinTargetableDist;                               		// 0x020C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxTargetableDist;                               		// 0x0210 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinTargetAngle;                                  		// 0x0214 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMaxTargetAngle;                                  		// 0x0218 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mMinTargetDot;                                    		// 0x021C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              mMaxTargetDot;                                    		// 0x0220 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UStaticMeshComponent*                        mHelperMesh;                                      		// 0x0224 (0x0004) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     mLineUpOffset;                                    		// 0x0228 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    mLineUpRotation;                                  		// 0x0234 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UDrawSphereComponent*                        mLineUpSphere;                                    		// 0x0240 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UArrowComponent*                             mLineUpArrow;                                     		// 0x0244 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FPathInfo                                   mUsePathInfo;                                     		// 0x0248 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class APgPathNode*                                 mUsePathNode;                                     		// 0x0258 (0x0004) [0x0000000000220001]              ( CPF_Edit | CPF_EditConst )
	class USpriteComponent*                            mUsePathSprite;                                   		// 0x025C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FPathInfo                                   mExitPathInfo;                                    		// 0x0260 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class APgPathNode*                                 mExitPathNode;                                    		// 0x0270 (0x0004) [0x0000000000220001]              ( CPF_Edit | CPF_EditConst )
	class USpriteComponent*                            mExitPathSprite;                                  		// 0x0274 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              mDebugPreviewTimeScale;                           		// 0x0278 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshComponent*                      mPreviewSkelMeshComp;                             		// 0x027C (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	struct FEditorOnly_PreviewCachedSettings           mPreviewCachedSettings;                           		// 0x0280 (0x0018) [0x0000000000002000]              ( CPF_Transient )
	class UDrawCylinderComponent*                      mPreviewCollisionComp;                            		// 0x0298 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	struct FSmartObjectLinkedListMirror                mSmartObjectLink;                                 		// 0x029C (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2293 ];

		return pClassPointer;
	};

	void eventTriggerUsedEvent ( class AActor* User, unsigned long unused );
	void OnToggle ( class USeqAct_Toggle* Action );
	bool CanTarget ( class APawn* targeter );
	float GetMaxTargetableDist ( );
	float GetMinTargetableDist ( );
	bool TryAndUseSmartObject ( class AActor* User, unsigned long pressed, struct FName ButtonName );
	bool CanUseSmartObject ( class AActor* User, unsigned long pressed, struct FName ButtonName, int* useInfoIndex );
	bool CanPathThroughSmartObject ( class APawn* Pawn );
};

UClass* APgSmartObject::pClassPointer = NULL;

// Class GridGame.PgFireController
// 0x0010 (0x004C - 0x003C)
class UPgFireController : public UObject
{
public:
	class AActor*                                      mCurrentTarget;                                   		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< struct FAIFireControlTargetInfo >          mTargetInfo;                                      		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2294 ];

		return pClassPointer;
	};

	bool IsFriendly ( class AActor* Target );
	unsigned char GetFireControlState ( );
	void TargetNotVisible ( class AActor* Target );
	void SeeTarget ( class AActor* Target );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
};

UClass* UPgFireController::pClassPointer = NULL;

// Class GridGame.PgFireControllerAI
// 0x0024 (0x0070 - 0x004C)
class UPgFireControllerAI : public UPgFireController
{
public:
	TArray< struct FAIMaxAttackersInfo >               mMaxAttackers;                                    		// 0x004C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             mFriendlies;                                      		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAIMaxTargetersInfo >               mMaxTargeters;                                    		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2295 ];

		return pClassPointer;
	};

	bool IsFriendly ( class AActor* Target );
	unsigned char GetFireControlState ( );
};

UClass* UPgFireControllerAI::pClassPointer = NULL;

// Class GridGame.PgTargetMarker
// 0x0024 (0x0208 - 0x01E4)
class APgTargetMarker : public AActor
{
public:
	class ANavigationPoint*                            mAnchor;                                          		// 0x01E4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ANavigationPoint*                            mGoal;                                            		// 0x01E8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class ANavigationPoint* >                  mRouteCache;                                      		// 0x01EC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FColor                                      mColor;                                           		// 0x01F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class AActor*                                      mTarget;                                          		// 0x01FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      mAwareness;                                       		// 0x0200 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mLOS : 1;                                         		// 0x0204 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2296 ];

		return pClassPointer;
	};

	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
};

UClass* APgTargetMarker::pClassPointer = NULL;

// Class GridGame.PgInputLabels
// 0x000C (0x0048 - 0x003C)
class UPgInputLabels : public UObject
{
public:
	TArray< struct FPgInputLabel >                     mPgInputLabels;                                   		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2297 ];

		return pClassPointer;
	};

};

UClass* UPgInputLabels::pClassPointer = NULL;

// Class GridGame.PgInterface
// 0x0060 (0x00A0 - 0x0040)
class UPgInterface : public USubsystem
{
public:
	float                                              mPostProcessingMinValue;                          		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mPostProcessingMaxValue;                          		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mLowHealth;                                       		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mEnergyBarAutoHideTimer;                          		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mPawnTargetReticle_HeightOffset;                  		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mObjectTargetReticle_HeightOffset;                		// 0x0054 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mTargetReticle_MaxDistance;                       		// 0x0058 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mTeamSwitchTimer;                                 		// 0x005C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mTeamSwithTimeLimit;                              		// 0x0060 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                mTeamSwithLimit;                                  		// 0x0064 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mRadarRadiusOnFoot;                               		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mRadarRadiusOnVehicle;                            		// 0x006C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mRadarRadiusOnFootMP;                             		// 0x0070 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              mRadarRadiusOnVehicleMP;                          		// 0x0074 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      mHudDisplay;                                      		// 0x0078 (0x0001) [0x0000000000000000]              
	TArray< struct FPgComboItem >                      mComboList;                                       		// 0x007C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           mDLCStrings;                                      		// 0x0088 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      mHasSeenEnhancerPopUp : 1;                        		// 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mHasSeenUpgradesPopUp : 1;                        		// 0x0094 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mHasSeenModelGallery : 1;                         		// 0x0094 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                mNumNewDLCs;                                      		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                mNumHiddenDLCs;                                   		// 0x009C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2298 ];

		return pClassPointer;
	};

	void SetCompleteGame ( );
	void ChangeLanguage ( struct FString Language );
	void ShowDebugMenu ( );
	void ScreenProject ( struct FVector InVector, struct FVector2D* OutVector );
	class UPgInterface* GetInstance ( );
};

UClass* UPgInterface::pClassPointer = NULL;

// Class GridGame.PgSeqAct_ArjiaCityHud
// 0x000C (0x0104 - 0x00F8)
class UPgSeqAct_ArjiaCityHud : public USeqAct_Latent
{
public:
	float                                              mOldPercent;                                      		// 0x00F8 (0x0004) [0x0000000000000000]              
	unsigned long                                      mIsVisible : 1;                                   		// 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              mCurPercent;                                      		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2299 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UPgSeqAct_ArjiaCityHud::pClassPointer = NULL;

// Class GridGame.PgSeqAct_HudBar
// 0x0024 (0x011C - 0x00F8)
class UPgSeqAct_HudBar : public USeqAct_Latent
{
public:
	int                                                m_id;                                             		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                m_OldCur;                                         		// 0x00FC (0x0004) [0x0000000000000000]              
	int                                                m_OldMax;                                         		// 0x0100 (0x0004) [0x0000000000000000]              
	unsigned long                                      mVisible : 1;                                     		// 0x0104 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	int                                                mCurValue;                                        		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mMaxValue;                                        		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mX;                                               		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mY;                                               		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mScale;                                           		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2300 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UPgSeqAct_HudBar::pClassPointer = NULL;

// Class GridGame.PgSeqAct_HudText
// 0x0024 (0x011C - 0x00F8)
class UPgSeqAct_HudText : public USeqAct_Latent
{
public:
	int                                                m_id;                                             		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              mX;                                               		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mY;                                               		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     mText;                                            		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      mTextPosition;                                    		// 0x0110 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mIsLocationText : 1;                              		// 0x0114 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              mLifeTime;                                        		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2301 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
};

UClass* UPgSeqAct_HudText::pClassPointer = NULL;

// Class GridGame.PgSeqAct_OpenGFxMovie
// 0x000C (0x0104 - 0x00F8)
class UPgSeqAct_OpenGFxMovie : public USeqAct_Latent
{
public:
	class UGFxMovie*                                   Movie;                                            		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StackId;                                          		// 0x00FC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Duration;                                         		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2302 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_OpenGFxMovie::pClassPointer = NULL;

// Class GridGame.PgSeqAct_PlayFmv
// 0x0018 (0x0110 - 0x00F8)
class UPgSeqAct_PlayFmv : public USeqAct_Latent
{
public:
	struct FString                                     mVideoFileName;                                   		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      mIsSkippable : 1;                                 		// 0x0104 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mLoop : 1;                                        		// 0x0104 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mShouldGameThreadWait : 1;                        		// 0x0104 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      mShouldStopAudio : 1;                             		// 0x0104 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_enablePlayback : 1;                             		// 0x0104 (0x0004) [0x0000000000000000] [0x00000010] 
	int                                                m_previousStackId;                                		// 0x0108 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_PointerReserveForm_mailbox;                     		// 0x010C (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2303 ];

		return pClassPointer;
	};

	void Deactivate ( );
	bool eventIsValidLevelSequenceObject ( );
};

UClass* UPgSeqAct_PlayFmv::pClassPointer = NULL;

// Class GridGame.PgSeqAct_QueueSubtitle
// 0x001C (0x0104 - 0x00E8)
class UPgSeqAct_QueueSubtitle : public USequenceAction
{
public:
	TArray< struct FSubtitleCue >                      Subtitles;                                        		// 0x00E8 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x00F4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Priority;                                         		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bManualWordWrap : 1;                              		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              SoundDuration;                                    		// 0x0100 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2304 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_QueueSubtitle::pClassPointer = NULL;

// Class GridGame.PgSeqAct_SetHud
// 0x0008 (0x00F0 - 0x00E8)
class UPgSeqAct_SetHud : public USequenceAction
{
public:
	unsigned long                                      bEnable : 1;                                      		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UGFxMovie*                                   HudRef;                                           		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2305 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_SetHud::pClassPointer = NULL;

// Class GridGame.PgSeqAct_TogglePMHud
// 0x0000 (0x00E8 - 0x00E8)
class UPgSeqAct_TogglePMHud : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2306 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_TogglePMHud::pClassPointer = NULL;

// Class GridGame.PgSeqAct_ToggleWaiting
// 0x0000 (0x00E8 - 0x00E8)
class UPgSeqAct_ToggleWaiting : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2307 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_ToggleWaiting::pClassPointer = NULL;

// Class GridGame.PgSeqCond_CheckForBootflow
// 0x000C (0x00DC - 0x00D0)
class UPgSeqCond_CheckForBootflow : public USequenceCondition
{
public:
	struct FString                                     HelpText;                                         		// 0x00D0 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2308 ];

		return pClassPointer;
	};

};

UClass* UPgSeqCond_CheckForBootflow::pClassPointer = NULL;

// Class GridGame.PgSeqCond_IsStereoscopic3D
// 0x000C (0x00DC - 0x00D0)
class UPgSeqCond_IsStereoscopic3D : public USequenceCondition
{
public:
	struct FString                                     HelpText;                                         		// 0x00D0 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2309 ];

		return pClassPointer;
	};

};

UClass* UPgSeqCond_IsStereoscopic3D::pClassPointer = NULL;

// Class GridGame.PgSeqAct_CreateOnlineGame
// 0x0038 (0x0130 - 0x00F8)
class UPgSeqAct_CreateOnlineGame : public USeqAct_Latent
{
public:
	struct FString                                     mGameModeName;                                    		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mGameMap;                                         		// 0x0104 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mCompletionMap;                                   		// 0x0110 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                mPlayerSlots;                                     		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mGoalScore;                                       		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mAIFill : 1;                                      		// 0x0124 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mWaitingForSignin : 1;                            		// 0x0124 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                mAISkill;                                         		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FPointer                                    m_ReserveSpace;                                   		// 0x012C (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2310 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_CreateOnlineGame::pClassPointer = NULL;

// Class GridGame.PgSeqAct_EndOnlineGame
// 0x0000 (0x00E8 - 0x00E8)
class UPgSeqAct_EndOnlineGame : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2311 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_EndOnlineGame::pClassPointer = NULL;

// Class GridGame.PgSeqAct_EventBoxMessage
// 0x0001 (0x00E9 - 0x00E8)
class UPgSeqAct_EventBoxMessage : public USequenceAction
{
public:
	unsigned char                                      MessageType;                                      		// 0x00E8 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2312 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_EventBoxMessage::pClassPointer = NULL;

// Class GridGame.PgSeqCond_IsCoop
// 0x000C (0x00DC - 0x00D0)
class UPgSeqCond_IsCoop : public USequenceCondition
{
public:
	struct FString                                     HelpText;                                         		// 0x00D0 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2313 ];

		return pClassPointer;
	};

};

UClass* UPgSeqCond_IsCoop::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_MPGame
// 0x0000 (0x0100 - 0x0100)
class UPgSeqEvent_MPGame : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2314 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_MPGame::pClassPointer = NULL;

// Class GridGame.ActorFactoryPgFracturedStaticMesh
// 0x0000 (0x0068 - 0x0068)
class UActorFactoryPgFracturedStaticMesh : public UActorFactoryFracturedStaticMesh
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2315 ];

		return pClassPointer;
	};

};

UClass* UActorFactoryPgFracturedStaticMesh::pClassPointer = NULL;

// Class GridGame.PgFracturedStaticMeshActor
// 0x0010 (0x0258 - 0x0248)
class APgFracturedStaticMeshActor : public AFracturedStaticMeshActor
{
public:
	class UPgDamageParam*                              mDamageParam;                                     		// 0x0248 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	unsigned long                                      bIgnoreHitLocation : 1;                           		// 0x024C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              mHitDelay;                                        		// 0x0250 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mLastFire;                                        		// 0x0254 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2316 ];

		return pClassPointer;
	};

	void eventTakeDamage ( int Damage, class AController* EventInstigator, struct FVector HitLocation, struct FVector Momentum, class UClass* DamageType, struct FTraceHitInfo HitInfo, class AActor* DamageCauser );
	bool AreAllChunksDead ( );
};

UClass* APgFracturedStaticMeshActor::pClassPointer = NULL;

// Class GridGame.PgGFxGameViewportClient
// 0x0028 (0x014C - 0x0124)
class UPgGFxGameViewportClient : public UGFxGameViewportClient
{
public:
	struct FString                                     mNotifyConnectionErrorMsg;                        		// 0x0124 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mNotifyConnectionErrorTitle;                      		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      mHasConnectionError : 1;                          		// 0x013C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mHandlingError : 1;                               		// 0x013C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mShowingWaitIcon : 1;                             		// 0x013C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mWasOnlineGame : 1;                               		// 0x013C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      mAutoQuickmatchState;                             		// 0x0140 (0x0001) [0x0000000000000000]              
	float                                              mAutoQuickmatchDelay;                             		// 0x0144 (0x0004) [0x0000000000000000]              
	float                                              mAutoQuickmatchTimeout;                           		// 0x0148 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2317 ];

		return pClassPointer;
	};

	void eventTick ( float DeltaTime );
	void ExitToFE ( );
	void ExitGame ( );
	void ProcessConnectionError ( );
	void UpdateError ( float DeltaTime );
	void HandleConnectionError ( );
	void PgGFxGameViewportClient_DestroyOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void PgGFxGameViewportClient_EndOnlineGameComplete ( struct FName SessionName, unsigned long successful );
	void eventNotifyConnectionError ( struct FString msg, struct FString Title );
	bool event_Init ( struct FString* OutError );
	void DrawTransitionMessage ( class UCanvas* Canvas, struct FString Message );
	void DisplayProgressMessage ( class UCanvas* Canvas );
	void event_NotifyConnectionError ( struct FString msg, struct FString Title );
	bool eventInit ( struct FString* OutError );
};

UClass* UPgGFxGameViewportClient::pClassPointer = NULL;

// Class GridGame.PgParticleModuleEventReceiverSpawn
// 0x0004 (0x00AC - 0x00A8)
class UPgParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverSpawn
{
public:
	unsigned long                                      mAlignToCollisionNormal : 1;                      		// 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2318 ];

		return pClassPointer;
	};

};

UClass* UPgParticleModuleEventReceiverSpawn::pClassPointer = NULL;

// Class GridGame.PgParticleModuleNotifyBase
// 0x0000 (0x0054 - 0x0054)
class UPgParticleModuleNotifyBase : public UParticleModule
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2319 ];

		return pClassPointer;
	};

};

UClass* UPgParticleModuleNotifyBase::pClassPointer = NULL;

// Class GridGame.PgParticleModuleNotify
// 0x000C (0x0060 - 0x0054)
class UPgParticleModuleNotify : public UPgParticleModuleNotifyBase
{
public:
	TArray< struct FParticleNotify >                   mParticleNotifies;                                		// 0x0054 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2320 ];

		return pClassPointer;
	};

};

UClass* UPgParticleModuleNotify::pClassPointer = NULL;

// Class GridGame.PgParticleNotify
// 0x0000 (0x003C - 0x003C)
class UPgParticleNotify : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2321 ];

		return pClassPointer;
	};

};

UClass* UPgParticleNotify::pClassPointer = NULL;

// Class GridGame.PgParticleNotifyAkEvent
// 0x000C (0x0048 - 0x003C)
class UPgParticleNotifyAkEvent : public UPgParticleNotify
{
public:
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	class UAkEvent*                                    mAkEvent;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkComponent*                                mAkComponent;                                     		// 0x0044 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2322 ];

		return pClassPointer;
	};

};

UClass* UPgParticleNotifyAkEvent::pClassPointer = NULL;

// Class GridGame.PgSeqAct_AkPlaySound
// 0x0010 (0x0108 - 0x00F8)
class UPgSeqAct_AkPlaySound : public USeqAct_Latent
{
public:
	class UAkEvent*                                    mPlayAkEvent;                                     		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    mStopAkEvent;                                     		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mEventsPlaying;                                   		// 0x0100 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      mStopped : 1;                                     		// 0x0104 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2323 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* UPgSeqAct_AkPlaySound::pClassPointer = NULL;

// Class GridGame.PgXPSystem
// 0x001C (0x0058 - 0x003C)
class UPgXPSystem : public UObject
{
public:
	int                                                kXPPointsCap;                                     		// 0x003C (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FXPRank >                           kXPRankData;                                      		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FXPComboBonus >                     kXPComboBonusData;                                		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2324 ];

		return pClassPointer;
	};

	int GetNumXPRanks ( );
};

UClass* UPgXPSystem::pClassPointer = NULL;

// Class GridGame.PgMPLoadoutBuilder
// 0x0030 (0x006C - 0x003C)
class UPgMPLoadoutBuilder : public UObject
{
public:
	class UPgUnlockItemDisc*                           Discs[ 0x4 ];                                     		// 0x003C (0x0010) [0x0000000000000000]              
	class UPgUnlockItemDiscPower*                      DiscPowers[ 0x2 ];                                		// 0x004C (0x0008) [0x0000000000000000]              
	class UPgUnlockItemVehicle*                        Vehicle;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	class UPgUnlockItemPerk*                           Perk;                                             		// 0x0058 (0x0004) [0x0000000000000000]              
	TArray< class UPgUnlockItemPlayerUpgrade* >        Upgrades;                                         		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UPgUnlockItemPlayerSkin*                     PlayerSkin;                                       		// 0x0068 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2325 ];

		return pClassPointer;
	};

	class APgPawn* GetControllerPawn ( class APgPlayerController* Controller );
	void ApplyToPlayer ( class APgPlayerController* Controller );
	void SafeSelectItem ( class UPgUnlockItem* Item, int ArrayIndex );
	void eventReset ( );
	void MakeBest ( class UPgUnlockSystem* unlockSystem, int LoadoutIndex );
	void FillFromUnlockDatabase ( class UPgUnlockSystem* unlockSystem, int LoadoutIndex );
	void CommitToUnlockDatabase ( class UPgUnlockSystem* unlockSystem, int LoadoutIndex );
	void WriteLoadout ( class UPgUnlockSystem* unlockSystem, int LoadoutIndex, struct FMPPlayerLoadout* loadout );
	void ReadLoadout ( class UPgUnlockSystem* unlockSystem, int LoadoutIndex, struct FMPPlayerLoadout* loadout );
	void SelectItem ( class UPgUnlockItem* Item, int ArrayIndex );
};

UClass* UPgMPLoadoutBuilder::pClassPointer = NULL;

// Class GridGame.PgStoryLoadoutBuilder
// 0x0018 (0x0054 - 0x003C)
class UPgStoryLoadoutBuilder : public UObject
{
public:
	TArray< class UPgUnlockItemInventory* >            InventoryItems;                                   		// 0x003C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class UPgUnlockItemPlayerUpgrade* >        Upgrades;                                         		// 0x0048 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2326 ];

		return pClassPointer;
	};

	void Fill ( class APgPlayerController* Controller );
	class APgPawn* GetControllerPawn ( class APgPlayerController* Controller );
	void ApplyToPlayer ( class APgPlayerController* Controller );
};

UClass* UPgStoryLoadoutBuilder::pClassPointer = NULL;

// Class GridGame.PgUnlockItem
// 0x0084 (0x00C0 - 0x003C)
class UPgUnlockItem : public UObject
{
public:
	struct FName                                       mUnlock;                                          		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                mLevel;                                           		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             mRequires;                                        		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             mReplaces;                                        		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                mLockState;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned char                                      mType;                                            		// 0x0064 (0x0001) [0x0000000000000000]              
	int                                                mCost;                                            		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mLoadoutFlags;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      mCanBeInLoadout : 1;                              		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      mCanUseInStoryMode : 1;                           		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      mVisibleInUI : 1;                                 		// 0x0070 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	class UTexture2D*                                  mIcon;                                            		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     mDisplayName;                                     		// 0x0078 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mDisplayDescription;                              		// 0x0084 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       mDLCName;                                         		// 0x0090 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     mFootEffectText;                                  		// 0x0098 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mBikeEffectText;                                  		// 0x00A4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     mTankEffectText;                                  		// 0x00B0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                mGameGridFlags;                                   		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2327 ];

		return pClassPointer;
	};

	bool IsVisibleInUI ( );
	bool IsDLC ( );
	bool IsDLCAvailable ( );
	void SetLoadoutArrayIndex ( int LoadoutIndex, int ArrayIndex );
	int GetLoadoutArrayIndex ( int LoadoutIndex );
	bool CanUseInStoryMode ( );
	bool CanAddToMPLoadout ( );
	void RemoveFromLoadout ( int LoadoutIndex );
	void AddToLoadout ( int LoadoutIndex, int ArrayIndex );
	bool IsInLoadout ( int LoadoutIndex );
	void Purchased ( class APgPlayerController* Controller );
	void Equip ( class APgPlayerController* Controller, class APgPawn* Pawn );
	void Unlock ( class APgPlayerController* Controller, TArray< class UPgUnlockItem* >* ownedItems );
	class UPgUnlockItem* FindItemByName ( TArray< class UPgUnlockItem* > Items, struct FName* ItemName );
	bool IsInArray ( TArray< class UPgUnlockItem* > Items, struct FName* ItemName );
	bool AreUnlockRequirementsSatisfied ( int Level, TArray< class UPgUnlockItem* > ownedItems );
	bool IsDisabled ( );
	bool IsRecentlyAvailableForPurchase ( );
	bool IsAvailableForPurchase ( );
	unsigned char GetUnlockType ( );
	bool IsRecentlyOwned ( );
	bool IsOwned ( );
	int GetCost ( );
	struct FString GetDisplayUnlockCondition ( );
	struct FString GetDisplayDescription ( );
	struct FString GetDisplayName ( );
};

UClass* UPgUnlockItem::pClassPointer = NULL;

// Class GridGame.PgUnlockItemInventory
// 0x000C (0x00CC - 0x00C0)
class UPgUnlockItemInventory : public UPgUnlockItem
{
public:
	struct FString                                     mInventoryName;                                   		// 0x00C0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2328 ];

		return pClassPointer;
	};

	void Equip ( class APgPlayerController* Controller, class APgPawn* Pawn );
};

UClass* UPgUnlockItemInventory::pClassPointer = NULL;

// Class GridGame.PgUnlockItemDisc
// 0x0001 (0x00CD - 0x00CC)
class UPgUnlockItemDisc : public UPgUnlockItemInventory
{
public:
	unsigned char                                      mDiscType;                                        		// 0x00CC (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2329 ];

		return pClassPointer;
	};

};

UClass* UPgUnlockItemDisc::pClassPointer = NULL;

// Class GridGame.PgUnlockItemDiscPower
// 0x0008 (0x00D5 - 0x00CD)
class UPgUnlockItemDiscPower : public UPgUnlockItemDisc
{
public:
	int                                                MakeWarningGoAway;                                		// 0x00D0 (0x0004) [0x0000000000000000]              
	unsigned char                                      mPowerType;                                       		// 0x00D4 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2330 ];

		return pClassPointer;
	};

};

UClass* UPgUnlockItemDiscPower::pClassPointer = NULL;

// Class GridGame.PgUnlockItemPerk
// 0x0000 (0x00CC - 0x00CC)
class UPgUnlockItemPerk : public UPgUnlockItemInventory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2331 ];

		return pClassPointer;
	};

	void Equip ( class APgPlayerController* Controller, class APgPawn* Pawn );
};

UClass* UPgUnlockItemPerk::pClassPointer = NULL;

// Class GridGame.PgUnlockItemPlayerLoadout
// 0x0004 (0x00C4 - 0x00C0)
class UPgUnlockItemPlayerLoadout : public UPgUnlockItem
{
public:
	int                                                mNumSlots;                                        		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2332 ];

		return pClassPointer;
	};

	void Purchased ( class APgPlayerController* Controller );
	void Equip ( class APgPlayerController* Controller, class APgPawn* Pawn );
};

UClass* UPgUnlockItemPlayerLoadout::pClassPointer = NULL;

// Class GridGame.PgUnlockItemPlayerSkin
// 0x0004 (0x00C4 - 0x00C0)
class UPgUnlockItemPlayerSkin : public UPgUnlockItem
{
public:
	int                                                mSkinIndex;                                       		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2333 ];

		return pClassPointer;
	};

};

UClass* UPgUnlockItemPlayerSkin::pClassPointer = NULL;

// Class GridGame.PgUnlockItemPlayerUpgrade
// 0x000C (0x00CC - 0x00C0)
class UPgUnlockItemPlayerUpgrade : public UPgUnlockItem
{
public:
	struct FString                                     mUpgradeName;                                     		// 0x00C0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2334 ];

		return pClassPointer;
	};

	void Equip ( class APgPlayerController* Controller, class APgPawn* Pawn );
};

UClass* UPgUnlockItemPlayerUpgrade::pClassPointer = NULL;

// Class GridGame.PgUnlockItemVehicle
// 0x0014 (0x00D4 - 0x00C0)
class UPgUnlockItemVehicle : public UPgUnlockItem
{
public:
	int                                                mVehicleIndex;                                    		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mAcceleration;                                    		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mSpeed;                                           		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mHandling;                                        		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mToughness;                                       		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2335 ];

		return pClassPointer;
	};

	void Equip ( class APgPlayerController* Controller, class APgPawn* Pawn );
};

UClass* UPgUnlockItemVehicle::pClassPointer = NULL;

// Class GridGame.PgUnlockSystem
// 0x0050 (0x008C - 0x003C)
class UPgUnlockSystem : public UObject
{
public:
	TArray< class UPgUnlockItem* >                     AllItems;                                         		// 0x003C (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                mNumLoadoutSlots;                                 		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                mCurrentLoadout;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	class UPgMPLoadoutBuilder*                         mLoadoutBuilder;                                  		// 0x0050 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	class UPgStoryLoadoutBuilder*                      mStoryBuilder;                                    		// 0x0054 (0x0004) [0x0000000004402008]              ( CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline )
	int                                                MAX_LOADOUTS;                                     		// 0x0058 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< class UPgUnlockItem* >                     AutoUpgradeResults;                               		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UPgUnlockItem* >                     RecenetlyAvailableResults;                        		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LoginOptions;                                     		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OverrideConnectionString;                         		// 0x0080 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2336 ];

		return pClassPointer;
	};

	class APgPlayerController* GetController ( );
	void SortItems ( int Low, int High );
	void SetPlayerSkin ( class UPgUnlockItemPlayerSkin* skin );
	void GetPlayerSkins ( TArray< class UPgUnlockItemPlayerSkin* >* skins );
	void RefreshDLC ( );
	void DebugPurchaseAll ( struct FString ItemType, int PlayerLevel );
	void DisplayDebugPlayerLoadouts ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DisplayDebugInventory ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void DisplayDebugLoadout ( class AHUD* HUD, int LoadoutIndex, float* out_YL, float* out_YPos );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	bool IsLoadoutEditingPossible ( );
	class UPgMPLoadoutBuilder* GetLoadoutBuilder ( );
	void SetLoadout ( int Index, struct FMPPlayerLoadout* loadout );
	void GetLoadout ( int Index, struct FMPPlayerLoadout* loadout );
	void SetActiveLoadout ( int Index );
	int GetActiveLoadout ( );
	void SetNumLoadouts ( int Num );
	int GetNumLoadouts ( );
	void GetItemsFromLoadoutString ( struct FString loadoutText, TArray< class UPgUnlockItem* >* Items );
	void WriteLoadoutToString ( struct FString* loadoutText );
	void SetupUnlockSystem ( );
	void GetMPLoadoutString ( struct FString* loadoutText );
	void SetupPlayer ( );
	void GetItemsForLevelUp ( int oldLevel, int newLevel, TArray< class UPgUnlockItem* >* Unlocks, TArray< class UPgUnlockItem* >* Upgrades );
	void DoTest ( int testIndex );
	void ResetRecent ( );
	void ResetRecentlyAvailableForPurchase ( );
	void GetItemsRecentlyAvailableForPurchase ( TArray< class UPgUnlockItem* >* Items );
	void GetItemsAvailableForPurchase ( TArray< class UPgUnlockItem* >* Items );
	void ResetRecentlyOwned ( );
	void GetItemsRecentlyOwned ( TArray< class UPgUnlockItem* >* Items );
	void GetOwnedItems ( TArray< class UPgUnlockItem* >* Items );
	void ProcessChanges ( unsigned char changeType );
	void NewContentAvailable ( );
	void PlayerLevelChanged ( int oldLevel, int newLevel );
	void ItemPurchased ( class UPgUnlockItem* Item, int currentLevel );
	void ResetToDefaults ( );
	void Initialize ( );
};

UClass* UPgUnlockSystem::pClassPointer = NULL;

// Class GridGame.PgDLCUtils
// 0x0018 (0x0054 - 0x003C)
class UPgDLCUtils : public UObject
{
public:
	TArray< struct FDLCItem >                          kDLCItems;                                        		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     kPS3DLCFolder;                                    		// 0x0048 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2337 ];

		return pClassPointer;
	};

};

UClass* UPgDLCUtils::pClassPointer = NULL;

// Class GridGame.DESLightAttackPawn
// 0x0014 (0x02B8 - 0x02A4)
class ADESLightAttackPawn : public ADESLightPawn
{
public:
	class AWeapon*                                     Weapon;                                           		// 0x02A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AProjectile*                                 DiscProjectile;                                   		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     DiscTargetPos;                                    		// 0x02AC (0x000C) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40697 ];

		return pClassPointer;
	};

	void eventThrowDiscFct ( struct FVector AimDir );
	void ThrowDisc ( );
	void eventSetDiscTarget ( struct FVector AimDir );
};

UClass* ADESLightAttackPawn::pClassPointer = NULL;

// Class GridGame.PgActorFactoryEmitter
// 0x0000 (0x005C - 0x005C)
class UPgActorFactoryEmitter : public UActorFactoryEmitter
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40729 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryEmitter::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPgEnergyActor
// 0x0000 (0x0058 - 0x0058)
class UPgActorFactoryPgEnergyActor : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40737 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPgEnergyActor::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPgInterpActor
// 0x0000 (0x006D - 0x006D)
class UPgActorFactoryPgInterpActor : public UActorFactoryDynamicSM
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40739 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPgInterpActor::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPgObjective
// 0x0000 (0x0058 - 0x0058)
class UPgActorFactoryPgObjective : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40741 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPgObjective::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPgPathNode
// 0x0000 (0x0058 - 0x0058)
class UPgActorFactoryPgPathNode : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40743 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPgPathNode::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPgPedestrianSpawnPoint
// 0x0000 (0x0058 - 0x0058)
class UPgActorFactoryPgPedestrianSpawnPoint : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40745 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPgPedestrianSpawnPoint::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPgPlayerStart
// 0x0000 (0x0058 - 0x0058)
class UPgActorFactoryPgPlayerStart : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40747 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPgPlayerStart::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPgRallyPoint
// 0x0000 (0x0058 - 0x0058)
class UPgActorFactoryPgRallyPoint : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40749 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPgRallyPoint::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPgSpawnPoint
// 0x0000 (0x0058 - 0x0058)
class UPgActorFactoryPgSpawnPoint : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40751 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPgSpawnPoint::pClassPointer = NULL;

// Class GridGame.PgActorFactoryPgTargetActor
// 0x0000 (0x0058 - 0x0058)
class UPgActorFactoryPgTargetActor : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40753 ];

		return pClassPointer;
	};

};

UClass* UPgActorFactoryPgTargetActor::pClassPointer = NULL;

// Class GridGame.PgAIGoalIdle
// 0x0000 (0x00A8 - 0x00A8)
class UPgAIGoalIdle : public UPgAIGoal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41376 ];

		return pClassPointer;
	};

};

UClass* UPgAIGoalIdle::pClassPointer = NULL;

// Class GridGame.PgDisplayDebugHelper
// 0x0010 (0x004C - 0x003C)
class UPgDisplayDebugHelper : public UObject
{
public:
	class AHUD*                                        HUD;                                              		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              YL;                                               		// 0x0040 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              YPos;                                             		// 0x0044 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              IndentLevel;                                      		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41489 ];

		return pClassPointer;
	};

	void DrawText ( struct FString T );
	void IncrementIndentLevel ( float I );
	void SetDrawColor ( int R, int G, int B );
	bool ShouldDisplayDebug ( struct FName DebugType );
	class UCanvas* GetCanvas ( );
};

UClass* UPgDisplayDebugHelper::pClassPointer = NULL;

// Class GridGame.PgCameraSpecifierInterface
// 0x0000 (0x003C - 0x003C)
class UPgCameraSpecifierInterface : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41587 ];

		return pClassPointer;
	};

	void SetCameraArchetype ( class APgPlayerCamera* newArchetype );
	class APgPlayerCamera* GetCameraArchetype ( );
};

UClass* UPgCameraSpecifierInterface::pClassPointer = NULL;

// Class GridGame.PgSeqAct_ClothSim
// 0x0018 (0x0100 - 0x00E8)
class UPgSeqAct_ClothSim : public USequenceAction
{
public:
	struct FString                                     __HelpText1;                                      		// 0x00E8 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     __HelpText2;                                      		// 0x00F4 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42012 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_ClothSim::pClassPointer = NULL;

// Class GridGame.PgDebugCamera
// 0x0004 (0x04E8 - 0x04E4)
class APgDebugCamera : public ACamera
{
public:
	class ACamera*                                     mOldCamera;                                       		// 0x04E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42104 ];

		return pClassPointer;
	};

	void UpdateViewTarget ( float DeltaTime, struct FTViewTarget* OutVT );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
};

UClass* APgDebugCamera::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_Vehicle
// 0x0000 (0x0100 - 0x0100)
class UPgSeqEvent_Vehicle : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42139 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_Vehicle::pClassPointer = NULL;

// Class GridGame.PgSeqAct_GiveInventoryArch
// 0x0010 (0x00F8 - 0x00E8)
class UPgSeqAct_GiveInventoryArch : public USequenceAction
{
public:
	TArray< class AInventory* >                        mInventoryArchetypeList;                          		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bClearExisting : 1;                               		// 0x00F4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42338 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_GiveInventoryArch::pClassPointer = NULL;

// Class GridGame.PgSeqAct_RemoveInventoryArch
// 0x000C (0x00F4 - 0x00E8)
class UPgSeqAct_RemoveInventoryArch : public USequenceAction
{
public:
	TArray< struct FName >                             mInventoryArchetypeNameList;                      		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42345 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_RemoveInventoryArch::pClassPointer = NULL;

// Class GridGame.PgSeqAct_AssignControllerArch
// 0x0004 (0x00EC - 0x00E8)
class UPgSeqAct_AssignControllerArch : public USequenceAction
{
public:
	class AController*                                 mControllerArchetype;                             		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42352 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_AssignControllerArch::pClassPointer = NULL;

// Class GridGame.PgSeqAct_RadialKnockdownPawn
// 0x000C (0x00F4 - 0x00E8)
class UPgSeqAct_RadialKnockdownPawn : public USequenceAction
{
public:
	float                                              mRadius;                                          		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              mStrength;                                        		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      mRadialLocation;                                  		// 0x00F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42481 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_RadialKnockdownPawn::pClassPointer = NULL;

// Class GridGame.PgCheatManagerDebugCamera
// 0x0000 (0x0054 - 0x0054)
class UPgCheatManagerDebugCamera : public UPgCheatManagerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43964 ];

		return pClassPointer;
	};

	void ToggleDebugFixedCam ( );
	void ToggleDebugCamera ( );
};

UClass* UPgCheatManagerDebugCamera::pClassPointer = NULL;

// Class GridGame.PgDebugCameraController
// 0x0001 (0x05C9 - 0x05C8)
class APgDebugCameraController : public ADebugCameraController
{
public:
	unsigned char                                      mState;                                           		// 0x05C8 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43968 ];

		return pClassPointer;
	};

	void DebugCamToFixedCamEnd ( );
	void DebugCamToFixedCamStart ( );
	bool AmInDebugFixedCam ( );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void OnDeactivate ( class APlayerController* PC );
	void OnActivate ( class APlayerController* PC );
	void CopyCommonPlayerControllerSettings ( class APlayerController* From, class APlayerController* To );
};

UClass* APgDebugCameraController::pClassPointer = NULL;

// Class GridGame.PgSeqAct_InterpActor
// 0x0001 (0x00E9 - 0x00E8)
class UPgSeqAct_InterpActor : public USequenceAction
{
public:
	unsigned char                                      mBlendType;                                       		// 0x00E8 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44181 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_InterpActor::pClassPointer = NULL;

// Class GridGame.PgSeqAct_EnergyActor
// 0x0008 (0x00F0 - 0x00E8)
class UPgSeqAct_EnergyActor : public USequenceAction
{
public:
	float                                              mCoolDownTime;                                    		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                mTeamIndex;                                       		// 0x00EC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44247 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_EnergyActor::pClassPointer = NULL;

// Class GridGame.PgDebugCameraInput
// 0x0000 (0x0168 - 0x0168)
class UPgDebugCameraInput : public UDebugCameraInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44460 ];

		return pClassPointer;
	};

	void eventPlayerInput ( float DeltaTime );
};

UClass* UPgDebugCameraInput::pClassPointer = NULL;

// Class GridGame.PgSeqAct_SetCameraSystem
// 0x0004 (0x00EC - 0x00E8)
class UPgSeqAct_SetCameraSystem : public USequenceAction
{
public:
	class APgPlayerCamera*                             mCameraSystem;                                    		// 0x00E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45086 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_SetCameraSystem::pClassPointer = NULL;

// Class GridGame.PgSeqAct_ClientSetCameraTarget
// 0x0004 (0x00FC - 0x00F8)
class UPgSeqAct_ClientSetCameraTarget : public USeqAct_SetCameraTarget
{
public:
	float                                              mDelayTime;                                       		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45091 ];

		return pClassPointer;
	};

	int eventGetObjClassVersion ( );
};

UClass* UPgSeqAct_ClientSetCameraTarget::pClassPointer = NULL;

// Class GridGame.PgSavedMove
// 0x0120 (0x01F8 - 0x00D8)
class UPgSavedMove : public USavedMove
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00D8 (0x0008) MISSED OFFSET
	struct FBoneAtom                                   mRootMotionAtom;                                  		// 0x00E0 (0x0020) [0x0000000000000000]              
	struct FPgComboState                               mStartComboState;                                 		// 0x0100 (0x00A0) [0x0000000000000000]              
	struct FPgComboFrameState                          mStartComboPendingState;                          		// 0x01A0 (0x0030) [0x0000000000000000]              
	int                                                mStartYaw;                                        		// 0x01D0 (0x0004) [0x0000000000000000]              
	int                                                mStartDesiredYaw;                                 		// 0x01D4 (0x0004) [0x0000000000000000]              
	int                                                mSavedYaw;                                        		// 0x01D8 (0x0004) [0x0000000000000000]              
	int                                                mSavedDesiredYaw;                                 		// 0x01DC (0x0004) [0x0000000000000000]              
	unsigned char                                      mStartPhysics;                                    		// 0x01E0 (0x0001) [0x0000000000000000]              
	unsigned long                                      mIsPlayingTransition : 1;                         		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      mIsBlocking : 1;                                  		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      mIsSprinting : 1;                                 		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      mUseShortCorrection : 1;                          		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      mDebugSentWithoutReceipt : 1;                     		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      mDebugIsCombinedMove : 1;                         		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      mDebugPerformedAdjustment : 1;                    		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      mDebugSentAfterAdjustment : 1;                    		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000080] 
	int                                                mSendAttempts;                                    		// 0x01E8 (0x0004) [0x0000000000000000]              
	TArray< struct FDebugAnimBehaviorState >           mDebugBehaviorStates;                             		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45433 ];

		return pClassPointer;
	};

	struct FString ToString ( );
	unsigned char SetFlags ( unsigned char Flags, class APlayerController* PC );
	unsigned char CompressedFlags ( );
	void SetPawnToStartPosition ( class APawn* P );
	void CombineWith ( class UPgSavedMove* moveToCombine, class APawn* P );
	bool CanCombineWith ( class USavedMove* OlderMoveToCombine, class APawn* inPawn, float MaxDelta );
	bool IsImportantMove ( struct FVector CompareAccel );
	void PostAdjustment ( class APgPlayerController* P );
	void PostUpdate ( class APlayerController* P );
	void PreUpdate ( class APgPlayerController* P );
	void SetMoveFor ( class APlayerController* P, float DeltaTime, struct FVector newAccel, unsigned char InDoubleClick );
	void Clear ( );
	bool IsComboMove ( );
	struct FPgSavedMoveRepParams GetMoveRepStruct ( );
	struct FPgSavedMoveComboParams GetComboRepStruct ( );
	void CopyComboChainArray ( class UPgSpecialMoveAsset** fromArray, class UPgSpecialMoveAsset** toArray );
};

UClass* UPgSavedMove::pClassPointer = NULL;

// Class GridGame.PgSeqEvent_FractureActor
// 0x0000 (0x0100 - 0x0100)
class UPgSeqEvent_FractureActor : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46663 ];

		return pClassPointer;
	};

};

UClass* UPgSeqEvent_FractureActor::pClassPointer = NULL;

// Class GridGame.PgHoverWheel
// 0x0000 (0x0120 - 0x0120)
class UPgHoverWheel : public UUTHoverWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 46982 ];

		return pClassPointer;
	};

};

UClass* UPgHoverWheel::pClassPointer = NULL;

// Class GridGame.PgSeqAct_ToggleCinematicMode
// 0x0000 (0x00F0 - 0x00F0)
class UPgSeqAct_ToggleCinematicMode : public USeqAct_ToggleCinematicMode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50034 ];

		return pClassPointer;
	};

};

UClass* UPgSeqAct_ToggleCinematicMode::pClassPointer = NULL;

// Class GridGame.PgSeqAct_UIGetObjectProperty
// 0x0000 (0x00F0 - 0x00F0)
class UPgSeqAct_UIGetObjectProperty : public USeqAct_GetProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50038 ];

		return pClassPointer;
	};

	bool eventIsValidLevelSequenceObject ( );
	bool eventIsValidUISequenceObject ( class UUIScreenObject* TargetObject );
};

UClass* UPgSeqAct_UIGetObjectProperty::pClassPointer = NULL;

// Class GridGame.PgVehicleWeapon
// 0x0024 (0x0344 - 0x0320)
class APgVehicleWeapon : public AUTVehicleWeapon
{
public:
	TArray< struct FName >                             mFireTriggerTags;                                 		// 0x0320 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             mAltFireTriggerTags;                              		// 0x032C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FFireTypeInfo >                     mFireTypeInfoList;                                		// 0x0338 (0x000C) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50658 ];

		return pClassPointer;
	};

	struct FName GetVehicleWeaponFireTriggerTag ( int BarrelIndex, int FireMode );
	void CustomFire ( );
	void StartFire ( unsigned char FireModeNum );
	void PostBeginPlay ( );
};

UClass* APgVehicleWeapon::pClassPointer = NULL;

// Class GridGame.PgVehicleVolume
// 0x0008 (0x0268 - 0x0260)
class APgVehicleVolume : public APhysicsVolume
{
public:
	class APgVehicle*                                  mVehicleArchetype;                                		// 0x0260 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      mPlayDriverEnter : 1;                             		// 0x0264 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51000 ];

		return pClassPointer;
	};

	bool StopsProjectile ( class AProjectile* P );
	void eventPawnLeavingVolume ( class APawn* Other );
	void eventPawnEnteredVolume ( class APawn* Other );
};

UClass* APgVehicleVolume::pClassPointer = NULL;

// Class GridGame.PgVehicleWeaponDriver
// 0x0000 (0x0344 - 0x0344)
class APgVehicleWeaponDriver : public APgVehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51252 ];

		return pClassPointer;
	};

};

UClass* APgVehicleWeaponDriver::pClassPointer = NULL;

// Class GridGame.PgVehicleWeaponProjectile
// 0x0000 (0x0344 - 0x0344)
class APgVehicleWeaponProjectile : public APgVehicleWeapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51254 ];

		return pClassPointer;
	};

};

UClass* APgVehicleWeaponProjectile::pClassPointer = NULL;

// Class GridGame.PgVehicleWheel
// 0x0000 (0x0120 - 0x0120)
class UPgVehicleWheel : public UUTVehicleWheel
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51256 ];

		return pClassPointer;
	};

};

UClass* UPgVehicleWheel::pClassPointer = NULL;

// Class GridGame.PgWeapFireTypeInstantHit
// 0x0004 (0x0040 - 0x003C)
class UPgWeapFireTypeInstantHit : public UPgWeaponFireType
{
public:
	float                                              mInstantHitMomentum;                              		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 51267 ];

		return pClassPointer;
	};

	void CustomFire ( class AWeapon* Weapon );
};

UClass* UPgWeapFireTypeInstantHit::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif