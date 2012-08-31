/*=============================================================================
	UnPlayer.h: Unreal player class.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.

	Revision history:
		* Created by Tim Sweeney
=============================================================================*/

/*-----------------------------------------------------------------------------
	UPlayer.
-----------------------------------------------------------------------------*/

//
// A player, the base class of UViewport (local players) and UNetConnection (remote players).
//

class DLL_IMPORT UInteractions : public UObject
{
};

class DLL_IMPORT UInteraction : public UInteractions
{
};


class DLL_IMPORT UInteractionMaster : public UInteractions
{
public:
	class UClient* Client;
	class UInteraction* BaseMenu;
	class UInteraction* Console;
	TArray<class UInteraction*> GlobalInteractions;
	BITFIELD bRequireRawJoystick:1;

      unsigned long eventProcess_KeyEvent(TArray<UInteraction *>,unsigned char &,unsigned char &,float);
      unsigned long eventProcess_KeyType(TArray<UInteraction *>,unsigned char &,class FString const &);
      void DisplayCopyright(void);
      void eventNotifyLevelChange(TArray<UInteraction *>);
      void eventProcess_Message(class FString const &,float,TArray<UInteraction *>);
      void eventProcess_PostRender(TArray<UInteraction *>,class UCanvas *);
      void eventProcess_PreRender(TArray<UInteraction *>,class UCanvas *);
      void eventProcess_Tick(TArray<UInteraction *>,float);
      void eventRemoveInteraction(class UInteraction *);
      void eventSetFocusTo(class UInteraction *,class UPlayer *);
      void execTravel(struct FFrame &,void * const);
      void MasterProcessMessage(class FString const &,float);
      void MasterProcessPostRender(class UCanvas *);
      void MasterProcessPreRender(class UCanvas *);
      void MasterProcessTick(float);

};

class ENGINE_API UPlayer : public UObject, public FOutputDevice, public FExec
{
	DECLARE_ABSTRACT_CLASS(UPlayer,UObject,CLASS_Transient|CLASS_Config,Engine)

	//INT* vfOut;
	//INT* vfExec;
	class APlayerController* Actor;
	class APlayerController* OldActor;
	class UConsole* Console;
	BITFIELD bWindowsMouseAvailable:1;
	BITFIELD bShowWindowsMouse:1;
	FLOAT WindowsMouseX;
	FLOAT WindowsMouseY;
	INT CurrentVoiceBandwidth;
	INT CurrentNetSpeed;
	INT ConfiguredInternetSpeed;
	INT ConfiguredLanSpeed;
	BYTE SelectedCursor;
	class UInteractionMaster* InteractionMaster;
	TArray<class UInteraction*> LocalInteractions;
	class UBaseGUIController* GUIController;
	// Constructor.
	UPlayer();

	// UObject interface.
	void Serialize( FArchive& Ar );
	void Destroy();

	// FExec interface.
	UBOOL Exec( const TCHAR* Cmd, FOutputDevice& Ar );

	// UPlayer interface.
	virtual void ReadInput( FLOAT DeltaSeconds )=0;
};

/*-----------------------------------------------------------------------------
	The End.
-----------------------------------------------------------------------------*/
