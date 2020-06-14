//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSObject;
@protocol OS_dispatch_queue;

@interface HMFPowerManager : HMFObject
{
    HMFUnfairLock *_lock;
    _Bool _hasBattery;
    _Bool _running;
    float _batteryLevel;
    unsigned int _interestNotification;
    long long _batteryState;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct IONotificationPort *_notificationPort;
}

+ (id)sharedManager;
@property(readonly, nonatomic) struct IONotificationPort *notificationPort; // @synthesize notificationPort=_notificationPort;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) _Bool hasBattery; // @synthesize hasBattery=_hasBattery;
@property(readonly, nonatomic) unsigned int interestNotification; // @synthesize interestNotification=_interestNotification;
- (void).cxx_destruct;
- (void)_deregisterForPowerSourceNotifications:(_Bool)arg1;
- (void)_registerForPowerSourceNotifications;
- (void)updateBatteryState:(unsigned int)arg1;
@property(readonly) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly) long long batteryState; // @synthesize batteryState=_batteryState;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

