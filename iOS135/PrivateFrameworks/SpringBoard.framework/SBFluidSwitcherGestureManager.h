/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBFluidSwitcherGestureManager : NSObject <BSDescriptionProviding, BSTransactionObserver, PTSettingsKeyObserver, SBFluidSwitcherGestureWorkspaceTransactionDelegate, SBGrabberTongueDelegate, SBHomeGestureParticipantDelegate, SBHomeGrabberDelegate, SBLayoutStateTransitionObserver, SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate, SBPanSystemGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate> {
    SBFluidSwitcherPanGestureRecognizer * _activateReachabilityGestureRecognizer;
    SBFluidSwitcherGestureWorkspaceTransaction * _activeGestureTransaction;
    SBAppSwitcherDefaults * _appSwitcherDefaults;
    SBAppSwitcherSettings * _appSwitcherSettings;
    SBFluidSwitcherPanGestureRecognizer * _clickAndDragHomeGestureRecognizer;
    SBHomeGrabberView * _currentHomeGrabberView;
    SBGrabberTongue * _deckGrabberTongue;
    SBFluidSwitcherPanGestureRecognizer * _deckInSwitcherPanGestureRecognizer;
    SBSwitcherForcePressSystemGestureRecognizer * _deckSwitcherForcePressRecognizer;
    NSTimer * _delayedHomeGrabberUpdateTimer;
    <SBFluidSwitcherGestureManagerDelegate> * _delegate;
    SBMainDisplaySceneLayoutDragAndDropInteractionManager * _dragAndDropInteractionManager;
    UINotificationFeedbackGenerator * _edgeProtectFeedbackGenerator;
    UIView * _exclusionTrapezoidDebugView;
    SBGrabberTongue * _floatingAppGrabberTongue;
    SBFluidSwitcherViewController * _floatingSwitcherContentController;
    SBFluidScrunchGestureRecognizer * _fluidScrunchGestureRecognizer;
    SBHomeGestureParticipant * _homeGestureParticipant;
    SBHomeGestureSettings * _homeGestureSettings;
    SBFHomeGrabberSettings * _homeGrabberSettings;
    SBIndirectPanGestureRecognizer * _indirectBottomEdgePanGestureRecognizer;
    SBIndirectPanGestureRecognizer * _indirectDismissFloatingApplicationGestureRecognizer;
    SBFluidScrunchGestureRecognizer * _indirectFloatingAppScrunchGestureRecognizer;
    bool  _interactivelyPresentingTongue;
    BSMonotonicReferenceTime * _lastClickAndDragHomeGestureTimestamp;
    SBFluidSwitcherViewController * _mainSwitcherContentController;
    SBFluidSwitcherPanGestureRecognizer * _moveFloatingApplicationGestureRecognizer;
    SBPanSystemGestureRecognizer * _pinFloatingApplicationGestureRecognizer;
    bool  _playedEdgeProtectHaptic;
    SBReachabilitySettings * _reachabilitySettings;
    SBMainDisplaySceneLayoutViewController * _sceneLayoutViewController;
    bool  _shouldRubberbandGrabberViewForReduceMotion;
    SBFluidSwitcherPanGestureRecognizer * _swipeUpFloatingAppGestureRecognizer;
    UIHoverGestureRecognizer * _switcherHoverGestureRecognizer;
    SBPanSystemGestureRecognizer * _unpinSplitViewApplicationGestureRecognizer;
    bool  _usesHomeAffordanceRulesForGrabberTongue;
}

