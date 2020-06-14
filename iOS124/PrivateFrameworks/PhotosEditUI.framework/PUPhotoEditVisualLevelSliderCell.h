//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditVisualLevelSliderCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImage *_thumbnail;
    unsigned long long _roundedCornersEdge;
}

@property(nonatomic) unsigned long long roundedCornersEdge; // @synthesize roundedCornersEdge=_roundedCornersEdge;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (void)setThumbnail:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;

@end

