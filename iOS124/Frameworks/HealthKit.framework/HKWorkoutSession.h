//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKStateMachineDelegate-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKLiveWorkoutBuilder, HKStateMachine, HKTaskServerProxyProvider, HKWorkoutConfiguration, HKWorkoutSessionTaskConfiguration, NSDate, NSString, NSUUID;
@protocol HKWorkoutSessionDelegate, OS_dispatch_queue;

@interface HKWorkoutSession : NSObject <_HKXPCExportable, HKStateMachineDelegate, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <HKWorkoutSessionDelegate> _delegate;
    long long _state;
    NSDate *_startDate;
    NSDate *_endDate;
    HKWorkoutSessionTaskConfiguration *_configuration;
    HKTaskServerProxyProvider *_proxyProvider;
    id <HKWorkoutSessionDelegate> _strongDelegate;
    HKLiveWorkoutBuilder *_associatedWorkoutBuilder;
    HKStateMachine *_targetStateMachine;
    HKHealthStore *_healthStore;
}

+ (void)_unitTest_clearAllRunningWorkouts;
+ (_Bool)supportsSecureCoding;
+ (id)serverInterface;
+ (id)clientInterface;
+ (_Bool)_applicationHasRunningWorkout;
+ (id)targetWorkoutSessionStateMachineForSessionUUID:(id)arg1;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)_unitTest_discardAssociatedWorkoutBuilder;
- (void)stopActivity;
- (void)startActivity;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_setAssociatedWorkoutBuilder:(id)arg1;
- (id)associatedWorkoutBuilderWithDevice:(id)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3;
- (id)associatedWorkoutBuilder;
@property(readonly, nonatomic) _Bool isGymKitSession;
@property(readonly) NSDate *endDate;
@property(readonly) NSDate *startDate;
@property(readonly) long long state;
@property __weak id <HKWorkoutSessionDelegate> delegate;
@property(readonly, copy) HKWorkoutConfiguration *workoutConfiguration;
@property(readonly) long long locationType;
@property(readonly) unsigned long long activityType;
@property(readonly, copy, nonatomic) NSUUID *identifier;
- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)pauseWithCompletion:(CDUnknownBlockType)arg1;
- (void)pause;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)end;
- (void)stopActivityWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopActivityWithDate:(id)arg1;
- (void)startActivityWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startActivityWithDate:(id)arg1;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepare;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (void)stateMachine:(id)arg1 didIgnoreEvent:(long long)arg2 state:(id)arg3;
- (void)client_synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)client_didFailWithError:(id)arg1;
- (void)client_didGenerateEvents:(id)arg1;
- (void)client_didChangeToState:(long long)arg1 date:(id)arg2;
- (void)client_didUpdateStartDate:(id)arg1 endDate:(id)arg2;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (_Bool)_queue_shouldAttemptRecovery;
- (void)_queue_markRecoveryRequired;
- (void)_recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupWithHealthStore:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithHealthStore:(id)arg1 taskConfiguration:(id)arg2 error:(id *)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

