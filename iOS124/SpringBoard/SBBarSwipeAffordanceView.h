//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBBarSwipeScreenEdgePanGestureRecognizerDelegate-Protocol.h"
#import "SBHomeGrabberDelegate-Protocol.h"
#import "SBSystemGestureRecognizerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSHashTable, NSString, SBBarSwipeScreenEdgePanGestureRecognizer, SBHomeGesturePanGestureRecognizer, SBHomeGrabberView, UINotificationFeedbackGenerator;
@protocol SBBarSwipeAffordanceDelegate;

@interface SBBarSwipeAffordanceView : UIView <UIGestureRecognizerDelegate, SBHomeGrabberDelegate, SBBarSwipeScreenEdgePanGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate>
{
    NSHashTable *_observers;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    double _additionalEdgeSpacing;
    SBBarSwipeScreenEdgePanGestureRecognizer *_swipeEdgePanGestureRecognizer;
    _Bool _active;
    id <SBBarSwipeAffordanceDelegate> _delegate;
    SBHomeGrabberView *_grabberView;
    long long _feedbackType;
}

@property(nonatomic) long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property(readonly, nonatomic) SBHomeGrabberView *grabberView; // @synthesize grabberView=_grabberView;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <SBBarSwipeAffordanceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBHomeGesturePanGestureRecognizer *swipeEdgePanGestureRecognizer; // @synthesize swipeEdgePanGestureRecognizer=_swipeEdgePanGestureRecognizer;
- (void).cxx_destruct;
- (id)_settleAffordanceAnimationBehaviorDescription;
- (id)_unhideHomeAffordanceAnimationSettings;
- (id)_hideHomeAffordanceAnimationSettings;
- (void)_setGrabberAdditionalEdgeSpacing:(double)arg1;
- (void)_offsetGrabberForProgress:(double)arg1;
- (void)_settleGrabber;
- (void)_fireAction;
- (double)_progressWithTranslation:(struct CGPoint)arg1 liftoffVelocity:(struct CGPoint)arg2;
- (void)_handleEdgePanGesture:(id)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (long long)touchGestureInterfaceOrientationForBarSwipeRecognizer:(id)arg1;
- (long long)_effectiveOrientationAccountingForTransforms;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (void)_runBlockOnObservers:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_deactivate;
- (void)_activate;
@property(nonatomic) long long colorBias; // @dynamic colorBias;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

