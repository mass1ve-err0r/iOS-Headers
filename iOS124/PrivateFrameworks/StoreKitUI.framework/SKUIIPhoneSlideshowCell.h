//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

@interface SKUIIPhoneSlideshowCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_playIcon;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic, getter=isVideo) _Bool video;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) struct CGRect imageFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

