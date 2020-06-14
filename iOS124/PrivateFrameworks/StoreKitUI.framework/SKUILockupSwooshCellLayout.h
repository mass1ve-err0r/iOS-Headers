//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel;

@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout
{
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    UIImageView *_iconHighlightImageView;
    UILabel *_itemCountLabel;
    struct CGSize _maxImageSize;
    UILabel *_priceLabel;
    UIColor *_primaryTextColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_videoHighlightImageView;
    UIImageView *_videoImageView;
    UIImageView *_videoPlayButtonImageView;
    struct CGSize _videoSize;
    unsigned long long _visibleFields;
}

@property(nonatomic) unsigned long long visibleFields; // @synthesize visibleFields=_visibleFields;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) struct CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;
- (void).cxx_destruct;
- (void)_removeHighlightViews;
- (void)_reloadHighlight;
- (void)_reloadPriceLabel;
- (id)_newDefaultLabel;
- (void)_layoutFieldsVertical;
- (void)_layoutFieldsHorizontal;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;
- (void)setItemOffer:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *videoThumbnailImage;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *price;
@property(copy, nonatomic) NSString *itemCountString;
- (void)setColoringWithColorScheme:(id)arg1;
@property(copy, nonatomic) NSString *category;
@property(copy, nonatomic) NSString *artistName;
- (struct CGSize)cellSizeForImageOfSize:(struct CGSize)arg1;
- (id)initWithCollectionViewCell:(id)arg1;

@end

