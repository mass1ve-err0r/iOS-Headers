//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLModelWeights, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLLogRegTrackerProtocol, PMLNoiseStrategy;

@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    id <PMLLogRegTrackerProtocol> _tracker;
    id <PMLNoiseStrategy> _noiseStrategy;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _maxSessionsLimit;
    unsigned long long _sessionsInBatch;
    unsigned long long _currentServerIteration;
    PMLModelWeights *_currentModelWeights;
    unsigned long long _localGradientIterations;
    float _localLearningRate;
    float _stoppingThreshold;
    unsigned long long _localMinimumIterations;
    _Bool _useOnlyAppleInternalSessions;
    double _skew;
    double _threshold;
    _Bool _isMultiLabel;
    unsigned long long _positiveLabel;
    unsigned long long _evaluationLevel;
    _Bool _reportScale;
    _Bool _isSynchronous;
    _Bool _intercept;
    struct NSString *_planId;
}

+ (id)planWithStore:(id)arg1 tracker:(id)arg2 sessionDescriptor:(id)arg3 arguments:(id)arg4;
@property(readonly, nonatomic) _Bool reportScale; // @synthesize reportScale=_reportScale;
@property(readonly, nonatomic) unsigned long long evaluationLevel; // @synthesize evaluationLevel=_evaluationLevel;
@property(readonly, nonatomic) _Bool intercept; // @synthesize intercept=_intercept;
@property(readonly, nonatomic) unsigned long long positiveLabel; // @synthesize positiveLabel=_positiveLabel;
@property(readonly, nonatomic) _Bool isMultiLabel; // @synthesize isMultiLabel=_isMultiLabel;
@property(readonly, nonatomic) _Bool useOnlyAppleInternalSessions; // @synthesize useOnlyAppleInternalSessions=_useOnlyAppleInternalSessions;
@property(readonly, nonatomic) unsigned long long localGradientIterations; // @synthesize localGradientIterations=_localGradientIterations;
@property(readonly, nonatomic) unsigned long long localMinimumIterations; // @synthesize localMinimumIterations=_localMinimumIterations;
@property(readonly, nonatomic) float stoppingThreshold; // @synthesize stoppingThreshold=_stoppingThreshold;
@property(readonly, nonatomic) float localLearningRate; // @synthesize localLearningRate=_localLearningRate;
@property(readonly, nonatomic) PMLModelWeights *currentModelWeights; // @synthesize currentModelWeights=_currentModelWeights;
@property(readonly, nonatomic) unsigned long long maxSessionsLimit; // @synthesize maxSessionsLimit=_maxSessionsLimit;
@property(readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
@property(readonly, nonatomic) unsigned long long currentServerIteration; // @synthesize currentServerIteration=_currentServerIteration;
@property(readonly, nonatomic) id <PMLLogRegTrackerProtocol> tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) PMLTrainingStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) _Bool isSynchronous; // @synthesize isSynchronous=_isSynchronous;
@property(readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
- (void).cxx_destruct;
- (void)runUntilDoneForTesting;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
@property(readonly, copy) NSString *description;
- (id)normalizeRegressor:(id)arg1;
- (void)loadSessionsWithBlock:(CDUnknownBlockType)arg1;
- (id)evaluationMetricsForPredictions:(id)arg1 objectives:(id)arg2 predicate:(CDUnknownBlockType)arg3 start:(id)arg4;
- (id)train;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString *)arg4 isSynchronous:(_Bool)arg5 sessionDescriptor:(id)arg6 maxSessionsLimit:(unsigned long long)arg7 sessionsInBatch:(unsigned long long)arg8 currentServerIteration:(unsigned long long)arg9 currentModelWeights:(id)arg10 localLearningRate:(float)arg11 stoppingThreshold:(float)arg12 localMinimumIterations:(unsigned long long)arg13 localGradientIterations:(unsigned long long)arg14 useOnlyAppleInternalSessions:(_Bool)arg15 skew:(double)arg16 threshold:(double)arg17 isMultiLabel:(_Bool)arg18 intercept:(_Bool)arg19 positiveLabel:(unsigned long long)arg20 evaluationLevel:(unsigned long long)arg21 reportScale:(_Bool)arg22;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

