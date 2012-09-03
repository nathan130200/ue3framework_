#include <windows.h>
#include <stdio.h>
#include <tlhelp32.h>
#include <atlbase.h>

#include "StealthInject.h"
#pragma comment(lib,"StealthInject.lib");


int main(int argc, char **argv)
{
	char* exe	= "CrimeCraft.exe";

	PROCESSENTRY32 PE32;
	bool FindGame = true;

	while(FindGame)
	{
		HANDLE hSnapshot = CreateToolhelp32Snapshot( TH32CS_SNAPPROCESS, 0 );
		PE32.dwSize = sizeof(PROCESSENTRY32);
		Process32First( hSnapshot, &PE32 );
		while( Process32Next( hSnapshot, &PE32 ) )
		{
			if( strcmp( PE32.szExeFile, exe ) == 0 )
			{
				FindGame = false;
				break;
			}
			Sleep(10);
		}
		Sleep(10);
	}


	INJECTINFO Info;
	INJECTSTATS Stats;
	ZeroMemory(&Info,sizeof(INJECTINFO));
	Info.SourceType = SOURCE_FILE;
	Info.Source = "c:\\CCHack.dll";
	Info.TargetType = TARGET_PROCESS;
	Info.Target = exe;
	Info.Options = INJECT_RANDOMHEAD | INJECT_RANDOMTAIL | INJECT_DESTROYHEADERS | INJECT_RANDOMPOSITION;
	Info.RandomMax = 1024 * 5; //Add at most 5k to Head,Tail or both
	int Err = StealthInject(&Info,&Stats,NULL,0);
}

