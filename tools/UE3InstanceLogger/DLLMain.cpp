#include <Windows.h>
#include <stdio.h>
#include <direct.h>
#include <string>
#include <sstream>
#include <fstream>

#include "Utils.h"

using namespace std;

char cBuffer[512] = { NULL };

#define Pattern
//#define offset
//#define Bulletstorm

#define SDK_BASE_DIR				"C:\\Hack"
#define	GAME_NAME_S					"UE3"

//DWORD		Offset_Name				= 0x28;
DWORD		Offset_Name				= 0x2C;
//DWORD		Offset_Name				= 0x30;
//DWORD		Offset_Name				= 0xFC;

#ifdef Pattern
#define GObjects_Pattern1			"\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask1  			"x????x??x??xxxxx"
#define GObjects_Offset1			0x1

#define GNames_Pattern1 		    "\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask1				"xx????xxxxx"
#define GNames_Offset1  			0x2

#define GObjects_Pattern2			"\x8b\x00\x00\x00\x00\x00\x8b\x04\x00\x8b\x40\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask2				"x?????xx?xx?xxxxx"
#define GObjects_Offset2			0x2

#define GNames_Pattern2 			"\x8b\x35\x00\x00\x00\x00\x8b\x0d\x00\x00\x00\x00\x83\xc4\x08" 
#define GNames_Mask2				"xx????xx????xxx"
#define GNames_Offset2				0x2

#define GObjects_Pattern3			"\x8b\x00\x00\x00\x00\x00\x8b\x04\x00\x8b\x40\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask3				"x?????xx?xx?xxxxx"
#define GObjects_Offset3			0x2

#define GNames_Pattern3				"\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask3				"xx????xxxxx"
#define GNames_Offset3 				0x2
#endif

bool Pattern1		= false;
bool Pattern2		= false;
bool Pattern3		= false;
bool isnotPattern	= false;

BOOL Init_Core();

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

template < class T > struct TArray2 
{
	T*		Data;
	DWORD	Num;
	DWORD	Max;
};

struct UObject2
{
	UCHAR	Unknown		[ 0x2C ];	// unknowed data
	DWORD	NameIndex;				// struct FName
};

struct FNameEntry2
{
	UCHAR	Unknown		[ 0x10 ];	// unknowed data
	char	Name		[ 1 ];		// name
};

#ifdef Pattern
// Objects and Names arrays
	TArray2< UObject2* >*		GObjObjects;
	TArray2< FNameEntry2* >*	Names;
#endif

#ifdef offset
	#ifdef GA
		// Global Agenda
		TArray2< UObject2* >*		GObjObjects = ( TArray2< UObject2* >* )			0x13465A54;		// 8/27/2012
		TArray2< FNameEntry2* >*	Names		= ( TArray2< FNameEntry2* >* )		0x13454180;		// 8/27/2012
	#endif

	#ifdef CC
		// CrimeCraft GangWars
		TArray2< UObject2* >*		GObjObjects		= ( TArray2< UObject2* >* )		0x2675DFC;		// 8/28/2012
		TArray2< FNameEntry2* >*	Names			= ( TArray2< FNameEntry2* >* )	0x2675D10;		// 8/28/2012
	#endif

	#ifdef APB
		// APB Reloaded
		TArray2< UObject2* >*		GObjObjects		= ( TArray2< UObject2* >* )		0x1269BEFC;		// 8/28/2012
		TArray2< FNameEntry2* >*	Names			= ( TArray2< FNameEntry2* >* )	0x1269BBB8;		// 8/28/2012
	#endif

	#ifdef TWFC
		// Transformers War for Cybertron
		TArray2< UObject2* >*		GObjObjects		= ( TArray2< UObject2* >* )		0x12B2F0A4;		// 8/30/2012
		TArray2< FNameEntry2* >*	Names			= ( TArray2< FNameEntry2* >* )	0x12B2F0F4;		// 8/30/2012
	#endif

	#ifdef T0
		// Transformers War for Cybertron
		TArray2< UObject2* >*		GObjObjects		= ( TArray2< UObject2* >* )		0x2278E7C;		// 8/31/2012
		TArray2< FNameEntry2* >*	Names			= ( TArray2< FNameEntry2* >* )	0x2278E4C;		// 8/31/2012
	#endif

	#ifdef test
		// Transformers War for Cybertron
		TArray2< UObject2* >*		GObjObjects		= ( TArray2< UObject2* >* )		0x14D41EC;		// 8/31/2012
		TArray2< FNameEntry2* >*	Names			= ( TArray2< FNameEntry2* >* )	0x14C1EC8;		// 8/31/2012
	#endif

	#ifdef Bulletstorm
		// Bulletstorm
		TArray2< UObject2* >*		GObjObjects		= ( TArray2< UObject2* >* )		0x171999C;		// 8/31/2012
		TArray2< FNameEntry2* >*	Names			= ( TArray2< FNameEntry2* >* )	0x16D7664;		// 8/31/2012
	#endif

		
