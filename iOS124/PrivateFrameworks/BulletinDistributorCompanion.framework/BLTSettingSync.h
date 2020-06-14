//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSettingSyncInternal.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTSectionConfigurationDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTSectionInfoListDelegate-Protocol.h>
#import <BulletinDistributorCompanion/BLTSiriActionAppListDelegate-Protocol.h>

@class BBObserver, BLTSectionInfoList, BLTSectionInfoListBridgeProvider, BLTSectionInfoSyncCoordinator, BLTSettingSyncSendQueue, BLTSiriActionAppList, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface BLTSettingSync : BLTSettingSyncInternal <BBObserverDelegate, BLTSectionInfoListDelegate, BLTSectionConfigurationDelegate, BLTSiriActionAppListDelegate>
{
    BLTSectionInfoList *_sectionInfoList;
    BLTSettingSyncSendQueue *_settingSendQueue;
    unsigned long long _settingSyncSendQueueMaxConcurrentSendCount;
    BLTSectionInfoSyncCoordinator *_sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> *_sectionInfoSyncCoordinatorQueue;
    _Bool _initialSyncPerformed;
    BLTSectionInfoListBridgeProvider *_bridgeProvider;
    NSMutableDictionary *_reloadBBCompletions;
    unsigned long long _stateHandler;
    BLTSiriActionAppList *_siriActionAppList;
    BBObserver *_observer;
}

@property(retain, nonatomic) BBObserver *observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)_stateDescription;
- (void)_callAndRemoveReloadBBCompletion:(CDUnknownBlockType)arg1 sectionID:(id)arg2;
- (void)_addReloadBBCompletion:(CDUnknownBlockType)arg1 sectionID:(id)arg2;
- (void)_callReloadBBCompletionsForSectionID:(id)arg1;
- (void)sectionConfiguration:(id)arg1 addedSectionIDs:(id)arg2 removedSectionIDs:(id)arg3;
- (void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2;
- (void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3 fromRemote:(_Bool)arg4;
- (void)setSectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_willSectionIDAlert:(id)arg1;
- (id)overriddenSettings;
- (id)originalSettings;
- (id)settingOverrides;
- (void)spoolSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendAllSectionInfoWithSpool:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRemoveSectionWithSectionID:(id)arg1 sent:(CDUnknownBlockType)arg2;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2 spoolToFile:(_Bool)arg3;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)sendOverrideOnly:(id)arg1 sectionID:(id)arg2 spoolToFile:(_Bool)arg3;
- (void)_updateAllBBSectionsWithCompletion:(CDUnknownBlockType)arg1 withProgress:(CDUnknownBlockType)arg2 spoolToFile:(_Bool)arg3;
- (id)_alertingSectionIDs;
- (void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(_Bool)arg3 spoolToFile:(_Bool)arg4 andCompletion:(CDUnknownBlockType)arg5;
- (void)clearSectionInfoSentCache;
- (_Bool)isSectionInfoSentCacheEmpty;
- (void)dealloc;
- (void)siriActionAppListUpdated:(id)arg1;
- (void)handleAllSyncComplete;
- (void)_sendSiriAppListWithInstalled:(struct NSDictionary *)arg1 removed:(id)arg2;
- (void)_sendSpooledSyncWithCompletion:(CDUnknownBlockType)arg1 withProgress:(CDUnknownBlockType)arg2;
- (void)_logNotificationSettings;
- (void)_spoolInitialSync;
- (void)performSyncIfNeededForSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performInitialSyncWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupSectionInfoListWithCompletion:(CDUnknownBlockType)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)_initSettingSyncSendQueueMaxConcurrentSendCount;
- (unsigned long long)_fetchSettingSyncMaxCountOverride;
- (unsigned long long)_fetchSyncState;
- (void)_storeSyncState:(unsigned long long)arg1;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

