/*
#############################################################################################
# Tron Evolution (1.0) SDK
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

// ScriptStruct IpDrv.InternetLink.IpAddr
// 0x0008
struct FIpAddr
{
	int                                                Addr;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Port;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x0018
struct FEventUploadConfig
{
	unsigned char                                      UploadType;                                       		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     UploadUrl;                                        		// 0x0004 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	float                                              TimeOut;                                          		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bUseCompression : 1;                              		// 0x0014 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x0044
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x002C) [0x0000000000000000]              
	int                                                Skill;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	struct FDouble                                     Mu;                                               		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FDouble                                     Sigma;                                            		// 0x0038 (0x0008) [0x0000000000000000]              
	float                                              ElapsedSessionTime;                               		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// 0x0028
struct FNewsCacheEntry
{
	struct FString                                     NewsUrl;                                          		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      ReadState;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      NewsType;                                         		// 0x000D (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     NewsItem;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              TimeOut;                                          		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bIsUnicode : 1;                                   		// 0x0020 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FPointer                                    HttpDownloader;                                   		// 0x0024 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x003C
struct FPartyReservation
{
	int                                                TeamNum;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0004 (0x002C) [0x0000000000000000]              
	TArray< struct FPlayerReservation >                PartyMembers;                                     		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// 0x0034
struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x002C) [0x0000000000000000]              
	float                                              ElapsedHeartbeatTime;                             		// 0x002C (0x0004) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x0030 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif