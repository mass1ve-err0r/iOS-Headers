//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePrediction/CPMLStorageManager.h>

@interface CPMLNaiveBayesStorageManager : CPMLStorageManager
{
}

- (void)setCardinalityXGivenY:(unsigned long long)arg1 withY:(unsigned long long)arg2 cardinalityValue:(double)arg3;
- (void)setCountXGivenY:(unsigned long long)arg1 withX:(unsigned long long)arg2 withY:(unsigned long long)arg3 withValue:(double)arg4;
- (void)setCountY:(unsigned long long)arg1 withCount:(double)arg2;
- (void)setCountY:(double)arg1;
- (double)getCountXGivenYAndSetXCardinality:(unsigned long long)arg1 withX:(unsigned long long)arg2 withY:(unsigned long long)arg3 withCardinalityX:(double *)arg4;
- (double)getCountY:(unsigned long long)arg1;
- (double)getCountAndSetYCardinality:(double *)arg1;

@end

