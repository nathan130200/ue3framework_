/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FMODAudio_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum FMODAudio.FMODAudioDevice.YFMODEarPositionMode
/*enum YFMODEarPositionMode
{
	YFEPM_PlayerCam                                    = 0,
	YFEPM_PlayerPawn                                   = 1,
	YFEPM_Between                                      = 2,
	YFEPM_MAX                                          = 3
};*/

// Enum FMODAudio.FMODAudioDevice.YE_ListenerLocationOverrideInterpolationType
/*enum YE_ListenerLocationOverrideInterpolationType
{
	YLLOIT_Linear                                      = 0,
	YLLOIT_Cubic                                       = 1,
	YLLOIT_EaseIn                                      = 2,
	YLLOIT_EaseOut                                     = 3,
	YLLOIT_EaseInOut                                   = 4,
	YLLOIT_MAX                                         = 5
};*/

// Enum FMODAudio.FMODAudioDevice.YE_ListenerLocationOverrideState
/*enum YE_ListenerLocationOverrideState
{
	YLLOS_Inactive                                     = 0,
	YLLOS_FadeIn                                       = 1,
	YLLOS_Active                                       = 2,
	YLLOS_FadeOut                                      = 3,
	YLLOS_MAX                                          = 4
};*/

// Enum FMODAudio.FMODAudioDevice.YE_WindowsOutputType
/*enum YE_WindowsOutputType
{
	YWOT_Invalid                                       = 0,
	YWOT_DSound                                        = 1,
	YWOT_WinMM                                         = 2,
	YWOT_OpenAL                                        = 3,
	YWOT_WASAPI                                        = 4,
	YWOT_ASIO                                          = 5,
	YWOT_MAX                                           = 6
};*/

// Enum FMODAudio.FMODAudioDevice.YE_EventKeyoffState
/*enum YE_EventKeyoffState
{
	EKOS_None                                          = 0,
	EKOS_JustKeyedOff                                  = 1,
	EKOS_KeyedOffLastFrame                             = 2,
	EKOS_Succeeded                                     = 3,
	EKOS_FailedFirst                                   = 4,
	EKOS_FailedAgain                                   = 5,
	EKOS_LostLoopCursorHandle                          = 6,
	EKOS_MAX                                           = 7
};*/

// Enum FMODAudio.FMODAudioDevice.YE_DuckingState
/*enum YE_DuckingState
{
	YDS_Off                                            = 0,
	YDS_FadeIn                                         = 1,
	YDS_Active                                         = 2,
	YDS_FadeOut                                        = 3,
	YDS_Finished                                       = 4,
	YDS_MAX                                            = 5
};*/

// Enum FMODAudio.FMODAudioDevice.YE_RadioFilterUsage
/*enum YE_RadioFilterUsage
{
	YRFU_ForcedOff                                     = 0,
	YRFU_ForcedOn                                      = 1,
	YRFU_Automatic                                     = 2,
	YRFU_MAX                                           = 3
};*/

// Enum FMODAudio.FMODAudioDevice.YE_ForcedRadioFilterSetting
/*enum YE_ForcedRadioFilterSetting
{
	YFRFS_Free                                         = 0,
	YFRFS_Off                                          = 1,
	YFRFS_AllExceptWalker                              = 2,
	YFRFS_All                                          = 3,
	YFRFS_MAX                                          = 4
};*/

// Enum FMODAudio.YAudioVolume.YE_WeaponReverbType
/*enum YE_WeaponReverbType
{
	YWRT_ROOM                                          = 0,
	YWRT_OUTSIDE                                       = 1,
	YWRT_MAX                                           = 2
};*/

