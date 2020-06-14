//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKQuantityType, HKUnitPreferenceController;

@interface HKQuantityTypeDataSource : HKHealthQueryChartCacheDataSource
{
    CDUnknownBlockType _mappingFunction;
    unsigned long long _statisticsOptions;
    HKUnitPreferenceController *_unitController;
    CDUnknownBlockType _userInfoCreationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) unsigned long long statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
- (void).cxx_destruct;
- (id)_defaultQueriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_averageByInterval:(id)arg1 startDate:(id)arg2 statistics:(id)arg3;
- (id)_dailyAverageQueriesWithStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_createMappingFunction;
- (CDUnknownBlockType)mappingFunctionForContext:(id)arg1;
@property(readonly, nonatomic) HKQuantityType *quantityType;
- (id)initWithUnitController:(id)arg1 options:(unsigned long long)arg2 displayType:(id)arg3 healthStore:(id)arg4;

@end

