//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

#import <RelevanceEngine/RELoggable-Protocol.h>
#import <RelevanceEngine/RERemoteTrainingClientListenerDelegate-Protocol.h>

@class NSMutableArray, NSMutableSet, NSObject, NSString, RELiveElementCoordinator, REMLModelManager, RERemoteTrainingClientListener, RETrainingContext, RETrainingScheduler;
@protocol OS_dispatch_queue;

@interface RETrainingManager : RERelevanceEngineSubsystem <RELoggable, RERemoteTrainingClientListenerDelegate>
{
    RELiveElementCoordinator *_coordinator;
    REMLModelManager *_modelManager;
    RETrainingScheduler *_trainingScheduler;
    NSMutableSet *_trainingContexts;
    NSObject<OS_dispatch_queue> *_queue;
    RERemoteTrainingClientListener *_remoteTrainingListener;
    NSMutableArray *_trainingFeatureMaps;
    NSMutableArray *_trainingContents;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_interactionTypes;
    RETrainingContext *_currentTrainingContext;
}

@property(retain) RETrainingContext *currentTrainingContext; // @synthesize currentTrainingContext=_currentTrainingContext;
- (void).cxx_destruct;
- (void)collectLoggableState:(CDUnknownBlockType)arg1;
- (void)remoteTrainingClientListenerDidDisconnectContext:(id)arg1;
- (void)remoteTrainingClientListenerDidConnectContext:(id)arg1;
- (void)makeContextCurrent:(id)arg1;
- (void)_performTrainingWithForced:(_Bool)arg1;
- (void)manuallyPerformTraining;
- (void)_queue_trainElement:(id)arg1 featureMap:(id)arg2 isPositiveEvent:(_Bool)arg3 interaction:(id)arg4 context:(id)arg5;
- (void)performTrainingForElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)flushTraining;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;
- (void)removeTrainingContext:(id)arg1;
- (void)addTrainingContext:(id)arg1;
- (void)dealloc;
- (id)initWithRelevanceEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

