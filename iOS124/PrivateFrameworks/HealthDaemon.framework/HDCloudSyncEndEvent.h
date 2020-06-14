//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCloudSyncEvent.h>

#import <HealthDaemon/HDAnalyticSubmissionEvent-Protocol.h>

@class NSError, NSNumber, NSString;

@interface HDCloudSyncEndEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent>
{
    double _duration;
    long long _result;
    NSNumber *_countSinceLastSuccess;
    NSNumber *_timeIntervalSinceLastSuccess;
    NSError *_error;
    NSError *_underlyingError;
}

+ (_Bool)_errorAndUnderlyingErrorForError:(id)arg1 errorOut:(out id *)arg2 underlyingErrorOut:(out id *)arg3;
+ (id)_endEventWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 startTime:(id)arg10 result:(long long)arg11 cloudKitManateeEnabled:(_Bool)arg12 internalSettingManateeEnabled:(_Bool)arg13 error:(id)arg14;
+ (id)endEventForStartEvent:(id)arg1 result:(long long)arg2 error:(id)arg3;
+ (id)endEventForOperation:(long long)arg1 operationIdentifier:(id)arg2 configuration:(id)arg3 container:(id)arg4 cloudKitIdentifier:(id)arg5 startTime:(id)arg6 result:(long long)arg7 error:(id)arg8;
@property(readonly, copy, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSNumber *timeIntervalSinceLastSuccess; // @synthesize timeIntervalSinceLastSuccess=_timeIntervalSinceLastSuccess;
@property(readonly, copy, nonatomic) NSNumber *countSinceLastSuccess; // @synthesize countSinceLastSuccess=_countSinceLastSuccess;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)codableRepresentationForAWDSubmission;
- (unsigned int)AWDMetricID;
- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 duration:(double)arg10 result:(long long)arg11 error:(id)arg12 underlyingError:(id)arg13 countSinceLastSuccess:(id)arg14 timeIntervalSinceLastSuccess:(id)arg15 cloudKitManateeEnabled:(_Bool)arg16 internalSettingManateeEnabled:(_Bool)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

