//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardMotionSupport.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIKeyboardKeyplaneTransitionDelegate-Protocol.h>

@class CADisplayLink, NSString, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate>
{
    UIPanGestureRecognizer *_translateRecognizer;
    _Bool _isTranslating;
    _Bool _isSplitting;
    _Bool _splitLockState;
    struct CGPoint _targetTranslation;
    struct CGPoint _initialTranslation;
    struct CGPoint _translationVelocity;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    CDUnknownBlockType _bounceCompletionBlock;
}

- (void)transitionDidFinish:(_Bool)arg1;
- (void)finishTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)prepareForTransition;
- (void)undock;
- (void)dock;
- (void)_updateBounceAnimation:(id)arg1;
- (void)invalidateDisplayLink;
- (void)bounceAnimationDidFinish;
- (void)cancelBounceAnimation;
- (void)translateDetected:(id)arg1;
- (_Bool)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (_Bool)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)translateToPlacement:(id)arg1 animated:(_Bool)arg2;
- (void)updatedControllerApplicator:(id)arg1;
@property(readonly, nonatomic) _Bool isSplitting;
@property(readonly, nonatomic) _Bool isTranslating;
- (void)translateToPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)generateSplitNotificationForNewPlacement:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_updatedController;
- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

