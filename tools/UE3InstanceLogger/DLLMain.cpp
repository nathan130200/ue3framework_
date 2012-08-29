#include <Windows.h>
#include <stdio.h>
#include <direct.h>
#include "TFL_HT.h"

char cBuffer[512] = { NULL };

#define Pattern
//#define offset
#define GA

#define SDK_BASE_DIR				"C:\\Hack"
#define	GAME_NAME_S					"GA"

DWORD		Offset_Name				= 0x2C;

#ifdef Pattern
#define GObjects_Pattern1			"\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask1				"x????x??x??xxxxx"
#define GObjects_Offset1			0x1

#define GNames_Pattern1				"\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask1				"xx????xxxxx"
#define GNames_Offset1				0x2

#define GObjects_Pattern2			"\x8b\x00\x00\x00\x00\x00\x8b\x04\x00\x8b\x40\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask2				"x?????xx?xx?xxxxx"
#define GObjects_Offset2			0x2

#define GNames_Pattern2				"\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask2				"xx????xxxxx"
#define GNames_Offset2				0x2

#define GObjects_Pattern3			"\x8b\x00\x00\x00\x00\x00\x8b\x04\x00\x8b\x40\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask3				"x?????xx?xx?xxxxx"
#define GObjects_Offset3			0x2

#define GNames_Pattern3				"\x8b\x35\x00\x00\x00\x00\x8b\x0d\x00\x00\x00\x00\x83\xc4\x08" 
#define GNames_Mask3				"xx????xx????xxx"
#define GNames_Offset3				0x2

#endif

#ifdef Pattern
	DWORD		GObjObjects_offset		= NULL;
	DWORD		Names_offset			= NULL;

	DWORD		GObjObjects_offset1		= NULL;
	DWORD		Names_offset1			= NULL;

	DWORD		GObjObjects_offset2		= NULL;
	DWORD		Names_offset2			= NULL;

	DWORD		GObjObjects_offset3		= NULL;
	DWORD		Names_offset3			= NULL;
#endif

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

// Objects and Names arrays
TArray< UObject* >*		GObjObjects;
TArray< FNameEntry* >*	Names;

#ifdef offset
	#ifdef GA
		// Global Agenda
		GObjObjects = ( TArray< UObject* >* )		0x13465A54; // 8/27/2012
		Names		= ( TArray< FNameEntry* >* )	0x13454180; // 8/27/2012
	#endif
#endif

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
		fprintf ( Log, "Name[%06i] %s\n", i, Names->Data[ i ]->Name );
	}

	// close log
	fclose ( Log );
}

void GetOffsetPositions()
{
	char* Object_Name			= "Name";
	char* Object_Outer			= "Outer";
	char* Object_Class			= "Class";
	char* Object_Object			= "Object";

	int Object_Start = 0;
	DWORD Object_ClassPtr = 0;
	DWORD Offset_MaxObjects = 0x4;

	DWORD Offset_Outer			= 0;
	DWORD Offset_Class			= 0;
	DWORD Offset_Name			= 0x2C;
	DWORD Offset_Max			= 0x150;
	DWORD Offset_PropertySize	= 0;
	DWORD Offset_PropertyOffset = 0;

	sprintf_s ( cBuffer, "%s\\%s\\Property_Dump.txt", SDK_BASE_DIR, GAME_NAME_S );
	FILE* pPropFile = fopen(cBuffer, "w+");
	for (int i = 0; i < GObjObjects->Num; i++)
	{
		DWORD Object = (DWORD) GObjObjects->Data[i];
		if (Object == NULL)
			continue;

		DWORD Name = *(DWORD*)((DWORD) Object + (DWORD) Offset_Name);
		if (!strcmp(Names->Data[Name]->Name, Object_Name))
		{
			for (DWORD j = Offset_Name; j < Offset_Max; j++)
			{
				DWORD Offset = *(DWORD*)((DWORD) Object + (DWORD) j);
				if (Offset == Offset_Name)
				{
					Offset_PropertyOffset = j;
					Object_Start = i - (Offset_Max / 4);
					goto jmpOne;
				}
			}
		}
	}

jmpOne:
	if (!Offset_PropertyOffset)
		return;

	for (unsigned long i = Object_Start; i < GObjObjects->Num; i++)
	{
		DWORD Object = (DWORD) GObjObjects->Data[i];
		if (Object == NULL)
			continue;

		DWORD Name = *(DWORD*)((DWORD) Object + (DWORD) Offset_Name);
		if (!Offset_Outer)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_Outer))
			{
				Offset_Outer = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}

		if (!Offset_Class)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_Class))
			{
				Offset_Class = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}
	}

	if (!Offset_Outer || !Offset_Class)
		return;

	for (unsigned long i = 0; i < GObjObjects->Num; i++)
	{
		DWORD Object = (DWORD) GObjObjects->Data[i];
		if (Object == NULL)
			continue;

		DWORD ObjectName = *(DWORD*)((DWORD) Object + (DWORD) Offset_Name);
		DWORD Class = *(DWORD*)((DWORD) Object + (DWORD) Offset_Class);
		DWORD ClassOffset = *(DWORD*)((DWORD) Class + (DWORD) Offset_Name);

		if (!strcmp(Names->Data[ClassOffset]->Name, Object_Class) && !strcmp(Names->Data[ObjectName]->Name, Object_Object))
		{
			Object_ClassPtr = Object;
			goto jmpTwo;
		}
	}

