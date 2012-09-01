/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct IpDrv.IniLocPatcherMcp.CachedTitleFile
// 0x0028
struct FCachedTitleFile
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bFileWasUsed : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< unsigned char >                            FileData;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            HashDigest;                                       		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.InternetLink.IpAddr
// 0x0008
struct FIpAddr
{
	int                                                Addr;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Port;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeacon.ConnectionBandwidthStats
// 0x000C
struct FConnectionBandwidthStats
{
	int                                                UpstreamRate;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                DownstreamRate;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RoundtripLatency;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeacon.PlayerMember
// 0x0010
struct FPlayerMember
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Skill;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                NetId;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientBandwidthTestData
// 0x0014
struct FClientBandwidthTestData
{
	unsigned char                                      TestType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      CurrentState;                                     		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                NumBytesToSendTotal;                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NumBytesSentTotal;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                NumBytesSentLast;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              ElapsedTestTime;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientConnectionRequest
// 0x0024
struct FClientConnectionRequest
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      NatType;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      bCanHostVs : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< struct FConnectionBandwidthStats >         BandwidthHistory;                                 		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinutesSinceLastTest;                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientConnectionBandwidthTestData
// 0x0028
struct FClientConnectionBandwidthTestData
{
	unsigned char                                      CurrentState;                                     		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      TestType;                                         		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                BytesTotalNeeded;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                BytesReceived;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FDouble                                     RequestTestStartTime;                             		// 0x000C (0x0008) [0x0000000000000000]              
	struct FDouble                                     TestStartTime;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FConnectionBandwidthStats                   BandwidthStats;                                   		// 0x001C (0x000C) [0x0000000000000000]              
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientMeshBeaconConnection
// 0x0058
struct FClientMeshBeaconConnection
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ElapsedHeartbeatTime;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x000C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bConnectionAccepted : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FClientConnectionBandwidthTestData          BandwidthTest;                                    		// 0x0014 (0x0028) [0x0000000000000000]              
	unsigned char                                      NatType;                                          		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned long                                      bCanHostVs : 1;                                   		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              GoodHostRatio;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	TArray< struct FConnectionBandwidthStats >         BandwidthHistory;                                 		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinutesSinceLastTest;                             		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.OnlineChallengesInterfaceMcp.ChallengeReq
// 0x0008
struct FChallengeReq
{
	unsigned char                                      ChallengeID;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                ReqValue;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.OnlineChallengesInterfaceMcp.ChallengeEntry
// 0x0024
struct FChallengeEntry
{
	struct FString                                     ChallengeUrl;                                     		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      ReadState;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	float                                              TimeOut;                                          		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsUnicode : 1;                                   		// 0x0014 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned char                                      ChallengeID;                                      		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                Value;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	struct FPointer                                    HttpDownloader;                                   		// 0x0020 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x001C
struct FEventUploadConfig
{
	unsigned char                                      UploadType;                                       		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     UploadUrl;                                        		// 0x0004 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              TimeOut;                                          		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bUseCompression : 1;                              		// 0x0014 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	int                                                Port;                                             		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// 0x002C
struct FNewsCacheEntry
{
	struct FString                                     NewsUrl;                                          		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      ReadState;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      NewsType;                                         		// 0x000D (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     NewsItem;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeOut;                                          		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsUnicode : 1;                                   		// 0x0020 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FPointer                                    HttpDownloader;                                   		// 0x0024 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                Port;                                             		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// 0x0010
struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ElapsedHeartbeatTime;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x000C (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x0024
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Skill;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                XpLevel;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	struct FDouble                                     Mu;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FDouble                                     Sigma;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              ElapsedSessionTime;                               		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x0018
struct FPartyReservation
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	TArray< struct FPlayerReservation >                PartyMembers;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif