//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <ActivitySharing/IDSBatchIDQueryControllerDelegate-Protocol.h>

@class ASReachabilityStatusCache, IDSBatchIDQueryController, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ASReachabilityQueryOperation : NSOperation <IDSBatchIDQueryControllerDelegate>
{
    _Bool _finished;
    _Bool _executing;
    NSSet *_destinations;
    NSMutableSet *_remainingDestinations;
    IDSBatchIDQueryController *_batchQueryController;
    NSObject<OS_dispatch_source> *timer;
    NSMutableDictionary *_rawIDSDestinationToOriginalDestination;
    NSMutableDictionary *_results;
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
    ASReachabilityStatusCache *_statusCache;
    NSString *_serviceIdentifier;
}

@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSSet *destinations; // @synthesize destinations=_destinations;
@property(nonatomic) __weak ASReachabilityStatusCache *statusCache; // @synthesize statusCache=_statusCache;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)_queryTimedOut;
- (void)finish;
- (void)start;
- (_Bool)isReady;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

