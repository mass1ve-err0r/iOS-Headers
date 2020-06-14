//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class HKActivityStatisticsChartPointSummary, HKUnit, NSArray, NSDate, NSNumber, NSString;

@interface HKActivityStatisticsChartPoint : NSObject <HKChartPoint>
{
    NSDate *_date;
    HKUnit *_unit;
    NSArray *_nodes;
    HKActivityStatisticsChartPointSummary *_summary;
    NSNumber *_totalActiveEnergyBurned;
    NSNumber *_moveGoalValue;
}

- (void).cxx_destruct;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
- (id)maxYValue;
- (id)minYValue;
- (id)yValue;
- (id)yValueForKey:(id)arg1;
- (id)userInfo;
- (id)allYValues;
- (double)_nodesCaloriesPercentDifference;
- (id)initWithNodes:(id)arg1 summary:(id)arg2 activityCache:(id)arg3 energyUnit:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

