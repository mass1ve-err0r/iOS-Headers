//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class HKUnit, NSDateComponents, NSString;

@interface HKInteractiveChartSinglePointData : NSObject <HKGraphSeriesChartData>
{
    _Bool _representsRange;
    double _value;
    HKUnit *_unit;
    long long _recordCount;
    double _minValue;
    double _maxValue;
    NSDateComponents *_statisticsInterval;
}

@property(retain, nonatomic) NSDateComponents *statisticsInterval; // @synthesize statisticsInterval=_statisticsInterval;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) long long recordCount; // @synthesize recordCount=_recordCount;
@property(nonatomic) _Bool representsRange; // @synthesize representsRange=_representsRange;
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(nonatomic) double value; // @synthesize value=_value;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

