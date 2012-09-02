/*
#############################################################################################
# Ravaged Beta (Beta) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: RavagedGame_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct RavagedGame.R_AlienFxManager.ActionMode
// 0x0014
struct FActionMode
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LerpSpeed;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bChaseLights : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct RavagedGame.R_AlienFxManager.ColorLerpPair
// 0x0008
struct FColorLerpPair
{
	struct FColor                                      Col1;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      Col2;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct RavagedGame.R_AlienFxManager.DeviceLights
// 0x0014
struct FDeviceLights
{
	int                                                LightCount;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FColor >                            ChaseColors;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurChaseIdx;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_Vehicle.VehicleSeatIK
// 0x0014
struct FVehicleSeatIK
{
	struct FName                                       LeftHandIKSocketName;                             		// 0x0000 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       RightHandIKSocketName;                            		// 0x0008 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	unsigned long                                      bDirty : 1;                                       		// 0x0010 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct RavagedGame.R_Vehicle.VehicleSeatAnims
// 0x008C
struct FVehicleSeatAnims
{
	unsigned long                                      bSpringSimSeat : 1;                               		// 0x0000 (0x0004) [0x0000000004000001] [0x00000001] ( CPF_Edit | CPF_EditInline )
	struct FName                                       IdleName;                                         		// 0x0004 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       LeanLeftName;                                     		// 0x000C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       LeanRightName;                                    		// 0x0014 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       LeanForwardName;                                  		// 0x001C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       LeanBackName;                                     		// 0x0024 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       IdleJumpName;                                     		// 0x002C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       TurretLeftName;                                   		// 0x0034 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       TurretRightName;                                  		// 0x003C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       TurretUpName;                                     		// 0x0044 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       TurretDownName;                                   		// 0x004C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       TurretULName;                                     		// 0x0054 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       TurretURName;                                     		// 0x005C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       TurretDLName;                                     		// 0x0064 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	struct FName                                       TurretDRName;                                     		// 0x006C (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	int                                                TurretYawMin;                                     		// 0x0074 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	int                                                TurretYawMax;                                     		// 0x0078 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	int                                                TurretPitchMin;                                   		// 0x007C (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	int                                                TurretPitchMax;                                   		// 0x0080 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	unsigned long                                      bNormalizeRot : 1;                                		// 0x0084 (0x0004) [0x0000000004000001] [0x00000001] ( CPF_Edit | CPF_EditInline )
	int                                                NormalizeRotAngle;                                		// 0x0088 (0x0004) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
};

// ScriptStruct RavagedGame.R_AnimNodeBlendBySeatTurret.AnimRelativePosition
// 0x0008
struct FAnimRelativePosition
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_Bot.BotDetails
// 0x0001
struct FBotDetails
{
	unsigned char                                      BotClass;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_DisplayHandler.MonitorResolutionInfo
// 0x0010
struct FMonitorResolutionInfo
{
	int                                                Width;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RefreshRate;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fAspectRatio;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_DisplayHandler.AspectRatioInfo
// 0x0010
struct FAspectRatioInfo
{
	float                                              fAspectRatio;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     strAspectRatio;                                   		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_FamilyInfo.InventoryModifier
// 0x0008
struct FInventoryModifier
{
	unsigned char                                      Mode;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Slot;                                             		// 0x0001 (0x0001) [0x0000000000000000]              
	class UClass*                                      Mod;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_Objective_ControlPoint.CapturingController
// 0x0008
struct FCapturingController
{
	class AR_PlayerController*                         C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_Game.MatchAchiever
// 0x0015
struct FMatchAchiever
{
	class AR_PlayerReplicationInfo*                    PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StatValue;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     StatStr;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Achievement;                                      		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_Game.ABTeamPlayer
// 0x0004
struct FABTeamPlayer
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_Game_CTR.ScorerInfo
// 0x0008
struct FScorerInfo
{
	class APlayerReplicationInfo*                      PRI;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Score;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxChat.MessageRow
// 0x0010
struct UR_GFxChat_FMessageRow
{
	class UGFxObject*                                  MC;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  TF;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              StartFadeTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxFrontEnd.ViewInfo
// 0x0020
struct UR_GFxFrontEnd_FViewInfo
{
	struct FName                                       ViewName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     SWFName;                                          		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             DependantViews;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_ChooseControlSettingType.Option
// 0x0024
struct UR_GFxFrontEnd_ChooseControlSettingType_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_ChooseSettingType.Option
// 0x0024
struct UR_GFxFrontEnd_ChooseSettingType_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_DisplaySettings.Setting
// 0x0028
struct UR_GFxFrontEnd_DisplaySettings_FSetting
{
	struct FString                                     SettingName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SettingLabel;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SettingData;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelIndex;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_FilterDialog.Option
// 0x0024
struct UR_GFxFrontEnd_FilterDialog_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           OptionData;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_GameplaySettings.Setting
// 0x0028
struct UR_GFxFrontEnd_GameplaySettings_FSetting
{
	struct FString                                     SettingName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SettingLabel;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           SettingData;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelIndex;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_LaunchGame.Option
// 0x0024
struct UR_GFxFrontEnd_LaunchGame_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_Join.ServerList
// 0x0040
struct FServerList
{
	int                                                ServerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerName;                                       		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ServerPing;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ServerPlayers;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ServerMaxPlayers;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     ServerMap;                                        		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerGameMode;                                   		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ServerFlags;                                      		// 0x0034 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_JoinGame.Option
// 0x0030
struct UR_GFxFrontEnd_JoinGame_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionData;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_MainMenu.Option
// 0x0030
struct UR_GFxFrontEnd_MainMenu_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionData;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_Multiplayer.Option
// 0x0024
struct UR_GFxFrontEnd_Multiplayer_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_Quit.Option
// 0x0030
struct UR_GFxFrontEnd_Quit_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionData;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_Settings.GameOption
// 0x0034
struct FGameOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionType;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           OptionData;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelIndex;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_Settings.Option
// 0x0030
struct UR_GFxFrontEnd_Settings_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionData;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_Settings.SettingWidget
// 0x0010
struct FSettingWidget
{
	class UGFxObject*                                  Widget;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Name;                                             		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_Stats.Option
// 0x0030
struct UR_GFxFrontEnd_Stats_FOption
{
	struct FString                                     OptionName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionLabel;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionData;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OptionDesc;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_Stats.ListRow
// 0x0020
struct UR_GFxFrontEnd_Stats_FListRow
{
	class UGFxObject*                                  MovieClip;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InnerMovieClip;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RankTF;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillsTF;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DeathsTF;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AssistsTF;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTF;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NameTF;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxFrontEnd_Stats.UILeaderboardEntry
// 0x0024
struct UR_GFxFrontEnd_Stats_FUILeaderboardEntry
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Assists;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocalPlayer : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct RavagedGame.R_GFxSpawnMenu.LoadOutSelections
// 0x0010
struct FLoadOutSelections
{
	int                                                PrimaryWeaponIdx;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SecondaryWeaponIdx;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MeleeWeaponIdx;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ThrowableWeaponIdx;                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxSpawnMenu.ClassLoadOutsSelections
// 0x0050
struct FClassLoadOutsSelections
{
	struct FLoadOutSelections                          ClassSelections[ 0x5 ];                           		// 0x0000 (0x0050) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxSpawnMenuMap.SpawnPointActor
// 0x0014
struct FSpawnPointActor
{
	unsigned char                                      ActorType;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	class AActor*                                      SpawnActor;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PosX;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PosY;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                angZ;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxUILeaderboard.ListRow
// 0x0020
struct UR_GFxUILeaderboard_FListRow
{
	class UGFxObject*                                  MovieClip;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InnerMovieClip;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  RankTF;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillsTF;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DeathsTF;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AssistsTF;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTF;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NameTF;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxUILeaderboard.UILeaderboardEntry
// 0x0024
struct UR_GFxUILeaderboard_FUILeaderboardEntry
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Deaths;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Kills;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Assists;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocalPlayer : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct RavagedGame.R_GFxUIScoreboard.rScoreRow
// 0x0034
struct FrScoreRow
{
	class UGFxObject*                                  MovieClip;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  InnerMovieClip;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PingTF;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  PlaceTF;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CPCapturesTF;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  AssistsTF;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  DeathsTF;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  KillsTF;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  CapturesTF;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  ScoreTF;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  NameTF;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  StatusTF;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  SelectionBoxMC;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxUIScoreboard.ScoreboardState
// 0x0048
struct UR_GFxUIScoreboard_FScoreboardState
{
	int                                                RemainingTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RedScore;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                BlueScore;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerStatus;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlayerPing;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      PlayerPlace;                                      		// 0x0028 (0x0001) [0x0000000000000000]              
	float                                              PlayerScore;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                PlayerAssists;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                PlayerKills;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                PlayerCaptures;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                PlayerCPCaptures;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                PlayerDeaths;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              PlayerKillToDeath;                                		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_GFxUIScoreboard.rScoreEntry
// 0x0048
struct FrScoreEntry
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerStatus;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      PlayerPlace;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                PlayerPing;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                PlayerScore;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PlayerDeaths;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                PlayerAssists;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                PlayerKills;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                PlayerCaptures;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                PlayerCPCaptures;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              PlayerKillToDeath;                                		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasFlag : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsDead : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsASpectator : 1;                                		// 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                PlayerID;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	class AR_PlayerReplicationInfo*                    EntryPRI;                                         		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_PlayerController.sKillzHitInfo
// 0x000C
struct FsKillzHitInfo
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	class AR_Pawn*                                     Victim;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_PlayerController.VehicleDriverPerspective
// 0x000C
struct FVehicleDriverPerspective
{
	struct FName                                       VehicleClassName;                                 		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                LastPerspectiveIdx;                               		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_Vehicle.LocalFreeLookInfo
// 0x0014
struct FLocalFreeLookInfo
{
	float                                              VelocityPhaseInMin;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VelocityPhaseInMax;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VelocityViewFactor;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxAngleVelocityStillValid;                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamLerpSpeed;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct RavagedGame.R_Vehicle.ViewConstraint
// 0x001C
struct FViewConstraint
{
	unsigned long                                      bConstrainPitch : 1;                              		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bConstrainYaw : 1;                                		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	struct FRotator                                    MaxAngle;                                         		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    MinAngle;                                         		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct RavagedGame.R_Vehicle.CameraInfo
// 0x006C
struct FCameraInfo
{
	struct FString                                     PerspectiveName;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      AllowFreelook : 1;                                		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bBreakAwayWhenInverted : 1;                       		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bFreelookUseLocalYaw : 1;                         		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bKeepPitch : 1;                                   		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	struct FLocalFreeLookInfo                          LocalFreeLook;                                    		// 0x0010 (0x0014) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    LocalFreeLookRotation;                            		// 0x0024 (0x000C) [0x0000000000000000]              
	unsigned long                                      bPerspectiveJustChanged : 1;                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bTankTurretType : 1;                              		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHidePawn3pMeshIf1pCamera : 1;                    		// 0x0030 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	struct FVector                                     CameraBaseOffset;                                 		// 0x0034 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraOffset;                                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CameraTag;                                        		// 0x0044 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOV;                                              		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FViewConstraint                             VConstraint;                                      		// 0x0050 (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct RavagedGame.R_Vehicle.PerspectiveInfo
// 0x0014
struct FPerspectiveInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DefaultIndex;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCameraInfo >                       Cameras;                                          		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct RavagedGame.R_Vehicle.ResourceSocket
// 0x000C
struct FResourceSocket
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	unsigned long                                      bOccupied : 1;                                    		// 0x0008 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct RavagedGame.R_Vehicle.WeaponWindupInfo
// 0x0028
struct FWeaponWindupInfo
{
	class UAudioComponent*                             WindupSndAudioComp;                               		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     SeatSocketOffset;                                 		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned long                                      bUseWindupSounds : 1;                             		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTriggerFiringAndWindDownFromFlashCount : 1;      		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCurrentlyFiringLoop : 1;                         		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              FiringWindUpTime;                                 		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FiringWindDownTime;                               		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FiringWindUpSnd;                                  		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FiringWindDownSnd;                                		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FiringLoopedSnd;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct RavagedGame.R_Vehicle.TracerInfo
// 0x000C
struct FTracerInfo
{
	int                                                TracerInterval;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ShotsFired;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              EffectLocationOffSet;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct RavagedGame.R_Vehicle.CachedSeatCameraInfo
// 0x002C
struct FCachedSeatCameraInfo
{
	float                                              LastCalTime;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bCachedTrueCam : 1;                               		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     pos;                                              		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rot;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     CamStart;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif