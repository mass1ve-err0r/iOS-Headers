//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACXDevice, NPSDomainAccessor, NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACXGizmoState : NSObject
{
    _Bool _needsReunionSync;
    _Bool _hasCompletedInitialPairedSync;
    ACXDevice *_device;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NPSDomainAccessor *_npsDomain;
    NSMutableDictionary *_appStates;
    NSMutableSet *_pendingAppUpdateStates;
    NSObject<OS_dispatch_source> *_cleanUpPendingUpdateStateTimer;
}

@property(retain) NSObject<OS_dispatch_source> *cleanUpPendingUpdateStateTimer; // @synthesize cleanUpPendingUpdateStateTimer=_cleanUpPendingUpdateStateTimer;
@property(readonly, nonatomic) NSMutableSet *pendingAppUpdateStates; // @synthesize pendingAppUpdateStates=_pendingAppUpdateStates;
@property(retain, nonatomic) NSMutableDictionary *appStates; // @synthesize appStates=_appStates;
@property(readonly, nonatomic) NPSDomainAccessor *npsDomain; // @synthesize npsDomain=_npsDomain;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(readonly, nonatomic) ACXDevice *device; // @synthesize device=_device;
@property(readonly) _Bool hasCompletedInitialPairedSync; // @synthesize hasCompletedInitialPairedSync=_hasCompletedInitialPairedSync;
- (void).cxx_destruct;
- (void)initialPairedSyncComplete;
- (void)_removeSockPuppetSettings;
- (_Bool)_init_migrateSockPuppetSettings;
- (void)recordApplicationInstallationMetrics:(id)arg1 automaticInstall:(_Bool)arg2 isUpdate:(_Bool)arg3;
- (void)noteTrustAddedApps:(id)arg1 trustRemovedApps:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)noteNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dumpCurrentStateToLog;
- (long long)exportedAppStateForDeviceState:(unsigned long long)arg1;
- (void)setWatchKitAppExecutableHash:(id)arg1 forApp:(id)arg2;
- (id)watchKitAppExecutableHashForBundleID:(id)arg1;
- (id)preferencesForApplicationWithIdentifier:(id)arg1;
- (void)cancelUpdatePendingForCompanionApp:(id)arg1;
- (void)_onQueue_cancelUpdatePendingForCompanionApp:(id)arg1;
- (void)setUpdatePendingForCompanionApp:(id)arg1;
- (void)_onQueue_setUpdatePendingForCompanionApp:(id)arg1;
- (_Bool)updatePendingForCompanionApp:(id)arg1;
- (_Bool)_onQueue_updatePendingForCompanionApp:(id)arg1;
- (void)_onQueue_setUpPendingUpdateStateTimer;
- (void)_onQueue_cancelPendingUpdateStateTimer;
- (_Bool)_onQueue_cleanUpExpiredPendingUpdateStates;
@property(readonly, copy) NSDictionary *pendingApps;
- (void)purgeInstallStatusForApps:(id)arg1;
- (void)markInstalledAsPending;
- (void)clearPendingInstallations;
- (_Bool)iterateInstallStatusAndClearNeedsReunionSyncWithIterator:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)setInstallStatusForApps:(id)arg1 sendNotification:(_Bool)arg2 withUpdatePredicate:(CDUnknownBlockType)arg3;
- (_Bool)_onQueue_setInstallStatusForApps:(id)arg1 sendNotification:(_Bool)arg2 withUpdatePredicate:(CDUnknownBlockType)arg3;
- (_Bool)setInstallStatusForApps:(id)arg1;
- (void)setInstallStatus:(unsigned long long)arg1 forApp:(id)arg2 companionBundleID:(id)arg3;
- (void)regenerateAllUniqueInstallIDs;
- (id)uniqueInstallIDForApp:(id)arg1;
- (unsigned long long)installStatusForApp:(id)arg1;
@property _Bool needsReunionSync;
@property(readonly) _Bool initiallyInstallAllApps;
@property(readonly) _Bool alwaysInstallApps;
- (void)_onQueue_saveState;
- (void)_init_loadState;
@property(readonly) _Bool gizmoIsActivePairedDevice;
- (id)initWithDevice:(id)arg1;

@end

