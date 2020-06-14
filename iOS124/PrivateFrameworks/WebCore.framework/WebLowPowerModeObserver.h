//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebLowPowerModeObserver : NSObject
{
    _Bool _isLowPowerModeEnabled;
    struct LowPowerModeNotifier *_notifier;
}

@property(readonly, nonatomic) _Bool isLowPowerModeEnabled; // @synthesize isLowPowerModeEnabled=_isLowPowerModeEnabled;
@property(nonatomic) struct LowPowerModeNotifier *notifier; // @synthesize notifier=_notifier;
- (void)_didReceiveLowPowerModeChange;
- (void)dealloc;
- (id)initWithNotifier:(struct LowPowerModeNotifier *)arg1;

@end

