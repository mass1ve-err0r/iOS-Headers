/* Generated by RuntimeBrowser.
 */

@protocol MKPlacePhotoGalleryViewControllerDelegate <NSObject>

@required

- (UIImageView *)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;

@optional

- (void)placePhotoGallery:(MKPlacePhotoGalleryViewController *)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(MKPlacePhotoGalleryViewController *)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(MKPlacePhotoGalleryViewController *)arg1 willCloseAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryAdditionalViewTapped:(MKPlacePhotoGalleryViewController *)arg1;
- (void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;

@end
