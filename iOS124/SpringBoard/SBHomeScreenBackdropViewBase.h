//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, SBFluidSwitcherAnimationSettings;
@protocol SBHomeScreenBackdropViewBaseDelegate;

@interface SBHomeScreenBackdropViewBase : UIView
{
    NSMutableSet *_backdropViewRequiringReasons;
    NSMutableSet *_liveBackdropViewRequiringReasons;
    SBFluidSwitcherAnimationSettings *_animationSettings;
    id <SBHomeScreenBackdropViewBaseDelegate> _delegate;
}

@property(nonatomic) __weak id <SBHomeScreenBackdropViewBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)homeScreenBlurSettings;
- (_Bool)requiresLiveBackdropView;
- (_Bool)requiresBackdropView;
- (_Bool)isOpaque;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

