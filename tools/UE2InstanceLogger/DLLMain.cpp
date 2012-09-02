#include <Windows.h>
#include <stdio.h>
#include <direct.h>
#include <string>
#include <sstream>
#include <fstream>

#include "Utils.h"


using namespace std;

char cBuffer[512] = { NULL };


#define SDK_BASE_DIR				"C:\\Hack"
#define	GAME_NAME_S					"UE2"

DWORD		Offset_Name				= 0x2C;


template < class T > struct TArray
{
	T*		Data;
	DWORD	Num;
	DWORD	Max;
};

struct UObject
{
	UCHAR	Unknown		[ 0x2C ];	// unknowed data
	DWORD	NameIndex;				// struct FName
};

struct FNameEntry
{
	UCHAR	Unknown		[ 0x10 ];	// unknowed data
	char	Name		[ 1 ];		// name
};


TArray< UObject* >*		GObjObjects;
TArray< FNameEntry* >*	Names;


// funcs
PCHAR GetName ( UObject* Object )
{
	DWORD NameIndex	= *(PDWORD) ( (DWORD) Object + Offset_Name );

	//DWORD NameIndexFix = NameIndex * 3;

	if ( NameIndex < 0 || NameIndex > Names->Num )
	{
		static char ret[256];
		sprintf_s ( ret, "INVALID NAME INDEX : %i > %i", NameIndex, Names->Num );
		return ret;
	}
	else
	{
		//return Names->Data[ NameIndexFix ]->Name;
		return Names->Data[ NameIndex ]->Name;
	}
}

void ObjectDump()
{
	// log file
	FILE* Log = NULL;
	sprintf_s ( cBuffer, "%s\\%s\\ObjectDump.txt", SDK_BASE_DIR, GAME_NAME_S );
	fopen_s ( &Log, cBuffer, "w+" );

	for ( DWORD i = 0x0; i < GObjObjects->Num; i++ )
	{
		// check if it's a valid object
		if ( ! GObjObjects->Data[ i ] ) { continue; }
		
		// log the object
		fprintf ( Log, "UObject[%06i] %-50s 0x%X\n", i, GetName ( GObjObjects->Data[ i ] ), GObjObjects->Data[ i ] );
	}

	// close log
	fclose ( Log );
}

void NameDump()
{
	// log file
	FILE* Log = NULL;	
	sprintf_s ( cBuffer, "%s\\%s\\NameDump.txt", SDK_BASE_DIR, GAME_NAME_S );
	fopen_s ( &Log, cBuffer, "w+" );

	//for ( DWORD i = 0x0; i < Names->Num; i += 0x3 )
	for ( DWORD i = 0x0; i < Names->Num; i++ )
	{
		// check if it's a valid object
		if ( ! Names->Data[ i ] ) { continue; }
		
		// log the object
		fprintf ( Log, "Name[%06i] %s: \t\t0x%X\n", i, Names->Data[ i ]->Name, Names->Data[ i ] );
	}

	// close log
	fclose ( Log );
}

void onAttach()
{
	while ( !GetAsyncKeyState( VK_HOME ) )
		Sleep( 100 );

	// mkdir base dir
	_mkdir ( SDK_BASE_DIR );

	// mkdir sdk dir
	sprintf_s ( cBuffer, "%s\\%s", SDK_BASE_DIR, GAME_NAME_S );
	_mkdir ( cBuffer );

	while(GetModuleHandle("Engine.dll") == NULL && GetModuleHandle("Core.dll") == NULL) {
		Sleep(200);
	}
    
	DWORD* Objectp		= (DWORD*)GetProcAddress(GetModuleHandle("Engine.dll"),"?MasterProcessPostRender@UInteractionMaster@@QAEXPAVUCanvas@@@Z");
	DWORD* Namesp		= (DWORD*)GetProcAddress(GetModuleHandle("Engine.dll"),"?MasterProcessPostRender@UInteractionMaster@@QAEXPAVUCanvas@@@Z");

	GObjObjects = (TArray< UObject* >*)Objectp;
	Names		= (TArray< FNameEntry* >*)Namesp;

	NameDump();
	ObjectDump();
}


// entry point
BOOL WINAPI DllMain ( HMODULE hModule, DWORD dwReason, LPVOID lpReserved )
{
	switch ( dwReason )
	{
		case DLL_PROCESS_ATTACH:
			CreateThread ( NULL, 0, ( LPTHREAD_START_ROUTINE ) onAttach, NULL, 0, NULL );
			return true;
		break;

		case DLL_PROCESS_DETACH:
			return true;
		break;
	}
}
