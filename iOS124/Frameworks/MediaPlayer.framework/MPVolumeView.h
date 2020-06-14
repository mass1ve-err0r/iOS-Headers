//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaPlayer/MPAVLightweightRoutingControllerDelegate-Protocol.h>
#import <MediaPlayer/NSCoding-Protocol.h>

@class MPAVLightweightRoutingController, MPMediaControls, MPVolumeSlider, NSString, UIButton, UIImage, UILabel;

@interface MPVolumeView : UIView <MPAVLightweightRoutingControllerDelegate, NSCoding>
{
    MPMediaControls *_mediaControls;
    MPAVLightweightRoutingController *_lightweightRoutingController;
    _Bool _hasNonDefaultRouteButtonImages;
    _Bool _hasNonDefaultMaxVolumeSliderImage;
    _Bool _hasNonDefaultMinVolumeSliderImage;
    _Bool _hidesRouteLabelWhenNoRouteChoice;
    UIButton *_routeButton;
    _Bool _routeButtonShowsTouchWhenHighlighted;
    _Bool _routeDiscoveryEnabled;
    UILabel *_routeLabel;
    _Bool _showingButton;
    _Bool _showingLabel;
    _Bool _showingSlider;
    _Bool _showsRouteButton;
    _Bool _showsVolumeSlider;
    long long _style;
    MPVolumeSlider *_volumeSlider;
    _Bool _volumeSliderShrinksFromBothEnds;
    _Bool _wirelessRouteIsPicked;
    _Bool _wirelessRoutesAvailable;
    _Bool _pushedRouteDiscoveryModeState;
}

- (void).cxx_destruct;
- (void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_updateWirelessRouteStatus;
- (void)_setRouteDiscoveryEnabled:(_Bool)arg1;
- (void)_setShowsVolumeSlider:(_Bool)arg1;
- (void)_setShowsRouteButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_getDefaultVolumeSliderFrame:(struct CGRect *)arg1 routeButtonFrame:(struct CGRect *)arg2 forBounds:(struct CGRect)arg3;
- (void)_stopPrewarmingAudioRoutePicker;
- (void)_startPrewarmingAudioRoutePicker;
- (void)_displayAudioRoutePicker;
- (void)_loadAudioRoutePickerIfNeeded;
- (id)_defaultRouteButtonImageAsSelected:(_Bool)arg1;
- (void)_createSubviews;
- (id)_routeButton;
@property(readonly, nonatomic) _Bool isShowingRouteButton;
@property(readonly, nonatomic) _Bool isVisible;
@property(nonatomic) _Bool volumeSliderShrinksFromBothEnds;
@property(nonatomic) _Bool hidesRouteLabelWhenNoRouteChoice;
@property(readonly, nonatomic) MPVolumeSlider *volumeSlider;
@property(readonly, nonatomic) long long style;
- (struct CGRect)volumeThumbRectForBounds:(struct CGRect)arg1 volumeSliderRect:(struct CGRect)arg2 value:(float)arg3;
- (id)volumeThumbImageForState:(unsigned long long)arg1;
- (struct CGRect)volumeSliderRectForBounds:(struct CGRect)arg1;
@property(nonatomic) _Bool showsVolumeSlider;
@property(nonatomic) _Bool showsRouteButton;
- (void)setVolumeThumbImage:(id)arg1 forState:(unsigned long long)arg2;
@property(nonatomic) _Bool routeButtonShowsTouchWhenHighlighted;
- (void)setRouteButtonImage:(id)arg1 forState:(unsigned long long)arg2;
@property(retain, nonatomic) UIImage *volumeWarningSliderImage;
- (void)setMaximumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumVolumeSliderImage:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect)routeButtonRectForBounds:(struct CGRect)arg1;
- (id)routeButtonImageForState:(unsigned long long)arg1;
- (id)maximumVolumeSliderImageForState:(unsigned long long)arg1;
- (id)minimumVolumeSliderImageForState:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=areWirelessRoutesAvailable) _Bool wirelessRoutesAvailable;
@property(readonly, nonatomic, getter=isWirelessRouteActive) _Bool wirelessRouteActive;
- (void)lightweightRoutingController:(id)arg1 didChangePickedRoutes:(id)arg2;
- (void)lightweightRoutingController:(id)arg1 didChangeDevicePresenceDetected:(_Bool)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

