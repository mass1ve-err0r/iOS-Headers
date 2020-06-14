//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/MSMediaStreamDaemon.h>

#import "APSConnectionDelegate-Protocol.h"
#import "MSDaemonProtocols-Protocol.h"
#import "MSPauseManagerDelegate-Protocol.h"
#import "MSPowerBudgetDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class APSConnection, MSPowerAssertionManager, NSMutableDictionary, NSString, NSXPCListener;

@interface MSIOSMediaStreamDaemon : MSMediaStreamDaemon <MSPowerBudgetDelegate, APSConnectionDelegate, MSPauseManagerDelegate, NSXPCListenerDelegate, MSDaemonProtocols>
{
    NSXPCListener *_center;
    NSXPCListener *_noWakeCenter;
    APSConnection *_prodAPSConnection;
    APSConnection *_devAPSConnection;
    MSPowerAssertionManager *_powerAssertionManager;
    NSMutableDictionary *_personIDToPowerBudgetPersistedValuesMap;
    NSMutableDictionary *_personIDToPowerBudgetMap;
}

@property(retain, nonatomic) NSMutableDictionary *personIDToPowerBudgetMap; // @synthesize personIDToPowerBudgetMap=_personIDToPowerBudgetMap;
@property(retain, nonatomic) NSMutableDictionary *personIDToPowerBudgetPersistedValuesMap; // @synthesize personIDToPowerBudgetPersistedValuesMap=_personIDToPowerBudgetPersistedValuesMap;
- (void).cxx_destruct;
- (_Bool)mayDownloadPersonID:(id)arg1;
- (void)didReceivePushNotificationForPersonID:(id)arg1;
- (void)didEndForegroundFocusForPersonID:(id)arg1;
- (void)didBeginForegroundFocusForPersonID:(id)arg1;
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (void)MSPowerBudgetGotSignificantEvent:(id)arg1;
- (void)MSPowerBudget:(id)arg1 didRequestStorageOfPersistedValues:(id)arg2;
- (id)MSPowerBudgetDidRequestPersistedValues:(id)arg1;
- (id)_powerBudgetForPersonID:(id)arg1;
- (void)_readPowerBudgetParametersForPersonID:(id)arg1;
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;
- (void)pauseManagerDidUnpause:(id)arg1;
- (void)pauseManagerDidPause:(id)arg1;
- (_Bool)isWaitingForAuth;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)arg1;
- (void)didReceiveAuthenticationFailureForPersonID:(id)arg1;
- (void)forgetEverythingForPersonID:(id)arg1;
- (void)unpauseForUUID:(id)arg1;
- (void)pauseForUUID:(id)arg1;
- (void)resetServerStateForPersonID:(id)arg1;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1;
- (void)serverSideConfigurationForPersonID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_updatePushNotificationTopicsOutListenToProduction:(_Bool *)arg1 outListenToDevelopment:(_Bool *)arg2;
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;
- (void)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)enqueueAssetCollections:(id)arg1 personID:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)start;
- (void)didUnidle;
- (void)didIdle;
- (void)isBusyCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

