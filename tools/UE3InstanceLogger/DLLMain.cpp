#include <Windows.h>
#include <stdio.h>
#include "TFL_HT.h"

#define Pattern
//#define offset

#define GObjects_Pattern			"\xa1\x00\x00\x00\x00\x8b\x00\x00\x8b\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask				"x????x??x??xxxxx"
#define GObjects_Offset				0x1

#define GNames_Pattern				"\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask					"xx????xxxxx"
#define GNames_Offset				0x2

#ifdef Pattern
	DWORD GObjObjects_offset		= NULL;
#endif

#ifdef Pattern
	DWORD Names_offset				= NULL;
#endif

#ifdef offset	
	DWORD	GObjObjects_offset		= 0x13465A54;
	DWORD	Names_offset			= 0x13454180;
#endif

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

// Objects and Names arrays
TArray< UObject* >*		GObjObjects = ( TArray< UObject* >* )		GObjObjects_offset;		// global objects
TArray< FNameEntry* >*	Names		= ( TArray< FNameEntry* >* )	Names_offset;			// global names

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
	fopen_s ( &Log, "ObjectDump.txt", "w+" );
	
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
	fopen_s ( &Log, "NameDump.txt", "w+" );
	
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

void GetOffsetPositions(void)
{
	char* Object_Name			= "Name";
	char* Object_Outer			= "Outer";
	char* Object_Class			= "Class";
	char* Object_Object			= "Object";
	char* Object_Linker			= "Linker";

	int Object_Start			= 0;
	DWORD Object_ClassPtr		= 0;
	DWORD Offset_MaxObjects		= 0x4;

	DWORD Offset_Outer			= 0;
	DWORD Offset_Class			= 0;
	DWORD Offset_Max			= 0x150;
	DWORD Offset_PropertySize	= 0;
	DWORD Offset_PropertyOffset = 0;

	FILE* pPropFile = fopen("Property_Dump.txt", "w+");
	for (int i = 0; i < GObjObjects->Num; i++)
	{
		DWORD Object = (DWORD)  GObjObjects->Data[i];
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

void Init_Core()
{
#ifdef Pattern
	MODULEINFO miGame = TFLHACKT00LS::GetModuleInfo ( NULL );
	
	GObjObjects_offset	= *(unsigned long*) ( TFLHACKT00LS::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GObjects_Pattern, (char*) GObjects_Mask ) + GObjects_Offset );
	Names_offset		= *(unsigned long*) ( TFLHACKT00LS::FindPattern( (unsigned long) miGame.lpBaseOfDll, miGame.SizeOfImage, (unsigned char*) GNames_Pattern, (char*) GNames_Mask ) + GNames_Offset );
#endif
}

void onAttach()
{
	Init_Core();
	Sleep ( 100 );

	GetOffsetPositions();
	Sleep ( 100 );

	NameDump();
	Sleep ( 100 );

	ObjectDump();
}

// entry point
BOOL WINAPI DllMain ( HMODULE hModule, DWORD dwReason, LPVOID lpReserved )
{
	switch ( dwReason )
	{
		case DLL_PROCESS_ATTACH:
			DisableThreadLibraryCalls ( hModule );
			CreateThread ( NULL, 0, ( LPTHREAD_START_ROUTINE ) onAttach, NULL, 0, NULL );
			return true;
		break;

		case DLL_PROCESS_DETACH:
			return true;
		break;
	}
}
