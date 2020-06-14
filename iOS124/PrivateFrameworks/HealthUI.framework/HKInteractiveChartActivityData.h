//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class HKActivitySummary, NSString;

@interface HKInteractiveChartActivityData : NSObject <HKGraphSeriesChartData>
{
    HKActivitySummary *_activitySummaryData;
    long long _activityValue;
}

@property(nonatomic) long long activityValue; // @synthesize activityValue=_activityValue;
@property(retain, nonatomic) HKActivitySummary *activitySummaryData; // @synthesize activitySummaryData=_activitySummaryData;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool activityValueGoalMet;
@property(readonly, nonatomic) _Bool hasActivityGoal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