#endif

ofstream	ofile;
void add_log( char* LOG_FILE, const char *fmt, ... )
{
	ofile.open( LOG_FILE, ios::app );

	va_list va_alist;
	char logbuf[256] = {0};

	va_start( va_alist, fmt );
	vsnprintf( logbuf + strlen(logbuf), sizeof(logbuf) - strlen(logbuf), fmt, va_alist );
	va_end( va_alist );

	ofile << logbuf << endl;

	ofile.close();
}

// funcs
PCHAR GetName ( UObject2* Object )
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
	if(isnotPattern)
		return;

	MODULEINFO miGame = Utils::GetModuleInfo ( NULL );

	// log file
	FILE* Log = NULL;
	sprintf_s ( cBuffer, "%s\\%s\\ObjectDump.txt", SDK_BASE_DIR, GAME_NAME_S );
	fopen_s ( &Log, cBuffer, "w+" );

	sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
	add_log( cBuffer, "void ObjectDump()\nGObjObjects->Num: %i", GObjObjects->Num );

	fprintf ( Log, "(0x%X)\n", (DWORD)miGame.lpBaseOfDll);

	for ( DWORD i = 0x0; i < GObjObjects->Num; i++ )
	{
		// check if it's a valid object
		if ( ! GObjObjects->Data[ i ] ) { continue; }
		

		// log the object
		fprintf ( Log, "UObject[%06i] %-50s 0x%X (0x%X) (0x%X)\n", i, GetName ( GObjObjects->Data[ i ] ), GObjObjects->Data[ i ], (DWORD)miGame.lpBaseOfDll - (DWORD)GObjObjects->Data[ i ], (DWORD)GObjObjects->Data[ i ] - (DWORD)miGame.lpBaseOfDll);
	}

	// close log
	fclose ( Log );
}

