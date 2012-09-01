/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FMODAudio_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function FMODAudio.FMODAudioDevice.OutputMoodInfo
// [0x00000000] 
struct UFMODAudioDevice_execOutputMoodInfo_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  currentMood;                                      		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  overrideMood;                                     		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function FMODAudio.FMODAudioDevice.DisplayDebug
// [0x00000000] 
struct UFMODAudioDevice_execDisplayDebug_Parms
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              out_YL;                                           		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              out_YPos;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct FString                                  currentMood;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  overrideMood;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function FMODAudio.FMODAudioDevice.FreeEventData
// [0x00000000] 
struct UFMODAudioDevice_execFreeEventData_Parms
{
};

// Function FMODAudio.FMODAudioDevice.LogText
// [0x00000000] 
struct UFMODAudioDevice_execLogText_Parms
{
	struct FString                                     msg;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function FMODAudio.FMODAudioDevice.GetMoodNames
// [0x00000000] 
struct UFMODAudioDevice_execGetMoodNames_Parms
{
	struct FString                                     currentMoodName;                                  		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     overrideMoodName;                                 		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function FMODAudio.FMODAudioDevice.SetQuietMode
// [0x00000000] 
struct UFMODAudioDevice_execSetQuietMode_Parms
{
	unsigned long                                      quiet : 1;                                        		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function FMODAudio.FMODAudioDevice.SetPitch
// [0x00000000] 
struct UFMODAudioDevice_execSetPitch_Parms
{
	float                                              Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function FMODAudio.FMODAudioDevice.SetParamEQ
// [0x00000000] 
struct UFMODAudioDevice_execSetParamEQ_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Center;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              bandwidth;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              gain;                                             		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      useSecondary : 1;                                 		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function FMODAudio.FMODAudioDevice.SetHighPass
// [0x00000000] 
struct UFMODAudioDevice_execSetHighPass_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              cutoff;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              resonance;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      useSecondary : 1;                                 		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function FMODAudio.FMODAudioDevice.SetLowPass
// [0x00000000] 
struct UFMODAudioDevice_execSetLowPass_Parms
{
	unsigned long                                      Active : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	float                                              Time;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              cutoff;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              resonance;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      useSecondary : 1;                                 		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function FMODAudio.YAudioVolume.ApplySavedParamValues
// [0x00000000] 
struct AYAudioVolume_execApplySavedParamValues_Parms
{
};

// Function FMODAudio.YAudioVolume.SaveParamChange
// [0x00000000] 
struct AYAudioVolume_execSaveParamChange_Parms
{
	class UAudioComponent*                             AC;                                               		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FName                                       ParamName;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ParamValue;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function FMODAudio.YAudioVolume.PostBeginPlay
// [0x00000000] 
struct AYAudioVolume_execPostBeginPlay_Parms
{
	// int                                             I;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function FMODAudio.YSoundCueFMOD.GetCueDuration
// [0x00000000] 
struct UYSoundCueFMOD_execGetCueDuration_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FMODAudio.YSoundCueVSB.GetCueDuration
// [0x00000000] 
struct UYSoundCueVSB_execGetCueDuration_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FMODAudio.YSoundNodeFMOD_Streaming.GeneratePCMData
// [0x00000000] 
struct UYSoundNodeFMOD_Streaming_execGeneratePCMData_Parms
{
	TArray< unsigned char >                            Buffer;                                           		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                SamplesNeeded;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function FMODAudio.YSoundNodeFMOD_Streaming.AvailableAudioBytes
// [0x00000000] 
struct UYSoundNodeFMOD_Streaming_execAvailableAudioBytes_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function FMODAudio.YSoundNodeFMOD_Streaming.ResetAudio
// [0x00000000] 
struct UYSoundNodeFMOD_Streaming_execResetAudio_Parms
{
};

// Function FMODAudio.YSoundNodeFMOD_Streaming.QueueAudio
// [0x00000000] 
struct UYSoundNodeFMOD_Streaming_execQueueAudio_Parms
{
	TArray< unsigned char >                            Data;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif