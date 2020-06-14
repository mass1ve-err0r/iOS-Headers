//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (Additions)
+ (id)hf_dateByAddingYears:(long long)arg1 months:(long long)arg2 weeks:(long long)arg3 days:(long long)arg4 hours:(long long)arg5 minutes:(long long)arg6 seconds:(long long)arg7 nanoseconds:(long long)arg8 toDate:(id)arg9;
+ (id)hf_dateByAddingNanoseconds:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingSeconds:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMinutes:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingHours:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingDays:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingWeeks:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMonths:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingYears:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateBySubtractingComponents:(id)arg1 fromDate:(id)arg2 times:(long long)arg3;
+ (id)hf_dateByAddingComponents:(id)arg1 toDate:(id)arg2 times:(long long)arg3;
+ (id)ho_sharedTimeZone;
+ (id)ho_sharedCalendar;
- (_Bool)hf_isFirstHourOfDay;
- (_Bool)hf_isWithinOneSecondOfDate:(id)arg1;
- (_Bool)hf_isWithinOneMinuteOfDate:(id)arg1;
- (_Bool)hf_isWithinOneHourOfDate:(id)arg1;
- (_Bool)hf_isWithinInterval:(double)arg1 ofDate:(id)arg2;
- (id)hf_startOfSecond;
- (id)hf_startOfMinute;
- (id)hf_startOfHour;
- (id)hf_startOfDay;
@end

