/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: FMODAudio_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function FMODAudio.FMODAudioDevice.OutputMoodInfo
// [0x00000000] 
// Parameters infos:
// class APlayerController*       PC                             ( CPF_Parm )

void UFMODAudioDevice::OutputMoodInfo ( class APlayerController* PC )
{
	static UFunction* pFnOutputMoodInfo = NULL;

	if ( ! pFnOutputMoodInfo )
		pFnOutputMoodInfo = (UFunction*) UObject::GObjObjects()->Data[ 38705 ];

	UFMODAudioDevice_execOutputMoodInfo_Parms OutputMoodInfo_Parms;
	OutputMoodInfo_Parms.PC = PC;

	this->ProcessEvent ( pFnOutputMoodInfo, &OutputMoodInfo_Parms, NULL );
};

// Function FMODAudio.FMODAudioDevice.DisplayDebug
// [0x00000000] 
// Parameters infos:
// class AHUD*                    HUD                            ( CPF_Parm )
// float                          out_YL                         ( CPF_Parm | CPF_OutParm )
// float                          out_YPos                       ( CPF_Parm | CPF_OutParm )

void UFMODAudioDevice::DisplayDebug ( class AHUD* HUD, float* out_YL, float* out_YPos )
{
	static UFunction* pFnDisplayDebug = NULL;

	if ( ! pFnDisplayDebug )
		pFnDisplayDebug = (UFunction*) UObject::GObjObjects()->Data[ 38699 ];

	UFMODAudioDevice_execDisplayDebug_Parms DisplayDebug_Parms;
	DisplayDebug_Parms.HUD = HUD;

	this->ProcessEvent ( pFnDisplayDebug, &DisplayDebug_Parms, NULL );

	if ( out_YL )
		*out_YL = DisplayDebug_Parms.out_YL;

	if ( out_YPos )
		*out_YPos = DisplayDebug_Parms.out_YPos;
};

// Function FMODAudio.FMODAudioDevice.FreeEventData
// [0x00000000] 
// Parameters infos:

void UFMODAudioDevice::FreeEventData ( )
{
	static UFunction* pFnFreeEventData = NULL;

	if ( ! pFnFreeEventData )
		pFnFreeEventData = (UFunction*) UObject::GObjObjects()->Data[ 38698 ];

	UFMODAudioDevice_execFreeEventData_Parms FreeEventData_Parms;

	this->ProcessEvent ( pFnFreeEventData, &FreeEventData_Parms, NULL );
};

// Function FMODAudio.FMODAudioDevice.LogText
// [0x00000000] 
// Parameters infos:
// struct FString                 msg                            ( CPF_Parm | CPF_NeedCtorLink )

void UFMODAudioDevice::LogText ( struct FString msg )
{
	static UFunction* pFnLogText = NULL;

	if ( ! pFnLogText )
		pFnLogText = (UFunction*) UObject::GObjObjects()->Data[ 38696 ];

	UFMODAudioDevice_execLogText_Parms LogText_Parms;
	memcpy ( &LogText_Parms.msg, &msg, 0xC );

	this->ProcessEvent ( pFnLogText, &LogText_Parms, NULL );
};

// Function FMODAudio.FMODAudioDevice.GetMoodNames
// [0x00000000] 
// Parameters infos:
// struct FString                 currentMoodName                ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 overrideMoodName               ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UFMODAudioDevice::GetMoodNames ( struct FString* currentMoodName, struct FString* overrideMoodName )
{
	static UFunction* pFnGetMoodNames = NULL;

	if ( ! pFnGetMoodNames )
		pFnGetMoodNames = (UFunction*) UObject::GObjObjects()->Data[ 38693 ];

	UFMODAudioDevice_execGetMoodNames_Parms GetMoodNames_Parms;

	this->ProcessEvent ( pFnGetMoodNames, &GetMoodNames_Parms, NULL );

	if ( currentMoodName )
		memcpy ( currentMoodName, &GetMoodNames_Parms.currentMoodName, 0xC );

	if ( overrideMoodName )
		memcpy ( overrideMoodName, &GetMoodNames_Parms.overrideMoodName, 0xC );
};

