//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosSharingGridCell.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface PUPhotosZoomingSharingGridCell : PUPhotosSharingGridCell
{
    struct CGRect _defaultBounds;
    unsigned long long _badgesLayoutAnchor;
    UIView *_selectionView;
    struct CGPoint _selectionViewDefaultCenter;
    UIView *_optionView;
    struct CGPoint _optionViewDefaultCenter;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 selectionView:(id)arg2 optionView:(id)arg3 layoutAnchor:(unsigned long long)arg4;

@end

