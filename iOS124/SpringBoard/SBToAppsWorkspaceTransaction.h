//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

#import "FBApplicationUpdateScenesTransactionObserver-Protocol.h"
#import "FBSynchronizedTransactionDelegate-Protocol.h"
#import "SBSceneLayoutWorkspaceTransactionDelegate-Protocol.h"
#import "SBUIAnimationControllerObserver-Protocol.h"

@class FBUIApplicationSceneDeactivationAssertion, NSCountedSet, NSSet, NSString, SBAppRepairTransaction, SBFloatingDockBehaviorAssertion, SBSceneLayoutWorkspaceTransaction, SBUIAnimationController;

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationUpdateScenesTransactionObserver, SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver>
{
    CDUnknownBlockType _transitionCompletion;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    CDUnknownBlockType _layoutTransitionContinuation;
    SBAppRepairTransaction *_appRepairTransaction;
    SBUIAnimationController *_animationController;
    NSCountedSet *_completionDelayRequesters;
    _Bool _underLockScreenInForeground;
    _Bool _gestureInitiated;
    unsigned long long _preactivationForegroundRunningApplicationCount;
    _Bool _toAndFromApplicationsDiffer;
    _Bool _retriedAfterVoluntaryExit;
    _Bool _applicationStateNeedsCapture;
    _Bool _dismissedOverlays;
    _Bool _shouldDismissOverlays;
    SBSceneLayoutWorkspaceTransaction *_layoutTransaction;
    SBFloatingDockBehaviorAssertion *_floatingDockAssertion;
}

+ (_Bool)canInterruptTransaction:(id)arg1 forTransitionRequest:(id)arg2;
+ (id)_copyTransitionRequest:(id)arg1;
@property(retain, nonatomic) SBFloatingDockBehaviorAssertion *floatingDockAssertion; // @synthesize floatingDockAssertion=_floatingDockAssertion;
@property(readonly, nonatomic) SBSceneLayoutWorkspaceTransaction *layoutTransaction; // @synthesize layoutTransaction=_layoutTransaction;
- (void).cxx_destruct;
- (void)_fireAndClearResultBlockIfNecessaryForFailure:(_Bool)arg1;
- (id)animationController;
- (void)animationControllerDidRevealApplication:(id)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2;
- (_Bool)shouldWatchdog:(id *)arg1;
- (double)watchdogTimeout;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (id)createSceneEntityForHandle:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_willFailWithReason:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_willBegin;
- (void)_logForInterruptAttemptReason:(id)arg1;
- (void)_captureApplicationState;
- (void)_checkForAnimationCompletion;
- (void)_noteAnimationFinished;
- (void)_clearAnimation;
- (void)_beginAnimationIfNecessary;
- (_Bool)_beginAnimation;
- (void)_configureAnimation;
- (void)_performPostAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPreAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasPostAnimationTasks;
- (_Bool)_hasPreAnimationTasks;
- (void)_animationDidRevealApplication;
- (void)_animationDidFinish;
- (void)_animationWillBegin:(_Bool)arg1;
- (id)_setupAnimation;
- (_Bool)_shouldResignActiveForAnimation;
- (void)_setShouldDismissOverlays:(_Bool)arg1;
- (_Bool)_shouldDismissOverlays;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_synchronizeWithSceneUpdates;
- (_Bool)_transitionWasCancelled;
- (void)_endTransition;
- (void)_beginTransition;
- (void)_stopDelayingTransitionCompletionForRequester:(id)arg1;
- (void)_delayTransitionCompletionForRequester:(id)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_relinquishResignActiveAssertion;
- (void)_acquireResignActiveAssertion;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (void)_completeCurrentTransition;
- (id)_transitionContext;
- (id)_scenesToBackground;
- (void)activateApplications;
- (_Bool)toAndFromAppsDiffer;
- (_Bool)isGoingToLauncher;
- (void)performToAppStateCleanup;
- (_Bool)shouldAnimateOrientationChangeOnCompletion;
- (_Bool)isGoingToCoverSheet;
- (_Bool)isGoingToMainSwitcher;
- (_Bool)isFromMainSwitcher;
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (_Bool)shouldRestoreSpringBoardContentOnCleanup;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
@property(readonly, nonatomic) NSSet *fromApplicationSceneEntities;
@property(readonly, nonatomic) NSSet *toApplicationSceneEntities;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

