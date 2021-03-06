/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBHomeGestureSettings : PTSettings {
    double  _adaptiveThresholdsDecreasingRateFraction;
    double  _appSwitcherVelocityThresholdIncreasingRateFraction;
    double  _cardFlyInDelayAfterEnteringAppSwitcher;
    double  _cardFlyInMaximumVelocityThreshold;
    double  _centerYOffsetPercentOfScreenHeightPad;
    double  _centerYOffsetPercentOfScreenHeightPhone;
    double  _dockVelocityThresholdIncreasingRateFraction;
    double  _edgeDistanceToCorrectGestureFinalDestination;
    SBHomeGestureExclusionTrapezoidSettings * _exclusionTrapezoidSettings;
    bool  _homeGestureEnabled;
    double  _horizontalRubberbandDistance;
    double  _horizontalRubberbandEnd;
    double  _horizontalRubberbandExponent;
    double  _horizontalRubberbandStart;
    double  _hysteresis;
    bool  _injectGestureVelocityForZoomDown;
    double  _maximumAdaptivePauseVelocityThresholdForAppSwitcher;
    double  _maximumAdaptiveVelocityThresholdForDock;
    double  _maximumDistanceYThresholdToPresentDock;
    double  _maximumScaleVelocity;
    double  _maximumYDistanceToTriggerArcByDistance;
    double  _maximumYDistanceToTriggerArcByFlick;
    double  _minimumDistanceThresholdToScaleMultiplier;
    double  _minimumXDistanceForFirstArcSwipe;
    double  _minimumXDistanceToTriggerArcByDistanceLandscape;
    double  _minimumXDistanceToTriggerArcByDistancePortrait;
    double  _minimumYDistanceForHomeOrAppSwitcher;
    double  _minimumYDistanceToConsiderAccelerationDip;
    double  _minimumYVelocityForArcSwipe;
    double  _minimumYVelocityForHome;
    double  _morphSourceClipDuration;
    double  _morphTargetUnclipDuration;
    double  _normalizedDistanceYThresholdForUnconditionalHome;
    double  _normalizedDistanceYThresholdRangeForUnconditionalHome;
    bool  _onlyInjectVelocityForShortFlicks;
    double  _pauseVelocityThresholdForAppSwitcher;
    double  _pauseVelocityThresholdForDefiniteAppSwitcher;
    double  _positionVelocityXPercentOfGestureVelocityX;
    double  _positionVelocityYPercentOfGestureVelocityY;
    bool  _preventMultipleEdgesAfterAppInteraction;
    bool  _recognizeAlongEdge;
    bool  _resetSwitcherListAfterAppInteraction;
    double  _scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
    double  _secondsToAllowMultipleEdges;
    double  _secondsToResetSwitcherListAfterTransition;
    bool  _snapToMaxVelocityThresholdAfterAccelerationDip;
    double  _travelDistanceForTranslatingScreenHeight;
    double  _velocitySlopeThresholdForBottomSwipeUpArc;
    double  _velocitySlopeThresholdForCurrentLayout;
    double  _velocitySlopeThresholdForScrunchArc;
    double  _velocityXThresholdForUnconditionalArcSwipe;
    double  _velocityYThresholdForUnconditionalHome;
    double  _verticalRubberbandDistance;
    double  _verticalRubberbandEnd;
    double  _verticalRubberbandExponent;
    double  _verticalRubberbandStart;
}

