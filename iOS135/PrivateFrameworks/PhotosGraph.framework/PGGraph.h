/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraph : MAGraph {
    NSNumber * _canUseLocationDomain;
    bool  _canWrite;
    NSDate * _creationDate;
    unsigned long long  _curationAlgorithmsVersion;
    NSDateFormatter * _dateFormatter;
    bool  _didFetchRoutineInfo;
    CLSFocusPeopleCache * _focusPeopleIngestCache;
    NSString * _geoServiceProviderID;
    NSObject<OS_dispatch_queue> * _graphQueue;
    NSMutableDictionary * _highlightNodeByHighlightUUID;
    NSSet * _highlyInterestingMomentNodes;
    NSSet * _interestingCityNodes;
    NSMutableDictionary * _isCelebratingInGeneralCache;
    bool  _keepsExistingAssetCurationScores;
    NSString * _locale;
    PGManager * _manager;
    unsigned long long  _memoriesAlgorithmsVersion;
    PGMessageProfile * _messageProfile;
    NSMutableDictionary * _momentNodeByMomentUUID;
    long long  _numberOfBetterAssets;
    long long  _numberOfDefaultAssets;
    long long  _numberOfImprovedAssets;
    long long  _numberOfUtilityAssets;
    NSMutableDictionary * _personNodesByPersonID;
    double  _personalGoodAestheticsThreshold;
    double  _personalHighAestheticsThreshold;
    NSArray * _postprocessors;
    NSArray * _preprocessors;
    unsigned long long  _relatedAlgorithmsVersion;
    struct PGRoutineInfoStruct { 
        bool routineAvailable; 
        unsigned long long numberOfLocationsOfInterest; 
        unsigned long long numberOfVisits; 
        unsigned long long numberOfTimeMatches; 
        unsigned long long numberOfCloseByLocationMatches; 
        unsigned long long numberOfRemoteLocationMatches; 
        unsigned long long numberOfMatchRequests; 
        double pinningVisitsRatio; 
    }  _routineInfo;
    NSSet * _supersetCityNodes;
    NSSet * _supersetCountryNodes;
    NSSet * _supersetCountyNodes;
    NSSet * _supersetLocales;
    NSRecursiveLock * _supersetLock;
    NSSet * _supersetStateNodes;
    NSSet * _supersets;
    NSDictionary * _zeroKeywordMappingByMeaningLabel;
}

@property (nonatomic, readonly) NSSet *allMomentUUIDs;
@property (nonatomic) bool canUseLocationDomain;
@property bool canWrite;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) unsigned long long curationAlgorithmsVersion;
@property (nonatomic, readonly) NSDateFormatter *dateFormatter;
@property (nonatomic, retain) CLSFocusPeopleCache *focusPeopleIngestCache;
@property (nonatomic, retain) NSString *geoServiceProviderID;
@property (nonatomic, readonly) NSObject<OS_os_log> *graphLoggingConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> *graphQueue;
@property (nonatomic, readonly) NSObject<OS_os_log> *ingestLoggingConnection;
@property (readonly) bool isOnGraphQueue;
@property (nonatomic) bool keepsExistingAssetCurationScores;
@property (nonatomic, readonly) long long librarySizeRange;
@property (nonatomic, retain) NSString *locale;
@property PGManager *manager;
@property (nonatomic) unsigned long long memoriesAlgorithmsVersion;
@property (nonatomic, retain) PGMessageProfile *messageProfile;
@property (nonatomic, readonly) NSSet *musicSessions;
@property (readonly) bool needsRebuild;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic) long long numberOfBetterAssets;
@property (nonatomic) long long numberOfDefaultAssets;
@property (nonatomic) long long numberOfImprovedAssets;
@property (nonatomic) long long numberOfUtilityAssets;
@property (nonatomic) double personalGoodAestheticsThreshold;
@property (nonatomic) double personalHighAestheticsThreshold;
@property (nonatomic) unsigned long long relatedAlgorithmsVersion;
@property (nonatomic, readonly) NSObject<OS_os_log> *relatedLoggingConnection;
@property (nonatomic) struct PGRoutineInfoStruct { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; } routineInfo;
@property (nonatomic, readonly) NSSet *supersetCityNodes;
@property (nonatomic, readonly) NSSet *supersetCountryNodes;
@property (nonatomic, readonly) NSSet *supersetCountyNodes;
@property (nonatomic, readonly) NSSet *supersetLocales;
@property (nonatomic, readonly) NSSet *supersetStateNodes;
@property (nonatomic, readonly) NSSet *supersets;
@property (nonatomic, readonly) NSDictionary *zeroKeywordMappingByMeaningLabel;

