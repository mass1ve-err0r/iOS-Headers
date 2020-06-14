//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/UNNotificationTrigger.h>

@class NSCalendar, NSDate, NSTimeZone;

@interface UNLegacyNotificationTrigger : UNNotificationTrigger
{
    int _remainingRepeatCount;
    int _totalRepeatCount;
    NSDate *_date;
    NSTimeZone *_timeZone;
    NSCalendar *_repeatCalendar;
    unsigned long long _repeatInterval;
}

+ (_Bool)supportsSecureCoding;
+ (id)triggerWithDate:(id)arg1 timeZone:(id)arg2 repeatInterval:(unsigned long long)arg3 repeatCalendar:(id)arg4;
+ (id)triggerWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6;
@property(nonatomic) unsigned long long repeatInterval; // @synthesize repeatInterval=_repeatInterval;
@property(nonatomic) int totalRepeatCount; // @synthesize totalRepeatCount=_totalRepeatCount;
@property(nonatomic) int remainingRepeatCount; // @synthesize remainingRepeatCount=_remainingRepeatCount;
@property(copy, nonatomic) NSCalendar *repeatCalendar; // @synthesize repeatCalendar=_repeatCalendar;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)_retroactiveTriggerHysteresis;
- (id)_nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 defaultTimeZone:(id)arg3;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (_Bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6;

@end

