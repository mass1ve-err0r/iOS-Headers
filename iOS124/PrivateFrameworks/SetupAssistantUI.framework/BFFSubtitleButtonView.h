//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFTitleView.h>

@class UIButton, UILabel;

@interface BFFSubtitleButtonView : BFFTitleView
{
    UILabel *_subtitleLabel;
    UIButton *_doneButton;
}

@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setButtonText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

