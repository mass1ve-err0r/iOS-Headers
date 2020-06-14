//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDTaskServerObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutBuilderServerSampleObserer-Protocol.h>

@class HDWorkoutBuilderServer, NSString, NSUUID;

@interface HDWorkoutBuilderSampleQueryServer : HDQueryServer <HDTaskServerObserver, HDWorkoutBuilderServerSampleObserer, HDDatabaseProtectedDataObserver>
{
    _Bool _hasFinishedHistoricalFetch;
    NSUUID *_workoutBuilderIdentifier;
    HDWorkoutBuilderServer *_workoutBuilderServer;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
- (void).cxx_destruct;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)workoutBuilderServer:(id)arg1 addedSamples:(id)arg2;
- (void)didInvalidateTaskServer:(id)arg1;
- (void)didCreateTaskServer:(id)arg1;
- (void)_queue_scheduleHistoricalQuery;
- (void)_queue_performHistoricalQuery;
- (void)_queue_start;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_shouldObserveDatabaseProtectedDataAvailability;
- (_Bool)_shouldObserveOnPause;
- (_Bool)_shouldListenForUpdates;
- (id)workoutBuilderSampleQueryClientWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

