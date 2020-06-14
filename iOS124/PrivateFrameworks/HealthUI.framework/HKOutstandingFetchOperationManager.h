//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKFetchOperationDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface HKOutstandingFetchOperationManager : NSObject <HKFetchOperationDelegate>
{
    _Bool _needsRebalanceFetchOperations;
    NSMutableArray *_pendingFetchOperations;
    NSMutableArray *_activeFetchOperations;
    long long _maxConcurrentFetchOperations;
}

+ (id)sharedOperationManager;
+ (void)setSharedOperationManager:(id)arg1;
@property(nonatomic) long long maxConcurrentFetchOperations; // @synthesize maxConcurrentFetchOperations=_maxConcurrentFetchOperations;
- (void).cxx_destruct;
- (void)fetchOperationDidUpdatePriority:(id)arg1;
- (void)_executeFetchOperation:(id)arg1;
- (void)_fillActiveFetchOperations;
- (void)_sortPendingFetchOperations;
- (void)_rebalanceFetchOperations;
- (void)_setNeedsRebalanceFetchOperations;
- (_Bool)_removeFetchOperationFromActiveOperations:(id)arg1;
- (_Bool)_removeFetchOperationFromPendingOperations:(id)arg1;
- (void)removeFetchOperation:(id)arg1;
- (void)removeFetchOperations:(id)arg1;
- (void)addFetchOperation:(id)arg1;
- (void)addFetchOperations:(id)arg1;
- (id)initWithMaxConcurrentFetchOperations:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

