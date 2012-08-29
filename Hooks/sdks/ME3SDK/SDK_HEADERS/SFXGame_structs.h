/*
#############################################################################################
# Mass Effect 3 (1.0) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: SFXGame_structs.h
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

// ScriptStruct SFXGame.Bio2DA.Bio2DACellData
// 0x0008
struct FBio2DACellData
{
	unsigned char                                      nDataType_NATIVE_MIRROR;                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FPointer                                    nData_NATIVE_MIRROR;                              		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.Bio2DA.Bio2daMasterRowIndexRec
// 0x0008
struct FBio2daMasterRowIndexRec
{
	int                                                nRowIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UBio2DA*                                     pTable;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAiController.EnemyInfo
// 0x0040
struct FEnemyInfo
{
	struct FVector                                     KnownLocation;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     InterpLocation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	struct FCoverInfo                                  Cover;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	class APawn*                                       Pawn;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              InterpTime;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              InitialSeenTime;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              LastSeenTime;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              LastFailedPathTime;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              LastKnownLocUpdateTime;                           		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              LastHurtByTime;                                   		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioAiController.DelayUpdateInfo
// 0x0011
struct FDelayUpdateInfo
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class AController*                                 Controller;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              UpdateTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimCheckBlendOut.BioAnimCheckBlendOutNode
// 0x0008
struct FBioAnimCheckBlendOutNode
{
	class UAnimNodeBlendList*                          Node;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimCheckBlendOut.BioAnimCheckBlendOutPath
// 0x0010
struct FBioAnimCheckBlendOutPath
{
	TArray< struct FBioAnimCheckBlendOutNode >         Nodes;                                            		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FPointer                                    Next;                                             		// 0x000C (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioAnimMovementSync.BioAnimMovementSyncNode
// 0x0008
struct FBioAnimMovementSyncNode
{
	class UAnimNode*                                   Node;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAnimNode*                                   NodeWeight;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlend_TurnInPlace.RotTransitionInfo
// 0x0008
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ChildIndex;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendByAction.BlendTimeTo
// 0x0005
struct FBlendTimeTo
{
	float                                              m_fTime;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eAnimNode;                                      		// 0x0004 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioAnimNodeBlendByAction.BlendTimeFrom
// 0x0059
struct FBlendTimeFrom
{
	struct FBlendTimeTo                                m_aBlendTimeTo[ 0xB ];                            		// 0x0000 (0x0058) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_eAnimNode;                                      		// 0x0058 (0x0001) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct SFXGame.BioAnimNodeBlendByAim.BioAnimNodeBlendByAimLimits
// 0x0010
struct FBioAnimNodeBlendByAimLimits
{
	float                                              DegreesLeft;                                      		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DegreesRight;                                     		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DegreesUp;                                        		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DegreesDown;                                      		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SFXGame.BioAnimNodeBlendMultiAdditive.BioChildActivateData
// 0x0010
struct FBioChildActivateData
{
	float                                              fFinalWeight;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fRemainingTime;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fTotalBlendTime;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bApplyData : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioAnimNodeBlendPoseAndGestures.BioChildPinData
// 0x001C
struct FBioChildPinData
{
	TArray< class UBioGestChainTree* >                 aChainedTrees;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fEndBlendStartTime;                               		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fEndTime;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayUntilNext : 1;                               		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseDynAnimSets : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioAnimNodeBlendPoseAndGestures.BioEndBlendData
// 0x0008
struct FBioEndBlendData
{
	float                                              fEndBlendStartTime;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalar.BioScalarBlendParams
// 0x000C
struct FBioScalarBlendParams
{
	float                                              Min;                                              		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Peak;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalar.BioScalarPrecomputedValues
// 0x0008
struct FBioScalarPrecomputedValues
{
	float                                              fRangeLowerRatio;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fRangeUpperRatio;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalarBehavior.BioAnimScalarNodeChildDef
// 0x0014
struct FBioAnimScalarNodeChildDef
{
	struct FBioScalarBlendParams                       BlendParams;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendScalarBehavior.BioAnimScalarNodeBehaviorDef
// 0x0024
struct FBioAnimScalarNodeBehaviorDef
{
	TArray< struct FBioAnimScalarNodeChildDef >        Children;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              BlendPctPerSecond;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              DefaultScalar;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      BlendInstant : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioAnimNodeBlendState.BioAnimBlendParams
// 0x000D
struct FBioAnimBlendParams
{
	TArray< float >                                    BlendToChildTimes;                                		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      PlayMode;                                         		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioAnimNodeBlendStateBehavior.BioAnimStateNodeChildDef
// 0x001C
struct FBioAnimStateNodeChildDef
{
	struct FBioAnimBlendParams                         BlendParams;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              DefaultWeight;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioAnimNodeBlendStateBehavior.BioAnimStateNodeBehaviorDef
// 0x000C
struct FBioAnimStateNodeBehaviorDef
{
	TArray< struct FBioAnimStateNodeChildDef >         Children;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0018
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UAnimSequence*                               AnimSeq;                                          		// 0x0014 (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct SFXGame.BioDefine.EnemyWaveInfo
// 0x0014
struct FEnemyWaveInfo
{
	struct FName                                       EnemyType;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                MinCount;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                MaxCount;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                MaxPerWave;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.ScarInfo
// 0x0060
struct FScarInfo
{
	struct FVector2D                                   Threshold;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Emissive;                                         		// 0x0008 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Normal;                                           		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     EyeEmissive;                                      		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleEmissive;                                   		// 0x002C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleNormal;                                     		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleEyeEmissive;                                		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FLinearColor                                Color;                                            		// 0x0050 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PowerEvolveStatDetails
// 0x0020
struct FPowerEvolveStatDetails
{
	struct FString                                     Title;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TotalTitle;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Pct;                                              		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                BonusPct;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.ASParams
// 0x0019
struct FASParams
{
	struct FString                                     sVar;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nVar;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fVar;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVar : 1;                                         		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Type;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioMessageBoxOptionalParams
// 0x0013
struct FBioMessageBoxOptionalParams
{
	void*                                              srAText;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              srBText;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoFade : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModal : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForcePlayersOnly : 1;                            		// 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      nIconSet;                                         		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_SkinType;                                       		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      m_TextAlign;                                      		// 0x0012 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioMessageBoxData
// 0x0044
struct FBioMessageBoxData
{
	struct FString                                     m_sMessage;                                       		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FBioMessageBoxOptionalParams                m_stParams;                                       		// 0x000C (0x0014) [0x0000000000000000]              
	struct FName                                       m_nmName;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       m_nmCallbackFunction;                             		// 0x0028 (0x0008) [0x0000000000000000]              
	int                                                m_nPriority;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	class UObject*                                     m_pCallbackObject;                                		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_nContext;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_nControllerId;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bPersistThroughTravel : 1;                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bWasGamePaused : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bIsWeaponChoiceDlg : 1;                         		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.BioDefine.HenchmanInfoStruct
// 0x0034
struct FHenchmanInfoStruct
{
	struct FName                                       className;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Tag;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
	void*                                              PrettyName;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	void*                                              AlternatePrettyName;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       AlternateHenchNamePlotFlag;                       		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                HenchAcquiredPlotID;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                HenchInSquadPlotID;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     HenchmanImage;                                    		// 0x0028 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioDefine.BioVersionedNativeObject
// 0x0004
struct FBioVersionedNativeObject
{
	int                                                nInstanceVersion;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioDiscoveredCodexPage
// 0x000C(0x0010 - 0x0004)
struct FBioDiscoveredCodexPage : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nPage;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNew : 1;                                         		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioDiscoveredCodex
// 0x0010(0x0014 - 0x0004)
struct FBioDiscoveredCodex : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	TArray< struct FBioDiscoveredCodexPage >           lstDiscoveredPages;                               		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioDefine.BioCodexEntry
// 0x0018(0x001C - 0x0004)
struct FBioCodexEntry : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	void*                                              srTitle;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	void*                                              srDescription;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nTextureIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 CodexSound;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioCodexSection
// 0x0008(0x0024 - 0x001C)
struct FBioCodexSection : FBioCodexEntry
{
	struct FPointer                                    VfTable;                                          		// 0x001C (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	unsigned long                                      bPrimary : 1;                                     		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioTaskEval
// 0x0014(0x0018 - 0x0004)
struct FBioTaskEval : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nQuest;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nTask;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nConditional;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nState;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioStateTaskList
// 0x0010(0x0014 - 0x0004)
struct FBioStateTaskList : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	TArray< struct FBioTaskEval >                      lstTaskEvals;                                     		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioDefine.BioCodexPage
// 0x0008(0x0024 - 0x001C)
struct FBioCodexPage : FBioCodexEntry
{
	struct FPointer                                    VfTable;                                          		// 0x001C (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nSection;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioQuestGoal
// 0x0014(0x0018 - 0x0004)
struct FBioQuestGoal : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	void*                                              srName;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	void*                                              srDescription;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nConditional;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nState;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioQuestTask
// 0x0030(0x0034 - 0x0004)
struct FBioQuestTask : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	TArray< int >                                      lstPlotItemIndices;                               		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sWaypointTag;                                     		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       nmPlanet;                                         		// 0x0020 (0x0008) [0x0000000000100000]              
	void*                                              srName;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	void*                                              srDescription;                                    		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bQuestCompleteTask : 1;                           		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioPlotItem
// 0x0018(0x001C - 0x0004)
struct FBioPlotItem : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	void*                                              srName;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nConditional;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nState;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nTargetItems;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioQuest
// 0x002C(0x0030 - 0x0004)
struct FBioQuest : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	TArray< struct FBioQuestGoal >                     lstGoals;                                         		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FBioQuestTask >                     lstTasks;                                         		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FBioPlotItem >                      lstPlotItems;                                     		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      bMission : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioQuestProgress
// 0x001C(0x0020 - 0x0004)
struct FBioQuestProgress : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	TArray< int >                                      lstTaskHistory;                                   		// 0x0008 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nQuestAdded;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nActiveGoal;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bQuestUpdated : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioStateEventElement
// 0x0004(0x0008 - 0x0004)
struct FBioStateEventElement : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
};

// ScriptStruct SFXGame.BioDefine.BioSEESubstate
// 0x001C(0x0024 - 0x0008)
struct FBioSEESubstate : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x0008 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	TArray< int >                                      lstSiblingIndices;                                		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                nGlobalBool;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nParentIndex;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNewState : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseParam : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bParentTypeOr : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.BioDefine.BioSEELocal
// 0x001C(0x0024 - 0x0008)
struct FBioSEELocal : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x0008 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	struct FName                                       ObjectTag;                                        		// 0x000C (0x0008) [0x0000000000100000]              
	struct FName                                       FunctionName;                                     		// 0x0014 (0x0008) [0x0000000000100000]              
	int                                                nObjectType;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseParam : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioSEELocalInt
// 0x0008(0x002C - 0x0024)
struct FBioSEELocalInt : FBioSEELocal
{
	struct FPointer                                    VfTable;                                          		// 0x0024 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nNewValue;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEEInt
// 0x0010(0x0018 - 0x0008)
struct FBioSEEInt : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x0008 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nGlobalInt;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nNewValue;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseParam : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIncrement : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioDefine.BioSEELocalFloat
// 0x0008(0x002C - 0x0024)
struct FBioSEELocalFloat : FBioSEELocal
{
	struct FPointer                                    VfTable;                                          		// 0x0024 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	float                                              fNewValue;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEELocalBool
// 0x0008(0x002C - 0x0024)
struct FBioSEELocalBool : FBioSEELocal
{
	struct FPointer                                    VfTable;                                          		// 0x0024 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	unsigned long                                      bNewValue : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioDefine.BioSEEFunction
// 0x0020(0x0028 - 0x0008)
struct FBioSEEFunction : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x0008 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	struct FName                                       FunctionPackage;                                  		// 0x000C (0x0008) [0x0000000000100000]              
	struct FName                                       FunctionClass;                                    		// 0x0014 (0x0008) [0x0000000000100000]              
	struct FName                                       FunctionName;                                     		// 0x001C (0x0008) [0x0000000000100000]              
	int                                                nParameter;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEEFloat
// 0x0010(0x0018 - 0x0008)
struct FBioSEEFloat : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x0008 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nGlobalFloat;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fNewValue;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseParam : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIncrement : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioDefine.BioSEEConsequence
// 0x0008(0x0010 - 0x0008)
struct FBioSEEConsequence : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x0008 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nConsequence;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioDefine.BioSEEBool
// 0x000C(0x0014 - 0x0008)
struct FBioSEEBool : FBioStateEventElement
{
	struct FPointer                                    VfTable;                                          		// 0x0008 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	int                                                nGlobalBool;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNewState : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseParam : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioDefine.BioStateEvent
// 0x0010(0x0014 - 0x0004)
struct FBioStateEvent : FBioVersionedNativeObject
{
	struct FPointer                                    VfTable;                                          		// 0x0004 (0x0004) [0x0000000000803002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport )
	TArray< struct FPointer >                          lstEventElements;                                 		// 0x0008 (0x000C) [0x0000000000101000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioDefine.PlayerMeshInfo
// 0x0064
struct FPlayerMeshInfo
{
	struct FString                                     Male;                                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaleVisor;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaleFaceplate;                                    		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     MaleMaterialOverride;                             		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Female;                                           		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleVisor;                                      		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleFaceplate;                                  		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FemaleMaterialOverride;                           		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bHasBreather : 1;                                 		// 0x0060 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bHideHead : 1;                                    		// 0x0060 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bHideHair : 1;                                    		// 0x0060 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerPatternInfo
// 0x0078
struct FPlayerPatternInfo
{
	struct FVectorParameterValue                       Stripe1Param;                                     		// 0x0000 (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorParameterValue                       Stripe2Param;                                     		// 0x0028 (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorParameterValue                       Stripe3Param;                                     		// 0x0050 (0x0028) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerSpecInfo
// 0x0054
struct FPlayerSpecInfo
{
	struct FScalarParameterValue                       SpecParam;                                        		// 0x0000 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FScalarParameterValue                       SpecPwrParam;                                     		// 0x001C (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FScalarParameterValue                       EnvMapParam;                                      		// 0x0038 (0x001C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerTintInfo
// 0x0050
struct FPlayerTintInfo
{
	struct FVectorParameterValue                       TintParam;                                        		// 0x0000 (0x0028) [0x0000000000000001]              ( CPF_Edit )
	struct FVectorParameterValue                       PhongParam;                                       		// 0x0028 (0x0028) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.CustomizableElement
// 0x01A1
struct FCustomizableElement
{
	struct FPlayerMeshInfo                             Mesh;                                             		// 0x0000 (0x0064) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           GameEffects;                                      		// 0x0064 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPlayerPatternInfo                          Pattern;                                          		// 0x0070 (0x0078) [0x0000000000000001]              ( CPF_Edit )
	struct FPlayerSpecInfo                             Spec;                                             		// 0x00E8 (0x0054) [0x0000000000000001]              ( CPF_Edit )
	struct FPlayerTintInfo                             Tint;                                             		// 0x013C (0x0050) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x018C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              Name;                                             		// 0x0190 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              Description;                                      		// 0x0194 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PlotFlag;                                         		// 0x0198 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCustomizable : 1;                                		// 0x019C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x01A0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerEmissiveColorValue
// 0x001C
struct FPlayerEmissiveColorValue
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	void*                                              ColorName;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor3Value
// 0x001C
struct FPlayerCustomColor3Value
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	void*                                              ColorName;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor2Value
// 0x001C
struct FPlayerCustomColor2Value
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	void*                                              ColorName;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomColor1Value
// 0x0034
struct FPlayerCustomColor1Value
{
	struct FLinearColor                                ParameterValue;                                   		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                PhongParameterValue;                              		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PhongParameterName;                               		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	void*                                              ColorName;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomPatternColorValue
// 0x004C
struct FPlayerCustomPatternColorValue
{
	struct FLinearColor                                Stripe1ColorValue;                                		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe2ColorValue;                                		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe3ColorValue;                                		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe1ColorName;                                 		// 0x0030 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe2ColorName;                                 		// 0x0038 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe3ColorName;                                 		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	void*                                              ColorName;                                        		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioDefine.PlayerCustomPatternValue
// 0x004C
struct FPlayerCustomPatternValue
{
	struct FLinearColor                                Stripe1ParameterValue;                            		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe2ParameterValue;                            		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                Stripe3ParameterValue;                            		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe1ParameterName;                             		// 0x0030 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe2ParameterName;                             		// 0x0038 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Stripe3ParameterName;                             		// 0x0040 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	void*                                              PatternName;                                      		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioCameraBehaviorGalaxy.SFXGalaxyMapSelector
// 0x0024
struct FSFXGalaxyMapSelector
{
	TArray< void* >                                    m_PlotNames;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXGalaxyMapObject*                         m_GalaxyMapObject;                                		// 0x000C (0x0004) [0x0000000000000000]              
	class AActor*                                      m_actor;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	void*                                              m_Name;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                m_nPctExplored;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_State;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_Visible : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_Visited : 1;                                    		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_HasCritPath : 1;                                		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.BioCameraBehaviorGalaxy.BioMassRelayLine
// 0x006C
struct FBioMassRelayLine
{
	struct FString                                     m_sStartClusterLabel;                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     m_sEndClusterLabel;                               		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     m_vLeftEndPosition;                               		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_vRightEndPosition;                              		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_vMiddlePosition;                                		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     m_vDrawScale;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    m_rOrientation;                                   		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nStartClusterIdx;                               		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nEndClusterIdx;                                 		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_pLeftEndActor;                                  		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_pRighEndActor;                                  		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_pMiddleActor;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bIsGlowing : 1;                                 		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioCameraBehaviorGalaxy.SFXSystemScanData
// 0x0010
struct FSFXSystemScanData
{
	struct FVector                                     vScanOrigin;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              fElapsedTime;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGalaxyMapGameData.SFXGalaxyAudioData
// 0x0090
struct FSFXGalaxyAudioData
{
	struct FString                                     BuyFuelSound_PctFullRTPCName;                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UWwiseBaseSoundObject* >             ShipHalfFuelVO;                                   		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UWwiseBaseSoundObject* >             ShipNoFuelClusterVO;                              		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UWwiseBaseSoundObject* >             ShipNoFuelClusterReturnVO;                        		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UWwiseBaseSoundObject* >             ShipNoFuelSystemVO;                               		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ShipTravelSound_SpeedRTPCName;                    		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ShipTravelSound_ThrustRTPCName;                   		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ShipTravelSound_FuelQtyRTPCName;                  		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ShipTravelSound_SystemClusterRTPCName;            		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UWwiseBaseSoundObject*                       ErrorSound;                                       		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBaseSoundObject*                       BuyFuelSound;                                     		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBaseSoundObject*                       BuyFuelSoundStop;                                 		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBaseSoundObject*                       BuyFuelSound_Full;                                		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBaseSoundObject*                       ShipOutOfFuel_Start;                              		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBaseSoundObject*                       ShipOutOfFuel_Stop;                               		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBaseSoundObject*                       BuyProbeSound;                                    		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBaseSoundObject*                       ShipTravelSound_Start;                            		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBaseSoundObject*                       ShipTravelSound_Stop;                             		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioCameraZoom.BioZoomFocusConfig
// 0x002C
struct FBioZoomFocusConfig
{
	float                                              m_fMaxFocusDistance;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fNearClipFactor;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              m_fNearClipMax;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fMinRate;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              m_fFocusFraction;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              m_fInnerRadiusFactor;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              m_fFalloffExponent;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              m_fBlurKernelSize;                                		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              m_fMaxNearBlurAmount;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              m_fMaxFarBlurAmount;                              		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FColor                                      m_clrModulateBlur;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCameraZoom.BioZoomMagnificationConfig
// 0x0010
struct FBioZoomMagnificationConfig
{
	float                                              m_fCamSpeedFactor;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              m_fFOVFactor;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                m_nLevelCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              m_fTransitionDuration;                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.RvrClientEffectInterface.RvrEffectTargetSelection
// 0x0000
struct FRvrEffectTargetSelection
{
};

// ScriptStruct SFXGame.RvrClientEffectInterface.RvrClientEffectTarget
// 0x0070
struct FRvrClientEffectTarget
{
	struct FGuid                                       Id;                                               		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RefinedHitLocation;                               		// 0x001C (0x000C) [0x0000000000000000]              
	struct FVector                                     RefinedRayDir;                                    		// 0x0028 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0034 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RayDir;                                           		// 0x0040 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     SpawnValue;                                       		// 0x004C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HitBone;                                          		// 0x0058 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      Instigator;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0064 (0x0004) [0x0000000000000000]              
	class UPhysicalMaterial*                           HitMaterial;                                      		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasRefinedHitLocation : 1;                       		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.RvrClientEffectInterface.RvrClientEffectParameter
// 0x0022
struct FRvrClientEffectParameter
{
	struct FVector                                     ValueVector;                                      		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Module;                                           		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Variable;                                         		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ValueFloat;                                       		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DataType;                                         		// 0x0021 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.MorphFeatureSaveRecord
// 0x000C
struct FMorphFeatureSaveRecord
{
	struct FName                                       Feature;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Offset;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.OffsetBoneSaveRecord
// 0x0014
struct FOffsetBoneSaveRecord
{
	struct FVector                                     Offset;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Name;                                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.ScalarParameterSaveRecord
// 0x000C
struct FScalarParameterSaveRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.VectorParameterSaveRecord
// 0x0018
struct FVectorParameterSaveRecord
{
	struct FLinearColor                                Value;                                            		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Name;                                             		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord.TextureParameterSaveRecord
// 0x0010
struct FTextureParameterSaveRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Texture;                                          		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.MorphHeadSaveRecord
// 0x0080
struct FMorphHeadSaveRecord
{
	TArray< struct FName >                             AccessoryMeshes;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FMorphFeatureSaveRecord >           MorphFeatures;                                    		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FOffsetBoneSaveRecord >             OffsetBones;                                      		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           LOD0Vertices;                                     		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           LOD1Vertices;                                     		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           LOD2Vertices;                                     		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVector >                           LOD3Vertices;                                     		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FScalarParameterSaveRecord >        ScalarParameters;                                 		// 0x0054 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FVectorParameterSaveRecord >        VectorParameters;                                 		// 0x0060 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FTextureParameterSaveRecord >       TextureParameters;                                		// 0x006C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       HairMesh;                                         		// 0x0078 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.AppearanceSaveRecord
// 0x00BD
struct FAppearanceSaveRecord
{
	struct FMorphHeadSaveRecord                        MorphHead;                                        		// 0x0000 (0x0080) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                CasualID;                                         		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                FullBodyID;                                       		// 0x0084 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TorsoID;                                          		// 0x0088 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ShoulderID;                                       		// 0x008C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ArmID;                                            		// 0x0090 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LegID;                                            		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpecID;                                           		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint1ID;                                          		// 0x009C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint2ID;                                          		// 0x00A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Tint3ID;                                          		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PatternID;                                        		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                PatternColorID;                                   		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HelmetID;                                         		// 0x00B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EmissiveID;                                       		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHasMorphHead : 1;                                		// 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      CombatAppearance;                                 		// 0x00BC (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PowerSaveRecord
// 0x0030
struct FPowerSaveRecord
{
	int                                                EvolvedChoices[ 0x6 ];                            		// 0x0000 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PowerName;                                        		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PowerClassName;                                   		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentRank;                                      		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                WheelDisplayIndex;                                		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.WeaponSaveRecord
// 0x0024
struct FWeaponSaveRecord
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AmmoPowerName;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AmmoPowerSourceTag;                               		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                AmmoUsedCount;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TotalAmmo;                                        		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLastWeapon : 1;                                  		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCurrentWeapon : 1;                               		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.GAWAssetSaveInfo
// 0x0008
struct FGAWAssetSaveInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Strength;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.WeaponModSaveRecord
// 0x0014
struct FWeaponModSaveRecord
{
	TArray< struct FName >                             WeaponModClassNames;                              		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       WeaponClassName;                                  		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.HotKeySaveRecord
// 0x0010
struct FHotKeySaveRecord
{
	struct FName                                       PawnName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PowerName;                                        		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlayerSaveRecord
// 0x01D6
struct FPlayerSaveRecord
{
	struct FAppearanceSaveRecord                       Appearance;                                       		// 0x0000 (0x00C0) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     firstName;                                        		// 0x00C0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPowerSaveRecord >                  Powers;                                           		// 0x00CC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FWeaponSaveRecord >                 Weapons;                                          		// 0x00D8 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FGAWAssetSaveInfo >                 GAWAssets;                                        		// 0x00E4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FWeaponModSaveRecord >              WeaponMods;                                       		// 0x00F0 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      LoadoutWeaponGroups;                              		// 0x00FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FHotKeySaveRecord >                 HotKeys;                                          		// 0x0108 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     faceCode;                                         		// 0x0114 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      PlayerClass;                                      		// 0x0120 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FName                                       LoadoutWeapons[ 0x6 ];                            		// 0x0124 (0x0030) [0x0000000000000000]              
	struct FGuid                                       CharacterGUID;                                    		// 0x0154 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PlayerClassName;                                  		// 0x0164 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MappedPower1;                                     		// 0x016C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MappedPower2;                                     		// 0x0174 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MappedPower3;                                     		// 0x017C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       PrimaryWeapon;                                    		// 0x0184 (0x0008) [0x0000000000000000]              
	struct FName                                       SecondaryWeapon;                                  		// 0x018C (0x0008) [0x0000000000000000]              
	int                                                srClassFriendlyName;                              		// 0x0194 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0198 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentXP;                                        		// 0x019C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                LastName;                                         		// 0x01A0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoints;                                     		// 0x01A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentHealth;                                    		// 0x01A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Credits;                                          		// 0x01AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Medigel;                                          		// 0x01B0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Grenades;                                         		// 0x01B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Eezo;                                             		// 0x01B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Iridium;                                          		// 0x01BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Palladium;                                        		// 0x01C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Platinum;                                         		// 0x01C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Probes;                                           		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentFuel;                                      		// 0x01CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsFemale : 1;                                    		// 0x01D0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCombatPawn : 1;                                  		// 0x01D0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bInjuredPawn : 1;                                 		// 0x01D0 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bUseCasualAppearance : 1;                         		// 0x01D0 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      Origin;                                           		// 0x01D4 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Notoriety;                                        		// 0x01D5 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlaceableSaveRecord
// 0x0012
struct FPlaceableSaveRecord
{
	struct FGuid                                       PlaceableGUID;                                    		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      bIsDestroyed;                                     		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      bIsDeactivated;                                   		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.IntVariablePair
// 0x0008
struct FIntVariablePair
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.FloatVariablePair
// 0x0008
struct FFloatVariablePair
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.PlotQuest
// 0x0018
struct FPlotQuest
{
	TArray< int >                                      History;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                QuestCounter;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ActiveGoal;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bQuestUpdated : 1;                                		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.PlotCodex.PlotCodexPage
// 0x0008
struct FPlotCodexPage
{
	int                                                Page;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNew : 1;                                         		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord.PlotCodex
// 0x000C
struct FPlotCodex
{
	TArray< struct FPlotCodexPage >                    Pages;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.PlotTableSaveRecord
// 0x0058
struct FPlotTableSaveRecord
{
	TArray< int >                                      BoolVariables;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FIntVariablePair >                  IntVariables;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FFloatVariablePair >                FloatVariables;                                   		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPlotQuest >                        QuestProgress;                                    		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      QuestIDs;                                         		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FPlotCodex >                        CodexEntries;                                     		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      CodexIDs;                                         		// 0x0048 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                QuestProgressCounter;                             		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.HenchmanSaveRecord
// 0x0070
struct FHenchmanSaveRecord
{
	TArray< struct FPowerSaveRecord >                  Powers;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FWeaponSaveRecord >                 Weapons;                                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FWeaponModSaveRecord >              WeaponMods;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       LoadoutWeapons[ 0x6 ];                            		// 0x0024 (0x0030) [0x0000000000000000]              
	struct FName                                       Tag;                                              		// 0x0054 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       MappedPower;                                      		// 0x005C (0x0008) [0x0000000000000000]              
	int                                                CharacterLevel;                                   		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                TalentPoints;                                     		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Grenades;                                         		// 0x006C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.ME1PlotTableRecord
// 0x0024
struct FME1PlotTableRecord
{
	TArray< int >                                      BoolVariables;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      IntVariables;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< float >                                    FloatVariables;                                   		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.KismetBoolSaveRecord
// 0x0014
struct FKismetBoolSaveRecord
{
	struct FGuid                                       BoolGUID;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bValue : 1;                                       		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.GalaxyMapSaveRecord.PlanetSaveRecord
// 0x0014
struct FPlanetSaveRecord
{
	TArray< struct FVector2D >                         Probes;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                PlanetID;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bVisited : 1;                                     		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShowAsScanned : 1;                               		// 0x0010 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.GalaxyMapSaveRecord.SystemSaveRecord
// 0x000C
struct FSystemSaveRecord
{
	int                                                SystemID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fReaperAlertLevel;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bReapersDetected : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.GalaxyMapSaveRecord
// 0x0018
struct FGalaxyMapSaveRecord
{
	TArray< struct FPlanetSaveRecord >                 Planets;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSystemSaveRecord >                 Systems;                                          		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveGame.DependentDLCRecord
// 0x0014
struct FDependentDLCRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000100001]              ( CPF_Edit )
	struct FName                                       CanonicalName;                                    		// 0x0008 (0x0008) [0x0000000000100001]              ( CPF_Edit )
	int                                                ModuleID;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ME2ImportPowerMapping
// 0x0028
struct FME2ImportPowerMapping
{
	struct FName                                       ME2PowerName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       ME2Evolve1ClassName;                              		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       ME2Evolve2ClassName;                              		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       ME3PowerName;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       ME3PowerClassName;                                		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.SaveTimeStamp
// 0x0010
struct FSaveTimeStamp
{
	int                                                SecondsSinceMidnight;                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Day;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Month;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Year;                                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.LevelSaveRecord
// 0x000C
struct FLevelSaveRecord
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShouldBeLoaded : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bShouldBeVisible : 1;                             		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.StreamingStateSaveRecord
// 0x000C
struct FStreamingStateSaveRecord
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bActive : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.LevelTreasureSaveRecord
// 0x001C
struct FLevelTreasureSaveRecord
{
	TArray< struct FName >                             Items;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       LevelName;                                        		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                nCredits;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nXP;                                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlayerInfoEx
// 0x003E
struct FPlayerInfoEx
{
	struct FString                                     firstName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     faceCode;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      CharacterClass;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FGuid                                       CharacterGUID;                                    		// 0x001C (0x0010) [0x0000000000000000]              
	struct FName                                       BonusTalentClass;                                 		// 0x002C (0x0008) [0x0000000000000000]              
	class UBioMorphFace*                               MorphHead;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsFemale : 1;                                    		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Origin;                                           		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      Notoriety;                                        		// 0x003D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveGame.DoorSaveRecord
// 0x0012
struct FDoorSaveRecord
{
	struct FGuid                                       DoorGUID;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CurrentState;                                     		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      OldState;                                         		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.PlayerVariableSaveRecord
// 0x0010
struct FPlayerVariableSaveRecord
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                VariableValue;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSaveGame.ObjectiveMarkerSaveRecord
// 0x0025
struct FObjectiveMarkerSaveRecord
{
	struct FString                                     MarkerOwnerPath;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     MarkerOffset;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       BoneToAttachTo;                                   		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	void*                                              MarkerLabel;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      MarkerIconType;                                   		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.SFXHotKeyDefinition
// 0x0010
struct FSFXHotKeyDefinition
{
	struct FName                                       nmPawn;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPower;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPowerManager.PowerSaveInfo
// 0x0030
struct FPowerSaveInfo
{
	int                                                EvolvedChoices[ 0x6 ];                            		// 0x0000 (0x0018) [0x0000000000000000]              
	struct FName                                       PowerName;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       PowerClassName;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              CurrentRank;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                WheelDisplayIndex;                                		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFace.MorphFeature
// 0x000C
struct FMorphFeature
{
	struct FName                                       sFeatureName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Offset;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFace.OffsetBonePos
// 0x0014
struct FOffsetBonePos
{
	struct FVector                                     vPos;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FName                                       nName;                                            		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.ScalarParameter
// 0x000C
struct FScalarParameter
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              sValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.ColorParameter
// 0x0018
struct FColorParameter
{
	struct FLinearColor                                cValue;                                           		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FName                                       nName;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMaterialOverride.TextureParameter
// 0x000C
struct FTextureParameter
{
	struct FName                                       nName;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture*                                    m_pTexture;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXEngine.PackageRemapInfo
// 0x0010
struct FPackageRemapInfo
{
	struct FName                                       PackageName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       SeekFreePackageName;                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXLoadoutData.ShieldLoadout
// 0x0014
struct FShieldLoadout
{
	class UClass*                                      Shields;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ShieldLevelRange;                                 		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   MaxShields;                                       		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXLoadoutData.PowerLevelUp
// 0x000C
struct FPowerLevelUp
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      EvolvedPowerClass;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rank;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.LoadoutWeaponInfo
// 0x0018
struct FLoadoutWeaponInfo
{
	struct FName                                       className;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UnlockPlotId;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Rating;                                           		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bNotRegularWeaponGUI : 1;                         		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bStartsUnlocked : 1;                              		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.PlotWeapon
// 0x001C
struct FPlotWeapon
{
	struct FString                                     WeaponClassName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       UnlockPlotId;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       EquippedPlotId;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.UnlockableWeaponClass
// 0x0009
struct FUnlockableWeaponClass
{
	struct FName                                       UnlockPlotId;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      WeaponType;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.PlayerLoadoutInfoStruct
// 0x0024
struct FPlayerLoadoutInfoStruct
{
	TArray< unsigned char >                            RequiredWeaponClasses;                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            StartingWeaponClasses;                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       className;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                NumOptionalSlots;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.LoadoutInfo
// 0x0014
struct FLoadoutInfo
{
	TArray< unsigned char >                            WeaponClasses;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       className;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.BonusWeaponInfo
// 0x0009
struct FBonusWeaponInfo
{
	struct FName                                       UnlockPlotName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      WeaponClass;                                      		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.SpecialWeaponInfo
// 0x0018
struct FSpecialWeaponInfo
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       HenchmanClassName;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       UnlockPlotName;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerSquadLoadoutData.PlotWeaponEditor
// 0x0014
struct FPlotWeaponEditor
{
	class UClass*                                      WeaponClass;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       UnlockPlotId;                                     		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EquippedPlotId;                                   		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXEngine.SFXCareerCacheEntry
// 0x0022
struct FSFXCareerCacheEntry
{
	struct FString                                     Career;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     firstName;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	void*                                              className;                                        		// 0x0018 (0x0004) [0x0000000000100000]              
	int                                                SaveTypes;                                        		// 0x001C (0x0004) [0x0000000000100000]              
	unsigned char                                      Origin;                                           		// 0x0020 (0x0001) [0x0000000000100000]              
	unsigned char                                      Notoriety;                                        		// 0x0021 (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXEngine.DynamicLoadInfo
// 0x0030
struct FDynamicLoadInfo
{
	struct FString                                     ObjectName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class APlayerController* >                 RemotePlayerWithHandle;                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       SeekFreePackageName;                              		// 0x0018 (0x0008) [0x0000000000000000]              
	class UObject*                                     CachedObjectHandle;                               		// 0x0020 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UObject*                                     LoadedLinkerRoot;                                 		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                ObjectNetID;                                      		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bReplicate : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNetIDHasBeenSet : 1;                             		// 0x002C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
};

// ScriptStruct SFXGame.SFXEngine.SeekfreeCommonPackageInfo
// 0x0010
struct FSeekfreeCommonPackageInfo
{
	struct FName                                       SeekfreeName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       CommonName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXEngine.SFXSaveDescriptor
// 0x0011
struct FSFXSaveDescriptor
{
	struct FString                                     Career;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x000C (0x0004) [0x0000000000100000]              
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXEngine.SFXSavePair
// 0x0018
struct FSFXSavePair
{
	struct FSFXSaveDescriptor                          Descriptor;                                       		// 0x0000 (0x0014) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class USFXSaveGame*                                Save;                                             		// 0x0014 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXEngine.SFXCareerDescriptor
// 0x0024
struct FSFXCareerDescriptor
{
	struct FString                                     Career;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FSFXSavePair >                      Saves;                                            		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FSFXSaveDescriptor >                CorruptedSaves;                                   		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXEngine.SFXSaveGameCommandEventArgs
// 0x003D
struct FSFXSaveGameCommandEventArgs
{
	struct FSFXSaveDescriptor                          Descriptor;                                       		// 0x0000 (0x0014) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FSFXCareerDescriptor >              Careers;                                          		// 0x0014 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           CorruptedCareers;                                 		// 0x0020 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AdditionalFreeBytesNeeded;                        		// 0x002C (0x0004) [0x0000000000100000]              
	int                                                TotalFreeBytes;                                   		// 0x0030 (0x0004) [0x0000000000100000]              
	int                                                PreparedSaveSize;                                 		// 0x0034 (0x0004) [0x0000000000100000]              
	unsigned long                                      bSuccess : 1;                                     		// 0x0038 (0x0004) [0x0000000000100000] [0x00000001] 
	unsigned long                                      bRetry : 1;                                       		// 0x0038 (0x0004) [0x0000000000100000] [0x00000002] 
	unsigned long                                      bPause : 1;                                       		// 0x0038 (0x0004) [0x0000000000100000] [0x00000004] 
	unsigned long                                      bNeedsFreeSpace : 1;                              		// 0x0038 (0x0004) [0x0000000000100000] [0x00000008] 
	unsigned long                                      bTotalFreeBytesSet : 1;                           		// 0x0038 (0x0004) [0x0000000000100000] [0x00000010] 
	unsigned long                                      bPreparedSaveSizeSet : 1;                         		// 0x0038 (0x0004) [0x0000000000100000] [0x00000020] 
	unsigned char                                      Action;                                           		// 0x003C (0x0001) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXDamageType.HitReactionSet
// 0x0012
struct FHitReactionSet
{
	struct FName                                       BodyPart;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ReactionChance;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIgnoreShields : 1;                               		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Reaction;                                         		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MaxRange;                                         		// 0x0011 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXDamageType.ResistanceInfo
// 0x000C
struct FResistanceInfo
{
	float                                              Shield;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Armour;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Biotic;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXDamageType.DamageCalculationAlgorithm
// 0x0060
struct FDamageCalculationAlgorithm
{
	unsigned char                                      Source;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       TargetName;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       DamageClassName;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              BaseDamage;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Weapon_RangeMultiplier;                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Weapon_PawnEffectsDamageMultiplier;               		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Weapon_PawnEffectsHeadshotDamageMultiplier;       		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Weapon_WeaponEffectsDamageMultiplier;             		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              Weapon_StealthDamageMultiplier;                   		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              Weapon_HeadshotDamageMultiplier;                  		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              Weapon_RagdollDamageMultiplier;                   		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              Weapon_DamageTakenMultiplier;                     		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              Power_WeaponMeleeDamageMultiplier;                		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              Power_DamageTakenMultiplier;                      		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              Global_DifficultyMultiplier;                      		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              Global_CoverMultiplier;                           		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              Global_PlayerPopupMultiplier;                     		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              Global_OutOfCoverMultiplier;                      		// 0x004C (0x0004) [0x0000000000000000]              
	float                                              Global_DamageTakenMultiplier;                     		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              Global_HeadshotTakenMultiplier;                   		// 0x0054 (0x0004) [0x0000000000000000]              
	float                                              ActualDamageDealt;                                		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              ActualDamageApplied;                              		// 0x005C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationManagerNativeBase.SFXVocalizationEventProperties
// 0x0028
struct FSFXVocalizationEventProperties
{
	TArray< unsigned char >                            Roles;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ChanceToPlay;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinTimeBetweenSec;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeLastPlayed;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Delay;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              MaxWitnessDistSq;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              MaxDelayedTime;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bQueueIfBlocked : 1;                              		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanInterrupt : 1;                                		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanPlayIfDead : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bCanPlayIfRagdolled : 1;                          		// 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFXGame.SFXVocalizationManagerNativeBase.SFXVocalizationEvent
// 0x0018
struct FSFXVocalizationEvent
{
	class ABioPawn*                                    Instigator;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    Recipient;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              DelayTimeRemainingSec;                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              TriggerTimeSec;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DebugIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationManagerNativeBase.SFXVocalization
// 0x0021
struct FSFXVocalization
{
	struct FSFXVocalizationEvent                       Event;                                            		// 0x0000 (0x0018) [0x0000000000000000]              
	class ABioPawn*                                    Speaker;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Specific;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      Role;                                             		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationLine
// 0x001C
struct FSFXVocalizationLine
{
	TArray< unsigned char >                            SpecificType;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      SpecificValue;                                    		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UWwiseEvent*                                 Sound;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXVocalizationManager.VocEventLog
// 0x000D
struct FVocEventLog
{
	class APawn*                                       Speaker;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class APawn*                                       ReferredTo;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      Id;                                               		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCheatManager.ProfileData
// 0x003C
struct FProfileData
{
	struct FString                                     Header;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             Func;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             Utility;                                          		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Keyword;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned long                                      bNoTarget : 1;                                    		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioCheatManager.GFxWatchData
// 0x0020
struct FGFxWatchData
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       movie;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationVariation
// 0x000C
struct FSFXVocalizationVariation
{
	TArray< struct FSFXVocalizationLine >              Variations;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationRole
// 0x000C
struct FSFXVocalizationRole
{
	TArray< struct FSFXVocalizationVariation >         Roles;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXGame.ScaledFloat
// 0x0024
struct FScaledFloat
{
	TArray< class USFXGameEffect* >                    Bonuses;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              X;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxLevel;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Level;                                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              StaticBonus;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlotTreasure.STech
// 0x0040
struct FSTech
{
	struct FString                                     sImage;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sLargeImage;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmTech;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmResearch;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	void*                                              srTitle;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	void*                                              srName;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	void*                                              srMessage;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	void*                                              srDescription;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nLevels;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                UnlockId;                                         		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlotTreasure.STreasure
// 0x0035
struct FSTreasure
{
	struct FName                                       nmLevel;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTreasure;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTech;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmRequiredTech;                                   		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                nTreasureId;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                ResourcePrice;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                RequiredTechLevel;                                		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                DiscoverTechLevel;                                		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoAnimation : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMultiLevel : 1;                                  		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      Resource;                                         		// 0x0034 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGame.TimeDilationStruct
// 0x0020
struct FTimeDilationStruct
{
	struct FInterpCurveFloat                           Curve;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Identifier;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              TotalTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeapon.TracerSpec
// 0x0024
struct FTracerSpec
{
	struct FVector                                     Scale3D;                                          		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMesh*                                 StaticMesh;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             StandardPSTemplate;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PlayerPSTemplate;                                 		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AccelRate;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Speed;                                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpeed;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPowerCustomActionBase.PowerData
// 0x002D
struct FPowerData
{
	TArray< class USFXGameEffect* >                    DynamicBonuses;                                   		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              RankBonuses[ 0x6 ];                               		// 0x000C (0x0018) [0x0000000000000000]              
	float                                              BaseValue;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              CurrentValue;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      Formula;                                          		// 0x002C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlotTreasure.SResourceBudget
// 0x0020
struct FSResourceBudget
{
	struct FName                                       nmLevel;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nCredits;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nEezo;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nIridium;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nPlatinum;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nPalladium;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAccomplishmentManager.Accomplishment
// 0x0049
struct FAccomplishment
{
	struct FString                                     Icon;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       Parent;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                Index;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                XboxAchievementID;                                		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                XboxAvatarAwardID;                                		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                PS3TrophyID;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	void*                                              Title;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	void*                                              Incomplete;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	void*                                              Complete;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                PointValue;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	void*                                              NotificationText;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	void*                                              MPNotificationText;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsMultiplayerOnly : 1;                            		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      LinkedAchievementID;                              		// 0x0048 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAccomplishmentManager.AccomplishmentProgress
// 0x000D
struct FAccomplishmentProgress
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Index;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      LinkedProfileSetting;                             		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAccomplishmentManager.GrinderAccomplishment
// 0x0024
struct FGrinderAccomplishment
{
	struct FName                                       AccomplishmentName;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AccomplishmentProgressName;                       		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                Goal;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Interval;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	void*                                              Title;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	void*                                              Description;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	void*                                              MPDescription;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.GAWAssetModificationTarget
// 0x0008
struct FGAWAssetModificationTarget
{
	int                                                TargetID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.GAWAsset
// 0x006F
struct FGAWAsset
{
	struct FString                                     AssetName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ImagePath;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NotificationImagePath;                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FGAWAssetModificationTarget >       ModTargets;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      UnlockPlotStates;                                 		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DebugConditionalDescription;                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                GUICategoryID;                                    		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                StartingStrength;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	void*                                              GUIName;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	void*                                              GUIDescription;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                CurrentStrength;                                  		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                MaxStrength;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                ConflictZoneID;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsExploration : 1;                               		// 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShowNotificationOnAward : 1;                     		// 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      Type;                                             		// 0x006C (0x0001) [0x0000000000000000]              
	unsigned char                                      SubType;                                          		// 0x006D (0x0001) [0x0000000000000000]              
	unsigned char                                      ExternalAssetEnum;                                		// 0x006E (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.GAWGUICategory
// 0x0018
struct FGAWGUICategory
{
	struct FString                                     ImagePath;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              srCategoryName;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	void*                                              srCategoryDescription;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXProfileSettings.BonusPowerUnlockData
// 0x001C
struct FBonusPowerUnlockData
{
	struct FString                                     PowerClassName;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BonusPowerID;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                PlotConditionalID;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                PlotStateID;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	void*                                              srTitle;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_WeaponSelection.SFXWeaponUIPawnPositioning
// 0x0020
struct FSFXWeaponUIPawnPositioning
{
	struct FRotator                                    RotationOffset;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     PositionOffset;                                   		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       Tag;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXTreasureData.TD
// 0x0041
struct FTD
{
	struct FString                                     Level;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           TREASURE;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ConditionalGAWAssets;                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           UndetectableGAWAssets;                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PlotId;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Credits;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                AllianceCredits;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                XP;                                               		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      LevelEnum;                                        		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXTreasureData.ArmorTreasureData
// 0x0019
struct FArmorTreasureData
{
	struct FString                                     ArmorString;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              srDisplayName;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ArmorPlotState;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Conditional;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      ArmorPiece;                                       		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCheatManagerNonNative.SetMissionPlotIntPair
// 0x0008
struct FSetMissionPlotIntPair
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                V;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCheatManagerNonNative.SetMissionCondSetPair
// 0x0010
struct FSetMissionCondSetPair
{
	int                                                C;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CA;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                T;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                TA;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCheatManagerNonNative.SetupMissionData
// 0x0040
struct FSetupMissionData
{
	TArray< int >                                      PlotIDSet;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PlotIDClear;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSetMissionPlotIntPair >            PlotInts;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSetMissionCondSetPair >            PlotCond;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Mission;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FName                                       LoadMapName;                                      		// 0x0038 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioCheatManagerNonNative.SetupModifierData
// 0x0038
struct FSetupModifierData
{
	TArray< int >                                      PlotIDSet;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PlotIDClear;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSetMissionPlotIntPair >            PlotInts;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSetMissionCondSetPair >            PlotCond;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Modifier;                                         		// 0x0030 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHUD.DesignerText
// 0x002C
struct FDesignerText
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Id;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              X;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Duration;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      Center : 1;                                       		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioConversation.BioDialogReplyListDetails
// 0x0015
struct FBioDialogReplyListDetails
{
	struct FString                                     sParaphrase;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              srParaphrase;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Category;                                         		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogNode
// 0x0035
struct FBioDialogNode
{
	struct FString                                     sText;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	void*                                              srText;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nConditionalFunc;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nConditionalParam;                                		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nStateTransition;                                 		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nStateTransitionParam;                            		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nExportID;                                        		// 0x0020 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	int                                                nScriptIndex;                                     		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseBaseSoundObject*                       pCue;                                             		// 0x0028 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                nCameraIntimacy;                                  		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFireConditional : 1;                             		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAmbient : 1;                                     		// 0x0030 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNonTextLine : 1;                                 		// 0x0030 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSoundLoaded : 1;                                 		// 0x0030 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bIgnoreBodyGestures : 1;                          		// 0x0030 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bAlwaysHideSubtitle : 1;                          		// 0x0030 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned char                                      eGUIStyle;                                        		// 0x0034 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogEntryNode
// 0x0027(0x005C - 0x0035)
struct FBioDialogEntryNode : FBioDialogNode
{
	TArray< struct FBioDialogReplyListDetails >        ReplyListNew;                                     		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      aSpeakerList;                                     		// 0x0044 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nSpeakerIndex;                                    		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nListenerIndex;                                   		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSkippable : 1;                                   		// 0x0058 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogReplyNode
// 0x0018(0x004D - 0x0035)
struct FBioDialogReplyNode : FBioDialogNode
{
	TArray< int >                                      EntryList;                                        		// 0x0038 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                nListenerIndex;                                   		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUnskippable : 1;                                 		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIllegal : 1;                                     		// 0x0048 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bIsDefaultAction : 1;                             		// 0x0048 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bIsMajorDecision : 1;                             		// 0x0048 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      ReplyType;                                        		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioStageDirection
// 0x0010
struct FBioStageDirection
{
	struct FString                                     sText;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	void*                                              srStrRef;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversation.BioDialogSpeaker
// 0x000C
struct FBioDialogSpeaker
{
	struct FName                                       sSpeakerTag;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      aSpeaker;                                         		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFXGame.BioConversation.BioDialogScript
// 0x0008
struct FBioDialogScript
{
	struct FName                                       sScriptTag;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversationController.BioSpeakerData
// 0x000C
struct FBioSpeakerData
{
	struct FName                                       nmSpeakerTag;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      pSpeakerActor;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversationController.BioDialogLookat
// 0x000C
struct FBioDialogLookat
{
	class AActor*                                      pActor;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fLookAtDelay;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	class AActor*                                      pLookAtTarget;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversationController.BioNextCamData
// 0x0038
struct FBioNextCamData
{
	struct FVector                                     vPos;                                             		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    rRot;                                             		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FBioStageDOFData                            tDOFData;                                         		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       sCameraName;                                      		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFov;                                             		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fNearPlane;                                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseThis : 1;                                     		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversationController.BioSavedActorPos
// 0x001C
struct FBioSavedActorPos
{
	struct FVector                                     vPos;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRot;                                             		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      pActor;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversationController.BioInterruptReplyInfo
// 0x0011
struct FBioInterruptReplyInfo
{
	int                                                nReplyListIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fWindowStartTimeRemaining;                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fWindowTimeRemaining;                             		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActivated : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      eInterruptType;                                   		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversationController.BioConvActorInitMeshTrans
// 0x0010
struct FBioConvActorInitMeshTrans
{
	struct FVector                                     vOrigTranslation;                                 		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      pActor;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioConversationController.BioConvLightingData
// 0x0042
struct FBioConvLightingData
{
	struct FName                                       TargetBoneName;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeyLight_Scale_Red;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeyLight_Scale_Green;                             		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeyLight_Scale_Blue;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FillLight_Scale_Red;                              		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FillLight_Scale_Green;                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FillLight_Scale_Blue;                             		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      RimLightColor;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimLightScale;                                    		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimLightYaw;                                      		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RimLightPitch;                                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BouncedLightingIntensity;                         		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USFXLightRig*                                LightRig;                                         		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LightRigOrientation;                              		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLockEnvironment : 1;                             		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTriggerFullUpdate : 1;                           		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bUseForNextCamera : 1;                            		// 0x003C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bCastShadows : 1;                                 		// 0x003C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      RimLightControl;                                  		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      LightingType;                                     		// 0x0041 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversationController.BioNextLightingData
// 0x004C
struct FBioNextLightingData
{
	struct FBioConvLightingData                        tData;                                            		// 0x0000 (0x0044) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      pActor;                                           		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUseThis : 1;                                     		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioConversationController.BioConvActorPropData
// 0x0078
struct FBioConvActorPropData
{
	struct FMap_Mirror                                 mapMeshPropData;                                  		// 0x0000 (0x003C) [0x0000000000001000]              ( CPF_Native )
	struct FMap_Mirror                                 mapWeaponPropData;                                		// 0x003C (0x003C) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct SFXGame.BioPawn.ReplicatedCustomAction
// 0x001D
struct FReplicatedCustomAction
{
	struct FVector                                     TargetLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                TriggerCounter;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                CustomActionType;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	class UObject*                                     Target;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                PowerCustomActionType;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      Cmd;                                              		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.ReplicatedCustomActionImpact
// 0x0031
struct FReplicatedCustomActionImpact
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                CustomActionType;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    Instigator;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ImpactCount;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                PowerCustomActionType;                            		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFirstTarget : 1;                                 		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      TriggerCounter;                                   		// 0x0030 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.BodyStance
// 0x000C
struct FBodyStance
{
	TArray< struct FName >                             AnimName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioEmissionAreaListBoneList.BoneAndWeight
// 0x000C
struct FBoneAndWeight
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BoneWeight;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEmissionAreaListBoneList.BoneListEmissionArea
// 0x0018
struct FBoneListEmissionArea
{
	TArray< struct FBoneAndWeight >                    Bones;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       AreaTag;                                          		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      UseNumVertsAsWeights : 1;                         		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEventNotifier.BioDisplayNotice
// 0x002C
struct FBioDisplayNotice
{
	struct FString                                     strTitle;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nEventType;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nTimeToLive;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nIconIndex;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nContext;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	void*                                              srTitle;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nQuantity;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                nQuantMin;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                nQuantMax;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEventNotifier.BioTalentNotice
// 0x0014
struct FBioTalentNotice
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nIcon;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    oCharacter;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackDOF.BioDOFTrackData
// 0x0030
struct FBioDOFTrackData
{
	struct FVector                                     vFocusPosition;                                   		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFalloffExponent;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fBlurKernelSize;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxNearBlurAmount;                               		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fMaxFarBlurAmount;                                		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      cModulateBlurColor;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFocusInnerRadius;                                		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fFocusDistance;                                   		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fInterpolateSeconds;                              		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnableDOF : 1;                                   		// 0x002C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestTrackPriority
// 0x0008
struct FBioGestTrackPriority
{
	int                                                nTrackIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestureRenameData
// 0x0018
struct FBioGestureRenameData
{
	struct FName                                       nmOldAnim;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmNewSet;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmNewAnim;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestureData
// 0x0060
struct FBioGestureData
{
	TArray< int >                                      aChainedGestures;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmPoseSet;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseAnim;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureSet;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureAnim;                                    		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionSet;                                  		// 0x002C (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionAnim;                                 		// 0x0034 (0x0008) [0x0000000000000000]              
	float                                              fPlayRate;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartOffset;                                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndOffset;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartBlendDuration;                              		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndBlendDuration;                                		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWeight;                                          		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTransBlendTime;                                  		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bInvalidData : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bChainToPrevious : 1;                             		// 0x0058 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPlayUntilNext : 1;                               		// 0x0058 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bTerminateAllGestures : 1;                        		// 0x0058 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bUseDynAnimSets : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bSnapToPose : 1;                                  		// 0x0058 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned char                                      ePoseFilter;                                      		// 0x005C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ePose;                                            		// 0x005D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eGestureFilter;                                   		// 0x005E (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eGesture;                                         		// 0x005F (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGesturePinScrubData
// 0x0018
struct FBioGesturePinScrubData
{
	struct FName                                       nmAnimSet;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              fTime;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fWeight;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackGesture.BioGestureScrubData
// 0x0034(0x0094 - 0x0060)
struct FBioGestureScrubData : FBioGestureData
{
	TArray< struct FBioGesturePinScrubData >           aGestPins;                                        		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmNextPoseSet;                                    		// 0x006C (0x0008) [0x0000000000000000]              
	struct FName                                       nmNextPoseAnim;                                   		// 0x0074 (0x0008) [0x0000000000000000]              
	float                                              fCurPoseTime;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	float                                              fNextPoseTime;                                    		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              fTransitionTime;                                  		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              fCurPoseWeight;                                   		// 0x0088 (0x0004) [0x0000000000000000]              
	float                                              fTransitionWeight;                                		// 0x008C (0x0004) [0x0000000000000000]              
	float                                              fNextPoseWeight;                                  		// 0x0090 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackInterrupt.BioInterruptTrackData
// 0x0004
struct FBioInterruptTrackData
{
	unsigned long                                      bShowInterrupt : 1;                               		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackLookAt.BioLookAtTrackData
// 0x000D
struct FBioLookAtTrackData
{
	struct FName                                       nmFindActor;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bEnabled : 1;                                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bInstantTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLockedToTarget : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      eFindActorMode;                                   		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackProp.BioPropTrackData
// 0x0024
struct FBioPropTrackData
{
	class UClass*                                      pWeaponClass;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       nmProp;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAction;                                         		// 0x000C (0x0008) [0x0000000000000000]              
	class UObject*                                     pPropMesh;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             pActionPartSys;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   pActionClientEffect;                              		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bEquip : 1;                                       		// 0x0020 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bForceGenericWeapon : 1;                          		// 0x0020 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackProp.BioWeaponPropActionData
// 0x0008
struct FBioWeaponPropActionData
{
	class UFunction*                                   pfnExecute;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class UFunction*                                   pfnGetTiming;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioEvtSysTrackPropInst.BioActionPreviewResource
// 0x001C
struct FBioActionPreviewResource
{
	struct FName                                       nmAction;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimation;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    pPartSysCmp;                                      		// 0x0010 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UAnimSet*                                    pAnimSet;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEquipped : 1;                                    		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioEvtSysTrackPropInst.BioPropPreviewResource
// 0x004C
struct FBioPropPreviewResource
{
	struct FMap_Mirror                                 mapActions;                                       		// 0x0000 (0x003C) [0x0000000000001000]              ( CPF_Native )
	struct FName                                       nmProp;                                           		// 0x003C (0x0008) [0x0000000000000000]              
	class UMeshComponent*                              pPropCmp;                                         		// 0x0044 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	unsigned long                                      bEquipped : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioEvtSysTrackSetFacing.BioSetFacingData
// 0x0011
struct FBioSetFacingData
{
	struct FName                                       nmStageNode;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fOrientation;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bApplyOrientation : 1;                            		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      eCurrentStageNode;                                		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackSubtitles.BioSubtitleTrackData
// 0x000C
struct FBioSubtitleTrackData
{
	int                                                nStrRefID;                                        		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fLength;                                          		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bShowAtTop : 1;                                   		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseOnlyAsReplyWheelHint : 1;                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioEvtSysTrackSwitchCamera.BioCameraSwitchData
// 0x000C
struct FBioCameraSwitchData
{
	struct FName                                       nmStageSpecificCam;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bForceCrossingLineOfAction : 1;                   		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bUseForNextCamera : 1;                            		// 0x0008 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioGestureAnimSetMgr.SFXGestureData
// 0x005C
struct FSFXGestureData
{
	TArray< int >                                      aChainedGestures;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmPoseSet;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseAnim;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureSet;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       nmGestureAnim;                                    		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionSet;                                  		// 0x002C (0x0008) [0x0000000000000000]              
	struct FName                                       nmTransitionAnim;                                 		// 0x0034 (0x0008) [0x0000000000000000]              
	float                                              fPlayRate;                                        		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartOffset;                                     		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndOffset;                                       		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fStartBlendDuration;                              		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fEndBlendDuration;                                		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fWeight;                                          		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fTransBlendTime;                                  		// 0x0054 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInvalidData : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x0058 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bChainToPrevious : 1;                             		// 0x0058 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bPlayUntilNext : 1;                               		// 0x0058 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bTerminateAllGestures : 1;                        		// 0x0058 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bUseDynAnimSets : 1;                              		// 0x0058 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bSnapToPose : 1;                                  		// 0x0058 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioGestureAnimSetMgr.BioGestDataKey
// 0x0064
struct FBioGestDataKey
{
	struct FSFXGestureData                             tRawData;                                         		// 0x0000 (0x005C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UBioGestChainTree*                           pChainTree;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseDynamicAnimSets : 1;                          		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGestureAnimSetMgr.BioAnimSetReference
// 0x0008
struct FBioAnimSetReference
{
	int                                                nRefCount;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class UAnimSet*                                    pAnimSet;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioARPUBodyConfig
// 0x0024
struct FBioARPUBodyConfig
{
	struct FName                                       nmCurveName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSet;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	float                                              fStartBlendDuration;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fEndBlendDuration;                                		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsesSingleKeyframe : 1;                          		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGestureRulesData.BioGestPose
// 0x0030
struct FBioGestPose
{
	struct FName                                       nmPose;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSet;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FIntPoint                                   tPosition;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       nmGroup;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	struct FName                                       nmFemaleNodeName;                                 		// 0x0028 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioGestGesture
// 0x000C(0x003C - 0x0030)
struct FBioGestGesture : FBioGestPose
{
	struct FName                                       nmGesture;                                        		// 0x0030 (0x0008) [0x0000000000000000]              
	unsigned long                                      bOneShotAnim : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGestureRulesData.BioGestTransition
// 0x0010(0x0040 - 0x0030)
struct FBioGestTransition : FBioGestPose
{
	struct FName                                       nmDestPose;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	float                                              fTransBlendTime;                                  		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoTransAnim : 1;                                 		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioGestureRulesData.BioAmbPerfGestKey
// 0x0010
struct FBioAmbPerfGestKey
{
	struct FName                                       nmPerfName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPoseName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioAmbPerfBaseData
// 0x0018(0x0028 - 0x0010)
struct FBioAmbPerfBaseData : FBioAmbPerfGestKey
{
	struct FIntPoint                                   tPosition;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPropAction;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              fPropActionTimeDelay;                             		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnterEvent : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExitEvent : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioGestureRulesData.BioAmbientPerformance
// 0x001C(0x0044 - 0x0028)
struct FBioAmbientPerformance : FBioAmbPerfBaseData
{
	struct FName                                       nmGroup;                                          		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FName                                       nmPropName;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FName                                       nmOriginalName;                                   		// 0x0038 (0x0008) [0x0000000000000000]              
	unsigned long                                      bValidForDLCOnly : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSuppressDamage : 1;                              		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioGestureRulesData.BioAmbPerfPoseTransData
// 0x000C
struct FBioAmbPerfPoseTransData
{
	struct FName                                       nmPoseName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nWeighting;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRulesData.BioAmbPerfPose
// 0x0024(0x004C - 0x0028)
struct FBioAmbPerfPose : FBioAmbPerfBaseData
{
	TArray< struct FBioAmbPerfPoseTransData >          aTransData;                                       		// 0x0028 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       nmStartTrans;                                     		// 0x0034 (0x0008) [0x0000000000000000]              
	int                                                nPoseChangeChance;                                		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                nPlayGestureChance;                               		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              fChoiceTimeDelay;                                 		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStartHere : 1;                                   		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnterTransDoneEvent : 1;                         		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioGestureRulesData.BioAmbPerfGesture
// 0x0018(0x0040 - 0x0028)
struct FBioAmbPerfGesture : FBioAmbPerfBaseData
{
	struct FName                                       nmGestureName;                                    		// 0x0028 (0x0008) [0x0000000000000000]              
	float                                              fPlayRate;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fPlayWeight;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                nWeighting;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	float                                              fRetriggerDelay;                                  		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioPropClientEffectParams
// 0x0038
struct FBioPropClientEffectParams
{
	struct FVector                                     vHitLocation;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vHitNormal;                                       		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vRayDir;                                          		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     vSpawnValue;                                      		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmHitBone;                                        		// 0x0030 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioMeshPropActionData
// 0x0088
struct FBioMeshPropActionData
{
	struct FString                                     sParticleSys;                                     		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sClientEffect;                                    		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FBioPropClientEffectParams                  tSpawnParams;                                     		// 0x0018 (0x0038) [0x0000000000000000]              
	struct FVector                                     vOffsetLocation;                                  		// 0x0050 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rOffsetRotation;                                  		// 0x005C (0x000C) [0x0000000000000000]              
	struct FVector                                     vOffsetScale;                                     		// 0x0068 (0x000C) [0x0000000000000000]              
	struct FName                                       nmActionName;                                     		// 0x0074 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAttachTo;                                       		// 0x007C (0x0008) [0x0000000000000000]              
	unsigned long                                      bActivate : 1;                                    		// 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCooldown : 1;                                    		// 0x0084 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioMeshPropData
// 0x007C
struct FBioMeshPropData
{
	struct FMap_Mirror                                 mapActions;                                       		// 0x0000 (0x003C) [0x0000000000001000]              ( CPF_Native )
	struct FString                                     sMesh;                                            		// 0x003C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FVector                                     vOffsetLocation;                                  		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rOffsetRotation;                                  		// 0x0054 (0x000C) [0x0000000000000000]              
	struct FVector                                     vOffsetScale;                                     		// 0x0060 (0x000C) [0x0000000000000000]              
	struct FName                                       nmPropName;                                       		// 0x006C (0x0008) [0x0000000000000000]              
	struct FName                                       nmAttachTo;                                       		// 0x0074 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGestureRuntimeData.BioWeaponPropData
// 0x0020
struct FBioWeaponPropData
{
	TArray< struct FString >                           aWeaponClassPrefixes;                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           aWeaponPackages;                                  		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       nmWeaponBaseClassName;                            		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioGlobalVariableTable.TimedPlotUnlock_t
// 0x0008
struct FTimedPlotUnlock_t
{
	int                                                PlotBool;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UnlockDay;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGlobalVariableTable.PlotIdenfitier
// 0x0005
struct FPlotIdenfitier
{
	int                                                nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      nType;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGlobalVariableTable.NewGameCanonPlot
// 0x0014
struct FNewGameCanonPlot
{
	struct FPlotIdenfitier                             Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                nValue;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                nConditional;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nConditionalParameter;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioGlobalVariableTable.CopyPlot
// 0x0009
struct FCopyPlot
{
	int                                                nSId;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTId;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      nType;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHardLinks.BioHardLinkReference
// 0x0004
struct FBioHardLinkReference
{
	class UObject*                                     Object;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioHintSystemBase.HintDefinition
// 0x0041
struct FHintDefinition
{
	struct FName                                       HintName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       ClearEvent;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       ClearContext;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	void*                                              DefaultText;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	void*                                              PS3Text;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	void*                                              PCText;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              DisplayDuration;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              CooldownTime;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              UpdateTime;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              TimeRemaining;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MaxDifficulty;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	class UFunction*                                   HintFunction;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      Enabled : 1;                                      		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ImmediatelyRelevant : 1;                          		// 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      HintPosition;                                     		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHintSystemBase.SFXNotification
// 0x007D
struct FSFXNotification
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sSubtitle;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sBody;                                            		// 0x0018 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     sImageResource;                                   		// 0x0024 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       nmType;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	struct FName                                       nmRemoteEvent;                                    		// 0x0038 (0x0008) [0x0000000000000000]              
	struct FName                                       nmSound;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FName                                       nmStopSound;                                      		// 0x0048 (0x0008) [0x0000000000000000]              
	struct FName                                       nmIcon;                                           		// 0x0050 (0x0008) [0x0000000000000000]              
	int                                                nID;                                              		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                nPriority;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              CreationTime;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              fDisplayTime;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	class UTexture*                                    oImage;                                           		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                nFlourishID;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                nBarPercent;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                Data1;                                            		// 0x0074 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsMini : 1;                                      		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eLoadStatus;                                      		// 0x007C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHintSystemBase.SFXNotificationData
// 0x0054
struct FSFXNotificationData
{
	struct FString                                     sImageResource;                                   		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FName                                       nmType;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       nmRemoteEvent;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FName                                       nmSound;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       nmIcon;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
	void*                                              srTitle;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	void*                                              srSubTitle;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	void*                                              srBody;                                           		// 0x0034 (0x0004) [0x0000000000000000]              
	void*                                              srAltTitle;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	void*                                              srAltBody;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	void*                                              srAltSubtitle;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              DisplayTime;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                nFlourishID;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned long                                      bCanBeMerged : 1;                                 		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsMini : 1;                                      		// 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioHintSystemBase.HintTrackingData
// 0x0038
struct FHintTrackingData
{
	float                                              Times[ 0xA ];                                     		// 0x0000 (0x0028) [0x0000000000000000]              
	int                                                Num;                                              		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              LastTime;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              FirstTime;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                QueueHead;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.SavedMoveReplicationInfo
// 0x0018
struct FSavedMoveReplicationInfo
{
	struct FVector                                     ForcedLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	class APlayerController*                           PC;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	class USFXSavedMove*                               ReplicatedMoves;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bForceNewLocation : 1;                            		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioPlayerController.CoverAcquisitionParams
// 0x0014
struct FCoverAcquisitionParams
{
	float                                              MinCameraDotCover;                                		// 0x0000 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MinSlotDotPlayer;                                 		// 0x0004 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MinPlayerDotCoverOffset;                          		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxDist;                                          		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxCoverHeightFactor;                             		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFXGame.BioPlayerController.LocalEnemy
// 0x0008
struct FLocalEnemy
{
	class APawn*                                       Enemy;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSeen : 1;                                        		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasLOS : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXGameModeManager.LocalizedKeyName
// 0x000C
struct FLocalizedKeyName
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	void*                                              Name;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerInput.StaticKeyBind
// 0x0018
struct FStaticKeyBind
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	unsigned long                                      Control : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Shift : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      Alt : 1;                                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDebug : 1;                                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFXGame.SFXGUIMovie.SFXGUISceneView
// 0x004C
struct FSFXGUISceneView
{
	struct FMatrix                                     ViewProjectionMatrix;                             		// 0x0000 (0x0040) [0x0000000000000000]              
	struct FVector                                     WorldspaceViewLocation;                           		// 0x0040 (0x000C) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIMovie.ScreenRect
// 0x0010
struct FScreenRect
{
	float                                              Top;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Left;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIMovieLegacyAdapter.BioSFQueuedCommand
// 0x0018
struct FBioSFQueuedCommand
{
	struct FString                                     sCommand;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FASParams >                         lstParameters;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXGUIMovieLegacyAdapter.GPtr_Mirror
// 0x0004
struct FGPtr_Mirror
{
	struct FPointer                                    pObject;                                          		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct SFXGame.SFXGUIMovieLegacyAdapter.SFXGUILegacyScaleformResource
// 0x000C
struct FSFXGUILegacyScaleformResource
{
	struct FGPtr_Mirror                                MovieDef;                                         		// 0x0000 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FGPtr_Mirror                                MovieView;                                        		// 0x0004 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UGFxMovie*                                   GFxMovie;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_DesignerUI.BioDUIPulseDetails
// 0x000D
struct FBioDUIPulseDetails
{
	float                                              fHalfCycleTime;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fMinAlpha;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fCurCycle;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      nElement;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_DesignerUI.BioDUITimerDetails
// 0x0014
struct FBioDUITimerDetails
{
	float                                              fCurTime;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fEndTime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fIntervalTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fNextInterval;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIncrementing : 1;                                		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIntervalTriggered : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCompleted : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRunning : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bActive : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bFirstUpdate : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct SFXGame.BioSFHandler_DesignerUI.BioDUIElementStatus
// 0x0004
struct FBioDUIElementStatus
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFading : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioHUD.TraceStripKey
// 0x0008
struct FTraceStripKey
{
	float                                              fTime;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fValue;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHUD.TraceStripChannel
// 0x004C
struct FTraceStripChannel
{
	TArray< struct FTraceStripKey >                    Keys;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLinearColor                                DrawColor;                                        		// 0x000C (0x0010) [0x0000000000000000]              
	struct FName                                       nmButton;                                         		// 0x001C (0x0008) [0x0000000000000000]              
	struct FName                                       nmAxis;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       nmProperty;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimnode;                                       		// 0x0034 (0x0008) [0x0000000000000000]              
	class AActor*                                      Owner;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              fDynamicMax;                                      		// 0x0040 (0x0004) [0x0000000000000000]              
	class UProperty*                                   CachedProperty;                                   		// 0x0044 (0x0004) [0x0000000000000000]              
	class UAnimNodeBlendBase*                          CachedAnimNode;                                   		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioHUD.DesignerBar
// 0x0024
struct FDesignerBar
{
	struct FName                                       Id;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              X;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              SpawnTime;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Color;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      Grows : 1;                                        		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Shrinks : 1;                                      		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioInterpTrackRotationMode.RotationModeTrackKey
// 0x000C
struct FRotationModeTrackKey
{
	struct FName                                       FindActorTag;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              InterpTime;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioLevelUpSystem.LevelReward
// 0x0010
struct FLevelReward
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ExperienceRequired;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TalentReward;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HenchmanTalentReward;                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioLookAtDefinition.LookAtBoneDefinition
// 0x003E
struct FLookAtBoneDefinition
{
	TArray< struct FName >                             m_anTargetBones;                                  		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       m_nBoneName;                                      		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmMasterBoneName;                               		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fLimit;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fUpDownLimit;                                   		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fDelay;                                         		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fSpeedFactor;                                   		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fMaxAcceleration;                               		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fMaxDeceleration;                               		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fConversationStrength;                          		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bSeparateUpDownLimit : 1;                       		// 0x0038 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bUseUpAxis : 1;                                 		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInLocalSpace : 1;                        		// 0x0038 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bLookAtInverted : 1;                            		// 0x0038 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_bUpAxisInverted : 1;                            		// 0x0038 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      m_bUseAcceleration : 1;                           		// 0x0038 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      m_bUseMasterBone : 1;                             		// 0x0038 (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned char                                      m_nLookAxis;                                      		// 0x003C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      m_nUpAxis;                                        		// 0x003D (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXDefine.PowerUnlockRequirement
// 0x0014
struct FPowerUnlockRequirement
{
	class UClass*                                      RequiredPowerClass;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	class UClass*                                      PowerClass;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Rank;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RequiredLevel;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              CustomUnlockText;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.TextureData
// 0x000C
struct FTextureData
{
	struct FName                                       m_nParamName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	class UTexture*                                    m_oTexture;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.ScalarData
// 0x000C
struct FScalarData
{
	struct FName                                       m_nParamName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              m_fScalarValue;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.HairComponent
// 0x0045
struct FHairComponent
{
	struct FString                                     StyleName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MeshName;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ScalpMorphName;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTextureData >                      m_aHairTextures;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScalarData >                       m_aHairScalars;                                   		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               HairMesh;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	float                                              ScalpMorphWeight;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned char                                      HairType;                                         		// 0x0044 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.HairData
// 0x0024
struct FHairData
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HairMorphSpecMaskName;                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FHairComponent >                    HairComponents;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialComponent
// 0x003D
struct FMaterialComponent
{
	struct FString                                     Label;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Panel;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ParameterName;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Params;                                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Type;                                             		// 0x003C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialGroup
// 0x0018
struct FMaterialGroup
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialComponent >                Components;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialPanel
// 0x0018
struct FMaterialPanel
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMaterialGroup >                    Groups;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.MaterialData
// 0x000C
struct FMaterialData
{
	TArray< struct FMaterialPanel >                    Panels;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphUtility.AdditionalData
// 0x0024
struct FAdditionalData
{
	struct FHairData                                   Hair;                                             		// 0x0000 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.BaseSliders
// 0x0010
struct FBaseSliders
{
	struct FString                                     m_sSliderName;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fValue;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.BaseHeads
// 0x000C
struct FBaseHeads
{
	TArray< struct FBaseSliders >                      m_fBaseHeadSettings;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.SliderRemapping
// 0x0024
struct FSliderRemapping
{
	struct FString                                     CategoryName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SliderName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      Remappings;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.SliderModifierSliderData
// 0x001C
struct FSliderModifierSliderData
{
	TArray< class UBioMorphFaceFESliderBase* >         m_aoSliderData;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    m_fRandWeights;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fRandWeightsTotal;                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.SliderModifier
// 0x0030
struct FSliderModifier
{
	struct FString                                     m_sName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    m_aRandMin;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    m_aRandMax;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSliderModifierSliderData >         m_aSliders;                                       		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.Slider
// 0x0054
struct FSlider
{
	struct FString                                     m_sName;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UBioMorphFaceFESliderBase* >         m_aoSliderData;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    m_fRandWeights;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSliderModifier >                   m_aSliderModifiers;                               		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iIndex;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                m_iValue;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                m_iSteps;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                m_iStringRef;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                m_iDescriptionStringRef;                          		// 0x0040 (0x0004) [0x0000000000000000]              
	float                                              m_fRandWeightsTotal;                              		// 0x0044 (0x0004) [0x0000000000000000]              
	float                                              m_fRandMin;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	float                                              m_fRandMax;                                       		// 0x004C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bNotched : 1;                                   		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.Category
// 0x0024
struct FCategory
{
	struct FString                                     m_sCatName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSlider >                           m_aoSliders;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_iCatIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                m_iStringRef;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                m_iDescriptionStringRef;                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioMorphFaceFrontEnd.FaceData
// 0x0030
struct FFaceData
{
	struct FAdditionalData                             m_pAdditionalParams;                              		// 0x0000 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCategory >                         m_oCategories;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioParticleModuleLocationAttachedMesh.EmissionAreaWeight
// 0x000C
struct FEmissionAreaWeight
{
	struct FName                                       AreaTag;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Weight;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPawn.RootMotionOverrideEntry
// 0x0006
struct FRootMotionOverrideEntry
{
	class UAnimNode*                                   Node;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      RMMode;                                           		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      RMRMode;                                          		// 0x0005 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.AttackReservation
// 0x0010
struct FAttackReservation
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nTicketCost;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fTimeUntilExpiry;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsingTicket : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.BioPawn.RigidBodyCallback
// 0x0010
struct FRigidBodyCallback
{
	struct FScriptDelegate                             RBCallback;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nPriority;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.TemporaryAnimSetInfo
// 0x000C
struct FTemporaryAnimSetInfo
{
	class UAnimSet*                                    TempAnimSet;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefCount;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeLeft;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.ReactionPart
// 0x0014
struct FReactionPart
{
	TArray< struct FName >                             BoneNames;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       BodyPart;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPawn.AbilityTimeStamp
// 0x000C
struct FAbilityTimeStamp
{
	struct FName                                       AbilityName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.WeaponAnimSpec
// 0x0010
struct FWeaponAnimSpec
{
	TArray< class UAnimSet* >                          m_animSets;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimSet*                                    m_drawAnimSet;                                    		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPawn.ReplicatedWeaponImpact
// 0x000E
struct FReplicatedWeaponImpact
{
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	class ASFXProjectile*                              oProjectile;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      TriggerCounter;                                   		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      Delay;                                            		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.ReplicatedPowerSubsequentImpact
// 0x0017
struct FReplicatedPowerSubsequentImpact
{
	int                                                PowerType;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ImpactCount;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      DoCallback : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      TriggerCounter;                                   		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      Duration;                                         		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned char                                      Delay;                                            		// 0x0016 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.ReplicatedRadiusDamage
// 0x0029
struct FReplicatedRadiusDamage
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	class AActor*                                      DamageCauser;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                CustomActionReactionType;                         		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      TriggerCounter;                                   		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.ReplicatedAnimatedReaction
// 0x0026
struct FReplicatedAnimatedReaction
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                CustomActionType;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                BoneIndex;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      TriggerCounter;                                   		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      RandomRoll;                                       		// 0x0025 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.ReplicatedPowerCombo
// 0x001B
struct FReplicatedPowerCombo
{
	class UClass*                                      EffectClass;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	class ABioPawn*                                    TargetPawn;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    SourcePowerInstigator;                            		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      TriggerCounter;                                   		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      DetonatorPowerID;                                 		// 0x0019 (0x0001) [0x0000000000000000]              
	unsigned char                                      SourcePowerID;                                    		// 0x001A (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.ReplicatedPowerComboImpact
// 0x0013
struct FReplicatedPowerComboImpact
{
	int                                                PowerType;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    Instigator;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                PowerComboTypeUniqueID;                           		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      TriggerCounter;                                   		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      PowerRank;                                        		// 0x0011 (0x0001) [0x0000000000000000]              
	unsigned char                                      MiscFlags;                                        		// 0x0012 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXModule_AimAssistTarget.AimAssistBox
// 0x000D
struct FAimAssistBox
{
	float                                              Width;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SoftMargin;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      NodeType;                                         		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXModule_Damage.DamagePart
// 0x000C
struct FDamagePart
{
	struct FName                                       PartName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageScale;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXModule_Gestures.BioQueuedAction
// 0x0010
struct FBioQueuedAction
{
	struct FPointer                                    pPropActionData;                                  		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    pGestureData;                                     		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	float                                              fTimeQueued;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAddedThisFrame : 1;                              		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXModule_Gestures.BioUsedMeshPropData
// 0x001C
struct FBioUsedMeshPropData
{
	TArray< class UParticleSystemComponent* >          aPartSys;                                         		// 0x0000 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class URvrClientEffectInterface* >         aClientEffects;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UMeshComponent*                              pPropCmp;                                         		// 0x0018 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct SFXGame.SFXModule_Gestures.BioFoundWeaponData
// 0x0008
struct FBioFoundWeaponData
{
	class UObject*                                     pWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bSpawned : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCurrentlyEquipped : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.SFXModule_Gestures.BioGesturesPosePlaying
// 0x0014
struct FBioGesturesPosePlaying
{
	struct FName                                       nmSetName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimName;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUseDynSets : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bLockedAsPoseCache : 1;                           		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.SFXModule_Audio.RTPCPair
// 0x0010
struct FRTPCPair
{
	struct FString                                     RTPCName;                                         		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              RTPCValue;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPawn.MantleInfo
// 0x02F8
struct FMantleInfo
{
	struct FCoverSlot                                  CurrentSlot;                                      		// 0x0000 (0x00B8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCoverSlot                                  LeftSlot;                                         		// 0x00B8 (0x00B8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCoverSlot                                  RightSlot;                                        		// 0x0170 (0x00B8) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBasedPosition                              MantleStartLoc;                                   		// 0x0228 (0x0034) [0x0000000000000000]              
	struct FBasedPosition                              MantleEndLoc;                                     		// 0x025C (0x0034) [0x0000000000000000]              
	struct FBasedPosition                              EstimatedLandingLoc;                              		// 0x0290 (0x0034) [0x0000000000000000]              
	float                                              MantleDistance;                                   		// 0x02C4 (0x0004) [0x0000000000000000]              
	class ACoverLink*                                  DestLink;                                         		// 0x02C8 (0x0004) [0x0000000000000000]              
	class ACoverLink*                                  LeftLink;                                         		// 0x02CC (0x0004) [0x0000000000000000]              
	class ACoverLink*                                  RightLink;                                        		// 0x02D0 (0x0004) [0x0000000000000000]              
	class ACoverLink*                                  CurrentLink;                                      		// 0x02D4 (0x0004) [0x0000000000000000]              
	int                                                CurrentSlotIdx;                                   		// 0x02D8 (0x0004) [0x0000000000000000]              
	int                                                LeftSlotIdx;                                      		// 0x02DC (0x0004) [0x0000000000000000]              
	int                                                RightSlotIdx;                                     		// 0x02E0 (0x0004) [0x0000000000000000]              
	float                                              CurrentSlotPct;                                   		// 0x02E4 (0x0004) [0x0000000000000000]              
	float                                              FallForwardVelocity;                              		// 0x02E8 (0x0004) [0x0000000000000000]              
	float                                              RootMotionScaleFactor;                            		// 0x02EC (0x0004) [0x0000000000000000]              
	float                                              DefaultMantleDistance;                            		// 0x02F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bForced : 1;                                      		// 0x02F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsOnASlot : 1;                                   		// 0x02F4 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioPawn.BioVOSettings
// 0x0015
struct FBioVOSettings
{
	struct FColor                                      cSubtitleColour;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fSubtitleLength;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	class UObject*                                     pSubtitleRefObject;                               		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fDelayStarting;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSuppressSubtitlesIfVO : 1;                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAlert : 1;                                       		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAlwaysHideSubtitle : 1;                          		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHasPriority : 1;                                 		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      nSubtitleMode;                                    		// 0x0014 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSystemLevelObject.WwiseAudioPair
// 0x0008
struct FWwiseAudioPair
{
	class UWwiseEvent*                                 Play;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 Stop;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioPlanet.PlanetSun
// 0x0014
struct FPlanetSun
{
	struct FLinearColor                                SunColor;                                         		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXAI_Core.KismetOrder
// 0x0029
struct FKismetOrder
{
	struct FScriptDelegate                             FireCallback;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             MoveCallback;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class AActor*                                      oTargetActor;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fDistOffset;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fAttackDuration;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bWalk : 1;                                        		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bForceShoot : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      eOrderType;                                       		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.CovGoal_Enemies.ValidEnemyCacheDatum
// 0x000C
struct FValidEnemyCacheDatum
{
	struct FCoverInfo                                  EnemyCover;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    EnemyPawn;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAI_Henchman.HenchmanOrder
// 0x0021
struct FHenchmanOrder
{
	struct FVector                                     vTargetLocation;                                  		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FName                                       nmPower;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	class AActor*                                      oTargetActor;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bInstantOrder : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExecutingOrder : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPowerUseIsInstant : 1;                           		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      eOrderType;                                       		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioRadarData
// 0x0021
struct FBioRadarData
{
	struct FVector                                     vPosition;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fPassTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSize;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nRelativeZ;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bPlayerLockedOn : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eRadarType;                                       		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioDamageIndicatorData
// 0x0004
struct FBioDamageIndicatorData
{
	float                                              fCooldownTime;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.PostProcessInfo
// 0x0011
struct FPostProcessInfo
{
	float                                              Shadows;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MidTones;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              HighLights;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Desaturation;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Preset;                                           		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.PlayerOrder
// 0x0034
struct FPlayerOrder
{
	struct FVector                                     vTarget;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vOriginalCameraLocation;                          		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    rOriginalCameraRotation;                          		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FName                                       nmPower;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	class AActor*                                      oTarget;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	class ASFXWeapon_NativeBase*                       oSwitchWeapon;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioPlayerController.BioPPSettingsCallbackData
// 0x0008
struct FBioPPSettingsCallbackData
{
	struct FPointer                                    fpCallback;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FPointer                                    pData;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeapon.ZoomSnapInfo
// 0x000D
struct FZoomSnapInfo
{
	float                                              OuterSnapAngle;                                   		// 0x0000 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              InnerSnapAngle;                                   		// 0x0004 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              SnapOffsetMag;                                    		// 0x0008 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned char                                      AimNode;                                          		// 0x000C (0x0001) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
};

// ScriptStruct SFXGame.SFXCameraNativeBase.SFXCameraNativeBaseTraceInfo
// 0x0024
struct FSFXCameraNativeBaseTraceInfo
{
	struct FVector                                     m_vCollVectorLocation;                            		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     m_vCollVectorNormal;                              		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      m_oCollVectorActor;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FColor                                      m_clrDebugDraw;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bCollDetected : 1;                              		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bCollisionDirty : 1;                            		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bDebugDraw : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXWeapon.SFXWeaponAimMode
// 0x0018
struct FSFXWeaponAimMode
{
	struct FName                                       ScopeResource;                                    		// 0x0000 (0x0008) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              ZoomFOV;                                          		// 0x0008 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              FrictionMultiplier;                               		// 0x000C (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	float                                              AdhesionMultiplier;                               		// 0x0010 (0x0004) [0x0000000000004001]              ( CPF_Edit | CPF_Config )
	unsigned long                                      bScoped : 1;                                      		// 0x0014 (0x0004) [0x0000000000004001] [0x00000001] ( CPF_Edit | CPF_Config )
};

// ScriptStruct SFXGame.BioPlayerInput.DebugMenuEntry
// 0x0018
struct FDebugMenuEntry
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Command;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.BioPlayerInput.InputOverride
// 0x001C
struct FInputOverride
{
	struct FString                                     Alias;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             InputDelegate;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bPress : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExclusive : 1;                                   		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioPowerManager.PowerReservation
// 0x0008
struct FPowerReservation
{
	int                                                nID;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fTimeUntilExpiry;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGalaxyMapGameData.SFXGalaxyTemplatePair
// 0x000C
struct FSFXGalaxyTemplatePair
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      pActor;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGalaxyMapGameData.SFXGalaxyTemplates_Galaxy
// 0x0090
struct FSFXGalaxyTemplates_Galaxy
{
	struct FSFXGalaxyTemplatePair                      Cluster;                                          		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      ClusterCircle;                                    		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      GalaxySphere;                                     		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Twinkle;                                          		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Crosshair;                                        		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Camera;                                           		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      ClusterPath;                                      		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      DisabledClusterCircle;                            		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      ReaperIcon;                                       		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      ReaperClusterCircle;                              		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      CurrentLocationIcon;                              		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      PulsingCircleHighlight;                           		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGalaxyMapGameData.SFXGalaxyTemplates_Cluster
// 0x0078
struct FSFXGalaxyTemplates_Cluster
{
	TArray< struct FSFXGalaxyTemplatePair >            ClusterPlanes;                                    		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSFXGalaxyTemplatePair >            ClusterBackgrounds;                               		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSFXGalaxyTemplatePair                      System;                                           		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      SystemCircle;                                     		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      ClusterSphere;                                    		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      ClusterStars;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      FuelElipse;                                       		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Emitter;                                          		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Crosshair;                                        		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Camera;                                           		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGalaxyMapGameData.SFXGalaxyTemplates_System
// 0x00F0
struct FSFXGalaxyTemplates_System
{
	struct FSFXGalaxyTemplatePair                      Planet;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      PlanetCircle;                                     		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      PlanetRing;                                       		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Object;                                           		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Arrow;                                            		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      AsteroidBelt;                                     		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      SystemSphere;                                     		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      SystemCard1;                                      		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      SystemCard2;                                      		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Emitter;                                          		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Sunlight;                                         		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Sun;                                              		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      LensFlare;                                        		// 0x0090 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      MassRelay;                                        		// 0x009C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      MassRelayRed;                                     		// 0x00A8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      MassRelayVFX;                                     		// 0x00B4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      FuelDepot;                                        		// 0x00C0 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Crosshair;                                        		// 0x00CC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Camera;                                           		// 0x00D8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      ReaperArrow;                                      		// 0x00E4 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGalaxyMapGameData.SFXGalaxyTemplates_Planet
// 0x009C
struct FSFXGalaxyTemplates_Planet
{
	TArray< struct FSFXGalaxyTemplatePair >            Nebulae;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSFXGalaxyTemplatePair >            Sunlight;                                         		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSFXGalaxyTemplatePair                      Planet;                                           		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      PlanetSphere;                                     		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Corona;                                           		// 0x0030 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Object;                                           		// 0x003C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Clouds;                                           		// 0x0048 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Card;                                             		// 0x0054 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      PlanetRing;                                       		// 0x0060 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      BackgroundCloud;                                  		// 0x006C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Citadel;                                          		// 0x0078 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Camera;                                           		// 0x0084 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Scanner;                                          		// 0x0090 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGalaxyMapGameData.SFXGalaxyTemplates_SystemScanning
// 0x0030
struct FSFXGalaxyTemplates_SystemScanning
{
	struct FSFXGalaxyTemplatePair                      ScanPulse;                                        		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      ScanResult;                                       		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      Reaper;                                           		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FSFXGalaxyTemplatePair                      ReaperPing;                                       		// 0x0024 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSeqAct_GiveMissionXP_NativeBase.MissionReward
// 0x0010
struct FMissionReward
{
	struct FName                                       MissionName;                                      		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	int                                                ObjectiveXP;                                      		// 0x0008 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CombatXP;                                         		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct SFXGame.BioSubtitles.SFXSubtitleEntry
// 0x0025
struct FSFXSubtitleEntry
{
	struct FString                                     sSubtitle;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FColor                                      colFontColor;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fTimeRemaining;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	class UObject*                                     pRefObject;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	class AActor*                                      pActor;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fDelayStarting;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bAlert : 1;                                       		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasPriority : 1;                                 		// 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      eRenderMode;                                      		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioWorldInfo.PlotStreamingElement
// 0x0010
struct FPlotStreamingElement
{
	struct FName                                       ChunkName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Conditional;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFallback : 1;                                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.PlotStreamingSet
// 0x0014
struct FPlotStreamingSet
{
	TArray< struct FPlotStreamingElement >             Elements;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       VirtualChunkName;                                 		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.WorldStreamingState
// 0x000C
struct FWorldStreamingState
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Enabled : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.SubPageState
// 0x0006
struct FSubPageState
{
	int                                                nPadding;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Page;                                             		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      State;                                            		// 0x0005 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioWorldInfo.EffectsMaterialPriority
// 0x000C
struct FEffectsMaterialPriority
{
	struct FName                                       EffectsMaterial;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Priority;                                         		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGameChoiceGUIData.SFXChoiceEntry
// 0x007F
struct FSFXChoiceEntry
{
	TArray< struct FSFXTokenMapping >                  m_mapTokenIDToActual;                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceName;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChoiceTitle;                                     		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChoiceImageTitle;                                		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sChoiceDescription;                               		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sActionText;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       WeaponClassRef;                                   		// 0x0048 (0x0008) [0x0000000000000000]              
	struct FName                                       WeaponModClassRef;                                		// 0x0050 (0x0008) [0x0000000000000000]              
	void*                                              srChoiceName;                                     		// 0x0058 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              srChoiceTitle;                                    		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  oChoiceImage;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              srChoiceImageTitle;                               		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              srChoiceDescription;                              		// 0x0068 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nOptionalPaneItemValue;                           		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nChoiceID;                                        		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              srActionText;                                     		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDefaultSelection : 1;                            		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisabled : 1;                                    		// 0x0078 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNested : 1;                                      		// 0x0078 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOptionalPaneHideCost : 1;                        		// 0x0078 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      ChoiceColor;                                      		// 0x007C (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eResource;                                        		// 0x007D (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eDisplayType;                                     		// 0x007E (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPowerCustomActionBase.EvolvedChoiceInfo
// 0x0008
struct FEvolvedChoiceInfo
{
	void*                                              Name;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              Description;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPowerCustomActionBase.RankInfo2
// 0x001C
struct FRankInfo2
{
	int                                                Icon;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              Name;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	void*                                              Description;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	void*                                              Evolved1Name;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              Evolved1Description;                              		// 0x0010 (0x0004) [0x0000000000000000]              
	void*                                              Evolved2Name;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	void*                                              Evolved2Description;                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPowerCustomActionBase.PowerStatBarInfo
// 0x0055
struct FPowerStatBarInfo
{
	struct FPowerData                                  Data;                                             		// 0x0000 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              EvolvedBonuses[ 0x6 ];                            		// 0x0030 (0x0018) [0x0000000000000000]              
	float                                              BarLength;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	void*                                              srDisplayTotalToken;                              		// 0x004C (0x0004) [0x0000000000000000]              
	void*                                              srStatBarDisplayTitle;                            		// 0x0050 (0x0004) [0x0000000000000000]              
	unsigned char                                      Formula;                                          		// 0x0054 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPreAsyncWorkTicker.AreaEffectParameters
// 0x0020
struct FAreaEffectParameters
{
	struct FVector                                     ConeDirection;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    HitDirectionOffset;                               		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              ConeAngle;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      ImpactFriends : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ImpactDeadPawns : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      ImpactPlaceables : 1;                             		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      BlockedByObjects : 1;                             		// 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      DistancedSorted : 1;                              		// 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct SFXGame.SFXPowerLevelUpHelper.SavedPowerData
// 0x0014
struct FSavedPowerData
{
	TArray< unsigned char >                            EvolveChoices;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USFXPowerCustomActionBase*                   Power;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPowerLevelUpHelper.SavedPawnPowerData
// 0x0014
struct FSavedPawnPowerData
{
	TArray< struct FSavedPowerData >                   Powers;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ASFXPawn*                                    Pawn;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                TalentPoints;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn_PlayerParty.PowerAutoLevelUp
// 0x000C
struct FPowerAutoLevelUp
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Rank;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EvolvedChoice;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_BrowserWheel.BWPageStruct
// 0x0011
struct FBWPageStruct
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	void*                                              srLabel;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	class USFXGUIMovie*                                oHandler;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_GalaxyMap.SFXUIControlState
// 0x0009
struct FSFXUIControlState
{
	void*                                              Text;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      Disabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Action;                                           		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_NewCharacter.TemplateGenderPair
// 0x0018
struct FTemplateGenderPair
{
	struct FName                                       UIWorldVar;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       BuildClass;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    Placed;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    Spawned;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_NewCharacter.BonusTalentData
// 0x001C
struct FBonusTalentData
{
	struct FName                                       PowerClassName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                BonusPowerID;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	void*                                              srChoiceName;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              srChoiceTitle;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  oChoiceImage;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	void*                                              srChoiceDescription;                              		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Options.OptionText
// 0x000C
struct FOptionText
{
	void*                                              Label;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              Story;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Options.OptionPage
// 0x0014
struct FOptionPage
{
	TArray< unsigned char >                            Options;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              Label;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              Story;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Options.TextSliderOption
// 0x003D
struct FTextSliderOption
{
	struct FString                                     TelemetryKey;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             AddTelemFunc;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOptionText >                       Values;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UClass;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              Label;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	void*                                              Story;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                DefaultVal;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned char                                      Id;                                               		// 0x003C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Options.RadioGroupOption
// 0x0049
struct FRadioGroupOption
{
	struct FString                                     TelemetryKey;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             AddTelemFunc;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UClass;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FOptionText                                 Value0;                                           		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FOptionText                                 Value1;                                           		// 0x0030 (0x000C) [0x0000000000000000]              
	void*                                              Label;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	void*                                              Story;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                DefaultVal;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned char                                      Id;                                               		// 0x0048 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Options.SliderOption
// 0x0039
struct FSliderOption
{
	struct FString                                     TelemetryKey;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             AddTelemFunc;                                     		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UClass;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              Label;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	void*                                              Story;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Max;                                              		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                StepSize;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                DefaultVal;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned char                                      Id;                                               		// 0x0038 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Options.GamePopulatedOptionPage
// 0x000D
struct FGamePopulatedOptionPage
{
	struct FString                                     PopulationFunc;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Id;                                               		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_Options.OptionTelemetryInfo
// 0x0009
struct FOptionTelemetryInfo
{
	int                                                Value_Initial;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value_ToSend;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Id;                                               		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.ModeAliasPair
// 0x000D
struct FModeAliasPair
{
	struct FString                                     Alias;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      GameMode;                                         		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.SubordinateDesc
// 0x0007(0x0014 - 0x000D)
struct FSubordinateDesc : FModeAliasPair
{
	unsigned long                                      bAllGameModes : 1;                                		// 0x0010 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.GuiBind
// 0x005F(0x006C - 0x000D)
struct FGuiBind : FModeAliasPair
{
	struct FKeyBind                                    Keys[ 0x2 ];                                      		// 0x0010 (0x0030) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     KeysLocName[ 0x2 ];                               		// 0x0040 (0x0018) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSubordinateDesc >                  Subordinates;                                     		// 0x0058 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	void*                                              Name;                                             		// 0x0064 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCategory : 1;                                    		// 0x0068 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFHandler_PCOptions.NonBindableKeyDefinition
// 0x0018
struct FNonBindableKeyDefinition
{
	struct FString                                     Command;                                          		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Control : 1;                                      		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      Shift : 1;                                        		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      Alt : 1;                                          		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      ModifierIndependent : 1;                          		// 0x0014 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSFResources.BioSFSoundAssetResource
// 0x0010
struct FBioSFSoundAssetResource
{
	struct FName                                       Tag;                                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 StartEvent;                                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 StopEvent;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSimpleDialog.SimpleDialogLine
// 0x0008
struct FSimpleDialogLine
{
	void*                                              srText;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	class UWwiseBaseSoundObject*                       pCue;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSimpleDialog.SimpleVOEvent
// 0x0018
struct FSimpleVOEvent
{
	TArray< void* >                                    Lines;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       EventName;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	void*                                              ReplyLine;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioSkelControl_TurretConstrained.TurretConstraintData
// 0x000C
struct FTurretConstraintData
{
	int                                                PitchConstraint;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                YawConstraint;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                RollConstraint;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.BioSquadTargetData.SquadTargetData
// 0x0020
struct FSquadTargetData
{
	struct FVector                                     vLocation;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	class AActor*                                      oTarget;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nActionIcon;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nSquadIcon;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fTimeOut;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHidden : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActive : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.BioStage.BioStageCamera
// 0x002C
struct FBioStageCamera
{
	struct FBioStageDOFData                            tDOFData;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       nmCameraTag;                                      		// 0x000C (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              fFov;                                             		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fNearPlane;                                       		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fHeightDelta;                                     		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fPitchDelta;                                      		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fYawDelta;                                        		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDisableHeightAdjustment : 1;                     		// 0x0028 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.BioTierManager.TierDetails_t
// 0x0014
struct FTierDetails_t
{
	struct FName                                       TierName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FColor                                      Color;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsEnabled : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsFloor : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsGlobal : 1;                                     		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsDynamic : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFXGame.BioTimerList.BioTimer
// 0x0020
struct FBioTimer
{
	struct FScriptDelegate                             OnTimer;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sTimerName;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     Params;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              fTickTime;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.BioTriggerStream.BioStreamingState
// 0x0034
struct FBioStreamingState
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       InChunkName;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FName >                             VisibleChunkNames;                                		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             VisibleSoonChunkNames;                            		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             LoadChunkNames;                                   		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.CovGoal_AvoidEnemies.EnemyData
// 0x0014
struct FEnemyData
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	class APawn*                                       Enemy;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Distance;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.RvrClientEffectModule.RvrCEParameterDistribution
// 0x0062
struct FRvrCEParameterDistribution
{
	struct FRawDistributionFloat                       DistributionFloat;                                		// 0x0000 (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRawDistributionVector                      DistributionVector;                               		// 0x001C (0x001C) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	struct FRvrClientEffectParameter                   Parameter;                                        		// 0x0038 (0x0024) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDistanceBased : 1;                               		// 0x005C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bNormalizeTime : 1;                               		// 0x005C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSuppressDuringRegular : 1;                       		// 0x005C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSuppressDuringCooldown : 1;                      		// 0x005C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned char                                      ValueModifierOperation;                           		// 0x0060 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ValueModifierSelection;                           		// 0x0061 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.RvrCEffectModuleSpawnActorInstance.RvrClientEffectSpawnedActor
// 0x0034
struct FRvrClientEffectSpawnedActor
{
	TArray< class UMaterialInstance* >                 MaterialInstances;                                		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Offset;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	class AActor*                                      Actor;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              SpawnTime;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              CopyDelay;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.RvrCEffectModuleSpawnActorInstance.RvrClientEffectSavedAttachment
// 0x0040
struct FRvrClientEffectSavedAttachment
{
	TArray< struct FBoneAtom >                         Atoms;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FAttachment                                 Attachment;                                       		// 0x000C (0x0030) [0x0000000000080000]              ( CPF_Component )
	int                                                LOD;                                              		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.RvrCEffectModuleSpawnActorInstance.RvrClientEffectSavedState
// 0x006C
struct FRvrClientEffectSavedState
{
	TArray< struct FBoneAtom >                         Atoms;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRvrClientEffectSavedAttachment >   Attachments;                                      		// 0x000C (0x000C) [0x0000000000480000]              ( CPF_Component | CPF_NeedCtorLink )
	struct FVector                                     location;                                         		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     ComponentTranslation;                             		// 0x003C (0x000C) [0x0000000000000000]              
	struct FRotator                                    ComponentRotation;                                		// 0x0048 (0x000C) [0x0000000000000000]              
	struct FVector                                     ComponentScale3D;                                 		// 0x0054 (0x000C) [0x0000000000000000]              
	float                                              ComponentScale;                                   		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                LOD;                                              		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0068 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.RvrClientEffectByImpactMaterial.CEImpactByMaterial
// 0x0005
struct FCEImpactByMaterial
{
	class URvrClientEffectInterface*                   ClientEffect;                                     		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MaterialType;                                     		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.RvrClientEffectManager.RvrClientEffectStack
// 0x000C
struct FRvrClientEffectStack
{
	TArray< class URvrClientEffectComponent* >         Elements;                                         		// 0x0000 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct SFXGame.RvrClientEffectPool.RvrClientEffectResource
// 0x000C
struct FRvrClientEffectResource
{
	class ARvrClientEffectSpawnable*                   Effect;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.RvrClientEffectPool.RvrClientEffectList
// 0x0010
struct FRvrClientEffectList
{
	TArray< struct FRvrClientEffectResource >          Resources;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxEffects;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAccomplishmentManager.AchievementReward
// 0x001C
struct FAchievementReward
{
	struct FString                                     Effect;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Name;                                             		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       AccomplishmentName;                               		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAIPerceptionManager.SFXAIPerceptionNoise
// 0x0010
struct FSFXAIPerceptionNoise
{
	struct FName                                       NoiseType;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      NoiseMaker;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Loudness;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAmbPerfGameData.SFXAPGDAnimData
// 0x0014
struct FSFXAPGDAnimData
{
	struct FName                                       nmAnimSet;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       nmAnimSeq;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                nPropActionIndex;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAmbPerfGameData.SFXAFGDPropActionData
// 0x0014
struct FSFXAFGDPropActionData
{
	struct FName                                       nmActionName;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              fTimeDelay;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             pPartSys;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	class URvrClientEffectInterface*                   pClientEffect;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAmbPerfGameData.SFXAPGDTransition
// 0x000C(0x0020 - 0x0014)
struct FSFXAPGDTransition : FSFXAPGDAnimData
{
	float                                              fBlendTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nPlayChance;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nDestPoseIndex;                                   		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAmbPerfGameData.SFXAPGDGesture
// 0x0014(0x0028 - 0x0014)
struct FSFXAPGDGesture : FSFXAPGDAnimData
{
	float                                              fPlayRate;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              fPlayWeight;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nPlayChance;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              fRetriggerDelay;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bOneShot : 1;                                     		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEnterEvent : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bExitEvent : 1;                                   		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXAmbPerfGameData.SFXAPGDPose
// 0x0028(0x003C - 0x0014)
struct FSFXAPGDPose : FSFXAPGDAnimData
{
	TArray< struct FSFXAPGDTransition >                aTrans;                                           		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFXAPGDGesture >                   aGests;                                           		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nPoseChangeChance;                                		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                nPlayGestureChance;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	float                                              fChoiceTimeDelay;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bEnterEvent : 1;                                  		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bExitEvent : 1;                                   		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnterTransDoneEvent : 1;                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXAnimNodeBlendByMoveTransition.MoveToIdleTransitionBlend
// 0x0024
struct FMoveToIdleTransitionBlend
{
	struct FName                                       ChildName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              SyncGroupMin;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              SyncGroupMax;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TransitionDelay;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TransitionTime;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimStartTime;                                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_AreaMap.SFXMapAssetData
// 0x0011
struct FSFXMapAssetData
{
	struct FString                                     Asset;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GroupID;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      Floor;                                            		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_AreaMap.SFXCharacterMapData
// 0x001D
struct FSFXCharacterMapData
{
	struct FPlotIdenfitier                             PlotId;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	void*                                              srCharacter;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	void*                                              srLocation;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nValue;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                nConditional;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                nConditionalParam;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      Floor;                                            		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_AreaMap.SFXMapLocationData
// 0x0009
struct FSFXMapLocationData
{
	void*                                              srLocation;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nIndex;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Floor;                                            		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAsyncAssetLoader.SFXAsyncAssetRequest
// 0x001C
struct FSFXAsyncAssetRequest
{
	struct FString                                     FullAssetPath;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      AssetClass;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FName                                       AltCookedPackageName;                             		// 0x0010 (0x0008) [0x0000000000000000]              
	class UObject*                                     AssetReference;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAsyncAssetLoader.SFXAsyncPackageRequest
// 0x001C
struct FSFXAsyncPackageRequest
{
	TArray< struct FSFXAsyncAssetRequest >             AssetRequests;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       PackageName;                                      		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       AsyncLoadGroup;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXAsyncAssetLoader.SFXAsyncLoadGroupCallback
// 0x0014
struct FSFXAsyncLoadGroupCallback
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       AsyncLoadGroup;                                   		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn_PlayerParty.PowerStartingRank
// 0x0008
struct FPowerStartingRank
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Rank;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXCovGoal_CanFireAtSecondaries.SecondaryTargetData
// 0x0010
struct FSecondaryTargetData
{
	struct FCoverInfo                                  TargetCoverInfo;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      FireTarget;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    PawnTarget;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXCovGoal_NoFriendlyLOF.FriendlyLOFData
// 0x0018
struct FFriendlyLOFData
{
	struct FVector                                     Source;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Target;                                           		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXTimelineData.TimelineEffect
// 0x0185
struct FTimelineEffect
{
	struct FInterpCurveFloat                           TimeDilation;                                     		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< unsigned char >                            Reactions;                                        		// 0x0010 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             AOEFunc;                                          		// 0x001C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     InputAlias;                                       		// 0x0028 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             InputHandle;                                      		// 0x0034 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      RumbleClass;                                      		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ScreenShakeClass;                                 		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageType;                                       		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      AOEFilterClass;                                   		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      GameEffectClass;                                  		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FScreenShakeStruct                          ScreenShake;                                      		// 0x0054 (0x0078) [0x0000000000000001]              ( CPF_Edit )
	struct FGuid                                       ClientEffectID;                                   		// 0x00CC (0x0010) [0x0000000000000000]              
	struct FRotator                                    PS_Rotation;                                      		// 0x00DC (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x00E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Func;                                             		// 0x00F0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeIndex;                                        		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeRemaining;                                    		// 0x00FC (0x0004) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_Instance;                                     		// 0x0100 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class URadialBlurComponent*                        RBC_BlurInstance;                                 		// 0x0104 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UParticleSystem*                             PS_Template;                                      		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CrustDuration;                                    		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 Sound;                                            		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 PlayerSound;                                      		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UForceFeedbackWaveform*                      Rumble;                                           		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USFXCameraShakeBase*                         ScreenShakeObject;                                		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeDilationLength;                               		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RagdollForce;                                     		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x0128 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AOERadius;                                        		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AOEConeAngle;                                     		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USFXTimelineData*                            AOEImpactTimeline;                                		// 0x0134 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USFXTimelineData*                            SyncPartnerImpactTimeline;                        		// 0x0138 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USFXTimelineData*                            TimelineTemplate;                                 		// 0x013C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nMatchedInputIndex;                               		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          BlurMaterial;                                     		// 0x0144 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlurScale;                                        		// 0x0148 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlurFalloffExponent;                              		// 0x014C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlurOpacity;                                      		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCameraAnim*                                 CamAnim;                                          		// 0x0154 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamStartTime;                                     		// 0x0158 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamBlendInTime;                                   		// 0x015C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamBlendOutTime;                                  		// 0x0160 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamPlayRate;                                      		// 0x0164 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CamDuration;                                      		// 0x0168 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URvrClientEffectInterface*                   RVR_CrustTemplate;                                		// 0x016C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CEStartIndex;                                     		// 0x0170 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GameEffectDuration;                               		// 0x0174 (0x0004) [0x0000000000000000]              
	float                                              GameEffectValue;                                  		// 0x0178 (0x0004) [0x0000000000000000]              
	unsigned long                                      bActivated : 1;                                   		// 0x017C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActiveInput : 1;                                 		// 0x017C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bReceivedInput : 1;                               		// 0x017C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUseWeaponMesh : 1;                               		// 0x017C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bApplyBloodColorParam : 1;                        		// 0x017C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDilateSound : 1;                                 		// 0x017C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bAOEAffectsTarget : 1;                            		// 0x017C (0x0004) [0x0000000000000001] [0x00000040] ( CPF_Edit )
	unsigned long                                      bOnPress : 1;                                     		// 0x017C (0x0004) [0x0000000000000001] [0x00000080] ( CPF_Edit )
	unsigned long                                      bExclusive : 1;                                   		// 0x017C (0x0004) [0x0000000000000001] [0x00000100] ( CPF_Edit )
	unsigned long                                      bBufferedInput : 1;                               		// 0x017C (0x0004) [0x0000000000000001] [0x00000200] ( CPF_Edit )
	unsigned long                                      bLoopCamAnim : 1;                                 		// 0x017C (0x0004) [0x0000000000000001] [0x00000400] ( CPF_Edit )
	unsigned long                                      bCEAllowCooldown : 1;                             		// 0x017C (0x0004) [0x0000000000000001] [0x00000800] ( CPF_Edit )
	unsigned long                                      bCEStopAllMatching : 1;                           		// 0x017C (0x0004) [0x0000000000000001] [0x00001000] ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0180 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TargetType;                                       		// 0x0181 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      VocID;                                            		// 0x0182 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Constraint;                                       		// 0x0183 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      AOEType;                                          		// 0x0184 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXDifficultyHandler.AbilityDifficultyData
// 0x0014
struct FAbilityDifficultyData
{
	struct FName                                       StatName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   StatRange;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	unsigned long                                      bStatActive : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXDifficultyHandler.DifficultySettings
// 0x0014
struct FDifficultySettings
{
	TArray< struct FAbilityDifficultyData >            CategoryData;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Category;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXDoor.ClientEffectWithGUID
// 0x0014
struct FClientEffectWithGUID
{
	struct FGuid                                       EffectGUID;                                       		// 0x0000 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   EffectInterface;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXDuringAsyncWorkTicker.SFXDuringAsyncWorkQueuedImpactPSC
// 0x0048
struct FSFXDuringAsyncWorkQueuedImpactPSC
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     VectorParameter;                                  		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FName                                       HitBoneName;                                      		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FName                                       VectorParameterName;                              		// 0x002C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             Template;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	class AActor*                                      HitActor;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x003C (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              Scale;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	class AActor*                                      Instigator;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXDuringAsyncWorkTicker.SFXDuringAsyncWorkQueuedImpactDecal
// 0x0048
struct FSFXDuringAsyncWorkQueuedImpactDecal
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	struct FName                                       HitBoneName;                                      		// 0x0018 (0x0008) [0x0000000000000000]              
	class UMaterialInterface*                          Material;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              FadeTime;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              Width;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              FarPlane;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	class UPrimitiveComponent*                         HitComponent;                                     		// 0x0034 (0x0004) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                HitItem;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                HitLevelIndex;                                    		// 0x003C (0x0004) [0x0000000000000000]              
	class AActor*                                      Instigator;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoClip : 1;                                      		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXDuringAsyncWorkTicker.SFXDuringAsyncWorkQueuedTracer
// 0x0038
struct FSFXDuringAsyncWorkQueuedTracer
{
	struct FVector                                     TracerScale3D;                                    		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     StartLocation;                                    		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	class UStaticMesh*                                 TracerMesh;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             TracerVFX;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              TracerSpeed;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              TracerSpawnOffset;                                		// 0x0030 (0x0004) [0x0000000000000000]              
	class AActor*                                      Instigator;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXDuringAsyncWorkTicker.SFXDuringAsyncWorkQueuedEffect
// 0x0028
struct FSFXDuringAsyncWorkQueuedEffect
{
	struct FVector                                     location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	class UParticleSystem*                             Effect;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
	class AActor*                                      Instigator;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXDuringAsyncWorkTicker.SFXDuringAsyncWorkCachedInfo
// 0x0018
struct FSFXDuringAsyncWorkCachedInfo
{
	struct FVector                                     LocalPlayerLocation;                              		// 0x0000 (0x000C) [0x0000000000000000]              
	float                                              LODfactor;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	class AActor*                                      LocalPlayer;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              TimeSeconds;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGame.DecayedCover
// 0x0008
struct FDecayedCover
{
	class ACoverSlotMarker*                            CoverMarker;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ExtraCoverCost;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGame.ReputationThreshold
// 0x0008
struct FReputationThreshold
{
	int                                                PlotStateID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Threshold;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameChoiceGUIData_PRCShop.SFXChoiceEntryNoStrRef
// 0x005A
struct FSFXChoiceEntryNoStrRef
{
	struct FString                                     sChoiceName;                                      		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceTitle;                                     		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceImageTitle;                                		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sChoiceDescription;                               		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     sActionText;                                      		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSFXTokenMapping >                  m_mapTokenIDToActual;                             		// 0x003C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  oChoiceImage;                                     		// 0x0048 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nOptionalPaneItemValue;                           		// 0x004C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nChoiceID;                                        		// 0x0050 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDefaultSelection : 1;                            		// 0x0054 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bDisabled : 1;                                    		// 0x0054 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bNested : 1;                                      		// 0x0054 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      ChoiceColor;                                      		// 0x0058 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      eResource;                                        		// 0x0059 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGameChoiceGUIData_Research.TechData
// 0x011C
struct FTechData
{
	struct FSFXChoiceEntry                             ChoiceEntry;                                      		// 0x0000 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSTech                                      stTech;                                           		// 0x0080 (0x0040) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSTreasure                                  stTreasure;                                       		// 0x00C0 (0x0038) [0x0000000000000000]              
	struct FName                                       PlotName;                                         		// 0x00F8 (0x0008) [0x0000000000000000]              
	int                                                TechId;                                           		// 0x0100 (0x0004) [0x0000000000000000]              
	int                                                PlotId;                                           		// 0x0104 (0x0004) [0x0000000000000000]              
	int                                                TreasureId;                                       		// 0x0108 (0x0004) [0x0000000000000000]              
	int                                                UnlockId;                                         		// 0x010C (0x0004) [0x0000000000000000]              
	int                                                nContextId;                                       		// 0x0110 (0x0004) [0x0000000000000000]              
	int                                                RMode;                                            		// 0x0114 (0x0004) [0x0000000000000000]              
	int                                                DisableId;                                        		// 0x0118 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameConfig.PurchasableItem
// 0x0010
struct FPurchasableItem
{
	struct FString                                     className;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameConfig.TreasureBudget
// 0x0018
struct FTreasureBudget
{
	int                                                LevelId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Credits;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Eezo;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Palladium;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Platinum;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Iridium;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameEffect_UniqueArmor_Base.UniqueArmorEffects
// 0x0008
struct FUniqueArmorEffects
{
	class UClass*                                      childClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGameInterpTrackProcFoley.BioProcFoleyData
// 0x000C
struct FBioProcFoleyData
{
	float                                              m_fMaxThreshold;                                  		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fSmoothingFactor;                               		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bStart : 1;                                     		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXGameInterpTrackWwiseMicLock.BioMicLockData
// 0x000D
struct FBioMicLockData
{
	struct FName                                       m_nmFindActor;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bLock : 1;                                      		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      m_eFindActorMode;                                 		// 0x000C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXPathWeightLog.NavWeight
// 0x0018
struct FNavWeight
{
	TArray< float >                                    ConstraintWeights;                                		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class ANavigationPoint*                            Nav;                                              		// 0x000C (0x0004) [0x0000000000100000]              
	float                                              Weight;                                           		// 0x0010 (0x0004) [0x0000000000100000]              
	int                                                FailedIndex;                                      		// 0x0014 (0x0004) [0x0000000000100000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.CutscenePlotState
// 0x000C
struct FCutscenePlotState
{
	int                                                PlotStateID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                BrainThreshold;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                HeartThreshold;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.GAWIntelRewardInfo
// 0x000E
struct FGAWIntelRewardInfo
{
	struct FName                                       UniqueName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      SubType;                                          		// 0x000D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.EndGameOptionSet
// 0x001C
struct FEndGameOptionSet
{
	TArray< unsigned char >                            Brain;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< unsigned char >                            Heart;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Threshold;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.EndGameOption
// 0x000D
struct FEndGameOption
{
	TArray< int >                                      PlotStates;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Option;                                           		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.GAWZoneData
// 0x000D
struct FGAWZoneData
{
	void*                                              srZoneName;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              srZoneDescription;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ZoneDisplayNumber;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned char                                      ZoneID;                                           		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.WarAssetSummaryWithThreshold
// 0x0008
struct FWarAssetSummaryWithThreshold
{
	void*                                              Summary;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Threshold;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGAWAssetsHandler.GAWZoneGUIData
// 0x0021
struct FGAWZoneGUIData
{
	struct FString                                     ZoneName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ZoneDescription;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CurrentRating;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ZoneDisplayNumber;                                		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      ZoneID;                                           		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_Accomplishments.AccomplishmentUIData
// 0x0064
struct FAccomplishmentUIData
{
	struct FString                                     AccomplishmentName;                               		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     IconTextureRef;                                   		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ParentName;                                       		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SecondDescription;                                		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nIndex;                                           		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                nPoints;                                          		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                nInitialValue;                                    		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                nFinalValue;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                nSecondInitialValue;                              		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                nSecondFinalValue;                                		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsCompleted : 1;                                 		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsGrinder : 1;                                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsDoubleGrinder : 1;                             		// 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXGUI_Credits.SFXCreditEntry
// 0x0029
struct FSFXCreditEntry
{
	void*                                              Title;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              Names;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FontScale;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Columns;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              StartTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              FadeInTime;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              HoldTime;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              FadeOutTime;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              DelayTime;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              BreakSpace;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIData_Elevator.ElevatorDestinationData
// 0x0034
struct FElevatorDestinationData
{
	struct FString                                     LargeImage;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SmallImage;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DestId;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	void*                                              DestTitle;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	void*                                              DestSubTitle;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	void*                                              DestDesc;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                PlotUnlockID;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	void*                                              AButtonText;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	void*                                              BButtonText;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_JournalCodex.JCItem
// 0x0018
struct FJCItem
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nID;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              srDesc;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUpdated : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGUI_JournalCodex.JCEntry
// 0x000C(0x0024 - 0x0018)
struct FJCEntry : FJCItem
{
	struct FPointer                                    pCodexEntry;                                      		// 0x0018 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                nQuestAdded;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned long                                      bQuestComplete : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGUI_JournalCodex.CodexImageDetails
// 0x0014
struct FCodexImageDetails
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nID;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  oTexture;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_JournalCodex.JCUIListItem
// 0x0018
struct FJCUIListItem
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nIndex;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bComplete : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdated : 1;                                     		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasSubItems : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXGUI_Leaderboard.SFXLeaderboardRequestData
// 0x0008
struct FSFXLeaderboardRequestData
{
	int                                                PrimaryIndex;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SecondaryIndex;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_MainMenu_Message_GAW.RatingThresholdMessage
// 0x000C
struct FRatingThresholdMessage
{
	int                                                nStart;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nEnd;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	void*                                              srMessage;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_MainMenu_RTT.MMListEntry
// 0x0044
struct FMMListEntry
{
	struct FString                                     ListID;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FncOnSelect;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FncActiveConditional;                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FncNotifyConditional;                             		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     KmtOnSelect;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              Label;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      ShowNotification : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGUI_MainMenu_RTT.MMListSequences
// 0x002C
struct FMMListSequences
{
	struct FString                                     SeqID;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ListID;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FncOnEntry;                                       		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SeqStep;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	void*                                              Label;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_Manual.ManualChapter
// 0x0034
struct FManualChapter
{
	struct FString                                     Image;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PageIndices;                                      		// 0x000C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FName                                       FncChapterExclusion;                              		// 0x0018 (0x0008) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
	void*                                              ChapterNum;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	void*                                              Title;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	void*                                              Body;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	void*                                              ConsoleBody;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_Manual.ManualPage
// 0x0028
struct FManualPage
{
	struct FString                                     Image;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Chapter;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	void*                                              PageNum;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	void*                                              Title;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	void*                                              Body;                                             		// 0x001C (0x0004) [0x0000000000000000]              
	void*                                              ConsoleBody;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                ChapterIndex;                                     		// 0x0024 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct SFXGame.SFXGUI_Manual.ManualListItem
// 0x0020
struct FManualListItem
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sListTag;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nIndex;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_Manual.ManualCategory
// 0x0018
struct FManualCategory
{
	TArray< int >                                      Chapters;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ChapterIndices;                                   		// 0x000C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXGUI_MPScoretags.SFXGUIScoreTag
// 0x000C
struct FSFXGUIScoreTag
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXGUI_Option_LanguageBase.LanguageOptionInfo
// 0x0010
struct FLanguageOptionInfo
{
	struct FString                                     Code;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              Label;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_SquadRecord.CharDetails
// 0x0078
struct FCharDetails
{
	struct FString                                     CharName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Face;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Abbrev;                                           		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Thumb;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     XP;                                               		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PrettyLevel;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ShieldTitle;                                      		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              CharClass;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                allocated;                                        		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                Spendable;                                        		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                PctToLevel;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                Shield;                                           		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                Pgn;                                              		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                Rng;                                              		// 0x0074 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_SquadRecord.PowerDetails
// 0x002C
struct FPowerDetails
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Resource;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                State;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                IconFrame;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_SquadRecord.EvoDetails
// 0x0020
struct FEvoDetails
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                State;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Cost;                                             		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIData_Store.StoreItemData
// 0x00F9
struct FStoreItemData
{
	struct FSFXChoiceEntry                             ChoiceEntry;                                      		// 0x0000 (0x0080) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemClassName;                                    		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PlotPurchaseID;                                   		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LargeImage;                                       		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SmallImage;                                       		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           PVsToIncrement;                                   		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< void* >                                    CustomTokens;                                     		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ItemConditionals;                                 		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BaseCost;                                         		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                PlotUnlockID;                                     		// 0x00D8 (0x0004) [0x0000000000000000]              
	int                                                PlotUnlockConditionalID;                          		// 0x00DC (0x0004) [0x0000000000000000]              
	int                                                ArmorID;                                          		// 0x00E0 (0x0004) [0x0000000000000000]              
	int                                                PlotPurchaseInt;                                  		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              Priority;                                         		// 0x00E8 (0x0004) [0x0000000000000000]              
	int                                                CurrentModRank;                                   		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x00F0 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsGameEffect : 1;                                		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bBuffsGAWAssets : 1;                              		// 0x00F4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      ItemType;                                         		// 0x00F8 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeaponMod.WeaponModEffect
// 0x0010
struct FWeaponModEffect
{
	struct FName                                       EffectClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              EffectValue;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeaponMod.WeaponModStatConversion
// 0x000C
struct FWeaponModStatConversion
{
	struct FName                                       ModEffectClass;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ConversionMultiplier;                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeaponUIDataManager.SFXUIDataResource
// 0x0014
struct FSFXUIDataResource
{
	struct FString                                     Resource;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Package;                                          		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeaponUIData.SFXWeaponUICookData
// 0x0030
struct FSFXWeaponUICookData
{
	struct FString                                     CookedPackage;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Mesh;                                             		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AnimTree;                                         		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           AnimSets;                                         		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXWeaponUIData.SFXWeaponUIStats
// 0x0014
struct FSFXWeaponUIStats
{
	float                                              Accuracy;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              FireRate;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Magazine;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              Weight;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeaponUIData.SFXWeaponSelectWeaponData
// 0x00B9
struct FSFXWeaponSelectWeaponData
{
	struct FSFXWeaponUICookData                        CookData;                                         		// 0x0000 (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClassPath;                                        		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLinearColor >                      WeaponModGripColors;                              		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLinearColor >                      WeaponModBodyColors;                              		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FLinearColor >                      WeaponModEmissiveValues;                          		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLoadoutWeaponInfo                          LoadoutInfo;                                      		// 0x0060 (0x0018) [0x0000000000000000]              
	struct FSFXWeaponUIStats                           Stats;                                            		// 0x0078 (0x0014) [0x0000000000000000]              
	struct FName                                       className;                                        		// 0x008C (0x0008) [0x0000000000000000]              
	void*                                              Name;                                             		// 0x0094 (0x0004) [0x0000000000000000]              
	void*                                              Description;                                      		// 0x0098 (0x0004) [0x0000000000000000]              
	void*                                              ShortDescription;                                 		// 0x009C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Image;                                            		// 0x00A0 (0x0004) [0x0000000000000000]              
	class UGFxMovieInfo*                               IconResource;                                     		// 0x00A4 (0x0004) [0x0000000000000000]              
	int                                                IconIndex;                                        		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              EncumbranceWeight;                                		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x00B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      Unlocked : 1;                                     		// 0x00B4 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      Type;                                             		// 0x00B8 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeaponUIData.SFXWeaponModUIStat
// 0x0009
struct FSFXWeaponModUIStat
{
	int                                                Level;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeaponUIData.SFXWeaponModData
// 0x0069
struct FSFXWeaponModData
{
	struct FString                                     ClassPath;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSFXWeaponModUIStat >               Stats;                                            		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< void* >                                    ModLevelTokens;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CookedPackage;                                    		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Meshes;                                           		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       className;                                        		// 0x003C (0x0008) [0x0000000000000000]              
	struct FName                                       SocketName;                                       		// 0x0044 (0x0008) [0x0000000000000000]              
	void*                                              Name;                                             		// 0x004C (0x0004) [0x0000000000000000]              
	void*                                              ShortName;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	void*                                              Description;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  Image;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  LargeImage;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0060 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      MaterialEmissiveChange : 1;                       		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      MaterialGripColorChange : 1;                      		// 0x0064 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      MaterialBodyColorChange : 1;                      		// 0x0064 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      Unlocked : 1;                                     		// 0x0064 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned char                                      ModCategory;                                      		// 0x0068 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_Store.ModStrings
// 0x002C
struct FModStrings
{
	struct FString                                     className;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    Custom0Tokens;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< float >                                    Custom1Tokens;                                    		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              srModName;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	void*                                              srModDescription;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_Store.ComparisonStat
// 0x0018
struct FComparisonStat
{
	struct FString                                     StatName;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                StatBaseValue;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                StatBonusValue;                                   		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                StatCompValue;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_Store.GlobalStoreDiscount
// 0x0010
struct FGlobalStoreDiscount
{
	struct FString                                     PlayerVariable;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              DiscountStrength;                                 		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn_Player.PermanentGameEffect
// 0x001F
struct FPermanentGameEffect
{
	struct FString                                     UniqueName;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     className;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x001C (0x0001) [0x0000000000000000]              
	unsigned char                                      GAWAssetType;                                     		// 0x001D (0x0001) [0x0000000000000000]              
	unsigned char                                      GAWAssetSubType;                                  		// 0x001E (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInputHandler.SFXInputEventCooldownStruct
// 0x0005
struct FSFXInputEventCooldownStruct
{
	float                                              fCooldown;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      EventId;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXGUIMovieData
// 0x003A
struct FSFXGUIMovieData
{
	struct FString                                     MovieClass;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     GFxResource;                                      		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     HUDTypeToAutoLoadFor;                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Tag;                                              		// 0x0024 (0x0008) [0x0000000000000000]              
	float                                              CurvePixelError;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                ZOrder;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      UseEdgeAA : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAutoStart : 1;                                   		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAutoVisible : 1;                                 		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSwfDevAutoReopen : 1;                            		// 0x0034 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned char                                      Platform;                                         		// 0x0038 (0x0001) [0x0000000000000000]              
	unsigned char                                      StrokeStyle;                                      		// 0x0039 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXSharedAssetMap
// 0x0010
struct FSFXSharedAssetMap
{
	struct FName                                       SharedFile;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       GFxResource;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXFontMap
// 0x0031
struct FSFXFontMap
{
	struct FString                                     Locale;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FontExportName;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SubstituteFont;                                   		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       FontGFxResource;                                  		// 0x0024 (0x0008) [0x0000000000000000]              
	float                                              ScaleFactor;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      Style;                                            		// 0x0030 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXSFControlToken
// 0x004C
struct FSFXSFControlToken
{
	struct FString                                     TexturePath;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Resource;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Align;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     VAlign;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       token;                                            		// 0x0030 (0x0008) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Width;                                            		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                FontVScale;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                VSpace;                                           		// 0x0044 (0x0004) [0x0000000000000000]              
	unsigned long                                      Cook : 1;                                         		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXControlTokenAlias
// 0x0010
struct FSFXControlTokenAlias
{
	struct FName                                       From;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       To;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXStringMap
// 0x0008
struct FSFXStringMap
{
	void*                                              From;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              To;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInteraction.SFXKeyNameControlToken
// 0x0010
struct FSFXKeyNameControlToken
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       token;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInteraction.GUIDependency
// 0x0020
struct FGUIDependency
{
	struct FScriptDelegate                             OnDependency;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       SourceGUI;                                        		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       DependentGUI;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                OptContext;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIInteraction.PlayerGuiData
// 0x000C
struct FPlayerGuiData
{
	TArray< struct FBioMessageBoxData >                aMessageBoxQueue;                                 		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXGUIData_TeamSelect.SelectIdentity
// 0x002C
struct FSelectIdentity
{
	struct FName                                       MemberTag;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       MemberInPartyPlotLabel;                           		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       MemberAvailablePlotLabel;                         		// 0x0010 (0x0008) [0x0000000000000000]              
	int                                                MemberId;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	void*                                              MemberName;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	void*                                              MemberDossier;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MemberValidCID;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MemberDeadPlotID;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIData_TeamSelect.AppearanceSet
// 0x0064
struct FAppearanceSet
{
	struct FString                                     HighlightImage;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AvailableImage;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DeadImage;                                        		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SilhouetteImage;                                  		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< void* >                                    DescriptionText;                                  		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      CustomToken0;                                     		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       MemberTag;                                        		// 0x0048 (0x0008) [0x0000000000000000]              
	struct FName                                       MemberAppearancePlotLabel;                        		// 0x0050 (0x0008) [0x0000000000000000]              
	int                                                AppearanceId;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                MemberAppearanceValue;                            		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                PlotUnlockCID;                                    		// 0x0060 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIData_TeamSelect.PowerInfo
// 0x0014
struct FPowerInfo
{
	struct FName                                       PowerName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                PowerInfoID;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	void*                                              DisplayName;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              Description;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIData_TeamSelect.SelectInfo
// 0x0020
struct FSelectInfo
{
	struct FName                                       MemberTag;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                InfoId;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Ability1ID;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Ability2ID;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Ability3ID;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Ability4ID;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Ability5ID;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIData_Terminal.TerminalItemData
// 0x002C
struct FTerminalItemData
{
	struct FString                                     LargeImage;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SmallImage;                                       		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              ItemTitle;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	void*                                              ItemDesc;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                PlotUnlockID;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	void*                                              AButtonText;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	void*                                              BButtonText;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUI_WarAssets.WarAssetCategoryGUIData
// 0x0020
struct FWarAssetCategoryGUIData
{
	struct FString                                     CategoryName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CategoryStrength;                                 		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                categoryId;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasNewItems : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGUI_WarAssets.WarAssetGUIData
// 0x0020
struct FWarAssetGUIData
{
	struct FString                                     AssetName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AssetStrength;                                    		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AssetID;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsNewItem : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXGUI_WeaponSelection.WeaponStatesToKeep
// 0x0024
struct FWeaponStatesToKeep
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       AmmoPowerName;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FName                                       AmmoPowerSourceTag;                               		// 0x0010 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    Pawn;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              CurrentSpareAmmo;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              AmmoUsedCount;                                    		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIExt_WeaponMods.ModAttachSoundInfo
// 0x0010
struct FModAttachSoundInfo
{
	struct FName                                       location;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Sound;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXGUIValue_PowerIcon.SFXPowerWheelButtonIcon
// 0x000D
struct FSFXPowerWheelButtonIcon
{
	struct FString                                     sPath;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      eIcon;                                            		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeapon.WeaponModMeshOverride
// 0x0014
struct FWeaponModMeshOverride
{
	TArray< struct FName >                             SocketOverrideNames;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       SocketName;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeapon.CoverLeanPosition
// 0x001A
struct FCoverLeanPosition
{
	TArray< unsigned char >                            WeaponTypes;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Offset;                                           		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      Direction;                                        		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0019 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXWeapon.WeaponModInfo
// 0x0008
struct FWeaponModInfo
{
	class UClass*                                      ModClass;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ModLevel;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXModule_WeaponModManager.ExtraMeshComponent
// 0x0010
struct FExtraMeshComponent
{
	TArray< class UStaticMeshComponent* >              ExtraMeshes;                                      		// 0x0000 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class USFXWeaponMod*                               Mod;                                              		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.sfxwavecoordinator.WaveEventInfo
// 0x001D
struct FWaveEventInfo
{
	class UClass*                                      HordeWaveType;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Trigger;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                WaveNumber;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HordeWaveIndex;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                OperationWaveIndex;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                SupplyDropWaveIndex;                              		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      WavesAreLoading : 1;                              		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      WaveEvent;                                        		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXInterpTrackAttachCrustEffect.SFXAttachCrustEffectTrackData
// 0x0008
struct FSFXAttachCrustEffectTrackData
{
	float                                              m_fLifeTime;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bAttach : 1;                                    		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackBlackScreen.SFXBlackScreenTrackData
// 0x0005
struct FSFXBlackScreenTrackData
{
	int                                                PlaceHolder;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      BlackScreenState;                                 		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackLightEnvQuality.SFXLightEnvTrackData
// 0x0005
struct FSFXLightEnvTrackData
{
	int                                                PlaceHolder;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Quality;                                          		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackMovieBase.SFXMoviePlayStateData
// 0x0005
struct FSFXMoviePlayStateData
{
	int                                                PlaceHolder;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_eState;                                         		// 0x0004 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackPlayFaceOnlyVO.BioFOVOTrackData
// 0x0010
struct FBioFOVOTrackData
{
	class UBioConversation*                            pConversation;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                nLineStrRef;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              srActorNameOverride;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceHideSubtitles : 1;                          		// 0x000C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlaySoundOnly : 1;                               		// 0x000C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDisableDelayUntilPreload : 1;                    		// 0x000C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bAllowInConversation : 1;                         		// 0x000C (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bSubtitleHasPriority : 1;                         		// 0x000C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackSetPlayerNearClipPlane.SFXNearClipTrackData
// 0x0008
struct FSFXNearClipTrackData
{
	float                                              m_fValue;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bUseDefaultValue : 1;                           		// 0x0004 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackSetWeaponInstant.SFXWeaponClassData
// 0x0004
struct FSFXWeaponClassData
{
	class UClass*                                      cWeapon;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXInterpTrackToggleBase.SFXToggleTrackData
// 0x0004
struct FSFXToggleTrackData
{
	unsigned long                                      m_bToggle : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bEnable : 1;                                    		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXLoadMovieManager.NativeLoadingMovie
// 0x002C
struct FNativeLoadingMovie
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       Tag;                                              		// 0x000C (0x0008) [0x0000000000000000]              
	class UWwiseEventPairObject*                       AudioEventPair;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                LoopBackFrame;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              MinPlayTime;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              FadeInTime;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              FadeOutTime;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	class UWwiseEvent*                                 FadeOutAudioEvent;                                		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXLoadMovieManager.LoadingTip
// 0x0010
struct FLoadingTip
{
	void*                                              GenericTip;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              PCOverrideTip;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	void*                                              PS3OverrideTip;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	void*                                              XBoxOverrideTip;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXLoadMovieManager.LoadingLevelTip
// 0x0020
struct FLoadingLevelTip
{
	struct FString                                     LevelName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLoadingTip                                 Tip;                                              		// 0x000C (0x0010) [0x0000000000000000]              
	unsigned long                                      UseRandomTip : 1;                                 		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXMatchResultsData.PlayerScoreData
// 0x0038
struct FPlayerScoreData
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      PlayerMedalIDs;                                   		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       KitName;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	int                                                PlayerID;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              fScore;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                ClassLevel;                                       		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                nTotalXP;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXMatchResultsData.PlayerRewardData
// 0x0008
struct FPlayerRewardData
{
	float                                              fOriginalExperience;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fNewExperience;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXMatchResultsData.MatchData
// 0x0021
struct FMatchData
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ZoneRatingIncrease;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EnemyID;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DifficultyID;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Waves;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                TotalMatchTime;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                OverallRatingIncrease;                            		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bResult : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      ZoneID;                                           		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXModule_Wound.BioWoundSpec
// 0x0085
struct FBioWoundSpec
{
	struct FMatrix                                     m_mWoundEllipse;                                  		// 0x0000 (0x0040) [0x0000000000000001]              ( CPF_Edit )
	struct FBoxSphereBounds                            HitBox;                                           		// 0x0040 (0x001C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       m_nmPart;                                         		// 0x005C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       HitBoxBone;                                       		// 0x0064 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               m_pWoundModel;                                    		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  m_pBloodTexture;                                  		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class URvrClientEffectInterface*                   m_pEffect;                                        		// 0x0074 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fEffectDuration;                                		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fEffectRadius;                                  		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsActive : 1;                                    		// 0x0080 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned char                                      m_eWoundSeverity;                                 		// 0x0084 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXModule_Wrinkles.BioWrinkleConfig
// 0x0010
struct FBioWrinkleConfig
{
	struct FString                                     WrinkleParameterName;                             		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  WrinkleTexture;                                   		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.sfxmpcharacterrecord.PowerRecord
// 0x0034
struct FPowerRecord
{
	int                                                EvolvedChoices[ 0x6 ];                            		// 0x0000 (0x0018) [0x0000000000000000]              
	struct FName                                       PowerName;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FName                                       PowerClassName;                                   		// 0x0020 (0x0008) [0x0000000000000000]              
	float                                              CurrentRank;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                WheelDisplayIndex;                                		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsesTalentPoints : 1;                            		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.sfxmpcharacterrecord.WeaponRecord
// 0x0008
struct FWeaponRecord
{
	struct FName                                       WeaponClassName;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.sfxmpcharacterrecord.WeaponModRecord
// 0x0014
struct FWeaponModRecord
{
	TArray< struct FName >                             WeaponModClassNames;                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       WeaponClassName;                                  		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXOperation_ObjectiveData.SFXOperation_ObjectiveMeshInfo
// 0x003E
struct FSFXOperation_ObjectiveMeshInfo
{
	struct FString                                     UniqueString;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MeshPath;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FVector                                     Translation;                                      		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	void*                                              GameName;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MeshVOLine;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned char                                      SpawnLocation;                                    		// 0x003C (0x0001) [0x0000000000000000]              
	unsigned char                                      TipText;                                          		// 0x003D (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectiveDrawSpawnPointComponent.SFXObjectiveSpawnLocationSize
// 0x000D
struct FSFXObjectiveSpawnLocationSize
{
	struct FVector                                     Extents;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolTracers
// 0x0018
struct FSFXObjectPoolTracers
{
	TArray< class ASFXTracer* >                        Tracers;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UStaticMesh*                                 Mesh;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	class UParticleSystem*                             Template;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolProjectiles
// 0x0014
struct FSFXObjectPoolProjectiles
{
	TArray< class AProjectile* >                       Projectiles;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ProjectileClass;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolDroppedAmmos
// 0x0014
struct FSFXObjectPoolDroppedAmmos
{
	TArray< class ADroppedPickup* >                    DroppedAmmos;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      DroppedAmmoClass;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolImpactPSCs
// 0x0014
struct FSFXObjectPoolImpactPSCs
{
	TArray< class UParticleSystemComponent* >          PSysComponents;                                   		// 0x0000 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UParticleSystem*                             Template;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolPSCs
// 0x0014
struct FSFXObjectPoolPSCs
{
	TArray< class UParticleSystemComponent* >          PSysComponents;                                   		// 0x0000 (0x000C) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
	class UParticleSystem*                             Template;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXObjectPool.SFXObjectPoolEmitters
// 0x0014
struct FSFXObjectPoolEmitters
{
	TArray< class AEmitter* >                          Emitters;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UParticleSystem*                             Template;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NextIdx;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXOnlinePlayerStorage.WriteEvent
// 0x0014
struct FWriteEvent
{
	TArray< struct FScriptDelegate >                   DelayedWriteDelegates;                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LocalUserNum;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              LastWriteTimestamp;                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveManagerMP.MPFaceCodeData
// 0x001C
struct FMPFaceCodeData
{
	struct FString                                     firstName;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     faceCode;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveManagerMP.MPClassData
// 0x0010
struct FMPClassData
{
	struct FName                                       className;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	void*                                              srDisplayName;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	void*                                              srDescription;                                    		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveManagerMP.MPKitData
// 0x0080
struct FMPKitData
{
	struct FString                                     KitTextureRef;                                    		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LockedKitTextureRef;                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SmallKitTextureRef;                               		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ArchetypeRef;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PowerIconResource;                                		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RequiredDLCModuleIDs;                             		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FName                                       KitName;                                          		// 0x0048 (0x0008) [0x0000000000000000]              
	struct FName                                       BaseMPClassName;                                  		// 0x0050 (0x0008) [0x0000000000000000]              
	void*                                              srDisplayName;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
	void*                                              srDefaultName;                                    		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                PowerIconIndex1;                                  		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                PowerIconIndex2;                                  		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                PowerIconIndex3;                                  		// 0x0068 (0x0004) [0x0000000000000000]              
	void*                                              srPowerName1;                                     		// 0x006C (0x0004) [0x0000000000000000]              
	void*                                              srPowerName2;                                     		// 0x0070 (0x0004) [0x0000000000000000]              
	void*                                              srPowerName3;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                MaxNewUnlockLevel;                                		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLockedByDefault : 1;                             		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bPermanentlyLocked : 1;                           		// 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUsePrimaryColor : 1;                             		// 0x007C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUseSecondaryColor : 1;                           		// 0x007C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bUsePattern : 1;                                  		// 0x007C (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bUsePatternColor : 1;                             		// 0x007C (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bUsePhong : 1;                                    		// 0x007C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bUseEmissive : 1;                                 		// 0x007C (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bUseSkinTone : 1;                                 		// 0x007C (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bHideIfLocked : 1;                                		// 0x007C (0x0004) [0x0000000000000000] [0x00000200] 
};

// ScriptStruct SFXGame.SFXSaveManagerMP.MPTutorialPromoMessage
// 0x001C
struct FMPTutorialPromoMessage
{
	struct FString                                     ImageURL;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TrackingID;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                offerId;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	void*                                              MessageTitle;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	void*                                              MessageText;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveManagerMP.StartingMPPlayerVariable
// 0x0010
struct FStartingMPPlayerVariable
{
	struct FString                                     PlayerVariable;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Value;                                            		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveManagerMP.NewReinforcementData
// 0x000D
struct FNewReinforcementData
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Category;                                         		// 0x000C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSaveManagerMP.PendingSaveOperation
// 0x0010
struct FPendingSaveOperation
{
	struct FScriptDelegate                             SaveDelegate;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      ForceSaveBase : 1;                                		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXSaveManagerMP.PendingLoadOperation
// 0x000C
struct FPendingLoadOperation
{
	struct FScriptDelegate                             LoadDelegate;                                     		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSaveManagerMP.ActiveMatchConsumable
// 0x000C
struct FActiveMatchConsumable
{
	int                                                ClassNameID;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      bShouldDeactivateAfterMatch : 1;                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXPath_AvoidFireFromCover.EnemyCoverInfo
// 0x000C
struct FEnemyCoverInfo
{
	struct FCoverInfo                                  Cover;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    Enemy;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn.PowerImpactNotification
// 0x000C
struct FPowerImpactNotification
{
	struct FName                                       Label;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              TimeBeforeImpact;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn.ScoreRecord
// 0x0014
struct FScoreRecord
{
	class ASFXPawn_Player*                             Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              TotalDamage;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              TotalPowerAssistValue;                            		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              LastScoreTime;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	void*                                              LastScoreSourceName;                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn.DeathInfo
// 0x000C
struct FDeathInfo
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	class APawn*                                       KillerPawn;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	void*                                              LastDamageSource;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn.ReplicatedGib
// 0x0020
struct FReplicatedGib
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0010 (0x000C) [0x0000000000000000]              
	int                                                BoneIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPawn_Player.HelmetMetaData
// 0x0004
struct FHelmetMetaData
{
	unsigned long                                      bHidesHead : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHidesHair : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAffectsVO : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXPawn_Player.ArmorEffectDescription
// 0x0024
struct FArmorEffectDescription
{
	struct FString                                     ArmorEffect;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< void* >                                    EffectDescription;                                		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           EffectToken;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXPawn_Player.CompositeSourceMeshes
// 0x0010
struct ASFXPawn_Player_FCompositeSourceMeshes
{
	TArray< class USkeletalMesh* >                     Parts;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               BaseMesh;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPlayerCustomization.CompositeSourceMeshes
// 0x0010
struct USFXPlayerCustomization_FCompositeSourceMeshes
{
	TArray< class USkeletalMesh* >                     Parts;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USkeletalMesh*                               BaseMesh;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.sfxpowercustomaction.DelayedPowerComboData
// 0x0020
struct FDelayedPowerComboData
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	class USFXGameEffect_PowerCombo*                   ComboEffect;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	class ABioPawn*                                    TargetPawn;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.sfxpowercustomaction.EvolvedSoundStruct
// 0x0009
struct FEvolvedSoundStruct
{
	class UWwiseEvent*                                 Sound;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAnyEvolved : 1;                                  		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReplaceBaseSound : 1;                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned char                                      EvolveChoice;                                     		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPower.RankInfo
// 0x0010
struct FRankInfo
{
	int                                                Icon;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	void*                                              Name;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	void*                                              Description;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	void*                                              UnlockBlurb;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPower.UnlockRequirement
// 0x000C
struct FUnlockRequirement
{
	class UClass*                                      PowerClass;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Rank;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	void*                                              CustomUnlockText;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPreAsyncWorkTicker.SFXPreAsyncWorkQueuedShot
// 0x0065
struct FSFXPreAsyncWorkQueuedShot
{
	struct FImpactInfo                                 Impact;                                           		// 0x0000 (0x0054) [0x0000000000080000]              ( CPF_Component )
	class ASFXWeapon_NativeBase*                       Weapon;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                NumHits;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                FrameCount;                                       		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSuppressAudio : 1;                               		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      FiringMode;                                       		// 0x0064 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXPreAsyncWorkTicker.SFXPreAsyncWorkQueuedPowerImpact
// 0x0070
struct FSFXPreAsyncWorkQueuedPowerImpact
{
	struct FScriptDelegate                             ImpactCallback;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      DamageType;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	class UClass*                                      MaxRagdollDmgTypeOverride;                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FAreaEffectParameters                       Params;                                           		// 0x0014 (0x0020) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0034 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x0040 (0x000C) [0x0000000000000000]              
	class USFXPowerCustomActionBase*                   Power;                                            		// 0x004C (0x0004) [0x0000000000000000]              
	class AActor*                                      Target;                                           		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                MaxRagdollOverride;                               		// 0x0058 (0x0004) [0x0000000000000000]              
	float                                              Force;                                            		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                ImpactCount;                                      		// 0x0060 (0x0004) [0x0000000000000000]              
	class ASFXProjectile_PowerCustomAction*            Projectile;                                       		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                FrameCount;                                       		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAreaExplosion : 1;                               		// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFirstTarget : 1;                                 		// 0x006C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.sfxpri.ScoreEvent
// 0x0010
struct FScoreEvent
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              ExpiryTime;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.sfxpri.ScoreInfo
// 0x0009
struct FScoreInfo
{
	float                                              Score;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Credits;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Trigger;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXProjectile.ReplicatedInit
// 0x0021
struct FReplicatedInit
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     location;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Speed;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	class APawn*                                       Instigator;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	unsigned char                                      Trigger;                                          		// 0x0020 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXProjectile.ReplicatedExplosion
// 0x0019
struct FReplicatedExplosion
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	unsigned char                                      Trigger;                                          		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXProjectile_Explosive.ReplicatedStick
// 0x0025
struct FReplicatedStick
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      StuckActor;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                BoneIndex;                                        		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Reaction;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      Trigger;                                          		// 0x0024 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXProjectile_PowerCustomAction.ReplicatedPowerProjInit
// 0x002D
struct FReplicatedPowerProjInit
{
	struct FVector                                     location;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Direction;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	class AActor*                                      Caster;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	class AActor*                                      TargetActor;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              TravelSpeed;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Power;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      Trigger;                                          		// 0x002C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSceneShopNodePlotCheck.SFXSSPlotValue
// 0x0010
struct FSFXSSPlotValue
{
	struct FString                                     sPinName;                                         		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fValue;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXScoreManager.CreditBudget
// 0x0008
struct FCreditBudget
{
	class ASFXPawn_Player*                             Player;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CreditsRewarded;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXScoreManager.DifficultyScoreMultiplier
// 0x0005
struct FDifficultyScoreMultiplier
{
	float                                              Multiplier;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Difficulty;                                       		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXScoreManager.PlayerMedalRecord
// 0x0010
struct FPlayerMedalRecord
{
	TArray< int >                                      TrackingCounts;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ASFXPawn_Player*                             Player;                                           		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXScoreManager.MedalDefinition
// 0x001D
struct FMedalDefinition
{
	struct FString                                     Icon;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	void*                                              MedalName;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Threshold;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                ReplacesIdx;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSeqAct_AIFactory2.AISpawnClusterTracker
// 0x001C
struct FAISpawnClusterTracker
{
	TArray< class APawn* >                             ClusterPawns;                                     		// 0x0000 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                CurrentType;                                      		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              VisibilityTimer;                                  		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class ASFXProjectile*                              ObscuredSpawnProjectile;                          		// 0x0014 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bVisible : 1;                                     		// 0x0018 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
};

// ScriptStruct SFXGame.SFXSeqAct_AIFactory2.AISpawnInfo
// 0x0085
struct FAISpawnInfo
{
	TArray< class APawn* >                             Types;                                            		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FAISpawnClusterTracker >            WatchList;                                        		// 0x000C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< class AActor* >                            SpawnPoints;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           VarLinkDescs;                                     		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AutoDebugText;                                    		// 0x0030 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      ObscuredSpawnProjectileClass;                     		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ObscuredSpawnOffset;                              		// 0x0040 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ActorTag;                                         		// 0x004C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ClusterVisibilityDelay;                           		// 0x0054 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentCluster;                                   		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                SpawnTotal;                                       		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaxAlive;                                         		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SpawnedCount;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                SpawnPointIdx;                                    		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              MaxSpawnDelay;                                    		// 0x006C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinSpawnDelay;                                    		// 0x0070 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentDelay;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                TeamIdx;                                          		// 0x0078 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class ABioBaseSquad*                               Squad;                                            		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoAcquireEnemy : 1;                            		// 0x0080 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutoNotifyEnemy : 1;                             		// 0x0080 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bDisableFriendlyNotifications : 1;                		// 0x0080 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDisableAI : 1;                                   		// 0x0080 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bCanDropAmmo : 1;                                 		// 0x0080 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bDisableShadowCasting : 1;                        		// 0x0080 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned char                                      ShadowMode;                                       		// 0x0084 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSeqAct_AutoLevelPlayer.MissionScore
// 0x000C
struct FMissionScore
{
	struct FName                                       MissionName;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              Value;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSeqAct_DummyWeaponFire.DummyFireObjectListParams
// 0x0021
struct FDummyFireObjectListParams
{
	struct FVector2D                                   SecondsPerObject;                                 		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FVector2D                                   ObjectChangeDelay;                                		// 0x0008 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              TimeUntilObjectChange;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              DelayTimeRemaining;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                CurrentObjIdx;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDelay : 1;                                       		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      CyclingMethod;                                    		// 0x0020 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct SFXGame.SFXSeqAct_ResearchChoiceGUI.ResearchMenu
// 0x002C
struct FResearchMenu
{
	struct FString                                     sImagePath;                                       		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTechData >                         m_ResearchChoices;                                		// 0x000C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	void*                                              srTitle;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	void*                                              srSubTitle;                                       		// 0x0020 (0x0004) [0x0000000000000000]              
	void*                                              srAboutLabel;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	void*                                              srAboutText;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSeqAct_StartAmbientConv.SFXConvActorVar
// 0x0010
struct FSFXConvActorVar
{
	struct FName                                       nmPinName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      pActor;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	class USeqVar_Object*                              pSeqVar;                                          		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSeqAct_WheelController_NativeBase.WheelInfo
// 0x0040
struct FWheelInfo
{
	struct FVector                                     LocationOffset;                                   		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RotationOffset;                                   		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LastFramePosition;                                		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FRotator                                    TravelRotation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
	class AActor*                                      Wheel;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	class AActor*                                      GroundLevelIndicator;                             		// 0x0034 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRightWheel : 1;                                  		// 0x003C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCanTurn : 1;                                     		// 0x003C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHudDmgIndicatorPaths
// 0x0018
struct FSFXHudDmgIndicatorPaths
{
	struct FString                                     _alpha;                                           		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     _visible;                                         		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDResistances
// 0x0014
struct FSFXHUDResistances
{
	float                                              fHealthPct;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              fArmourPct;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fBioticPct;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              fShieldPct;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasShield : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasArmour : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasBiotic : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHasHealth : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDSquadMemberInfo
// 0x0095
struct FSFXHUDSquadMemberInfo
{
	struct FString                                     sPath;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIconImagePath;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sShieldPath;                                      		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sBioticPath;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sArmourPath;                                      		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sHealthPath;                                      		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPowerPath;                                       		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXHUDResistances                          Resistances;                                      		// 0x0054 (0x0014) [0x0000000000000000]              
	struct FSFXHUDResistances                          DisplayedResistances;                             		// 0x0068 (0x0014) [0x0000000000000000]              
	class ABioPawn*                                    pPawn;                                            		// 0x007C (0x0004) [0x0000000000000000]              
	class UTexture2D*                                  pIcon;                                            		// 0x0080 (0x0004) [0x0000000000000000]              
	float                                              fCooldown;                                        		// 0x0084 (0x0004) [0x0000000000000000]              
	float                                              fElapsedFullResistTime;                           		// 0x0088 (0x0004) [0x0000000000000000]              
	class USFXGUIValue_HUDPowerIcon*                   pPowerIcon;                                       		// 0x008C (0x0004) [0x0000000000000000]              
	unsigned long                                      bCooldownVisible : 1;                             		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShieldVisible : 1;                               		// 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bBioticVisible : 1;                               		// 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bArmourVisible : 1;                               		// 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bHealthVisible : 1;                               		// 0x0090 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bShieldDamage : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bBioticDamage : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bArmourDamage : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bHealthDamage : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bInvalidated : 1;                                 		// 0x0090 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bVisible : 1;                                     		// 0x0090 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bUpdateResistance : 1;                            		// 0x0090 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bUpdateHealth : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bUpdatePower : 1;                                 		// 0x0090 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bUpdateIcon : 1;                                  		// 0x0090 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bDisplayVisible : 1;                              		// 0x0090 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned char                                      ePortraitState;                                   		// 0x0094 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDTargetInfo
// 0x0034
struct FSFXHUDTargetInfo
{
	struct FString                                     sName;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sStatus;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXHUDResistances                          Resistances;                                      		// 0x0018 (0x0014) [0x0000000000000000]              
	int                                                nStatusFlags;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bInteractive : 1;                                 		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHostile : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bInRange : 1;                                     		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDNotification
// 0x0010
struct FSFXHUDNotification
{
	class UGFxValue*                                   oMovieClip;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              fTimeToLive;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bVisible : 1;                                     		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXHUDMiniNotification
// 0x0018(0x0028 - 0x0010)
struct FSFXHUDMiniNotification : FSFXHUDNotification
{
	struct FString                                     sText;                                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       nmIcon;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	float                                              fAnimTime;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_HUD.SFXMPTargetUIState
// 0x0014
struct FSFXMPTargetUIState
{
	TArray< struct FPointer >                          aBarPips;                                         		// 0x0000 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	class UGFxValue*                                   oResistBar;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                nNumVisible;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_Save.SaveGUIAreaInfo
// 0x0018
struct FSaveGUIAreaInfo
{
	struct FString                                     ImageName;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       AreaName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	void*                                              AreaStrRef;                                       		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_Save.SaveGUIRecord
// 0x0034
struct FSaveGUIRecord
{
	struct FSFXSaveDescriptor                          SaveDescriptor;                                   		// 0x0000 (0x0014) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FriendlyName;                                     		// 0x0014 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ImagePath;                                        		// 0x0020 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USFXSaveGame*                                SaveGame;                                         		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UTexture2D*                                  AreaImage;                                        		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_Load.SaveGUICareerRecord
// 0x004A
struct FSaveGUICareerRecord
{
	struct FString                                     CareerName;                                       		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     firstName;                                        		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     className;                                        		// 0x0018 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FSFXSavePair >                      CareerSaves;                                      		// 0x0024 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FSaveTimeStamp                              CreationDate;                                     		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	int                                                DeviceID;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bActiveCareer : 1;                                		// 0x0044 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned char                                      Origin;                                           		// 0x0048 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      Notoriety;                                        		// 0x0049 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_Personalization.TintSwatchData
// 0x0014
struct FTintSwatchData
{
	int                                                SwatchID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FLinearColor                                SwatchColor;                                      		// 0x0004 (0x0010) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelIcon
// 0x0020
struct FSFXPowerWheelIcon
{
	struct FString                                     sPath;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sID;                                              		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fBoundary;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHenchIcon : 1;                                   		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerIconData
// 0x0038
struct FSFXPowerIconData
{
	struct FString                                     Path;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MappedIconPath;                                   		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MappedIconBGPath;                                 		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Id;                                               		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              Boundary;                                         		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsHenchmanIcon : 1;                               		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsQuickslotIcon : 1;                              		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelIconWeapon
// 0x0045(0x0065 - 0x0020)
struct FSFXPowerWheelIconWeapon : FSFXPowerWheelIcon
{
	struct FString                                     sName;                                            		// 0x0020 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sPawnName;                                        		// 0x002C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sDescription;                                     		// 0x0038 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     sIconResource;                                    		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      oWeaponClass;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                nWeaponIcon;                                      		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                nAmmo;                                            		// 0x0058 (0x0004) [0x0000000000000000]              
	class UGFxValue*                                   oIconMC;                                          		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned long                                      bEquipped : 1;                                    		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      eWeaponState;                                     		// 0x0064 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXRadarElementData
// 0x0029
struct FSFXRadarElementData
{
	struct FVector                                     vActorLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     vPosition;                                        		// 0x000C (0x000C) [0x0000000000000000]              
	int                                                nSize;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                nRelativeZ;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                nID;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocked : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdate : 1;                                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUpdateLock : 1;                                  		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned char                                      eRadarType;                                       		// 0x0028 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSFHandler_PowerWheel.SFXPowerWheelPawnIndices
// 0x0024
struct FSFXPowerWheelPawnIndices
{
	TArray< int >                                      aPlayer;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      aHench1;                                          		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      aHench2;                                          		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXSFHandler_Slideshow.SFXSlideshowEntry
// 0x0028
struct FSFXSlideshowEntry
{
	struct FString                                     ImagePath;                                        		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UTexture2D*                                  Image;                                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DisplayTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinDisplayTime;                                   		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              NextText;                                         		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              PrevText;                                         		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	void*                                              ExitText;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      CanExit : 1;                                      		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_Slideshow.SFXSlideshowParams
// 0x001C
struct FSFXSlideshowParams
{
	TArray< struct FSFXSlideshowEntry >                Slides;                                           		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       Music;                                            		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              SlideFadeScalar;                                  		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AutoAdvance : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      AllowRewind : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      AllowAdvancePastEnd : 1;                          		// 0x0018 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      SlidesFadeIn : 1;                                 		// 0x0018 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      SlidesFadeOut : 1;                                		// 0x0018 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      BlackBackground : 1;                              		// 0x0018 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSFHandler_PRCShop.PRCInfo_t
// 0x0018
struct FPRCInfo_t
{
	struct FString                                     sCreditsSection;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              fFadeTime;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              fHoldTime;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              fScrollTime;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXShield_Base.ShieldBreachReplication
// 0x0005
struct FShieldBreachReplication
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Trigger;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXSkelControlLimb.SkelControlProfile
// 0x002A
struct FSkelControlProfile
{
	struct FVector                                     EffectorLocation;                                 		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     JointTargetLocation;                              		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EffectorSpaceBoneName;                            		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       JointTargetSpaceBoneName;                         		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      EffectorLocationSpace;                            		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      JointTargetLocationSpace;                         		// 0x0029 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSkeletalMeshActor.SMAVectorParameter
// 0x0020
struct FSMAVectorParameter
{
	struct FLinearColor                                Parameter;                                        		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Group;                                            		// 0x0018 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
};

// ScriptStruct SFXGame.SFXSkeletalMeshActor.SMAScalarParameter
// 0x0014
struct FSMAScalarParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Group;                                            		// 0x0008 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	float                                              Parameter;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXSkeletalMeshActor.SMATextureParameter
// 0x0014
struct FSMATextureParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       Group;                                            		// 0x0008 (0x0008) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UTexture*                                    Parameter;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct SFXGame.SFXTelemetry.TelemetryHookConfig
// 0x0048
struct FTelemetryHookConfig
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Module;                                           		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Group;                                            		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     String;                                           		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CrossParameters;                                  		// 0x0030 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Channel;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXTelemetry.TelemetryHook
// 0x0019
struct FTelemetryHook
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                ModuleID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                GroupID;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                StringID;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                CrossParameters;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      Channel;                                          		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationParam
// 0x0018
struct FSFXVocalizationParam
{
	TArray< unsigned char >                            SpecificType;                                     		// 0x0000 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< int >                                      SpecificValue;                                    		// 0x000C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationLineV2
// 0x0058
struct FSFXVocalizationLineV2
{
	struct FSFXVocalizationParam                       Instigator;                                       		// 0x0000 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXVocalizationParam                       Recipient;                                        		// 0x0018 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FSFXVocalizationParam                       ThirdParam;                                       		// 0x0030 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DebugText;                                        		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWwiseEvent*                                 Sound;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct SFXGame.SFXVocalizationBank.SFXVocalizationEventV2
// 0x000C
struct FSFXVocalizationEventV2
{
	TArray< struct FSFXVocalizationLineV2 >            Lines;                                            		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct SFXGame.SFXWave.SFXWaveAssetLoadData
// 0x0011
struct FSFXWaveAssetLoadData
{
	struct FString                                     AssetToLoad;                                      		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UObject*                                     LoadedAsset;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      AssetLoadStatus;                                  		// 0x0010 (0x0001) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif