//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (RTExtensions)
+ (id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;
+ (id)dateWithResolution:(unsigned long long)arg1 calendar:(id)arg2;
+ (id)dateWithResolution:(unsigned long long)arg1;
+ (id)dateFormatter;
+ (id)stringFromTimestamp:(double)arg1;
+ (id)endOfDay;
+ (id)startOfDay;
- (id)dateByRoundingWithTimeQuantization:(long long)arg1;
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)dateReducedToResolution:(unsigned long long)arg1 calendar:(id)arg2;
- (id)dateReducedToResolution:(unsigned long long)arg1;
- (id)stringFromDate;
- (id)weekdayStringFromDate;
- (long long)weekday;
- (unsigned long long)minute;
- (unsigned long long)hour;
- (id)endOfDay;
- (id)startOfDay;
- (id)dateOfTimestampForCurrentCalendar;
- (id)dateOfTimestampForCalendar:(id)arg1;
- (_Bool)isOnOrAfter:(id)arg1;
- (_Bool)isAfterDate:(id)arg1;
- (_Bool)isOnOrBefore:(id)arg1;
- (_Bool)isBeforeDate:(id)arg1;
- (_Bool)betweenDate:(id)arg1 andDate:(id)arg2;
@end

