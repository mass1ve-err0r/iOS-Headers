//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FMDUIFMIPSettingsCache : NSObject
{
    _Bool _fmipStateAvailable;
    _Bool _lowBatteryLocateStateAvailable;
    _Bool _lowBatteryLocateEnabled;
    unsigned long long _fmipState;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool lowBatteryLocateEnabled; // @synthesize lowBatteryLocateEnabled=_lowBatteryLocateEnabled;
@property(nonatomic) _Bool lowBatteryLocateStateAvailable; // @synthesize lowBatteryLocateStateAvailable=_lowBatteryLocateStateAvailable;
@property(nonatomic) unsigned long long fmipState; // @synthesize fmipState=_fmipState;
@property(nonatomic) _Bool fmipStateAvailable; // @synthesize fmipStateAvailable=_fmipStateAvailable;
- (void)_loadFMIPState;
- (void)_loadLowBatteryState;
@property(readonly, nonatomic) _Bool fmipStateChangeInProgress;
@property(readonly, nonatomic) _Bool fmipEnabled;
- (id)init;

@end

