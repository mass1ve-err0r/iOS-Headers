//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RadiosPreferencesDelegate-Protocol.h"

@class CXCallObserver, NSTimer, RadiosPreferences;
@protocol CARDNDStateDelegate;

@interface CARDNDStateObserver : NSObject <RadiosPreferencesDelegate>
{
    int _screenLockNotifyToken;
    _Bool _connected;
    _Bool _hasRecentlyActivatedVoiceOver;
    Class _vehicleStateClass;
    RadiosPreferences *_radiosPreferences;
    id <CARDNDStateDelegate> _delegate;
    CXCallObserver *_callObserver;
    NSTimer *_vehicleStateCheckTimer;
}

+ (_Bool)observesVehicularReports;
@property(retain, nonatomic) NSTimer *vehicleStateCheckTimer; // @synthesize vehicleStateCheckTimer=_vehicleStateCheckTimer;
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
@property(nonatomic) _Bool hasRecentlyActivatedVoiceOver; // @synthesize hasRecentlyActivatedVoiceOver=_hasRecentlyActivatedVoiceOver;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) __weak id <CARDNDStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RadiosPreferences *radiosPreferences; // @synthesize radiosPreferences=_radiosPreferences;
@property(readonly, nonatomic) __weak Class vehicleStateClass; // @synthesize vehicleStateClass=_vehicleStateClass;
- (void).cxx_destruct;
- (void)_deviceLockStateChangedWithToken:(int)arg1;
- (void)_checkVehicleState;
- (void)airplaneModeChanged;
- (void)scheduleVehicleStateCheckWithDelay:(double)arg1;
- (void)setShouldObserveDeviceUnlocks:(_Bool)arg1;
@property(readonly, nonatomic, getter=isIdealTimeForBuddy) _Bool idealTimeForBuddy;
@property(readonly, nonatomic, getter=isVoiceOverEnabled) _Bool voiceOverEnabled;
@property(readonly, nonatomic, getter=isInLostMode) _Bool lostMode;
@property(readonly, nonatomic, getter=isInAirplaneMode) _Bool airplaneMode;
- (void)dealloc;
- (id)initWithRadiosPreferences:(id)arg1 vehicleStateClass:(Class)arg2;

@end

