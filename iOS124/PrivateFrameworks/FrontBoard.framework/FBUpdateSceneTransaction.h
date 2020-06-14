//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/FBSceneManagerObserver-Protocol.h>
#import <FrontBoard/FBSynchronizedTransaction-Protocol.h>

@class FBSSceneDefinition, FBSSceneParameters, FBSSceneSettings, FBSSceneSpecification, FBSSceneTransitionContext, FBScene, FBSceneManager, FBWaitForSceneDestructionTransaction, NSString;
@protocol FBSynchronizedTransactionDelegate;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneManagerObserver, FBSynchronizedTransaction>
{
    FBSceneManager *_sceneManager;
    NSString *_sceneID;
    FBSSceneDefinition *_definition;
    FBSSceneParameters *_parameters;
    FBSSceneTransitionContext *_transitionContext;
    FBWaitForSceneDestructionTransaction *_destructionTransaction;
    id <FBSynchronizedTransactionDelegate> _synchronizationDelegate;
    unsigned long long _transactionID;
    _Bool _waitsForSceneCommit;
    _Bool _readyToCommit;
    _Bool _didCommit;
    _Bool _destroyed;
}

@property(nonatomic) __weak id <FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;
@property(nonatomic) _Bool waitsForSceneCommit; // @synthesize waitsForSceneCommit=_waitsForSceneCommit;
@property(readonly, nonatomic) _Bool destroyed; // @synthesize destroyed=_destroyed;
@property(readonly, nonatomic) FBSSceneTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneID;
- (void).cxx_destruct;
- (void)_enumerateUpdateSceneObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(_Bool)arg4;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (id)_customizedDescriptionProperties;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)_performCommit;
- (void)_commitSceneOrWait;
- (void)_updateScene;
- (void)_createScene;
- (void)_commitSceneUpdate:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) FBSSceneSpecification *specification; // @dynamic specification;
@property(readonly, nonatomic) FBSSceneSettings *newSettings; // @dynamic newSettings;
@property(readonly, nonatomic) FBSSceneSettings *settings; // @dynamic settings;
@property(readonly, nonatomic) FBScene *scene; // @dynamic scene;
- (void)dealloc;
- (id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3;
- (id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4;
- (id)initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 display:(id)arg3 newSettings:(id)arg4 transitionContext:(id)arg5 clientProviderProvider:(CDUnknownBlockType)arg6 initialClientSettingsProvider:(CDUnknownBlockType)arg7;
- (id)_initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

