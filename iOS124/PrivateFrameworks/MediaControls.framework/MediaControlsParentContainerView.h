//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MediaControlsContainerView, MediaControlsTimeControl, MediaControlsTransportStackView;

@interface MediaControlsParentContainerView : UIView
{
    long long _style;
    long long _selectedMode;
    MediaControlsContainerView *_containerView;
    UIView *_routingView;
    UIView *_mediaControlsRoutingPickerView;
    long long _routingViewControllerAnimationCount;
}

@property(nonatomic) long long routingViewControllerAnimationCount; // @synthesize routingViewControllerAnimationCount=_routingViewControllerAnimationCount;
@property(retain, nonatomic) UIView *mediaControlsRoutingPickerView; // @synthesize mediaControlsRoutingPickerView=_mediaControlsRoutingPickerView;
@property(retain, nonatomic) UIView *routingView; // @synthesize routingView=_routingView;
@property(retain, nonatomic) MediaControlsContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_setInitialFrameForRoutingView:(id)arg1;
- (void)_toggleRoutingPickerAnimated:(_Bool)arg1;
- (void)_updateTimeControlVisibility:(id)arg1;
- (void)_updateRoutingPickerVisibilityAnimated:(_Bool)arg1;
@property(retain, nonatomic) MediaControlsTimeControl *timeControl;
@property(retain, nonatomic) MediaControlsTransportStackView *transportStackView;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
