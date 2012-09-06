#define MAX_NAME 15 
//======================================================================================
#define MAKEPTR( cast, ptr, addValue ) (cast)( (DWORD)(ptr) + (DWORD)(addValue))
//======================================================================================
typedef unsigned long u4byte;
typedef BOOL (WINAPI *DllEntryProc_t)(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);
typedef HMODULE (WINAPI *LoadLibrary_t)(LPCTSTR lpFileName);
typedef BOOL (WINAPI *IsBadReadPtr_t)(const VOID* lp, UINT_PTR ucb);
typedef PVOID (__cdecl *memset_t) (void * _Dst, int _Val, size_t _Size);
typedef FARPROC (WINAPI *GetProcAddress_t)(HMODULE hModule, LPCSTR lpProcName);
typedef PVOID (__cdecl *memcpy_t) (void * _Dst, const void * _Src,size_t _MaxCount);
typedef BOOL (WINAPI *VirtualFree_t)(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType);
typedef LPVOID (WINAPI *VirtualAlloc_t)(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect);
typedef BOOL (WINAPI *VirtualProtect_t)(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
//======================================================================================
typedef struct tAPI
{
	memcpy_t pMemcpy;
	memset_t pMemset;
	LoadLibrary_t pLoadLibrary;
	VirtualFree_t pVirtualFree;
	IsBadReadPtr_t pIsBadReadPtr;
	VirtualAlloc_t pVirtualAlloc;
	VirtualProtect_t pVirtualProtect;
	GetProcAddress_t pGetProcAddress;
} API, *PAPI;
//======================================================================================

typedef struct tGED3DAPI
{
	DWORD dwPresent;
	DWORD dwReset;
	DWORD dwDrawIndexedPrimitive;
} GED3DAPI, *PGED3DAPI;

typedef struct tGEMODULE 
{
	API Api;								// Api Struct
	GED3DAPI d3dAip;
	INT iSize;								// Size of Module
	DWORD dwDelta;							// Difference Delta (Current ImageBase - Wanted ImageBase)
	u4byte dwKeys[4];						// Encryption Keys
	unsigned char *pBase;					// Pointer to Module Base
	char szLoaderDirectory[MAX_PATH];		// Loaders Directory
	char szCCDirectory[MAX_PATH];			// CCleaner Directory
	char szSessionId[9];					// SessionId
	DWORD dwLevel;							// Customers level
	PVOID pD3DDevice;						// pointer to d3d device
	DllEntryProc_t pDllMain;				// Pointer to DllMain
	IMAGE_DOS_HEADER *pDosHeader;			// Pointer to DOS Header
	IMAGE_NT_HEADERS *pNTHeader;			// Pointer to NT Header
	IMAGE_SECTION_HEADER *pFirstSection;	// Pointer to First Section

} GEMODULE, *PGEMMODULE;