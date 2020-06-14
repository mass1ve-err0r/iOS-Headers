//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol WBSCloudKitThrottlerDataStore;

@interface WBSCloudKitThrottler : NSObject
{
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
    id <WBSCloudKitThrottlerDataStore> _dataStore;
}

+ (id)_distributionBucketsFromConfiguration:(id)arg1;
+ (_Bool)policyStringRepresentsValidPolicy:(id)arg1;
@property(retain, nonatomic) id <WBSCloudKitThrottlerDataStore> dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_test_numberOfSecondsToMonitor;
- (void)reloadRecordOfPastOperations;
- (void)_saveRecordOfPastOperations;
- (void)_loadRecordOfPastOperations;
- (void)_addOperationAtDate:(id)arg1;
- (void)_pruneExpiredOrInvalidOperations;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (double)_minimumTimeBetweenOperationsForOperations:(id)arg1;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)arg1;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (_Bool)_loadDistributionConfiguration:(id)arg1;
- (void)setPolicyString:(id)arg1;
- (_Bool)_throttlerIsActive;
- (id)description;
- (void)operationWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2;
- (id)dateOfNextPermittedOperationWithPriority:(long long)arg1;
- (_Bool)permitsOperationWithPriority:(long long)arg1;
- (id)initWithPolicyString:(id)arg1;
- (id)init;

@end

