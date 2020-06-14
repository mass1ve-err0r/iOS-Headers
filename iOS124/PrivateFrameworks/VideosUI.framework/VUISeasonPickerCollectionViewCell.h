//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIListCollectionViewCell.h>

@class VUILabel, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUISeasonPickerCollectionViewCell : VUIListCollectionViewCell
{
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
    VUILabel *_secondSubtitleLabel;
    _TVImageView *_seasonImageView;
    VUISeparatorView *_topSeparatorView;
    VUISeparatorView *_bottomSeparatorView;
}

@property(retain, nonatomic) VUISeparatorView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) _TVImageView *seasonImageView; // @synthesize seasonImageView=_seasonImageView;
@property(retain, nonatomic) VUILabel *secondSubtitleLabel; // @synthesize secondSubtitleLabel=_secondSubtitleLabel;
@property(retain, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

