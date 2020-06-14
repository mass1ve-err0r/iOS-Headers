//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol ABVCardTimeProvider;

@interface ABVCardWatchdogTimer : NSObject
{
    _Bool _valid;
    unsigned long long _ticks;
    id <ABVCardTimeProvider> _timeProvider;
    NSDate *_startTime;
}

+ (_Bool)shouldCheckTime;
+ (id)timerWithTimeProvider:(id)arg1;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) id <ABVCardTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(nonatomic) unsigned long long ticks; // @synthesize ticks=_ticks;
- (_Bool)isValid;
- (void)checkValidity;
- (_Bool)isStarted;
- (void)start;
- (void)dealloc;
- (id)initWithTimeProvider:(id)arg1;

@end

