//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICMusicSubscriptionLeaseStatus, ICStoreRequestContext, NSDate;
@protocol ICMusicSubscriptionLeaseSessionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ICMusicSubscriptionLeaseSession : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    long long _automaticRefreshCount;
    NSObject<OS_dispatch_source> *_automaticRefreshTimerSource;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _isPerformingAutomaticRefresh;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    long long _pendingLeaseAcquisitionRevisionID;
    _Bool _delegatedLeaseSession;
    ICStoreRequestContext *_requestContext;
    id <ICMusicSubscriptionLeaseSessionDelegate> _delegate;
    NSDate *_leaseExpirationDate;
}

+ (id)_sharedOperationQueue;
@property(readonly, copy, nonatomic) NSDate *leaseExpirationDate; // @synthesize leaseExpirationDate=_leaseExpirationDate;
@property(readonly, nonatomic) __weak id <ICMusicSubscriptionLeaseSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(readonly, nonatomic, getter=isDelegatedLeaseSession) _Bool delegatedLeaseSession; // @synthesize delegatedLeaseSession=_delegatedLeaseSession;
- (void).cxx_destruct;
- (void)_updateAutomaticRefreshProperties;
- (void)_onQueue_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2;
- (void)_performAutomaticRefresh;
- (id)_newOperationForPlaybackRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setLeaseStatus:(id)arg1 updatedLeaseExpirationDate:(id)arg2;
- (void)_receivedUserInteractionEvent;
- (void)_handleRemoteServerDidBecomeLikelyReachable;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (void)reloadFairPlayKeyStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)performPlaybackRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isAutomaticallyRefreshingLease) _Bool automaticallyRefreshingLease;
- (void)endAutomaticallyRefreshingLease;
- (void)beginAutomaticallyRefreshingLease;
@property(readonly, copy, nonatomic) ICMusicSubscriptionLeaseStatus *leaseStatus;
- (id)description;
- (void)dealloc;
- (id)_initWithRequestContext:(id)arg1 isDelegatedLeaseSession:(_Bool)arg2 delegate:(id)arg3 leaseStatus:(id)arg4;

@end

