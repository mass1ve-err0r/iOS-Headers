//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class VUIButton, VUILabel, VUIMediaTagsView, VUIOfferLayout, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIOfferView : UIView
{
    _Bool _isEntitled;
    VUIOfferLayout *_layout;
    _TVImageView *_imageView;
    _TVImageView *_logoView;
    _TVImageView *_appIconView;
    VUILabel *_channelNameLabel;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
    VUILabel *_textLabel;
    UIView *_badgeView;
    VUIMediaTagsView *_tagsView;
    VUIButton *_versionsButton;
    UIView *_channelImageBackgroundView;
    VUISeparatorView *_separatorView;
}

@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) _Bool isEntitled; // @synthesize isEntitled=_isEntitled;
@property(retain, nonatomic) UIView *channelImageBackgroundView; // @synthesize channelImageBackgroundView=_channelImageBackgroundView;
@property(retain, nonatomic) VUIButton *versionsButton; // @synthesize versionsButton=_versionsButton;
@property(retain, nonatomic) VUIMediaTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) VUILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUILabel *channelNameLabel; // @synthesize channelNameLabel=_channelNameLabel;
@property(retain, nonatomic) _TVImageView *appIconView; // @synthesize appIconView=_appIconView;
@property(retain, nonatomic) _TVImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUIOfferLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)_chinHeightForSize:(struct CGSize)arg1;
- (_Bool)_shouldDisplaySeparator;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)prepareForCellReuse;

@end

