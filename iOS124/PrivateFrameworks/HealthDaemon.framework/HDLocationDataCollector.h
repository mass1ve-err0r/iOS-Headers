//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDLocationManagerObserver-Protocol.h>

@class CMElevation, HDAssertion, HDProfile, HKWorkoutRoute, NSString, NSUUID;
@protocol HDLocationEventDelegate, HDSampleSaving, OS_dispatch_queue;

@interface HDLocationDataCollector : NSObject <HDLocationManagerObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    long long _state;
    id <HDSampleSaving> _sampleSavingDelegate;
    int _lastStatus;
    HKWorkoutRoute *_route;
    _Bool _didSaveLocationData;
    double _lastPausedTime;
    unsigned long long _elevationGain;
    unsigned long long _activityType;
    NSUUID *_workoutUUID;
    HDAssertion *_locationUpdatingAssertion;
    unsigned long long _validLocationsCount;
    unsigned long long _skippedLocationsCount;
    id <HDLocationEventDelegate> _delegate;
    CMElevation *_elevation;
}

@property(retain, nonatomic) CMElevation *elevation; // @synthesize elevation=_elevation;
@property(nonatomic) __weak id <HDLocationEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)healthLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)healthLocationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)healthLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)_queue_savedLocationData;
- (void)_queue_createSeriesSample;
- (void)_handleElevationData:(id)arg1 error:(id)arg2;
- (void)_queue_resumeWorkout;
- (void)resumeUpdates;
- (void)_queue_stopGPSUpdates;
- (void)_queue_pauseLocationUpdates;
- (void)pauseUpdates;
- (void)_queue_setupLocationUpdates;
- (void)startUpdates;
- (void)stopUpdates;
- (void)_queue_deleteCurrentRoute;
- (void)_queue_freezeCurrentWorkoutRoute;
- (_Bool)isElevationAvailable;
- (id)createCMElevation;
- (_Bool)locationServicesEnabled;
- (int)authorizationStatus;
- (id)workoutLocationManager;
@property(readonly, copy) NSString *description;
- (long long)state;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 sampleSavingDelegate:(id)arg2 activityType:(unsigned long long)arg3 workoutUUID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

