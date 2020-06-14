//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSDate, NSTimeZone;

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding>
{
    struct SGUnixTimestamp_ _start;
    struct SGUnixTimestamp_ _end;
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
    _Bool _floating;
    long long _startUTCOffsetSeconds;
    long long _endUTCOffsetSeconds;
}

+ (_Bool)supportsSecureCoding;
+ (id)floatingRangeWithLocalStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;
+ (id)floatingRangeWithLocalStartDate:(id)arg1 endDate:(id)arg2;
+ (id)floatingRangeWithUTCStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;
+ (id)floatingRangeWithUTCStartDate:(id)arg1 endDate:(id)arg2;
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_)arg1 duration:(double)arg2;
+ (id)rangeWithStart:(struct SGUnixTimestamp_)arg1 duration:(double)arg2 timeZone:(id)arg3;
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;
+ (id)rangeWithStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2 timeZone:(id)arg3;
+ (id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4;
+ (id)rangeWithStart:(struct SGUnixTimestamp_)arg1 startTimeZone:(id)arg2 end:(struct SGUnixTimestamp_)arg3 endTimeZone:(id)arg4;
+ (id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2;
+ (_Bool)hasYearMonthDayComponents:(id)arg1;
+ (_Bool)isAllDayComponents:(id)arg1;
+ (id)dateFromGregorianComponents:(id)arg1;
+ (struct SGUnixTimestamp_)fromFloatingTime:(struct SGUnixTimestamp_)arg1;
+ (struct SGUnixTimestamp_)toFloatingTime:(struct SGUnixTimestamp_)arg1 withDSTAmbiguityPreferences:(id)arg2;
+ (struct SGUnixTimestamp_)toFloatingTime:(struct SGUnixTimestamp_)arg1;
@property(readonly, nonatomic, getter=isFloating) _Bool floating; // @synthesize floating=_floating;
@property(readonly, nonatomic) long long endUTCOffsetSeconds; // @synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds;
@property(readonly, nonatomic) long long startUTCOffsetSeconds; // @synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds;
@property(readonly, nonatomic) struct SGUnixTimestamp_ end; // @synthesize end=_end;
@property(readonly, nonatomic) struct SGUnixTimestamp_ start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToSimpleTimeRange:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyToEKEvent:(id)arg1 isAllDay:(_Bool)arg2 isFloating:(_Bool)arg3;
- (_Bool)startedMoreThan24HoursAgo;
- (_Bool)isValidAllDayRange;
- (id)endDateComponents;
- (id)startDateComponents;
- (id)_componentsForDate:(id)arg1 timeZone:(id)arg2;
@property(readonly, nonatomic) NSTimeZone *endTimeZone;
@property(readonly, nonatomic) NSTimeZone *startTimeZone;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)stableStringRepresentation;
- (id)absoluteRange;
- (id)initWithStart:(struct SGUnixTimestamp_)arg1 startUTCOffsetSeconds:(long long)arg2 end:(struct SGUnixTimestamp_)arg3 endUTCOffsetSeconds:(long long)arg4;
- (id)initUTCFloatingWithStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;

@end

