/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacePhotosViewController : UIViewController <MKModuleViewControllerProtocol, MKMuninContainerViewDelegate, MKMuninViewProvider, MKPhotoGalleryTransitionAnimator, MKPlaceAttributionCellDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIScrollViewDelegate, UIViewControllerTransitioningDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    MKPlaceAttributionCell * _attributionCell;
    MKPhotoBigAttributionView * _attributionView;
    NSLayoutConstraint * _bottomConstraint;
    UIView * _bottomHairline;
    bool  _canUseFullscreenViewer;
    UIView * _externalView;
    NSLayoutConstraint * _heightConstraint;
    UIImageView * _imageViewForTransition;
    bool  _isRTL;
    double  _lastPhotoScrollOffset;
    bool  _loadAppImageCanceledOrFailed;
    MKMapItem * _mapItem;
    unsigned long long  _mode;
    MKMuninContainerView * _muninContainerView;
    unsigned long long  _options;
    unsigned long long  _originalMode;
    _MKPlaceViewController * _owner;
    UIScrollView * _parentScrollView;
    bool  _photoLoaded;
    bool  _photoScrollViewScrollingLeft;
    bool  _photoScrollViewScrollingRight;
    NSArray * _photoViews;
    NSArray * _photos;
    UIView * _photosContainer;
    UIScrollView * _photosContainerScrollView;
    <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> * _photosControllerDelegate;
    unsigned long long  _photosCount;
    MKPhotoSmallAttributionView * _photosSmallAttributionsView;
    bool  _showsBottomHairline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MKMuninView *muninView;
@property (nonatomic) _MKPlaceViewController *owner;
@property (nonatomic) <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> *photosControllerDelegate;
@property (nonatomic) bool showsBottomHairline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyCornerRadius;
- (bool)_canShowWhileLocked;
- (void)_cancelLoadPhotos;
- (void)_catchScrollNotification:(id)arg1;
- (void)_createImageViews;
- (void)_didBecomeActive:(id)arg1;
- (void)_loadPhotos;
- (void)_photoSelected:(id)arg1;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_updateAlphaAttribution;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)_willResignActive:(id)arg1;
- (void)addAttributionCell;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)attributionString;
- (void)dealloc;
- (void)didTapAttributionViewWithPresentingViewController:(id)arg1;
- (bool)dismissPhotoGalleryIfNecessary:(id)arg1;
- (id)formattedAttributionString;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)infoCardThemeChanged;
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (bool)isParsecProcess;
- (bool)isSafariProcess;
- (bool)isSiriProcess;
- (void)layoutImages;
- (void)muninContainerView:(id)arg1 didAddMuninView:(id)arg2;
- (id)muninView;
- (void)openURL;
- (id)owner;
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;
- (id)photosControllerDelegate;
- (void)placePhotoGallery:(id)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(id)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryAdditionalViewTapped:(id)arg1;
- (void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentVisibility:(long long)arg1;
- (void)setOwner:(id)arg1;
- (void)setPhotosControllerDelegate:(id)arg1;
- (void)setShowsBottomHairline:(bool)arg1;
- (bool)showsBottomHairline;
- (struct CGSize { double x1; double x2; })sizeForIndex:(unsigned long long)arg1;
- (void)updateAttributionCell;
- (void)updateAttributionPositionWithOffset:(double)arg1;
- (void)updateBottomHairlineVisibility;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
