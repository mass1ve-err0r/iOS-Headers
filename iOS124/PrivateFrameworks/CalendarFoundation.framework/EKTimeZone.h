//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/NSCopying-Protocol.h>

@class NSString;

@interface EKTimeZone : NSObject <NSCopying>
{
    NSString *_name;
    void *_internal;
    long long _lastStart;
    long long _lastEnd;
    unsigned long long _lastIndex;
    double _offset;
}

+ (id)timeZoneWithNSTimeZone:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
- (void).cxx_destruct;
- (double)secondsFromGMT;
- (id)abbreviation;
- (id)abbreviationForAbsoluteTime:(double)arg1;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1;
- (double)secondsFromGMTForAbsoluteTime:(double)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)secondsFromGMTForDate:(id)arg1;
- (id)_abbreviationForIndex:(unsigned long long)arg1;
- (unsigned long long)_indexForAbsoluteTime:(double)arg1;
- (id)name;
- (id)NSTimeZone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOffset:(double)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;

@end

