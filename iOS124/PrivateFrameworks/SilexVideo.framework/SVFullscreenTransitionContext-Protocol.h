//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class UIView;

@protocol SVFullscreenTransitionContext <NSObject>
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic) UIView *toView;
@property(readonly, nonatomic) UIView *fromView;
@property(readonly, nonatomic) UIView *contentOverlayView;
@end

