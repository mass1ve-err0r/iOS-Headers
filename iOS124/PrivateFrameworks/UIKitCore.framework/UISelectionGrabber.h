//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UISelectionGrabberDot, UITextRangeView;

__attribute__((visibility("hidden")))
@interface UISelectionGrabber : UIView
{
    UISelectionGrabberDot *m_dotView;
    _Bool m_isDotted;
    _Bool m_activeFlattened;
    _Bool m_alertFlattened;
    _Bool m_navigationTransitionFlattened;
    _Bool m_animating;
    long long m_orientation;
    int _applicationDeactivationReason;
}

+ (id)_grabberDot;
@property(nonatomic) long long orientation; // @synthesize orientation=m_orientation;
@property(nonatomic) _Bool animating; // @synthesize animating=m_animating;
@property(nonatomic) _Bool navigationTransitionFlattened; // @synthesize navigationTransitionFlattened=m_navigationTransitionFlattened;
@property(nonatomic) _Bool activeFlattened; // @synthesize activeFlattened=m_activeFlattened;
@property(nonatomic) _Bool alertFlattened; // @synthesize alertFlattened=m_alertFlattened;
@property(nonatomic) _Bool isDotted; // @synthesize isDotted=m_isDotted;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (_Bool)isPointedLeft;
- (_Bool)isPointedRight;
- (_Bool)isPointedUp;
- (_Bool)isPointedDown;
- (_Bool)isVertical;
- (void)transitionDot:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateGrabberOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateGrabberInWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateDot;
- (_Bool)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect)arg2;
- (_Bool)dotIsVisibleInDocument:(struct CGRect)arg1;
- (_Bool)clipDot:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (void)setHidden:(_Bool)arg1;
- (_Bool)autoscrolled;
- (_Bool)inputViewIsChanging;
- (_Bool)isRotating;
- (_Bool)isScaling;
- (_Bool)isScrolling;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (void)saveDeactivationReason:(id)arg1;
- (void)canExpandAfterAlert:(id)arg1;
- (void)mustFlattenForAlert:(id)arg1;
@property(readonly, nonatomic) UITextRangeView *hostView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_dotView;

@end

