//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSItemProviderDataTransferDelegate-Protocol.h>
#import <UIKitCore/NSProgressReporting-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSProgress, NSString;
@protocol _UIDataTransferMonitorDelegate;

@interface _UIDataTransferMonitor : NSObject <NSItemProviderDataTransferDelegate, NSProgressReporting>
{
    NSMutableDictionary *_transferQueue_requestsBySourceItemUUID;
    NSMutableSet *_transferQueue_requestsInProgress;
    _Bool _transferQueue_suppressEventsUntilRequested;
    _Bool _transferQueue_shouldSendBeganCallback;
    _Bool _transferQueue_hasSentBeganCallback;
    _Bool _transferQueue_hasSentFinishedCallback;
    _Bool _transferQueue_shouldSendFinishedCallback;
    NSProgress *_transferQueue_masterProgress;
    NSMutableArray *_transferQueue_childProgresses;
    NSMutableSet *_transferQueue_allEncounteredItemUUIDs;
    id <_UIDataTransferMonitorDelegate> _delegate;
    NSArray *_outstandingRequests;
    unsigned long long _outstandingItemsCount;
}

@property(readonly, nonatomic) unsigned long long outstandingItemsCount; // @synthesize outstandingItemsCount=_outstandingItemsCount;
@property(readonly, copy, nonatomic) NSArray *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(nonatomic) __weak id <_UIDataTransferMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)itemProvider:(id)arg1 finishedDataTransferTransactionUUID:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_transferQueue_recomputeMasterProgress;
- (void)itemProvider:(id)arg1 beganDataTransferTransactionUUID:(id)arg2 progress:(id)arg3;
- (void)cancelOutstandingRequests;
@property(readonly) NSProgress *progress;
- (void)sendDelegateEventsIfNeeded;
@property(readonly, nonatomic) unsigned long long totalItemsCount; // @dynamic totalItemsCount;
- (void)_transferQueue_sendFinishedCallback;
- (void)_transferQueue_scheduleFinishedCallback;
- (void)_transferQueue_sendBeganCallback;
- (void)_transferQueue_scheduleBeganCallback;
@property(nonatomic) _Bool suppressEventsUntilRequested; // @dynamic suppressEventsUntilRequested;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

