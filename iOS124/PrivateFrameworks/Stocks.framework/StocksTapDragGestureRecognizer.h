//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, NSSet, NSTimer;

@interface StocksTapDragGestureRecognizer : UIGestureRecognizer
{
    NSTimer *_touchDelayTimer;
    NSMutableSet *_touches;
    struct CGPoint _startingPosition;
    double _requiredPressDelay;
    unsigned long long _minimumNumberOfTouches;
    unsigned long long _maximumNumberOfTouches;
    struct CGRect _touchableBounds;
}

@property(nonatomic) struct CGRect touchableBounds; // @synthesize touchableBounds=_touchableBounds;
@property(nonatomic) unsigned long long maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property(nonatomic) unsigned long long minimumNumberOfTouches; // @synthesize minimumNumberOfTouches=_minimumNumberOfTouches;
@property(nonatomic) double requiredPressDelay; // @synthesize requiredPressDelay=_requiredPressDelay;
@property(readonly, nonatomic) NSSet *touches; // @synthesize touches=_touches;
- (void).cxx_destruct;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchDelayTimerFired:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

