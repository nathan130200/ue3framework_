/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function IpDrv.IniLocPatcherMcp.OnReadFileCompleteInternal
// [0x00000000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UIniLocPatcherMcp::OnReadFileCompleteInternal ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadFileCompleteInternal = NULL;

	if ( ! pFnOnReadFileCompleteInternal )
		pFnOnReadFileCompleteInternal = (UFunction*) UObject::GObjObjects()->Data[ 37231 ];

	UIniLocPatcherMcp_execOnReadFileCompleteInternal_Parms OnReadFileCompleteInternal_Parms;
	OnReadFileCompleteInternal_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadFileCompleteInternal_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadFileCompleteInternal, &OnReadFileCompleteInternal_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.GenerateTuningCRC
// [0x00000000] 
// Parameters infos:

void UIniLocPatcherMcp::GenerateTuningCRC ( )
{
	static UFunction* pFnGenerateTuningCRC = NULL;

	if ( ! pFnGenerateTuningCRC )
		pFnGenerateTuningCRC = (UFunction*) UObject::GObjObjects()->Data[ 37230 ];

	UIniLocPatcherMcp_execGenerateTuningCRC_Parms GenerateTuningCRC_Parms;

	this->ProcessEvent ( pFnGenerateTuningCRC, &GenerateTuningCRC_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.SaveIniCacheInternal
// [0x00000000] 
// Parameters infos:

void UIniLocPatcherMcp::SaveIniCacheInternal ( )
{
	static UFunction* pFnSaveIniCacheInternal = NULL;

	if ( ! pFnSaveIniCacheInternal )
		pFnSaveIniCacheInternal = (UFunction*) UObject::GObjObjects()->Data[ 37229 ];

	UIniLocPatcherMcp_execSaveIniCacheInternal_Parms SaveIniCacheInternal_Parms;

	this->ProcessEvent ( pFnSaveIniCacheInternal, &SaveIniCacheInternal_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.DownloadFilesInternal
// [0x00000000] 
// Parameters infos:

void UIniLocPatcherMcp::DownloadFilesInternal ( )
{
	static UFunction* pFnDownloadFilesInternal = NULL;

	if ( ! pFnDownloadFilesInternal )
		pFnDownloadFilesInternal = (UFunction*) UObject::GObjObjects()->Data[ 37228 ];

	UIniLocPatcherMcp_execDownloadFilesInternal_Parms DownloadFilesInternal_Parms;

	this->ProcessEvent ( pFnDownloadFilesInternal, &DownloadFilesInternal_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.SaveIniCacheFile
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileData                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UIniLocPatcherMcp::SaveIniCacheFile ( struct FString Filename, struct FString Path, TArray< unsigned char >* FileData )
{
	static UFunction* pFnSaveIniCacheFile = NULL;

	if ( ! pFnSaveIniCacheFile )
		pFnSaveIniCacheFile = (UFunction*) UObject::GObjObjects()->Data[ 37222 ];

	UIniLocPatcherMcp_execSaveIniCacheFile_Parms SaveIniCacheFile_Parms;
	memcpy ( &SaveIniCacheFile_Parms.Filename, &Filename, 0xC );
	memcpy ( &SaveIniCacheFile_Parms.Path, &Path, 0xC );

	this->ProcessEvent ( pFnSaveIniCacheFile, &SaveIniCacheFile_Parms, NULL );

	if ( FileData )
		memcpy ( FileData, &SaveIniCacheFile_Parms.FileData, 0xC );

	return SaveIniCacheFile_Parms.ReturnValue;
};

// Function IpDrv.IniLocPatcherMcp.LoadIniCacheFile
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileData                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UIniLocPatcherMcp::LoadIniCacheFile ( struct FString Filename, struct FString Path, TArray< unsigned char >* FileData )
{
	static UFunction* pFnLoadIniCacheFile = NULL;

	if ( ! pFnLoadIniCacheFile )
		pFnLoadIniCacheFile = (UFunction*) UObject::GObjObjects()->Data[ 37216 ];

	UIniLocPatcherMcp_execLoadIniCacheFile_Parms LoadIniCacheFile_Parms;
	memcpy ( &LoadIniCacheFile_Parms.Filename, &Filename, 0xC );
	memcpy ( &LoadIniCacheFile_Parms.Path, &Path, 0xC );

	this->ProcessEvent ( pFnLoadIniCacheFile, &LoadIniCacheFile_Parms, NULL );

	if ( FileData )
		memcpy ( FileData, &LoadIniCacheFile_Parms.FileData, 0xC );

	return LoadIniCacheFile_Parms.ReturnValue;
};

// Function IpDrv.IniLocPatcherMcp.LoadIniCacheInternal
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UIniLocPatcherMcp::LoadIniCacheInternal ( )
{
	static UFunction* pFnLoadIniCacheInternal = NULL;

	if ( ! pFnLoadIniCacheInternal )
		pFnLoadIniCacheInternal = (UFunction*) UObject::GObjObjects()->Data[ 37214 ];

	UIniLocPatcherMcp_execLoadIniCacheInternal_Parms LoadIniCacheInternal_Parms;

	this->ProcessEvent ( pFnLoadIniCacheInternal, &LoadIniCacheInternal_Parms, NULL );

	return LoadIniCacheInternal_Parms.ReturnValue;
};

// Function IpDrv.IniLocPatcherMcp.ClearCachedFiles
// [0x00000000] 
// Parameters infos:

void UIniLocPatcherMcp::ClearCachedFiles ( )
{
	static UFunction* pFnClearCachedFiles = NULL;

	if ( ! pFnClearCachedFiles )
		pFnClearCachedFiles = (UFunction*) UObject::GObjObjects()->Data[ 37211 ];

	UIniLocPatcherMcp_execClearCachedFiles_Parms ClearCachedFiles_Parms;

	this->ProcessEvent ( pFnClearCachedFiles, &ClearCachedFiles_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.ClearReadFileDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UIniLocPatcherMcp::ClearReadFileDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadFileDelegate = NULL;

	if ( ! pFnClearReadFileDelegate )
		pFnClearReadFileDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37209 ];

	UIniLocPatcherMcp_execClearReadFileDelegate_Parms ClearReadFileDelegate_Parms;
	memcpy ( &ClearReadFileDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadFileDelegate, &ClearReadFileDelegate_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.AddReadFileDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UIniLocPatcherMcp::AddReadFileDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadFileDelegate = NULL;

	if ( ! pFnAddReadFileDelegate )
		pFnAddReadFileDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37207 ];

	UIniLocPatcherMcp_execAddReadFileDelegate_Parms AddReadFileDelegate_Parms;
	memcpy ( &AddReadFileDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadFileDelegate, &AddReadFileDelegate_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.OnReadFileComplete
// [0x00000000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UIniLocPatcherMcp::OnReadFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadFileComplete = NULL;

	if ( ! pFnOnReadFileComplete )
		pFnOnReadFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 37199 ];

	UIniLocPatcherMcp_execOnReadFileComplete_Parms OnReadFileComplete_Parms;
	OnReadFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadFileComplete, &OnReadFileComplete_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.OnReadFilesCompleted
// [0x00000000] 
// Parameters infos:

void UIniLocPatcherMcp::OnReadFilesCompleted ( )
{
	static UFunction* pFnOnReadFilesCompleted = NULL;

	if ( ! pFnOnReadFilesCompleted )
		pFnOnReadFilesCompleted = (UFunction*) UObject::GObjObjects()->Data[ 37198 ];

	UIniLocPatcherMcp_execOnReadFilesCompleted_Parms OnReadFilesCompleted_Parms;

	this->ProcessEvent ( pFnOnReadFilesCompleted, &OnReadFilesCompleted_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.OnReadFilesStarted
// [0x00000000] 
// Parameters infos:

void UIniLocPatcherMcp::OnReadFilesStarted ( )
{
	static UFunction* pFnOnReadFilesStarted = NULL;

	if ( ! pFnOnReadFilesStarted )
		pFnOnReadFilesStarted = (UFunction*) UObject::GObjObjects()->Data[ 37197 ];

	UIniLocPatcherMcp_execOnReadFilesStarted_Parms OnReadFilesStarted_Parms;

	this->ProcessEvent ( pFnOnReadFilesStarted, &OnReadFilesStarted_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.DownloadFiles
// [0x00000000] 
// Parameters infos:

void UIniLocPatcherMcp::DownloadFiles ( )
{
	static UFunction* pFnDownloadFiles = NULL;

	if ( ! pFnDownloadFiles )
		pFnDownloadFiles = (UFunction*) UObject::GObjObjects()->Data[ 37193 ];

	UIniLocPatcherMcp_execDownloadFiles_Parms DownloadFiles_Parms;

	this->ProcessEvent ( pFnDownloadFiles, &DownloadFiles_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.OnConnectionStatusChange
// [0x00000000] 
// Parameters infos:
// unsigned char                  NewStatus                      ( CPF_Parm )
// struct FUniqueNetId            NewId                          ( CPF_Parm )

void UIniLocPatcherMcp::OnConnectionStatusChange ( unsigned char NewStatus, struct FUniqueNetId NewId )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 37188 ];

	UIniLocPatcherMcp_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;
	OnConnectionStatusChange_Parms.NewStatus = NewStatus;
	memcpy ( &OnConnectionStatusChange_Parms.NewId, &NewId, 0x8 );

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.Init
// [0x00000000] 
// Parameters infos:

void UIniLocPatcherMcp::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37185 ];

	UIniLocPatcherMcp_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.IsConnectedToLive
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UIniLocPatcherMcp::IsConnectedToLive ( )
{
	static UFunction* pFnIsConnectedToLive = NULL;

	if ( ! pFnIsConnectedToLive )
		pFnIsConnectedToLive = (UFunction*) UObject::GObjObjects()->Data[ 37181 ];

	UIniLocPatcherMcp_execIsConnectedToLive_Parms IsConnectedToLive_Parms;

	this->ProcessEvent ( pFnIsConnectedToLive, &IsConnectedToLive_Parms, NULL );

	return IsConnectedToLive_Parms.ReturnValue;
};

// Function IpDrv.IniLocPatcherMcp.IsDownloadingFiles
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UIniLocPatcherMcp::IsDownloadingFiles ( )
{
	static UFunction* pFnIsDownloadingFiles = NULL;

	if ( ! pFnIsDownloadingFiles )
		pFnIsDownloadingFiles = (UFunction*) UObject::GObjObjects()->Data[ 37179 ];

	UIniLocPatcherMcp_execIsDownloadingFiles_Parms IsDownloadingFiles_Parms;

	this->ProcessEvent ( pFnIsDownloadingFiles, &IsDownloadingFiles_Parms, NULL );

	return IsDownloadingFiles_Parms.ReturnValue;
};

// Function IpDrv.IniLocPatcherMcp.AddToCRC
// [0x00000000] 
// Parameters infos:
// TArray< unsigned char >        FileData                       ( CPF_Parm | CPF_NeedCtorLink )

void UIniLocPatcherMcp::AddToCRC ( TArray< unsigned char > FileData )
{
	static UFunction* pFnAddToCRC = NULL;

	if ( ! pFnAddToCRC )
		pFnAddToCRC = (UFunction*) UObject::GObjObjects()->Data[ 37176 ];

	UIniLocPatcherMcp_execAddToCRC_Parms AddToCRC_Parms;
	memcpy ( &AddToCRC_Parms.FileData, &FileData, 0xC );

	this->ProcessEvent ( pFnAddToCRC, &AddToCRC_Parms, NULL );
};

// Function IpDrv.IniLocPatcherMcp.RefreshUI
// [0x00000000] 
// Parameters infos:

void UIniLocPatcherMcp::RefreshUI ( )
{
	static UFunction* pFnRefreshUI = NULL;

	if ( ! pFnRefreshUI )
		pFnRefreshUI = (UFunction*) UObject::GObjObjects()->Data[ 37175 ];

	UIniLocPatcherMcp_execRefreshUI_Parms RefreshUI_Parms;

	this->ProcessEvent ( pFnRefreshUI, &RefreshUI_Parms, NULL );
};

// Function IpDrv.InternetLink.ResolveFailed
// [0x00000000] 
// Parameters infos:

void AInternetLink::ResolveFailed ( )
{
	static UFunction* pFnResolveFailed = NULL;

	if ( ! pFnResolveFailed )
		pFnResolveFailed = (UFunction*) UObject::GObjObjects()->Data[ 37273 ];

	AInternetLink_execResolveFailed_Parms ResolveFailed_Parms;

	this->ProcessEvent ( pFnResolveFailed, &ResolveFailed_Parms, NULL );
};

// Function IpDrv.InternetLink.Resolved
// [0x00000000] 
// Parameters infos:
// struct FIpAddr                 Addr                           ( CPF_Parm )

void AInternetLink::Resolved ( struct FIpAddr Addr )
{
	static UFunction* pFnResolved = NULL;

	if ( ! pFnResolved )
		pFnResolved = (UFunction*) UObject::GObjObjects()->Data[ 37271 ];

	AInternetLink_execResolved_Parms Resolved_Parms;
	memcpy ( &Resolved_Parms.Addr, &Addr, 0x8 );

	this->ProcessEvent ( pFnResolved, &Resolved_Parms, NULL );
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00000000] 
// Parameters infos:
// struct FIpAddr                 Arg                            ( CPF_Parm | CPF_OutParm )

void AInternetLink::GetLocalIP ( struct FIpAddr* Arg )
{
	static UFunction* pFnGetLocalIP = NULL;

	if ( ! pFnGetLocalIP )
		pFnGetLocalIP = (UFunction*) UObject::GObjObjects()->Data[ 37269 ];

	AInternetLink_execGetLocalIP_Parms GetLocalIP_Parms;

	this->ProcessEvent ( pFnGetLocalIP, &GetLocalIP_Parms, NULL );

	if ( Arg )
		memcpy ( Arg, &GetLocalIP_Parms.Arg, 0x8 );
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FIpAddr                 Addr                           ( CPF_Parm | CPF_OutParm )

bool AInternetLink::StringToIpAddr ( struct FString Str, struct FIpAddr* Addr )
{
	static UFunction* pFnStringToIpAddr = NULL;

	if ( ! pFnStringToIpAddr )
		pFnStringToIpAddr = (UFunction*) UObject::GObjObjects()->Data[ 37265 ];

	AInternetLink_execStringToIpAddr_Parms StringToIpAddr_Parms;
	memcpy ( &StringToIpAddr_Parms.Str, &Str, 0xC );

	this->ProcessEvent ( pFnStringToIpAddr, &StringToIpAddr_Parms, NULL );

	if ( Addr )
		memcpy ( Addr, &StringToIpAddr_Parms.Addr, 0x8 );

	return StringToIpAddr_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FIpAddr                 Arg                            ( CPF_Parm )

struct FString AInternetLink::IpAddrToString ( struct FIpAddr Arg )
{
	static UFunction* pFnIpAddrToString = NULL;

	if ( ! pFnIpAddrToString )
		pFnIpAddrToString = (UFunction*) UObject::GObjObjects()->Data[ 37262 ];

	AInternetLink_execIpAddrToString_Parms IpAddrToString_Parms;
	memcpy ( &IpAddrToString_Parms.Arg, &Arg, 0x8 );

	this->ProcessEvent ( pFnIpAddrToString, &IpAddrToString_Parms, NULL );

	return IpAddrToString_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.GetLastError
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AInternetLink::GetLastError ( )
{
	static UFunction* pFnGetLastError = NULL;

	if ( ! pFnGetLastError )
		pFnGetLastError = (UFunction*) UObject::GObjObjects()->Data[ 37260 ];

	AInternetLink_execGetLastError_Parms GetLastError_Parms;

	this->ProcessEvent ( pFnGetLastError, &GetLastError_Parms, NULL );

	return GetLastError_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.Resolve
// [0x00000000] 
// Parameters infos:
// struct FString                 Domain                         ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void AInternetLink::Resolve ( struct FString Domain )
{
	static UFunction* pFnResolve = NULL;

	if ( ! pFnResolve )
		pFnResolve = (UFunction*) UObject::GObjObjects()->Data[ 37258 ];

	AInternetLink_execResolve_Parms Resolve_Parms;
	memcpy ( &Resolve_Parms.Domain, &Domain, 0xC );

	this->ProcessEvent ( pFnResolve, &Resolve_Parms, NULL );
};

// Function IpDrv.InternetLink.ParseURL
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 Addr                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            PortNum                        ( CPF_Parm | CPF_OutParm )
// struct FString                 LevelName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 EntryName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AInternetLink::ParseURL ( struct FString URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName )
{
	static UFunction* pFnParseURL = NULL;

	if ( ! pFnParseURL )
		pFnParseURL = (UFunction*) UObject::GObjObjects()->Data[ 37251 ];

	AInternetLink_execParseURL_Parms ParseURL_Parms;
	memcpy ( &ParseURL_Parms.URL, &URL, 0xC );

	this->ProcessEvent ( pFnParseURL, &ParseURL_Parms, NULL );

	if ( Addr )
		memcpy ( Addr, &ParseURL_Parms.Addr, 0xC );

	if ( PortNum )
		*PortNum = ParseURL_Parms.PortNum;

	if ( LevelName )
		memcpy ( LevelName, &ParseURL_Parms.LevelName, 0xC );

	if ( EntryName )
		memcpy ( EntryName, &ParseURL_Parms.EntryName, 0xC );

	return ParseURL_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AInternetLink::IsDataPending ( )
{
	static UFunction* pFnIsDataPending = NULL;

	if ( ! pFnIsDataPending )
		pFnIsDataPending = (UFunction*) UObject::GObjObjects()->Data[ 37249 ];

	AInternetLink_execIsDataPending_Parms IsDataPending_Parms;

	this->ProcessEvent ( pFnIsDataPending, &IsDataPending_Parms, NULL );

	return IsDataPending_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00000000] 
// Parameters infos:
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

void ATcpLink::ReceivedBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnReceivedBinary = NULL;

	if ( ! pFnReceivedBinary )
		pFnReceivedBinary = (UFunction*) UObject::GObjObjects()->Data[ 38205 ];

	ATcpLink_execReceivedBinary_Parms ReceivedBinary_Parms;
	ReceivedBinary_Parms.Count = Count;
	memcpy ( &ReceivedBinary_Parms.B, &B, 0xFF );

	this->ProcessEvent ( pFnReceivedBinary, &ReceivedBinary_Parms, NULL );
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00000000] 
// Parameters infos:
// struct FString                 Line                           ( CPF_Parm | CPF_NeedCtorLink )

void ATcpLink::ReceivedLine ( struct FString Line )
{
	static UFunction* pFnReceivedLine = NULL;

	if ( ! pFnReceivedLine )
		pFnReceivedLine = (UFunction*) UObject::GObjObjects()->Data[ 38203 ];

	ATcpLink_execReceivedLine_Parms ReceivedLine_Parms;
	memcpy ( &ReceivedLine_Parms.Line, &Line, 0xC );

	this->ProcessEvent ( pFnReceivedLine, &ReceivedLine_Parms, NULL );
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00000000] 
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

void ATcpLink::ReceivedText ( struct FString Text )
{
	static UFunction* pFnReceivedText = NULL;

	if ( ! pFnReceivedText )
		pFnReceivedText = (UFunction*) UObject::GObjObjects()->Data[ 38201 ];

	ATcpLink_execReceivedText_Parms ReceivedText_Parms;
	memcpy ( &ReceivedText_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnReceivedText, &ReceivedText_Parms, NULL );
};

// Function IpDrv.TcpLink.Closed
// [0x00000000] 
// Parameters infos:

void ATcpLink::Closed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 38200 ];

	ATcpLink_execClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function IpDrv.TcpLink.Opened
// [0x00000000] 
// Parameters infos:

void ATcpLink::Opened ( )
{
	static UFunction* pFnOpened = NULL;

	if ( ! pFnOpened )
		pFnOpened = (UFunction*) UObject::GObjObjects()->Data[ 38199 ];

	ATcpLink_execOpened_Parms Opened_Parms;

	this->ProcessEvent ( pFnOpened, &Opened_Parms, NULL );
};

// Function IpDrv.TcpLink.Accepted
// [0x00000000] 
// Parameters infos:

void ATcpLink::Accepted ( )
{
	static UFunction* pFnAccepted = NULL;

	if ( ! pFnAccepted )
		pFnAccepted = (UFunction*) UObject::GObjObjects()->Data[ 38198 ];

	ATcpLink_execAccepted_Parms Accepted_Parms;

	this->ProcessEvent ( pFnAccepted, &Accepted_Parms, NULL );
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm | CPF_OutParm )

int ATcpLink::ReadBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnReadBinary = NULL;

	if ( ! pFnReadBinary )
		pFnReadBinary = (UFunction*) UObject::GObjObjects()->Data[ 38194 ];

	ATcpLink_execReadBinary_Parms ReadBinary_Parms;
	ReadBinary_Parms.Count = Count;

	this->ProcessEvent ( pFnReadBinary, &ReadBinary_Parms, NULL );

	if ( B )
		memcpy ( B, &ReadBinary_Parms.B, 0xFF );

	return ReadBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.ReadText
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int ATcpLink::ReadText ( struct FString* Str )
{
	static UFunction* pFnReadText = NULL;

	if ( ! pFnReadText )
		pFnReadText = (UFunction*) UObject::GObjObjects()->Data[ 38191 ];

	ATcpLink_execReadText_Parms ReadText_Parms;

	this->ProcessEvent ( pFnReadText, &ReadText_Parms, NULL );

	if ( Str )
		memcpy ( Str, &ReadText_Parms.Str, 0xC );

	return ReadText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendBinary
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

int ATcpLink::SendBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnSendBinary = NULL;

	if ( ! pFnSendBinary )
		pFnSendBinary = (UFunction*) UObject::GObjObjects()->Data[ 38187 ];

	ATcpLink_execSendBinary_Parms SendBinary_Parms;
	SendBinary_Parms.Count = Count;
	memcpy ( &SendBinary_Parms.B, &B, 0xFF );

	this->ProcessEvent ( pFnSendBinary, &SendBinary_Parms, NULL );

	return SendBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendText
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

int ATcpLink::SendText ( struct FString Str )
{
	static UFunction* pFnSendText = NULL;

	if ( ! pFnSendText )
		pFnSendText = (UFunction*) UObject::GObjObjects()->Data[ 38184 ];

	ATcpLink_execSendText_Parms SendText_Parms;
	memcpy ( &SendText_Parms.Str, &Str, 0xC );

	this->ProcessEvent ( pFnSendText, &SendText_Parms, NULL );

	return SendText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.IsConnected
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::IsConnected ( )
{
	static UFunction* pFnIsConnected = NULL;

	if ( ! pFnIsConnected )
		pFnIsConnected = (UFunction*) UObject::GObjObjects()->Data[ 38182 ];

	ATcpLink_execIsConnected_Parms IsConnected_Parms;

	this->ProcessEvent ( pFnIsConnected, &IsConnected_Parms, NULL );

	return IsConnected_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Close
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::Close ( )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = (UFunction*) UObject::GObjObjects()->Data[ 38180 ];

	ATcpLink_execClose_Parms Close_Parms;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	return Close_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Open
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FIpAddr                 Addr                           ( CPF_Parm )

bool ATcpLink::Open ( struct FIpAddr Addr )
{
	static UFunction* pFnOpen = NULL;

	if ( ! pFnOpen )
		pFnOpen = (UFunction*) UObject::GObjObjects()->Data[ 38177 ];

	ATcpLink_execOpen_Parms Open_Parms;
	memcpy ( &Open_Parms.Addr, &Addr, 0x8 );

	this->ProcessEvent ( pFnOpen, &Open_Parms, NULL );

	return Open_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Listen
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::Listen ( )
{
	static UFunction* pFnListen = NULL;

	if ( ! pFnListen )
		pFnListen = (UFunction*) UObject::GObjObjects()->Data[ 38175 ];

	ATcpLink_execListen_Parms Listen_Parms;

	this->ProcessEvent ( pFnListen, &Listen_Parms, NULL );

	return Listen_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.BindPort
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PortNum                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseNextAvailable              ( CPF_OptionalParm | CPF_Parm )

int ATcpLink::BindPort ( int PortNum, unsigned long bUseNextAvailable )
{
	static UFunction* pFnBindPort = NULL;

	if ( ! pFnBindPort )
		pFnBindPort = (UFunction*) UObject::GObjObjects()->Data[ 38171 ];

	ATcpLink_execBindPort_Parms BindPort_Parms;
	BindPort_Parms.PortNum = PortNum;
	BindPort_Parms.bUseNextAvailable = bUseNextAvailable;

	this->ProcessEvent ( pFnBindPort, &BindPort_Parms, NULL );

	return BindPort_Parms.ReturnValue;
};

// Function IpDrv.OnlineChallengesInterfaceMcp.ReadPlayersCount
// [0x00000000] 
// Parameters infos:

void UOnlineChallengesInterfaceMcp::ReadPlayersCount ( )
{
	static UFunction* pFnReadPlayersCount = NULL;

	if ( ! pFnReadPlayersCount )
		pFnReadPlayersCount = (UFunction*) UObject::GObjObjects()->Data[ 37518 ];

	UOnlineChallengesInterfaceMcp_execReadPlayersCount_Parms ReadPlayersCount_Parms;

	this->ProcessEvent ( pFnReadPlayersCount, &ReadPlayersCount_Parms, NULL );
};

// Function IpDrv.OnlineChallengesInterfaceMcp.GetReq
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Challenge                      ( CPF_Parm )

int UOnlineChallengesInterfaceMcp::GetReq ( unsigned char Challenge )
{
	static UFunction* pFnGetReq = NULL;

	if ( ! pFnGetReq )
		pFnGetReq = (UFunction*) UObject::GObjObjects()->Data[ 37514 ];

	UOnlineChallengesInterfaceMcp_execGetReq_Parms GetReq_Parms;
	GetReq_Parms.Challenge = Challenge;

	this->ProcessEvent ( pFnGetReq, &GetReq_Parms, NULL );

	return GetReq_Parms.ReturnValue;
};

// Function IpDrv.OnlineChallengesInterfaceMcp.ClearOnReadPlayersCountCompletedDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadPlayersCountDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineChallengesInterfaceMcp::ClearOnReadPlayersCountCompletedDelegate ( struct FScriptDelegate ReadPlayersCountDelegate )
{
	static UFunction* pFnClearOnReadPlayersCountCompletedDelegate = NULL;

	if ( ! pFnClearOnReadPlayersCountCompletedDelegate )
		pFnClearOnReadPlayersCountCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37511 ];

	UOnlineChallengesInterfaceMcp_execClearOnReadPlayersCountCompletedDelegate_Parms ClearOnReadPlayersCountCompletedDelegate_Parms;
	memcpy ( &ClearOnReadPlayersCountCompletedDelegate_Parms.ReadPlayersCountDelegate, &ReadPlayersCountDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnReadPlayersCountCompletedDelegate, &ClearOnReadPlayersCountCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineChallengesInterfaceMcp.AddOnReadPlayersCountCompletedDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadPlayersCountDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineChallengesInterfaceMcp::AddOnReadPlayersCountCompletedDelegate ( struct FScriptDelegate ReadPlayersCountDelegate )
{
	static UFunction* pFnAddOnReadPlayersCountCompletedDelegate = NULL;

	if ( ! pFnAddOnReadPlayersCountCompletedDelegate )
		pFnAddOnReadPlayersCountCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37509 ];

	UOnlineChallengesInterfaceMcp_execAddOnReadPlayersCountCompletedDelegate_Parms AddOnReadPlayersCountCompletedDelegate_Parms;
	memcpy ( &AddOnReadPlayersCountCompletedDelegate_Parms.ReadPlayersCountDelegate, &ReadPlayersCountDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnReadPlayersCountCompletedDelegate, &AddOnReadPlayersCountCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineChallengesInterfaceMcp.OnReadPlayersCountCompleted
// [0x00000000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )
// int                            Count                          ( CPF_Parm )

void UOnlineChallengesInterfaceMcp::OnReadPlayersCountCompleted ( unsigned long bSuccessful, int Count )
{
	static UFunction* pFnOnReadPlayersCountCompleted = NULL;

	if ( ! pFnOnReadPlayersCountCompleted )
		pFnOnReadPlayersCountCompleted = (UFunction*) UObject::GObjObjects()->Data[ 37467 ];

	UOnlineChallengesInterfaceMcp_execOnReadPlayersCountCompleted_Parms OnReadPlayersCountCompleted_Parms;
	OnReadPlayersCountCompleted_Parms.bSuccessful = bSuccessful;
	OnReadPlayersCountCompleted_Parms.Count = Count;

	this->ProcessEvent ( pFnOnReadPlayersCountCompleted, &OnReadPlayersCountCompleted_Parms, NULL );
};

// Function IpDrv.OnlineChallengesInterfaceMcp.SendKeepAlive
// [0x00000000] 
// Parameters infos:
// struct FString                 PlayerName                     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineChallengesInterfaceMcp::SendKeepAlive ( struct FString PlayerName )
{
	static UFunction* pFnSendKeepAlive = NULL;

	if ( ! pFnSendKeepAlive )
		pFnSendKeepAlive = (UFunction*) UObject::GObjObjects()->Data[ 37505 ];

	UOnlineChallengesInterfaceMcp_execSendKeepAlive_Parms SendKeepAlive_Parms;
	memcpy ( &SendKeepAlive_Parms.PlayerName, &PlayerName, 0xC );

	this->ProcessEvent ( pFnSendKeepAlive, &SendKeepAlive_Parms, NULL );
};

// Function IpDrv.OnlineChallengesInterfaceMcp.IsChallengeUnLocked
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Challenge                      ( CPF_Parm )

bool UOnlineChallengesInterfaceMcp::IsChallengeUnLocked ( unsigned char Challenge )
{
	static UFunction* pFnIsChallengeUnLocked = NULL;

	if ( ! pFnIsChallengeUnLocked )
		pFnIsChallengeUnLocked = (UFunction*) UObject::GObjObjects()->Data[ 37501 ];

	UOnlineChallengesInterfaceMcp_execIsChallengeUnLocked_Parms IsChallengeUnLocked_Parms;
	IsChallengeUnLocked_Parms.Challenge = Challenge;

	this->ProcessEvent ( pFnIsChallengeUnLocked, &IsChallengeUnLocked_Parms, NULL );

	return IsChallengeUnLocked_Parms.ReturnValue;
};

// Function IpDrv.OnlineChallengesInterfaceMcp.GetValue
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Challenge                      ( CPF_Parm )

int UOnlineChallengesInterfaceMcp::GetValue ( unsigned char Challenge )
{
	static UFunction* pFnGetValue = NULL;

	if ( ! pFnGetValue )
		pFnGetValue = (UFunction*) UObject::GObjObjects()->Data[ 37497 ];

	UOnlineChallengesInterfaceMcp_execGetValue_Parms GetValue_Parms;
	GetValue_Parms.Challenge = Challenge;

	this->ProcessEvent ( pFnGetValue, &GetValue_Parms, NULL );

	return GetValue_Parms.ReturnValue;
};

// Function IpDrv.OnlineChallengesInterfaceMcp.ClearReadChallengeCompletedDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadChallengeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineChallengesInterfaceMcp::ClearReadChallengeCompletedDelegate ( struct FScriptDelegate ReadChallengeDelegate )
{
	static UFunction* pFnClearReadChallengeCompletedDelegate = NULL;

	if ( ! pFnClearReadChallengeCompletedDelegate )
		pFnClearReadChallengeCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37494 ];

	UOnlineChallengesInterfaceMcp_execClearReadChallengeCompletedDelegate_Parms ClearReadChallengeCompletedDelegate_Parms;
	memcpy ( &ClearReadChallengeCompletedDelegate_Parms.ReadChallengeDelegate, &ReadChallengeDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadChallengeCompletedDelegate, &ClearReadChallengeCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineChallengesInterfaceMcp.AddReadChallengeCompletedDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadChallengeDelegate          ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineChallengesInterfaceMcp::AddReadChallengeCompletedDelegate ( struct FScriptDelegate ReadChallengeDelegate )
{
	static UFunction* pFnAddReadChallengeCompletedDelegate = NULL;

	if ( ! pFnAddReadChallengeCompletedDelegate )
		pFnAddReadChallengeCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37492 ];

	UOnlineChallengesInterfaceMcp_execAddReadChallengeCompletedDelegate_Parms AddReadChallengeCompletedDelegate_Parms;
	memcpy ( &AddReadChallengeCompletedDelegate_Parms.ReadChallengeDelegate, &ReadChallengeDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadChallengeCompletedDelegate, &AddReadChallengeCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineChallengesInterfaceMcp.OnReadChallengeCompleted
// [0x00000000] 
// Parameters infos:
// unsigned long                  bSuccessful                    ( CPF_Parm )
// unsigned char                  Challenge                      ( CPF_Parm )

void UOnlineChallengesInterfaceMcp::OnReadChallengeCompleted ( unsigned long bSuccessful, unsigned char Challenge )
{
	static UFunction* pFnOnReadChallengeCompleted = NULL;

	if ( ! pFnOnReadChallengeCompleted )
		pFnOnReadChallengeCompleted = (UFunction*) UObject::GObjObjects()->Data[ 37461 ];

	UOnlineChallengesInterfaceMcp_execOnReadChallengeCompleted_Parms OnReadChallengeCompleted_Parms;
	OnReadChallengeCompleted_Parms.bSuccessful = bSuccessful;
	OnReadChallengeCompleted_Parms.Challenge = Challenge;

	this->ProcessEvent ( pFnOnReadChallengeCompleted, &OnReadChallengeCompleted_Parms, NULL );
};

// Function IpDrv.OnlineChallengesInterfaceMcp.ReadChallenge
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  Challenge                      ( CPF_Parm )

bool UOnlineChallengesInterfaceMcp::ReadChallenge ( unsigned char Challenge )
{
	static UFunction* pFnReadChallenge = NULL;

	if ( ! pFnReadChallenge )
		pFnReadChallenge = (UFunction*) UObject::GObjObjects()->Data[ 37487 ];

	UOnlineChallengesInterfaceMcp_execReadChallenge_Parms ReadChallenge_Parms;
	ReadChallenge_Parms.Challenge = Challenge;

	this->ProcessEvent ( pFnReadChallenge, &ReadChallenge_Parms, NULL );

	return ReadChallenge_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadHardwareData
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// struct FString                 PlayerNick                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineEventsInterfaceMcp::UploadHardwareData ( struct FUniqueNetId UniqueId, struct FString PlayerNick )
{
	static UFunction* pFnUploadHardwareData = NULL;

	if ( ! pFnUploadHardwareData )
		pFnUploadHardwareData = (UFunction*) UObject::GObjObjects()->Data[ 37541 ];

	UOnlineEventsInterfaceMcp_execUploadHardwareData_Parms UploadHardwareData_Parms;
	memcpy ( &UploadHardwareData_Parms.UniqueId, &UniqueId, 0x8 );
	memcpy ( &UploadHardwareData_Parms.PlayerNick, &PlayerNick, 0xC );

	this->ProcessEvent ( pFnUploadHardwareData, &UploadHardwareData_Parms, NULL );

	return UploadHardwareData_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameplayEvents*   Events                         ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData ( class UOnlineGameplayEvents* Events )
{
	static UFunction* pFnUploadGameplayEventsData = NULL;

	if ( ! pFnUploadGameplayEventsData )
		pFnUploadGameplayEventsData = (UFunction*) UObject::GObjObjects()->Data[ 37538 ];

	UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms UploadGameplayEventsData_Parms;
	UploadGameplayEventsData_Parms.Events = Events;

	this->ProcessEvent ( pFnUploadGameplayEventsData, &UploadGameplayEventsData_Parms, NULL );

	return UploadGameplayEventsData_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadProfileData
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// struct FString                 PlayerNick                     ( CPF_Parm | CPF_NeedCtorLink )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UploadProfileData ( struct FUniqueNetId UniqueId, struct FString PlayerNick, class UOnlineProfileSettings* ProfileSettings )
{
	static UFunction* pFnUploadProfileData = NULL;

	if ( ! pFnUploadProfileData )
		pFnUploadProfileData = (UFunction*) UObject::GObjObjects()->Data[ 37533 ];

	UOnlineEventsInterfaceMcp_execUploadProfileData_Parms UploadProfileData_Parms;
	memcpy ( &UploadProfileData_Parms.UniqueId, &UniqueId, 0x8 );
	memcpy ( &UploadProfileData_Parms.PlayerNick, &PlayerNick, 0xC );
	UploadProfileData_Parms.ProfileSettings = ProfileSettings;

	this->ProcessEvent ( pFnUploadProfileData, &UploadProfileData_Parms, NULL );

	return UploadProfileData_Parms.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

struct FString UOnlineNewsInterfaceMcp::GetNews ( unsigned char LocalUserNum, unsigned char NewsType )
{
	static UFunction* pFnGetNews = NULL;

	if ( ! pFnGetNews )
		pFnGetNews = (UFunction*) UObject::GObjObjects()->Data[ 37863 ];

	UOnlineNewsInterfaceMcp_execGetNews_Parms GetNews_Parms;
	GetNews_Parms.LocalUserNum = LocalUserNum;
	GetNews_Parms.NewsType = NewsType;

	this->ProcessEvent ( pFnGetNews, &GetNews_Parms, NULL );

	return GetNews_Parms.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadGameNewsDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate ( struct FScriptDelegate ReadGameNewsDelegate )
{
	static UFunction* pFnClearReadNewsCompletedDelegate = NULL;

	if ( ! pFnClearReadNewsCompletedDelegate )
		pFnClearReadNewsCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37860 ];

	UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms ClearReadNewsCompletedDelegate_Parms;
	memcpy ( &ClearReadNewsCompletedDelegate_Parms.ReadGameNewsDelegate, &ReadGameNewsDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadNewsCompletedDelegate, &ClearReadNewsCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadNewsDelegate               ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate ( struct FScriptDelegate ReadNewsDelegate )
{
	static UFunction* pFnAddReadNewsCompletedDelegate = NULL;

	if ( ! pFnAddReadNewsCompletedDelegate )
		pFnAddReadNewsCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37858 ];

	UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms AddReadNewsCompletedDelegate_Parms;
	memcpy ( &AddReadNewsCompletedDelegate_Parms.ReadNewsDelegate, &ReadNewsDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadNewsCompletedDelegate, &AddReadNewsCompletedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00000000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted ( unsigned long bWasSuccessful, unsigned char NewsType )
{
	static UFunction* pFnOnReadNewsCompleted = NULL;

	if ( ! pFnOnReadNewsCompleted )
		pFnOnReadNewsCompleted = (UFunction*) UObject::GObjObjects()->Data[ 37841 ];

	UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms OnReadNewsCompleted_Parms;
	OnReadNewsCompleted_Parms.bWasSuccessful = bWasSuccessful;
	OnReadNewsCompleted_Parms.NewsType = NewsType;

	this->ProcessEvent ( pFnOnReadNewsCompleted, &OnReadNewsCompleted_Parms, NULL );
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

bool UOnlineNewsInterfaceMcp::ReadNews ( unsigned char LocalUserNum, unsigned char NewsType )
{
	static UFunction* pFnReadNews = NULL;

	if ( ! pFnReadNews )
		pFnReadNews = (UFunction*) UObject::GObjObjects()->Data[ 37852 ];

	UOnlineNewsInterfaceMcp_execReadNews_Parms ReadNews_Parms;
	ReadNews_Parms.LocalUserNum = LocalUserNum;
	ReadNews_Parms.NewsType = NewsType;

	this->ProcessEvent ( pFnReadNews, &ReadNews_Parms, NULL );

	return ReadNews_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles ( )
{
	static UFunction* pFnClearDownloadedFiles = NULL;

	if ( ! pFnClearDownloadedFiles )
		pFnClearDownloadedFiles = (UFunction*) UObject::GObjObjects()->Data[ 37212 ];

	UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	this->ProcessEvent ( pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, NULL );

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00000000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineTitleFileDownloadMcp::GetTitleFileState ( struct FString Filename )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 37973 ];

	UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy ( &GetTitleFileState_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 37205 ];

	UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy ( &GetTitleFileContents_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );

	if ( FileContents )
		memcpy ( FileContents, &GetTitleFileContents_Parms.FileContents, 0xC );

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearReadManifestCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadManifestCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::ClearReadManifestCompleteDelegate ( struct FScriptDelegate ReadManifestCompleteDelegate )
{
	static UFunction* pFnClearReadManifestCompleteDelegate = NULL;

	if ( ! pFnClearReadManifestCompleteDelegate )
		pFnClearReadManifestCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37967 ];

	UOnlineTitleFileDownloadMcp_execClearReadManifestCompleteDelegate_Parms ClearReadManifestCompleteDelegate_Parms;
	memcpy ( &ClearReadManifestCompleteDelegate_Parms.ReadManifestCompleteDelegate, &ReadManifestCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadManifestCompleteDelegate, &ClearReadManifestCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddReadManifestCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadManifestCompleteDelegate   ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::AddReadManifestCompleteDelegate ( struct FScriptDelegate ReadManifestCompleteDelegate )
{
	static UFunction* pFnAddReadManifestCompleteDelegate = NULL;

	if ( ! pFnAddReadManifestCompleteDelegate )
		pFnAddReadManifestCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37965 ];

	UOnlineTitleFileDownloadMcp_execAddReadManifestCompleteDelegate_Parms AddReadManifestCompleteDelegate_Parms;
	memcpy ( &AddReadManifestCompleteDelegate_Parms.ReadManifestCompleteDelegate, &ReadManifestCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadManifestCompleteDelegate, &AddReadManifestCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearReadTitleFileCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37962 ];

	UOnlineTitleFileDownloadMcp_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy ( &ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddReadTitleFileCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37960 ];

	UOnlineTitleFileDownloadMcp_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy ( &AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadManifest
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineTitleFileDownloadMcp::ReadManifest ( )
{
	static UFunction* pFnReadManifest = NULL;

	if ( ! pFnReadManifest )
		pFnReadManifest = (UFunction*) UObject::GObjObjects()->Data[ 37958 ];

	UOnlineTitleFileDownloadMcp_execReadManifest_Parms ReadManifest_Parms;

	this->ProcessEvent ( pFnReadManifest, &ReadManifest_Parms, NULL );

	return ReadManifest_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::ReadTitleFile ( struct FString FileToRead )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 37195 ];

	UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms ReadTitleFile_Parms;
	memcpy ( &ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC );

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );

	return ReadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnReadManifestComplete
// [0x00000000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// TArray< unsigned char >        manifest                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::OnReadManifestComplete ( unsigned long bWasSuccessful, TArray< unsigned char > manifest )
{
	static UFunction* pFnOnReadManifestComplete = NULL;

	if ( ! pFnOnReadManifestComplete )
		pFnOnReadManifestComplete = (UFunction*) UObject::GObjObjects()->Data[ 37941 ];

	UOnlineTitleFileDownloadMcp_execOnReadManifestComplete_Parms OnReadManifestComplete_Parms;
	OnReadManifestComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadManifestComplete_Parms.manifest, &manifest, 0xC );

	this->ProcessEvent ( pFnOnReadManifestComplete, &OnReadManifestComplete_Parms, NULL );
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnReadTitleFileComplete
// [0x00000000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 37938 ];

	UOnlineTitleFileDownloadMcp_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy ( &OnReadTitleFileComplete_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00000000] 
// Parameters infos:

void UMeshBeacon::DestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37304 ];

	UMeshBeacon_execDestroyBeacon_Parms DestroyBeacon_Parms;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UMeshBeaconClient::SendHostNewGameSessionResponse ( unsigned long bSuccess, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnSendHostNewGameSessionResponse = NULL;

	if ( ! pFnSendHostNewGameSessionResponse )
		pFnSendHostNewGameSessionResponse = (UFunction*) UObject::GObjObjects()->Data[ 37364 ];

	UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms SendHostNewGameSessionResponse_Parms;
	SendHostNewGameSessionResponse_Parms.bSuccess = bSuccess;
	memcpy ( &SendHostNewGameSessionResponse_Parms.SessionName, &SessionName, 0x8 );
	SendHostNewGameSessionResponse_Parms.SearchClass = SearchClass;

	this->ProcessEvent ( pFnSendHostNewGameSessionResponse, &SendHostNewGameSessionResponse_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &SendHostNewGameSessionResponse_Parms.PlatformSpecificInfo, 0x50 );

	return SendHostNewGameSessionResponse_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// TArray< struct FPlayerMember > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconClient::OnCreateNewSessionRequestReceived ( struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players )
{
	static UFunction* pFnOnCreateNewSessionRequestReceived = NULL;

	if ( ! pFnOnCreateNewSessionRequestReceived )
		pFnOnCreateNewSessionRequestReceived = (UFunction*) UObject::GObjObjects()->Data[ 37306 ];

	UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms OnCreateNewSessionRequestReceived_Parms;
	memcpy ( &OnCreateNewSessionRequestReceived_Parms.SessionName, &SessionName, 0x8 );
	OnCreateNewSessionRequestReceived_Parms.SearchClass = SearchClass;

	this->ProcessEvent ( pFnOnCreateNewSessionRequestReceived, &OnCreateNewSessionRequestReceived_Parms, NULL );

	if ( Players )
		memcpy ( Players, &OnCreateNewSessionRequestReceived_Parms.Players, 0xC );
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconClient::OnTravelRequestReceived ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnOnTravelRequestReceived = NULL;

	if ( ! pFnOnTravelRequestReceived )
		pFnOnTravelRequestReceived = (UFunction*) UObject::GObjObjects()->Data[ 37308 ];

	UMeshBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy ( &OnTravelRequestReceived_Parms.SessionName, &SessionName, 0x8 );
	OnTravelRequestReceived_Parms.SearchClass = SearchClass;

	this->ProcessEvent ( pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &OnTravelRequestReceived_Parms.PlatformSpecificInfo, 0x50 );
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00000000] 
// Parameters infos:
// unsigned char                  TestType                       ( CPF_Parm )
// unsigned char                  TestResult                     ( CPF_Parm )
// struct FConnectionBandwidthStats BandwidthStats                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconClient::OnReceivedBandwidthTestResults ( unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats )
{
	static UFunction* pFnOnReceivedBandwidthTestResults = NULL;

	if ( ! pFnOnReceivedBandwidthTestResults )
		pFnOnReceivedBandwidthTestResults = (UFunction*) UObject::GObjObjects()->Data[ 37310 ];

	UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms OnReceivedBandwidthTestResults_Parms;
	OnReceivedBandwidthTestResults_Parms.TestType = TestType;
	OnReceivedBandwidthTestResults_Parms.TestResult = TestResult;

	this->ProcessEvent ( pFnOnReceivedBandwidthTestResults, &OnReceivedBandwidthTestResults_Parms, NULL );

	if ( BandwidthStats )
		memcpy ( BandwidthStats, &OnReceivedBandwidthTestResults_Parms.BandwidthStats, 0xC );
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00000000] 
// Parameters infos:
// unsigned char                  TestType                       ( CPF_Parm )

void UMeshBeaconClient::OnReceivedBandwidthTestRequest ( unsigned char TestType )
{
	static UFunction* pFnOnReceivedBandwidthTestRequest = NULL;

	if ( ! pFnOnReceivedBandwidthTestRequest )
		pFnOnReceivedBandwidthTestRequest = (UFunction*) UObject::GObjObjects()->Data[ 37312 ];

	UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms OnReceivedBandwidthTestRequest_Parms;
	OnReceivedBandwidthTestRequest_Parms.TestType = TestType;

	this->ProcessEvent ( pFnOnReceivedBandwidthTestRequest, &OnReceivedBandwidthTestRequest_Parms, NULL );
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00000000] 
// Parameters infos:
// unsigned char                  ConnectionResult               ( CPF_Parm )

void UMeshBeaconClient::OnConnectionRequestResult ( unsigned char ConnectionResult )
{
	static UFunction* pFnOnConnectionRequestResult = NULL;

	if ( ! pFnOnConnectionRequestResult )
		pFnOnConnectionRequestResult = (UFunction*) UObject::GObjObjects()->Data[ 37314 ];

	UMeshBeaconClient_execOnConnectionRequestResult_Parms OnConnectionRequestResult_Parms;
	OnConnectionRequestResult_Parms.ConnectionResult = ConnectionResult;

	this->ProcessEvent ( pFnOnConnectionRequestResult, &OnConnectionRequestResult_Parms, NULL );
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TestType                       ( CPF_Parm )
// int                            TestBufferSize                 ( CPF_Parm )

bool UMeshBeaconClient::BeginBandwidthTest ( unsigned char TestType, int TestBufferSize )
{
	static UFunction* pFnBeginBandwidthTest = NULL;

	if ( ! pFnBeginBandwidthTest )
		pFnBeginBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 37348 ];

	UMeshBeaconClient_execBeginBandwidthTest_Parms BeginBandwidthTest_Parms;
	BeginBandwidthTest_Parms.TestType = TestType;
	BeginBandwidthTest_Parms.TestBufferSize = TestBufferSize;

	this->ProcessEvent ( pFnBeginBandwidthTest, &BeginBandwidthTest_Parms, NULL );

	return BeginBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bRegisterSecureAddress         ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FClientConnectionRequest ClientRequest                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconClient::RequestConnection ( unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest )
{
	static UFunction* pFnRequestConnection = NULL;

	if ( ! pFnRequestConnection )
		pFnRequestConnection = (UFunction*) UObject::GObjObjects()->Data[ 37343 ];

	UMeshBeaconClient_execRequestConnection_Parms RequestConnection_Parms;
	RequestConnection_Parms.bRegisterSecureAddress = bRegisterSecureAddress;

	this->ProcessEvent ( pFnRequestConnection, &RequestConnection_Parms, NULL );

	if ( DesiredHost )
		memcpy ( DesiredHost, &RequestConnection_Parms.DesiredHost, 0xC );

	if ( ClientRequest )
		memcpy ( ClientRequest, &RequestConnection_Parms.ClientRequest, 0x24 );

	return RequestConnection_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00000000] 
// Parameters infos:

void UMeshBeaconClient::DestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37342 ];

	UMeshBeaconClient_execDestroyBeacon_Parms DestroyBeacon_Parms;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00000000] 
// Parameters infos:
// unsigned long                  bSucceeded                     ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult ( unsigned long bSucceeded, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnOnReceivedClientCreateNewSessionResult = NULL;

	if ( ! pFnOnReceivedClientCreateNewSessionResult )
		pFnOnReceivedClientCreateNewSessionResult = (UFunction*) UObject::GObjObjects()->Data[ 37395 ];

	UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms OnReceivedClientCreateNewSessionResult_Parms;
	OnReceivedClientCreateNewSessionResult_Parms.bSucceeded = bSucceeded;
	memcpy ( &OnReceivedClientCreateNewSessionResult_Parms.SessionName, &SessionName, 0x8 );
	OnReceivedClientCreateNewSessionResult_Parms.SearchClass = SearchClass;

	this->ProcessEvent ( pFnOnReceivedClientCreateNewSessionResult, &OnReceivedClientCreateNewSessionResult_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &OnReceivedClientCreateNewSessionResult_Parms.PlatformSpecificInfo, 0x50 );
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// TArray< struct FPlayerMember > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconHost::RequestClientCreateNewSession ( struct FUniqueNetId PlayerNetId, struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players )
{
	static UFunction* pFnRequestClientCreateNewSession = NULL;

	if ( ! pFnRequestClientCreateNewSession )
		pFnRequestClientCreateNewSession = (UFunction*) UObject::GObjObjects()->Data[ 37445 ];

	UMeshBeaconHost_execRequestClientCreateNewSession_Parms RequestClientCreateNewSession_Parms;
	memcpy ( &RequestClientCreateNewSession_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	memcpy ( &RequestClientCreateNewSession_Parms.SessionName, &SessionName, 0x8 );
	RequestClientCreateNewSession_Parms.SearchClass = SearchClass;

	this->ProcessEvent ( pFnRequestClientCreateNewSession, &RequestClientCreateNewSession_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RequestClientCreateNewSession_Parms.Players, 0xC );

	return RequestClientCreateNewSession_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::TellClientsToTravel ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnTellClientsToTravel = NULL;

	if ( ! pFnTellClientsToTravel )
		pFnTellClientsToTravel = (UFunction*) UObject::GObjObjects()->Data[ 37441 ];

	UMeshBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy ( &TellClientsToTravel_Parms.SessionName, &SessionName, 0x8 );
	TellClientsToTravel_Parms.SearchClass = SearchClass;

	this->ProcessEvent ( pFnTellClientsToTravel, &TellClientsToTravel_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &TellClientsToTravel_Parms.PlatformSpecificInfo, 0x50 );
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00000000] 
// Parameters infos:

void UMeshBeaconHost::OnAllPendingPlayersConnected ( )
{
	static UFunction* pFnOnAllPendingPlayersConnected = NULL;

	if ( ! pFnOnAllPendingPlayersConnected )
		pFnOnAllPendingPlayersConnected = (UFunction*) UObject::GObjObjects()->Data[ 37397 ];

	UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms OnAllPendingPlayersConnected_Parms;

	this->ProcessEvent ( pFnOnAllPendingPlayersConnected, &OnAllPendingPlayersConnected_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconHost::AllPlayersConnected ( TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnAllPlayersConnected = NULL;

	if ( ! pFnAllPlayersConnected )
		pFnAllPlayersConnected = (UFunction*) UObject::GObjObjects()->Data[ 37437 ];

	UMeshBeaconHost_execAllPlayersConnected_Parms AllPlayersConnected_Parms;

	this->ProcessEvent ( pFnAllPlayersConnected, &AllPlayersConnected_Parms, NULL );

	if ( Players )
		memcpy ( Players, &AllPlayersConnected_Parms.Players, 0xC );

	return AllPlayersConnected_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )

int UMeshBeaconHost::GetConnectionIndexForPlayer ( struct FUniqueNetId PlayerNetId )
{
	static UFunction* pFnGetConnectionIndexForPlayer = NULL;

	if ( ! pFnGetConnectionIndexForPlayer )
		pFnGetConnectionIndexForPlayer = (UFunction*) UObject::GObjObjects()->Data[ 37434 ];

	UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms GetConnectionIndexForPlayer_Parms;
	memcpy ( &GetConnectionIndexForPlayer_Parms.PlayerNetId, &PlayerNetId, 0x8 );

	this->ProcessEvent ( pFnGetConnectionIndexForPlayer, &GetConnectionIndexForPlayer_Parms, NULL );

	return GetConnectionIndexForPlayer_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00000000] 
// Parameters infos:
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconHost::SetPendingPlayerConnections ( TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnSetPendingPlayerConnections = NULL;

	if ( ! pFnSetPendingPlayerConnections )
		pFnSetPendingPlayerConnections = (UFunction*) UObject::GObjObjects()->Data[ 37431 ];

	UMeshBeaconHost_execSetPendingPlayerConnections_Parms SetPendingPlayerConnections_Parms;

	this->ProcessEvent ( pFnSetPendingPlayerConnections, &SetPendingPlayerConnections_Parms, NULL );

	if ( Players )
		memcpy ( Players, &SetPendingPlayerConnections_Parms.Players, 0xC );
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00000000] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )
// unsigned char                  TestResult                     ( CPF_Parm )
// struct FConnectionBandwidthStats BandwidthStats                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::OnFinishedBandwidthTest ( struct FUniqueNetId PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats )
{
	static UFunction* pFnOnFinishedBandwidthTest = NULL;

	if ( ! pFnOnFinishedBandwidthTest )
		pFnOnFinishedBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 37399 ];

	UMeshBeaconHost_execOnFinishedBandwidthTest_Parms OnFinishedBandwidthTest_Parms;
	memcpy ( &OnFinishedBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	OnFinishedBandwidthTest_Parms.TestType = TestType;
	OnFinishedBandwidthTest_Parms.TestResult = TestResult;

	this->ProcessEvent ( pFnOnFinishedBandwidthTest, &OnFinishedBandwidthTest_Parms, NULL );

	if ( BandwidthStats )
		memcpy ( BandwidthStats, &OnFinishedBandwidthTest_Parms.BandwidthStats, 0xC );
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00000000] 
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )

void UMeshBeaconHost::OnStartedBandwidthTest ( struct FUniqueNetId PlayerNetId, unsigned char TestType )
{
	static UFunction* pFnOnStartedBandwidthTest = NULL;

	if ( ! pFnOnStartedBandwidthTest )
		pFnOnStartedBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 37401 ];

	UMeshBeaconHost_execOnStartedBandwidthTest_Parms OnStartedBandwidthTest_Parms;
	memcpy ( &OnStartedBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	OnStartedBandwidthTest_Parms.TestType = TestType;

	this->ProcessEvent ( pFnOnStartedBandwidthTest, &OnStartedBandwidthTest_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00000000] 
// Parameters infos:
// struct FClientMeshBeaconConnection NewClientConnection            ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconHost::OnReceivedClientConnectionRequest ( struct FClientMeshBeaconConnection* NewClientConnection )
{
	static UFunction* pFnOnReceivedClientConnectionRequest = NULL;

	if ( ! pFnOnReceivedClientConnectionRequest )
		pFnOnReceivedClientConnectionRequest = (UFunction*) UObject::GObjObjects()->Data[ 37403 ];

	UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms OnReceivedClientConnectionRequest_Parms;

	this->ProcessEvent ( pFnOnReceivedClientConnectionRequest, &OnReceivedClientConnectionRequest_Parms, NULL );

	if ( NewClientConnection )
		memcpy ( NewClientConnection, &OnReceivedClientConnectionRequest_Parms.NewClientConnection, 0x58 );
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00000000] 
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void UMeshBeaconHost::AllowBandwidthTesting ( unsigned long bEnabled )
{
	static UFunction* pFnAllowBandwidthTesting = NULL;

	if ( ! pFnAllowBandwidthTesting )
		pFnAllowBandwidthTesting = (UFunction*) UObject::GObjObjects()->Data[ 37422 ];

	UMeshBeaconHost_execAllowBandwidthTesting_Parms AllowBandwidthTesting_Parms;
	AllowBandwidthTesting_Parms.bEnabled = bEnabled;

	this->ProcessEvent ( pFnAllowBandwidthTesting, &AllowBandwidthTesting_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00000000] 
// Parameters infos:

void UMeshBeaconHost::CancelPendingBandwidthTests ( )
{
	static UFunction* pFnCancelPendingBandwidthTests = NULL;

	if ( ! pFnCancelPendingBandwidthTests )
		pFnCancelPendingBandwidthTests = (UFunction*) UObject::GObjObjects()->Data[ 37421 ];

	UMeshBeaconHost_execCancelPendingBandwidthTests_Parms CancelPendingBandwidthTests_Parms;

	this->ProcessEvent ( pFnCancelPendingBandwidthTests, &CancelPendingBandwidthTests_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMeshBeaconHost::HasPendingBandwidthTest ( )
{
	static UFunction* pFnHasPendingBandwidthTest = NULL;

	if ( ! pFnHasPendingBandwidthTest )
		pFnHasPendingBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 37419 ];

	UMeshBeaconHost_execHasPendingBandwidthTest_Parms HasPendingBandwidthTest_Parms;

	this->ProcessEvent ( pFnHasPendingBandwidthTest, &HasPendingBandwidthTest_Parms, NULL );

	return HasPendingBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00000000] 
// Parameters infos:

void UMeshBeaconHost::CancelInProgressBandwidthTests ( )
{
	static UFunction* pFnCancelInProgressBandwidthTests = NULL;

	if ( ! pFnCancelInProgressBandwidthTests )
		pFnCancelInProgressBandwidthTests = (UFunction*) UObject::GObjObjects()->Data[ 37418 ];

	UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms CancelInProgressBandwidthTests_Parms;

	this->ProcessEvent ( pFnCancelInProgressBandwidthTests, &CancelInProgressBandwidthTests_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMeshBeaconHost::HasInProgressBandwidthTest ( )
{
	static UFunction* pFnHasInProgressBandwidthTest = NULL;

	if ( ! pFnHasInProgressBandwidthTest )
		pFnHasInProgressBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 37416 ];

	UMeshBeaconHost_execHasInProgressBandwidthTest_Parms HasInProgressBandwidthTest_Parms;

	this->ProcessEvent ( pFnHasInProgressBandwidthTest, &HasInProgressBandwidthTest_Parms, NULL );

	return HasInProgressBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )
// int                            TestBufferSize                 ( CPF_Parm )

bool UMeshBeaconHost::RequestClientBandwidthTest ( struct FUniqueNetId PlayerNetId, unsigned char TestType, int TestBufferSize )
{
	static UFunction* pFnRequestClientBandwidthTest = NULL;

	if ( ! pFnRequestClientBandwidthTest )
		pFnRequestClientBandwidthTest = (UFunction*) UObject::GObjObjects()->Data[ 37411 ];

	UMeshBeaconHost_execRequestClientBandwidthTest_Parms RequestClientBandwidthTest_Parms;
	memcpy ( &RequestClientBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x8 );
	RequestClientBandwidthTest_Parms.TestType = TestType;
	RequestClientBandwidthTest_Parms.TestBufferSize = TestBufferSize;

	this->ProcessEvent ( pFnRequestClientBandwidthTest, &RequestClientBandwidthTest_Parms, NULL );

	return RequestClientBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00000000] 
// Parameters infos:

void UMeshBeaconHost::DestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37410 ];

	UMeshBeaconHost_execDestroyBeacon_Parms DestroyBeacon_Parms;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            InOwningPlayerId               ( CPF_Parm )

bool UMeshBeaconHost::InitHostBeacon ( struct FUniqueNetId InOwningPlayerId )
{
	static UFunction* pFnInitHostBeacon = NULL;

	if ( ! pFnInitHostBeacon )
		pFnInitHostBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37407 ];

	UMeshBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	memcpy ( &InitHostBeacon_Parms.InOwningPlayerId, &InOwningPlayerId, 0x8 );

	this->ProcessEvent ( pFnInitHostBeacon, &InitHostBeacon_Parms, NULL );

	return InitHostBeacon_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.ReadyToVerifyDLCProfile
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemCommonImpl::ReadyToVerifyDLCProfile ( )
{
	static UFunction* pFnReadyToVerifyDLCProfile = NULL;

	if ( ! pFnReadyToVerifyDLCProfile )
		pFnReadyToVerifyDLCProfile = (UFunction*) UObject::GObjObjects()->Data[ 37934 ];

	UOnlineSubsystemCommonImpl_execReadyToVerifyDLCProfile_Parms ReadyToVerifyDLCProfile_Parms;

	this->ProcessEvent ( pFnReadyToVerifyDLCProfile, &ReadyToVerifyDLCProfile_Parms, NULL );

	return ReadyToVerifyDLCProfile_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.CanCloseLoadingMovie
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineSubsystemCommonImpl::CanCloseLoadingMovie ( )
{
	static UFunction* pFnCanCloseLoadingMovie = NULL;

	if ( ! pFnCanCloseLoadingMovie )
		pFnCanCloseLoadingMovie = (UFunction*) UObject::GObjObjects()->Data[ 37932 ];

	UOnlineSubsystemCommonImpl_execCanCloseLoadingMovie_Parms CanCloseLoadingMovie_Parms;

	this->ProcessEvent ( pFnCanCloseLoadingMovie, &CanCloseLoadingMovie_Parms, NULL );

	return CanCloseLoadingMovie_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  OutRegisteredPlayers           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* OutRegisteredPlayers )
{
	static UFunction* pFnGetRegisteredPlayers = NULL;

	if ( ! pFnGetRegisteredPlayers )
		pFnGetRegisteredPlayers = (UFunction*) UObject::GObjObjects()->Data[ 37926 ];

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms GetRegisteredPlayers_Parms;
	memcpy ( &GetRegisteredPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetRegisteredPlayers, &GetRegisteredPlayers_Parms, NULL );

	if ( OutRegisteredPlayers )
		memcpy ( OutRegisteredPlayers, &GetRegisteredPlayers_Parms.OutRegisteredPlayers, 0xC );
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerConnected
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemCommonImpl::IsPlayerConnected ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsPlayerConnected = NULL;

	if ( ! pFnIsPlayerConnected )
		pFnIsPlayerConnected = (UFunction*) UObject::GObjObjects()->Data[ 37923 ];

	UOnlineSubsystemCommonImpl_execIsPlayerConnected_Parms IsPlayerConnected_Parms;
	memcpy ( &IsPlayerConnected_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsPlayerConnected, &IsPlayerConnected_Parms, NULL );

	return IsPlayerConnected_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemCommonImpl::IsPlayerInSession ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnIsPlayerInSession = NULL;

	if ( ! pFnIsPlayerInSession )
		pFnIsPlayerInSession = (UFunction*) UObject::GObjObjects()->Data[ 37919 ];

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms IsPlayerInSession_Parms;
	memcpy ( &IsPlayerInSession_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &IsPlayerInSession_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnIsPlayerInSession, &IsPlayerInSession_Parms, NULL );

	return IsPlayerInSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerUniqueNetIdFromIndex
// [0x00000000] 
// Parameters infos:
// struct FUniqueNetId            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            UserIndex                      ( CPF_Parm )

struct FUniqueNetId UOnlineSubsystemCommonImpl::GetPlayerUniqueNetIdFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerUniqueNetIdFromIndex = NULL;

	if ( ! pFnGetPlayerUniqueNetIdFromIndex )
		pFnGetPlayerUniqueNetIdFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 37916 ];

	UOnlineSubsystemCommonImpl_execGetPlayerUniqueNetIdFromIndex_Parms GetPlayerUniqueNetIdFromIndex_Parms;
	GetPlayerUniqueNetIdFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerUniqueNetIdFromIndex, &GetPlayerUniqueNetIdFromIndex_Parms, NULL );

	return GetPlayerUniqueNetIdFromIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemCommonImpl::GetPlayerNicknameFromIndex ( int UserIndex )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 37913 ];

	UOnlineSubsystemCommonImpl_execGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.DestroyPartyInviteConnectionBeacon
// [0x00000000] 
// Parameters infos:

void UOnlineSubsystemCommonImpl::DestroyPartyInviteConnectionBeacon ( )
{
	static UFunction* pFnDestroyPartyInviteConnectionBeacon = NULL;

	if ( ! pFnDestroyPartyInviteConnectionBeacon )
		pFnDestroyPartyInviteConnectionBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37912 ];

	UOnlineSubsystemCommonImpl_execDestroyPartyInviteConnectionBeacon_Parms DestroyPartyInviteConnectionBeacon_Parms;

	this->ProcessEvent ( pFnDestroyPartyInviteConnectionBeacon, &DestroyPartyInviteConnectionBeacon_Parms, NULL );
};

// Function IpDrv.OnlineSubsystemCommonImpl.CreatePartyInviteConnectionBeacon
// [0x00000000] 
// Parameters infos:
// class UPartyBeaconHost*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPartyBeaconHost* UOnlineSubsystemCommonImpl::CreatePartyInviteConnectionBeacon ( )
{
	static UFunction* pFnCreatePartyInviteConnectionBeacon = NULL;

	if ( ! pFnCreatePartyInviteConnectionBeacon )
		pFnCreatePartyInviteConnectionBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37910 ];

	UOnlineSubsystemCommonImpl_execCreatePartyInviteConnectionBeacon_Parms CreatePartyInviteConnectionBeacon_Parms;

	this->ProcessEvent ( pFnCreatePartyInviteConnectionBeacon, &CreatePartyInviteConnectionBeacon_Parms, NULL );

	return CreatePartyInviteConnectionBeacon_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.DiscardClientConnection
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            ClientId                       ( CPF_Parm )

bool UOnlineSubsystemCommonImpl::DiscardClientConnection ( struct FUniqueNetId ClientId )
{
	static UFunction* pFnDiscardClientConnection = NULL;

	if ( ! pFnDiscardClientConnection )
		pFnDiscardClientConnection = (UFunction*) UObject::GObjObjects()->Data[ 37902 ];

	UOnlineSubsystemCommonImpl_execDiscardClientConnection_Parms DiscardClientConnection_Parms;
	memcpy ( &DiscardClientConnection_Parms.ClientId, &ClientId, 0x8 );

	this->ProcessEvent ( pFnDiscardClientConnection, &DiscardClientConnection_Parms, NULL );

	return DiscardClientConnection_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.DestroyHostSessionReservationBeacon
// [0x00000000] 
// Parameters infos:

void UOnlineSubsystemCommonImpl::DestroyHostSessionReservationBeacon ( )
{
	static UFunction* pFnDestroyHostSessionReservationBeacon = NULL;

	if ( ! pFnDestroyHostSessionReservationBeacon )
		pFnDestroyHostSessionReservationBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37897 ];

	UOnlineSubsystemCommonImpl_execDestroyHostSessionReservationBeacon_Parms DestroyHostSessionReservationBeacon_Parms;

	this->ProcessEvent ( pFnDestroyHostSessionReservationBeacon, &DestroyHostSessionReservationBeacon_Parms, NULL );
};

// Function IpDrv.OnlineSubsystemCommonImpl.CreateHostSessionReservationBeacon
// [0x00000000] 
// Parameters infos:
// class UPartyBeaconHost*        ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPartyBeaconHost* UOnlineSubsystemCommonImpl::CreateHostSessionReservationBeacon ( )
{
	static UFunction* pFnCreateHostSessionReservationBeacon = NULL;

	if ( ! pFnCreateHostSessionReservationBeacon )
		pFnCreateHostSessionReservationBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37895 ];

	UOnlineSubsystemCommonImpl_execCreateHostSessionReservationBeacon_Parms CreateHostSessionReservationBeacon_Parms;

	this->ProcessEvent ( pFnCreateHostSessionReservationBeacon, &CreateHostSessionReservationBeacon_Parms, NULL );

	return CreateHostSessionReservationBeacon_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.DestroyClientSessionReservationBeacon
// [0x00000000] 
// Parameters infos:

void UOnlineSubsystemCommonImpl::DestroyClientSessionReservationBeacon ( )
{
	static UFunction* pFnDestroyClientSessionReservationBeacon = NULL;

	if ( ! pFnDestroyClientSessionReservationBeacon )
		pFnDestroyClientSessionReservationBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37888 ];

	UOnlineSubsystemCommonImpl_execDestroyClientSessionReservationBeacon_Parms DestroyClientSessionReservationBeacon_Parms;

	this->ProcessEvent ( pFnDestroyClientSessionReservationBeacon, &DestroyClientSessionReservationBeacon_Parms, NULL );
};

// Function IpDrv.OnlineSubsystemCommonImpl.CreateClientSessionReservationBeacon
// [0x00000000] 
// Parameters infos:
// class UPartyBeaconClient*      ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UPartyBeaconClient* UOnlineSubsystemCommonImpl::CreateClientSessionReservationBeacon ( )
{
	static UFunction* pFnCreateClientSessionReservationBeacon = NULL;

	if ( ! pFnCreateClientSessionReservationBeacon )
		pFnCreateClientSessionReservationBeacon = (UFunction*) UObject::GObjObjects()->Data[ 37884 ];

	UOnlineSubsystemCommonImpl_execCreateClientSessionReservationBeacon_Parms CreateClientSessionReservationBeacon_Parms;

	this->ProcessEvent ( pFnCreateClientSessionReservationBeacon, &CreateClientSessionReservationBeacon_Parms, NULL );

	return CreateClientSessionReservationBeacon_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetClientSessionBeaconClass
// [0x00000000] 
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UClass* UOnlineSubsystemCommonImpl::GetClientSessionBeaconClass ( )
{
	static UFunction* pFnGetClientSessionBeaconClass = NULL;

	if ( ! pFnGetClientSessionBeaconClass )
		pFnGetClientSessionBeaconClass = (UFunction*) UObject::GObjObjects()->Data[ 37882 ];

	UOnlineSubsystemCommonImpl_execGetClientSessionBeaconClass_Parms GetClientSessionBeaconClass_Parms;

	this->ProcessEvent ( pFnGetClientSessionBeaconClass, &GetClientSessionBeaconClass_Parms, NULL );

	return GetClientSessionBeaconClass_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.IsSessionValid
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FScriptDelegate         finishedDelegate               ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::IsSessionValid ( struct FName SessionName, struct FScriptDelegate finishedDelegate )
{
	static UFunction* pFnIsSessionValid = NULL;

	if ( ! pFnIsSessionValid )
		pFnIsSessionValid = (UFunction*) UObject::GObjObjects()->Data[ 37832 ];

	UOnlineGameInterfaceImpl_execIsSessionValid_Parms IsSessionValid_Parms;
	memcpy ( &IsSessionValid_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &IsSessionValid_Parms.finishedDelegate, &finishedDelegate, 0xC );

	this->ProcessEvent ( pFnIsSessionValid, &IsSessionValid_Parms, NULL );

	return IsSessionValid_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnIsSessionValidFinished
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  sessionIsValid                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnIsSessionValidFinished ( struct FName SessionName, unsigned long sessionIsValid )
{
	static UFunction* pFnOnIsSessionValidFinished = NULL;

	if ( ! pFnOnIsSessionValidFinished )
		pFnOnIsSessionValidFinished = (UFunction*) UObject::GObjObjects()->Data[ 37573 ];

	UOnlineGameInterfaceImpl_execOnIsSessionValidFinished_Parms OnIsSessionValidFinished_Parms;
	memcpy ( &OnIsSessionValidFinished_Parms.SessionName, &SessionName, 0x8 );
	OnIsSessionValidFinished_Parms.sessionIsValid = sessionIsValid;

	this->ProcessEvent ( pFnOnIsSessionValidFinished, &OnIsSessionValidFinished_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelPendingInvite
// [0x00000000] 
// Parameters infos:

void UOnlineGameInterfaceImpl::CancelPendingInvite ( )
{
	static UFunction* pFnCancelPendingInvite = NULL;

	if ( ! pFnCancelPendingInvite )
		pFnCancelPendingInvite = (UFunction*) UObject::GObjObjects()->Data[ 37829 ];

	UOnlineGameInterfaceImpl_execCancelPendingInvite_Parms CancelPendingInvite_Parms;

	this->ProcessEvent ( pFnCancelPendingInvite, &CancelPendingInvite_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.ConfirmGameInvite
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::ConfirmGameInvite ( )
{
	static UFunction* pFnConfirmGameInvite = NULL;

	if ( ! pFnConfirmGameInvite )
		pFnConfirmGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 37827 ];

	UOnlineGameInterfaceImpl_execConfirmGameInvite_Parms ConfirmGameInvite_Parms;

	this->ProcessEvent ( pFnConfirmGameInvite, &ConfirmGameInvite_Parms, NULL );

	return ConfirmGameInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearConfirmGameInviteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ConfirmGameInviteDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearConfirmGameInviteDelegate ( struct FScriptDelegate ConfirmGameInviteDelegate )
{
	static UFunction* pFnClearConfirmGameInviteDelegate = NULL;

	if ( ! pFnClearConfirmGameInviteDelegate )
		pFnClearConfirmGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37825 ];

	UOnlineGameInterfaceImpl_execClearConfirmGameInviteDelegate_Parms ClearConfirmGameInviteDelegate_Parms;
	memcpy ( &ClearConfirmGameInviteDelegate_Parms.ConfirmGameInviteDelegate, &ConfirmGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearConfirmGameInviteDelegate, &ClearConfirmGameInviteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddConfirmGameInviteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ConfirmGameInviteDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddConfirmGameInviteDelegate ( struct FScriptDelegate ConfirmGameInviteDelegate )
{
	static UFunction* pFnAddConfirmGameInviteDelegate = NULL;

	if ( ! pFnAddConfirmGameInviteDelegate )
		pFnAddConfirmGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37823 ];

	UOnlineGameInterfaceImpl_execAddConfirmGameInviteDelegate_Parms AddConfirmGameInviteDelegate_Parms;
	memcpy ( &AddConfirmGameInviteDelegate_Parms.ConfirmGameInviteDelegate, &ConfirmGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddConfirmGameInviteDelegate, &AddConfirmGameInviteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnConfirmGameInvite
// [0x00000000] 
// Parameters infos:
// unsigned long                  confirmed                      ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnConfirmGameInvite ( unsigned long confirmed )
{
	static UFunction* pFnOnConfirmGameInvite = NULL;

	if ( ! pFnOnConfirmGameInvite )
		pFnOnConfirmGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 37575 ];

	UOnlineGameInterfaceImpl_execOnConfirmGameInvite_Parms OnConfirmGameInvite_Parms;
	OnConfirmGameInvite_Parms.confirmed = confirmed;

	this->ProcessEvent ( pFnOnConfirmGameInvite, &OnConfirmGameInvite_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.HandlePendingInviteUserChange
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::HandlePendingInviteUserChange ( )
{
	static UFunction* pFnHandlePendingInviteUserChange = NULL;

	if ( ! pFnHandlePendingInviteUserChange )
		pFnHandlePendingInviteUserChange = (UFunction*) UObject::GObjObjects()->Data[ 37820 ];

	UOnlineGameInterfaceImpl_execHandlePendingInviteUserChange_Parms HandlePendingInviteUserChange_Parms;

	this->ProcessEvent ( pFnHandlePendingInviteUserChange, &HandlePendingInviteUserChange_Parms, NULL );

	return HandlePendingInviteUserChange_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.FinishedProcessingPendingInvite
// [0x00000000] 
// Parameters infos:
// unsigned long                  succeeded                      ( CPF_Parm )

void UOnlineGameInterfaceImpl::FinishedProcessingPendingInvite ( unsigned long succeeded )
{
	static UFunction* pFnFinishedProcessingPendingInvite = NULL;

	if ( ! pFnFinishedProcessingPendingInvite )
		pFnFinishedProcessingPendingInvite = (UFunction*) UObject::GObjObjects()->Data[ 37818 ];

	UOnlineGameInterfaceImpl_execFinishedProcessingPendingInvite_Parms FinishedProcessingPendingInvite_Parms;
	FinishedProcessingPendingInvite_Parms.succeeded = succeeded;

	this->ProcessEvent ( pFnFinishedProcessingPendingInvite, &FinishedProcessingPendingInvite_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptPendingInvite
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::AcceptPendingInvite ( )
{
	static UFunction* pFnAcceptPendingInvite = NULL;

	if ( ! pFnAcceptPendingInvite )
		pFnAcceptPendingInvite = (UFunction*) UObject::GObjObjects()->Data[ 37816 ];

	UOnlineGameInterfaceImpl_execAcceptPendingInvite_Parms AcceptPendingInvite_Parms;

	this->ProcessEvent ( pFnAcceptPendingInvite, &AcceptPendingInvite_Parms, NULL );

	return AcceptPendingInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.IsProcessingPendingInvite
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::IsProcessingPendingInvite ( )
{
	static UFunction* pFnIsProcessingPendingInvite = NULL;

	if ( ! pFnIsProcessingPendingInvite )
		pFnIsProcessingPendingInvite = (UFunction*) UObject::GObjObjects()->Data[ 37814 ];

	UOnlineGameInterfaceImpl_execIsProcessingPendingInvite_Parms IsProcessingPendingInvite_Parms;

	this->ProcessEvent ( pFnIsProcessingPendingInvite, &IsProcessingPendingInvite_Parms, NULL );

	return IsProcessingPendingInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.HasPendingInvite
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::HasPendingInvite ( )
{
	static UFunction* pFnHasPendingInvite = NULL;

	if ( ! pFnHasPendingInvite )
		pFnHasPendingInvite = (UFunction*) UObject::GObjObjects()->Data[ 37812 ];

	UOnlineGameInterfaceImpl_execHasPendingInvite_Parms HasPendingInvite_Parms;

	this->ProcessEvent ( pFnHasPendingInvite, &HasPendingInvite_Parms, NULL );

	return HasPendingInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyPartySession
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::DestroyPartySession ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnDestroyPartySession = NULL;

	if ( ! pFnDestroyPartySession )
		pFnDestroyPartySession = (UFunction*) UObject::GObjObjects()->Data[ 37809 ];

	UOnlineGameInterfaceImpl_execDestroyPartySession_Parms DestroyPartySession_Parms;
	memcpy ( &DestroyPartySession_Parms.SessionName, &SessionName, 0x8 );
	DestroyPartySession_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnDestroyPartySession, &DestroyPartySession_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CleanupOnlineSubsystemComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::CleanupOnlineSubsystemComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnCleanupOnlineSubsystemComplete = NULL;

	if ( ! pFnCleanupOnlineSubsystemComplete )
		pFnCleanupOnlineSubsystemComplete = (UFunction*) UObject::GObjObjects()->Data[ 37804 ];

	UOnlineGameInterfaceImpl_execCleanupOnlineSubsystemComplete_Parms CleanupOnlineSubsystemComplete_Parms;
	memcpy ( &CleanupOnlineSubsystemComplete_Parms.SessionName, &SessionName, 0x8 );
	CleanupOnlineSubsystemComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnCleanupOnlineSubsystemComplete, &CleanupOnlineSubsystemComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CleanupOnlineSubsystem
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::CleanupOnlineSubsystem ( )
{
	static UFunction* pFnCleanupOnlineSubsystem = NULL;

	if ( ! pFnCleanupOnlineSubsystem )
		pFnCleanupOnlineSubsystem = (UFunction*) UObject::GObjObjects()->Data[ 37802 ];

	UOnlineGameInterfaceImpl_execCleanupOnlineSubsystem_Parms CleanupOnlineSubsystem_Parms;

	this->ProcessEvent ( pFnCleanupOnlineSubsystem, &CleanupOnlineSubsystem_Parms, NULL );

	return CleanupOnlineSubsystem_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCleanupOnlineSubsystemCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         CleanupOnlineSubsystemCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCleanupOnlineSubsystemCompleteDelegate ( struct FScriptDelegate CleanupOnlineSubsystemCompleteDelegate )
{
	static UFunction* pFnClearCleanupOnlineSubsystemCompleteDelegate = NULL;

	if ( ! pFnClearCleanupOnlineSubsystemCompleteDelegate )
		pFnClearCleanupOnlineSubsystemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37799 ];

	UOnlineGameInterfaceImpl_execClearCleanupOnlineSubsystemCompleteDelegate_Parms ClearCleanupOnlineSubsystemCompleteDelegate_Parms;
	memcpy ( &ClearCleanupOnlineSubsystemCompleteDelegate_Parms.CleanupOnlineSubsystemCompleteDelegate, &CleanupOnlineSubsystemCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCleanupOnlineSubsystemCompleteDelegate, &ClearCleanupOnlineSubsystemCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCleanupOnlineSubsystemCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         CleanupOnlineSubsystemCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCleanupOnlineSubsystemCompleteDelegate ( struct FScriptDelegate CleanupOnlineSubsystemCompleteDelegate )
{
	static UFunction* pFnAddCleanupOnlineSubsystemCompleteDelegate = NULL;

	if ( ! pFnAddCleanupOnlineSubsystemCompleteDelegate )
		pFnAddCleanupOnlineSubsystemCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37796 ];

	UOnlineGameInterfaceImpl_execAddCleanupOnlineSubsystemCompleteDelegate_Parms AddCleanupOnlineSubsystemCompleteDelegate_Parms;
	memcpy ( &AddCleanupOnlineSubsystemCompleteDelegate_Parms.CleanupOnlineSubsystemCompleteDelegate, &CleanupOnlineSubsystemCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCleanupOnlineSubsystemCompleteDelegate, &AddCleanupOnlineSubsystemCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = NULL;

	if ( ! pFnBindPlatformSpecificSessionToSearch )
		pFnBindPlatformSpecificSessionToSearch = (UFunction*) UObject::GObjObjects()->Data[ 37791 ];

	UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	BindPlatformSpecificSessionToSearch_Parms.SearchSettings = SearchSettings;
	memcpy ( &BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	this->ProcessEvent ( pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, NULL );

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfoBySessionName )
		pFnReadPlatformSpecificSessionInfoBySessionName = (UFunction*) UObject::GObjObjects()->Data[ 37787 ];

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy ( &ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, NULL );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = NULL;

	if ( ! pFnReadPlatformSpecificSessionInfo )
		pFnReadPlatformSpecificSessionInfo = (UFunction*) UObject::GObjObjects()->Data[ 37783 ];

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	this->ProcessEvent ( pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0xC );

	if ( PlatformSpecificInfo )
		memcpy ( PlatformSpecificInfo, &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x50 );

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData ( int StartAt, int NumberToQuery )
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if ( ! pFnQueryNonAdvertisedData )
		pFnQueryNonAdvertisedData = (UFunction*) UObject::GObjObjects()->Data[ 37779 ];

	UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent ( pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL );

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnRecalculateSkillRating = NULL;

	if ( ! pFnRecalculateSkillRating )
		pFnRecalculateSkillRating = (UFunction*) UObject::GObjObjects()->Data[ 37774 ];

	UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;
	memcpy ( &RecalculateSkillRating_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRecalculateSkillRating, &RecalculateSkillRating_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RecalculateSkillRating_Parms.Players, 0xC );

	return RecalculateSkillRating_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearOnlineServiceReachableCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         OnlineServiceReachableCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearOnlineServiceReachableCompleteDelegate ( struct FScriptDelegate OnlineServiceReachableCompleteDelegate )
{
	static UFunction* pFnClearOnlineServiceReachableCompleteDelegate = NULL;

	if ( ! pFnClearOnlineServiceReachableCompleteDelegate )
		pFnClearOnlineServiceReachableCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37772 ];

	UOnlineGameInterfaceImpl_execClearOnlineServiceReachableCompleteDelegate_Parms ClearOnlineServiceReachableCompleteDelegate_Parms;
	memcpy ( &ClearOnlineServiceReachableCompleteDelegate_Parms.OnlineServiceReachableCompleteDelegate, &OnlineServiceReachableCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearOnlineServiceReachableCompleteDelegate, &ClearOnlineServiceReachableCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddOnlineServiceReachableCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         OnlineServiceReachableCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddOnlineServiceReachableCompleteDelegate ( struct FScriptDelegate OnlineServiceReachableCompleteDelegate )
{
	static UFunction* pFnAddOnlineServiceReachableCompleteDelegate = NULL;

	if ( ! pFnAddOnlineServiceReachableCompleteDelegate )
		pFnAddOnlineServiceReachableCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37770 ];

	UOnlineGameInterfaceImpl_execAddOnlineServiceReachableCompleteDelegate_Parms AddOnlineServiceReachableCompleteDelegate_Parms;
	memcpy ( &AddOnlineServiceReachableCompleteDelegate_Parms.OnlineServiceReachableCompleteDelegate, &OnlineServiceReachableCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddOnlineServiceReachableCompleteDelegate, &AddOnlineServiceReachableCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnOnlineServiceReachableComplete
// [0x00000000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// float                          timeLeftUntilNextQuery         ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnOnlineServiceReachableComplete ( unsigned long bWasSuccessful, float timeLeftUntilNextQuery )
{
	static UFunction* pFnOnOnlineServiceReachableComplete = NULL;

	if ( ! pFnOnOnlineServiceReachableComplete )
		pFnOnOnlineServiceReachableComplete = (UFunction*) UObject::GObjObjects()->Data[ 37577 ];

	UOnlineGameInterfaceImpl_execOnOnlineServiceReachableComplete_Parms OnOnlineServiceReachableComplete_Parms;
	OnOnlineServiceReachableComplete_Parms.bWasSuccessful = bWasSuccessful;
	OnOnlineServiceReachableComplete_Parms.timeLeftUntilNextQuery = timeLeftUntilNextQuery;

	this->ProcessEvent ( pFnOnOnlineServiceReachableComplete, &OnOnlineServiceReachableComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineServiceReachableRequestInGame
// [0x00000000] 
// Parameters infos:

void UOnlineGameInterfaceImpl::StartOnlineServiceReachableRequestInGame ( )
{
	static UFunction* pFnStartOnlineServiceReachableRequestInGame = NULL;

	if ( ! pFnStartOnlineServiceReachableRequestInGame )
		pFnStartOnlineServiceReachableRequestInGame = (UFunction*) UObject::GObjObjects()->Data[ 37767 ];

	UOnlineGameInterfaceImpl_execStartOnlineServiceReachableRequestInGame_Parms StartOnlineServiceReachableRequestInGame_Parms;

	this->ProcessEvent ( pFnStartOnlineServiceReachableRequestInGame, &StartOnlineServiceReachableRequestInGame_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineServiceReachableRequestForMatchMaking
// [0x00000000] 
// Parameters infos:
// class UObject*                 requestingObject               ( CPF_Parm )

void UOnlineGameInterfaceImpl::StartOnlineServiceReachableRequestForMatchMaking ( class UObject* requestingObject )
{
	static UFunction* pFnStartOnlineServiceReachableRequestForMatchMaking = NULL;

	if ( ! pFnStartOnlineServiceReachableRequestForMatchMaking )
		pFnStartOnlineServiceReachableRequestForMatchMaking = (UFunction*) UObject::GObjObjects()->Data[ 37765 ];

	UOnlineGameInterfaceImpl_execStartOnlineServiceReachableRequestForMatchMaking_Parms StartOnlineServiceReachableRequestForMatchMaking_Parms;
	StartOnlineServiceReachableRequestForMatchMaking_Parms.requestingObject = requestingObject;

	this->ProcessEvent ( pFnStartOnlineServiceReachableRequestForMatchMaking, &StartOnlineServiceReachableRequestForMatchMaking_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.IsOnlineServiceReachable
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          TimeOut                        ( CPF_Parm )

bool UOnlineGameInterfaceImpl::IsOnlineServiceReachable ( float TimeOut )
{
	static UFunction* pFnIsOnlineServiceReachable = NULL;

	if ( ! pFnIsOnlineServiceReachable )
		pFnIsOnlineServiceReachable = (UFunction*) UObject::GObjObjects()->Data[ 37762 ];

	UOnlineGameInterfaceImpl_execIsOnlineServiceReachable_Parms IsOnlineServiceReachable_Parms;
	IsOnlineServiceReachable_Parms.TimeOut = TimeOut;

	this->ProcessEvent ( pFnIsOnlineServiceReachable, &IsOnlineServiceReachable_Parms, NULL );

	return IsOnlineServiceReachable_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName )
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if ( ! pFnAcceptGameInvite )
		pFnAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 37758 ];

	UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AcceptGameInvite_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL );

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearWantsToAcceptGameInviteDelegate
// [0x00000000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WantsToAcceptGameInviteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearWantsToAcceptGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WantsToAcceptGameInviteDelegate )
{
	static UFunction* pFnClearWantsToAcceptGameInviteDelegate = NULL;

	if ( ! pFnClearWantsToAcceptGameInviteDelegate )
		pFnClearWantsToAcceptGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37755 ];

	UOnlineGameInterfaceImpl_execClearWantsToAcceptGameInviteDelegate_Parms ClearWantsToAcceptGameInviteDelegate_Parms;
	ClearWantsToAcceptGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearWantsToAcceptGameInviteDelegate_Parms.WantsToAcceptGameInviteDelegate, &WantsToAcceptGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnClearWantsToAcceptGameInviteDelegate, &ClearWantsToAcceptGameInviteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddWantsToAcceptGameInviteDelegate
// [0x00000000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         WantsToAcceptGameInviteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddWantsToAcceptGameInviteDelegate ( unsigned char LocalUserNum, struct FScriptDelegate WantsToAcceptGameInviteDelegate )
{
	static UFunction* pFnAddWantsToAcceptGameInviteDelegate = NULL;

	if ( ! pFnAddWantsToAcceptGameInviteDelegate )
		pFnAddWantsToAcceptGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37752 ];

	UOnlineGameInterfaceImpl_execAddWantsToAcceptGameInviteDelegate_Parms AddWantsToAcceptGameInviteDelegate_Parms;
	AddWantsToAcceptGameInviteDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddWantsToAcceptGameInviteDelegate_Parms.WantsToAcceptGameInviteDelegate, &WantsToAcceptGameInviteDelegate, 0xC );

	this->ProcessEvent ( pFnAddWantsToAcceptGameInviteDelegate, &AddWantsToAcceptGameInviteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnWantsToAcceptGameInvite
// [0x00000000] 
// Parameters infos:
// struct FString                 InAsyncTaskName                ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::OnWantsToAcceptGameInvite ( struct FString InAsyncTaskName )
{
	static UFunction* pFnOnWantsToAcceptGameInvite = NULL;

	if ( ! pFnOnWantsToAcceptGameInvite )
		pFnOnWantsToAcceptGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 37579 ];

	UOnlineGameInterfaceImpl_execOnWantsToAcceptGameInvite_Parms OnWantsToAcceptGameInvite_Parms;
	memcpy ( &OnWantsToAcceptGameInvite_Parms.InAsyncTaskName, &InAsyncTaskName, 0xC );

	this->ProcessEvent ( pFnOnWantsToAcceptGameInvite, &OnWantsToAcceptGameInvite_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00000000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if ( ! pFnClearGameInviteAcceptedDelegate )
		pFnClearGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37748 ];

	UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00000000] 
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate )
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if ( ! pFnAddGameInviteAcceptedDelegate )
		pFnAddGameInviteAcceptedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37745 ];

	UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy ( &AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC );

	this->ProcessEvent ( pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00000000] 
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceImpl::OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult )
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if ( ! pFnOnGameInviteAccepted )
		pFnOnGameInviteAccepted = (UFunction*) UObject::GObjObjects()->Data[ 37581 ];

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent ( pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL );

	if ( InviteResult )
		memcpy ( InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0xC );
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00000000] 
// Parameters infos:
// TArray< struct FOnlineArbitrationRegistrant > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   SessionName                    ( CPF_Parm )

TArray< struct FOnlineArbitrationRegistrant > UOnlineGameInterfaceImpl::GetArbitratedPlayers ( struct FName SessionName )
{
	static UFunction* pFnGetArbitratedPlayers = NULL;

	if ( ! pFnGetArbitratedPlayers )
		pFnGetArbitratedPlayers = (UFunction*) UObject::GObjObjects()->Data[ 37740 ];

	UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms GetArbitratedPlayers_Parms;
	memcpy ( &GetArbitratedPlayers_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetArbitratedPlayers, &GetArbitratedPlayers_Parms, NULL );

	return GetArbitratedPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnClearArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnClearArbitrationRegistrationCompleteDelegate )
		pFnClearArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37738 ];

	UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms ClearArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &ClearArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate )
{
	static UFunction* pFnAddArbitrationRegistrationCompleteDelegate = NULL;

	if ( ! pFnAddArbitrationRegistrationCompleteDelegate )
		pFnAddArbitrationRegistrationCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37736 ];

	UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms AddArbitrationRegistrationCompleteDelegate_Parms;
	memcpy ( &AddArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnArbitrationRegistrationComplete = NULL;

	if ( ! pFnOnArbitrationRegistrationComplete )
		pFnOnArbitrationRegistrationComplete = (UFunction*) UObject::GObjObjects()->Data[ 37583 ];

	UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms OnArbitrationRegistrationComplete_Parms;
	memcpy ( &OnArbitrationRegistrationComplete_Parms.SessionName, &SessionName, 0x8 );
	OnArbitrationRegistrationComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterForArbitration ( struct FName SessionName )
{
	static UFunction* pFnRegisterForArbitration = NULL;

	if ( ! pFnRegisterForArbitration )
		pFnRegisterForArbitration = (UFunction*) UObject::GObjObjects()->Data[ 37731 ];

	UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms RegisterForArbitration_Parms;
	memcpy ( &RegisterForArbitration_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnRegisterForArbitration, &RegisterForArbitration_Parms, NULL );

	return RegisterForArbitration_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearEndOnlineGameCompleteDelegate )
		pFnClearEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37728 ];

	UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms ClearEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddEndOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddEndOnlineGameCompleteDelegate )
		pFnAddEndOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37726 ];

	UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms AddEndOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnEndOnlineGameComplete = NULL;

	if ( ! pFnOnEndOnlineGameComplete )
		pFnOnEndOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37562 ];

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy ( &OnEndOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::EndOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnEndOnlineGame = NULL;

	if ( ! pFnEndOnlineGame )
		pFnEndOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 37721 ];

	UOnlineGameInterfaceImpl_execEndOnlineGame_Parms EndOnlineGame_Parms;
	memcpy ( &EndOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnEndOnlineGame, &EndOnlineGame_Parms, NULL );

	return EndOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearStartOnlineGameCompleteDelegate )
		pFnClearStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37718 ];

	UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms ClearStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddStartOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddStartOnlineGameCompleteDelegate )
		pFnAddStartOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37716 ];

	UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms AddStartOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnStartOnlineGameComplete = NULL;

	if ( ! pFnOnStartOnlineGameComplete )
		pFnOnStartOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37559 ];

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms OnStartOnlineGameComplete_Parms;
	memcpy ( &OnStartOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnStartOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::StartOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnStartOnlineGame = NULL;

	if ( ! pFnStartOnlineGame )
		pFnStartOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 37711 ];

	UOnlineGameInterfaceImpl_execStartOnlineGame_Parms StartOnlineGame_Parms;
	memcpy ( &StartOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnStartOnlineGame, &StartOnlineGame_Parms, NULL );

	return StartOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearUnregisterPlayerCompleteDelegate )
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37709 ];

	UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddUnregisterPlayerCompleteDelegate )
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37707 ];

	UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if ( ! pFnOnUnregisterPlayerComplete )
		pFnOnUnregisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 37587 ];

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy ( &OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceImpl::UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID )
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if ( ! pFnUnregisterPlayer )
		pFnUnregisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 37700 ];

	UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy ( &UnregisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL );

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnClearRegisterPlayerCompleteDelegate )
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37698 ];

	UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate )
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if ( ! pFnAddRegisterPlayerCompleteDelegate )
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37696 ];

	UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy ( &AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if ( ! pFnOnRegisterPlayerComplete )
		pFnOnRegisterPlayerComplete = (UFunction*) UObject::GObjObjects()->Data[ 37589 ];

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy ( &OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x8 );
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited )
{
	static UFunction* pFnRegisterPlayer = NULL;

	if ( ! pFnRegisterPlayer )
		pFnRegisterPlayer = (UFunction*) UObject::GObjObjects()->Data[ 37688 ];

	UOnlineGameInterfaceImpl_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy ( &RegisterPlayer_Parms.SessionName, &SessionName, 0x8 );
	memcpy ( &RegisterPlayer_Parms.PlayerID, &PlayerID, 0x8 );
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	this->ProcessEvent ( pFnRegisterPlayer, &RegisterPlayer_Parms, NULL );

	return RegisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo )
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if ( ! pFnGetResolvedConnectString )
		pFnGetResolvedConnectString = (UFunction*) UObject::GObjObjects()->Data[ 37684 ];

	UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy ( &GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL );

	if ( ConnectInfo )
		memcpy ( ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0xC );

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinOnlineGameCompleteDelegate )
		pFnClearJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37681 ];

	UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms ClearJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddJoinOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinOnlineGameCompleteDelegate )
		pFnAddJoinOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37679 ];

	UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms AddJoinOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnJoinOnlineGameComplete = NULL;

	if ( ! pFnOnJoinOnlineGameComplete )
		pFnOnJoinOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37556 ];

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms OnJoinOnlineGameComplete_Parms;
	memcpy ( &OnJoinOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnJoinOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame )
{
	static UFunction* pFnJoinOnlineGame = NULL;

	if ( ! pFnJoinOnlineGame )
		pFnJoinOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 37672 ];

	UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms JoinOnlineGame_Parms;
	JoinOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy ( &JoinOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnJoinOnlineGame, &JoinOnlineGame_Parms, NULL );

	if ( DesiredGame )
		memcpy ( DesiredGame, &JoinOnlineGame_Parms.DesiredGame, 0xC );

	return JoinOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FreeSearchResults ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnFreeSearchResults = NULL;

	if ( ! pFnFreeSearchResults )
		pFnFreeSearchResults = (UFunction*) UObject::GObjObjects()->Data[ 37669 ];

	UOnlineGameInterfaceImpl_execFreeSearchResults_Parms FreeSearchResults_Parms;
	FreeSearchResults_Parms.Search = Search;

	this->ProcessEvent ( pFnFreeSearchResults, &FreeSearchResults_Parms, NULL );

	return FreeSearchResults_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearCancelFindOnlineGamesCompleteDelegate )
		pFnClearCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37666 ];

	UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms ClearCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddCancelFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddCancelFindOnlineGamesCompleteDelegate )
		pFnAddCancelFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37664 ];

	UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms AddCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00000000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCancelFindOnlineGamesComplete = NULL;

	if ( ! pFnOnCancelFindOnlineGamesComplete )
		pFnOnCancelFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 37568 ];

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms OnCancelFindOnlineGamesComplete_Parms;
	OnCancelFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames ( )
{
	static UFunction* pFnCancelFindOnlineGames = NULL;

	if ( ! pFnCancelFindOnlineGames )
		pFnCancelFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 37661 ];

	UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms CancelFindOnlineGames_Parms;

	this->ProcessEvent ( pFnCancelFindOnlineGames, &CancelFindOnlineGames_Parms, NULL );

	return CancelFindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnClearFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnClearFindOnlineGamesCompleteDelegate )
		pFnClearFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37658 ];

	UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms ClearFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &ClearFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate )
{
	static UFunction* pFnAddFindOnlineGamesCompleteDelegate = NULL;

	if ( ! pFnAddFindOnlineGamesCompleteDelegate )
		pFnAddFindOnlineGamesCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37656 ];

	UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms AddFindOnlineGamesCompleteDelegate_Parms;
	memcpy ( &AddFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings )
{
	static UFunction* pFnFindOnlineGames = NULL;

	if ( ! pFnFindOnlineGames )
		pFnFindOnlineGames = (UFunction*) UObject::GObjObjects()->Data[ 37652 ];

	UOnlineGameInterfaceImpl_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.SearchingPlayerNum = SearchingPlayerNum;
	FindOnlineGames_Parms.SearchSettings = SearchSettings;

	this->ProcessEvent ( pFnFindOnlineGames, &FindOnlineGames_Parms, NULL );

	return FindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCleanupOnlineSubsystemComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCleanupOnlineSubsystemComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCleanupOnlineSubsystemComplete = NULL;

	if ( ! pFnOnCleanupOnlineSubsystemComplete )
		pFnOnCleanupOnlineSubsystemComplete = (UFunction*) UObject::GObjObjects()->Data[ 37571 ];

	UOnlineGameInterfaceImpl_execOnCleanupOnlineSubsystemComplete_Parms OnCleanupOnlineSubsystemComplete_Parms;
	memcpy ( &OnCleanupOnlineSubsystemComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCleanupOnlineSubsystemComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCleanupOnlineSubsystemComplete, &OnCleanupOnlineSubsystemComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearDestroyOnlineGameCompleteDelegate )
		pFnClearDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37647 ];

	UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms ClearDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddDestroyOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddDestroyOnlineGameCompleteDelegate )
		pFnAddDestroyOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37645 ];

	UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms AddDestroyOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnDestroyOnlineGameComplete = NULL;

	if ( ! pFnOnDestroyOnlineGameComplete )
		pFnOnDestroyOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37553 ];

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy ( &OnDestroyOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::DestroyOnlineGame ( struct FName SessionName )
{
	static UFunction* pFnDestroyOnlineGame = NULL;

	if ( ! pFnDestroyOnlineGame )
		pFnDestroyOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 37640 ];

	UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms DestroyOnlineGame_Parms;
	memcpy ( &DestroyOnlineGame_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnDestroyOnlineGame, &DestroyOnlineGame_Parms, NULL );

	return DestroyOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearUpdateOnlineGameCompleteDelegate )
		pFnClearUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37637 ];

	UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms ClearUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddUpdateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddUpdateOnlineGameCompleteDelegate )
		pFnAddUpdateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37635 ];

	UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms AddUpdateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnUpdateOnlineGameComplete = NULL;

	if ( ! pFnOnUpdateOnlineGameComplete )
		pFnOnUpdateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37550 ];

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms OnUpdateOnlineGameComplete_Parms;
	memcpy ( &OnUpdateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnUpdateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceImpl::UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData )
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if ( ! pFnUpdateOnlineGame )
		pFnUpdateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 37628 ];

	UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy ( &UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent ( pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL );

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnClearCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnClearCreateOnlineGameCompleteDelegate )
		pFnClearCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37625 ];

	UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms ClearCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &ClearCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00000000] 
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate )
{
	static UFunction* pFnAddCreateOnlineGameCompleteDelegate = NULL;

	if ( ! pFnAddCreateOnlineGameCompleteDelegate )
		pFnAddCreateOnlineGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 37623 ];

	UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms AddCreateOnlineGameCompleteDelegate_Parms;
	memcpy ( &AddCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0xC );

	this->ProcessEvent ( pFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful )
{
	static UFunction* pFnOnCreateOnlineGameComplete = NULL;

	if ( ! pFnOnCreateOnlineGameComplete )
		pFnOnCreateOnlineGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 37547 ];

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy ( &OnCreateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8 );
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, NULL );
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineGameInterfaceImpl::CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings )
{
	static UFunction* pFnCreateOnlineGame = NULL;

	if ( ! pFnCreateOnlineGame )
		pFnCreateOnlineGame = (UFunction*) UObject::GObjObjects()->Data[ 37616 ];

	UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms CreateOnlineGame_Parms;
	CreateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy ( &CreateOnlineGame_Parms.SessionName, &SessionName, 0x8 );
	CreateOnlineGame_Parms.NewGameSettings = NewGameSettings;

	this->ProcessEvent ( pFnCreateOnlineGame, &CreateOnlineGame_Parms, NULL );

	return CreateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00000000] 
// Parameters infos:
// class UOnlineGameSearch*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch ( )
{
	static UFunction* pFnGetGameSearch = NULL;

	if ( ! pFnGetGameSearch )
		pFnGetGameSearch = (UFunction*) UObject::GObjObjects()->Data[ 37614 ];

	UOnlineGameInterfaceImpl_execGetGameSearch_Parms GetGameSearch_Parms;

	this->ProcessEvent ( pFnGetGameSearch, &GetGameSearch_Parms, NULL );

	return GetGameSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00000000] 
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings ( struct FName SessionName )
{
	static UFunction* pFnGetGameSettings = NULL;

	if ( ! pFnGetGameSettings )
		pFnGetGameSettings = (UFunction*) UObject::GObjObjects()->Data[ 37611 ];

	UOnlineGameInterfaceImpl_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy ( &GetGameSettings_Parms.SessionName, &SessionName, 0x8 );

	this->ProcessEvent ( pFnGetGameSettings, &GetGameSettings_Parms, NULL );

	return GetGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00000000] 
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete ( unsigned long bWasSuccessful )
{
	static UFunction* pFnOnFindOnlineGamesComplete = NULL;

	if ( ! pFnOnFindOnlineGamesComplete )
		pFnOnFindOnlineGamesComplete = (UFunction*) UObject::GObjObjects()->Data[ 37565 ];

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms OnFindOnlineGamesComplete_Parms;
	OnFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent ( pFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Parms, NULL );
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00000000] 
// Parameters infos:

void UPartyBeacon::OnDestroyComplete ( )
{
	static UFunction* pFnOnDestroyComplete = NULL;

	if ( ! pFnOnDestroyComplete )
		pFnOnDestroyComplete = (UFunction*) UObject::GObjObjects()->Data[ 37978 ];

	UPartyBeacon_execOnDestroyComplete_Parms OnDestroyComplete_Parms;

	this->ProcessEvent ( pFnOnDestroyComplete, &OnDestroyComplete_Parms, NULL );
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00000000] 
// Parameters infos:

void UPartyBeacon::DestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 38002 ];

	UPartyBeacon_execDestroyBeacon_Parms DestroyBeacon_Parms;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00000000] 
// Parameters infos:

void UPartyBeaconClient::DestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 38054 ];

	UPartyBeaconClient_execDestroyBeacon_Parms DestroyBeacon_Parms;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            CancellingPartyLeader          ( CPF_Parm )

bool UPartyBeaconClient::CancelReservation ( struct FUniqueNetId CancellingPartyLeader )
{
	static UFunction* pFnCancelReservation = NULL;

	if ( ! pFnCancelReservation )
		pFnCancelReservation = (UFunction*) UObject::GObjObjects()->Data[ 38051 ];

	UPartyBeaconClient_execCancelReservation_Parms CancelReservation_Parms;
	memcpy ( &CancelReservation_Parms.CancellingPartyLeader, &CancellingPartyLeader, 0x8 );

	this->ProcessEvent ( pFnCancelReservation, &CancelReservation_Parms, NULL );

	return CancelReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            RequestingPartyLeader          ( CPF_Parm )
// int                            PartyTeamNum                   ( CPF_Parm )
// unsigned long                  bRegisterConnection            ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< struct FPlayerReservation > PlayersToAdd                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconClient::RequestReservationUpdate ( struct FUniqueNetId RequestingPartyLeader, int PartyTeamNum, unsigned long bRegisterConnection, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* PlayersToAdd )
{
	static UFunction* pFnRequestReservationUpdate = NULL;

	if ( ! pFnRequestReservationUpdate )
		pFnRequestReservationUpdate = (UFunction*) UObject::GObjObjects()->Data[ 38043 ];

	UPartyBeaconClient_execRequestReservationUpdate_Parms RequestReservationUpdate_Parms;
	memcpy ( &RequestReservationUpdate_Parms.RequestingPartyLeader, &RequestingPartyLeader, 0x8 );
	RequestReservationUpdate_Parms.PartyTeamNum = PartyTeamNum;
	RequestReservationUpdate_Parms.bRegisterConnection = bRegisterConnection;

	this->ProcessEvent ( pFnRequestReservationUpdate, &RequestReservationUpdate_Parms, NULL );

	if ( DesiredHost )
		memcpy ( DesiredHost, &RequestReservationUpdate_Parms.DesiredHost, 0xC );

	if ( PlayersToAdd )
		memcpy ( PlayersToAdd, &RequestReservationUpdate_Parms.PlayersToAdd, 0xC );

	return RequestReservationUpdate_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservationToConnectedHost
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            RequestingPartyLeader          ( CPF_Parm )
// int                            PartyTeamNum                   ( CPF_Parm )
// TArray< struct FPlayerReservation > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconClient::RequestReservationToConnectedHost ( struct FUniqueNetId RequestingPartyLeader, int PartyTeamNum, TArray< struct FPlayerReservation >* Players )
{
	static UFunction* pFnRequestReservationToConnectedHost = NULL;

	if ( ! pFnRequestReservationToConnectedHost )
		pFnRequestReservationToConnectedHost = (UFunction*) UObject::GObjObjects()->Data[ 38037 ];

	UPartyBeaconClient_execRequestReservationToConnectedHost_Parms RequestReservationToConnectedHost_Parms;
	memcpy ( &RequestReservationToConnectedHost_Parms.RequestingPartyLeader, &RequestingPartyLeader, 0x8 );
	RequestReservationToConnectedHost_Parms.PartyTeamNum = PartyTeamNum;

	this->ProcessEvent ( pFnRequestReservationToConnectedHost, &RequestReservationToConnectedHost_Parms, NULL );

	if ( Players )
		memcpy ( Players, &RequestReservationToConnectedHost_Parms.Players, 0xC );

	return RequestReservationToConnectedHost_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            RequestingPartyLeader          ( CPF_Parm )
// int                            PartyTeamNum                   ( CPF_Parm )
// unsigned long                  bRegisterConnection            ( CPF_OptionalParm | CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< struct FPlayerReservation > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconClient::RequestReservation ( struct FUniqueNetId RequestingPartyLeader, int PartyTeamNum, unsigned long bRegisterConnection, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* Players )
{
	static UFunction* pFnRequestReservation = NULL;

	if ( ! pFnRequestReservation )
		pFnRequestReservation = (UFunction*) UObject::GObjObjects()->Data[ 38029 ];

	UPartyBeaconClient_execRequestReservation_Parms RequestReservation_Parms;
	memcpy ( &RequestReservation_Parms.RequestingPartyLeader, &RequestingPartyLeader, 0x8 );
	RequestReservation_Parms.PartyTeamNum = PartyTeamNum;
	RequestReservation_Parms.bRegisterConnection = bRegisterConnection;

	this->ProcessEvent ( pFnRequestReservation, &RequestReservation_Parms, NULL );

	if ( DesiredHost )
		memcpy ( DesiredHost, &RequestReservation_Parms.DesiredHost, 0xC );

	if ( Players )
		memcpy ( Players, &RequestReservation_Parms.Players, 0xC );

	return RequestReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00000000] 
// Parameters infos:

void UPartyBeaconClient::OnHostHasCancelled ( )
{
	static UFunction* pFnOnHostHasCancelled = NULL;

	if ( ! pFnOnHostHasCancelled )
		pFnOnHostHasCancelled = (UFunction*) UObject::GObjObjects()->Data[ 38003 ];

	UPartyBeaconClient_execOnHostHasCancelled_Parms OnHostHasCancelled_Parms;

	this->ProcessEvent ( pFnOnHostHasCancelled, &OnHostHasCancelled_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00000000] 
// Parameters infos:

void UPartyBeaconClient::OnHostIsReady ( )
{
	static UFunction* pFnOnHostIsReady = NULL;

	if ( ! pFnOnHostIsReady )
		pFnOnHostIsReady = (UFunction*) UObject::GObjObjects()->Data[ 38004 ];

	UPartyBeaconClient_execOnHostIsReady_Parms OnHostIsReady_Parms;

	this->ProcessEvent ( pFnOnHostIsReady, &OnHostIsReady_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

void UPartyBeaconClient::OnTravelRequestReceived ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo )
{
	static UFunction* pFnOnTravelRequestReceived = NULL;

	if ( ! pFnOnTravelRequestReceived )
		pFnOnTravelRequestReceived = (UFunction*) UObject::GObjObjects()->Data[ 38005 ];

	UPartyBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy ( &OnTravelRequestReceived_Parms.SessionName, &SessionName, 0x8 );
	OnTravelRequestReceived_Parms.SearchClass = SearchClass;
	memcpy ( &OnTravelRequestReceived_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );

	this->ProcessEvent ( pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00000000] 
// Parameters infos:
// int                            ReservationRemaining           ( CPF_Parm )

void UPartyBeaconClient::OnReservationCountUpdated ( int ReservationRemaining )
{
	static UFunction* pFnOnReservationCountUpdated = NULL;

	if ( ! pFnOnReservationCountUpdated )
		pFnOnReservationCountUpdated = (UFunction*) UObject::GObjObjects()->Data[ 38006 ];

	UPartyBeaconClient_execOnReservationCountUpdated_Parms OnReservationCountUpdated_Parms;
	OnReservationCountUpdated_Parms.ReservationRemaining = ReservationRemaining;

	this->ProcessEvent ( pFnOnReservationCountUpdated, &OnReservationCountUpdated_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00000000] 
// Parameters infos:
// unsigned char                  ReservationResult              ( CPF_Parm )
// int                            PartyTeamNum                   ( CPF_Parm )
// struct FUniqueNetId            HostId                         ( CPF_Parm )

void UPartyBeaconClient::OnReservationRequestComplete ( unsigned char ReservationResult, int PartyTeamNum, struct FUniqueNetId HostId )
{
	static UFunction* pFnOnReservationRequestComplete = NULL;

	if ( ! pFnOnReservationRequestComplete )
		pFnOnReservationRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38007 ];

	UPartyBeaconClient_execOnReservationRequestComplete_Parms OnReservationRequestComplete_Parms;
	OnReservationRequestComplete_Parms.ReservationResult = ReservationResult;
	OnReservationRequestComplete_Parms.PartyTeamNum = PartyTeamNum;
	memcpy ( &OnReservationRequestComplete_Parms.HostId, &HostId, 0x8 );

	this->ProcessEvent ( pFnOnReservationRequestComplete, &OnReservationRequestComplete_Parms, NULL );
};

// Function IpDrv.PartyBeaconClient.OnCancellationRequestComplete
// [0x00000000] 
// Parameters infos:

void UPartyBeaconClient::OnCancellationRequestComplete ( )
{
	static UFunction* pFnOnCancellationRequestComplete = NULL;

	if ( ! pFnOnCancellationRequestComplete )
		pFnOnCancellationRequestComplete = (UFunction*) UObject::GObjObjects()->Data[ 38008 ];

	UPartyBeaconClient_execOnCancellationRequestComplete_Parms OnCancellationRequestComplete_Parms;

	this->ProcessEvent ( pFnOnCancellationRequestComplete, &OnCancellationRequestComplete_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPartyBeaconHost::GetMaxAvailableTeamSize ( )
{
	static UFunction* pFnGetMaxAvailableTeamSize = NULL;

	if ( ! pFnGetMaxAvailableTeamSize )
		pFnGetMaxAvailableTeamSize = (UFunction*) UObject::GObjObjects()->Data[ 38162 ];

	UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms GetMaxAvailableTeamSize_Parms;

	this->ProcessEvent ( pFnGetMaxAvailableTeamSize, &GetMaxAvailableTeamSize_Parms, NULL );

	return GetMaxAvailableTeamSize_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.GetTeamAvailableSlots
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            TeamNum                        ( CPF_Parm )

int UPartyBeaconHost::GetTeamAvailableSlots ( int TeamNum )
{
	static UFunction* pFnGetTeamAvailableSlots = NULL;

	if ( ! pFnGetTeamAvailableSlots )
		pFnGetTeamAvailableSlots = (UFunction*) UObject::GObjObjects()->Data[ 38159 ];

	UPartyBeaconHost_execGetTeamAvailableSlots_Parms GetTeamAvailableSlots_Parms;
	GetTeamAvailableSlots_Parms.TeamNum = TeamNum;

	this->ProcessEvent ( pFnGetTeamAvailableSlots, &GetTeamAvailableSlots_Parms, NULL );

	return GetTeamAvailableSlots_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.OnTeamAssignmentRequest
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PartyTeamNum                   ( CPF_Parm )
// int                            NumPlayersInParty              ( CPF_Parm )

int UPartyBeaconHost::OnTeamAssignmentRequest ( int PartyTeamNum, int NumPlayersInParty )
{
	static UFunction* pFnOnTeamAssignmentRequest = NULL;

	if ( ! pFnOnTeamAssignmentRequest )
		pFnOnTeamAssignmentRequest = (UFunction*) UObject::GObjObjects()->Data[ 38062 ];

	UPartyBeaconHost_execOnTeamAssignmentRequest_Parms OnTeamAssignmentRequest_Parms;
	OnTeamAssignmentRequest_Parms.PartyTeamNum = PartyTeamNum;
	OnTeamAssignmentRequest_Parms.NumPlayersInParty = NumPlayersInParty;

	this->ProcessEvent ( pFnOnTeamAssignmentRequest, &OnTeamAssignmentRequest_Parms, NULL );

	return OnTeamAssignmentRequest_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00000000] 
// Parameters infos:
// TArray< struct FUniqueNetId >  PartyLeaders                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPartyBeaconHost::GetPartyLeaders ( TArray< struct FUniqueNetId >* PartyLeaders )
{
	static UFunction* pFnGetPartyLeaders = NULL;

	if ( ! pFnGetPartyLeaders )
		pFnGetPartyLeaders = (UFunction*) UObject::GObjObjects()->Data[ 38152 ];

	UPartyBeaconHost_execGetPartyLeaders_Parms GetPartyLeaders_Parms;

	this->ProcessEvent ( pFnGetPartyLeaders, &GetPartyLeaders_Parms, NULL );

	if ( PartyLeaders )
		memcpy ( PartyLeaders, &GetPartyLeaders_Parms.PartyLeaders, 0xC );
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00000000] 
// Parameters infos:
// TArray< struct FUniqueNetId >  Players                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPartyBeaconHost::GetPlayers ( TArray< struct FUniqueNetId >* Players )
{
	static UFunction* pFnGetPlayers = NULL;

	if ( ! pFnGetPlayers )
		pFnGetPlayers = (UFunction*) UObject::GObjObjects()->Data[ 38146 ];

	UPartyBeaconHost_execGetPlayers_Parms GetPlayers_Parms;

	this->ProcessEvent ( pFnGetPlayers, &GetPlayers_Parms, NULL );

	if ( Players )
		memcpy ( Players, &GetPlayers_Parms.Players, 0xC );
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00000000] 
// Parameters infos:
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

void UPartyBeaconHost::AppendReservationSkillsToSearch ( class UOnlineGameSearch* Search )
{
	static UFunction* pFnAppendReservationSkillsToSearch = NULL;

	if ( ! pFnAppendReservationSkillsToSearch )
		pFnAppendReservationSkillsToSearch = (UFunction*) UObject::GObjObjects()->Data[ 38144 ];

	UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms AppendReservationSkillsToSearch_Parms;
	AppendReservationSkillsToSearch_Parms.Search = Search;

	this->ProcessEvent ( pFnAppendReservationSkillsToSearch, &AppendReservationSkillsToSearch_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.RemovePlayerFromParty
// [0x00000000] 
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

void UPartyBeaconHost::RemovePlayerFromParty ( struct FUniqueNetId PlayerID )
{
	static UFunction* pFnRemovePlayerFromParty = NULL;

	if ( ! pFnRemovePlayerFromParty )
		pFnRemovePlayerFromParty = (UFunction*) UObject::GObjObjects()->Data[ 38142 ];

	UPartyBeaconHost_execRemovePlayerFromParty_Parms RemovePlayerFromParty_Parms;
	memcpy ( &RemovePlayerFromParty_Parms.PlayerID, &PlayerID, 0x8 );

	this->ProcessEvent ( pFnRemovePlayerFromParty, &RemovePlayerFromParty_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00000000] 
// Parameters infos:
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )

void UPartyBeaconHost::UnregisterParty ( struct FUniqueNetId PartyLeader )
{
	static UFunction* pFnUnregisterParty = NULL;

	if ( ! pFnUnregisterParty )
		pFnUnregisterParty = (UFunction*) UObject::GObjObjects()->Data[ 38136 ];

	UPartyBeaconHost_execUnregisterParty_Parms UnregisterParty_Parms;
	memcpy ( &UnregisterParty_Parms.PartyLeader, &PartyLeader, 0x8 );

	this->ProcessEvent ( pFnUnregisterParty, &UnregisterParty_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00000000] 
// Parameters infos:

void UPartyBeaconHost::UnregisterPartyMembers ( )
{
	static UFunction* pFnUnregisterPartyMembers = NULL;

	if ( ! pFnUnregisterPartyMembers )
		pFnUnregisterPartyMembers = (UFunction*) UObject::GObjObjects()->Data[ 38131 ];

	UPartyBeaconHost_execUnregisterPartyMembers_Parms UnregisterPartyMembers_Parms;

	this->ProcessEvent ( pFnUnregisterPartyMembers, &UnregisterPartyMembers_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00000000] 
// Parameters infos:

void UPartyBeaconHost::RegisterPartyMembers ( )
{
	static UFunction* pFnRegisterPartyMembers = NULL;

	if ( ! pFnRegisterPartyMembers )
		pFnRegisterPartyMembers = (UFunction*) UObject::GObjObjects()->Data[ 38123 ];

	UPartyBeaconHost_execRegisterPartyMembers_Parms RegisterPartyMembers_Parms;

	this->ProcessEvent ( pFnRegisterPartyMembers, &RegisterPartyMembers_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPartyBeaconHost::AreReservationsFull ( )
{
	static UFunction* pFnAreReservationsFull = NULL;

	if ( ! pFnAreReservationsFull )
		pFnAreReservationsFull = (UFunction*) UObject::GObjObjects()->Data[ 38121 ];

	UPartyBeaconHost_execAreReservationsFull_Parms AreReservationsFull_Parms;

	this->ProcessEvent ( pFnAreReservationsFull, &AreReservationsFull_Parms, NULL );

	return AreReservationsFull_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.DestroyClientConnection
// [0x00000000] 
// Parameters infos:
// int                            ClientIndex                    ( CPF_Parm )

void UPartyBeaconHost::DestroyClientConnection ( int ClientIndex )
{
	static UFunction* pFnDestroyClientConnection = NULL;

	if ( ! pFnDestroyClientConnection )
		pFnDestroyClientConnection = (UFunction*) UObject::GObjObjects()->Data[ 38119 ];

	UPartyBeaconHost_execDestroyClientConnection_Parms DestroyClientConnection_Parms;
	DestroyClientConnection_Parms.ClientIndex = ClientIndex;

	this->ProcessEvent ( pFnDestroyClientConnection, &DestroyClientConnection_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00000000] 
// Parameters infos:

void UPartyBeaconHost::TellClientsHostHasCancelled ( )
{
	static UFunction* pFnTellClientsHostHasCancelled = NULL;

	if ( ! pFnTellClientsHostHasCancelled )
		pFnTellClientsHostHasCancelled = (UFunction*) UObject::GObjObjects()->Data[ 38118 ];

	UPartyBeaconHost_execTellClientsHostHasCancelled_Parms TellClientsHostHasCancelled_Parms;

	this->ProcessEvent ( pFnTellClientsHostHasCancelled, &TellClientsHostHasCancelled_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00000000] 
// Parameters infos:

void UPartyBeaconHost::TellClientsHostIsReady ( )
{
	static UFunction* pFnTellClientsHostIsReady = NULL;

	if ( ! pFnTellClientsHostIsReady )
		pFnTellClientsHostIsReady = (UFunction*) UObject::GObjObjects()->Data[ 38117 ];

	UPartyBeaconHost_execTellClientsHostIsReady_Parms TellClientsHostIsReady_Parms;

	this->ProcessEvent ( pFnTellClientsHostIsReady, &TellClientsHostIsReady_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00000000] 
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )
// unsigned long                  bCleanupAddressOnClient        ( CPF_OptionalParm | CPF_Parm )

void UPartyBeaconHost::TellClientsToTravel ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo, unsigned long bCleanupAddressOnClient )
{
	static UFunction* pFnTellClientsToTravel = NULL;

	if ( ! pFnTellClientsToTravel )
		pFnTellClientsToTravel = (UFunction*) UObject::GObjObjects()->Data[ 38112 ];

	UPartyBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy ( &TellClientsToTravel_Parms.SessionName, &SessionName, 0x8 );
	TellClientsToTravel_Parms.SearchClass = SearchClass;
	memcpy ( &TellClientsToTravel_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50 );
	TellClientsToTravel_Parms.bCleanupAddressOnClient = bCleanupAddressOnClient;

	this->ProcessEvent ( pFnTellClientsToTravel, &TellClientsToTravel_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00000000] 
// Parameters infos:

void UPartyBeaconHost::DestroyBeacon ( )
{
	static UFunction* pFnDestroyBeacon = NULL;

	if ( ! pFnDestroyBeacon )
		pFnDestroyBeacon = (UFunction*) UObject::GObjObjects()->Data[ 38111 ];

	UPartyBeaconHost_execDestroyBeacon_Parms DestroyBeacon_Parms;

	this->ProcessEvent ( pFnDestroyBeacon, &DestroyBeacon_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00000000] 
// Parameters infos:
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )

void UPartyBeaconHost::OnClientCancellationReceived ( struct FUniqueNetId PartyLeader )
{
	static UFunction* pFnOnClientCancellationReceived = NULL;

	if ( ! pFnOnClientCancellationReceived )
		pFnOnClientCancellationReceived = (UFunction*) UObject::GObjObjects()->Data[ 38063 ];

	UPartyBeaconHost_execOnClientCancellationReceived_Parms OnClientCancellationReceived_Parms;
	memcpy ( &OnClientCancellationReceived_Parms.PartyLeader, &PartyLeader, 0x8 );

	this->ProcessEvent ( pFnOnClientCancellationReceived, &OnClientCancellationReceived_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00000000] 
// Parameters infos:

void UPartyBeaconHost::OnReservationsFull ( )
{
	static UFunction* pFnOnReservationsFull = NULL;

	if ( ! pFnOnReservationsFull )
		pFnOnReservationsFull = (UFunction*) UObject::GObjObjects()->Data[ 38064 ];

	UPartyBeaconHost_execOnReservationsFull_Parms OnReservationsFull_Parms;

	this->ProcessEvent ( pFnOnReservationsFull, &OnReservationsFull_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00000000] 
// Parameters infos:

void UPartyBeaconHost::OnReservationChange ( )
{
	static UFunction* pFnOnReservationChange = NULL;

	if ( ! pFnOnReservationChange )
		pFnOnReservationChange = (UFunction*) UObject::GObjObjects()->Data[ 38065 ];

	UPartyBeaconHost_execOnReservationChange_Parms OnReservationChange_Parms;

	this->ProcessEvent ( pFnOnReservationChange, &OnReservationChange_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00000000] 
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bMaintainParty                 ( CPF_Parm )

void UPartyBeaconHost::HandlePlayerLogout ( struct FUniqueNetId PlayerID, unsigned long bMaintainParty )
{
	static UFunction* pFnHandlePlayerLogout = NULL;

	if ( ! pFnHandlePlayerLogout )
		pFnHandlePlayerLogout = (UFunction*) UObject::GObjObjects()->Data[ 38107 ];

	UPartyBeaconHost_execHandlePlayerLogout_Parms HandlePlayerLogout_Parms;
	memcpy ( &HandlePlayerLogout_Parms.PlayerID, &PlayerID, 0x8 );
	HandlePlayerLogout_Parms.bMaintainParty = bMaintainParty;

	this->ProcessEvent ( pFnHandlePlayerLogout, &HandlePlayerLogout_Parms, NULL );
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Const | CPF_Parm | CPF_OutParm )

int UPartyBeaconHost::GetExistingReservation ( struct FUniqueNetId* PartyLeader )
{
	static UFunction* pFnGetExistingReservation = NULL;

	if ( ! pFnGetExistingReservation )
		pFnGetExistingReservation = (UFunction*) UObject::GObjObjects()->Data[ 38104 ];

	UPartyBeaconHost_execGetExistingReservation_Parms GetExistingReservation_Parms;

	this->ProcessEvent ( pFnGetExistingReservation, &GetExistingReservation_Parms, NULL );

	if ( PartyLeader )
		memcpy ( PartyLeader, &GetExistingReservation_Parms.PartyLeader, 0x8 );

	return GetExistingReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00000000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )
// TArray< struct FPlayerReservation > PlayerMembers                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UPartyBeaconHost::UpdatePartyReservationEntry ( struct FUniqueNetId PartyLeader, TArray< struct FPlayerReservation >* PlayerMembers )
{
	static UFunction* pFnUpdatePartyReservationEntry = NULL;

	if ( ! pFnUpdatePartyReservationEntry )
		pFnUpdatePartyReservationEntry = (UFunction*) UObject::GObjObjects()->Data[ 38099 ];

	UPartyBeaconHost_execUpdatePartyReservationEntry_Parms UpdatePartyReservationEntry_Parms;
	memcpy ( &UpdatePartyReservationEntry_Parms.PartyLeader, &PartyLeader, 0x8 );

	this->ProcessEvent ( pFnUpdatePartyReservationEntry, &UpdatePartyReservationEntry_Parms, NULL );

	if ( PlayerMembers )
		memcpy ( PlayerMembers, &UpdatePartyReservationEntry_Parms.PlayerMembers, 0xC );

	return UpdatePartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00000000] 
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )
// int                            TeamNum                        ( CPF_Parm )
// unsigned long                  bIsHost                        ( CPF_Parm )
// TArray< struct FPlayerReservation > PlayerMembers                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UPartyBeaconHost::AddPartyReservationEntry ( struct FUniqueNetId PartyLeader, int TeamNum, unsigned long bIsHost, TArray< struct FPlayerReservation >* PlayerMembers )
{
	static UFunction* pFnAddPartyReservationEntry = NULL;

	if ( ! pFnAddPartyReservationEntry )
		pFnAddPartyReservationEntry = (UFunction*) UObject::GObjObjects()->Data[ 38092 ];

	UPartyBeaconHost_execAddPartyReservationEntry_Parms AddPartyReservationEntry_Parms;
	memcpy ( &AddPartyReservationEntry_Parms.PartyLeader, &PartyLeader, 0x8 );
	AddPartyReservationEntry_Parms.TeamNum = TeamNum;
	AddPartyReservationEntry_Parms.bIsHost = bIsHost;

	this->ProcessEvent ( pFnAddPartyReservationEntry, &AddPartyReservationEntry_Parms, NULL );

	if ( PlayerMembers )
		memcpy ( PlayerMembers, &AddPartyReservationEntry_Parms.PlayerMembers, 0xC );

	return AddPartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.ProcessLocalReservationRequest
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )
// TArray< struct FPlayerReservation > PartyMembers                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            PartyTeamNum                   ( CPF_Parm )

bool UPartyBeaconHost::ProcessLocalReservationRequest ( struct FUniqueNetId PartyLeader, TArray< struct FPlayerReservation > PartyMembers, int PartyTeamNum )
{
	static UFunction* pFnProcessLocalReservationRequest = NULL;

	if ( ! pFnProcessLocalReservationRequest )
		pFnProcessLocalReservationRequest = (UFunction*) UObject::GObjObjects()->Data[ 38086 ];

	UPartyBeaconHost_execProcessLocalReservationRequest_Parms ProcessLocalReservationRequest_Parms;
	memcpy ( &ProcessLocalReservationRequest_Parms.PartyLeader, &PartyLeader, 0x8 );
	memcpy ( &ProcessLocalReservationRequest_Parms.PartyMembers, &PartyMembers, 0xC );
	ProcessLocalReservationRequest_Parms.PartyTeamNum = PartyTeamNum;

	this->ProcessEvent ( pFnProcessLocalReservationRequest, &ProcessLocalReservationRequest_Parms, NULL );

	return ProcessLocalReservationRequest_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            InNumTeams                     ( CPF_Parm )
// TArray< int >                  InNumPlayersPerTeams           ( CPF_Parm | CPF_NeedCtorLink )
// int                            InNumReservations              ( CPF_Parm )
// struct FName                   InSessionName                  ( CPF_Parm )
// struct FPartyReservation       InHostPartyReservation         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconHost::InitHostBeacon ( int InNumTeams, TArray< int > InNumPlayersPerTeams, int InNumReservations, struct FName InSessionName, struct FPartyReservation* InHostPartyReservation )
{
	static UFunction* pFnInitHostBeacon = NULL;

	if ( ! pFnInitHostBeacon )
		pFnInitHostBeacon = (UFunction*) UObject::GObjObjects()->Data[ 38078 ];

	UPartyBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	InitHostBeacon_Parms.InNumTeams = InNumTeams;
	memcpy ( &InitHostBeacon_Parms.InNumPlayersPerTeams, &InNumPlayersPerTeams, 0xC );
	InitHostBeacon_Parms.InNumReservations = InNumReservations;
	memcpy ( &InitHostBeacon_Parms.InSessionName, &InSessionName, 0x8 );

	this->ProcessEvent ( pFnInitHostBeacon, &InitHostBeacon_Parms, NULL );

	if ( InHostPartyReservation )
		memcpy ( InHostPartyReservation, &InitHostBeacon_Parms.InHostPartyReservation, 0x18 );

	return InitHostBeacon_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00000000] 
// Parameters infos:
// unsigned long                  bPause                         ( CPF_Parm )

void UPartyBeaconHost::PauseReservationRequests ( unsigned long bPause )
{
	static UFunction* pFnPauseReservationRequests = NULL;

	if ( ! pFnPauseReservationRequests )
		pFnPauseReservationRequests = (UFunction*) UObject::GObjObjects()->Data[ 38076 ];

	UPartyBeaconHost_execPauseReservationRequests_Parms PauseReservationRequests_Parms;
	PauseReservationRequests_Parms.bPause = bPause;

	this->ProcessEvent ( pFnPauseReservationRequests, &PauseReservationRequests_Parms, NULL );
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 D                              ( CPF_Parm | CPF_NeedCtorLink )

int UWebRequest::GetHexDigit ( struct FString D )
{
	static UFunction* pFnGetHexDigit = NULL;

	if ( ! pFnGetHexDigit )
		pFnGetHexDigit = (UFunction*) UObject::GObjObjects()->Data[ 38298 ];

	UWebRequest_execGetHexDigit_Parms GetHexDigit_Parms;
	memcpy ( &GetHexDigit_Parms.D, &D, 0xC );

	this->ProcessEvent ( pFnGetHexDigit, &GetHexDigit_Parms, NULL );

	return GetHexDigit_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00000000] 
// Parameters infos:
// struct FString                 Data                           ( CPF_Parm | CPF_NeedCtorLink )

void UWebRequest::DecodeFormData ( struct FString Data )
{
	static UFunction* pFnDecodeFormData = NULL;

	if ( ! pFnDecodeFormData )
		pFnDecodeFormData = (UFunction*) UObject::GObjObjects()->Data[ 38289 ];

	UWebRequest_execDecodeFormData_Parms DecodeFormData_Parms;
	memcpy ( &DecodeFormData_Parms.Data, &Data, 0xC );

	this->ProcessEvent ( pFnDecodeFormData, &DecodeFormData_Parms, NULL );
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00000000] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UWebRequest::ProcessHeaderString ( struct FString S )
{
	static UFunction* pFnProcessHeaderString = NULL;

	if ( ! pFnProcessHeaderString )
		pFnProcessHeaderString = (UFunction*) UObject::GObjObjects()->Data[ 38286 ];

	UWebRequest_execProcessHeaderString_Parms ProcessHeaderString_Parms;
	memcpy ( &ProcessHeaderString_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnProcessHeaderString, &ProcessHeaderString_Parms, NULL );
};

// Function IpDrv.WebRequest.Dump
// [0x00000000] 
// Parameters infos:

void UWebRequest::Dump ( )
{
	static UFunction* pFnDump = NULL;

	if ( ! pFnDump )
		pFnDump = (UFunction*) UObject::GObjObjects()->Data[ 38285 ];

	UWebRequest_execDump_Parms Dump_Parms;

	this->ProcessEvent ( pFnDump, &Dump_Parms, NULL );
};

// Function IpDrv.WebRequest.GetVariables
// [0x00000000] 
// Parameters infos:
// TArray< struct FString >       varNames                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWebRequest::GetVariables ( TArray< struct FString >* varNames )
{
	static UFunction* pFnGetVariables = NULL;

	if ( ! pFnGetVariables )
		pFnGetVariables = (UFunction*) UObject::GObjObjects()->Data[ 38282 ];

	UWebRequest_execGetVariables_Parms GetVariables_Parms;

	this->ProcessEvent ( pFnGetVariables, &GetVariables_Parms, NULL );

	if ( varNames )
		memcpy ( varNames, &GetVariables_Parms.varNames, 0xC );
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Number                         ( CPF_Parm )
// struct FString                 DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::GetVariableNumber ( struct FString VariableName, int Number, struct FString DefaultValue )
{
	static UFunction* pFnGetVariableNumber = NULL;

	if ( ! pFnGetVariableNumber )
		pFnGetVariableNumber = (UFunction*) UObject::GObjObjects()->Data[ 37141 ];

	UWebRequest_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy ( &GetVariableNumber_Parms.VariableName, &VariableName, 0xC );
	GetVariableNumber_Parms.Number = Number;
	memcpy ( &GetVariableNumber_Parms.DefaultValue, &DefaultValue, 0xC );

	this->ProcessEvent ( pFnGetVariableNumber, &GetVariableNumber_Parms, NULL );

	return GetVariableNumber_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00000000] 
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )

int UWebRequest::GetVariableCount ( struct FString VariableName )
{
	static UFunction* pFnGetVariableCount = NULL;

	if ( ! pFnGetVariableCount )
		pFnGetVariableCount = (UFunction*) UObject::GObjObjects()->Data[ 37139 ];

	UWebRequest_execGetVariableCount_Parms GetVariableCount_Parms;
	memcpy ( &GetVariableCount_Parms.VariableName, &VariableName, 0xC );

	this->ProcessEvent ( pFnGetVariableCount, &GetVariableCount_Parms, NULL );

	return GetVariableCount_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariable
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::GetVariable ( struct FString VariableName, struct FString DefaultValue )
{
	static UFunction* pFnGetVariable = NULL;

	if ( ! pFnGetVariable )
		pFnGetVariable = (UFunction*) UObject::GObjObjects()->Data[ 37137 ];

	UWebRequest_execGetVariable_Parms GetVariable_Parms;
	memcpy ( &GetVariable_Parms.VariableName, &VariableName, 0xC );
	memcpy ( &GetVariable_Parms.DefaultValue, &DefaultValue, 0xC );

	this->ProcessEvent ( pFnGetVariable, &GetVariable_Parms, NULL );

	return GetVariable_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddVariable
// [0x00000000] 
// Parameters infos:
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UWebRequest::AddVariable ( struct FString VariableName, struct FString Value )
{
	static UFunction* pFnAddVariable = NULL;

	if ( ! pFnAddVariable )
		pFnAddVariable = (UFunction*) UObject::GObjObjects()->Data[ 38273 ];

	UWebRequest_execAddVariable_Parms AddVariable_Parms;
	memcpy ( &AddVariable_Parms.VariableName, &VariableName, 0xC );
	memcpy ( &AddVariable_Parms.Value, &Value, 0xC );

	this->ProcessEvent ( pFnAddVariable, &AddVariable_Parms, NULL );
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00000000] 
// Parameters infos:
// TArray< struct FString >       headers                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWebRequest::GetHeaders ( TArray< struct FString >* headers )
{
	static UFunction* pFnGetHeaders = NULL;

	if ( ! pFnGetHeaders )
		pFnGetHeaders = (UFunction*) UObject::GObjObjects()->Data[ 38270 ];

	UWebRequest_execGetHeaders_Parms GetHeaders_Parms;

	this->ProcessEvent ( pFnGetHeaders, &GetHeaders_Parms, NULL );

	if ( headers )
		memcpy ( headers, &GetHeaders_Parms.headers, 0xC );
};

// Function IpDrv.WebRequest.GetHeader
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::GetHeader ( struct FString HeaderName, struct FString DefaultValue )
{
	static UFunction* pFnGetHeader = NULL;

	if ( ! pFnGetHeader )
		pFnGetHeader = (UFunction*) UObject::GObjObjects()->Data[ 38266 ];

	UWebRequest_execGetHeader_Parms GetHeader_Parms;
	memcpy ( &GetHeader_Parms.HeaderName, &HeaderName, 0xC );
	memcpy ( &GetHeader_Parms.DefaultValue, &DefaultValue, 0xC );

	this->ProcessEvent ( pFnGetHeader, &GetHeader_Parms, NULL );

	return GetHeader_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddHeader
// [0x00000000] 
// Parameters infos:
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UWebRequest::AddHeader ( struct FString HeaderName, struct FString Value )
{
	static UFunction* pFnAddHeader = NULL;

	if ( ! pFnAddHeader )
		pFnAddHeader = (UFunction*) UObject::GObjObjects()->Data[ 38263 ];

	UWebRequest_execAddHeader_Parms AddHeader_Parms;
	memcpy ( &AddHeader_Parms.HeaderName, &HeaderName, 0xC );
	memcpy ( &AddHeader_Parms.Value, &Value, 0xC );

	this->ProcessEvent ( pFnAddHeader, &AddHeader_Parms, NULL );
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Decoded                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::EncodeBase64 ( struct FString Decoded )
{
	static UFunction* pFnEncodeBase64 = NULL;

	if ( ! pFnEncodeBase64 )
		pFnEncodeBase64 = (UFunction*) UObject::GObjObjects()->Data[ 38260 ];

	UWebRequest_execEncodeBase64_Parms EncodeBase64_Parms;
	memcpy ( &EncodeBase64_Parms.Decoded, &Decoded, 0xC );

	this->ProcessEvent ( pFnEncodeBase64, &EncodeBase64_Parms, NULL );

	return EncodeBase64_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Encoded                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::DecodeBase64 ( struct FString Encoded )
{
	static UFunction* pFnDecodeBase64 = NULL;

	if ( ! pFnDecodeBase64 )
		pFnDecodeBase64 = (UFunction*) UObject::GObjObjects()->Data[ 38257 ];

	UWebRequest_execDecodeBase64_Parms DecodeBase64_Parms;
	memcpy ( &DecodeBase64_Parms.Encoded, &Encoded, 0xC );

	this->ProcessEvent ( pFnDecodeBase64, &DecodeBase64_Parms, NULL );

	return DecodeBase64_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SentResponse
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWebResponse::SentResponse ( )
{
	static UFunction* pFnSentResponse = NULL;

	if ( ! pFnSentResponse )
		pFnSentResponse = (UFunction*) UObject::GObjObjects()->Data[ 38358 ];

	UWebResponse_execSentResponse_Parms SentResponse_Parms;

	this->ProcessEvent ( pFnSentResponse, &SentResponse_Parms, NULL );

	return SentResponse_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SentText
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWebResponse::SentText ( )
{
	static UFunction* pFnSentText = NULL;

	if ( ! pFnSentText )
		pFnSentText = (UFunction*) UObject::GObjObjects()->Data[ 38356 ];

	UWebResponse_execSentText_Parms SentText_Parms;

	this->ProcessEvent ( pFnSentText, &SentText_Parms, NULL );

	return SentText_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.Redirect
// [0x00000000] 
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::Redirect ( struct FString URL )
{
	static UFunction* pFnRedirect = NULL;

	if ( ! pFnRedirect )
		pFnRedirect = (UFunction*) UObject::GObjObjects()->Data[ 38354 ];

	UWebResponse_execRedirect_Parms Redirect_Parms;
	memcpy ( &Redirect_Parms.URL, &URL, 0xC );

	this->ProcessEvent ( pFnRedirect, &Redirect_Parms, NULL );
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00000000] 
// Parameters infos:
// struct FString                 ContentType                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCache                         ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::SendStandardHeaders ( struct FString ContentType, unsigned long bCache )
{
	static UFunction* pFnSendStandardHeaders = NULL;

	if ( ! pFnSendStandardHeaders )
		pFnSendStandardHeaders = (UFunction*) UObject::GObjObjects()->Data[ 38350 ];

	UWebResponse_execSendStandardHeaders_Parms SendStandardHeaders_Parms;
	memcpy ( &SendStandardHeaders_Parms.ContentType, &ContentType, 0xC );
	SendStandardHeaders_Parms.bCache = bCache;

	this->ProcessEvent ( pFnSendStandardHeaders, &SendStandardHeaders_Parms, NULL );
};

// Function IpDrv.WebResponse.HTTPError
// [0x00000000] 
// Parameters infos:
// int                            ErrorNum                       ( CPF_Parm )
// struct FString                 Data                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPError ( int ErrorNum, struct FString Data )
{
	static UFunction* pFnHTTPError = NULL;

	if ( ! pFnHTTPError )
		pFnHTTPError = (UFunction*) UObject::GObjObjects()->Data[ 38347 ];

	UWebResponse_execHTTPError_Parms HTTPError_Parms;
	HTTPError_Parms.ErrorNum = ErrorNum;
	memcpy ( &HTTPError_Parms.Data, &Data, 0xC );

	this->ProcessEvent ( pFnHTTPError, &HTTPError_Parms, NULL );
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00000000] 
// Parameters infos:

void UWebResponse::SendHeaders ( )
{
	static UFunction* pFnSendHeaders = NULL;

	if ( ! pFnSendHeaders )
		pFnSendHeaders = (UFunction*) UObject::GObjObjects()->Data[ 38345 ];

	UWebResponse_execSendHeaders_Parms SendHeaders_Parms;

	this->ProcessEvent ( pFnSendHeaders, &SendHeaders_Parms, NULL );
};

// Function IpDrv.WebResponse.AddHeader
// [0x00000000] 
// Parameters infos:
// struct FString                 Header                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bReplace                       ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::AddHeader ( struct FString Header, unsigned long bReplace )
{
	static UFunction* pFnAddHeader = NULL;

	if ( ! pFnAddHeader )
		pFnAddHeader = (UFunction*) UObject::GObjObjects()->Data[ 38338 ];

	UWebResponse_execAddHeader_Parms AddHeader_Parms;
	memcpy ( &AddHeader_Parms.Header, &Header, 0xC );
	AddHeader_Parms.bReplace = bReplace;

	this->ProcessEvent ( pFnAddHeader, &AddHeader_Parms, NULL );
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00000000] 
// Parameters infos:
// struct FString                 Header                         ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPHeader ( struct FString Header )
{
	static UFunction* pFnHTTPHeader = NULL;

	if ( ! pFnHTTPHeader )
		pFnHTTPHeader = (UFunction*) UObject::GObjObjects()->Data[ 38336 ];

	UWebResponse_execHTTPHeader_Parms HTTPHeader_Parms;
	memcpy ( &HTTPHeader_Parms.Header, &Header, 0xC );

	this->ProcessEvent ( pFnHTTPHeader, &HTTPHeader_Parms, NULL );
};

// Function IpDrv.WebResponse.HTTPResponse
// [0x00000000] 
// Parameters infos:
// struct FString                 Header                         ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPResponse ( struct FString Header )
{
	static UFunction* pFnHTTPResponse = NULL;

	if ( ! pFnHTTPResponse )
		pFnHTTPResponse = (UFunction*) UObject::GObjObjects()->Data[ 38334 ];

	UWebResponse_execHTTPResponse_Parms HTTPResponse_Parms;
	memcpy ( &HTTPResponse_Parms.Header, &Header, 0xC );

	this->ProcessEvent ( pFnHTTPResponse, &HTTPResponse_Parms, NULL );
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00000000] 
// Parameters infos:
// struct FString                 Realm                          ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::FailAuthentication ( struct FString Realm )
{
	static UFunction* pFnFailAuthentication = NULL;

	if ( ! pFnFailAuthentication )
		pFnFailAuthentication = (UFunction*) UObject::GObjObjects()->Data[ 38332 ];

	UWebResponse_execFailAuthentication_Parms FailAuthentication_Parms;
	memcpy ( &FailAuthentication_Parms.Realm, &Realm, 0xC );

	this->ProcessEvent ( pFnFailAuthentication, &FailAuthentication_Parms, NULL );
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ContentType                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::SendCachedFile ( struct FString Filename, struct FString ContentType )
{
	static UFunction* pFnSendCachedFile = NULL;

	if ( ! pFnSendCachedFile )
		pFnSendCachedFile = (UFunction*) UObject::GObjObjects()->Data[ 38328 ];

	UWebResponse_execSendCachedFile_Parms SendCachedFile_Parms;
	memcpy ( &SendCachedFile_Parms.Filename, &Filename, 0xC );
	memcpy ( &SendCachedFile_Parms.ContentType, &ContentType, 0xC );

	this->ProcessEvent ( pFnSendCachedFile, &SendCachedFile_Parms, NULL );

	return SendCachedFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SendBinary
// [0x00000000] 
// Parameters infos:
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

void UWebResponse::SendBinary ( int Count, unsigned char* B )
{
	static UFunction* pFnSendBinary = NULL;

	if ( ! pFnSendBinary )
		pFnSendBinary = (UFunction*) UObject::GObjObjects()->Data[ 38325 ];

	UWebResponse_execSendBinary_Parms SendBinary_Parms;
	SendBinary_Parms.Count = Count;
	memcpy ( &SendBinary_Parms.B, &B, 0xFF );

	this->ProcessEvent ( pFnSendBinary, &SendBinary_Parms, NULL );
};

// Function IpDrv.WebResponse.SendText
// [0x00000000] 
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bNoCRLF                        ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::SendText ( struct FString Text, unsigned long bNoCRLF )
{
	static UFunction* pFnSendText = NULL;

	if ( ! pFnSendText )
		pFnSendText = (UFunction*) UObject::GObjObjects()->Data[ 38322 ];

	UWebResponse_execSendText_Parms SendText_Parms;
	memcpy ( &SendText_Parms.Text, &Text, 0xC );
	SendText_Parms.bNoCRLF = bNoCRLF;

	this->ProcessEvent ( pFnSendText, &SendText_Parms, NULL );
};

// Function IpDrv.WebResponse.Dump
// [0x00000000] 
// Parameters infos:

void UWebResponse::Dump ( )
{
	static UFunction* pFnDump = NULL;

	if ( ! pFnDump )
		pFnDump = (UFunction*) UObject::GObjObjects()->Data[ 38321 ];

	UWebResponse_execDump_Parms Dump_Parms;

	this->ProcessEvent ( pFnDump, &Dump_Parms, NULL );
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            OffsetSeconds                  ( CPF_OptionalParm | CPF_Parm )

struct FString UWebResponse::GetHTTPExpiration ( int OffsetSeconds )
{
	static UFunction* pFnGetHTTPExpiration = NULL;

	if ( ! pFnGetHTTPExpiration )
		pFnGetHTTPExpiration = (UFunction*) UObject::GObjObjects()->Data[ 38318 ];

	UWebResponse_execGetHTTPExpiration_Parms GetHTTPExpiration_Parms;
	GetHTTPExpiration_Parms.OffsetSeconds = OffsetSeconds;

	this->ProcessEvent ( pFnGetHTTPExpiration, &GetHTTPExpiration_Parms, NULL );

	return GetHTTPExpiration_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00000000] 
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UWebResponse::LoadParsedUHTM ( struct FString Filename )
{
	static UFunction* pFnLoadParsedUHTM = NULL;

	if ( ! pFnLoadParsedUHTM )
		pFnLoadParsedUHTM = (UFunction*) UObject::GObjObjects()->Data[ 38315 ];

	UWebResponse_execLoadParsedUHTM_Parms LoadParsedUHTM_Parms;
	memcpy ( &LoadParsedUHTM_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnLoadParsedUHTM, &LoadParsedUHTM_Parms, NULL );

	return LoadParsedUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::IncludeBinaryFile ( struct FString Filename )
{
	static UFunction* pFnIncludeBinaryFile = NULL;

	if ( ! pFnIncludeBinaryFile )
		pFnIncludeBinaryFile = (UFunction*) UObject::GObjObjects()->Data[ 37154 ];

	UWebResponse_execIncludeBinaryFile_Parms IncludeBinaryFile_Parms;
	memcpy ( &IncludeBinaryFile_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnIncludeBinaryFile, &IncludeBinaryFile_Parms, NULL );

	return IncludeBinaryFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::IncludeUHTM ( struct FString Filename )
{
	static UFunction* pFnIncludeUHTM = NULL;

	if ( ! pFnIncludeUHTM )
		pFnIncludeUHTM = (UFunction*) UObject::GObjObjects()->Data[ 37144 ];

	UWebResponse_execIncludeUHTM_Parms IncludeUHTM_Parms;
	memcpy ( &IncludeUHTM_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnIncludeUHTM, &IncludeUHTM_Parms, NULL );

	return IncludeUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00000000] 
// Parameters infos:

void UWebResponse::ClearSubst ( )
{
	static UFunction* pFnClearSubst = NULL;

	if ( ! pFnClearSubst )
		pFnClearSubst = (UFunction*) UObject::GObjObjects()->Data[ 38312 ];

	UWebResponse_execClearSubst_Parms ClearSubst_Parms;

	this->ProcessEvent ( pFnClearSubst, &ClearSubst_Parms, NULL );
};

// Function IpDrv.WebResponse.Subst
// [0x00000000] 
// Parameters infos:
// struct FString                 Variable                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bClear                         ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::Subst ( struct FString Variable, struct FString Value, unsigned long bClear )
{
	static UFunction* pFnSubst = NULL;

	if ( ! pFnSubst )
		pFnSubst = (UFunction*) UObject::GObjObjects()->Data[ 37143 ];

	UWebResponse_execSubst_Parms Subst_Parms;
	memcpy ( &Subst_Parms.Variable, &Variable, 0xC );
	memcpy ( &Subst_Parms.Value, &Value, 0xC );
	Subst_Parms.bClear = bClear;

	this->ProcessEvent ( pFnSubst, &Subst_Parms, NULL );
};

// Function IpDrv.WebResponse.FileExists
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::FileExists ( struct FString Filename )
{
	static UFunction* pFnFileExists = NULL;

	if ( ! pFnFileExists )
		pFnFileExists = (UFunction*) UObject::GObjObjects()->Data[ 37152 ];

	UWebResponse_execFileExists_Parms FileExists_Parms;
	memcpy ( &FileExists_Parms.Filename, &Filename, 0xC );

	this->ProcessEvent ( pFnFileExists, &FileExists_Parms, NULL );

	return FileExists_Parms.ReturnValue;
};

// Function IpDrv.WebApplication.PostQuery
// [0x00000000] 
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UWebApplication::PostQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnPostQuery = NULL;

	if ( ! pFnPostQuery )
		pFnPostQuery = (UFunction*) UObject::GObjObjects()->Data[ 37124 ];

	UWebApplication_execPostQuery_Parms PostQuery_Parms;
	PostQuery_Parms.Request = Request;
	PostQuery_Parms.Response = Response;

	this->ProcessEvent ( pFnPostQuery, &PostQuery_Parms, NULL );
};

// Function IpDrv.WebApplication.Query
// [0x00000000] 
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UWebApplication::Query ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnQuery = NULL;

	if ( ! pFnQuery )
		pFnQuery = (UFunction*) UObject::GObjObjects()->Data[ 37121 ];

	UWebApplication_execQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent ( pFnQuery, &Query_Parms, NULL );
};

// Function IpDrv.WebApplication.PreQuery
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

bool UWebApplication::PreQuery ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnPreQuery = NULL;

	if ( ! pFnPreQuery )
		pFnPreQuery = (UFunction*) UObject::GObjObjects()->Data[ 37117 ];

	UWebApplication_execPreQuery_Parms PreQuery_Parms;
	PreQuery_Parms.Request = Request;
	PreQuery_Parms.Response = Response;

	this->ProcessEvent ( pFnPreQuery, &PreQuery_Parms, NULL );

	return PreQuery_Parms.ReturnValue;
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00000000] 
// Parameters infos:

void UWebApplication::CleanupApp ( )
{
	static UFunction* pFnCleanupApp = NULL;

	if ( ! pFnCleanupApp )
		pFnCleanupApp = (UFunction*) UObject::GObjObjects()->Data[ 37116 ];

	UWebApplication_execCleanupApp_Parms CleanupApp_Parms;

	this->ProcessEvent ( pFnCleanupApp, &CleanupApp_Parms, NULL );
};

// Function IpDrv.WebApplication.Cleanup
// [0x00000000] 
// Parameters infos:

void UWebApplication::Cleanup ( )
{
	static UFunction* pFnCleanup = NULL;

	if ( ! pFnCleanup )
		pFnCleanup = (UFunction*) UObject::GObjObjects()->Data[ 37115 ];

	UWebApplication_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent ( pFnCleanup, &Cleanup_Parms, NULL );
};

// Function IpDrv.WebApplication.Init
// [0x00000000] 
// Parameters infos:

void UWebApplication::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37114 ];

	UWebApplication_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function IpDrv.WebServer.GetApplication
// [0x00000000] 
// Parameters infos:
// class UWebApplication*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URI                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SubURI                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class UWebApplication* AWebServer::GetApplication ( struct FString URI, struct FString* SubURI )
{
	static UFunction* pFnGetApplication = NULL;

	if ( ! pFnGetApplication )
		pFnGetApplication = (UFunction*) UObject::GObjObjects()->Data[ 38235 ];

	AWebServer_execGetApplication_Parms GetApplication_Parms;
	memcpy ( &GetApplication_Parms.URI, &URI, 0xC );

	this->ProcessEvent ( pFnGetApplication, &GetApplication_Parms, NULL );

	if ( SubURI )
		memcpy ( SubURI, &GetApplication_Parms.SubURI, 0xC );

	return GetApplication_Parms.ReturnValue;
};

// Function IpDrv.WebServer.LostChild
// [0x00000000] 
// Parameters infos:
// class AActor*                  C                              ( CPF_Parm )

void AWebServer::LostChild ( class AActor* C )
{
	static UFunction* pFnLostChild = NULL;

	if ( ! pFnLostChild )
		pFnLostChild = (UFunction*) UObject::GObjObjects()->Data[ 38377 ];

	AWebServer_execLostChild_Parms LostChild_Parms;
	LostChild_Parms.C = C;

	this->ProcessEvent ( pFnLostChild, &LostChild_Parms, NULL );
};

// Function IpDrv.WebServer.GainedChild
// [0x00000000] 
// Parameters infos:
// class AActor*                  C                              ( CPF_Parm )

void AWebServer::GainedChild ( class AActor* C )
{
	static UFunction* pFnGainedChild = NULL;

	if ( ! pFnGainedChild )
		pFnGainedChild = (UFunction*) UObject::GObjObjects()->Data[ 38375 ];

	AWebServer_execGainedChild_Parms GainedChild_Parms;
	GainedChild_Parms.C = C;

	this->ProcessEvent ( pFnGainedChild, &GainedChild_Parms, NULL );
};

// Function IpDrv.WebServer.Destroyed
// [0x00000000] 
// Parameters infos:

void AWebServer::Destroyed ( )
{
	static UFunction* pFnDestroyed = NULL;

	if ( ! pFnDestroyed )
		pFnDestroyed = (UFunction*) UObject::GObjObjects()->Data[ 38373 ];

	AWebServer_execDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent ( pFnDestroyed, &Destroyed_Parms, NULL );
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00000000] 
// Parameters infos:

void AWebServer::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = (UFunction*) UObject::GObjObjects()->Data[ 38368 ];

	AWebServer_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};

// Function IpDrv.HelloWeb.Query
// [0x00000000] 
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UHelloWeb::Query ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnQuery = NULL;

	if ( ! pFnQuery )
		pFnQuery = (UFunction*) UObject::GObjObjects()->Data[ 37130 ];

	UHelloWeb_execQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent ( pFnQuery, &Query_Parms, NULL );
};

// Function IpDrv.HelloWeb.Init
// [0x00000000] 
// Parameters infos:

void UHelloWeb::Init ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 37129 ];

	UHelloWeb_execInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );
};

// Function IpDrv.ImageServer.Query
// [0x00000000] 
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UImageServer::Query ( class UWebRequest* Request, class UWebResponse* Response )
{
	static UFunction* pFnQuery = NULL;

	if ( ! pFnQuery )
		pFnQuery = (UFunction*) UObject::GObjObjects()->Data[ 37148 ];

	UImageServer_execQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent ( pFnQuery, &Query_Parms, NULL );
};

// Function IpDrv.WebConnection.IsHanging
// [0x00000000] 
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWebConnection::IsHanging ( )
{
	static UFunction* pFnIsHanging = NULL;

	if ( ! pFnIsHanging )
		pFnIsHanging = (UFunction*) UObject::GObjObjects()->Data[ 38251 ];

	AWebConnection_execIsHanging_Parms IsHanging_Parms;

	this->ProcessEvent ( pFnIsHanging, &IsHanging_Parms, NULL );

	return IsHanging_Parms.ReturnValue;
};

// Function IpDrv.WebConnection.Cleanup
// [0x00000000] 
// Parameters infos:

void AWebConnection::Cleanup ( )
{
	static UFunction* pFnCleanup = NULL;

	if ( ! pFnCleanup )
		pFnCleanup = (UFunction*) UObject::GObjObjects()->Data[ 38250 ];

	AWebConnection_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent ( pFnCleanup, &Cleanup_Parms, NULL );
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00000000] 
// Parameters infos:

void AWebConnection::CheckRawBytes ( )
{
	static UFunction* pFnCheckRawBytes = NULL;

	if ( ! pFnCheckRawBytes )
		pFnCheckRawBytes = (UFunction*) UObject::GObjObjects()->Data[ 38248 ];

	AWebConnection_execCheckRawBytes_Parms CheckRawBytes_Parms;

	this->ProcessEvent ( pFnCheckRawBytes, &CheckRawBytes_Parms, NULL );
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00000000] 
// Parameters infos:

void AWebConnection::EndOfHeaders ( )
{
	static UFunction* pFnEndOfHeaders = NULL;

	if ( ! pFnEndOfHeaders )
		pFnEndOfHeaders = (UFunction*) UObject::GObjObjects()->Data[ 38246 ];

	AWebConnection_execEndOfHeaders_Parms EndOfHeaders_Parms;

	this->ProcessEvent ( pFnEndOfHeaders, &EndOfHeaders_Parms, NULL );
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00000000] 
// Parameters infos:

void AWebConnection::CreateResponseObject ( )
{
	static UFunction* pFnCreateResponseObject = NULL;

	if ( ! pFnCreateResponseObject )
		pFnCreateResponseObject = (UFunction*) UObject::GObjObjects()->Data[ 38242 ];

	AWebConnection_execCreateResponseObject_Parms CreateResponseObject_Parms;

	this->ProcessEvent ( pFnCreateResponseObject, &CreateResponseObject_Parms, NULL );
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00000000] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessPost ( struct FString S )
{
	static UFunction* pFnProcessPost = NULL;

	if ( ! pFnProcessPost )
		pFnProcessPost = (UFunction*) UObject::GObjObjects()->Data[ 38239 ];

	AWebConnection_execProcessPost_Parms ProcessPost_Parms;
	memcpy ( &ProcessPost_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnProcessPost, &ProcessPost_Parms, NULL );
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00000000] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessGet ( struct FString S )
{
	static UFunction* pFnProcessGet = NULL;

	if ( ! pFnProcessGet )
		pFnProcessGet = (UFunction*) UObject::GObjObjects()->Data[ 38231 ];

	AWebConnection_execProcessGet_Parms ProcessGet_Parms;
	memcpy ( &ProcessGet_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnProcessGet, &ProcessGet_Parms, NULL );
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00000000] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessHead ( struct FString S )
{
	static UFunction* pFnProcessHead = NULL;

	if ( ! pFnProcessHead )
		pFnProcessHead = (UFunction*) UObject::GObjObjects()->Data[ 38229 ];

	AWebConnection_execProcessHead_Parms ProcessHead_Parms;
	memcpy ( &ProcessHead_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnProcessHead, &ProcessHead_Parms, NULL );
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00000000] 
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ReceivedLine ( struct FString S )
{
	static UFunction* pFnReceivedLine = NULL;

	if ( ! pFnReceivedLine )
		pFnReceivedLine = (UFunction*) UObject::GObjObjects()->Data[ 38227 ];

	AWebConnection_execReceivedLine_Parms ReceivedLine_Parms;
	memcpy ( &ReceivedLine_Parms.S, &S, 0xC );

	this->ProcessEvent ( pFnReceivedLine, &ReceivedLine_Parms, NULL );
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00000000] 
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ReceivedText ( struct FString Text )
{
	static UFunction* pFnReceivedText = NULL;

	if ( ! pFnReceivedText )
		pFnReceivedText = (UFunction*) UObject::GObjObjects()->Data[ 38223 ];

	AWebConnection_execReceivedText_Parms ReceivedText_Parms;
	memcpy ( &ReceivedText_Parms.Text, &Text, 0xC );

	this->ProcessEvent ( pFnReceivedText, &ReceivedText_Parms, NULL );
};

// Function IpDrv.WebConnection.Timer
// [0x00000000] 
// Parameters infos:

void AWebConnection::Timer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = (UFunction*) UObject::GObjObjects()->Data[ 38222 ];

	AWebConnection_execTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};

// Function IpDrv.WebConnection.Closed
// [0x00000000] 
// Parameters infos:

void AWebConnection::Closed ( )
{
	static UFunction* pFnClosed = NULL;

	if ( ! pFnClosed )
		pFnClosed = (UFunction*) UObject::GObjObjects()->Data[ 38221 ];

	AWebConnection_execClosed_Parms Closed_Parms;

	this->ProcessEvent ( pFnClosed, &Closed_Parms, NULL );
};

// Function IpDrv.WebConnection.Accepted
// [0x00000000] 
// Parameters infos:

void AWebConnection::Accepted ( )
{
	static UFunction* pFnAccepted = NULL;

	if ( ! pFnAccepted )
		pFnAccepted = (UFunction*) UObject::GObjObjects()->Data[ 38219 ];

	AWebConnection_execAccepted_Parms Accepted_Parms;

	this->ProcessEvent ( pFnAccepted, &Accepted_Parms, NULL );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif