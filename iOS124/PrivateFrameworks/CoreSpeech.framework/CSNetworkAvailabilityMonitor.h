//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSNetworkAvailabilityMonitor : CSEventMonitor
{
    int _notifyToken;
}

+ (id)sharedInstance;
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(_Bool)arg2;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(_Bool)arg1;
- (void)_availabilityChanged;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)isAvailable;
- (id)init;

@end

