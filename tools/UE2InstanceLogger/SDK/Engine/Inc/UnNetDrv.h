/*=============================================================================
	UnNetDrv.h: Unreal network driver base class.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.

	Revision history:
		* Created by Tim Sweeney
=============================================================================*/

/*-----------------------------------------------------------------------------
	UNetDriver.
-----------------------------------------------------------------------------*/

//
// Base class of a network driver attached to an active or pending level.
//
class ENGINE_API UNetDriver : public USubsystem
{
	DECLARE_ABSTRACT_CLASS(UNetDriver,USubsystem,CLASS_Transient|CLASS_Config)

	// Variables.
	TArray<UNetConnection*>	ClientConnections;
	UNetConnection*			ServerConnection;
	FNetworkNotify*			Notify;
	FPackageMap				MasterMap;
	DOUBLE					Time;
	FLOAT					ConnectionTimeout;
	FLOAT					InitialConnectTimeout;
	FLOAT					KeepAliveTime;
	FLOAT					DumbProxyTimeout;
	FLOAT					SimulatedProxyTimeout;
	FLOAT					SpawnPrioritySeconds;
	FLOAT					ServerTravelPause;
	INT						MaxClientRate;
	INT						MaxTicksPerSecond;
	UProperty*				RoleProperty;
	UProperty*				RemoteRoleProperty;

	// Constructors.
	UNetDriver();
	void StaticConstructor();

	// UObject interface.
	void Destroy();
	void Serialize( FArchive& Ar );

	// UNetDriver interface.
	virtual void LowLevelDestroy()=0;
	virtual FString LowLevelGetNetworkNumber()=0;
	virtual void AssertValid();
	virtual UBOOL InitConnect( FNetworkNotify* InNotify, FURL& ConnectURL, FString& Error );
	virtual UBOOL InitListen( FNetworkNotify* InNotify, FURL& ListenURL, FString& Error );
	virtual void TickFlush();
	virtual void TickDispatch( FLOAT DeltaTime );
	virtual UBOOL Exec( const TCHAR* Cmd, FOutputDevice& Ar=*GLog );
};

/*-----------------------------------------------------------------------------
	The End.
-----------------------------------------------------------------------------*/
