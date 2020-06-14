//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MRMediaControlsVideoPickerHeaderView : UIView
{
    UIImageView *_airPlayIconImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *airPlayIconImageView; // @synthesize airPlayIconImageView=_airPlayIconImageView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateStyle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

