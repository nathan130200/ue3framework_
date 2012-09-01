/*
#############################################################################################
# Tron Evolution (1.0) SDK
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0004 (0x005C - 0x0058)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                     		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1769 ];

		return pClassPointer;
	};

};

UClass* UActorFactoryAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAmbientSound
// 0x0008 (0x01EC - 0x01E4)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                    		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                     		// 0x01E4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bIsPlaying : 1;                                   		// 0x01E4 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	class UAkEvent*                                    PlayEvent;                                        		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1770 ];

		return pClassPointer;
	};

};

UClass* AAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkComponent
// 0x0013 (0x0068 - 0x0055)
class UAkComponent : public UActorComponent
{
public:
	struct FName                                       BoneName;                                         		// 0x0058 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAkEvent*                                    AutoPlayEvent;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1771 ];

		return pClassPointer;
	};

};

UClass* UAkComponent::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkEvent
// 0x000C (0x0068 - 0x005C)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray< struct FAkEventTrackKey >                  AkEvents;                                         		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1772 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkRTPC
// 0x000C (0x007C - 0x0070)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x0070 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1773 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1774 ];

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
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1775 ];

		return pClassPointer;
	};

};

UClass* UInterpTrackInstAkRTPC::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x00E8 - 0x00E8)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1776 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkClearBanks::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkLoadBank
// 0x000C (0x0104 - 0x00F8)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                        		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWaitingCallback : 1;                             		// 0x00F8 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	class UAkBank*                                     Bank;                                             		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Signal;                                           		// 0x0100 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1777 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkLoadBank::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostEvent
// 0x0008 (0x0100 - 0x00F8)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	int                                                Signal;                                           		// 0x00F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UAkEvent*                                    Event;                                            		// 0x00FC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1778 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkPostEvent::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostTrigger
// 0x000C (0x00F4 - 0x00E8)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1779 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkPostTrigger::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0014 (0x010C - 0x00F8)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x00F8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Running : 1;                                      		// 0x0108 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1780 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetRTPCValue::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetState
// 0x0018 (0x0100 - 0x00E8)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     State;                                            		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1781 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetState::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0018 (0x0100 - 0x00E8)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x00E8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Switch;                                           		// 0x00F4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1782 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkSetSwitch::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x00E8 - 0x00E8)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1783 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkStartAmbientSound::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x00E8 - 0x00E8)
class USeqAct_AkStopAll : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1784 ];

		return pClassPointer;
	};

};

UClass* USeqAct_AkStopAll::pClassPointer = NULL;

// Class AkAudio.AkAudioDevice
// 0x0230 (0x0270 - 0x0040)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[ 0x230 ];                           		// 0x0040 (0x0230) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76679 ];

		return pClassPointer;
	};

};

UClass* UAkAudioDevice::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif