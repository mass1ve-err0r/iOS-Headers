//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOPlaceDailyNormalizedHours : NSObject
{
    long long _weekday;
    NSArray *_localTimeIntervals;
    double _closingSoonThresholdSeconds;
    double _openingSoonThresholdSeconds;
    _Bool _openToMidnight;
    _Bool _openFromMidnight;
}

+ (long long)todaysWeekday:(long long)arg1 yesterdaysWeekday:(long long)arg2 containsTimeFromMidnight:(double)arg3 inNormalizedHours:(id)arg4;
+ (long long)getWeekdayForDate:(id)arg1 inNormalizedHours:(id)arg2 timeZone:(id)arg3;
+ (id)dailyNormalizedHoursForWeekday:(long long)arg1 timeIntervals:(id)arg2 closingThreshold:(double)arg3 openingThreshold:(double)arg4 openToMidnight:(_Bool)arg5 openFromMidnight:(_Bool)arg6;
@property(readonly) _Bool openFromMidnight; // @synthesize openFromMidnight=_openFromMidnight;
@property(readonly) _Bool openToMidnight; // @synthesize openToMidnight=_openToMidnight;
@property(nonatomic) double openingSoonThresholdSeconds; // @synthesize openingSoonThresholdSeconds=_openingSoonThresholdSeconds;
@property(nonatomic) double closingSoonThresholdSeconds; // @synthesize closingSoonThresholdSeconds=_closingSoonThresholdSeconds;
@property(readonly) NSArray *localTimeIntervals; // @synthesize localTimeIntervals=_localTimeIntervals;
@property(readonly) long long weekday; // @synthesize weekday=_weekday;
- (void).cxx_destruct;
- (id)description;

@end

