//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject
{
    NSTimer *_tzSupportDayRolloverTimer;
}

- (void).cxx_destruct;
- (void)invalidateTodayAndNotifyIfChanged;
- (_Bool)todayChangedAfterInvalidation;
- (void)_killTimeZoneTimer;
- (void)_setupTimeZoneTimer;
- (void)dealloc;
- (id)init;

@end

