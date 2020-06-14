//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <VideosUI/VideosExtrasCarouselCollectionViewCell-Protocol.h>

@class IKLockupElement, NSLayoutConstraint, NSString, UILabel, UIPinchGestureRecognizer, UIView, VideosExtrasConstrainedArtworkContainerView, VideosExtrasZoomingImageInteractiveTransitionSourceContext;

__attribute__((visibility("hidden")))
@interface VideosExtrasLockupCollectionViewCell : UICollectionViewCell <VideosExtrasCarouselCollectionViewCell>
{
    struct CGSize _artworkSize;
    VideosExtrasConstrainedArtworkContainerView *_artworkContainerView;
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    unsigned long long _itemIndex;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    NSLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_descriptionBaselineConstraint;
    NSString *_zoomingImageTransitionIdentifier;
    VideosExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    _Bool _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    IKLockupElement *_lockup;
}

@property(nonatomic) __weak IKLockupElement *lockup; // @synthesize lockup=_lockup;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setZoomingImageTransitionIdentifier:(id)arg1;
- (void)updateConstraints;
- (void)setThumbnailOverlayImage:(id)arg1;
- (struct CGSize)thumbnailMaxSize;
- (void)setThumbnailMaxSize:(struct CGSize)arg1;
- (id)descriptionTextStyle;
- (id)subtitleTextStyle;
- (id)titleTextStyle;
- (id)thumbnailImage;
- (unsigned long long)itemIndex;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(_Bool)arg1;
- (void)setThumbnailImageAccessibilityText:(id)arg1;
- (void)setThumbnailImagePlaceholder:(id)arg1;
- (void)setThumbnailBorderColor:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (id)subtitleText;
- (void)setSubtitleText:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

