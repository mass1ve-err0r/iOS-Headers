//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _firstSceneReferenceLocation;
    struct CGPoint _lastSceneReferenceLocation;
    double _lastTouchTime;
    id _velocitySample;
    id _previousVelocitySample;
    NSMutableArray *_touches;
    unsigned long long _lastTouchCount;
    unsigned long long _minimumNumberOfTouches;
    unsigned long long _maximumNumberOfTouches;
    double _hysteresis;
    double _allowableSeparation;
    struct CGPoint _lastUnadjustedSceneReferenceLocation;
    double _allowableTouchTimeSeparation;
    unsigned int _failsPastMaxTouches:1;
    unsigned int _failsPastHysteresisWithoutMinTouches:1;
    unsigned int _canPanHorizontally:1;
    unsigned int _canPanVertically:1;
    unsigned int _ignoresStationaryTouches:1;
    unsigned int _multitouchTimerOn:1;
    unsigned int _requiresImmediateMultipleTouches:1;
    NSMutableArray *_movingTouches;
    struct CGPoint _digitizerLocation;
}

+ (void)_setPanGestureRecognizersEnabled:(_Bool)arg1;
+ (_Bool)_shouldDefaultToTouches;
+ (double)_defaultHysteresis;
@property(readonly, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample; // @synthesize _previousVelocitySample;
@property(readonly, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample; // @synthesize _velocitySample;
@property(nonatomic) unsigned long long maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property(nonatomic) unsigned long long minimumNumberOfTouches; // @synthesize minimumNumberOfTouches=_minimumNumberOfTouches;
- (void).cxx_destruct;
- (void)_updateDigitizerLocationWithEvent:(id)arg1;
- (struct CGPoint)_digitizerLocation;
- (void)_ignoreTouches:(id)arg1 forEvent:(id)arg2;
- (id)_activeTouches;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationInView:(id)arg1;
- (void)_ignoreTouchForTouchIdentifier:(unsigned int)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(CDUnknownBlockType)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_updateMovingTouchesArraySavingOldArray:(id *)arg1;
- (_Bool)_touchesExceedAllowableSeparation;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (void)_removeHysteresisFromTranslation;
- (_Bool)_shouldTryToBeginWithEvent:(id)arg1;
- (_Bool)_willScrollY;
- (_Bool)_willScrollX;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (struct CGPoint)_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint)arg1 lockingToAxis:(int)arg2;
- (struct UIOffset)_offsetInViewFromSceneReferenceLocation:(struct CGPoint)arg1 toSceneReferenceLocation:(struct CGPoint)arg2;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (struct CGPoint)velocityInView:(id)arg1;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (void)_setCanPanVertically:(_Bool)arg1;
- (void)_setCanPanHorizontally:(_Bool)arg1;
- (_Bool)_canPanVertically;
- (_Bool)_canPanHorizontally;
- (_Bool)_ignoresStationaryTouches;
- (void)_setIgnoresStationaryTouches:(_Bool)arg1;
- (_Bool)_requiresImmediateMultipleTouches;
- (void)_setRequiresImmediateMultipleTouches:(_Bool)arg1;
- (double)_allowableTouchTimeSeparation;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (double)_allowableSeparation;
- (void)_setAllowableSeparation:(double)arg1;
- (double)_hysteresis;
- (void)_setHysteresis:(double)arg1;
- (long long)_lastTouchCount;
- (_Bool)_failsPastHysteresisWithoutMinTouches;
- (void)_setFailsPastHysteresisWithoutMinTouches:(_Bool)arg1;
- (_Bool)failsPastMaxTouches;
- (void)setFailsPastMaxTouches:(_Bool)arg1;
- (void)multitouchExpired:(id)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (void)clearMultitouchTimer;
- (void)_resetGestureRecognizer;
- (void)_resetVelocitySamples;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

