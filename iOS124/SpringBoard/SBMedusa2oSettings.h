//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBUISettings.h"

@class SBFluidBehaviorSettings;

@interface SBMedusa2oSettings : SBUISettings
{
    _Bool _persistentDock;
    double _numberOfRecents;
    double _dismissHitTestTopPadding;
    SBFluidBehaviorSettings *_dockAnimationSettings;
    SBFluidBehaviorSettings *_dockWithPresentedFolderAnimationSettings;
    double _diffuseShadowOpacity;
    double _horizontalDiffuseShadowOffset;
    double _verticalDiffuseShadowOffset;
    double _diffuseShadowRadius;
    double _rimShadowOpacity;
    double _rimShadowRadius;
    double _narrowEdgeSwipeHitTestWidth;
    double _halfHalfEdgeSwipeHitTestWidth;
    double _fullScreenEdgeInset;
    double _blurFadeAnimationDuration;
    double _reduceMotionBlurFadeAnimationDuration;
    double _gestureRubberbandCoefficient;
    SBFluidBehaviorSettings *_medusaAnimationSettings;
    double _movePanGestureThresholdPercentage;
    double _movePanGesturePositiveVelocityThreshold;
    double _movePanGestureNegativeVelocityThreshold;
    double _pinUnpinPanGestureTravelDistance;
    double _pinUnpinPanGestureThresholdPercentage;
    double _pinUnpinPanGestureMaximumScale;
    double _pinPanUpGestureTravelDistance;
    double _pinPanUpGestureThresholdPercentage;
    double _pinPanUpGestureRubberbandCoefficient;
    double _draggingPlatterWidthInPortraitScale;
    double _draggingPlatterHeightInPortraitScale;
    double _draggingPlatterWidthInLandscapeScale;
    double _draggingPlatterHeightInLandscapeScale;
    double _draggingPlatterSideActivationGutterPadding;
    double _cornerRadiusForInnerCorners;
    double _cornerRadiusForCompatibilityAppOuterCorners;
    double _cornerRadiusForFloatingApps;
    double _cornerRadiusFallbackForOldApps;
}

