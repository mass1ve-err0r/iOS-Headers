//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUPhotosSharingTransitionContext, UICollectionView, UICollectionViewLayout, UIView;

@protocol PUPhotosSharingTransitionViewController <NSObject>
- (struct CGRect)embeddedActivityViewFrameWhenShowing:(_Bool)arg1;
- (UIView *)embeddedActivityView;
- (void)setPhotosSharingTransitionLayout:(UICollectionViewLayout *)arg1 animated:(_Bool)arg2;
- (void)setPhotosSharingTransitionContext:(PUPhotosSharingTransitionContext *)arg1;
- (UICollectionView *)transitionCollectionView;
@end

