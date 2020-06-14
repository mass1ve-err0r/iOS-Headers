//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SPCompanionAppServerProtocol-Protocol.h"
#import "SPDaemonManagerTransactionObserver-Protocol.h"
#import "SPLocalServerProtocol-Protocol.h"
#import "SPTransportDelegate-Protocol.h"

@class BKSProcessAssertion, NRDevice, NSDate, NSDictionary, NSMutableDictionary, NSString, NSXPCListener, SPUsageTrack;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPCompanionAppServer : NSObject <NSXPCListenerDelegate, SPLocalServerProtocol, SPDaemonManagerTransactionObserver, SPTransportDelegate, SPCompanionAppServerProtocol>
{
    _Bool _paired;
    unsigned int _nextTransactionID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_queueRemote;
    NSObject<OS_dispatch_source> *_gizmoApplicationsUpdateTimer;
    NSXPCListener *_localListener;
    NSMutableDictionary *_localConnections;
    NRDevice *_pairedDevice;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSMutableDictionary *_outstandingtransactions;
    SPUsageTrack *_usageTrack;
    NSMutableDictionary *_dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
    NSObject<OS_dispatch_queue> *_processAssertionQueue;
    BKSProcessAssertion *_processAssertion;
    NSString *_activeApplication;
    NSObject<OS_dispatch_queue> *_processAssertionForXcodeQueue;
    BKSProcessAssertion *_processAssertionForXcode;
    NSString *_plugInIdentifierForXcodeProcessAssertion;
    id _batteryStateObserver;
    NSObject<OS_dispatch_queue> *_remoteInterfaceProcessAssertionsQueue;
    NSMutableDictionary *_remoteInterfaceProcessAssertions;
    NSObject<OS_dispatch_queue> *_launchSockPuppetAppQueue;
    NSString *_launchSockPuppetAppCompanionAppIdentifer;
    NSDictionary *_launchSockPuppetAppOptions;
    CDUnknownBlockType _launchSockPuppetAppCompletion;
    NSObject<OS_dispatch_source> *_launchSockPuppetCancelLaunchTimer;
    NSDate *_dateOfFirstUnlock;
    NSMutableDictionary *_extensionsDoingSnapshot;
    NSObject<OS_dispatch_queue> *_extensionsDoingSnapshotQueue;
    NSMutableDictionary *_lastExtensionKilledDates;
    NSObject<OS_dispatch_queue> *_lastExtensionKilledDatesQueue;
    double _timingTest_IDSReceiveTime;
    double _timingTest_IDSSendTime;
    unsigned long long _timingTest_IDSSendSize;
    NSObject<OS_dispatch_queue> *_timingTest_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timingTest_queue; // @synthesize timingTest_queue=_timingTest_queue;
@property(nonatomic) unsigned long long timingTest_IDSSendSize; // @synthesize timingTest_IDSSendSize=_timingTest_IDSSendSize;
@property(nonatomic) double timingTest_IDSSendTime; // @synthesize timingTest_IDSSendTime=_timingTest_IDSSendTime;
@property(nonatomic) double timingTest_IDSReceiveTime; // @synthesize timingTest_IDSReceiveTime=_timingTest_IDSReceiveTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lastExtensionKilledDatesQueue; // @synthesize lastExtensionKilledDatesQueue=_lastExtensionKilledDatesQueue;
@property(retain, nonatomic) NSMutableDictionary *lastExtensionKilledDates; // @synthesize lastExtensionKilledDates=_lastExtensionKilledDates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionsDoingSnapshotQueue; // @synthesize extensionsDoingSnapshotQueue=_extensionsDoingSnapshotQueue;
@property(retain) NSMutableDictionary *extensionsDoingSnapshot; // @synthesize extensionsDoingSnapshot=_extensionsDoingSnapshot;
@property(retain, nonatomic) NSDate *dateOfFirstUnlock; // @synthesize dateOfFirstUnlock=_dateOfFirstUnlock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *launchSockPuppetCancelLaunchTimer; // @synthesize launchSockPuppetCancelLaunchTimer=_launchSockPuppetCancelLaunchTimer;
@property(copy, nonatomic) CDUnknownBlockType launchSockPuppetAppCompletion; // @synthesize launchSockPuppetAppCompletion=_launchSockPuppetAppCompletion;
@property(retain, nonatomic) NSDictionary *launchSockPuppetAppOptions; // @synthesize launchSockPuppetAppOptions=_launchSockPuppetAppOptions;
@property(retain, nonatomic) NSString *launchSockPuppetAppCompanionAppIdentifer; // @synthesize launchSockPuppetAppCompanionAppIdentifer=_launchSockPuppetAppCompanionAppIdentifer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *launchSockPuppetAppQueue; // @synthesize launchSockPuppetAppQueue=_launchSockPuppetAppQueue;
@property(retain, nonatomic) NSMutableDictionary *remoteInterfaceProcessAssertions; // @synthesize remoteInterfaceProcessAssertions=_remoteInterfaceProcessAssertions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *remoteInterfaceProcessAssertionsQueue; // @synthesize remoteInterfaceProcessAssertionsQueue=_remoteInterfaceProcessAssertionsQueue;
@property(retain, nonatomic) id batteryStateObserver; // @synthesize batteryStateObserver=_batteryStateObserver;
@property(retain, nonatomic) NSString *plugInIdentifierForXcodeProcessAssertion; // @synthesize plugInIdentifierForXcodeProcessAssertion=_plugInIdentifierForXcodeProcessAssertion;
@property(retain) BKSProcessAssertion *processAssertionForXcode; // @synthesize processAssertionForXcode=_processAssertionForXcode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processAssertionForXcodeQueue; // @synthesize processAssertionForXcodeQueue=_processAssertionForXcodeQueue;
@property(retain, nonatomic) NSString *activeApplication; // @synthesize activeApplication=_activeApplication;
@property(retain) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processAssertionQueue; // @synthesize processAssertionQueue=_processAssertionQueue;
@property(retain, nonatomic) NSMutableDictionary *dateOfFirstAttemptToLaunchGizmoAppsByBundleID; // @synthesize dateOfFirstAttemptToLaunchGizmoAppsByBundleID=_dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
@property(retain, nonatomic) SPUsageTrack *usageTrack; // @synthesize usageTrack=_usageTrack;
@property(nonatomic) unsigned int nextTransactionID; // @synthesize nextTransactionID=_nextTransactionID;
@property(retain, nonatomic) NSMutableDictionary *outstandingtransactions; // @synthesize outstandingtransactions=_outstandingtransactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) NRDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property _Bool paired; // @synthesize paired=_paired;
@property(retain) NSMutableDictionary *localConnections; // @synthesize localConnections=_localConnections;
@property(retain) NSXPCListener *localListener; // @synthesize localListener=_localListener;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gizmoApplicationsUpdateTimer; // @synthesize gizmoApplicationsUpdateTimer=_gizmoApplicationsUpdateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueRemote; // @synthesize queueRemote=_queueRemote;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)connection:(id)arg1 hasEntitlement:(id)arg2;
- (id)applicationIdentifierFromXPCConnection:(id)arg1;
- (void)activeComplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)daemonManagerWillEndXPCTransaction;
- (_Bool)_isApplicationViewControllerActivate:(id)arg1;
- (void)_sendTextSizeToApplication:(id)arg1 onlyIfChanged:(_Bool)arg2;
- (id)_textSize;
- (id)_textSizeChanged;
- (_Bool)isExtensionDoingSnapshot:(id)arg1;
- (void)extensionDidEndSnapshot:(id)arg1;
- (void)extensionDidBeginSnapshot:(id)arg1;
- (id)logStringArray:(id)arg1;
- (id)logDictionary:(id)arg1;
- (id)decodeInData:(id)arg1;
- (id)decodeOutData:(id)arg1;
- (id)decodeProtoData:(id)arg1;
- (id)transactionDictForID:(id)arg1 removeFromOutstanding:(_Bool)arg2;
- (void)sendAndTrackTransactionDict:(id)arg1 withCompletion:(id)arg2;
- (_Bool)isPaired;
- (void)nanoRegistryChanged:(id)arg1;
- (_Bool)showUserNotificationWithTitle:(id)arg1 message:(id)arg2;
- (void)releaseRemoteInterfaceAssertionsForPluginIdentifer:(id)arg1;
- (void)takeRemoteInterfaceProcessAssertionForPlugin:(id)arg1;
- (void)releaseProcessAssertionForXcode;
- (void)takeProcessAssertionForXcode:(id)arg1;
- (void)setApplicationIDForXcodeProcessAssertion:(id)arg1;
- (void)releaseProcessAssertion:(id)arg1;
- (void)takeProcessAssertion:(id)arg1;
- (void)_applicationDeactivated:(id)arg1;
- (void)_applicationActivated:(id)arg1;
- (void)handleIncomingPlist:(id)arg1;
- (id)appBundleIDFromPlist:(id)arg1;
- (void)handleIncomingData:(id)arg1;
- (_Bool)unlockedSinceBoot;
- (void)incomingData:(id)arg1;
- (void)_saveReceiveTime;
- (void)_saveSendTimeAndSize:(unsigned long long)arg1;
- (void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)handleIncomingProtoPlist:(id)arg1;
- (void)incomingProtobuf:(id)arg1;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;
- (void)sendCacheRequest:(id)arg1 identifier:(id)arg2;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;
- (void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;
- (void)wakeExtensionForWatchApp:(id)arg1;
- (void)hideUserNotification;
- (void)showUserNotification:(long long)arg1 applicationName:(id)arg2;
- (void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelLaunchSockPuppetAppTimeout;
- (void)_sockPuppetAppListUpdatedToLaunchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 acxRetryGeneration:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)killExtensionForAppIdentifier:(id)arg1;
- (void)sendData:(id)arg1 toApplication:(id)arg2;
- (void)sendProtoData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3;
- (void)sendData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3;
- (void)sendToRemoteInterface:(id)arg1 call:(CDUnknownBlockType)arg2;
- (void)sendPlist:(id)arg1 securityType:(long long)arg2;
- (_Bool)shouldKillExtensionOnError:(id)arg1;
- (void)clearLastResetDateForPluginIdentifier:(id)arg1;
- (void)setLastExtensionKilledDateForPluginIdentifier:(id)arg1;
- (void)sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 securityType:(long long)arg4;
- (void)sendPlist:(id)arg1 timeOut:(double)arg2 securityType:(long long)arg3;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)sendFirstUnlockStatusToGizmo;
- (_Bool)_checkUnlockedSinceBoot;
- (_Bool)_unlockedSinceBoot;
- (void)cancelGizmoApplicationsUpdateTimer;
- (void)run;
- (void)logDataSent:(unsigned long long)arg1 application:(id)arg2;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setupSignalHandlers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

