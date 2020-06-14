//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate
{
    unsigned long long refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    void *_reserved;
}

+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
+ (id)calendarDate;
+ (id)distantPast;
+ (id)distantFuture;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3;
- (id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)addTimeInterval:(double)arg1;
- (void)years:(long long *)arg1 months:(long long *)arg2 days:(long long *)arg3 hours:(long long *)arg4 minutes:(long long *)arg5 seconds:(long long *)arg6 sinceDate:(id)arg7;
- (id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6;
- (long long)microsecondOfSecond;
- (long long)secondOfMinute;
- (long long)minuteOfHour;
- (long long)hourOfDay;
- (long long)dayOfYear;
- (long long)dayOfWeek;
- (long long)dayOfMonth;
- (long long)monthOfYear;
- (long long)yearOfCommonEra;
- (long long)dayOfCommonEra;
- (void)setCalendarFormat:(id)arg1;
- (id)calendarFormat;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (id)timeZoneDetail;
- (double)timeIntervalSinceReferenceDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
- (id)init;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (oneway void)release;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