@property (nonatomic) double adaptiveThresholdsDecreasingRateFraction;
@property (nonatomic) double appSwitcherVelocityThresholdIncreasingRateFraction;
@property (nonatomic) double cardFlyInDelayAfterEnteringAppSwitcher;
@property (nonatomic) double cardFlyInMaximumVelocityThreshold;
@property (nonatomic) double centerYOffsetPercentOfScreenHeightPad;
@property (nonatomic) double centerYOffsetPercentOfScreenHeightPhone;
@property (nonatomic) double dockVelocityThresholdIncreasingRateFraction;
@property (nonatomic) double edgeDistanceToCorrectGestureFinalDestination;
@property (nonatomic, retain) SBHomeGestureExclusionTrapezoidSettings *exclusionTrapezoidSettings;
@property (getter=isHomeGestureEnabled, nonatomic) bool homeGestureEnabled;
@property (nonatomic) double horizontalRubberbandDistance;
@property (nonatomic) double horizontalRubberbandEnd;
@property (nonatomic) double horizontalRubberbandExponent;
@property (nonatomic) double horizontalRubberbandStart;
@property (nonatomic) double hysteresis;
@property (nonatomic) bool injectGestureVelocityForZoomDown;
@property (nonatomic) double maximumAdaptivePauseVelocityThresholdForAppSwitcher;
@property (nonatomic) double maximumAdaptiveVelocityThresholdForDock;
@property (nonatomic) double maximumDistanceYThresholdToPresentDock;
@property (nonatomic) double maximumScaleVelocity;
@property (nonatomic) double maximumYDistanceToTriggerArcByDistance;
@property (nonatomic) double maximumYDistanceToTriggerArcByFlick;
@property (nonatomic) double minimumDistanceThresholdToScaleMultiplier;
@property (nonatomic) double minimumXDistanceForFirstArcSwipe;
@property (nonatomic) double minimumXDistanceToTriggerArcByDistanceLandscape;
@property (nonatomic) double minimumXDistanceToTriggerArcByDistancePortrait;
@property (nonatomic) double minimumYDistanceForHomeOrAppSwitcher;
@property (nonatomic) double minimumYDistanceToConsiderAccelerationDip;
@property (nonatomic) double minimumYVelocityForArcSwipe;
@property (nonatomic) double minimumYVelocityForHome;
@property (nonatomic) double morphSourceClipDuration;
@property (nonatomic) double morphTargetUnclipDuration;
@property (nonatomic) double normalizedDistanceYThresholdForUnconditionalHome;
@property (nonatomic) double normalizedDistanceYThresholdRangeForUnconditionalHome;
@property (nonatomic) bool onlyInjectVelocityForShortFlicks;
@property (nonatomic) double pauseVelocityThresholdForAppSwitcher;
@property (nonatomic) double pauseVelocityThresholdForDefiniteAppSwitcher;
@property (nonatomic) double positionVelocityXPercentOfGestureVelocityX;
@property (nonatomic) double positionVelocityYPercentOfGestureVelocityY;
@property (nonatomic) bool preventMultipleEdgesAfterAppInteraction;
@property (nonatomic) bool recognizeAlongEdge;
@property (nonatomic) bool resetSwitcherListAfterAppInteraction;
@property (nonatomic) double scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
@property (nonatomic) double secondsToAllowMultipleEdges;
@property (nonatomic) double secondsToResetSwitcherListAfterTransition;
@property (nonatomic) bool snapToMaxVelocityThresholdAfterAccelerationDip;
@property (nonatomic) double travelDistanceForTranslatingScreenHeight;
@property (nonatomic) double velocitySlopeThresholdForBottomSwipeUpArc;
@property (nonatomic) double velocitySlopeThresholdForCurrentLayout;
@property (nonatomic) double velocitySlopeThresholdForScrunchArc;
@property (nonatomic) double velocityXThresholdForUnconditionalArcSwipe;
@property (nonatomic) double velocityYThresholdForUnconditionalHome;
@property (nonatomic) double verticalRubberbandDistance;
@property (nonatomic) double verticalRubberbandEnd;
@property (nonatomic) double verticalRubberbandExponent;
@property (nonatomic) double verticalRubberbandStart;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)adaptiveThresholdsDecreasingRateFraction;
- (double)appSwitcherVelocityThresholdIncreasingRateFraction;
- (double)cardFlyInDelayAfterEnteringAppSwitcher;
- (double)cardFlyInMaximumVelocityThreshold;
- (double)centerYOffsetPercentOfScreenHeightPad;
- (double)centerYOffsetPercentOfScreenHeightPhone;
- (double)dockVelocityThresholdIncreasingRateFraction;
- (double)edgeDistanceToCorrectGestureFinalDestination;
- (id)exclusionTrapezoidSettings;
- (double)horizontalRubberbandDistance;
- (double)horizontalRubberbandEnd;
- (double)horizontalRubberbandExponent;
- (double)horizontalRubberbandStart;
- (double)hysteresis;
- (bool)injectGestureVelocityForZoomDown;
- (bool)isHomeGestureEnabled;
- (double)maximumAdaptivePauseVelocityThresholdForAppSwitcher;
- (double)maximumAdaptiveVelocityThresholdForDock;
- (double)maximumDistanceYThresholdToPresentDock;
- (double)maximumScaleVelocity;
- (double)maximumYDistanceToTriggerArcByDistance;
- (double)maximumYDistanceToTriggerArcByFlick;
- (double)minimumDistanceThresholdToScaleMultiplier;
- (double)minimumXDistanceForFirstArcSwipe;
- (double)minimumXDistanceToTriggerArcByDistanceLandscape;
- (double)minimumXDistanceToTriggerArcByDistancePortrait;
- (double)minimumYDistanceForHomeOrAppSwitcher;
- (double)minimumYDistanceToConsiderAccelerationDip;
- (double)minimumYVelocityForArcSwipe;
- (double)minimumYVelocityForHome;
- (double)morphSourceClipDuration;
- (double)morphTargetUnclipDuration;
- (double)normalizedDistanceYThresholdForUnconditionalHome;
- (double)normalizedDistanceYThresholdRangeForUnconditionalHome;
- (bool)onlyInjectVelocityForShortFlicks;
- (double)pauseVelocityThresholdForAppSwitcher;
- (double)pauseVelocityThresholdForDefiniteAppSwitcher;
- (double)positionVelocityXPercentOfGestureVelocityX;
- (double)positionVelocityYPercentOfGestureVelocityY;
- (bool)preventMultipleEdgesAfterAppInteraction;
- (bool)recognizeAlongEdge;
- (bool)resetSwitcherListAfterAppInteraction;
- (double)scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
- (double)secondsToAllowMultipleEdges;
- (double)secondsToResetSwitcherListAfterTransition;
- (void)setAdaptiveThresholdsDecreasingRateFraction:(double)arg1;
- (void)setAppSwitcherVelocityThresholdIncreasingRateFraction:(double)arg1;
- (void)setCardFlyInDelayAfterEnteringAppSwitcher:(double)arg1;
- (void)setCardFlyInMaximumVelocityThreshold:(double)arg1;
- (void)setCenterYOffsetPercentOfScreenHeightPad:(double)arg1;
- (void)setCenterYOffsetPercentOfScreenHeightPhone:(double)arg1;
- (void)setDefaultValues;
- (void)setDockVelocityThresholdIncreasingRateFraction:(double)arg1;
- (void)setEdgeDistanceToCorrectGestureFinalDestination:(double)arg1;
- (void)setExclusionTrapezoidSettings:(id)arg1;
- (void)setHomeGestureEnabled:(bool)arg1;
- (void)setHomeGestureTuningDefaults;
- (void)setHorizontalRubberbandDistance:(double)arg1;
- (void)setHorizontalRubberbandEnd:(double)arg1;
- (void)setHorizontalRubberbandExponent:(double)arg1;
- (void)setHorizontalRubberbandStart:(double)arg1;
- (void)setHysteresis:(double)arg1;
- (void)setInjectGestureVelocityForZoomDown:(bool)arg1;
- (void)setLatchDefaults;
- (void)setMaximumAdaptivePauseVelocityThresholdForAppSwitcher:(double)arg1;
- (void)setMaximumAdaptiveVelocityThresholdForDock:(double)arg1;
- (void)setMaximumDistanceYThresholdToPresentDock:(double)arg1;
- (void)setMaximumScaleVelocity:(double)arg1;
- (void)setMaximumYDistanceToTriggerArcByDistance:(double)arg1;
- (void)setMaximumYDistanceToTriggerArcByFlick:(double)arg1;
- (void)setMinimumDistanceThresholdToScaleMultiplier:(double)arg1;
- (void)setMinimumXDistanceForFirstArcSwipe:(double)arg1;
- (void)setMinimumXDistanceToTriggerArcByDistanceLandscape:(double)arg1;
- (void)setMinimumXDistanceToTriggerArcByDistancePortrait:(double)arg1;
- (void)setMinimumYDistanceForHomeOrAppSwitcher:(double)arg1;
- (void)setMinimumYDistanceToConsiderAccelerationDip:(double)arg1;
- (void)setMinimumYVelocityForArcSwipe:(double)arg1;
- (void)setMinimumYVelocityForHome:(double)arg1;
- (void)setMorphSourceClipDuration:(double)arg1;
- (void)setMorphTargetUnclipDuration:(double)arg1;
- (void)setNormalizedDistanceYThresholdForUnconditionalHome:(double)arg1;
- (void)setNormalizedDistanceYThresholdRangeForUnconditionalHome:(double)arg1;
- (void)setOnlyInjectVelocityForShortFlicks:(bool)arg1;
- (void)setPauseVelocityThresholdForAppSwitcher:(double)arg1;
- (void)setPauseVelocityThresholdForDefiniteAppSwitcher:(double)arg1;
- (void)setPositionVelocityXPercentOfGestureVelocityX:(double)arg1;
- (void)setPositionVelocityYPercentOfGestureVelocityY:(double)arg1;
- (void)setPreventMultipleEdgesAfterAppInteraction:(bool)arg1;
- (void)setRecognizeAlongEdge:(bool)arg1;
- (void)setResetSwitcherListAfterAppInteraction:(bool)arg1;
- (void)setScaleVelocityPercentOfGestureVelocityYDividedByViewHeight:(double)arg1;
- (void)setSecondsToAllowMultipleEdges:(double)arg1;
- (void)setSecondsToResetSwitcherListAfterTransition:(double)arg1;
- (void)setSnapToMaxVelocityThresholdAfterAccelerationDip:(bool)arg1;
- (void)setTravelDistanceForTranslatingScreenHeight:(double)arg1;
- (void)setVelocitySlopeThresholdForBottomSwipeUpArc:(double)arg1;
- (void)setVelocitySlopeThresholdForCurrentLayout:(double)arg1;
- (void)setVelocitySlopeThresholdForScrunchArc:(double)arg1;
- (void)setVelocityXThresholdForUnconditionalArcSwipe:(double)arg1;
- (void)setVelocityYThresholdForUnconditionalHome:(double)arg1;
- (void)setVerticalRubberbandDistance:(double)arg1;
- (void)setVerticalRubberbandEnd:(double)arg1;
- (void)setVerticalRubberbandExponent:(double)arg1;
- (void)setVerticalRubberbandStart:(double)arg1;
- (bool)snapToMaxVelocityThresholdAfterAccelerationDip;
- (double)travelDistanceForTranslatingScreenHeight;
- (double)velocitySlopeThresholdForBottomSwipeUpArc;
- (double)velocitySlopeThresholdForCurrentLayout;
- (double)velocitySlopeThresholdForScrunchArc;
- (double)velocityXThresholdForUnconditionalArcSwipe;
- (double)velocityYThresholdForUnconditionalHome;
- (double)verticalRubberbandDistance;
- (double)verticalRubberbandEnd;
- (double)verticalRubberbandExponent;
- (double)verticalRubberbandStart;

@end
