//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REObservableSingleton.h>

@class NSObject, REUpNextScheduler;
@protocol OS_dispatch_queue;

@interface REDonatedActionStore : REObservableSingleton
{
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextScheduler *_donationsScheduler;
    REUpNextScheduler *_deletionsScheduler;
}

- (void).cxx_destruct;
- (void)_removeThenDistributeAllActions;
- (void)_queue_distributeRecentDeletedActions;
- (void)_distributeRecentDeletedActions;
- (void)_queue_distributeRecentDonatedActions;
- (void)_queue_distributeAllDonatedActions;
- (void)_distributeRecentDonatedActions;
- (void)_distributeAllDonatedActions;
- (void)_finishLoadingData;
- (void)_beginLoadingData;
- (void)_subscribeToNotifications;
- (void)triggerDistributeAllDonatedActions;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)start;
- (id)callbackQueue;
- (void)dealloc;
- (id)init;

@end

