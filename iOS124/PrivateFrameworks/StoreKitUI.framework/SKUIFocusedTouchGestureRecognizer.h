//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

@interface SKUIFocusedTouchGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_activeTouches;
    _Bool _didTouchOutside;
    UIView *_focusedView;
    struct UIEdgeInsets _touchAllowance;
}

@property(nonatomic) struct UIEdgeInsets touchAllowance; // @synthesize touchAllowance=_touchAllowance;
@property(readonly, nonatomic) UIView *focusedView; // @synthesize focusedView=_focusedView;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithFocusedView:(id)arg1 touchAllowance:(struct UIEdgeInsets)arg2;

@end

