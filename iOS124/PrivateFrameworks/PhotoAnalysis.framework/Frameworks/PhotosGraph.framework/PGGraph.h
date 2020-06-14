//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MAGraph.h"

@class CLSFocusPeopleCache, NSArray, NSDate, NSDateFormatter, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSRecursiveLock, NSSet, NSString, PGManager;
@protocol OS_dispatch_queue, OS_os_log;

@interface PGGraph : MAGraph
{
    NSDate *_creationDate;
    NSNumber *_canUseLocationDomain;
    _Bool _didFetchRoutineInfo;
    NSDateFormatter *_dateFormatter;
    NSRecursiveLock *_supersetLock;
    NSSet *_supersets;
    NSSet *_supersetCityNodes;
    NSSet *_supersetCountyNodes;
    NSSet *_supersetStateNodes;
    NSSet *_supersetCountryNodes;
    NSSet *_supersetLocales;
    NSSet *_interestingCityNodes;
    NSSet *_highlyInterestingMomentNodes;
    NSMutableDictionary *_momentNodesByMomentID;
    NSMutableDictionary *_personNodesByPersonID;
    NSMutableDictionary *_isCelebratingInGeneralCache;
    NSArray *_preprocessors;
    NSArray *_postprocessors;
    NSDictionary *_zeroKeywordMappingByMeaningLabel;
    _Bool _keepsExistingAssetCurationScores;
    _Bool _canWrite;
    PGManager *_manager;
    CLSFocusPeopleCache *_focusPeopleIngestCache;
    unsigned long long _numberOfUtilityAssets;
    unsigned long long _numberOfDefaultAssets;
    unsigned long long _numberOfImprovedAssets;
    unsigned long long _numberOfBetterAssets;
    NSString *_geoServiceProviderID;
    unsigned long long _relatedAlgorithmsVersion;
    unsigned long long _curationAlgorithmsVersion;
    unsigned long long _memoriesAlgorithmsVersion;
    NSString *_locale;
    NSObject<OS_dispatch_queue> *_graphQueue;
    struct PGRoutineInfoStruct _routineInfo;
}

