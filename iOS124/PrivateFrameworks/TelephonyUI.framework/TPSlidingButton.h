//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TelephonyUI/_UIActionSliderDelegate-Protocol.h>

@class NSString, UIButton, UIImageView, _UIActionSlider;
@protocol TPSlidingButtonDelegateProtocol;

@interface TPSlidingButton : UIView <_UIActionSliderDelegate>
{
    int _type;
    _UIActionSlider *_acceptButton;
    UIButton *_sideButtonRight;
    id <TPSlidingButtonDelegateProtocol> _delegate;
    UIImageView *_dialImageView;
}

@property(retain) UIImageView *dialImageView; // @synthesize dialImageView=_dialImageView;
@property id <TPSlidingButtonDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property int type; // @synthesize type=_type;
@property(retain) UIButton *sideButtonRight; // @synthesize sideButtonRight=_sideButtonRight;
@property(retain) _UIActionSlider *acceptButton; // @synthesize acceptButton=_acceptButton;
- (void).cxx_destruct;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSlidingButtonType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

