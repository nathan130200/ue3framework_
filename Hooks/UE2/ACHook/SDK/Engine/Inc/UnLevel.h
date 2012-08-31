/*=============================================================================
	UnLevel.h: ULevel definition.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.

	Revision history:
		* Created by Tim Sweeney
=============================================================================*/

/*-----------------------------------------------------------------------------
	Network notification sink.
-----------------------------------------------------------------------------*/

//
// Accepting connection responses.
//
enum EAcceptConnection
{
	ACCEPTC_Reject,	// Reject the connection.
	ACCEPTC_Accept, // Accept the connection.
	ACCEPTC_Ignore, // Ignore it, sending no reply, while server travelling.
};

//
// The net code uses this to send notifications.
//
class ENGINE_API FNetworkNotify
{
public:
	virtual EAcceptConnection NotifyAcceptingConnection()=0;
	virtual void NotifyAcceptedConnection( class UNetConnection* Connection )=0;
	virtual UBOOL NotifyAcceptingChannel( class UChannel* Channel )=0;
	virtual ULevel* NotifyGetLevel()=0;
	virtual void NotifyReceivedText( UNetConnection* Connection, const TCHAR* Text )=0;
	virtual UBOOL NotifySendingFile( UNetConnection* Connection, FGuid GUID )=0;
	virtual void NotifyReceivedFile( UNetConnection* Connection, INT PackageIndex, const TCHAR* Error, UBOOL Skipped )=0;
	virtual void NotifyProgress( const TCHAR* Str1, const TCHAR* Str2, FLOAT Seconds )=0;
};

/*-----------------------------------------------------------------------------
	FCollisionHashBase.
-----------------------------------------------------------------------------*/

class FCollisionHashBase
{
public:
	// FCollisionHashBase interface.
	virtual ~FCollisionHashBase() {};
	virtual void Tick()=0;
	virtual void AddActor( AActor *Actor )=0;
	virtual void RemoveActor( AActor *Actor )=0;
	virtual FCheckResult* ActorLineCheck( FMemStack& Mem, FVector End, FVector Start, FVector Extent, BYTE ExtraNodeFlags )=0;
	virtual FCheckResult* ActorPointCheck( FMemStack& Mem, FVector Location, FVector Extent, DWORD ExtraNodeFlags )=0;
	virtual FCheckResult* ActorRadiusCheck( FMemStack& Mem, FVector Location, FLOAT Radius, DWORD ExtraNodeFlags )=0;
	virtual FCheckResult* ActorEncroachmentCheck( FMemStack& Mem, AActor* Actor, FVector Location, FRotator Rotation, DWORD ExtraNodeFlags )=0;
	virtual void CheckActorNotReferenced( AActor* Actor )=0;
};

ENGINE_API FCollisionHashBase* GNewCollisionHash();

/*-----------------------------------------------------------------------------
	ULevel base.
-----------------------------------------------------------------------------*/

//
// A game level.
//
class DLL_IMPORT ULevelBase : public UObject
{
public:
	void* fixme;
	//TTransArray<AActor*>Actors;
	TArray<AActor*>Actors;
	class UNetDriver*	NetDriver;
	class UEngine*		Engine;
	FURL				URL;
	class UNetDriver*	DemoRecDriver;


	ULevelBase(ULevelBase const &);
	ULevelBase(UEngine *,FURL const &);
	static void * operator new(unsigned int,UObject *,unsigned short *,unsigned long);
	static void * operator new(unsigned int,UObject *,unsigned short const *,unsigned long);
	static void * operator new(unsigned int,UObject *,FName,unsigned long);
	static void * operator new(unsigned int,enum EInternal *);
	ULevelBase & operator=(ULevelBase const &);
	static UClass * StaticClass(void);

	//virtual void NotifyProgress(unsigned short const *,unsigned short const *,unsigned short const *,float);

protected:
	ULevelBase(void);
private:
	static UClass PrivateStaticClass;
};

/*-----------------------------------------------------------------------------
	ULevel class.
-----------------------------------------------------------------------------*/

//
// Trace actor options.
//
enum ETraceActorFlags
{
	// Bitflags.
	TRACE_Pawns         = 0x01, // Check collision with pawns.
	TRACE_Movers        = 0x02, // Check collision with movers.
	TRACE_Level         = 0x04, // Check collision with level geometry.
	TRACE_ZoneChanges   = 0x08, // Check collision with soft zone boundaries.
	TRACE_Others        = 0x10, // Check collision with all other kinds of actors.
	TRACE_OnlyProjActor = 0x20, // Check collision with other actors only if they are projectile targets

	// Combinations.
	TRACE_VisBlocking   = TRACE_Level | TRACE_Movers,
	TRACE_AllColliding  = TRACE_Pawns | TRACE_Movers | TRACE_Level | TRACE_Others,
	TRACE_AllEverything = TRACE_Pawns | TRACE_Movers | TRACE_Level | TRACE_ZoneChanges | TRACE_Others,
	TRACE_ProjTargets	= TRACE_OnlyProjActor | TRACE_AllColliding,
};

//
// Level updating.
//
#if _MSC_VER
enum ELevelTick
{
	LEVELTICK_TimeOnly		= 0,	// Update the level time only.
	LEVELTICK_ViewportsOnly	= 1,	// Update time and viewports.
	LEVELTICK_All			= 2,	// Update all.
};
#endif



class DLL_IMPORT ULevel : public ULevelBase
{
public:
	enum {NUM_LEVEL_TEXT_BLOCKS=16};


	TArray<FReachSpec>		ReachSpecs;
	UModel*					Model;
	UTextBuffer*			TextBlocks[NUM_LEVEL_TEXT_BLOCKS];
	FTime                   TimeSeconds;
	TMap<FString,FString>	TravelInfo;