void NameDump()
{
	if(isnotPattern)
		return;

	// log file
	FILE* Log = NULL;	
	sprintf_s ( cBuffer, "%s\\%s\\NameDump.txt", SDK_BASE_DIR, GAME_NAME_S );
	fopen_s ( &Log, cBuffer, "w+" );

	sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
	add_log( cBuffer, "void NameDump()\nNames->Num: %i", Names->Num );	

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

void GetOffsetPositions()
{
	char* Object_Name					= "Name";
	char* Object_Outer					= "Outer";
	char* Object_Class					= "Class";
	char* Object_Object					= "Object";
	char* Object_Linker					= "Linker";
	char* Object_LinkerIndex			= "LinkerIndex";
	char* Object_VfTableObject			= "VfTableObject";
	char* Object_ObjectInternalInteger	= "ObjectInternalInteger";
	char* Object_HashNext				= "HashNext";
	char* Object_HashOuterNext			= "HashOuterNext";
	char* Object_StateFrame				= "StateFrame";
	char* Object_ObjectArchetype		= "ObjectArchetype";
	char* Object_Next					= "NextEvaluator";
	char* Object_ObjectFlags			= "ObjectFlags";
	char* Object_NetIndex				= "NetIndex";

	int Object_Start = 0;
	DWORD Object_ClassPtr = 0;
	DWORD Offset_MaxObjects = 0x4;

	DWORD Offset_1					    = 0;
	DWORD Offset_NetIndex				= 0;
	DWORD Offset_ObjectFlags			= 0;
	DWORD Offset_Next					= 0;
	DWORD Offset_ObjectArchetype		= 0;
	DWORD Offset_StateFrame				= 0;
	DWORD Offset_HashOuterNext			= 0;
	DWORD Offset_HashNext				= 0;
	DWORD Offset_ObjectInternalInteger	= 0;
	DWORD Offset_VfTableObject			= 0;
	DWORD Offset_LinkerIndex			= 0;
	DWORD Offset_Linker					= 0;
	DWORD Offset_Outer					= 0;
	DWORD Offset_Class					= 0;
	//DWORD Offset_Name					= 0x28;
	DWORD Offset_Name					= 0x2C;
	//DWORD Offset_Name					= 0x30;
	DWORD Offset_Max					= 0x150;
	DWORD Offset_PropertySize			= 0;
	DWORD Offset_PropertyOffset			= 0;

	sprintf_s ( cBuffer, "%s\\%s\\Propert_Dump.txt", SDK_BASE_DIR, GAME_NAME_S );
	FILE* pPropFile = fopen(cBuffer, "w+");

	sprintf_s ( cBuffer, "%s\\%s\\Propert_Dump2.txt", SDK_BASE_DIR, GAME_NAME_S );
	FILE* pPropFile2 = fopen(cBuffer, "w+");

	sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
	add_log( cBuffer, "void GetOffsetPositions()\nGObjObjects->Num: %i", GObjObjects->Num );	


	if(GObjObjects->Num < 60171 && Pattern1 || Pattern2 || Pattern3)
	{
		Init_Core();
		isnotPattern = true;
		return;
	}


	for (int i = 0; i < GObjObjects->Num; i++)
	{
		DWORD Object = (DWORD) GObjObjects->Data[i];
		if (Object == NULL)
		{
			sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
			add_log(cBuffer, "Object has returned NULL on step 1" );
			continue;
		}

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
	{
		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log(cBuffer, "Offset_PropertyOffset has returned NULL on step 2" );
		return;
	}

	for (unsigned long i = Object_Start; i < GObjObjects->Num; i++)
	{
		DWORD Object = (DWORD) GObjObjects->Data[i];
		if (Object == NULL)
		{
			sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
			add_log(cBuffer, "Object has returned NULL on step 2" );
			continue;
		}

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

		if (!Offset_Linker)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_Linker))
			{
				Offset_Linker = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}

		if (!Offset_LinkerIndex)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_LinkerIndex))
			{
				Offset_LinkerIndex = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}

		if (!Offset_VfTableObject)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_VfTableObject))
			{
				Offset_VfTableObject = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}

		if (!Offset_ObjectInternalInteger)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_ObjectInternalInteger))
			{
				Offset_ObjectInternalInteger = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}	

		if (!Offset_HashNext)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_HashNext))
			{
				Offset_HashNext = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}

		if (!Offset_HashOuterNext)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_HashOuterNext))
			{
				Offset_HashOuterNext = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}

		if (!Offset_StateFrame)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_StateFrame))
			{
				Offset_StateFrame = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}

		if (!Offset_ObjectArchetype)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_ObjectArchetype))
			{
				Offset_ObjectArchetype = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}

		if (!Offset_ObjectFlags)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_ObjectFlags))
			{
				Offset_ObjectFlags = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}

		if (!Offset_StateFrame)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_StateFrame))
			{
				Offset_StateFrame = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}	

		if (!Offset_NetIndex)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_NetIndex))
			{
				Offset_NetIndex = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}	

		if (!Offset_Next)
		{
			if (!strcmp(Names->Data[Name]->Name, Object_Next))
			{
				Offset_Next = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
			}
		}	

		Offset_1 = *(DWORD*)((DWORD) Object + (DWORD) Offset_PropertyOffset);
		fprintf(pPropFile2, "Names[%06i]	%-50s 			Offset: 0x%X \n", i, Names->Data[Name]->Name, Offset_1);
	} 

	if (!Offset_Outer || !Offset_Class)
	{
		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log(cBuffer, "failed on if (!Offset_Outer || !Offset_Class)" );
		return;
	}


	for (unsigned long i = 0; i < GObjObjects->Num; i++)
	{
		DWORD Object = (DWORD) GObjObjects->Data[i];
		if (Object == NULL)
		{
			sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
			add_log(cBuffer, "Object has returned NULL on step 3" );
			continue;
		}

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
	{
		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log(cBuffer, "failed on if (!Object_ClassPtr)" );
		return;
	}

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

	fprintf(pPropFile, "\nclass UObject\n{\npublic:\n");
	fprintf(pPropFile, "\t struct FPointer        VfTableObject;\t			//0x%X (0x04)\n",		Offset_VfTableObject);
	fprintf(pPropFile, "\t int                    ObjectInternalInteger;\t	//0x%X (0x04)\n",		Offset_ObjectInternalInteger);
	fprintf(pPropFile, "\t struct FQWord          ObjectFlags;\t			//0x%X (0x08)\n",		Offset_ObjectFlags);
	fprintf(pPropFile, "\t struct FPointer        HashNext;\t				//0x%X (0x04)\n",		Offset_HashNext);
	fprintf(pPropFile, "\t struct FPointer        HashOuterNext;\t			//0x%X (0x04)\n",		Offset_HashOuterNext);
	fprintf(pPropFile, "\t int                    NetIndex;\t				//0x%X (0x04)\n",		Offset_StateFrame);
	fprintf(pPropFile, "\t class UObject*         Linker;\t					//0x%X (0x04)\n",		Offset_Linker);
	fprintf(pPropFile, "\t struct FPointer        LinkerIndex;\t			//0x%X (0x04)\n",		Offset_LinkerIndex);
	fprintf(pPropFile, "\t struct FPointer        StateFrame;\t				//0x%X (0x04)\n",		Offset_NetIndex);
	fprintf(pPropFile, "\t class UObject*         Outer;\t					//0x%X (0x04)\n",		Offset_Outer);
	fprintf(pPropFile, "\t struct FName           Name;\t					//0x%X (0x08)\n",		Offset_Name);
	fprintf(pPropFile, "\t class UClass*          Class;\t					//0x%X (0x04)\n",		Offset_Class);
	fprintf(pPropFile, "\t class UObject*         ObjectArchetype;\t		//0x%X (0x04)\n",		Offset_ObjectArchetype);
	fprintf(pPropFile, "\n}\n");

	fprintf(pPropFile, "\nclass UField : public UObject\n{\npublic:\n");
	fprintf(pPropFile, "\t class UField*		Next;\t						//0x%X (0x04)\n",		Offset_Next);
	fprintf(pPropFile, "\n}\n");

	fprintf(pPropFile, "\nUProperty:\n");
	fprintf(pPropFile, "\t- PropertyOffset\t0x%X\n",				Offset_PropertyOffset);

	fprintf(pPropFile, "\nUStruct:\n");
	fprintf(pPropFile, "\t- PropertySize\t\t0x%X\n",				Offset_PropertySize);

	fclose(pPropFile);
	fclose(pPropFile2);
}

