/*
#############################################################################################
# Spec Ops The Line (idk) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Kynapse_structs.h
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

// ScriptStruct Kynapse.HierarchicalBuilder.HB_AdvancedSettings
// 0x0004
struct FHB_AdvancedSettings
{
	unsigned long                                      RemoveMono : 1;                                   		// 0x0000 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      FlatOnly : 1;                                     		// 0x0000 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      MergeAIMeshData : 1;                              		// 0x0000 (0x0004) [0x0000000000000003] [0x00000004] ( CPF_Edit | CPF_Const )
	unsigned long                                      AbortIfAiMeshMissing : 1;                         		// 0x0000 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
	unsigned long                                      LocalOBJCopy : 1;                                 		// 0x0000 (0x0004) [0x0000000000000002] [0x00000010] ( CPF_Const )
};

// ScriptStruct Kynapse.HierarchicalBuilder.HierarchyBuilderGraphParams
// 0x0040
struct FHierarchyBuilderGraphParams
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000500003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     GraphPath;                                        		// 0x000C (0x000C) [0x0000000000500003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	int                                                NbVertices;                                       		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                NbEdges;                                          		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                GraphFileSize;                                    		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FBox                                        BoundingBox;                                      		// 0x0024 (0x001C) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.HierarchicalBuilder.HierarchyBuilderGraphParamsList
// 0x0010
struct FHierarchyBuilderGraphParamsList
{
	TArray< struct FHierarchyBuilderGraphParams >      Graphs;                                           		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                alternateId;                                      		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Kynapse.HierarchicalBuilder.HierarchyBuilderParams
// 0x0074
struct FHierarchyBuilderParams
{
	unsigned char                                      ProjectType;                                      		// 0x0000 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                RuntimeMemory;                                    		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     TargetDirectory;                                  		// 0x0008 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     TargetName;                                       		// 0x0014 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UKynapseHierAdditionalDataVertex*            VerticesAdditionnalData[ 0x4 ];                   		// 0x0020 (0x0010) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseHierAdditionalDataEdge*              EdgesAdditionnalData[ 0x4 ];                      		// 0x0030 (0x0010) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      AutoComputeExtraSizeAndAddOffset : 1;             		// 0x0040 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	int                                                ExtraL0VertexSize;                                		// 0x0044 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                ExtraL0EdgeSize;                                  		// 0x0048 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FHB_AdvancedSettings                        advancedSettings;                                 		// 0x004C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FString                                     PoDefPath;                                        		// 0x0050 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FHierarchyBuilderGraphParamsList >  GraphsList;                                       		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WorkspaceFilename;                                		// 0x0068 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct Kynapse.HierarchicalBuilder.LinkedEdgeStruct
// 0x0018
struct FLinkedEdgeStruct
{
	struct FVector                                     Start;                                            		// 0x0000 (0x000C) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FVector                                     End;                                              		// 0x000C (0x000C) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct Kynapse.HierarchicalBuilder.StaticPathobjectEntry
// 0x0018
struct FStaticPathobjectEntry
{
	int                                                Uid;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	class UKynapseEntityDefinitionStaticPathObject*    PathobjectDefinition;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                POD_Mask;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FLinkedEdgeStruct >                 SeedEdges;                                        		// 0x000C (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Kynapse.HierarchicalBuilder.SectorDefinition
// 0x0040
struct FSectorDefinition
{
	struct FString                                     inputGraphPath;                                   		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     inputAIMeshPath;                                  		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     outputGraphPath;                                  		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBox                                        BoundingBox;                                      		// 0x0024 (0x001C) [0x0000000000000000]              
};

// ScriptStruct Kynapse.HierarchicalBuilder.SectorDefinitionList
// 0x0010
struct FSectorDefinitionList
{
	TArray< struct FSectorDefinition >                 sectors;                                          		// 0x0000 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                alternateId;                                      		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Kynapse.HierarchicalBuilder.PrelinkProcessParams
// 0x001C
struct FPrelinkProcessParams
{
	int                                                MaxEdgesPerVertex;                                		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              EntityRadius;                                     		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              OverConnectionRatio;                              		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      CanGo;                                            		// 0x000C (0x0001) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FSectorDefinitionList >             sectorsList;                                      		// 0x0010 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct Kynapse.KynapseAgent.AgentAperiodicTask
// 0x0018
struct FAgentAperiodicTask
{
	struct FString                                     taskName;                                         		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Priority;                                         		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              tpf;                                              		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                maxCall;                                          		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseAgent.AgentPeriodicTask
// 0x0010
struct FAgentPeriodicTask
{
	struct FString                                     taskName;                                         		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Period;                                           		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseBrainService.BServiceAperiodicTask
// 0x0018
struct FBServiceAperiodicTask
{
	struct FString                                     taskName;                                         		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Priority;                                         		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              tpf;                                              		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                maxCall;                                          		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseBrainService.BServicePeriodicTask
// 0x0010
struct FBServicePeriodicTask
{
	struct FString                                     taskName;                                         		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Period;                                           		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseBrainServiceHierPathfinder.LocalPathFinding
// 0x0028
struct FLocalPathFinding
{
	struct FString                                     context;                                          		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Radius;                                           		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                tabouEdgeMaxCount;                                		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                pathMaxLength;                                    		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              smoothingPeriod;                                  		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              smoothingDistance;                                		// 0x001C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                smoothingMaxNodeSkip;                             		// 0x0020 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                lpfTabouEdgeMaxCount;                             		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Kynapse.KynapseBrainServiceHierPathfinder.HierarchicalModifiers
// 0x002C
struct FHierarchicalModifiers
{
	class UKynapseModifierRefineGoal*                  RefineGoal;                                       		// 0x0000 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierDetectGoalReached*           DetectGoalReached;                                		// 0x0004 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierDetectAccident*              DetectAccident;                                   		// 0x0008 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierFindNodesFromPositions*      FindNodesFromPositions;                           		// 0x000C (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierCanGo*                       CanGo;                                            		// 0x0010 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierDetectGoalChanged*           DetectGoalChanged;                                		// 0x0014 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierDetectPathNodeReached*       DetectPathNodeReached;                            		// 0x0018 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierSelectPathNodeCandidate*     SelectPathNodeCandidate;                          		// 0x001C (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierComputeTargetPoint*          ComputeTargetPoint;                               		// 0x0020 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierGoto*                        Goto;                                             		// 0x0024 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UKynapseModifierSteering*                    Steering;                                         		// 0x0028 (0x0004) [0x000000000440000B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct Kynapse.KynapseHierDatabase.DatabaseAdvanced
// 0x0014
struct FDatabaseAdvanced
{
	int                                                AbstractSlotsCount;                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                AbstractSlotSize;                                 		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ConcreteSlotsCount;                               		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                ConcreteSlotSize;                                 		// 0x000C (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      HandleAIMeshes : 1;                               		// 0x0010 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      EndiannessSwap : 1;                               		// 0x0010 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      ExternalSlotMemory : 1;                           		// 0x0010 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      AllowUnstreamedDataReuse : 1;                     		// 0x0010 (0x0004) [0x0000000000000003] [0x00000008] ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseHierDatabase.database
// 0x0034
struct Fdatabase
{
	struct FString                                     DatabaseName;                                     		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FString                                     Path;                                             		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                MaxGraphHandles;                                  		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      streamingMode;                                    		// 0x001C (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FDatabaseAdvanced                           advancedSettings;                                 		// 0x0020 (0x0014) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseHierPathdataObj.BackupPODEntry
// 0x000C
struct FBackupPODEntry
{
	int                                                Uid;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Mask;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Type;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Kynapse.KynapseHierPathdataObj.objAdditionnalDataInfo
// 0x000C
struct FobjAdditionnalDataInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Size;                                             		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                Offset;                                           		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseModifierGoto_GapDynamicAvoidance_v2.Goto_GapDynamicAvoidance_v2_TechnicalSettings
// 0x0018
struct FGoto_GapDynamicAvoidance_v2_TechnicalSettings
{
	int                                                MaxCollisionTestsPerFrame;                        		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DiagramHalfWidth;                                 		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DiagramMaxLength;                                 		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              CandidateSpacing;                                 		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              DiagramRefreshPeriod;                             		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              EntityDistMax;                                    		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseModifierGoto_GapDynamicAvoidance_v2.Goto_GapDynamicAvoidance_v2_SecondarySettings
// 0x0030
struct FGoto_GapDynamicAvoidance_v2_SecondarySettings
{
	float                                              QueueingDelay;                                    		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PushingDelay;                                     		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StuckDelay;                                       		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxAngularSpeed;                                  		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinSpeed;                                         		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              ExtraGap;                                         		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	struct FGoto_GapDynamicAvoidance_v2_TechnicalSettings technicalSettings;                                		// 0x0018 (0x0018) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseModifierGoto_GapDynamicAvoidance_v2.Goto_GapDynamicAvoidance_v2_MainSettings
// 0x0038
struct FGoto_GapDynamicAvoidance_v2_MainSettings
{
	float                                              Courtesy;                                         		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      ContinuousSpeed : 1;                              		// 0x0004 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	struct FGoto_GapDynamicAvoidance_v2_SecondarySettings SecondarySettings;                                		// 0x0008 (0x0030) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseWorldService.WServiceAperiodicTask
// 0x0018
struct FWServiceAperiodicTask
{
	struct FString                                     taskName;                                         		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Priority;                                         		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              tpf;                                              		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                maxCall;                                          		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseWorldService.WServicePeriodicTask
// 0x0010
struct FWServicePeriodicTask
{
	struct FString                                     taskName;                                         		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Period;                                           		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.YAIGlobalProperties.YS_EntityPerceptionOverride
// 0x000C
struct FYS_EntityPerceptionOverride
{
	float                                              m_hearingMultiplicator;                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_maxSightInSandstorm;                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_sandStormDistanceMultiplier;                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Kynapse.YAIGlobalProperties.YS_PointLocker
// 0x001C
struct FYS_PointLocker
{
	float                                              m_aiLockRadius;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_aiLockHeight;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_playerLockRadius;                               		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_playerLockHeight;                               		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_playerLockRadiusWhenMovingInCover;              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_playerLockOffsetWhenMovingInCover;              		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_playerLockRadiusSpecialMove;                    		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Kynapse.YAIGlobalProperties.YS_DangerZoneParameters
// 0x0024
struct FYS_DangerZoneParameters
{
	float                                              m_radius;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_duration;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_createOnDeath : 1;                              		// 0x0008 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              m_createOnDamageReduction;                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_createOnDamageMin;                              		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_createOnDamageMaxDamage;                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_createOnDamageDelay;                            		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_filterDistance;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_filterRadiusIncrease;                           		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Kynapse.KynapseWorld.YS_KynapseAssetReference
// 0x000C
struct FYS_KynapseAssetReference
{
	struct FName                                       m_name;                                           		// 0x0000 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	class UObject*                                     m_object;                                         		// 0x0008 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct Kynapse.KynapseWorld.EstimateInfo
// 0x0010
struct FEstimateInfo
{
	struct FString                                     Name;                                             		// 0x0000 (0x000C) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseWorldServiceMapBuilder.ProcessParams
// 0x0004
struct FProcessParams
{
	unsigned char                                      FirstStep;                                        		// 0x0000 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      LastStep;                                         		// 0x0001 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      dummy1;                                           		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      dummy2;                                           		// 0x0003 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Kynapse.YKynapsePathdataGenerationModifier.YS_PathDataPositions
// 0x0024
struct FYS_PathDataPositions
{
	struct FVector                                     m_start;                                          		// 0x0000 (0x000C) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FVector                                     m_end;                                            		// 0x000C (0x000C) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FVector                                     m_influenceArea;                                  		// 0x0018 (0x000C) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct Kynapse.YKynapsePathdataGenerationModifier_ClimbDropDown.YS_PathDataInfluenceArea
// 0x0024
struct FYS_PathDataInfluenceArea
{
	int                                                m_uIdA;                                           		// 0x0000 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	int                                                m_uIdB;                                           		// 0x0004 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FVector                                     m_position;                                       		// 0x0008 (0x000C) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FVector2D                                   m_xAxis;                                          		// 0x0014 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	struct FVector2D                                   m_yAxis;                                          		// 0x001C (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
};

// ScriptStruct Kynapse.KynapseWorldServiceMapBuilder.AdvancedParams
// 0x0015
struct FAdvancedParams
{
	int                                                LocalMapSize;                                     		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MaxMapSize;                                       		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      SimulateGroundAroundBoundingBox : 1;              		// 0x0008 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      ForbidCollidingEdge : 1;                          		// 0x0008 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	float                                              OverConnectionRatio;                              		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                ComponentSizeMin;                                 		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned char                                      CollisionModel;                                   		// 0x0014 (0x0001) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseWorldServiceMapBuilder.HidingDataParams
// 0x0014
struct FHidingDataParams
{
	unsigned long                                      GenerateHidingPoints : 1;                         		// 0x0000 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	float                                              MaxDistanceToWall;                                		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                SmallRaycastDelta;                                		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MinDistanceBetweenVertices;                       		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	int                                                MinConeOfVisionSize;                              		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseWorldServiceMapBuilder.AccuracyParams
// 0x0014
struct FAccuracyParams
{
	float                                              Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              graphAccuracy;                                    		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              nbSectors;                                        		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              edgeRadius;                                       		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              MaxDeltaHeight;                                   		// 0x0010 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};

// ScriptStruct Kynapse.KynapseWorldServiceMapBuilder.PhysicalParams
// 0x001C
struct FPhysicalParams
{
	float                                              entityHeight;                                     		// 0x0000 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              StepLength;                                       		// 0x0004 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              stepMax;                                          		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              holeMax;                                          		// 0x000C (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	unsigned long                                      CheckGroundSlope : 1;                             		// 0x0010 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	float                                              groundSlopeMax;                                   		// 0x0014 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              groundSlopeMin;                                   		// 0x0018 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif