/*
#############################################################################################
# Blacklight: Retribution (0.951) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_classes.h
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

// Enum AkAudio.AkAmbientSound.EMultiPositionType
/*enum EMultiPositionType
{
	EMPT_None                                          = 0,
	EMPT_Positions                                     = 1,
	EMPT_Direcions                                     = 2,
	EMPT_MAX                                           = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0004 (0x0060 - 0x005C)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                     		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1395 ];

		return pClassPointer;
	};

};

UClass* UActorFactoryAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAmbientSound
// 0x0021 (0x01ED - 0x01CC)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                    		// 0x01CC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                     		// 0x01CC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bEnableOcclusion : 1;                             		// 0x01CC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIsPlaying : 1;                                   		// 0x01CC (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	class UAkEvent*                                    PlayEvent;                                        		// 0x01D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< class AActor* >                            PositionActors;                                   		// 0x01D4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSoundPosition >                    MultiPositions;                                   		// 0x01E0 (0x000C) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	unsigned char                                      MultiPositionType;                                		// 0x01EC (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1396 ];

		return pClassPointer;
	};

};

UClass* AAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAudioDevice
// 0x002C (0x006C - 0x0040)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[ 0x2C ];                            		// 0x0040 (0x002C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1397 ];

		return pClassPointer;
	};

};

UClass* UAkAudioDevice::pClassPointer = NULL;

// Class AkAudio.AkComponent
// 0x005B (0x00B0 - 0x0055)
class UAkComponent : public UActorComponent
{
public:
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanBeOccluded : 1;                               		// 0x0058 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	class AAkEnvironmentalVolume*                      AkVolume;                                         		// 0x005C (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              LastOcclusionUpdateTime;                          		// 0x0060 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              LastOcclusionValue;                               		// 0x0064 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              LastObstructionValue;                             		// 0x0068 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              OcclusionUpdateFrequency;                         		// 0x006C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxOcclusionDistance;                             		// 0x0070 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxEnvironmentDistance;                           		// 0x0074 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              LastEnvironmentUpdateTime;                        		// 0x0078 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              OcclusionUpdateRandomization;                     		// 0x007C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BSPMinOcclusion;                                  		// 0x0080 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BSPMinObstruction;                                		// 0x0084 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BSPMaxOcclusion;                                  		// 0x0088 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BSPMaxObstruction;                                		// 0x008C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BSPMinOcclusionThickness;                         		// 0x0090 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BSPMinObstructionThickness;                       		// 0x0094 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BSPMaxOcclusionThickness;                         		// 0x0098 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              BSPMaxObstructionThickness;                       		// 0x009C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                GameObjectIDs[ 0x4 ];                             		// 0x00A0 (0x0010) [0x0000000000002002]              ( CPF_Const | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1398 ];

		return pClassPointer;
	};

};

UClass* UAkComponent::pClassPointer = NULL;

// Class AkAudio.AkEnvironmentalVolume
// 0x0014 (0x0214 - 0x0200)
class AAkEnvironmentalVolume : public AEnvironmentVolume
{
public:
	struct FString                                     EnvironmentalID;                                  		// 0x0200 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       AreaAudioSwitch;                                  		// 0x020C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1399 ];

		return pClassPointer;
	};

};

UClass* AAkEnvironmentalVolume::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkEvent
// 0x000C (0x008C - 0x0080)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray< struct FAkEventTrackKey >                  AkEvents;                                         		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1400 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkRTPC
// 0x000C (0x00A0 - 0x0094)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x0094 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1401 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkRTPC::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0040 - 0x003C)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x003C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1402 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x003C - 0x003C)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1403 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstAkRTPC::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x00F0 - 0x00F0)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1404 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkClearBanks::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkLoadBank
// 0x000C (0x010C - 0x0100)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                        		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWaitingCallback : 1;                             		// 0x0100 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class UAkBank*                                     Bank;                                             		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Signal;                                           		// 0x0108 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1405 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkLoadBank::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostEvent
// 0x0008 (0x0108 - 0x0100)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	int                                                Signal;                                           		// 0x0100 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAkEvent*                                    Event;                                            		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )

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

UClass* USeqAct_AkPostEvent::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostTrigger
// 0x000C (0x00FC - 0x00F0)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

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

UClass* USeqAct_AkPostTrigger::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0014 (0x0114 - 0x0100)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x0100 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Running : 1;                                      		// 0x0110 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

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

UClass* USeqAct_AkSetRTPCValue::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetState
// 0x0018 (0x0108 - 0x00F0)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     State;                                            		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

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

UClass* USeqAct_AkSetState::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0018 (0x0108 - 0x00F0)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Switch;                                           		// 0x00FC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

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

UClass* USeqAct_AkSetSwitch::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x00F0 - 0x00F0)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

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

UClass* USeqAct_AkStartAmbientSound::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x00F0 - 0x00F0)
class USeqAct_AkStopAll : public USequenceAction
{
public:

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

UClass* USeqAct_AkStopAll::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif