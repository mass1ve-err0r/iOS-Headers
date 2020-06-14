//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXSpeechAssetMonitorHelper : NSObject
{
    double _lastVoiceAssetUpdateTime;
    struct __SCNetworkReachability *_reachability;
}

+ (id)sharedInstance;
- (void)clearCurrentVoicesAndRefreshTTSVoiceList;
- (void)_checkForAssetUpdatesNowAndNextWeek;
- (void)_monitorSpeechAssetChanges;
- (void)updateAvailableSpeechAssets;
- (void)_clientUpdateAvailableSpeechAssets;
- (void)_monitorForNetworkChanges;
- (void)_unregisterForReachabilityNotifications;
- (void)_registerForReachabilityNotifications;
- (_Bool)_areMobileAssetsPresent;
- (void)_checkClientForUpdates:(_Bool)arg1;
- (id)_speechAssetUpdaterClient;
- (id)speechAssetUpdaterClient;
- (id)init;

@end

