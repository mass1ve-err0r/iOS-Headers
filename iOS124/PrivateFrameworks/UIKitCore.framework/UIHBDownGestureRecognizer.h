//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, NSSet, UIDelayedAction;

@interface UIHBDownGestureRecognizer : UIGestureRecognizer
{
    UIDelayedAction *_delayedAction;
    NSMutableSet *_currentlyPressedTypes;
    NSSet *_requiredPressTypes;
    double _maximumIntervalBetweenPresses;
}

@property(nonatomic) double maximumIntervalBetweenPresses; // @synthesize maximumIntervalBetweenPresses=_maximumIntervalBetweenPresses;
- (void).cxx_destruct;
- (_Bool)_allRequiredButtonsDown;
- (void)_processPresses:(id)arg1;
- (void)_fail;
- (void)_succeed;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)setAllowedPressTypes:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

