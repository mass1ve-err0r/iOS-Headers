//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKValueRange;

@interface HKChartPointRangeBuilder : NSObject
{
    double _uMax;
    double _uMin;
    double _vMax;
    double _vMin;
    double _maximumMax;
    double _minimumMin;
    long long _numChartPoints;
}

@property(nonatomic) long long numChartPoints; // @synthesize numChartPoints=_numChartPoints;
@property(nonatomic) double minimumMin; // @synthesize minimumMin=_minimumMin;
@property(nonatomic) double maximumMax; // @synthesize maximumMax=_maximumMax;
@property(nonatomic) double vMin; // @synthesize vMin=_vMin;
@property(nonatomic) double vMax; // @synthesize vMax=_vMax;
@property(nonatomic) double uMin; // @synthesize uMin=_uMin;
@property(nonatomic) double uMax; // @synthesize uMax=_uMax;
- (void)visitChartPoint:(id)arg1;
@property(readonly, nonatomic) HKValueRange *suggestedValueRange;
- (id)init;

@end

