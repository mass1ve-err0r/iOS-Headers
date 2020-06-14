//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACXDeviceObserver-Protocol.h"

@class ACXDevice, ACXServerInstallOperation, ACXTimedIdentifierList, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface ACXInstallQueue : NSObject <ACXDeviceObserver>
{
    _Bool _cancelCurrentOperation;
    _Bool _isSuspended;
    ACXDevice *_device;
    struct NSMutableArray *_placeholderInstallQueue;
    struct NSMutableArray *_highPriorityUpdateQueue;
    struct NSMutableArray *_normalPriorityUpdateQueue;
    struct NSMutableArray *_normalPriorityNewAppUpdateQueue;
    ACXServerInstallOperation *_currentInstallOperation;
    NSString *_currentInstallOperationWatchBundleID;
    NSMutableDictionary *_completions;
    NSObject<OS_os_transaction> *_activeTransaction;
    ACXTimedIdentifierList *_recentlyCompletedWatchAppInstalls;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(readonly) ACXTimedIdentifierList *recentlyCompletedWatchAppInstalls; // @synthesize recentlyCompletedWatchAppInstalls=_recentlyCompletedWatchAppInstalls;
@property _Bool cancelCurrentOperation; // @synthesize cancelCurrentOperation=_cancelCurrentOperation;
@property(retain) NSObject<OS_os_transaction> *activeTransaction; // @synthesize activeTransaction=_activeTransaction;
@property(readonly) NSMutableDictionary *completions; // @synthesize completions=_completions;
@property(retain) NSString *currentInstallOperationWatchBundleID; // @synthesize currentInstallOperationWatchBundleID=_currentInstallOperationWatchBundleID;
@property(retain) ACXServerInstallOperation *currentInstallOperation; // @synthesize currentInstallOperation=_currentInstallOperation;
@property(readonly) NSMutableArray *normalPriorityNewAppUpdateQueue; // @synthesize normalPriorityNewAppUpdateQueue=_normalPriorityNewAppUpdateQueue;
@property(readonly) NSMutableArray *normalPriorityUpdateQueue; // @synthesize normalPriorityUpdateQueue=_normalPriorityUpdateQueue;
@property(readonly) NSMutableArray *highPriorityUpdateQueue; // @synthesize highPriorityUpdateQueue=_highPriorityUpdateQueue;
@property(readonly) NSMutableArray *placeholderInstallQueue; // @synthesize placeholderInstallQueue=_placeholderInstallQueue;
@property(readonly) ACXDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)acknowledgeInstallationForWatchApp:(id)arg1;
- (_Bool)installIsPendingForWatchApp:(id)arg1;
- (_Bool)_onQueue_installIsPendingForWatchApp:(id)arg1;
- (id)_installationSentinelFileURL;
- (void)_removeInstallationSentinel;
- (void)_createInstallationSentinel;
- (void)_onQueue_removeBundleID:(id)arg1 fromQueueWithPriority:(unsigned long long)arg2;
- (id)_queueForPriority:(unsigned long long)arg1;
- (unsigned long long)_onQueue_queuePriorityForBundleID:(id)arg1;
- (_Bool)_onQueue_removeInstallOperationWithWatchBundleID:(id)arg1 fromQueue:(struct NSMutableArray *)arg2;
- (_Bool)_onQueue_installQueue:(struct NSMutableArray *)arg1 hasInstallOperationForBundleID:(id)arg2;
- (unsigned long long)_onQueue_indexOfInstallOperationWithWatchBundleID:(id)arg1 inQueue:(struct NSMutableArray *)arg2;
- (void)_onQueue_deQueueNextOperation;
- (void)_onQueue_stopQueue;
- (void)_onQueue_startQueue;
- (unsigned long long)_onQueue_countPending;
- (void)cancelAllPendingInstalls;
- (_Bool)cancelInstallForWatchAppBundleID:(id)arg1;
- (void)reachabilityChangedForDevice:(id)arg1;
- (void)installWatchApp:(id)arg1 withPriority:(unsigned long long)arg2 appSettings:(id)arg3 provisioningProfileInfo:(id)arg4 isUserInitiated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

