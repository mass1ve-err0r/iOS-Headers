//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPCPlayerResponse, MediaControlsTimeControl, MediaControlsTransportStackView, UIVisualEffectView;

@interface MediaControlsContainerView : UIView
{
    _Bool _empty;
    long long _style;
    MediaControlsTransportStackView *_transportStackView;
    MediaControlsTimeControl *_timeControl;
    UIVisualEffectView *_primaryVisualEffectView;
}

@property(retain, nonatomic) UIVisualEffectView *primaryVisualEffectView; // @synthesize primaryVisualEffectView=_primaryVisualEffectView;
@property(retain, nonatomic) MediaControlsTimeControl *timeControl; // @synthesize timeControl=_timeControl;
@property(retain, nonatomic) MediaControlsTransportStackView *transportStackView; // @synthesize transportStackView=_transportStackView;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateStyle;
@property(retain, nonatomic) MPCPlayerResponse *response;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, getter=isTimeControlOnScreen) _Bool timeControlOnScreen;
- (void)setRatingActionSheetDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