// Enum FMODAudio.YFMODResource_Base.YE_ResourceLocation
/*enum YE_ResourceLocation
{
	YRL_SystemMemory                                   = 0,
	YRL_VideoMemory                                    = 1,
	YRL_MAX                                            = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class FMODAudio.FMODAudioDevice
// 0x04FC (0x074C - 0x0250)
class UFMODAudioDevice : public UAudioDevice
{
public:
	struct FPointer                                    m_FMODEventSystem;                                		// 0x0250 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_FMODSystem;                                     		// 0x0254 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_callbackDevice;                                 		// 0x0258 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FFMODCategoryReverbAffection >      m_categoriesAffectedByReverb;                     		// 0x025C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FDSPFilterData                              m_lowPassData;                                    		// 0x0268 (0x0034) [0x0000000000000000]              
	struct FDSPFilterData                              m_lowPassDataSecondary;                           		// 0x029C (0x0034) [0x0000000000000000]              
	struct FDSPFilterData                              m_highPassData;                                   		// 0x02D0 (0x0034) [0x0000000000000000]              
	struct FDSPFilterData                              m_highPassDataSecondary;                          		// 0x0304 (0x0034) [0x0000000000000000]              
	struct FDSPParamEQData                             m_paramEQData;                                    		// 0x0338 (0x0040) [0x0000000000000000]              
	struct FDSPParamEQData                             m_paramEQDataSecondary;                           		// 0x0378 (0x0040) [0x0000000000000000]              
	TArray< struct FPointer >                          m_activeFMODEvents;                               		// 0x03B8 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FPointer >                          m_eventUserData;                                  		// 0x03C4 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FPointer >                          m_handledAudioComponents;                         		// 0x03D0 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FPointer >                          m_loadedFMODSoundNodes;                           		// 0x03DC (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     m_mediaPath;                                      		// 0x03E8 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMusicComponentInitSetting >        m_musicComponentInitSettings;                     		// 0x03F4 (0x000C) [0x0000000000081002]              ( CPF_Const | CPF_Native | CPF_Component )
	TArray< struct FParameterInterpolationTask >       m_interpolationTasks;                             		// 0x0400 (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	struct FMap_Mirror                                 m_eventCategoryMap;                               		// 0x040C (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_memoryPool;                                     		// 0x0448 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                m_memoryPoolSize;                                 		// 0x044C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              m_directOcclusionInterpolationSpeed;              		// 0x0450 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              m_reverbOcclusionInterpolationSpeed;              		// 0x0454 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	struct FPointer                                    m_defaultPhysMatProperty;                         		// 0x0458 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      m_drawDebugOutput : 1;                            		// 0x045C (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
	unsigned long                                      m_useComplexOcclusion : 1;                        		// 0x045C (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      m_useSoftwareHRTF : 1;                            		// 0x045C (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      m_useNetAPI : 1;                                  		// 0x045C (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      m_useAsWaveWriter : 1;                            		// 0x045C (0x0004) [0x0000000000001002] [0x00000010] ( CPF_Const | CPF_Native )
	unsigned long                                      m_willBeReinitialized : 1;                        		// 0x045C (0x0004) [0x0000000000001002] [0x00000020] ( CPF_Const | CPF_Native )
	unsigned long                                      m_updateLevelMeter : 1;                           		// 0x045C (0x0004) [0x0000000000004001] [0x00000040] ( CPF_Edit | CPF_Config )
	unsigned long                                      m_showDetailedMemoryStats : 1;                    		// 0x045C (0x0004) [0x0000000000004001] [0x00000080] ( CPF_Edit | CPF_Config )
	unsigned long                                      m_useSoundLocationForReverb : 1;                  		// 0x045C (0x0004) [0x0000000000004001] [0x00000100] ( CPF_Edit | CPF_Config )
	unsigned long                                      m_supressLogs : 1;                                		// 0x045C (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      m_paused : 1;                                     		// 0x045C (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      m_OnlineOverlayIsOpen : 1;                        		// 0x045C (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      m_OnlineOverlayWasOpen : 1;                       		// 0x045C (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      m_gameWasInFocus : 1;                             		// 0x045C (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      m_moodSetupOverriden : 1;                         		// 0x045C (0x0004) [0x0000000000002000] [0x00004000] ( CPF_Transient )
	unsigned long                                      m_moodInterpolationActive : 1;                    		// 0x045C (0x0004) [0x0000000000002000] [0x00008000] ( CPF_Transient )
	unsigned long                                      m_logMoodChanges : 1;                             		// 0x045C (0x0004) [0x0000000000002000] [0x00010000] ( CPF_Transient )
	unsigned long                                      m_duckingOverrideBlendActive : 1;                 		// 0x045C (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      m_reverbOverridden : 1;                           		// 0x045C (0x0004) [0x0000000000002000] [0x00040000] ( CPF_Transient )
	unsigned long                                      m_masterVolumeFadeActive : 1;                     		// 0x045C (0x0004) [0x0000000000002000] [0x00080000] ( CPF_Transient )
	unsigned long                                      m_moodSystemLockedByDebug : 1;                    		// 0x045C (0x0004) [0x0000000000002000] [0x00100000] ( CPF_Transient )
	unsigned long                                      m_listenerLocationOverrideAllowDoppler : 1;       		// 0x045C (0x0004) [0x0000000000002000] [0x00200000] ( CPF_Transient )
	struct FString                                     m_reverbDefinitionsProject;                       		// 0x0460 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     m_categoryDefinitionsProject;                     		// 0x046C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     m_errorSoundDefinitionsProject;                   		// 0x0478 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     m_errorSoundNameLooping;                          		// 0x0484 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     m_errorSoundNameNonLooping;                       		// 0x0490 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             m_reverbPresets;                                  		// 0x049C (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	float                                              m_occlusionReTestDistance;                        		// 0x04A8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	int                                                m_complexOcclusionMaxIterations;                  		// 0x04AC (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      m_listenerEarPositionMode;                        		// 0x04B0 (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      m_occlusionTestEarPositionMode;                   		// 0x04B1 (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      m_reverbTestEarPositionMode;                      		// 0x04B2 (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      m_duckingState;                                   		// 0x04B3 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_forceRadioFilterSetting;                        		// 0x04B4 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_listenerLocationOverrideState;                  		// 0x04B5 (0x0001) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_hrtfCutoffFrequency;                            		// 0x04B8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class APawn*                                       m_pawn;                                           		// 0x04BC (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FVector                                     m_pawnLocation;                                   		// 0x04C0 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FVector                                     m_occlusionTestLocation;                          		// 0x04CC (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_levelMeterSpeed;                                		// 0x04D8 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              m_lastLevelMeterValueLeft;                        		// 0x04DC (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_lastLevelMeterValueRight;                       		// 0x04E0 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_lastLevelMeterValueCenter;                      		// 0x04E4 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_lastLevelMeterValueRearLeft;                    		// 0x04E8 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_lastLevelMeterValueRearRight;                   		// 0x04EC (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_lastLevelMeterValueSideLeft;                    		// 0x04F0 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_lastLevelMeterValueSideRight;                   		// 0x04F4 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_lastLevelMeterValueSubwoofer;                   		// 0x04F8 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_lastLevelMeterValueSum;                         		// 0x04FC (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_highestSumValue;                                		// 0x0500 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FDebugText >                        m_debugTexts;                                     		// 0x0504 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     m_listenerLocation;                               		// 0x0510 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_listenerFrontDir;                               		// 0x051C (0x000C) [0x0000000000000000]              
	struct FRotator                                    m_listenerRotation;                               		// 0x0528 (0x000C) [0x0000000000000000]              
	struct FPointer                                    m_currentAudioVolume;                             		// 0x0534 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FFEVResourceReferenceCounter >      m_fevResouceReferenceCounts;                      		// 0x0538 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     m_fdpPath;                                        		// 0x0544 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FPointer                                    m_voiceWavebankManager;                           		// 0x0550 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UPackage*                                    m_voiceTemplatePackage;                           		// 0x0554 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_musicManager;                                   		// 0x0558 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     m_defaultMoodSetupName;                           		// 0x055C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPointer                                    m_fromMoodSetup;                                  		// 0x0568 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_toMoodSetup;                                    		// 0x056C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_currentMoodSetup;                               		// 0x0570 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_moodSetupOverride;                              		// 0x0574 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              m_moodInterpolationTime;                          		// 0x0578 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_currentMoodInterpolationTime;                   		// 0x057C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FMap_Mirror                                 m_moodCategoryMap;                                		// 0x0580 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_musicCategory;                                  		// 0x05BC (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_HUDCategory;                                    		// 0x05C0 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_FXChannelGroup_Filter;                          		// 0x05C4 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_FXChannelGroup_FilterReverb;                    		// 0x05C8 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_FXChannelGroup_Music;                           		// 0x05CC (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FFMODDuckingSettings                        m_duckingSettings;                                		// 0x05D0 (0x0034) [0x0000000000004000]              ( CPF_Config )
	struct FFMODDuckingSettings                        m_duckingCurrentSettings;                         		// 0x0604 (0x0034) [0x0000000000000000]              
	struct FFMODDuckingSettings                        m_duckingOverrideFromSettings;                    		// 0x0638 (0x0034) [0x0000000000000000]              
	struct FFMODDuckingSettings                        m_duckingOverrideTargetSettings;                  		// 0x066C (0x0034) [0x0000000000000000]              
	float                                              m_duckingOverrideBlendDuration;                   		// 0x06A0 (0x0004) [0x0000000000000000]              
	float                                              m_duckingOverrideBlendCurrentTime;                		// 0x06A4 (0x0004) [0x0000000000000000]              
	float                                              m_duckingFadeInTime;                              		// 0x06A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_duckingFadeOutTime;                             		// 0x06AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_duckingSustainTime;                             		// 0x06B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_duckingMinSpeechVolume;                         		// 0x06B4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              m_duckingStartValue;                              		// 0x06B8 (0x0004) [0x0000000000000000]              
	float                                              m_duckingTargetValue;                             		// 0x06BC (0x0004) [0x0000000000000000]              
	float                                              m_duckingCurrentValue;                            		// 0x06C0 (0x0004) [0x0000000000000000]              
	float                                              m_duckingDuration;                                		// 0x06C4 (0x0004) [0x0000000000000000]              
	float                                              m_duckingCurrentTime;                             		// 0x06C8 (0x0004) [0x0000000000000000]              
	struct FReverbSettings                             m_reverbOverrideSettings;                         		// 0x06CC (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_currentTimeDilation;                            		// 0x06DC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_radioFilterDistance;                            		// 0x06E0 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	class UAudioComponent*                             m_currentMusicTrackRef;                           		// 0x06E4 (0x0004) [0x000000000408000A]              ( CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FString >                           m_debugLevels;                                    		// 0x06E8 (0x000C) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	float                                              m_masterVolume;                                   		// 0x06F4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_masterVolumeFadeDuration;                       		// 0x06F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_masterVolumeFadeTimeToGo;                       		// 0x06FC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_masterVolumeFadeFrom;                           		// 0x0700 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_masterVolumeFadeTo;                             		// 0x0704 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_currentMusicVolume;                             		// 0x0708 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_currentSFXVolume;                               		// 0x070C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_currenSpeechVolume;                             		// 0x0710 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_currenVoiceOverVolume;                          		// 0x0714 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_binkVolumeModifier;                             		// 0x0718 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FListenerTransitionParams                   m_listenerTransitionParams;                       		// 0x071C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_listenerLocationOverrideBlendTimeToGo;          		// 0x072C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FUObjectHandle                              m_listenerLocationOverrideActorHandle;            		// 0x0730 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     m_listenerLocationOverrideStartLoc;               		// 0x0734 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FRotator                                    m_listenerLocationOverrideStartRot;               		// 0x0740 (0x000C) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1404 ];

		return pClassPointer;
	};

	void OutputMoodInfo ( class APlayerController* PC );
	void DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos );
	void FreeEventData ( );
	void LogText ( struct FString msg );
	void GetMoodNames ( struct FString* currentMoodName, struct FString* overrideMoodName );
	void SetQuietMode ( unsigned long quiet );
	void SetPitch ( float Pitch );
	void SetParamEQ ( unsigned long Active, float Time, float Center, float bandwidth, float gain, unsigned long useSecondary );
	void SetHighPass ( unsigned long Active, float Time, float cutoff, float resonance, unsigned long useSecondary );
	void SetLowPass ( unsigned long Active, float Time, float cutoff, float resonance, unsigned long useSecondary );
};

UClass* UFMODAudioDevice::pClassPointer = NULL;

// Class FMODAudio.YAudioVolume
// 0x0054 (0x02C4 - 0x0270)
class AYAudioVolume : public AReverbVolume
{
public:
	unsigned char                                      m_weaponReverbType;                               		// 0x0270 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FYS_SoundInfo >                     m_soundsToPlay;                                   		// 0x0274 (0x000C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	unsigned long                                      m_lowPassActivated : 1;                           		// 0x0280 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_highPassActivated : 1;                          		// 0x0280 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_paramEQActivated : 1;                           		// 0x0280 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	float                                              m_lowPassCutoff;                                  		// 0x0284 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_lowPassResonance;                               		// 0x0288 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_lowPassFadeTime;                                		// 0x028C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_highPassCutoff;                                 		// 0x0290 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_highPassResonance;                              		// 0x0294 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_highPassFadeTime;                               		// 0x0298 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_paramEQCenterFrequency;                         		// 0x029C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_paramEQBandwidth;                               		// 0x02A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_paramEQGain;                                    		// 0x02A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_paramEQFadeTime;                                		// 0x02A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_echoDecayFactor;                                		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_echoDryMix;                                     		// 0x02B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_echoWetMix;                                     		// 0x02B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_echoDelayTime;                                  		// 0x02B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_echoFadeTime;                                   		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_locationReferenceActor;                         		// 0x02C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1405 ];

		return pClassPointer;
	};

	void ApplySavedParamValues ( );
	void SaveParamChange ( class UAudioComponent* AC, struct FName ParamName, float ParamValue );
	void PostBeginPlay ( );
};

UClass* AYAudioVolume::pClassPointer = NULL;

// Class FMODAudio.YFMODResource_Base
// 0x0009 (0x0045 - 0x003C)
class UYFMODResource_Base : public UObject
{
public:
	int                                                m_resourceSize;                                   		// 0x003C (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FPointer                                    m_resourceData;                                   		// 0x0040 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned char                                      m_resourceDataLocation;                           		// 0x0044 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1406 ];

		return pClassPointer;
	};

};

UClass* UYFMODResource_Base::pClassPointer = NULL;

// Class FMODAudio.YFMODResource_FSB
// 0x00BF (0x0104 - 0x0045)
class UYFMODResource_FSB : public UYFMODResource_Base
{
public:
	struct FUntypedBulkData_Mirror                     m_bulkData;                                       		// 0x0048 (0x0034) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FUntypedBulkData_Mirror                     m_bulkXbox360Data;                                		// 0x007C (0x0034) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FUntypedBulkData_Mirror                     m_bulkPS3Data;                                    		// 0x00B0 (0x0034) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     m_fevResourceName;                                		// 0x00E4 (0x000C) [0x0000000000402002]              ( CPF_Const | CPF_Transient | CPF_NeedCtorLink )
	struct FString                                     m_resourceFilePath;                               		// 0x00F0 (0x000C) [0x0000000000001003]              ( CPF_Edit | CPF_Const | CPF_Native )
	struct FPointer                                    m_FMODSound;                                      		// 0x00FC (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned long                                      m_badData : 1;                                    		// 0x0100 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1407 ];

		return pClassPointer;
	};

};

UClass* UYFMODResource_FSB::pClassPointer = NULL;

// Class FMODAudio.YFMODResource_VSB
// 0x00FB (0x0140 - 0x0045)
class UYFMODResource_VSB : public UYFMODResource_Base
{
public:
	struct FUntypedBulkData_Mirror                     m_bulkData;                                       		// 0x0048 (0x0034) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FUntypedBulkData_Mirror                     m_bulkXbox360Data;                                		// 0x007C (0x0034) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FUntypedBulkData_Mirror                     m_bulkPS3Data;                                    		// 0x00B0 (0x0034) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                m_cachedResourceSize;                             		// 0x00E4 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FString                                     m_resourceFilePath;                               		// 0x00E8 (0x000C) [0x0000000000001003]              ( CPF_Edit | CPF_Const | CPF_Native )
	struct FMap_Mirror                                 m_UIDToSampleMap;                                 		// 0x00F4 (0x003C) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UYLocalizedSubtitleData*                     m_localizedSubtitles;                             		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_numContainedSamples;                            		// 0x0134 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FPointer                                    m_FMODSoundPointer;                               		// 0x0138 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UYSoundCueVSB*                               m_soundCue;                                       		// 0x013C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1408 ];

		return pClassPointer;
	};

};

UClass* UYFMODResource_VSB::pClassPointer = NULL;

// Class FMODAudio.YFMODResource_FEV
// 0x00E0 (0x011C - 0x003C)
class UYFMODResource_FEV : public UObject
{
public:
	struct FUntypedBulkData_Mirror                     m_bulkData;                                       		// 0x003C (0x0034) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FUntypedBulkData_Mirror                     m_bulkXbox360Data;                                		// 0x0070 (0x0034) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FUntypedBulkData_Mirror                     m_bulkPS3Data;                                    		// 0x00A4 (0x0034) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                m_resourceSize;                                   		// 0x00D8 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FPointer                                    m_resourceData;                                   		// 0x00DC (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                m_cachedResourceSize;                             		// 0x00E0 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	unsigned long                                      m_badData : 1;                                    		// 0x00E4 (0x0004) [0x0000000000002002] [0x00000001] ( CPF_Const | CPF_Transient )
	unsigned long                                      m_isCooked : 1;                                   		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_isLevelWavebank : 1;                            		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000004] 
	TArray< class UYFMODResource_FSB* >                m_usedFSBs;                                       		// 0x00E8 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     m_resourceFilePath;                               		// 0x00F4 (0x000C) [0x0000000000001003]              ( CPF_Edit | CPF_Const | CPF_Native )
	struct FPointer                                    m_eventProjectHandle;                             		// 0x0100 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	TArray< struct FString >                           m_containedEvents;                                		// 0x0104 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	TArray< struct FName >                             m_levelsContainingStrippedVersion;                		// 0x0110 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1409 ];

		return pClassPointer;
	};

};

UClass* UYFMODResource_FEV::pClassPointer = NULL;

// Class FMODAudio.YInterpTrackInstUID
// 0x0008 (0x0044 - 0x003C)
class UYInterpTrackInstUID : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x003C (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             PlayAudioComp;                                    		// 0x0040 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1410 ];

		return pClassPointer;
	};

};

UClass* UYInterpTrackInstUID::pClassPointer = NULL;

// Class FMODAudio.YInterpTrackUID
// 0x001C (0x008C - 0x0070)
class UYInterpTrackUID : public UInterpTrackVectorBase
{
public:
	TArray< struct FYS_SoundTrackKey >                 Sounds;                                           		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bContinueSoundOnMatineeEnd : 1;                   		// 0x007C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bSuppressSubtitles : 1;                           		// 0x007C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_allowFilters : 1;                               		// 0x007C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_useDucking : 1;                                 		// 0x007C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	TArray< class UYFMODResource_VSB* >                m_vsbResources;                                   		// 0x0080 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1411 ];

		return pClassPointer;
	};

};

UClass* UYInterpTrackUID::pClassPointer = NULL;

// Class FMODAudio.YLocalizedSubtitleData
// 0x000C (0x0048 - 0x003C)
class UYLocalizedSubtitleData : public UObject
{
public:
	TArray< struct FYS_MultiLangSubtitle >             m_subtitles;                                      		// 0x003C (0x000C) [0x0000000000500003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1412 ];

		return pClassPointer;
	};

};

UClass* UYLocalizedSubtitleData::pClassPointer = NULL;

// Class FMODAudio.YMoodChannelSetup
// 0x0020 (0x005C - 0x003C)
class UYMoodChannelSetup : public UObject
{
public:
	struct FString                                     m_channelName;                                    		// 0x003C (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	float                                              m_volume;                                         		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_pitch;                                          		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UYMoodChannelSetup* >                m_subChannelSetups;                               		// 0x0050 (0x000C) [0x0000000006420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_NoClear | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1413 ];

		return pClassPointer;
	};

};

UClass* UYMoodChannelSetup::pClassPointer = NULL;

// Class FMODAudio.YMoodSetup2
// 0x00DC (0x0118 - 0x003C)
class UYMoodSetup2 : public UObject
{
public:
	struct FYS_CategorySettings                        Music;                                            		// 0x003C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        HUD;                                              		// 0x004C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Voice_Walker;                                     		// 0x005C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Voice_Squad;                                      		// 0x006C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Voice_NPCs;                                       		// 0x007C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Voice_Radio;                                      		// 0x008C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Movement;                                         		// 0x009C (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Weapons;                                          		// 0x00AC (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Impacts;                                          		// 0x00BC (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Explosions;                                       		// 0x00CC (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Ambient;                                          		// 0x00DC (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Vehicles;                                         		// 0x00EC (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FYS_CategorySettings                        Specials;                                         		// 0x00FC (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     m_debugName;                                      		// 0x010C (0x000C) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1414 ];

		return pClassPointer;
	};

};

UClass* UYMoodSetup2::pClassPointer = NULL;

// Class FMODAudio.YMusicPart
// 0x0014 (0x0050 - 0x003C)
class UYMusicPart : public UObject
{
public:
	class UYSoundCueFMOD*                              m_soundCue;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FYS_MusicPartParam >                m_parameters;                                     		// 0x0040 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      m_ignoreSlomoPitch : 1;                           		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1415 ];

		return pClassPointer;
	};

};

UClass* UYMusicPart::pClassPointer = NULL;

// Class FMODAudio.YSoundCueFMOD
// 0x0034 (0x00F4 - 0x00C0)
class UYSoundCueFMOD : public USoundCue
{
public:
	class UYFMODResource_FEV*                          m_usedFEV;                                        		// 0x00C0 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	class UYFMODResource_FEV*                          m_usedFEV_Stripped;                               		// 0x00C4 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FString                                     m_usedFEVName;                                    		// 0x00C8 (0x000C) [0x0000000000420002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     m_usedFEV_StrippedName;                           		// 0x00D4 (0x000C) [0x0000000000420002]              ( CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FName                                       m_usedFevFile;                                    		// 0x00E0 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< class UYFMODResource_FSB* >                m_usedFSBs;                                       		// 0x00E8 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1416 ];

		return pClassPointer;
	};

	float GetCueDuration ( );
};

UClass* UYSoundCueFMOD::pClassPointer = NULL;

// Class FMODAudio.YSoundCueVSB
// 0x0010 (0x00D0 - 0x00C0)
class UYSoundCueVSB : public USoundCue
{
public:
	class UYFMODResource_VSB*                          m_usedVSB;                                        		// 0x00C0 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< class UYSoundCueFMOD* >                    m_speakerSoundCues;                               		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1417 ];

		return pClassPointer;
	};

	float GetCueDuration ( );
};

UClass* UYSoundCueVSB::pClassPointer = NULL;

// Class FMODAudio.YSoundNodeFMOD
// 0x0058 (0x00A4 - 0x004C)
class UYSoundNodeFMOD : public USoundNode
{
public:
	struct FString                                     m_eventPath;                                      		// 0x004C (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     m_eventProject;                                   		// 0x0058 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     m_eventProject_Stripped;                          		// 0x0064 (0x000C) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	unsigned long                                      m_useOcclusion : 1;                               		// 0x0070 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_useOcclusionAgainstOwner : 1;                   		// 0x0070 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_playToEndEvenOnStop : 1;                        		// 0x0070 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_ignoreSlomoPitch : 1;                           		// 0x0070 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_drawDebug : 1;                                  		// 0x0070 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bMature : 1;                                      		// 0x0070 (0x0004) [0x0000000000008003] [0x00000020] ( CPF_Edit | CPF_Const | CPF_Localized )
	unsigned long                                      bManualWordWrap : 1;                              		// 0x0070 (0x0004) [0x0000000000008003] [0x00000040] ( CPF_Edit | CPF_Const | CPF_Localized )
	float                                              m_occlusionTestInterval;                          		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_duration;                                       		// 0x0078 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FString                                     SpokenText;                                       		// 0x007C (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FSubtitleCue >                      Subtitles;                                        		// 0x0088 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Comment;                                          		// 0x0094 (0x000C) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FPointer                                    m_eventProjectHandle;                             		// 0x00A0 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1418 ];

		return pClassPointer;
	};

};

UClass* UYSoundNodeFMOD::pClassPointer = NULL;

// Class FMODAudio.YSoundNodeFMOD_Streaming
// 0x0014 (0x0060 - 0x004C)
class UYSoundNodeFMOD_Streaming : public USoundNode
{
public:
	TArray< unsigned char >                            QueuedAudio;                                      		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_sampleRate;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                m_numChannels;                                    		// 0x005C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1419 ];

		return pClassPointer;
	};

	void GeneratePCMData ( int SamplesNeeded, TArray< unsigned char >* Buffer );
	int AvailableAudioBytes ( );
	void ResetAudio ( );
	void QueueAudio ( TArray< unsigned char > Data );
};

UClass* UYSoundNodeFMOD_Streaming::pClassPointer = NULL;

// Class FMODAudio.YSoundOcclusionVolume
// 0x0008 (0x023C - 0x0234)
class AYSoundOcclusionVolume : public AVolume
{
public:
	float                                              m_directOcclusionValue;                           		// 0x0234 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_reverbOcclusionValue;                           		// 0x0238 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1420 ];

		return pClassPointer;
	};

};

UClass* AYSoundOcclusionVolume::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif