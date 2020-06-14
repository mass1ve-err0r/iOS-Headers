//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperationManager, HMFExponentialBackoffTimer, NSMutableArray, NSString;

@interface HMDSyncOperationQueue : HMFObject
{
    _Bool _hasExponentialBackoff;
    NSString *_name;
    HMFExponentialBackoffTimer *_backoffTimer;
    HMDSyncOperationManager *_manager;
    NSMutableArray *_stagedOperations;
    NSMutableArray *_waitingOperations;
    double _initialDelay;
    double _initialBackoff;
}

@property(nonatomic) _Bool hasExponentialBackoff; // @synthesize hasExponentialBackoff=_hasExponentialBackoff;
@property(nonatomic) double initialBackoff; // @synthesize initialBackoff=_initialBackoff;
@property(nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
@property(retain, nonatomic) NSMutableArray *waitingOperations; // @synthesize waitingOperations=_waitingOperations;
@property(retain, nonatomic) NSMutableArray *stagedOperations; // @synthesize stagedOperations=_stagedOperations;
@property(nonatomic) __weak HMDSyncOperationManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) HMFExponentialBackoffTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)operationsToCancel;
- (id)allOperations;
- (id)nextOperation;
- (_Bool)isInMaximumTimeInterval;
- (_Bool)processFiredTimer:(id)arg1;
- (void)dropAllOperations;
- (void)dropOperation:(id)arg1;
- (void)stageOperation:(id)arg1;
- (void)addOperation:(id)arg1 withDelay:(double)arg2;
- (void)_addOperation:(id)arg1;
- (void)resetBackoffTimer;
- (void)_createBackoffTimer;
@property(readonly, nonatomic) long long count;
@property(readonly, nonatomic) long long countTotal;
- (id)description;
- (id)initName:(id)arg1 syncManager:(id)arg2 initialDelay:(double)arg3 initialBackoff:(double)arg4 hasBackoff:(_Bool)arg5;

@end