+ (id)settingsControllerModule;
@property(nonatomic) double cornerRadiusFallbackForOldApps; // @synthesize cornerRadiusFallbackForOldApps=_cornerRadiusFallbackForOldApps;
@property(nonatomic) double cornerRadiusForFloatingApps; // @synthesize cornerRadiusForFloatingApps=_cornerRadiusForFloatingApps;
@property(nonatomic) double cornerRadiusForCompatibilityAppOuterCorners; // @synthesize cornerRadiusForCompatibilityAppOuterCorners=_cornerRadiusForCompatibilityAppOuterCorners;
@property(nonatomic) double cornerRadiusForInnerCorners; // @synthesize cornerRadiusForInnerCorners=_cornerRadiusForInnerCorners;
@property(nonatomic) double draggingPlatterSideActivationGutterPadding; // @synthesize draggingPlatterSideActivationGutterPadding=_draggingPlatterSideActivationGutterPadding;
@property(nonatomic) double draggingPlatterHeightInLandscapeScale; // @synthesize draggingPlatterHeightInLandscapeScale=_draggingPlatterHeightInLandscapeScale;
@property(nonatomic) double draggingPlatterWidthInLandscapeScale; // @synthesize draggingPlatterWidthInLandscapeScale=_draggingPlatterWidthInLandscapeScale;
@property(nonatomic) double draggingPlatterHeightInPortraitScale; // @synthesize draggingPlatterHeightInPortraitScale=_draggingPlatterHeightInPortraitScale;
@property(nonatomic) double draggingPlatterWidthInPortraitScale; // @synthesize draggingPlatterWidthInPortraitScale=_draggingPlatterWidthInPortraitScale;
@property(nonatomic) double pinPanUpGestureRubberbandCoefficient; // @synthesize pinPanUpGestureRubberbandCoefficient=_pinPanUpGestureRubberbandCoefficient;
@property(nonatomic) double pinPanUpGestureThresholdPercentage; // @synthesize pinPanUpGestureThresholdPercentage=_pinPanUpGestureThresholdPercentage;
@property(nonatomic) double pinPanUpGestureTravelDistance; // @synthesize pinPanUpGestureTravelDistance=_pinPanUpGestureTravelDistance;
@property(nonatomic) double pinUnpinPanGestureMaximumScale; // @synthesize pinUnpinPanGestureMaximumScale=_pinUnpinPanGestureMaximumScale;
@property(nonatomic) double pinUnpinPanGestureThresholdPercentage; // @synthesize pinUnpinPanGestureThresholdPercentage=_pinUnpinPanGestureThresholdPercentage;
@property(nonatomic) double pinUnpinPanGestureTravelDistance; // @synthesize pinUnpinPanGestureTravelDistance=_pinUnpinPanGestureTravelDistance;
@property(nonatomic) double movePanGestureNegativeVelocityThreshold; // @synthesize movePanGestureNegativeVelocityThreshold=_movePanGestureNegativeVelocityThreshold;
@property(nonatomic) double movePanGesturePositiveVelocityThreshold; // @synthesize movePanGesturePositiveVelocityThreshold=_movePanGesturePositiveVelocityThreshold;
@property(nonatomic) double movePanGestureThresholdPercentage; // @synthesize movePanGestureThresholdPercentage=_movePanGestureThresholdPercentage;
@property(retain, nonatomic) SBFluidBehaviorSettings *medusaAnimationSettings; // @synthesize medusaAnimationSettings=_medusaAnimationSettings;
@property(nonatomic) double gestureRubberbandCoefficient; // @synthesize gestureRubberbandCoefficient=_gestureRubberbandCoefficient;
@property(nonatomic) double reduceMotionBlurFadeAnimationDuration; // @synthesize reduceMotionBlurFadeAnimationDuration=_reduceMotionBlurFadeAnimationDuration;
@property(nonatomic) double blurFadeAnimationDuration; // @synthesize blurFadeAnimationDuration=_blurFadeAnimationDuration;
@property(nonatomic) double fullScreenEdgeInset; // @synthesize fullScreenEdgeInset=_fullScreenEdgeInset;
@property(nonatomic) double halfHalfEdgeSwipeHitTestWidth; // @synthesize halfHalfEdgeSwipeHitTestWidth=_halfHalfEdgeSwipeHitTestWidth;
@property(nonatomic) double narrowEdgeSwipeHitTestWidth; // @synthesize narrowEdgeSwipeHitTestWidth=_narrowEdgeSwipeHitTestWidth;
@property(nonatomic) double rimShadowRadius; // @synthesize rimShadowRadius=_rimShadowRadius;
@property(nonatomic) double rimShadowOpacity; // @synthesize rimShadowOpacity=_rimShadowOpacity;
@property(nonatomic) double diffuseShadowRadius; // @synthesize diffuseShadowRadius=_diffuseShadowRadius;
@property(nonatomic) double verticalDiffuseShadowOffset; // @synthesize verticalDiffuseShadowOffset=_verticalDiffuseShadowOffset;
@property(nonatomic) double horizontalDiffuseShadowOffset; // @synthesize horizontalDiffuseShadowOffset=_horizontalDiffuseShadowOffset;
@property(nonatomic) double diffuseShadowOpacity; // @synthesize diffuseShadowOpacity=_diffuseShadowOpacity;
@property(retain, nonatomic) SBFluidBehaviorSettings *dockWithPresentedFolderAnimationSettings; // @synthesize dockWithPresentedFolderAnimationSettings=_dockWithPresentedFolderAnimationSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *dockAnimationSettings; // @synthesize dockAnimationSettings=_dockAnimationSettings;
@property(nonatomic) double dismissHitTestTopPadding; // @synthesize dismissHitTestTopPadding=_dismissHitTestTopPadding;
@property(nonatomic) double numberOfRecents; // @synthesize numberOfRecents=_numberOfRecents;
@property(nonatomic) _Bool persistentDock; // @synthesize persistentDock=_persistentDock;
- (void).cxx_destruct;
- (double)effectiveBlurFadeAnimationDuration;
- (void)setDefaultValues;

@end