@property (nonatomic, retain) SBFluidSwitcherPanGestureRecognizer *activateReachabilityGestureRecognizer;
@property (nonatomic, retain) SBFluidSwitcherGestureWorkspaceTransaction *activeGestureTransaction;
@property (nonatomic, retain) SBAppSwitcherDefaults *appSwitcherDefaults;
@property (nonatomic, retain) SBAppSwitcherSettings *appSwitcherSettings;
@property (nonatomic, retain) SBFluidSwitcherPanGestureRecognizer *clickAndDragHomeGestureRecognizer;
@property (nonatomic) SBHomeGrabberView *currentHomeGrabberView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SBGrabberTongue *deckGrabberTongue;
@property (nonatomic, retain) SBFluidSwitcherPanGestureRecognizer *deckInSwitcherPanGestureRecognizer;
@property (nonatomic, retain) SBSwitcherForcePressSystemGestureRecognizer *deckSwitcherForcePressRecognizer;
@property (nonatomic, retain) NSTimer *delayedHomeGrabberUpdateTimer;
@property (nonatomic) <SBFluidSwitcherGestureManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBMainDisplaySceneLayoutDragAndDropInteractionManager *dragAndDropInteractionManager;
@property (nonatomic, retain) UINotificationFeedbackGenerator *edgeProtectFeedbackGenerator;
@property (nonatomic, retain) UIView *exclusionTrapezoidDebugView;
@property (nonatomic, retain) SBGrabberTongue *floatingAppGrabberTongue;
@property (nonatomic) SBFluidSwitcherViewController *floatingSwitcherContentController;
@property (nonatomic, retain) SBFluidScrunchGestureRecognizer *fluidScrunchGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureParticipant *homeGestureParticipant;
@property (nonatomic, retain) SBHomeGestureSettings *homeGestureSettings;
@property (nonatomic, retain) SBFHomeGrabberSettings *homeGrabberSettings;
@property (nonatomic, retain) SBIndirectPanGestureRecognizer *indirectBottomEdgePanGestureRecognizer;
@property (nonatomic, retain) SBIndirectPanGestureRecognizer *indirectDismissFloatingApplicationGestureRecognizer;
@property (nonatomic, retain) SBFluidScrunchGestureRecognizer *indirectFloatingAppScrunchGestureRecognizer;
@property (nonatomic) bool interactivelyPresentingTongue;
@property (nonatomic, retain) BSMonotonicReferenceTime *lastClickAndDragHomeGestureTimestamp;
@property (nonatomic) SBFluidSwitcherViewController *mainSwitcherContentController;
@property (nonatomic, retain) SBFluidSwitcherPanGestureRecognizer *moveFloatingApplicationGestureRecognizer;
@property (nonatomic, retain) SBPanSystemGestureRecognizer *pinFloatingApplicationGestureRecognizer;
@property (nonatomic) bool playedEdgeProtectHaptic;
@property (nonatomic, retain) SBReachabilitySettings *reachabilitySettings;
@property (nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (nonatomic) bool shouldRubberbandGrabberViewForReduceMotion;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFluidSwitcherPanGestureRecognizer *swipeUpFloatingAppGestureRecognizer;
@property (nonatomic, retain) UIHoverGestureRecognizer *switcherHoverGestureRecognizer;
@property (nonatomic, retain) SBPanSystemGestureRecognizer *unpinSplitViewApplicationGestureRecognizer;
@property (nonatomic) bool usesHomeAffordanceRulesForGrabberTongue;

- (void).cxx_destruct;
- (void)_configureFloatingApplicationGestureRecognizers;
- (void)_configureScrunchGesture;
- (void)_configureTransitionRequest:(id)arg1 forGestureBegin:(id)arg2;
- (id)_currentFloatingAppLayout;
- (id)_currentLayoutState;
- (long long)_currentUnlockedEnvironmentMode;
- (id)_deviceApplicationSceneEntityForFloatingApplicationGrabberTongue;
- (bool)_edgeLocationIsOutsideFloatingApplicationGrabberFreeRegion:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_floatingApplicationBounds;
- (Class)_fluidSwitcherGestureTransactionClassForGestureType:(long long)arg1;
- (long long)_gestureTypeForGestureRecognizer:(id)arg1;
- (void)_handleClickAndDragHomeGesture:(id)arg1;
- (void)_handleDeckSwitcherForcePressGesture:(id)arg1;
- (void)_handleDeckSwitcherPanGesture:(id)arg1;
- (void)_handleFloatingAppPresentGesture:(id)arg1;
- (void)_handleFluidGesture:(id)arg1;
- (void)_handleScrunchGesture:(id)arg1;
- (void)_handleSwitcherGestureBegan:(id)arg1;
- (void)_handleSwitcherPanGestureBegan:(id)arg1;
- (void)_handleSwitcherPanGestureChanged:(id)arg1;
- (void)_handleSwitcherPanGestureEnded:(id)arg1;
- (void)_handleWindowDragGestureRecognizer:(id)arg1;
- (void)_hideGrabberAnimated:(bool)arg1;
- (bool)_isEdgeLocationInHomeAffordanceRegion:(double)arg1;
- (bool)_isTransactionRunningForGestureRecognizer:(id)arg1;
- (id)_layoutElementViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setUpGestureRecognizers;
- (bool)_shouldAllowDeckBottomEdgeGestureToRecognizeFromEdges:(unsigned long long)arg1;
- (bool)_shouldAllowFloatingApplicationGesture:(id)arg1 gestureType:(unsigned long long)arg2 failureReason:(id*)arg3;
- (bool)_shouldBeginBottomEdgePanGesture:(id)arg1;
- (bool)_shouldBeginClickAndDragHomeGesture:(id)arg1;
- (bool)_shouldBeginDeckForcePressGesture:(id)arg1;
- (bool)_shouldBeginDeckInSwitcherPanGesture:(id)arg1;
- (bool)_shouldBeginFloatingApplicationMoveGesture:(id)arg1;
- (bool)_shouldBeginFloatingApplicationPinGesture:(id)arg1;
- (bool)_shouldBeginFloatingApplicationPresentGesture:(id)arg1;
- (bool)_shouldBeginFloatingApplicationSwipeUpGesture:(id)arg1;
- (bool)_shouldBeginFluidScrunchGesture:(id)arg1;
- (bool)_shouldBeginIndirectFloatingAppScrunchGesture:(id)arg1;
- (bool)_shouldBeginIndirectHomePanGesture:(id)arg1;
- (bool)_shouldBeginReachabilityGesture:(id)arg1;
- (bool)_shouldBeginSplitViewApplicationUnpinGesture:(id)arg1;
- (bool)_shouldClickAndDragHomeGesture:(id)arg1 receiveTouch:(id)arg2;
- (bool)_shouldDeckInSwitcherPanGesture:(id)arg1 receiveTouch:(id)arg2;
- (bool)_shouldFloatingApplicationMoveGesture:(id)arg1 receiveTouch:(id)arg2;
- (bool)_shouldFloatingApplicationPinGesture:(id)arg1 receiveTouch:(id)arg2;
- (bool)_shouldFloatingApplicationSwipeUpGesture:(id)arg1 receiveTouch:(id)arg2;
- (bool)_shouldIndirectFloatingAppScrunchGesture:(id)arg1 receiveTouch:(id)arg2;
- (bool)_shouldProtectEdgeLocation:(double)arg1;
- (bool)_shouldReachabilityGesture:(id)arg1 receiveTouch:(id)arg2;
- (bool)_shouldSplitViewApplicationUnpinGesture:(id)arg1 receiveTouch:(id)arg2;
- (bool)_shouldSuppressEdgeProtect;
- (bool)_shouldSuppressEdgeProtectToAllowSwipesImmediatelyAfterTransition;
- (void)_startFluidSwitcherTransactionForGestureRecognizer:(id)arg1;
- (id)_switcherViewControllerForGestureRecognizer:(id)arg1;
- (void)_updateDeckSwitcherForcePressGesturePresence;
- (void)_updateDeckSwitcherInSwitcherAndReachabilityGesturePresence;
- (void)_updateExclusionTrapezoidDebugView;
- (void)_updateHomeGrabberWithAnimationMode:(long long)arg1;
- (void)_updateReachabilityGestureSettings;
- (void)_updateSwitcherBottomEdgeGesturePresence;
- (id)activateReachabilityGestureRecognizer;
- (id)activeGestureTransaction;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (id)appSwitcherDefaults;
- (id)appSwitcherSettings;
- (id)clickAndDragHomeGestureRecognizer;
- (void)completeGestureWithTransitionRequest:(id)arg1;
- (void)configureIndirectBottomEdgePanGestureRecognizer;
- (id)currentHomeGrabberView;
- (id)customGestureRecognizerForGrabberTongue:(id)arg1;
- (void)dealloc;
- (id)deckGrabberTongue;
- (id)deckInSwitcherPanGestureRecognizer;
- (id)deckSwitcherForcePressRecognizer;
- (id)delayedHomeGrabberUpdateTimer;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dragAndDropInteractionManager;
- (void)dragAndDropInteractionManager:(id)arg1 didBeginDraggingWindowWithSceneIdentifier:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didBeginGesture:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didEndGesture:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didUpdateGesture:(id)arg2;
- (id)dragAndDropInteractionManager:(id)arg1 displayItemForDraggingWindowWithGestureRecognizer:(id)arg2;
- (id)dragAndDropInteractionManager:(id)arg1 sourceViewProviderForDraggingWindowWithGestureRecognizer:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 willEndDraggingWindowWithSceneIdentifier:(id)arg2;
- (id)edgeProtectFeedbackGenerator;
- (id)exclusionTrapezoidDebugView;
- (void)failMultitaskingGesturesForReason:(id)arg1;
- (id)floatingAppGrabberTongue;
- (id)floatingSwitcherContentController;
- (id)fluidScrunchGestureRecognizer;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didBeginGesture:(id)arg2;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didEndGesture:(id)arg2;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didUpdateGesture:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)grabberTongue:(id)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2;
- (bool)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
- (void)grabberTongueDidPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
- (bool)grabberTongueOrPullEnabled:(id)arg1 forGestureRecognizer:(id)arg2;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4;
- (void)grabberTongueWillDismiss:(id)arg1;
- (void)grabberTongueWillPresent:(id)arg1;
- (void)grabberTongueWillPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (id)homeGestureParticipant;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)homeGestureSettings;
- (id)homeGrabberSettings;
- (id)indirectBottomEdgePanGestureRecognizer;
- (id)indirectDismissFloatingApplicationGestureRecognizer;
- (id)indirectFloatingAppScrunchGestureRecognizer;
- (id)indirectPanGestureRecognizerForGrabberTongue:(id)arg1;
- (unsigned long long)indirectPanSystemGestureTypeForGrabberTongue:(id)arg1;
- (id)initWithMainSwitcherContentController:(id)arg1 floatingSwitcherContentController:(id)arg2 sceneLayoutViewController:(id)arg3 delegate:(id)arg4;
- (bool)interactivelyPresentingTongue;
- (void)invalidate;
- (id)lastClickAndDragHomeGestureTimestamp;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (id)mainSwitcherContentController;
- (id)moveFloatingApplicationGestureRecognizer;
- (id)pinFloatingApplicationGestureRecognizer;
- (bool)playedEdgeProtectHaptic;
- (id)reachabilitySettings;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)arg1;
- (id)sceneLayoutViewController;
- (void)setActivateReachabilityGestureRecognizer:(id)arg1;
- (void)setActiveGestureTransaction:(id)arg1;
- (void)setAppSwitcherDefaults:(id)arg1;
- (void)setAppSwitcherSettings:(id)arg1;
- (void)setClickAndDragHomeGestureRecognizer:(id)arg1;
- (void)setCurrentHomeGrabberView:(id)arg1;
- (void)setDeckGrabberTongue:(id)arg1;
- (void)setDeckInSwitcherPanGestureRecognizer:(id)arg1;
- (void)setDeckSwitcherForcePressRecognizer:(id)arg1;
- (void)setDelayedHomeGrabberUpdateTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragAndDropInteractionManager:(id)arg1;
- (void)setEdgeProtectFeedbackGenerator:(id)arg1;
- (void)setExclusionTrapezoidDebugView:(id)arg1;
- (void)setFloatingAppGrabberTongue:(id)arg1;
- (void)setFloatingSwitcherContentController:(id)arg1;
- (void)setFluidScrunchGestureRecognizer:(id)arg1;
- (void)setHomeGestureParticipant:(id)arg1;
- (void)setHomeGestureSettings:(id)arg1;
- (void)setHomeGrabberSettings:(id)arg1;
- (void)setIndirectBottomEdgePanGestureRecognizer:(id)arg1;
- (void)setIndirectDismissFloatingApplicationGestureRecognizer:(id)arg1;
- (void)setIndirectFloatingAppScrunchGestureRecognizer:(id)arg1;
- (void)setInteractivelyPresentingTongue:(bool)arg1;
- (void)setLastClickAndDragHomeGestureTimestamp:(id)arg1;
- (void)setMainSwitcherContentController:(id)arg1;
- (void)setMoveFloatingApplicationGestureRecognizer:(id)arg1;
- (void)setPinFloatingApplicationGestureRecognizer:(id)arg1;
- (void)setPlayedEdgeProtectHaptic:(bool)arg1;
- (void)setReachabilitySettings:(id)arg1;
- (void)setSceneLayoutViewController:(id)arg1;
- (void)setShouldRubberbandGrabberViewForReduceMotion:(bool)arg1;
- (void)setSwipeUpFloatingAppGestureRecognizer:(id)arg1;
- (void)setSwitcherHoverGestureRecognizer:(id)arg1;
- (void)setUnpinSplitViewApplicationGestureRecognizer:(id)arg1;
- (void)setUsesHomeAffordanceRulesForGrabberTongue:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (bool)shouldRubberbandGrabberViewForReduceMotion;
- (bool)shouldSuppressTongueViewForGrabberTongue:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)swipeUpFloatingAppGestureRecognizer;
- (id)switcherHoverGestureRecognizer;
- (void)takeHiddenAssertionForHomeGrabber:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (id)unpinSplitViewApplicationGestureRecognizer;
- (bool)usesHomeAffordanceRulesForGrabberTongue;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end