+ (_Bool)graphExistsWithName:(id)arg1 parentDirectoryURL:(id)arg2;
+ (id)graphURLForName:(id)arg1 parentDirectoryURL:(id)arg2;
+ (void)initialize;
+ (id)assetPropertySetsForIngest;
+ (Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)edgeClass;
+ (id)identifyingEdgePropertyKeysForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (id)identifyingNodePropertyKeysForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)nodeClass;
+ (id)blacklistScenePetLabels;
+ (id)scenePetLabels;
+ (id)_graphNodePOILabelByPlaceType;
+ (id)mostSignificantMeaningLabels;
+ (id)tripMeaningLabels;
+ (id)aggregationMeaningLabels;
+ (id)frequentMeaningLabels;
+ (_Bool)_hasMomentsForPersonIdentifiers:(id)arg1 inGraph:(id)arg2 photoLibrary:(id)arg3;
+ (id)socialGroupPeopleSortDescriptorForSocialGroupNode:(id)arg1;
+ (id)_meaningLabelTree;
+ (void)_traverseMeaningLabelsInTree:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)_traverseMeaningLabelsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)_findParentMeaningLabelForMeaningLabel:(id)arg1 inTree:(id)arg2 currentParent:(id)arg3;
+ (id)parentMeaningLabelForMeaningLabel:(id)arg1;
+ (void)traverseParentMeaningsForMeaningLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)ingestProcessingLog;
+ (id)defaultMatchingSortDescriptors;
+ (id)matchingBlasklistedSceneLabels;
+ (id)matchingWeightToDictionary;
+ (id)_personClosestToMeBetweenPerson:(id)arg1 andOtherPerson:(id)arg2;
+ (id)_closestRelationshipEdgeLabelForPerson:(id)arg1 andOtherPerson:(id)arg2;
+ (unsigned long long)meaningForMeaningLabel:(id)arg1;
+ (id)meaningLabelForMeaning:(unsigned long long)arg1;
+ (id)stringForMeaning:(unsigned long long)arg1;
+ (id)stellarMeanings;
+ (id)lessMeaningfulMeanings;
+ (id)veryMeaningfulMeanings;
+ (id)tripMeanings;
+ (id)allMeaningfulMeanings;
+ (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)arg1 blacklisted:(_Bool)arg2;
+ (id)blacklistSceneLabelsForHobbyType:(long long)arg1;
+ (id)sceneLabelsForHobbyType:(long long)arg1;
+ (_Bool)location:(struct CLLocationCoordinate2D)arg1 isCloseToLocation:(struct CLLocationCoordinate2D)arg2;
+ (id)aggregateKeyByPublicEventCategoryLabel;
+ (id)aggregateKeyByMeaningLabel;
@property _Bool canWrite; // @synthesize canWrite=_canWrite;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *graphQueue; // @synthesize graphQueue=_graphQueue;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic) _Bool keepsExistingAssetCurationScores; // @synthesize keepsExistingAssetCurationScores=_keepsExistingAssetCurationScores;
@property(nonatomic) unsigned long long numberOfBetterAssets; // @synthesize numberOfBetterAssets=_numberOfBetterAssets;
@property(nonatomic) unsigned long long numberOfImprovedAssets; // @synthesize numberOfImprovedAssets=_numberOfImprovedAssets;
@property(nonatomic) unsigned long long numberOfDefaultAssets; // @synthesize numberOfDefaultAssets=_numberOfDefaultAssets;
@property(nonatomic) unsigned long long numberOfUtilityAssets; // @synthesize numberOfUtilityAssets=_numberOfUtilityAssets;
@property(retain, nonatomic) CLSFocusPeopleCache *focusPeopleIngestCache; // @synthesize focusPeopleIngestCache=_focusPeopleIngestCache;
@property __weak PGManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *momentNodeIdentifiers;
@property(nonatomic) struct PGRoutineInfoStruct routineInfo; // @synthesize routineInfo=_routineInfo;
@property(nonatomic) _Bool canUseLocationDomain;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned long long memoriesAlgorithmsVersion; // @synthesize memoriesAlgorithmsVersion=_memoriesAlgorithmsVersion;
@property(nonatomic) unsigned long long relatedAlgorithmsVersion; // @synthesize relatedAlgorithmsVersion=_relatedAlgorithmsVersion;
@property(nonatomic) unsigned long long curationAlgorithmsVersion; // @synthesize curationAlgorithmsVersion=_curationAlgorithmsVersion;
@property(retain, nonatomic) NSString *geoServiceProviderID; // @synthesize geoServiceProviderID=_geoServiceProviderID;
@property(retain, nonatomic) NSDate *creationDate;
- (id)_infoNode;
- (void)prepareForRebuild;
@property(readonly) _Bool needsRebuild;
- (void)invalidateMemoryCaches;
- (_Bool)saveToURL:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_os_log> *graphLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *ingestLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *relatedLoggingConnection;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 persistenceOptions:(long long)arg2;
- (id)initWithName:(id)arg1 parentDirectoryURL:(id)arg2;
@property(readonly) _Bool isOnGraphQueue;
- (void)_checkCanRead;
- (void)_checkCanWrite;
- (void)insertAssetCurationScoreInLibraryForFeeder:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)writePendingCurationScoresToPhotosDatabase;
- (void)addCurationScore:(double)arg1 forAsset:(id)arg2;
- (void)_writeCurationScoresToPhotosDatabase:(id)arg1;
- (_Bool)_shouldUpdateCurationScore:(double)arg1 withNewCurationScore:(double)arg2;
- (id)_neighborsFromMomentNode:(id)arg1 count:(unsigned long long)arg2 locationRequired:(_Bool)arg3 minDayDuration:(unsigned long long)arg4 maxDayDuration:(unsigned long long)arg5;
- (id)_peopleUUIDsForMomentNode:(id)arg1;
- (double)_calculateScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 referenceDistance:(double)arg3 andDistanceBlock:(CDUnknownBlockType)arg4;
- (double)_calculateScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andDistanceBlock:(CDUnknownBlockType)arg3;
- (double)_locationScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andLocationCoordinate:(const struct CLLocationCoordinate2D *)arg3;
- (double)_peopleScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andPeopleUUIDs:(id)arg3;
- (double)_densityScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andNumberOfAssets:(unsigned long long)arg3;
- (double)routineScoreForLocalDate:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 andPeopleUUIDs:(id)arg4;
- (double)neighborScoreForLocalDate:(id)arg1;
- (double)neighborScoreForMomentNode:(id)arg1;
- (id)searchNodesForAsset:(id)arg1 inMoment:(id)arg2;
- (id)identifyingPropertyKeysForEdgeDomain:(unsigned short)arg1 label:(id)arg2;
- (id)identifyingPropertyKeysForNodeDomain:(unsigned short)arg1 label:(id)arg2;
- (id)pets;
- (long long)libraryAge;
- (id)localDatesForMomentNode:(id)arg1;
- (id)closestMomentNodeForLocalDate:(id)arg1;
- (id)yearNodeForYear:(long long)arg1;
- (id)monthNodeForMonth:(long long)arg1;
- (id)dayNodeForDay:(long long)arg1;
- (id)momentNodesOverlappingLocalDateInterval:(id)arg1;
- (id)momentNodesForDateNode:(id)arg1;
- (id)_previousSeasonForSeason:(id)arg1;
- (id)previousSeasonNodeForSeasonNode:(id)arg1;
- (id)seasonNodeForLocalDate:(id)arg1;
- (id)dateNodesForWeekOfMonth:(long long)arg1;
- (id)dateNodesForWeekOfYear:(long long)arg1;
- (id)dateNodesForYear:(long long)arg1;
- (id)dateNodesForMonth:(long long)arg1;
- (id)dateNodesIgnoringYearForLocalDate:(id)arg1;
- (id)momentNodesIgnoringYearForLocalDate:(id)arg1;
- (id)momentNodesForLocalDate:(id)arg1;
- (id)dateNodesForLocalDateInterval:(id)arg1;
- (id)dateNodeForLocalDate:(id)arg1;
- (id)collectionListForCollectionNode:(id)arg1;
- (id)momentsResultForMomentNodes:(id)arg1 sortChronologically:(_Bool)arg2;
- (id)momentsForMomentNodes:(id)arg1 sortChronologically:(_Bool)arg2;
- (id)momentForMomentNode:(id)arg1;
- (id)_fuzzyMomentLookupForMomentNode:(id)arg1 error:(id *)arg2;
- (id)_strictMomentLookupForMomentNode:(id)arg1;
- (id)momentNodeForMoment:(id)arg1;
- (id)momentNodeForMomentIdentifier:(id)arg1 error:(id *)arg2;
- (id)momentNodeForAsset:(id)arg1;
- (id)_nodeForAssetCollection:(id)arg1 error:(id *)arg2;
- (id)_fuzzyEventNodeLookupForAssetCollection:(id)arg1 error:(id *)arg2;
- (id)_strictEventNodeLookupForAssetCollection:(id)arg1 error:(id *)arg2;
- (id)_eventNodesForDateComponents:(id)arg1 error:(id *)arg2;
- (void)_enumerateMomentForMomentNode:(id)arg1 paddingTime:(double)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (_Bool)_enumerateEventNodesForAssetCollection:(id)arg1 paddingTime:(double)arg2 error:(id *)arg3 enumerationBlock:(CDUnknownBlockType)arg4;
- (id)connectPublicEventNode:(id)arg1 withBusinessNode:(id)arg2;
- (id)insertBusiness:(id)arg1 fromEventNode:(id)arg2;
- (id)insertPlacesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 isNearHomeOrWork:(_Bool)arg3;
- (id)insertROINodeWithPlace:(id)arg1 fromEventNode:(id)arg2;
- (id)insertPOINodeWithPlace:(id)arg1 fromEventNode:(id)arg2 hasInsertedSpecialPOIAmusementParkNode:(_Bool)arg3;
- (id)insertSpecialPOIAmusementParkNodeFromMomentNode:(id)arg1;
- (id)insertSceneNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertSceneNodeWithScene:(id)arg1 fromEventNode:(id)arg2;
- (id)largeFrequentLocationNodes;
- (id)sceneNodesForSceneNames:(id)arg1;
- (id)_poiLabelForPOIType:(id)arg1;
- (id)seasonNodes;
- (id)_validLocationNodeForLocationNode:(id)arg1 withLocationMask:(unsigned long long)arg2;
- (struct CLLocationCoordinate2D)_approximateCoordinateForLocationNode:(id)arg1;
- (id)_commonNodeForLocationNode:(id)arg1 andLocationNode:(id)arg2;
- (id)_mostVisitedLocationNodeForLocationNodes:(id)arg1;
- (_Bool)_locationNodesRepresentSameCity:(id)arg1;
- (id)commonLocationNodeForRelevantLocationNodes:(id)arg1 locationMask:(unsigned long long)arg2;
- (id)relevantAddressNodesForMomentNodes:(id)arg1;
- (id)relevantLocationNodesForMomentNodes:(id)arg1;
- (id)densestCloseLocationNodeFromLocationNode:(id)arg1 withDateInterval:(id)arg2 locationMask:(unsigned long long)arg3;
- (void)enumeratePublicEventNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAreaNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCelebratedHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)bestFittingAreaNodeFromAreaNodes:(id)arg1;
- (double)libraryDuration;
- (id)celebratedHolidayNodes;
- (id)allMomentNodes;
- (id)allTimeYearsNodes;
- (id)dateNodeNameWithLocalDate:(id)arg1;
- (id)coworkers;
- (id)friends;
- (id)children;
- (id)parents;
- (id)partners;
- (id)familyMembers;
- (id)meNode;
- (id)insertLocationMobilityNodeWithMobility:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3;
- (id)insertLocationMobilityNodeWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertAddressNodeWithPlacemark:(id)arg1 location:(id)arg2 weight:(float)arg3 duringDateInterval:(id)arg4 fromEventNode:(id)arg5;
- (id)insertLocationHierarchyWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertAddressNodeWithProjectedPlacemark:(id)arg1 atEventLocation:(id)arg2 usingImprovedPlacemark:(_Bool)arg3;
- (void)insertLocationHierarchyWithProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2;
- (void)insertAreasOfInterestForProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2;
- (long long)_uuidForPlacemark:(id)arg1 forNodeLabel:(id)arg2;
- (id)insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_momentNodesFromPersonNodes:(id)arg1;
- (id)_feederForInsertingAssetCollection:(id)arg1;
- (void)_insertRoutineInfo;
- (void)_registerInsertedMomentNodes:(id)arg1 inGraphUpdate:(id)arg2;
- (void)insertMomentsWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)performChangeForGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)deletePersonsWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)deleteMomentsWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)performBatchUpdatesWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)_insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 insertedAndUpdatedPersonNodes:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)_cleanUpMoments:(id)arg1;
- (id)collectionsWithoutMeaning;
- (id)meaningfulEventCollections;
- (id)weekendCollections;
- (id)tripCollections;
- (id)collectionsWithMeanings:(id)arg1;
- (id)collectionsWithMeaning:(id)arg1;
- (void)_updateWeightWithNewMomentNodes:(id)arg1 isReliable:(_Bool)arg2 meaningEdge:(id)arg3;
- (void)addMomentNode:(id)arg1 toExistingCollectionWithMeaningEdge:(id)arg2 matchingResult:(id)arg3;
- (id)_createCollectionUUIDForMomentNodes:(id)arg1;
- (void)addParentMeaningHierarchyForMeaningNode:(id)arg1;
- (id)_addUniqueCollectionNodeWithSortedMomentNodes:(id)arg1 newCollectionUUID:(id)arg2 meaningLabel:(id)arg3 meaningIsReliable:(_Bool)arg4 weight:(float)arg5 score:(double)arg6;
- (id)addUniqueCollectionNodeWithSortedMomentNodes:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(_Bool)arg3 weight:(float)arg4;
- (id)addUniqueCollectionNodeWithSortedMomentNodes:(id)arg1 weight:(float)arg2;
- (id)addUniqueCollectionNodeWithUnsortedMomentNodes:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(_Bool)arg3 weight:(float)arg4;
- (id)collectionNodeForMomentNodes:(id)arg1;
- (id)collectionNodeForMoments:(id)arg1;
- (id)assetCollectionForCollectionWithMomentNodes:(id)arg1;
- (id)maximalSocialGroupsForPersonIdentifiers:(id)arg1;
- (id)socialGroupsForPersonIdentifiers:(id)arg1;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1;
- (unsigned long long)_countOfDistinctSocialGroups:(id)arg1;
- (id)_personNodeIntersectingSocialGroups:(id)arg1;
- (id)_socialGroupNodeForPersonNodes:(id)arg1 searchWithTolerance:(_Bool)arg2;
- (id)socialGroupsIdentifiersFromSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(_Bool)arg2;
- (id)personLocalIdentifiersBySocialGroupUUIDWithSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(_Bool)arg2;
- (id)personNodeForPersonLocalIdentifier:(id)arg1;
- (id)momentNodesForPersonNodes:(id)arg1;
- (id)personNodesForSocialGroupNode:(id)arg1;
- (id)personNodesForPersonIdentifiers:(id)arg1;
- (id)assetCollectionsForPersonNodes:(id)arg1;
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1 withThreshold:(double)arg2;
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1;
- (_Bool)isBestPairSocialGroup:(id)arg1;
- (_Bool)isPairSocialGroup:(id)arg1;
- (_Bool)hasSocialGroups;
- (id)bestSocialGroupNodes;
- (id)sortedSocialGroupNodes;
- (id)socialGroupNodeForPersonNodes:(id)arg1;
- (id)inferredMeNode;
- (id)staticGraphSchema;
- (id)_createZeroKeywordMappingByMeaningLabel;
@property(readonly, nonatomic) NSDictionary *zeroKeywordMappingByMeaningLabel;
- (id)momentNodesConnectedToNode:(id)arg1;
- (void)performProcessingSteps:(id)arg1 withGraphUpdate:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)performPostprocessingWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)performPreprocessingWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)postprocessors;
- (id)preprocessors;
- (_Bool)exportMatchMomentEventResults:(id)arg1 relatedType:(unsigned long long)arg2 focusOnNodes:(id)arg3 toFileURL:(id)arg4 error:(id *)arg5;
- (id)_commonAreaNodesBetweenAddressAreaNodes:(id)arg1 andAddressNode:(id)arg2;
- (id)_commonAreaNodesBetweenAddressNode:(id)arg1 andAddressNode:(id)arg2;
- (id)_closestLocationNodeFromAddressNode:(id)arg1 toAddressNode:(id)arg2;
- (id)_firstLocationNodeFromAddressNode:(id)arg1 inLocationNodes:(id)arg2;
- (double)_distanceForLocationLabel:(id)arg1;
- (double)_relationshipScoreForPerson:(id)arg1;
- (double)_scoreForPlaceSubDomain:(unsigned short)arg1;
- (id)_coreSceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3;
- (id)_sceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3;
- (id)_sceneMatchingIdsToScoresFromEvent:(id)arg1;
- (id)_corePlaceMatchingIdsToScoresFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3;
- (id)_placeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3;
- (id)_placeMatchingIdsToScoresFromEvent:(id)arg1;
- (id)_coreEventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3;
- (id)_eventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3;
- (id)_eventMatchingIdsToScoresFromEvent:(id)arg1;
- (id)_coreLocationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3 focusOnNodes:(id)arg4;
- (id)_locationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3 focusOnNodes:(id)arg4;
- (id)_locationMatchingIdsToScoresFromEvent:(id)arg1 focusOnNodes:(id)arg2;
- (id)_timeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3 focusOnNodes:(id)arg4 needsFullTime:(_Bool)arg5;
- (id)_timeMatchingIdsToScoresFromEvent:(id)arg1 focusOnNodes:(id)arg2 needsFullTime:(_Bool)arg3;
- (id)_peopleMatchingResultFromEvent:(id)arg1 matchedEvent:(id)arg2 presentPeopleCountForEvent:(unsigned long long)arg3 presentPeopleCountForMatchedEvent:(unsigned long long)arg4 commonPeople:(id)arg5 needsKeywords:(_Bool)arg6;
- (id)_peopleMatchingFromEvent:(id)arg1 toEvent:(id)arg2 needsKeywords:(_Bool)arg3 focusOnNodes:(id)arg4;
- (unsigned long long)_peopleCountWithoutMe:(id)arg1 focusOnNodes:(id)arg2;
- (id)_peopleWithoutMe:(id)arg1 focusOnNodes:(id)arg2;
- (id)_peopleMatchingIdsToResultsFromEvent:(id)arg1 focusOnNodes:(id)arg2;
- (id)matchPeopleNodes:(id)arg1 sortDescriptors:(id)arg2;
- (id)matchEvent:(id)arg1 withEvent:(id)arg2 relatedType:(unsigned long long)arg3 focusOnNodes:(id)arg4 needsKeywords:(_Bool)arg5;
- (id)matchMomentEvent:(id)arg1 relatedType:(unsigned long long)arg2 focusOnNodes:(id)arg3 sortDescriptors:(id)arg4;
- (id)_dateIntervalForMomentNodes:(id)arg1;
- (id)interestingAreaNodes;
- (id)interestingCityNodes;
- (id)mainUrbanCityNodes;
- (id)_peopleSocialGraphWithLoops:(_Bool)arg1;
- (void)_randomWalkCommunityDetectionWithWeightThreshold:(float)arg1;
- (unsigned long long)_cluePeopleForRelationships:(id)arg1;
- (id)celebratedHolidays;
- (id)highlyInterestingMomentNodesForMomentNodes:(id)arg1;
- (id)highlyInterestingMomentNodes;
- (id)_momentNodesArraysWithTripMeaningNode:(id)arg1;
- (id)weekends;
- (id)trips;
- (id)_supersetsForLocalDateInterval:(id)arg1 intersectingMomentNodes:(id)arg2 earlyStop:(_Bool)arg3;
- (id)_locationNodesOfSupersetsWithLocationNodeLabel:(id)arg1;
- (id)supersetsForLocalDateInterval:(id)arg1;
- (id)supersetsForLocalDate:(id)arg1;
- (_Bool)supersetsIntersectMomentNodes:(id)arg1;
- (id)supersetsIntersectingMomentNodes:(id)arg1;
@property(readonly, nonatomic) NSSet *supersetLocales;
@property(readonly, nonatomic) NSSet *supersetCountryNodes;
@property(readonly, nonatomic) NSSet *supersetStateNodes;
@property(readonly, nonatomic) NSSet *supersetCountyNodes;
@property(readonly, nonatomic) NSSet *supersetCityNodes;
@property(readonly, nonatomic) NSSet *supersets;
- (void)_enumerateSocialGroupsIncludingMeNode:(_Bool)arg1 withValidGroupsBlock:(CDUnknownBlockType)arg2 invalidGroupsBlock:(CDUnknownBlockType)arg3 averageWeight:(out float *)arg4;
- (id)socialGroupsDebugStringIncludingMeNode:(_Bool)arg1;
- (void)enumerateSocialGroupsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePeopleClustersWithLinkage:(unsigned long long)arg1 threshold:(double)arg2 includingMeNode:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)enumeratePeopleClustersIncludingMeNode:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_clusterMoments:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 usingClusterIdentifierBlock:(CDUnknownBlockType)arg4;
- (id)_momentNodesUsedInClusters:(id)arg1;
- (id)_resolveConflictsBetweenClusters:(id)arg1 otherClusters:(id)arg2 strictly:(_Bool)arg3;
- (void)_createCollectionsForClusters:(id)arg1 withMeaning:(id)arg2;
- (id)_createAggregationsForMomentNodes:(id)arg1;
- (void)processMomentAggregationsForInsertedMomentNodes:(id)arg1 deletedMomentNodes:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)invalidateSupersetCaches;
- (void)invalidateProcessingCaches;
- (void)_enumerateCollectionNodesWithMeaningLabel:(id)arg1 visitedCollectionNodes:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)bestMeaningLabelForCollectionNode:(id)arg1;
- (id)preciseMeaningNodeForMeaningLabel:(id)arg1 collectionNode:(id)arg2;
- (id)preciseMeaningLabelForMeaningLabel:(id)arg1 collectionNode:(id)arg2;
- (void)enumerateMomentNodesWithMeaning:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)momentNodesWithMeaning:(unsigned long long)arg1;
- (void)enumerateMeaningsForCollectionNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)meaningsForCollectionNode:(id)arg1;
- (void)enumerateCollectionNodesWithMeaning:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)collectionNodesWithMeaning:(unsigned long long)arg1;
- (_Bool)collectionNodeIsStellar:(id)arg1;
- (_Bool)collectionNodeIsVeryMeaningful:(id)arg1;
- (id)insertMomentNodeForMoment:(id)arg1;
- (id)insertPublicEvent:(id)arg1 fromEventNode:(id)arg2;
- (id)hobbiesForType:(long long)arg1;
- (id)allHobbies;
- (void)updatePersonNode:(id)arg1 withPerson:(id)arg2 forPropertyNames:(id)arg3;
- (unsigned long long)_ageCategoryFromFaceAgeType:(unsigned short)arg1;
- (unsigned long long)_genderFromFaceGender:(unsigned short)arg1;
- (id)insertPersonNodeForPerson:(id)arg1 fromEventNode:(id)arg2 numberOfAssetsWithPerson:(unsigned long long)arg3 edgeWeight:(float)arg4;
- (id)insertPeopleWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 addressNodes:(id)arg3 isNearPeopleAddress:(_Bool *)arg4;
- (id)insertHomeWorkNodeForPerson:(id)arg1 personNode:(id)arg2 fromAddressNodes:(id)arg3;
- (void)_addRelationshipEdgesBetweenPersonNode:(id)arg1 andTargetNode:(id)arg2 forRelationship:(unsigned long long)arg3 confidence:(float)arg4 properties:(id)arg5;
- (void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andSocialGroupNode:(id)arg2 forRelationship:(unsigned long long)arg3 confidence:(float)arg4 properties:(id)arg5;
- (void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andPersonNode:(id)arg2 forRelationship:(unsigned long long)arg3 confidence:(float)arg4 properties:(id)arg5;
- (id)insertPersonNodeForPerson:(id)arg1;
- (id)_propertiesFromIngestPerson:(id)arg1 label:(id *)arg2;
- (void)_reportPublicEvents;
- (void)_reportBusinessItems;
- (void)_reportMePersonHomeWorkInfo;
- (void)_reportDisambiguatedLocations;
- (void)_reportMeaningfulEvents;
- (void)reportAGGDLogs;
- (id)_requiredSceneNodesToMatchForHolidayEventRule:(id)arg1;
- (_Bool)_isMatchingRequiredScenes:(id)arg1 withMomentNode:(id)arg2;
- (_Bool)_isMatchingRequiredScenes:(id)arg1 withMomentNodes:(id)arg2;
- (_Bool)_allRequiredRulesOfEventRule:(id)arg1 applyToLocalDate:(id)arg2 andAnyNodeFromMomentNodes:(id)arg3;
- (_Bool)_isInterestingForAnyNodeFromMomentNodes:(id)arg1;
- (void)_cacheEventRule:(id)arg1 isCelebrating:(_Bool)arg2;
- (void)invalidateIsCelebratingInGeneralCache;
- (id)celebratingMomentNodesForDateNode:(id)arg1 eventRule:(id)arg2;
- (_Bool)isCelebratingHolidayEventInGeneralForEventRule:(id)arg1;
- (id)allDatesForEventRule:(id)arg1 yearRange:(struct _NSRange)arg2;
- (id)allDatesForEventRule:(id)arg1;
- (id)insertPartOfDayNodeWithPartOfDayName:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3;
- (id)insertPartOfDayNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertDateNodesFromLocalStartDate:(id)arg1 toLocalEndDate:(id)arg2 fromEventNode:(id)arg3;
- (id)insertDateNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (void)_enumerateDateComponentsBetweenLocalStartDate:(id)arg1 andLocalEndDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)insertTimeNodesWithDateComponents:(id)arg1 fromEventNode:(id)arg2;
- (id)insertDateNodeHierarchyWithDateComponents:(id)arg1;

@end

