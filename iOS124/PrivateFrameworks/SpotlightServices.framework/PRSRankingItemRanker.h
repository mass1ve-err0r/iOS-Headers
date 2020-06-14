//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface PRSRankingItemRanker : NSObject
{
    _Bool _isInternalDevice;
    _Bool _policyDisabled;
    _Bool _isCancelled;
    _Bool _isCJK;
    float _lastIsSpaceFeature;
    NSString *_keyboardLanguage;
    NSString *_searchString;
    unsigned long long _queryTermCount;
    NSMapTable *_bundleFeatures;
    double _experimentalWeight1;
    double _experimentalWeight2;
    NSString *_meContactIdentifier;
}

+ (id)importantAttributesForBundle:(id)arg1;
+ (id)settingsBundle;
+ (id)appsBundle;
+ (id)musicBundle;
+ (id)calendarBundle;
+ (id)messagesBundle;
+ (id)notesBundle;
+ (id)mailBundle;
+ (void)setDockApps:(id)arg1;
+ (CDUnknownBlockType)shouldUpdateFuncForSnippetFeature:(unsigned long long)arg1;
+ (_Bool)isCJK;
+ (void)clearState;
+ (id)contactsBundle;
+ (id)sortedUniqueBundleFeatureValuesFromBundleFeatures:(id)arg1;
+ (id)requiredAttributes;
+ (void)initialize;
@property _Bool isCJK; // @synthesize isCJK=_isCJK;
@property _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) float lastIsSpaceFeature; // @synthesize lastIsSpaceFeature=_lastIsSpaceFeature;
@property(nonatomic) _Bool policyDisabled; // @synthesize policyDisabled=_policyDisabled;
@property(retain, nonatomic) NSString *meContactIdentifier; // @synthesize meContactIdentifier=_meContactIdentifier;
@property(nonatomic) double experimentalWeight2; // @synthesize experimentalWeight2=_experimentalWeight2;
@property(nonatomic) double experimentalWeight1; // @synthesize experimentalWeight1=_experimentalWeight1;
@property(retain, nonatomic) NSMapTable *bundleFeatures; // @synthesize bundleFeatures=_bundleFeatures;
@property _Bool isInternalDevice; // @synthesize isInternalDevice=_isInternalDevice;
@property unsigned long long queryTermCount; // @synthesize queryTermCount=_queryTermCount;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
- (void).cxx_destruct;
- (void)prepareItems:(id)arg1 inBundle:(id)arg2;
- (void)setRenderEngagementFeaturesForItem:(id)arg1 counts:(id)arg2 isRender:(_Bool)arg3 bundleDict:(id)arg4;
- (void)setRenderEngagementFeaturesForItemAsShorts:(id)arg1 counts:(short [6])arg2 isRender:(_Bool)arg3 bundleDict:(id)arg4;
- (void)resetbundleFeaturesScratchBuf:(float *)arg1;
- (CDUnknownBlockType)comparatorByJoiningComparator:(CDUnknownBlockType)arg1 withPredicate:(id)arg2;
- (_Bool)wasItemCreatedWithinAWeek:(id)arg1;
- (void)rerankItemsWithPolicyForBundleItems:(id)arg1 isCJK:(_Bool)arg2;
- (void)updateScoresForPreparedItems:(id)arg1 isCJK:(_Bool)arg2;
- (void)hackMusicResultsWithItem:(id)arg1 featureVector:(id)arg2;
- (float *)computeScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2;
- (void)computeRelativeFeatureForContext:(id)arg1 items:(id)arg2;
- (void)relevantResultSetPRSL2FeaturesFromBundleFeature:(unsigned long long)arg1 absRankFeatureOut:(unsigned short *)arg2 relRankFeatureOut:(unsigned short *)arg3;
- (void)populateMailContactFeaturesWithMailItems:(id)arg1 contactItems:(id)arg2;
- (void)computeResultSetDependantFeatures:(id)arg1 allItems:(id)arg2;
- (void)populateLocalResultSetDateFeaturesForItems:(id)arg1;
- (void)pickMostRecentDateForItem:(id)arg1 pastItems:(id *)arg2 futureItems:(id *)arg3;
- (void)updateResultSetFeaturesOnItems:(id)arg1 withContext:(struct _resultset_computation_ctx *)arg2 uniqueScores:(id)arg3;
- (void)populateRankResultSetBundleFeaturesWithBundleItems:(id)arg1 withUniqueBundleMaxScores:(id)arg2;
- (void)updateResultSetContext:(struct _resultset_computation_ctx *)arg1 andUniqueScores:(id)arg2 withResultSetItems:(id)arg3;
- (void)deactivate;
- (void)activate;
- (id)rankingConfigurationWithMeContact:(id)arg1 emailAddresses:(id)arg2 phoneFavorites:(id)arg3 vipList:(id)arg4 clientBundle:(id)arg5;
- (id)rankingConfiguration;
- (void)dealloc;
- (void)cancel;
- (id)initWithSearchString:(id)arg1 language:(id)arg2 isCJK:(_Bool)arg3 experimentalWeight1:(double)arg4 experimentalWeight2:(double)arg5;
- (id)initWithSearchString:(id)arg1 language:(id)arg2;
- (id)init;

@end

