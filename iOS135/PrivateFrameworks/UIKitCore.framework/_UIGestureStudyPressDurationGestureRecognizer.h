/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIGestureStudyPressDurationGestureRecognizer : UIGestureRecognizer {
    double  _allowableMovement;
    double  _maxObservedTouchForce;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalLocation;
    double  _startTimestamp;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) bool hasForce;
@property (nonatomic) double maxObservedTouchForce;
@property (nonatomic, readonly) double movement;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalLocation;
@property (nonatomic) double startTimestamp;

- (double)allowableMovement;
- (double)duration;
- (bool)hasForce;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (double)maxObservedTouchForce;
- (double)movement;
- (bool)movementExceededLimit:(double)arg1;
- (struct CGPoint { double x1; double x2; })originalLocation;
- (void)reset;
- (void)setAllowableMovement:(double)arg1;
- (void)setMaxObservedTouchForce:(double)arg1;
- (void)setOriginalLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartTimestamp:(double)arg1;
- (double)startTimestamp;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
