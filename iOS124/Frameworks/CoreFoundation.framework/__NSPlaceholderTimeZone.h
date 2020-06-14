//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTimeZone.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderTimeZone : NSTimeZone
{
}

+ (id)immutablePlaceholder;
+ (void)initialize;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (_Bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (long long)secondsFromGMTForDate:(id)arg1;
- (id)data;
- (id)name;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)__initWithName:(id)arg1 cache:(_Bool)arg2;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (id)__initWithName:(id)arg1 data:(id)arg2 cache:(_Bool)arg3;

@end

