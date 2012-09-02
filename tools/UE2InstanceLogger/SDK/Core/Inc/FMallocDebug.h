/*=============================================================================
	FMallocDebug.h: Debug memory allocator.
	Copyright 1997-1999 Epic Games, Inc. All Rights Reserved.

	Revision history:
		* Created by Tim Sweeney
=============================================================================*/

// Debug memory allocator.
class FMallocDebug : public FMalloc
{
private:
	// Structure for memory debugging.
	struct FMemDebugBase
	{
		TCHAR*		Tag;
		SIZE_T		Size;
		INT			RefCount;
	};
	typedef TDoubleLinkedList<FMemDebugBase> FMemDebug;

	// Variables.
	FMemDebug* GFirstDebug;
	UBOOL MemInited;
	 
public:
	// FMalloc interface.
	FMallocDebug()
	:	GFirstDebug	( NULL )
	,	MemInited	( 0 )
	{}
	void* Malloc( DWORD Size, const TCHAR* Tag )
	{
		guard(FMallocDebug::Malloc);
		checkSlow(MemInited);
		check(Size>0);

		FMemDebug* Ptr = (FMemDebug*)malloc( sizeof(FMemDebug) + Size );
		check(Ptr);
		TCHAR* DupTag = (TCHAR*)malloc((appStrlen(Tag)+1)*sizeof(TCHAR));
		appStrcpy( DupTag, Tag );
		Ptr->Tag      = DupTag;
		Ptr->RefCount = 1;
		Ptr->Size     = Size;
		Ptr->Next     = GFirstDebug;
		Ptr->PrevLink = &GFirstDebug;
		if( GFirstDebug )
		{
			check(GFirstDebug->PrevLink==&GFirstDebug);
			GFirstDebug->PrevLink = &Ptr->Next;
		}
		GFirstDebug = Ptr;

		return Ptr + 1;
		unguard;
	}
	void* Realloc( void* InPtr, DWORD NewSize, const TCHAR* Tag )
	{
		guard(FMallocDebug::Realloc);
		checkSlow(MemInited);
		check(NewSize>=0);

		FMemDebug* Ptr = (FMemDebug*)InPtr;
		FMemDebug* Result;
		if( Ptr && NewSize )
		{
			Ptr--;
			check(Ptr->RefCount==1);
			check(Ptr->Size>0);
			Result = (FMemDebug*)appMalloc( NewSize, Tag )-1;
			appMemcpy( Result+1, Ptr+1, Min(Ptr->Size,NewSize) );
			appFree( Ptr+1 );
			Result++;
		}
		else if( NewSize )
		{
			Result = (FMemDebug*)appMalloc( NewSize, Tag );
		}
		else
		{
			if( Ptr )
				appFree( Ptr );
			Result = NULL;
		}
		return Result;

		unguardf(( TEXT("%08X %i %s"), (INT)InPtr, NewSize, Tag ));
	}
	void Free( void* InPtr )
	{
		guard(FMallocDebug::Free);
		checkSlow(MemInited);
		check(InPtr);

		FMemDebug* Ptr = (FMemDebug*)InPtr - 1;
		check(Ptr->Size>0);
		check(Ptr->RefCount==1);
		Ptr->Size = 0;
		Ptr->RefCount = 0;

		check(Ptr->PrevLink);
		check(*Ptr->PrevLink==Ptr);
		*Ptr->PrevLink = Ptr->Next;
		if( Ptr->Next )
			Ptr->Next->PrevLink = Ptr->PrevLink;

		free( Ptr->Tag );
		free( Ptr );

		unguard;
	}
	void DumpAllocs()
	{
		guard(FMallocDebug::DumpAllocs);
		INT Count=0;
		debugf( TEXT("Unfreed memory:") );
		for( FMemDebug* Ptr=GFirstDebug; Ptr; Ptr=Ptr->Next )
		{
			TCHAR Temp[256];
			appStrncpy( Temp, (TCHAR*)(Ptr+1), Min((SIZE_T)255,Ptr->Size) );
			debugf( TEXT("   % 10i %s <%s>"), Ptr->Size, Ptr->Tag, Temp );
			Count += Ptr->Size;
		}
		debugf( TEXT("End of list: %i Bytes still allocated"), Count );
		unguard;
	}
	void HeapCheck()
	{
		guard(FMallocDebug::HeapCheck);
		for( FMemDebug** Link = &GFirstDebug; *Link; Link=&(*Link)->Next )
			check(*(*Link)->PrevLink==*Link);
		unguard;
	}
	SIZE_T Msize( void* Ptr )
	{
		return _msize( Ptr );
	}
	void Init()
	{
		guard(FMallocDebug::Init);
		check(!MemInited);
		MemInited=1;
		unguard;
	}
	void Exit()
	{
		guard(FMallocDebug::Exit);
		check(MemInited);
		MemInited=0;
		unguard;
	}
};

/*-----------------------------------------------------------------------------
	The End.
-----------------------------------------------------------------------------*/
