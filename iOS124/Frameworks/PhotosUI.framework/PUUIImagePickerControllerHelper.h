//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUPhotosGridDownloadHelper, PUPhotosGridViewController, PUUIAlbumListViewController;
@protocol OS_dispatch_group, PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIImagePickerControllerHelper : NSObject
{
    PUPhotosGridDownloadHelper *_downloadHelper;
    _Bool _didHandleSelectionOfAssets;
    PUPhotosGridViewController *_gridViewController;
    PUUIAlbumListViewController *_albumListViewController;
    id <PUPhotoPicker> _photoPicker;
    NSObject<OS_dispatch_group> *_multiSelectionGroup;
}

+ (id)assetsFilterPredicateForMediaTypes:(id)arg1;
+ (id)collectionsFilterPredicateForMediaTypes:(id)arg1;
+ (int)albumFilterForMediaTypes:(id)arg1;
+ (unsigned long long)imagePickerTypesForMediaTypes:(id)arg1;
+ (id)imagePickerControllerForViewController:(id)arg1;
+ (id)albumListViewControllerSpec;
+ (id)gridViewControllerSpec;
@property(nonatomic) _Bool didHandleSelectionOfAssets; // @synthesize didHandleSelectionOfAssets=_didHandleSelectionOfAssets;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *multiSelectionGroup; // @synthesize multiSelectionGroup=_multiSelectionGroup;
@property(readonly, nonatomic) __weak id <PUPhotoPicker> photoPicker; // @synthesize photoPicker=_photoPicker;
@property(readonly, nonatomic) __weak PUUIAlbumListViewController *albumListViewController; // @synthesize albumListViewController=_albumListViewController;
@property(readonly, nonatomic) __weak PUPhotosGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void).cxx_destruct;
- (void)handleKeyboardAvoidanceIfNeeded:(id)arg1;
- (void)updatePhotoPickerAppearance;
- (id)_imagePickerController;
- (void)_showImageViewController:(id)arg1;
- (id)_pickerProperties;
- (_Bool)showsPrompt;
- (unsigned long long)multipleSelectionLimit;
@property(readonly, nonatomic) _Bool allowsMultipleSelection;
- (id)_mediaTypes;
- (void)cancelPhotoPicker;
- (_Bool)clientSuppressesForchTouch;
- (void)updateSessionInfo;
- (void)_notifyImagePickerOfAssetAvailability:(id)arg1;
- (void)_pushImageViewControllerForAsset:(id)arg1 allowEditing:(_Bool)arg2 expectsLivePhoto:(_Bool)arg3;
- (void)_handleSelectionOfDownloadedAssets:(id)arg1;
- (void)handleSelectionOfAssets:(id)arg1;
- (void)handleSelectionOfAsset:(id)arg1 inCollection:(id)arg2;
- (void)_selectAsset:(id)arg1 withHintCollection:(id)arg2 hintIndexPath:(id)arg3;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)initWithAlbumListViewController:(id)arg1 photoPickerServices:(id)arg2;
- (id)initWithGridViewController:(id)arg1 photoPickerServices:(id)arg2;

@end