jmpTwo:
	if (!Object_ClassPtr)
		return;

	for (unsigned long i = 0; i < Offset_MaxObjects; i++)
	{
		DWORD Temp = (Offset_Class + 0x4 + (i * 0x4));
		for (unsigned long j = Offset_Class; j < Offset_Max; j++)
		{
			DWORD Offset = *(DWORD*)((DWORD) Object_ClassPtr + (DWORD) j);
			if (Offset == Temp)
			{
				Offset_PropertySize = j;
				goto jmpThree;
			}
		}
	}

jmpThree:
	if (!Offset_PropertySize)
		return;

	fprintf(pPropFile, "\nUObject:\n");
	fprintf(pPropFile, "\t- Outer\t\t\t0x%X\n",			Offset_Outer);
	fprintf(pPropFile, "\t- Name\t\t\t0x%X\n",			Offset_Name);
	fprintf(pPropFile, "\t- Class\t\t\t0x%X\n",			Offset_Class);
	fprintf(pPropFile, "\nUProperty:\n");
	fprintf(pPropFile, "\t- PropertyOffset\t0x%X\n",	Offset_PropertyOffset);
	fprintf(pPropFile, "\nUStruct:\n");
	fprintf(pPropFile, "\t- PropertySize\t\t0x%X\n",	Offset_PropertySize);
	fclose(pPropFile);
}

BOOL Init_Core()
{
#ifdef Pattern
	MODULEINFO miGame = TFLHACKT00LS::GetModuleInfo ( NULL );

	GObjObjects_offset1	= *(unsigned long*) ( TFLHACKT00LS::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GObjects_Pattern1, (char*) GObjects_Mask1 ) + GObjects_Offset1 );
	Names_offset1		= *(unsigned long*) ( TFLHACKT00LS::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GNames_Pattern1, (char*) GNames_Mask1 ) + GNames_Offset1 );
	
	if(GObjObjects_offset1 != NULL && Names_offset1 != NULL)
	{
		sprintf_s ( cBuffer, "%s\\%s\\offset_Dump1.txt", SDK_BASE_DIR, GAME_NAME_S );
		FILE* poffsetlog = fopen(cBuffer, "w+");

		fprintf(poffsetlog, "GObjObjects_Pattern	1\n");
		fprintf(poffsetlog, "Names_Pattern			1\n");

		fprintf(poffsetlog, "GObjObjects_offset		0x%X\n", GObjObjects_offset1);
		fprintf(poffsetlog, "Names_offset			0x%X\n", Names_offset1);

		fflush(poffsetlog);
		fclose(poffsetlog);

		GObjObjects		= ( TArray< UObject* >* )		GObjObjects_offset1;		// global objects
		Names			= ( TArray< FNameEntry* >* )	Names_offset1;				// global names

		return true;
	}

	GObjObjects_offset2	= *(unsigned long*) ( TFLHACKT00LS::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GObjects_Pattern2, (char*) GObjects_Mask2 ) + GObjects_Offset2 );
	Names_offset2		= *(unsigned long*) ( TFLHACKT00LS::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GNames_Pattern2, (char*) GNames_Mask2 ) + GNames_Offset2 );
	
	if(GObjObjects_offset2 != NULL && Names_offset2 != NULL)
	{
		sprintf_s ( cBuffer, "%s\\%s\\offset_Dump2.txt", SDK_BASE_DIR, GAME_NAME_S );
		FILE* poffsetlog = fopen(cBuffer, "w+");

		fprintf(poffsetlog, "GObjObjects_Pattern	2\n");
		fprintf(poffsetlog, "Names_Pattern			2\n");

		fprintf(poffsetlog, "GObjObjects_offset		0x%X\n", GObjObjects_offset2);
		fprintf(poffsetlog, "Names_offset			0x%X\n", Names_offset2);

		fflush(poffsetlog);
		fclose(poffsetlog);

		GObjObjects		= ( TArray< UObject* >* )		GObjObjects_offset2;		// global objects
		Names			= ( TArray< FNameEntry* >* )	Names_offset2;			// global names

		return true;
	}

	GObjObjects_offset3	= *(unsigned long*) ( TFLHACKT00LS::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GObjects_Pattern3, (char*) GObjects_Mask3 ) + GObjects_Offset3 );
	Names_offset3		= *(unsigned long*) ( TFLHACKT00LS::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GNames_Pattern3, (char*) GNames_Mask3 ) + GNames_Offset3 );

	if(GObjObjects_offset3 != NULL && Names_offset3 != NULL)
	{
		sprintf_s ( cBuffer, "%s\\%s\\offset_Dump3.txt", SDK_BASE_DIR, GAME_NAME_S );
		FILE* poffsetlog = fopen(cBuffer, "w+");

		fprintf(poffsetlog, "GObjObjects_Pattern	3\n");
		fprintf(poffsetlog, "Names_Pattern			3\n");

		fprintf(poffsetlog, "GObjObjects_offset		0x%X\n", GObjObjects_offset3);
		fprintf(poffsetlog, "Names_offset			0x%X\n", Names_offset3);

		fflush(poffsetlog);
		fclose(poffsetlog);

		GObjObjects		= ( TArray< UObject* >* )		GObjObjects_offset3;		// global objects
		Names			= ( TArray< FNameEntry* >* )	Names_offset3;				// global names

		return true;
	}
#endif
	 return false;
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

#ifdef Pattern
    if ( Init_Core() )
    {
#endif
		GetOffsetPositions();
		NameDump();
		ObjectDump();

#ifdef Pattern
	}
#endif
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