// Function FMODAudio.FMODAudioDevice.SetQuietMode
// [0x00000000] 
// Parameters infos:
// unsigned long                  quiet                          ( CPF_Parm )

void UFMODAudioDevice::SetQuietMode ( unsigned long quiet )
{
	static UFunction* pFnSetQuietMode = NULL;

	if ( ! pFnSetQuietMode )
		pFnSetQuietMode = (UFunction*) UObject::GObjObjects()->Data[ 38691 ];

	UFMODAudioDevice_execSetQuietMode_Parms SetQuietMode_Parms;
	SetQuietMode_Parms.quiet = quiet;

	this->ProcessEvent ( pFnSetQuietMode, &SetQuietMode_Parms, NULL );
};

// Function FMODAudio.FMODAudioDevice.SetPitch
// [0x00000000] 
// Parameters infos:
// float                          Pitch                          ( CPF_Parm )

void UFMODAudioDevice::SetPitch ( float Pitch )
{
	static UFunction* pFnSetPitch = NULL;

	if ( ! pFnSetPitch )
		pFnSetPitch = (UFunction*) UObject::GObjObjects()->Data[ 38689 ];

	UFMODAudioDevice_execSetPitch_Parms SetPitch_Parms;
	SetPitch_Parms.Pitch = Pitch;

	this->ProcessEvent ( pFnSetPitch, &SetPitch_Parms, NULL );
};

// Function FMODAudio.FMODAudioDevice.SetParamEQ
// [0x00000000] 
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// float                          Time                           ( CPF_Parm )
// float                          Center                         ( CPF_Parm )
// float                          bandwidth                      ( CPF_Parm )
// float                          gain                           ( CPF_Parm )
// unsigned long                  useSecondary                   ( CPF_OptionalParm | CPF_Parm )

void UFMODAudioDevice::SetParamEQ ( unsigned long Active, float Time, float Center, float bandwidth, float gain, unsigned long useSecondary )
{
	static UFunction* pFnSetParamEQ = NULL;

	if ( ! pFnSetParamEQ )
		pFnSetParamEQ = (UFunction*) UObject::GObjObjects()->Data[ 38682 ];

	UFMODAudioDevice_execSetParamEQ_Parms SetParamEQ_Parms;
	SetParamEQ_Parms.Active = Active;
	SetParamEQ_Parms.Time = Time;
	SetParamEQ_Parms.Center = Center;
	SetParamEQ_Parms.bandwidth = bandwidth;
	SetParamEQ_Parms.gain = gain;
	SetParamEQ_Parms.useSecondary = useSecondary;

	this->ProcessEvent ( pFnSetParamEQ, &SetParamEQ_Parms, NULL );
};

// Function FMODAudio.FMODAudioDevice.SetHighPass
// [0x00000000] 
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// float                          Time                           ( CPF_Parm )
// float                          cutoff                         ( CPF_Parm )
// float                          resonance                      ( CPF_Parm )
// unsigned long                  useSecondary                   ( CPF_OptionalParm | CPF_Parm )

void UFMODAudioDevice::SetHighPass ( unsigned long Active, float Time, float cutoff, float resonance, unsigned long useSecondary )
{
	static UFunction* pFnSetHighPass = NULL;

	if ( ! pFnSetHighPass )
		pFnSetHighPass = (UFunction*) UObject::GObjObjects()->Data[ 38676 ];

	UFMODAudioDevice_execSetHighPass_Parms SetHighPass_Parms;
	SetHighPass_Parms.Active = Active;
	SetHighPass_Parms.Time = Time;
	SetHighPass_Parms.cutoff = cutoff;
	SetHighPass_Parms.resonance = resonance;
	SetHighPass_Parms.useSecondary = useSecondary;

	this->ProcessEvent ( pFnSetHighPass, &SetHighPass_Parms, NULL );
};