	FCollisionHashBase* Hash;
	class FMovingBrushTrackerBase* BrushTracker;
	AActor* FirstDeleted;
	struct FActorLink* NewlySpawned;
	UBOOL InTick, Ticked;
	INT iFirstDynamicActor, iFirstNetRelevantActor, NetTag;
	BYTE ZoneDist[64][64];

	INT NetTickCycles, NetDiffCycles, ActorTickCycles, AudioTickCycles, FindPathCycles, MoveCycles, NumMoves, NumReps, NumPV, GetRelevantCycles, NumRPC, SeePlayer, Spawning, Unused;


	ULevel(ULevel const &);
	ULevel(UEngine *,int);
	static void * operator new(unsigned int,UObject *,unsigned short *,unsigned long);
	static void * operator new(unsigned int,UObject *,unsigned short const *,unsigned long);
	static void * operator new(unsigned int,UObject *,FName,unsigned long);
	static void * operator new(unsigned int,enum EInternal *);
	ULevel & operator=(ULevel const &);
	ABrush * Brush(void);
	void CheckDefaultGameType(unsigned short const *);
	int EditorDestroyActor(AActor *);
	int GetActorIndex(AActor *);
	ALevelInfo * GetLevelInfo(void);
	AZoneInfo * GetZoneActor(int);
	static void InternalConstructor(void *);
	void LoadSounds(void);
	static UClass * StaticClass(void);
	int ToFloor(AActor *,int,AActor *);
	void UpdateTerrainArrays(void);

	virtual void Modify(int);
	virtual void SetActorCollision(int,int);
	virtual void ResetStaticFilterState(AActor *);
	virtual void Tick(enum ELevelTick,float);
	virtual void TickNetClient(float);
	virtual void TickNetServer(float);
	virtual int ServerTickClients(float);
	virtual void ReconcileActors(void);
	virtual void RememberActors(void);
	virtual int Exec(unsigned short const *,FOutputDevice &);
	virtual void ShrinkLevel(void);
	virtual void CompactActors(void);
	virtual int Listen(FString &);
	virtual int IsServer(void);
	virtual int MoveActor(AActor *,FVector,FRotator,struct FCheckResult &,int,int,int,int);
	virtual int FarMoveActor(AActor *,FVector,int,int,int);
	virtual int DestroyActor(AActor *,int);
	virtual void CleanupDestroyed(int);
	virtual AActor * SpawnActor(UClass *,FName,FVector,FRotator,AActor *,int,int,AActor *,APawn *,int);
	virtual ABrush * SpawnBrush(void);
	virtual void SpawnViewActor(UViewport *);
	virtual APlayerController * SpawnPlayActor(UPlayer *,enum ENetRole,FURL const &,FString &);
	virtual int FindSpot(FVector,FVector &);
	virtual int CheckSlice(FVector &,FVector,int &);
	virtual int CheckEncroachment(AActor *,FVector,FRotator,int);
	virtual int SinglePointCheck(struct FCheckResult &,FVector const &,FVector const &,unsigned long,ALevelInfo *,int);
	virtual int EncroachingWorldGeometry(struct FCheckResult &,FVector,FVector,unsigned long,ALevelInfo *);
	virtual int SingleLineCheck(struct FCheckResult &,AActor *,FVector const &,FVector const &,unsigned long,FVector);
	virtual struct FCheckResult * MultiPointCheck(FMemStack &,FVector const &,FVector const &,unsigned long,ALevelInfo *,int,int,int);
	virtual struct FCheckResult * MultiLineCheck(FMemStack &,FVector const &,FVector const &,FVector const &,ALevelInfo *,unsigned long,AActor *);
	virtual void DetailChange(enum EDetailMode);
	virtual int TickDemoRecord(float);
	virtual int TickDemoPlayback(float);
	virtual void UpdateTime(ALevelInfo *);
	virtual int IsPaused(void);
	virtual void WelcomePlayer(UNetConnection *,unsigned short *);
	virtual void BuildRenderData(void);
	virtual int IsAudibleAt(FVector,FVector,AActor *,enum ESoundOcclusion);
	virtual float CalculateRadiusMultiplier(int,int);

protected:
	ULevel(void);
private:
	static UClass PrivateStaticClass;
};


/*-----------------------------------------------------------------------------
	Iterators.
-----------------------------------------------------------------------------*/

//
// Iterate through all static brushes in a level.
//
class FStaticBrushIterator
{
public:
	// Public constructor.
	FStaticBrushIterator( ULevel *InLevel )
	:	Level   ( InLevel   )
	,	Index   ( -1        )
	{
		checkSlow(Level!=NULL);
		++*this;
	}
	void operator++()
	{
		/*do
		{
			if( ++Index >= Level->Actors.Num() )
			{
				Level = NULL;
				break;
			}
		} while
		(	!Level->Actors(Index)
		||	!Level->Actors(Index)->IsStaticBrush() );*/
	}
	ABrush* operator* ()
	{
	/*	checkSlow(Level);
		checkSlow(Index<Level->Actors.Num());
		checkSlow(Level->Actors(Index));
		checkSlow(Level->Actors(Index)->IsStaticBrush());
		return (ABrush*)Level->Actors(Index);*/
	}
	ABrush* operator-> ()
	{
	/*	checkSlow(Level);
		checkSlow(Index<Level->Actors.Num());
		checkSlow(Level->Actors(Index));
		checkSlow(Level->Actors(Index)->IsStaticBrush());
		return (ABrush*)Level->Actors(Index);*/
	}
	operator UBOOL()
	{
		return Level != NULL;
	}
protected:
	ULevel*		Level;
	INT		    Index;
};

/*-----------------------------------------------------------------------------
	The End.
-----------------------------------------------------------------------------*/
