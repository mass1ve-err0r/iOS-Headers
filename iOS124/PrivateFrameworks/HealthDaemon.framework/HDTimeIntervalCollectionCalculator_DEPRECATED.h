//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCollectionCalculator_DEPRECATED.h>

@class NSMutableArray;

@interface HDTimeIntervalCollectionCalculator_DEPRECATED : HDCollectionCalculator_DEPRECATED
{
    NSMutableArray *_timePeriods;
}

- (void).cxx_destruct;
- (double)totalDuration;
- (void)_shortenRangesConsideringPreferredSourceValue:(id)arg1 lesserRange:(id)arg2;
- (void)addTimePeriodWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)initForSingleStatistics;

@end