// Function FMODAudio.FMODAudioDevice.SetLowPass
// [0x00000000] 
// Parameters infos:
// unsigned long                  Active                         ( CPF_Parm )
// float                          Time                           ( CPF_Parm )
// float                          cutoff                         ( CPF_Parm )
// float                          resonance                      ( CPF_Parm )
// unsigned long                  useSecondary                   ( CPF_OptionalParm | CPF_Parm )

void UFMODAudioDevice::SetLowPass ( unsigned long Active, float Time, float cutoff, float resonance, unsigned long useSecondary )
{
	static UFunction* pFnSetLowPass = NULL;

	if ( ! pFnSetLowPass )
		pFnSetLowPass = (UFunction*) UObject::GObjObjects()->Data[ 38670 ];

	UFMODAudioDevice_execSetLowPass_Parms SetLowPass_Parms;
	SetLowPass_Parms.Active = Active;
	SetLowPass_Parms.Time = Time;
	SetLowPass_Parms.cutoff = cutoff;
	SetLowPass_Parms.resonance = resonance;
	SetLowPass_Parms.useSecondary = useSecondary;

	this->ProcessEvent ( pFnSetLowPass, &SetLowPass_Parms, NULL );
};

// Function FMODAudio.YAudioVolume.ApplySavedParamValues
// [0x00000000] 
// Parameters infos:

void AYAudioVolume::ApplySavedParamValues ( )
{
	static UFunction* pFnApplySavedParamValues = NULL;

	if ( ! pFnApplySavedParamValues )
		pFnApplySavedParamValues = (UFunction*) UObject::GObjObjects()->Data[ 38749 ];

	AYAudioVolume_execApplySavedParamValues_Parms ApplySavedParamValues_Parms;

	this->ProcessEvent ( pFnApplySavedParamValues, &ApplySavedParamValues_Parms, NULL );
};

// Function FMODAudio.YAudioVolume.SaveParamChange
// [0x00000000] 
// Parameters infos:
// class UAudioComponent*         AC                             ( CPF_Parm | CPF_EditInline )
// struct FName                   ParamName                      ( CPF_Parm )
// float                          ParamValue                     ( CPF_Parm )

void AYAudioVolume::SaveParamChange ( class UAudioComponent* AC, struct FName ParamName, float ParamValue )
{
	static UFunction* pFnSaveParamChange = NULL;

	if ( ! pFnSaveParamChange )
		pFnSaveParamChange = (UFunction*) UObject::GObjObjects()->Data[ 38745 ];

	AYAudioVolume_execSaveParamChange_Parms SaveParamChange_Parms;
	SaveParamChange_Parms.AC = AC;
	memcpy ( &SaveParamChange_Parms.ParamName, &ParamName, 0x8 );
	SaveParamChange_Parms.ParamValue = ParamValue;

	this->ProcessEvent ( pFnSaveParamChange, &SaveParamChange_Parms, NULL );
};

// Function FMODAudio.YAudioVolume.PostBeginPlay
// [0x00000000] 
// Parameters infos:

void AYAudioVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 38743 ];

	AYAudioVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function FMODAudio.YSoundCueFMOD.GetCueDuration
// [0x00000000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UYSoundCueFMOD::GetCueDuration ( )
{
	static UFunction* pFnGetCueDuration = NULL;

	if ( ! pFnGetCueDuration )
		pFnGetCueDuration = (UFunction*) UObject::GObjObjects()->Data[ 38870 ];

	UYSoundCueFMOD_execGetCueDuration_Parms GetCueDuration_Parms;

	this->ProcessEvent ( pFnGetCueDuration, &GetCueDuration_Parms, NULL );

	return GetCueDuration_Parms.ReturnValue;
};

