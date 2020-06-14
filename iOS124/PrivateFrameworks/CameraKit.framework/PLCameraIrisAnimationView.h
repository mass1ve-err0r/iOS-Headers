//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface PLCameraIrisAnimationView : UIView
{
    _Bool shouldSetupAnimationInDidMoveToWindow;
    id irisAnimationDelegate;
    SEL irisAnimationDidStopSelector;
    double irisAnimationDuration;
    struct CGPoint irisAnimationPosition;
}

@property(nonatomic) _Bool shouldSetupAnimationInDidMoveToWindow; // @synthesize shouldSetupAnimationInDidMoveToWindow;
@property(nonatomic) struct CGPoint irisAnimationPosition; // @synthesize irisAnimationPosition;
@property(nonatomic) double irisAnimationDuration; // @synthesize irisAnimationDuration;
@property(nonatomic) SEL irisAnimationDidStopSelector; // @synthesize irisAnimationDidStopSelector;
@property(nonatomic) id irisAnimationDelegate; // @synthesize irisAnimationDelegate;
- (void)didMoveToWindow;
- (void)animateIrisOpen;
- (void)unpauseIrisAnimation;
- (void)pauseIrisAnimation;
- (void)setupAnimation;
- (void)dealloc;

@end

