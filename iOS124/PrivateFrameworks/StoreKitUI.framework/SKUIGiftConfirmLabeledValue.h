//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SKUIGiftDashView, UILabel;

@interface SKUIGiftConfirmLabeledValue : UIView
{
    SKUIGiftDashView *_dashView;
    UILabel *_labelLabel;
    long long _style;
    UILabel *_valueLabel;
    UILabel *_subtitleLabel;
}

@property(readonly, nonatomic) long long giftConfirmLabelStyle; // @synthesize giftConfirmLabelStyle=_style;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *subtitleLabel;
@property(copy, nonatomic) NSString *label;
- (id)initWithGiftConfirmLabelStyle:(long long)arg1;

@end