// Function FMODAudio.YSoundCueVSB.GetCueDuration
// [0x00000000] 
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UYSoundCueVSB::GetCueDuration ( )
{
	static UFunction* pFnGetCueDuration = NULL;

	if ( ! pFnGetCueDuration )
		pFnGetCueDuration = (UFunction*) UObject::GObjObjects()->Data[ 38875 ];

	UYSoundCueVSB_execGetCueDuration_Parms GetCueDuration_Parms;

	this->ProcessEvent ( pFnGetCueDuration, &GetCueDuration_Parms, NULL );

	return GetCueDuration_Parms.ReturnValue;
};

// Function FMODAudio.YSoundNodeFMOD_Streaming.GeneratePCMData
// [0x00000000] 
// Parameters infos:
// int                            SamplesNeeded                  ( CPF_Parm )
// TArray< unsigned char >        Buffer                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UYSoundNodeFMOD_Streaming::GeneratePCMData ( int SamplesNeeded, TArray< unsigned char >* Buffer )
{
	static UFunction* pFnGeneratePCMData = NULL;

	if ( ! pFnGeneratePCMData )
		pFnGeneratePCMData = (UFunction*) UObject::GObjObjects()->Data[ 38936 ];

	UYSoundNodeFMOD_Streaming_execGeneratePCMData_Parms GeneratePCMData_Parms;
	GeneratePCMData_Parms.SamplesNeeded = SamplesNeeded;

	this->ProcessEvent ( pFnGeneratePCMData, &GeneratePCMData_Parms, NULL );

	if ( Buffer )
		memcpy ( Buffer, &GeneratePCMData_Parms.Buffer, 0xC );
};

// Function FMODAudio.YSoundNodeFMOD_Streaming.AvailableAudioBytes
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UYSoundNodeFMOD_Streaming::AvailableAudioBytes ( )
{
	static UFunction* pFnAvailableAudioBytes = NULL;

	if ( ! pFnAvailableAudioBytes )
		pFnAvailableAudioBytes = (UFunction*) UObject::GObjObjects()->Data[ 38934 ];

	UYSoundNodeFMOD_Streaming_execAvailableAudioBytes_Parms AvailableAudioBytes_Parms;

	this->ProcessEvent ( pFnAvailableAudioBytes, &AvailableAudioBytes_Parms, NULL );

	return AvailableAudioBytes_Parms.ReturnValue;
};

// Function FMODAudio.YSoundNodeFMOD_Streaming.ResetAudio
// [0x00000000] 
// Parameters infos:

void UYSoundNodeFMOD_Streaming::ResetAudio ( )
{
	static UFunction* pFnResetAudio = NULL;

	if ( ! pFnResetAudio )
		pFnResetAudio = (UFunction*) UObject::GObjObjects()->Data[ 38933 ];

	UYSoundNodeFMOD_Streaming_execResetAudio_Parms ResetAudio_Parms;

	this->ProcessEvent ( pFnResetAudio, &ResetAudio_Parms, NULL );
};

// Function FMODAudio.YSoundNodeFMOD_Streaming.QueueAudio
// [0x00000000] 
// Parameters infos:
// TArray< unsigned char >        Data                           ( CPF_Parm | CPF_NeedCtorLink )

void UYSoundNodeFMOD_Streaming::QueueAudio ( TArray< unsigned char > Data )
{
	static UFunction* pFnQueueAudio = NULL;

	if ( ! pFnQueueAudio )
		pFnQueueAudio = (UFunction*) UObject::GObjObjects()->Data[ 38930 ];

	UYSoundNodeFMOD_Streaming_execQueueAudio_Parms QueueAudio_Parms;
	memcpy ( &QueueAudio_Parms.Data, &Data, 0xC );

	this->ProcessEvent ( pFnQueueAudio, &QueueAudio_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif