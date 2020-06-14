//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDAssertion.h>

@class HDDataCollectionManager, HDDataCollectionObserverState, NSSet;

@interface HDDataCollectionAssertion : HDAssertion
{
    struct os_unfair_lock_s _lock;
    HDDataCollectionObserverState *_observerState;
    NSSet *_sampleTypes;
    double _collectionInterval;
    HDDataCollectionManager *_dataCollectionManager;
}

@property(readonly, nonatomic) __weak HDDataCollectionManager *dataCollectionManager; // @synthesize dataCollectionManager=_dataCollectionManager;
@property(readonly, nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property(readonly, nonatomic) NSSet *sampleTypes; // @synthesize sampleTypes=_sampleTypes;
@property(copy, nonatomic) HDDataCollectionObserverState *observerState; // @synthesize observerState=_observerState;
- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 dataCollectionManager:(id)arg4;

@end

