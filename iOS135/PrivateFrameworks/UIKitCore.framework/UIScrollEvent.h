/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIScrollEvent : UIEvent {
    NSMapTable * _gestureRecognizersByWindow;
    unsigned long long  _lastDeliveredPhase;
    unsigned long long  _lastReceivedPhase;
    unsigned long long  _phase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _sceneReferenceLocation;
}

@property (readonly) struct CGVector { double x1; double x2; } acceleratedDelta;
@property (readonly) bool directionInvertedFromDevice;
@property (getter=_isHighResolution, nonatomic, readonly) bool highResolution;
@property (readonly) struct CGVector { double x1; double x2; } nonAcceleratedDelta;
@property (readonly) unsigned long long phase;
@property (getter=_scrollDeviceCategory, nonatomic, readonly) unsigned long long scrollDeviceCategory;
@property (getter=_scrollType, nonatomic, readonly) unsigned long long scrollType;

- (void).cxx_destruct;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (bool)_hasDeliveredTerminalPhase;
- (id)_init;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (bool)_isHighResolution;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_removeGestureRecognizersFromWindows;
- (unsigned long long)_scrollDeviceCategory;
- (unsigned long long)_scrollType;
- (void)_sendCancelToGestureRecognizer:(id)arg1;
- (bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_wasDeliveredToGestureRecognizers;
- (id)_windows;
- (struct CGVector { double x1; double x2; })acceleratedDelta;
- (bool)directionInvertedFromDevice;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGVector { double x1; double x2; })nonAcceleratedDelta;
- (unsigned long long)phase;
- (long long)subtype;
- (long long)type;

@end
