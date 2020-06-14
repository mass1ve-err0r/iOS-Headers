//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AgentSupervisor.h"

@class DaemonDatabase, DownloadSessionManager, NSHashTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DownloadAgentSupervisor : AgentSupervisor
{
    DaemonDatabase *_database;
    NSMutableSet *_dirtyProgress;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    NSObject<OS_dispatch_source> *_progressTimer;
    DownloadSessionManager *_sessionManager;
}

@property(readonly, nonatomic) DownloadSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
- (void).cxx_destruct;
- (void)_startProgressTimer;
- (void)_notifyObserversUsingBlock:(CDUnknownBlockType)arg1;
- (id)_createAgentForPID:(long long)arg1 withValues:(const id *)arg2 jobSupervisor:(id)arg3 inSession:(id)arg4;
- (void)_commitProgressTimer;
- (void)_didUnregisterAgentProgress:(id)arg1;
- (void)_didShutdownAgent:(id)arg1;
- (void)_didRegisterAgentProgress:(id)arg1;
- (void)_didRegisterAgent:(id)arg1;
- (void)_destroyAgentWithPID:(long long)arg1;
- (void)_currentStatesForPIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_currentStateForPID:(long long)arg1;
- (id)_createReferenceForAgent:(id)arg1;
- (id)_createReferenceForPID:(long long)arg1;
- (id)_createAgentsForPIDs:(id)arg1;
- (id)_createAgentForPID:(long long)arg1;
- (void)_applyTransitionContext:(id)arg1 toPID:(long long)arg2 handleResult:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end

