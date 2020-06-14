//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAnalyticSubmissionEvent-Protocol.h>

@class NSError, NSString;

@interface HDWorkoutCondenserAnalyticEvent : NSObject <HDAnalyticSubmissionEvent>
{
    _Bool _hasWatchSource;
    _Bool _success;
    long long _reason;
    long long _batchSize;
    double _duration;
    NSError *_error;
    NSError *_underlyingError;
    long long _workoutsToCondense;
    long long _workoutsToRecondense;
    long long _condensedWorkouts;
    long long _processedWorkouts;
    long long _createdSeries;
    long long _deletedSamples;
}

@property(readonly, nonatomic) long long deletedSamples; // @synthesize deletedSamples=_deletedSamples;
@property(readonly, nonatomic) long long createdSeries; // @synthesize createdSeries=_createdSeries;
@property(readonly, nonatomic) long long processedWorkouts; // @synthesize processedWorkouts=_processedWorkouts;
@property(readonly, nonatomic) long long condensedWorkouts; // @synthesize condensedWorkouts=_condensedWorkouts;
@property(readonly, nonatomic) long long workoutsToRecondense; // @synthesize workoutsToRecondense=_workoutsToRecondense;
@property(readonly, nonatomic) long long workoutsToCondense; // @synthesize workoutsToCondense=_workoutsToCondense;
@property(readonly, copy, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) _Bool hasWatchSource; // @synthesize hasWatchSource=_hasWatchSource;
@property(readonly, nonatomic) long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)codableRepresentationForAWDSubmission;
- (unsigned int)AWDMetricID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithReason:(long long)arg1 batchSize:(long long)arg2 hasWatchSource:(_Bool)arg3 duration:(double)arg4 success:(_Bool)arg5 error:(id)arg6 workoutsToCondense:(long long)arg7 workoutsToRecondense:(long long)arg8 condensedWorkouts:(long long)arg9 processedWorkouts:(long long)arg10 createdSeries:(long long)arg11 deletedSamples:(long long)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

