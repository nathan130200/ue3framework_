/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FMODAudio_structs.h
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

// ScriptStruct FMODAudio.FMODAudioDevice.FMODCategoryReverbAffection
// 0x001C
struct FFMODCategoryReverbAffection
{
	struct FPointer                                    m_FMODEventCategory;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_reverbDSP;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_dspConnection;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FPointer                                    m_echoDSP;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       m_categoryName;                                   		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_reverbLevel;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FMODAudio.FMODAudioDevice.MusicComponentInitSetting
// 0x000C
struct FMusicComponentInitSetting
{
	class UAudioComponent*                             m_audioComponent;                                 		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                m_intensity;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_part;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FMODAudio.FMODAudioDevice.ParameterInterpolationTask
// 0x001C
struct FParameterInterpolationTask
{
	class UAudioComponent*                             m_audioComponent;                                 		// 0x0000 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       m_paramName;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	float                                              m_startValue;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_targetValue;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_startTime;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_duration;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FMODAudio.FMODAudioDevice.DebugText
// 0x001C
struct FDebugText
{
	struct FColor                                      m_color;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     m_pos;                                            		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FString                                     m_text;                                           		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FMODAudio.FMODAudioDevice.FEVResourceReferenceCounter
// 0x000C
struct FFEVResourceReferenceCounter
{
	struct FName                                       m_fevResourceName;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_refCount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FMODAudio.FMODAudioDevice.ListenerTransitionParams
// 0x0010
struct FListenerTransitionParams
{
	float                                              BlendTime;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      BlendFunction;                                    		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendExp;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      BUseDoppler : 1;                                  		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct FMODAudio.FMODAudioDevice.FSBResourceReferenceCounter
// 0x000C
struct FFSBResourceReferenceCounter
{
	struct FName                                       m_fsbResourceName;                                		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_refCount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FMODAudio.FMODAudioDevice.FMODActiveEvent
// 0x0088
struct FFMODActiveEvent
{
	struct FPointer                                    m_FMODEvent;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAudioComponent*                             m_audioComponent;                                 		// 0x0004 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UYSoundCueFMOD*                              m_soundCue;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_isPaused : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      m_keyOffState;                                    		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      m_hasBeenStopped : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_loopCursorValue;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_useOcclusion : 1;                               		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_useOcclusionAgainstOwner : 1;                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_playToEndEvenOnStop : 1;                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     m_lastValidLocation;                              		// 0x0020 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_lastValidRotation;                              		// 0x002C (0x000C) [0x0000000000000000]              
	struct FVector                                     m_lastValidVelocity;                              		// 0x0038 (0x000C) [0x0000000000000000]              
	float                                              m_occlusionTestInterval;                          		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              m_timeSinceLastOcclusionTest;                     		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              m_lastAppliedDistanceModifier;                    		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              m_defaultVolume;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              m_lastVolume;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              m_lastPitch;                                      		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              m_defaultPitch;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              m_ignoreSlomoPitch;                               		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_showDebug : 1;                                  		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     m_eventPath;                                      		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_eventProject;                                   		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_isStreamingEvent : 1;                           		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    m_loopCursorHandle;                               		// 0x0084 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FMODAudio.FMODAudioDevice.FMODEventCategoryData
// 0x0004
struct FFMODEventCategoryData
{
	struct FPointer                                    m_FMODEventCategory;                              		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct FMODAudio.FMODAudioDevice.FMODMoodCategories
// 0x0010
struct FFMODMoodCategories
{
	struct FPointer                                    m_catFilter;                                      		// 0x0000 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_catReverb;                                      		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_catFilterReverb;                                		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    m_catDirect;                                      		// 0x000C (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct FMODAudio.FMODAudioDevice.FMODDuckingSettings
// 0x0034
struct FFMODDuckingSettings
{
	float                                              Music;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              HUD;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Voice_Walker;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Voice_Squad;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Voice_NPCs;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Voice_Radio;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Movement;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Weapons;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Impacts;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Explosions;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              Ambient;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              Vehicles;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              Specials;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FMODAudio.FMODAudioDevice.DSPFilterData
// 0x0034
struct FDSPFilterData
{
	struct FPointer                                    m_DSP_Filter;                                     		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_DSP_FilterReverb;                               		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_DSP_Music;                                      		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      m_active : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_currentCutoff;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_startCutoff;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_targetCutoff;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_currentResonance;                               		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_startResonance;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_targetResonance;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_interpolationTime;                              		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_interpolationStartTime;                         		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_isInterpolating : 1;                            		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FMODAudio.FMODAudioDevice.DSPParamEQData
// 0x0040
struct FDSPParamEQData
{
	struct FPointer                                    m_DSP_Filter;                                     		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_DSP_FilterReverb;                               		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    m_DSP_Music;                                      		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      m_active : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_currentCenterFrequency;                         		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_startCenterFrequency;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_targetCenterFrequency;                          		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_currentGain;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_startGain;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_targetGain;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              m_currentBandwidth;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              m_startBandwidth;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              m_targetBandwidth;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              m_interpolationTime;                              		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              m_interpolationStartTime;                         		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_isInterpolating : 1;                            		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct FMODAudio.YAudioVolume.YS_FMODParamInfo
// 0x000C
struct FYS_FMODParamInfo
{
	struct FName                                       m_paramName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_paramValue;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct FMODAudio.YAudioVolume.YS_SoundInfo
// 0x0020
struct FYS_SoundInfo
{
	class UYSoundCueFMOD*                              m_soundCue;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_volume;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fadeInTime;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fadeOutTime;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAudioComponent*                             m_audioComponent;                                 		// 0x0010 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FYS_FMODParamInfo >                 m_changedParams;                                  		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FMODAudio.YFMODResource_VSB.YS_VoiceSampleInfo
// 0x002C
struct FYS_VoiceSampleInfo
{
	int                                                m_index;                                          		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FName                                       m_speaker;                                        		// 0x0004 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              m_lengthSeconds;                                  		// 0x000C (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FString                                     m_spokenText;                                     		// 0x0010 (0x000C) [0x0000000000520003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	int                                                m_hasFaceFXAnimation;                             		// 0x001C (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	TArray< struct FSubtitleCue >                      Subtitles;                                        		// 0x0020 (0x000C) [0x0000000000520003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
};

// ScriptStruct FMODAudio.YInterpTrackUID.YS_SoundTrackKey
// 0x0020
struct FYS_SoundTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Pitch;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Uid;                                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Length;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     Text;                                             		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct FMODAudio.YLocalizedSubtitleData.YS_LocalizedSubtitle
// 0x0018
struct FYS_LocalizedSubtitle
{
	struct FString                                     m_language;                                       		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FSubtitleCue >                      m_subtitles;                                      		// 0x000C (0x000C) [0x0000000000500003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct FMODAudio.YLocalizedSubtitleData.YS_MultiLangSubtitle
// 0x0010
struct FYS_MultiLangSubtitle
{
	int                                                m_lineUID;                                        		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FYS_LocalizedSubtitle >             m_locSubtitles;                                   		// 0x0004 (0x000C) [0x0000000000500003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct FMODAudio.YMoodSetup2.YS_CategorySettings
// 0x0010
struct FYS_CategorySettings
{
	struct FName                                       m_name;                                           		// 0x0000 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              m_volume;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_pitch;                                          		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FMODAudio.YMoodSetup2.YS_FilterSettings
// 0x000C
struct FYS_FilterSettings
{
	unsigned long                                      m_active : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              m_cutoffFrequency;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_resonance;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FMODAudio.YMoodSetup2.YS_ParamEQSettings
// 0x0010
struct FYS_ParamEQSettings
{
	unsigned long                                      m_active : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              m_centerFrequency;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_bandWidth;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_gain;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct FMODAudio.YMusicPart.YS_MusicPartParam
// 0x000C
struct FYS_MusicPartParam
{
	struct FName                                       m_paramName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_paramValue;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif