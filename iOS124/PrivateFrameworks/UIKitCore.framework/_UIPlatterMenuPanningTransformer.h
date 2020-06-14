//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, _UIVelocityIntegrator;
@protocol _UIPlatterMenuPanningTransformerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuPanningTransformer : NSObject
{
    int _axisLock;
    int _overrideLockAxis;
    id <_UIPlatterMenuPanningTransformerDelegate> _delegate;
    double _minimumXVelocityForAxisLock;
    double _lastAxisLockTime;
    NSDate *_timeForLastDirectionalChange;
    NSDate *_panBeginTime;
    _UIVelocityIntegrator *_velocityIntegrator;
    struct CGPoint _transitionZonePosition;
    struct CGSize _transitionZoneSize;
    struct CGPoint _lastTouchPosition;
    struct CGVector _lastOffset;
    struct CGPoint _lastTransformedPoint;
    struct CGPoint _panBeginTouchPosition;
    struct CGPoint _lastDirectionChangeTouchPosition;
    struct CGRect _transitionZoneRect;
}

+ (id)transformerWithAxisTransitionZonePosition:(struct CGPoint)arg1 axisTransitionZoneSize:(struct CGSize)arg2;
@property(retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;
@property(retain, nonatomic) NSDate *panBeginTime; // @synthesize panBeginTime=_panBeginTime;
@property(nonatomic) struct CGPoint lastDirectionChangeTouchPosition; // @synthesize lastDirectionChangeTouchPosition=_lastDirectionChangeTouchPosition;
@property(nonatomic) struct CGPoint panBeginTouchPosition; // @synthesize panBeginTouchPosition=_panBeginTouchPosition;
@property(nonatomic) struct CGPoint lastTransformedPoint; // @synthesize lastTransformedPoint=_lastTransformedPoint;
@property(retain, nonatomic) NSDate *timeForLastDirectionalChange; // @synthesize timeForLastDirectionalChange=_timeForLastDirectionalChange;
@property(nonatomic) struct CGVector lastOffset; // @synthesize lastOffset=_lastOffset;
@property(nonatomic) double lastAxisLockTime; // @synthesize lastAxisLockTime=_lastAxisLockTime;
@property(nonatomic) int overrideLockAxis; // @synthesize overrideLockAxis=_overrideLockAxis;
@property(nonatomic) int axisLock; // @synthesize axisLock=_axisLock;
@property(nonatomic) struct CGRect transitionZoneRect; // @synthesize transitionZoneRect=_transitionZoneRect;
@property(nonatomic) struct CGPoint lastTouchPosition; // @synthesize lastTouchPosition=_lastTouchPosition;
@property(nonatomic) struct CGSize transitionZoneSize; // @synthesize transitionZoneSize=_transitionZoneSize;
@property(nonatomic) struct CGPoint transitionZonePosition; // @synthesize transitionZonePosition=_transitionZonePosition;
@property(nonatomic) double minimumXVelocityForAxisLock; // @synthesize minimumXVelocityForAxisLock=_minimumXVelocityForAxisLock;
@property(nonatomic) __weak id <_UIPlatterMenuPanningTransformerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didEndPanningWithTouchPosition:(struct CGPoint)arg1 currentTransformedPosition:(struct CGPoint)arg2;
- (void)didPanWithTouchPosition:(struct CGPoint)arg1 currentTransformedPosition:(struct CGPoint)arg2;
- (void)didBeginPanningWithTouchPosition:(struct CGPoint)arg1 currentTransformedPosition:(struct CGPoint)arg2;
@property(readonly, nonatomic) struct CGVector velocity;
@property(readonly, nonatomic) struct CGVector offset;
- (void)_enterYLockedState;
- (void)lockIntoYAxis;
- (double)timeIntervalSinceLastDirectionChange;
- (id)initWithAxisTransitionZonePosition:(struct CGPoint)arg1 axisTransitionZoneSize:(struct CGSize)arg2;

@end

