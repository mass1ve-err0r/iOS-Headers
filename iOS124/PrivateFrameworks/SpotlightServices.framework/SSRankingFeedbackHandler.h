//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SSRankingFeedbackHandler : NSObject
{
    NSMutableDictionary *_mapProtectionClassToBundleIdToItem;
    NSMutableArray *_sectionCSItems;
    NSObject<OS_dispatch_queue> *_countQueue;
}

+ (id)getRenderEngagementCounts;
+ (id)sharedInstance;
@property(retain) NSObject<OS_dispatch_queue> *countQueue; // @synthesize countQueue=_countQueue;
@property(retain) NSMutableArray *sectionCSItems; // @synthesize sectionCSItems=_sectionCSItems;
@property(retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem; // @synthesize mapProtectionClassToBundleIdToItem=_mapProtectionClassToBundleIdToItem;
- (void).cxx_destruct;
- (void)writeRenderAndEngagementInfo;
- (void)fetchBundleRenderAndEngagementInfo;
- (void)resultsWithRankingItemsDidBecomeVisible:(id)arg1 date:(id)arg2 protectionClassMapping:(id)arg3;
- (void)didEngageResultWithRankingItem:(id)arg1 startDate:(id)arg2 protectionClass:(id)arg3;
- (void)_indexItemWithIdentifier:(id)arg1 bundleID:(id)arg2 startDate:(id)arg3 pc:(id)arg4;
- (id)init;
- (void)stressTestCounts;
- (void)testCountsForRegularEngagement;
- (void)testForDummyEntry;
- (void)testCountsMovingCoupleOfYearsInPast;
- (void)testCountsMovingYearInPast;
- (void)testCountsMovingDaysInPast;
- (void)testCountsAfterCoupleYears;
- (void)testCountsAfterYear;
- (void)testCountsUptoYear;
- (void)testCountsUptoHalfYear;
- (void)testCountsUptoQuarter;
- (void)testCountsUptoMonth;
- (void)testCountsUptoWeek;
- (void)testCountsUptoOneDay;
- (void)testForDurationWithIntervals:(int *)arg1 maxIndex:(int)arg2 duration:(long long)arg3 counts:(id)arg4;
- (id)getSyntheticTestRankingItemsForStressTest;
- (id)getSyntheticTestRankingItem;
- (void)resetResultWithRankingItems:(id)arg1;
- (id)fetchResults;

@end

