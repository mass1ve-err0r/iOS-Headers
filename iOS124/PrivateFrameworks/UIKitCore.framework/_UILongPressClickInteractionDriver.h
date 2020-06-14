//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>
#import <UIKitCore/_UIClickInteractionDriving-Protocol.h>

@class NSString, UIView, _UIStateMachine, _UITouchDurationObservingGestureRecognizer;
@protocol _UIClickInteractionDriverDelegate;

__attribute__((visibility("hidden")))
@interface _UILongPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving>
{
    id <_UIClickInteractionDriverDelegate> _delegate;
    UIView *_view;
    _UIStateMachine *_stateMachine;
    _UITouchDurationObservingGestureRecognizer *_gestureRecognizer;
    double _clickDownDuration;
}

@property(nonatomic) double clickDownDuration; // @synthesize clickDownDuration=_clickDownDuration;
@property(retain, nonatomic) _UITouchDurationObservingGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) _UIStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <_UIClickInteractionDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handleGestureRecognizer:(id)arg1;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)cancelInteraction;
- (void)_prepareStateMachine;
@property(nonatomic) double allowableMovement;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

