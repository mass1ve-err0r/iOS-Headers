//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, MNLocation, MNNavigationSession, NSDate, NSMutableDictionary, NSTimer;
@protocol MNTransitScheduleTrackerDelegate;

__attribute__((visibility("hidden")))
@interface MNTransitScheduleTracker : NSObject
{
    GEOComposedRouteStep *_lastStepReached;
    MNNavigationSession *_navigationSession;
    MNLocation *_lastMatchedLocation;
    NSMutableDictionary *_arrivalTimetable;
    NSMutableDictionary *_stepFeedback;
    NSMutableDictionary *_stepArrivalState;
    NSDate *_startDate;
    _Bool _isTrackingSchedule;
    double _timeBuffer;
    NSTimer *_nextStepReachedTimer;
    NSTimer *_nextStepApproachingTimer;
    NSTimer *_trackingTimer;
    id <MNTransitScheduleTrackerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNTransitScheduleTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateLastLocation:(id)arg1 onFeedbackForStep:(id)arg2 updateTriggerLocation:(_Bool)arg3;
- (id)_alightNotificationFeedbackForStep:(id)arg1 trigger:(int)arg2 approachedAt:(id)arg3;
- (void)_recordTraceEvent:(long long)arg1 withData:(id)arg2;
- (id)_latLonDictionaryFromLocation:(id)arg1;
- (id)_traceRecorder;
- (void)_markNextStepAsReached;
- (void)_reachedStep:(id)arg1;
- (void)_markNextStepAsApproaching;
- (void)_approachingStep:(id)arg1;
- (void)_unsetStepTimers;
- (void)_cancelDelayedStart;
- (void)_refreshTimetable;
- (void)_lostLocationSignal;
- (void)_stopScheduleTracking;
- (void)_startScheduleTracking;
- (void)_setarrivalState:(unsigned long long)arg1 forStep:(id)arg2;
- (unsigned long long)_arrivalStateForStep:(id)arg1;
- (double)_remainingTimeUntilStepAtIndex:(unsigned long long)arg1;
- (double)_remainingTimeUntilNextStep;
- (id)_projectedArrivalDateForStepAtIndex:(unsigned long long)arg1;
- (id)_projectedArrivalDateForNextStep;
- (_Bool)_isApproachingNextStep;
- (id)_remainingSteps;
- (long long)_transitTypeForStep:(id)arg1;
- (_Bool)_isStepAlightingStep:(id)arg1;
- (_Bool)_isStepBoardingStep:(id)arg1;
- (_Bool)_isStepScheduleBasedBoardingStep:(id)arg1;
- (int)_maneuverForStep:(id)arg1;
@property(readonly, nonatomic) GEOComposedRouteStep *nextStep;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)matchedLocation:(id)arg1;
- (void)endNavigation;
- (void)beginNavigation;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1 delegate:(id)arg2;

@end

