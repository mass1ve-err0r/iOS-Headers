//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SSAppPurchaseHistoryCache;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CacheDeleteCoordinator : NSObject
{
    NSDictionary *_combinedSpaceByUrgency;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _lastUpdate;
    SSAppPurchaseHistoryCache *__purchaseHistoryCache;
    NSObject<OS_dispatch_source> *_scheduledTimer;
}

+ (id)sharedInstance;
@property(retain) NSObject<OS_dispatch_source> *scheduledTimer; // @synthesize scheduledTimer=_scheduledTimer;
- (void).cxx_destruct;
- (void)_refreshPurgeableStorage;
- (void)_pushUpdatedAvailableStorage;
- (id)_purgeable:(id)arg1 urgency:(int)arg2;
- (id)_purge:(id)arg1 urgency:(int)arg2;
- (id)_purchaseHistoryCache;
- (id)_periodic:(id)arg1 urgency:(int)arg2;
- (_Bool)_isStale;
- (unsigned long long)_currentPurgeable;
- (void)_cancelPurge;
- (void)updatePurgeableStorage;
- (void)registerCacheDeleteInfoCallbacks;
- (void)dealloc;
- (id)init;

@end