bool is1good = false;
bool is2good = false;
bool is3good = false;

BOOL Init_Core()
{
#ifdef Pattern

	sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
	add_log( cBuffer, "\nstart pattern scan" );

	MODULEINFO miGame = Utils::GetModuleInfo ( NULL );

	add_log( cBuffer, "GetModuleInfo\nlpBaseOfDll: 0x%X\nSizeOfImage: 0x%X\n", miGame.lpBaseOfDll, miGame.SizeOfImage );

	if(!Pattern1)
	{
		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log( cBuffer, "Pattern #1 start" );
		
		VirtualProtect(miGame.lpBaseOfDll, miGame.SizeOfImage, PAGE_READWRITE | PAGE_EXECUTE, NULL);

		GObjObjects_offset1	= *(unsigned long*)( Utils::FindPattern( (DWORD)miGame.lpBaseOfDll, miGame.SizeOfImage, (BYTE*) GObjects_Pattern1,		GObjects_Mask1	)	+ GObjects_Offset1	);
		
		if(GObjObjects_offset1 == NULL)
		{
			add_log( cBuffer, "Pattern #1 stop\n" );
			goto jmptwo;
		}


		if(GObjObjects_offset1  != NULL)
		{
			add_log( cBuffer, "#1 GObjObjects_offset1: 0x%X", GObjObjects_offset1 );
		
			Names_offset1		= *(unsigned long*)( Utils::FindPattern( (DWORD)miGame.lpBaseOfDll, miGame.SizeOfImage, (BYTE*) GNames_Pattern1,		GNames_Mask1	)	+ GNames_Offset1	);

			if(Names_offset1 == NULL)
			{
				add_log( cBuffer, "Pattern #1 stop\n" );
				goto jmptwo;
			}

			if(GObjObjects_offset1 == Names_offset1)
			{
				add_log( cBuffer, "Pattern #1 stop\n" );
				goto jmptwo;
			}

			if(Names_offset1  != NULL)
			{
				add_log( cBuffer, "#1 Names_offset1: 0x%X", Names_offset1 );
				is1good = true;
			}
		}
		add_log( cBuffer, "Pattern #1 stop\n" );
	}

	if(is1good && !Pattern1 && GObjObjects_offset1 != NULL && Names_offset1 != NULL)
	{
		sprintf_s ( cBuffer, "%s\\%s\\offset_Dump1.txt", SDK_BASE_DIR, GAME_NAME_S );
		FILE* poffsetlog = fopen(cBuffer, "w+");

		fprintf(poffsetlog, "GObjObjects_Pattern	1\n");
		fprintf(poffsetlog, "Names_Pattern			1\n");

		fprintf(poffsetlog, "GObjObjects_offset		0x%X\n", GObjObjects_offset1);
		fprintf(poffsetlog, "Names_offset			0x%X\n", Names_offset1);

		fflush(poffsetlog);
		fclose(poffsetlog);

		GObjObjects		= ( TArray2< UObject2* >* )		GObjObjects_offset1;		// global objects
		Names			= ( TArray2< FNameEntry2* >* )	Names_offset1;				// global names

		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log( cBuffer, "successful pattern scan #1" );

		Pattern1 = true;

		GetOffsetPositions();
		NameDump();
		ObjectDump();

		isnotPattern = false;
		return true;
	}

jmptwo:
	if(!Pattern2)
	{
		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log( cBuffer, "Pattern #2 start" );

		GObjObjects_offset2	= *(unsigned long*)( Utils::FindPattern( (DWORD)miGame.lpBaseOfDll, miGame.SizeOfImage,		(BYTE*)  GObjects_Pattern2, (char*) GObjects_Mask2 ) + GObjects_Offset2 );

		if(GObjObjects_offset2  == NULL)
		{
			add_log( cBuffer, "Pattern #2 stop\n" );
			goto jmpthree;
		}

		if(GObjObjects_offset2 == GObjObjects_offset1)
		{
			add_log( cBuffer, "Pattern #2 stop\n" );
			goto jmpthree;
		}

		if(GObjObjects_offset2  != NULL)
		{
			add_log( cBuffer, "#2 GObjObjects_offset2: 0x%X", GObjObjects_offset2 );

			Names_offset2		=*(unsigned long*)( Utils::FindPattern( (DWORD)miGame.lpBaseOfDll,	miGame.SizeOfImage,		(BYTE*)  GNames_Pattern2, (char*) GNames_Mask2 ) + GNames_Offset2 );
	
			if(Names_offset2  == NULL)
			{
				add_log( cBuffer, "Pattern #2 stop\n" );
				goto jmpthree;
			}

			if(Names_offset2  != NULL)
			{
				add_log( cBuffer, "#2 Names_offset2: 0x%X", Names_offset2 );
				is2good = true;
			}
		}
		add_log( cBuffer, "Pattern #2 stop\n" );
	}

	if(is2good && !Pattern2 && GObjObjects_offset2 != NULL && Names_offset2 != NULL)
	{
		sprintf_s ( cBuffer, "%s\\%s\\offset_Dump2.txt", SDK_BASE_DIR, GAME_NAME_S );
		FILE* poffsetlog = fopen(cBuffer, "w+");

		fprintf(poffsetlog, "GObjObjects_Pattern	2\n");
		fprintf(poffsetlog, "Names_Pattern			2\n");

		fprintf(poffsetlog, "GObjObjects_offset		0x%X\n", GObjObjects_offset2);
		fprintf(poffsetlog, "Names_offset			0x%X\n", Names_offset2);

		fflush(poffsetlog);
		fclose(poffsetlog);

		GObjObjects		= ( TArray2< UObject2* >* )		GObjObjects_offset2;		// global objects
		Names			= ( TArray2< FNameEntry2* >* )	Names_offset2;			// global names

		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log( cBuffer, "successful pattern scan #2" );

		Pattern2 = true;

		GetOffsetPositions();
		NameDump();
		ObjectDump();

		isnotPattern = false;
		return true;
	}

jmpthree:
	if(!Pattern3)
	{
		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log( cBuffer, "Pattern #3 start" );

		GObjObjects_offset3	= *(unsigned long*)( Utils::FindPattern( (DWORD)miGame.lpBaseOfDll, miGame.SizeOfImage, (BYTE*)  GObjects_Pattern3, (char*) GObjects_Mask3 ) + GObjects_Offset3 );

		if(GObjObjects_offset3 == NULL)
		{
			add_log( cBuffer, "Pattern #3 stop\n" );
			goto END;
		}	

		if(GObjObjects_offset2 == GObjObjects_offset3)
		{
			add_log( cBuffer, "Pattern #3 stop\n" );
			goto END;
		}	

		if(GObjObjects_offset3  != NULL)
		{
			add_log( cBuffer, "#3 GObjObjects_offset3: 0x%X", GObjObjects_offset3 );

			Names_offset3		= *(unsigned long*)( Utils::FindPattern( (DWORD)miGame.lpBaseOfDll, miGame.SizeOfImage, (BYTE*)  GNames_Pattern3, (char*) GNames_Mask3 ) + GNames_Offset3 );
	
			if(Names_offset3 == NULL)
			{
				add_log( cBuffer, "Pattern #3 stop\n" );
				goto END;
			}	

			if(Names_offset3  != NULL)
			{
				add_log( cBuffer, "#3 Names_offset3: 0x%X", Names_offset3 );
				is3good = true;
			}
		}
		add_log( cBuffer, "Pattern #3 stop\n" );
	}

	if(is3good && !Pattern3 && GObjObjects_offset3 != NULL && Names_offset3 != NULL)
	{
		sprintf_s ( cBuffer, "%s\\%s\\offset_Dump3.txt", SDK_BASE_DIR, GAME_NAME_S );
		FILE* poffsetlog = fopen(cBuffer, "w+");

		fprintf(poffsetlog, "GObjObjects_Pattern	3\n");
		fprintf(poffsetlog, "Names_Pattern			3\n");

		fprintf(poffsetlog, "GObjObjects_offset		0x%X\n", GObjObjects_offset3);
		fprintf(poffsetlog, "Names_offset			0x%X\n", Names_offset3);

		fflush(poffsetlog);
		fclose(poffsetlog);

		GObjObjects		= ( TArray2< UObject2* >* )		GObjObjects_offset3;		// global objects
		Names			= ( TArray2< FNameEntry2* >* )	Names_offset3;				// global names

		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log( cBuffer, "successful pattern scan #3" );

		Pattern3 = true;

		GetOffsetPositions();
		NameDump();
		ObjectDump();
		
		isnotPattern = false;
		return true;
	}

END:
	sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
	add_log( cBuffer, "unsuccessful pattern scan" );
#endif
	 return false;
}

void onAttach()
{
	while ( !GetAsyncKeyState( VK_HOME ) )
		Sleep( 100 );

	sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
	add_log( cBuffer, "hello and welcome to Domo's scan tool logs tool enabled" );

	// mkdir base dir
	_mkdir ( SDK_BASE_DIR );

	// mkdir sdk dir
	sprintf_s ( cBuffer, "%s\\%s", SDK_BASE_DIR, GAME_NAME_S );
	_mkdir ( cBuffer );

	sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
	add_log(cBuffer, "successfully created directories" );

#ifdef offset
		GetOffsetPositions();
		NameDump();
		ObjectDump();
#endif

#ifdef Pattern
    if ( Init_Core() )
    {
#endif
		sprintf_s ( cBuffer, "%s\\%s\\logs.txt", SDK_BASE_DIR, GAME_NAME_S );
		add_log( cBuffer, "tool completed" );
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