+ (id)_closestRelationshipEdgeLabelForPerson:(id)arg1 andOtherPerson:(id)arg2;
+ (id)_findParentMeaningLabelForMeaningLabel:(id)arg1 inTree:(id)arg2 currentParent:(id)arg3;
+ (id)_graphNodePOILabelByPlaceType;
+ (bool)_hasMomentsForPersonIdentifiers:(id)arg1 inGraph:(id)arg2 photoLibrary:(id)arg3;
+ (long long)_librarySizeRangeForNumberOfAssets:(unsigned long long)arg1;
+ (id)_meaningLabelTree;
+ (id)_personClosestToMeBetweenPerson:(id)arg1 andOtherPerson:(id)arg2;
+ (id)_poiLabelForPOIType:(id)arg1;
+ (void)_traverseMeaningLabelsInTree:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)_traverseMeaningLabelsUsingBlock:(id /* block */)arg1;
+ (id)aggregateKeyByMeaningLabel;
+ (id)aggregateKeyByPublicEventCategoryLabel;
+ (id)allMeaningfulMeanings;
+ (id)assetPropertySetsForIngest;
+ (id)blacklistSceneBabyLabels;
+ (id)blacklistSceneLabelsForHobbyType:(long long)arg1;
+ (id)blacklistScenePetLabels;
+ (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)arg1 blacklisted:(bool)arg2;
+ (id)defaultMatchingSortDescriptors;
+ (Class)edgeClass;
+ (Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (id)frequentMeaningLabels;
+ (bool)graphExistsWithName:(id)arg1 parentDirectoryURL:(id)arg2;
+ (id)graphURLForName:(id)arg1 parentDirectoryURL:(id)arg2;
+ (id)lessMeaningfulMeanings;
+ (bool)location:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 isCloseToLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
+ (id)matchingBlasklistedSceneLabels;
+ (id)matchingWeightToDictionary;
+ (unsigned long long)meaningForMeaningLabel:(id)arg1;
+ (id)meaningLabelForMeaning:(unsigned long long)arg1;
+ (id)mostSignificantMeaningLabels;
+ (Class)nodeClass;
+ (Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (id)parentMeaningLabelForMeaningLabel:(id)arg1;
+ (id)sceneBabyLabels;
+ (id)sceneLabelsForHobbyType:(long long)arg1;
+ (id)scenePetLabels;
+ (id)socialGroupPeopleSortDescriptorForSocialGroupNode:(id)arg1;
+ (id)stellarMeanings;
+ (id)stringForMeaning:(unsigned long long)arg1;
+ (double)topTierAestheticScoreForRatio:(double)arg1 inPhotoLibrary:(id)arg2;
+ (void)traverseParentMeaningsForMeaningLabel:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)veryMeaningfulMeanings;

- (void).cxx_destruct;
- (bool)_allRequiredRulesOfEventRule:(id)arg1 applyToLocalDate:(id)arg2 andAnyNodeFromMomentNodes:(id)arg3;
- (struct CLLocationCoordinate2D { double x1; double x2; })_approximateCoordinateForLocationNode:(id)arg1;
- (void)_cacheEventRule:(id)arg1 isCelebrating:(bool)arg2;
- (double)_calculateScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andDistanceBlock:(id /* block */)arg3;
- (double)_calculateScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 referenceDistance:(double)arg3 andDistanceBlock:(id /* block */)arg4;
- (void)_checkCanRead;
- (void)_checkCanWrite;
- (id)_cleanUpMoments:(id)arg1;
- (id)_closestLocationNodeFromAddressNode:(id)arg1 toAddressNode:(id)arg2;
- (unsigned long long)_cluePeopleForRelationships:(id)arg1;
- (id)_commonAreaNodesBetweenAddressAreaNodes:(id)arg1 andAddressNode:(id)arg2;
- (id)_commonAreaNodesBetweenAddressNode:(id)arg1 andAddressNode:(id)arg2;
- (id)_commonNodeForLocationNode:(id)arg1 andLocationNode:(id)arg2;
- (id)_coreEventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_coreLocationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_corePlaceMatchingIdsToScoresFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_coreSceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (unsigned long long)_countOfDistinctSocialGroups:(id)arg1;
- (id)_createZeroKeywordMappingByMeaningLabel;
- (id)_dateIntervalForMomentNodes:(id)arg1;
- (id)_dayOfWeekNameForDate:(id)arg1;
- (void)_deleteMomentsWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (double)_densityScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andNumberOfAssets:(unsigned long long)arg3;
- (double)_distanceForLocationLabel:(id)arg1;
- (bool)_enumerateEventNodesForAssetCollection:(id)arg1 paddingTime:(double)arg2 error:(id*)arg3 enumerationBlock:(id /* block */)arg4;
- (void)_enumerateMeaningfulEventsWithMeaningLabel:(id)arg1 visitedMeaningfulEvents:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateMomentForMomentNode:(id)arg1 paddingTime:(double)arg2 enumerationBlock:(id /* block */)arg3;
- (void)_enumerateSocialGroupsIncludingMeNode:(bool)arg1 withValidGroupsBlock:(id /* block */)arg2 invalidGroupsBlock:(id /* block */)arg3 averageWeight:(out float*)arg4;
- (id)_eventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_eventMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_eventNodesForDateComponents:(id)arg1 error:(id*)arg2;
- (id)_eventsFromEvents:(id)arg1 withTargetDomain:(unsigned short)arg2;
- (id)_feederForInsertingAssetCollection:(id)arg1;
- (id)_firstLocationNodeFromAddressNode:(id)arg1 inLocationNodes:(id)arg2;
- (id)_fuzzyEventNodeLookupForAssetCollection:(id)arg1 error:(id*)arg2;
- (id)_fuzzyMomentLookupForMomentNode:(id)arg1 error:(id*)arg2;
- (id)_infoNode;
- (id)_insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 insertedAndUpdatedPersonNodes:(id*)arg3 progressBlock:(id /* block */)arg4;
- (void)_insertRoutineInfo;
- (bool)_isInterestingForAnyNodeFromMomentNodes:(id)arg1;
- (bool)_isMatchingRequiredScenes:(id)arg1 withMomentNode:(id)arg2;
- (bool)_isMatchingRequiredScenes:(id)arg1 withMomentNodes:(id)arg2;
- (id)_locationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_locationMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_locationNodesOfSupersetsWithLocationNodeLabel:(id)arg1;
- (bool)_locationNodesRepresentSameCity:(id)arg1;
- (double)_locationScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andLocationCoordinate:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg3;
- (id)_momentNodesFromPersonNodes:(id)arg1;
- (id)_mostVisitedLocationNodeForLocationNodes:(id)arg1;
- (id)_neighborsFromMomentNode:(id)arg1 count:(unsigned long long)arg2 locationRequired:(bool)arg3 minDayDuration:(unsigned long long)arg4 maxDayDuration:(unsigned long long)arg5;
- (id)_nodeForAssetCollection:(id)arg1 error:(id*)arg2;
- (unsigned long long)_peopleCountWithoutMe:(id)arg1 focusOnNodes:(id)arg2;
- (id)_peopleMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_peopleMatchingIdsToResultsFromEvent:(id)arg1 options:(id)arg2;
- (id)_peopleMatchingResultFromEvent:(id)arg1 matchedEvent:(id)arg2 presentPeopleCountForEvent:(unsigned long long)arg3 presentPeopleCountForMatchedEvent:(unsigned long long)arg4 commonPeople:(id)arg5 relationshipScoreCache:(id)arg6 needsKeywords:(bool)arg7;
- (double)_peopleScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andPeopleUUIDs:(id)arg3;
- (id)_peopleSocialGraphWithLoops:(bool)arg1;
- (id)_peopleUUIDsForMomentNode:(id)arg1;
- (id)_peopleWithoutMe:(id)arg1 focusOnNodes:(id)arg2;
- (id)_personNodeIntersectingSocialGroups:(id)arg1;
- (id)_placeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_placeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_previousSeasonForSeason:(id)arg1;
- (id)_propertiesFromIngestHighlight:(id)arg1;
- (void)_randomWalkCommunityDetectionWithWeightThreshold:(float)arg1;
- (void)_registerInsertedMomentNodes:(id)arg1 inGraphUpdate:(id)arg2;
- (double)_relationshipScoreForPerson:(id)arg1;
- (void)_reportBusinessItems;
- (void)_reportDisambiguatedLocations;
- (void)_reportMePersonHomeWorkInfo;
- (void)_reportMeaningfulEvents;
- (void)_reportPublicEvents;
- (id)_requiredSceneNodesToMatchForHolidayEventRule:(id)arg1;
- (id)_sceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_sceneMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (double)_scoreForPlaceSubDomain:(unsigned short)arg1;
- (bool)_shouldUpdateCurationScore:(double)arg1 withNewCurationScore:(double)arg2;
- (id)_socialGroupNodeForPersonNodes:(id)arg1 searchWithTolerance:(bool)arg2;
- (id)_strictEventNodeLookupForAssetCollection:(id)arg1 error:(id*)arg2;
- (id)_strictMomentLookupForMomentNode:(id)arg1;
- (id)_supersetsForLocalDateInterval:(id)arg1 intersectingMomentNodes:(id)arg2 earlyStop:(bool)arg3;
- (id)_timeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_timeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_userLocales;
- (long long)_uuidForPlacemark:(id)arg1 forNodeLabel:(id)arg2;
- (id)_validLocationNodeForLocationNode:(id)arg1 withLocationMask:(unsigned long long)arg2;
- (void)_writeCurationScoresToPhotosDatabase:(id)arg1;
- (void)_writeInteractionScoresToPhotosDatabase:(id)arg1;
- (void)addCurationScore:(double)arg1 forAsset:(id)arg2;
- (void)addInteractionScore:(float)arg1 forAsset:(id)arg2;
- (void)addMeaningToMeaningfulEventNode:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(bool)arg3;
- (id)addMomentNodeWithProperties:(id)arg1;
- (void)addParentMeaningHierarchyForMeaningNode:(id)arg1;
- (void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andPersonNode:(id)arg2 forRelationship:(unsigned long long)arg3 confidence:(float)arg4 properties:(id)arg5;
- (void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andSocialGroupNode:(id)arg2 forRelationship:(unsigned long long)arg3 confidence:(float)arg4 properties:(id)arg5;
- (id)aggregationHighlightTypeNode;
- (id)aggregationNodes;
- (id)allDatesForEventRule:(id)arg1;
- (id)allDatesForEventRule:(id)arg1 yearRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)allHobbies;
- (id)allMomentNodes;
- (id)allMomentUUIDs;
- (id)allPersonNodesExceptMeNode;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1;
- (id)allTimeYearsNodes;
- (id)allTripNodes;
- (id)assetCollectionsForPersonNodes:(id)arg1;
- (id)babyNodes;
- (id)bestFittingAreaNodeFromAreaNodes:(id)arg1;
- (id)bestMeaningLabelForMeaningfulEvent:(id)arg1;
- (id)bestSocialGroupNodes;
- (id)businessNodes;
- (void)cacheHighlightNode:(id)arg1 forHighlightUUID:(id)arg2 checkUnicity:(bool)arg3;
- (void)cacheMomentNode:(id)arg1 forMomentUUID:(id)arg2 checkUnicity:(bool)arg3;
- (id)cachedHighlightNodeForHighlightUUID:(id)arg1;
- (id)cachedMomentNodeForMomentUUID:(id)arg1;
- (bool)canUseLocationDomain;
- (bool)canWrite;
- (id)celebratedHolidayNodes;
- (id)celebratedHolidays;
- (id)celebratingMomentNodesForDateNode:(id)arg1 eventRule:(id)arg2;
- (id)children;
- (id)closestMomentNodeForLocalDate:(id)arg1;
- (id)commonLocationNodeForRelevantLocationNodes:(id)arg1 locationMask:(unsigned long long)arg2;
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1;
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1 withThreshold:(double)arg2;
- (void)computeAndStoreTopTierAestheticScore;
- (id)connectPublicEventNode:(id)arg1 withBusinessNode:(id)arg2;
- (id)coworkers;
- (id)creationDate;
- (unsigned long long)curationAlgorithmsVersion;
- (id)dateFormatter;
- (id)dateNodeForLocalDate:(id)arg1;
- (id)dateNodeNameWithLocalDate:(id)arg1;
- (id)dateNodesForLocalDateInterval:(id)arg1;
- (id)dateNodesForMonth:(long long)arg1;
- (id)dateNodesForWeekOfMonth:(long long)arg1;
- (id)dateNodesForWeekOfYear:(long long)arg1;
- (id)dateNodesForYear:(long long)arg1;
- (id)dateNodesIgnoringYearForLocalDate:(id)arg1;
- (id)dayHighlightNodes;
- (id)dayNodeForDay:(long long)arg1;
- (id)dayOfWeekNodeForDayOfWeek:(long long)arg1;
- (id)dayOfWeekNodes;
- (void)dealloc;
- (id)defaultHighlightNodes;
- (id)defaultHighlightTypeNode;
- (void)deleteHighlightsWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)deletePersonsWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)densestCloseLocationNodeFromLocationNode:(id)arg1 withDateInterval:(id)arg2 locationMask:(unsigned long long)arg3;
- (void)enumerateAreaNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateBabyNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateBusinessNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateCelebratedHolidayNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateDateComponentsBetweenLocalStartDate:(id)arg1 andLocalEndDate:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateMeaningfulEventsWithMeaning:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateMeaningsFromMeaningfulEvent:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateMomentNodesWithBlock:(id /* block */)arg1;
- (void)enumerateMomentNodesWithMeaning:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateMusicSessionNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePeopleClustersIncludingMeNode:(bool)arg1 withBlock:(id /* block */)arg2;
- (void)enumeratePeopleClustersWithLinkage:(unsigned long long)arg1 threshold:(double)arg2 includingMeNode:(bool)arg3 withBlock:(id /* block */)arg4;
- (void)enumeratePetNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePublicEventNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateSocialGroupsWithBlock:(id /* block */)arg1;
- (bool)eventIsStellar:(id)arg1;
- (bool)eventIsVeryMeaningful:(id)arg1;
- (id)eventNodeForAssetCollection:(id)arg1;
- (bool)exportMatchMomentEventResults:(id)arg1 relatedType:(unsigned long long)arg2 focusOnNodes:(id)arg3 toFileURL:(id)arg4 error:(id*)arg5;
- (id)familyMembers;
- (id)focusPeopleIngestCache;
- (id)friends;
- (id)geoServiceProviderID;
- (id)graphLoggingConnection;
- (id)graphQueue;
- (bool)hasSocialGroups;
- (id)highlightForHighlightNode:(id)arg1;
- (id)highlightNodeForHighlight:(id)arg1;
- (id)highlightNodeForHighlightUUID:(id)arg1;
- (id)highlyInterestingMomentNodes;
- (id)highlyInterestingMomentNodesForMomentNodes:(id)arg1;
- (id)hobbiesForType:(long long)arg1;
- (id)inferredMeNode;
- (id)ingestLoggingConnection;
- (id)init;
- (id)initWithURL:(id)arg1 persistenceOptions:(long long)arg2 progressBlock:(id /* block */)arg3;
- (id)insertAddressNodeWithPlacemark:(id)arg1 location:(id)arg2 weight:(float)arg3 duringDateInterval:(id)arg4 fromEventNode:(id)arg5;
- (id)insertAddressNodeWithProjectedPlacemark:(id)arg1 atEventLocation:(id)arg2 usingImprovedPlacemark:(bool)arg3;
- (void)insertAreasOfInterestForProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2;
- (void)insertAssetCurationScoreInLibraryForFeeder:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)insertBaby:(id)arg1;
- (id)insertBusiness:(id)arg1 fromEventNode:(id)arg2;
- (id)insertContactSuggestion:(id)arg1 forPersonNode:(id)arg2 confidence:(double)arg3 edgeProperties:(id)arg4;
- (id)insertDateNodeHierarchyWithDateComponents:(id)arg1;
- (id)insertDateNodesFromEventNode:(id)arg1;
- (id)insertDateNodesFromLocalStartDate:(id)arg1 toLocalEndDate:(id)arg2 fromEventNode:(id)arg3;
- (id)insertDateNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (void)insertHighlightDayGroupsWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)insertHighlightDaysWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)insertHighlightGroupNodeWithHighlight:(id)arg1;
- (id)insertHighlightNodeWithHighlight:(id)arg1;
- (void)insertHighlightsWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)insertHomeWorkNodeForPerson:(id)arg1 personNode:(id)arg2 fromAddressNodes:(id)arg3;
- (id)insertLocationHierarchyWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (void)insertLocationHierarchyWithProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2;
- (id)insertLocationMobilityNodeWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertLocationMobilityNodeWithMobility:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3;
- (id)insertMePersonNodeForPerson:(id)arg1;
- (id)insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)insertMomentNodeForMoment:(id)arg1;
- (void)insertMomentsWithGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (id)insertMusicAlbumNodeWithAlbumTitle:(id)arg1;
- (id)insertMusicGenreNodeWithGenreName:(id)arg1;
- (id)insertMusicSessionNodeWithLocalStartDate:(id)arg1 localEndDate:(id)arg2;
- (id)insertMusicTrackWithTrackTitle:(id)arg1 durationInSeconds:(id)arg2;
- (id)insertPOINodeWithPlace:(id)arg1 fromEventNode:(id)arg2 hasInsertedSpecialPOIAmusementParkNode:(bool)arg3;
- (id)insertPOIWithFeeder:(id)arg1 fromMomentNode:(id)arg2 isNearHomeOrWork:(bool)arg3;
- (id)insertPartOfDayNodeWithPartOfDayName:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3;
- (id)insertPartOfDayNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertPeopleWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 addressNodes:(id)arg3 isNearPeopleAddress:(bool*)arg4;
- (id)insertPersonNodeForPerson:(id)arg1;
- (id)insertPersonNodeForPerson:(id)arg1 fromEventNode:(id)arg2 numberOfAssetsWithPerson:(unsigned long long)arg3 edgeWeight:(float)arg4;
- (id)insertPet:(id)arg1;
- (id)insertPublicEvent:(id)arg1 fromEventNode:(id)arg2;
- (id)insertROINodeWithPlace:(id)arg1 fromEventNode:(id)arg2;
- (id)insertROIWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertSceneNodeWithScene:(id)arg1 fromEventNode:(id)arg2;
- (id)insertSceneNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertSpecialPOIAmusementParkNodeFromMomentNode:(id)arg1;
- (id)insertTimeNodesWithDateComponents:(id)arg1 fromEventNode:(id)arg2;
- (id)interestingAreaNodes;
- (id)interestingCityNodes;
- (void)invalidateIsCelebratingInGeneralCache;
- (void)invalidateMemoryCaches;
- (void)invalidateProcessingCaches;
- (void)invalidateSupersetCaches;
- (bool)isBestPairSocialGroup:(id)arg1;
- (bool)isCelebratingHolidayEventInGeneralForEventRule:(id)arg1;
- (bool)isOnGraphQueue;
- (bool)isPairSocialGroup:(id)arg1;
- (bool)keepsExistingAssetCurationScores;
- (id)largeFrequentLocationNodes;
- (long long)libraryAge;
- (double)libraryDuration;
- (long long)librarySizeRange;
- (id)localDatesForMomentNode:(id)arg1;
- (id)locale;
- (id)longTripHighlightTypeNode;
- (id)longTripNodes;
- (id)mainUrbanCityNodes;
- (id)manager;
- (id)matchEvent:(id)arg1 options:(id)arg2;
- (id)matchEvent:(id)arg1 withEvent:(id)arg2 options:(id)arg3;
- (id)matchPeopleNodes:(id)arg1 sortDescriptors:(id)arg2;
- (id)maximalSocialGroupsForPersonIdentifiers:(id)arg1;
- (id)meNode;
- (id)meaningfulEventNodeForUUID:(id)arg1;
- (id)meaningfulEvents;
- (id)meaningfulMomentNodesSortedByDate;
- (id)meaningsFromMeaningfulEvent:(id)arg1;
- (unsigned long long)memoriesAlgorithmsVersion;
- (id)messageProfile;
- (id)momentForMomentNode:(id)arg1;
- (id)momentNodeForAsset:(id)arg1;
- (id)momentNodeForMoment:(id)arg1;
- (id)momentNodeForMomentUUID:(id)arg1;
- (id)momentNodeForUUID:(id)arg1;
- (id)momentNodes;
- (id)momentNodesConnectedToNode:(id)arg1;
- (id)momentNodesForDateNode:(id)arg1;
- (id)momentNodesForLocalDate:(id)arg1;
- (id)momentNodesForMomentIdentifiers:(id)arg1;
- (id)momentNodesForMoments:(id)arg1;
- (id)momentNodesForPersonNodes:(id)arg1;
- (id)momentNodesIgnoringYearForLocalDate:(id)arg1;
- (id)momentNodesOverlappingLocalDateInterval:(id)arg1;
- (id)momentNodesSortedByDate;
- (id)momentNodesSortedByDateFromMomentNodes:(id)arg1;
- (id)momentNodesWithMeaning:(unsigned long long)arg1;
- (id)momentsForMomentNodes:(id)arg1 sortChronologically:(bool)arg2;
- (id)momentsResultForMomentNodes:(id)arg1 sortChronologically:(bool)arg2;
- (id)monthNodeForMonth:(long long)arg1;
- (id)musicGenreDistributionUsingTaggedGenres:(bool)arg1;
- (id)musicSessions;
- (bool)needsRebuild;
- (double)neighborScoreForLocalDate:(id)arg1;
- (double)neighborScoreForMomentNode:(id)arg1;
- (id)nodeLabelForHighlightType:(unsigned short)arg1;
- (id)nodesForHighlightsInHighlightDayGroup:(id)arg1;
- (id)nodesForMomentsInHighlight:(id)arg1;
- (unsigned long long)numberOfAssets;
- (long long)numberOfBetterAssets;
- (long long)numberOfDefaultAssets;
- (long long)numberOfImprovedAssets;
- (unsigned long long)numberOfMomentNodes;
- (long long)numberOfUtilityAssets;
- (id)onGoingTripHighlightTypeNode;
- (id)onGoingTripNodes;
- (id)parents;
- (id)partners;
- (void)performBatchUpdatesWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)performChangeForGraphUpdate:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)performPostprocessingWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)performPreprocessingWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)performProcessingSteps:(id)arg1 withGraphUpdate:(id)arg2 progressBlock:(id /* block */)arg3;
- (id)personLocalIdentifiersBySocialGroupUUIDWithSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(bool)arg2;
- (id)personNodeForPersonLocalIdentifier:(id)arg1;
- (id)personNodesForPersonIdentifiers:(id)arg1;
- (id)personNodesForSocialGroupNode:(id)arg1;
- (double)personalGoodAestheticsThreshold;
- (double)personalHighAestheticsThreshold;
- (id)petNodes;
- (id)preciseMeaningLabelForMeaningLabel:(id)arg1 meaningfulEvent:(id)arg2;
- (id)preciseMeaningNodeForMeaningLabel:(id)arg1 meaningfulEvent:(id)arg2;
- (void)prepareForRebuild;
- (id)previousSeasonNodeForSeasonNode:(id)arg1;
- (unsigned long long)relatedAlgorithmsVersion;
- (id)relatedLoggingConnection;
- (id)relevantAddressNodesForMomentNodes:(id)arg1;
- (id)relevantLocationNodesForMomentNodes:(id)arg1;
- (void)reportAGGDLogs;
- (struct PGRoutineInfoStruct { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; })routineInfo;
- (double)routineScoreForLocalDate:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 andPeopleUUIDs:(id)arg4;
- (void)saveNumberOfAssetsToInfoNode;
- (bool)saveToURL:(id)arg1;
- (id)sceneNodeForSceneName:(id)arg1;
- (id)sceneNodesForSceneNames:(id)arg1;
- (id)searchNodesForAsset:(id)arg1 inMoment:(id)arg2;
- (id)seasonNodeForLocalDate:(id)arg1;
- (id)seasonNodes;
- (void)setCanUseLocationDomain:(bool)arg1;
- (void)setCanWrite:(bool)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCurationAlgorithmsVersion:(unsigned long long)arg1;
- (void)setFocusPeopleIngestCache:(id)arg1;
- (void)setGeoServiceProviderID:(id)arg1;
- (void)setGraphQueue:(id)arg1;
- (void)setKeepsExistingAssetCurationScores:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setMemoriesAlgorithmsVersion:(unsigned long long)arg1;
- (void)setMessageProfile:(id)arg1;
- (void)setNumberOfBetterAssets:(long long)arg1;
- (void)setNumberOfDefaultAssets:(long long)arg1;
- (void)setNumberOfImprovedAssets:(long long)arg1;
- (void)setNumberOfUtilityAssets:(long long)arg1;
- (void)setPersonalGoodAestheticsThreshold:(double)arg1;
- (void)setPersonalHighAestheticsThreshold:(double)arg1;
- (void)setRelatedAlgorithmsVersion:(unsigned long long)arg1;
- (void)setRoutineInfo:(struct PGRoutineInfoStruct { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; })arg1;
- (id)shortTripHighlightTypeNode;
- (id)shortTripNodes;
- (id)socialGroupNodeForPersonNodes:(id)arg1;
- (id)socialGroupsDebugStringIncludingMeNode:(bool)arg1;
- (id)socialGroupsForPersonIdentifiers:(id)arg1;
- (id)socialGroupsIdentifiersFromSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(bool)arg2;
- (id)sortedSocialGroupNodes;
- (id)staticGraphSchema;
- (id)supersetCityNodes;
- (id)supersetCountryNodes;
- (id)supersetCountyNodes;
- (id)supersetLocales;
- (id)supersetStateNodes;
- (id)supersets;
- (id)supersetsForLocalDate:(id)arg1;
- (id)supersetsForLocalDateInterval:(id)arg1;
- (bool)supersetsIntersectMomentNodes:(id)arg1;
- (id)supersetsIntersectingMomentNodes:(id)arg1;
- (double)topTierAestheticScore;
- (double)topTierAestheticScoreForTripKeyAsset;
- (id)trips;
- (void)uncacheHighlightNodeForHighlightUUID:(id)arg1 checkExistence:(bool)arg2;
- (void)uncacheHighlightNodesForHighlightUUIDs:(id)arg1;
- (void)uncacheMomentNodeForMomentUUID:(id)arg1 checkExistence:(bool)arg2;
- (void)uncacheMomentNodesForMomentUUIDs:(id)arg1;
- (void)unloadMessageProfile;
- (void)updateHighlightNode:(id)arg1 withHighlight:(id)arg2;
- (void)updateHighlightsForHighlightDayGroupNode:(id)arg1 withHighlightDayGroup:(id)arg2;
- (void)updateMomentsForHighlightNode:(id)arg1 withHighlight:(id)arg2;
- (void)updatePersonNode:(id)arg1 withPerson:(id)arg2 forPropertyNames:(id)arg3;
- (id)weekends;
- (void)writePendingScoresToPhotosDatabase;
- (id)yearNodeForYear:(long long)arg1;
- (id)zeroKeywordMappingByMeaningLabel;

@end