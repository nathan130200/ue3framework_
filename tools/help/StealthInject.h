/********************************************************************
	created:	2004/07/17
	created:	17:7:2004   9:24
	file base:	StealthInject
	file ext:	h
	author:	DrUnKeN ChEeTaH	
	
	purpose: Inject a DLL into another Process
*********************************************************************/

//HOW TO USE:

//PUT THE FOLLOWING TO USE THE LIBRARY
//#include "StealthInject.h"
#pragma comment(lib,"StealthInject.lib")

//DEFINE A FEW VARIABLES
//YOU DON'T HAVE TO USE THE STATS, JUST PASS A NULL IF YOU DON'T NEED THAT INFO

//	INJECTINFO Info;
//	INJECTSTATS Stats;
//	ZeroMemory(&Info,sizeof(INJECTINFO));

//STEP 1 - SETUP YOUR SOURCE...WHERE TO FIND THE DLL 3 METHODS

//METHOD 1 - From a file
//
//	Info.SourceType = SOURCE_FILE;
//	Info.Source = "C:\\TestDLL.dll";

//METHOD 2 - From a Resource 
//
//	Info.SourceType = SOURCE_RESOURCE;
//	Info.hResource = FindResource(NULL,MAKEINTRESOURCE(IDR_DLL1),"DLL");

//METHOD 3 - From an Array in Memory 
//
//	Info.SourceType = SOURCE_MEMORY;
//	Info.Memory = TestDLL;
//  Info.DLLSize = TESTDLL_LEN;
//  *DLLSize is only used for DLL's in memory and can be ignored by the other methods

//STEP 2 - SETUP YOUR TARGET...WHERE TO FIND THE PROGRAM 2 METHODS

//METHOD 1 - Start a new Process (Include the Full path)
//
//	Info.TargetType = TARGET_FILE;
//	Info.Target = "C:\\WINDOWS\\System32\\calc.exe";
//

//METHOD 2 - From a running process
//
//	Info.TargetType = TARGET_PROCESS;
//	Info.Target = "calc.exe";
//

//STEP 3 - SETUP ANY OPTIONS: CAN BE ANY COMBINATION OF THE FOLLOWING 
// INJECT_RANDOMHEAD - Add random amount of garbage before the DLL
// INJECT_RANDOMTAIL - Add random amount of garbage After the DLL
// INJECT_DESTROYHEADERS - Write random garbage over the PE Headers
// INJECT_RANDOMPOSITION - Load DLL into a random memory location in the process
//*If you use RandomHead or RandomTail, be sure to set the RandomMax value
//*This is in bytes and the largest amount the head/tail can be

//EXAMPLE OF HOW TO USE ALL THE OPTIONS
//	Info.Options = INJECT_RANDOMHEAD | INJECT_RANDOMTAIL | INJECT_DESTROYHEADERS | INJECT_RANDOMPOSITION;
//	Info.RandomMax = 1024 * 5; //Add at most 5k to Head,Tail or both


//STEP 4 - CALL StealthInject, YOU CAN PASS NULL TO &Stats IF YOU DON'T NEED THE INFO

//THE RETURN VALUE IS AN ERROR NUMBER WHICH CAN BE PASSED TO GetErrorMessage
//
//	MessageBox(NULL,GetErrorMessage(StealthInject(&Info,&Stats,NULL,0)),"Info",MB_OK);


//COMPLETE EXAMPLE
//#include "StealthInject.h"
//#pragma comment(lib,"StealthInject.lib");

//	INJECTINFO Info;
//	INJECTSTATS Stats;
//	ZeroMemory(&Info,sizeof(INJECTINFO));
//	Info.SourceType = SOURCE_FILE;
//	Info.Source = "C:\\TestDLL.dll";
//	Info.TargetType = TARGET_FILE;
//	Info.Target = "C:\\WINDOWS\\System32\\calc.exe";
//	Info.Options = INJECT_RANDOMHEAD | INJECT_RANDOMTAIL | INJECT_DESTROYHEADERS | INJECT_RANDOMPOSITION;
//	Info.RandomMax = 1024 * 5; //Add at most 5k to Head,Tail or both
//	int Err = StealthInject(&Info,&Stats,NULL,0);

//LIMITS
//MAKE SURE THE DLL DOES NOT USE THE (HINSTANCE hinstDLL) PASSED TO IT
//BECAUSE THE MODULE IS HIDDEN, SO WINDOWS WON'T FIND IT....

//Update - 11/07/2004
//
//You can now pass data to the DLL
//GetProcAddress change to support protected exe files...

//Update - 01/21/2005
//
//Added DLL from memory option


#pragma once

enum eTargetType
{
	TARGET_PROCESS,
	TARGET_FILE
};

enum eSourceType
{
	SOURCE_FILE,
	SOURCE_RESOURCE,
	SOURCE_MEMORY
};
enum eInjectFlags
{
	INJECT_RANDOMPOSITION	= 0x00000001,
	INJECT_RANDOMHEAD		= 0x00000002,
	INJECT_RANDOMTAIL		= 0x00000004,
	INJECT_DESTROYHEADERS	= 0x00000008,

};
enum eISErrors
{
	SIERR_OK,
	SIERR_TFILENOTFOUND,
	SIERR_SFILENOTFOUND,
	SIERR_PROCNOTFOUND,
	SIERR_RESCNOTFOUND,
	SIERR_NOMEMORY,
	SIERR_PROCESSCREATE,
};
typedef struct 
{

	eTargetType TargetType;
	char *Target; 

	eSourceType SourceType;
	union
	{
		char *Source;
		HRSRC hResource;
		unsigned char *Memory;
	};
	DWORD DLLSize;//Only used for *Memory SourceType

	DWORD Options;
	DWORD RandomMax;

}INJECTINFO,*PINJECTINFO;

typedef struct 
{
	HANDLE hProcess;
	DWORD ProcMemoryAddress;
	DWORD ProcMemoryAllocatedSize;

	DWORD DLLMainAddress;
	DWORD DLLImageSize;
	DWORD PEHeaderAddress;
	DWORD DataAddress;

	DWORD HeadSize;
	DWORD TailSize;

}INJECTSTATS,*PINJECTSTATS;

int StealthInject(INJECTINFO *Info,INJECTSTATS *Stats,void* Data,DWORD Length);

char* GetErrorMessage(int Err);
