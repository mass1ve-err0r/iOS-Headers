//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDHeartRateHistogramCalculator : NSObject
{
    struct HistogramState _histogramState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_negativeComponents:(id)arg1;
- (void)_initializeWideBucketDatesFromStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4;
- (double)_dateComponentsToInterval:(id)arg1;
- (_Bool)_isWideIntervalComponents:(id)arg1;
- (_Bool)validateDateSequenceForTesting:(id)arg1;
- (id)heartRateHistogramsWithUnit:(id)arg1;
- (void)addDataPoint:(double)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 histogramBucketAnchor:(double)arg5 histogramBucketSize:(double)arg6;

@end

