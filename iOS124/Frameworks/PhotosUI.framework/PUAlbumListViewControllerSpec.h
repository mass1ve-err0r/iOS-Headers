//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PULegacyViewControllerSpec.h>

@class NSString, PUFeedViewControllerSpec, PUFontManager, PUPhotoDecoration, PUPhotosAlbumViewControllerSpec, PUPhotosGridViewControllerSpec, PUPhotosPanoramaViewControllerSpec, PUPhotosPickerViewControllerSpec, PXLayoutMetricInterpolator, UIImage;

@interface PUAlbumListViewControllerSpec : PULegacyViewControllerSpec
{
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
    UIImage *_addSharedAlbumPlaceholderImage;
    UIImage *_hiddenAlbumPlaceholderImage;
    UIImage *_recentlyDeletedAlbumPlaceholderImage;
    PUPhotoDecoration *_stackPhotoDecoration;
    PUPhotoDecoration *_emptyStackPhotoDecoration;
    _Bool _shouldUseTableView;
    _Bool _showsDeleteButtonOnCellContentView;
    _Bool _usesStackTransitionToGrid;
    _Bool _shouldUseCollageForCloudFeedPlaceholder;
    _Bool _shouldUseShortTitleForStandInAlbumList;
    _Bool _canShowVirtualCollections;
    PUFontManager *__fontManager;
    unsigned long long _stackViewStyle;
    unsigned long long _folderStackViewStyle;
    double _posterSquareCornerRadius;
    double _posterSubitemCornerRadius;
    long long _collageImageContentMode;
    double _collageSpacing;
    long long _cellContentViewLayout;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    long long _albumDeletionConfirmationStyle;
    PUPhotosGridViewControllerSpec *_gridViewControllerSpec;
    PUPhotosAlbumViewControllerSpec *_albumViewControllerSpec;
    PUPhotosPanoramaViewControllerSpec *_panoramaViewControllerSpec;
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;
    PUFeedViewControllerSpec *_feedViewControllerSpec;
    struct CGSize _imageSize;
    struct CGSize _stackSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct CGSize _collageImageSize;
    struct UIEdgeInsets _stackPerspectiveInsets;
}

+ (id)padSpec;
+ (id)phoneSpec;
@property(readonly, nonatomic) PUFeedViewControllerSpec *feedViewControllerSpec; // @synthesize feedViewControllerSpec=_feedViewControllerSpec;
@property(readonly, nonatomic) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec; // @synthesize photosPickerViewControllerSpec=_photosPickerViewControllerSpec;
@property(readonly, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaViewControllerSpec; // @synthesize panoramaViewControllerSpec=_panoramaViewControllerSpec;
@property(readonly, nonatomic) PUPhotosAlbumViewControllerSpec *albumViewControllerSpec; // @synthesize albumViewControllerSpec=_albumViewControllerSpec;
@property(readonly, nonatomic) PUPhotosGridViewControllerSpec *gridViewControllerSpec; // @synthesize gridViewControllerSpec=_gridViewControllerSpec;
@property(readonly, nonatomic) long long albumDeletionConfirmationStyle; // @synthesize albumDeletionConfirmationStyle=_albumDeletionConfirmationStyle;
@property(readonly, nonatomic) _Bool canShowVirtualCollections; // @synthesize canShowVirtualCollections=_canShowVirtualCollections;
@property(readonly, nonatomic) _Bool shouldUseShortTitleForStandInAlbumList; // @synthesize shouldUseShortTitleForStandInAlbumList=_shouldUseShortTitleForStandInAlbumList;
@property(readonly, nonatomic) _Bool shouldUseCollageForCloudFeedPlaceholder; // @synthesize shouldUseCollageForCloudFeedPlaceholder=_shouldUseCollageForCloudFeedPlaceholder;
@property(readonly, nonatomic) double sectionFooterHeight; // @synthesize sectionFooterHeight=_sectionFooterHeight;
@property(readonly, nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
@property(readonly, nonatomic) _Bool usesStackTransitionToGrid; // @synthesize usesStackTransitionToGrid=_usesStackTransitionToGrid;
@property(readonly, nonatomic) long long cellContentViewLayout; // @synthesize cellContentViewLayout=_cellContentViewLayout;
@property(readonly, nonatomic) _Bool showsDeleteButtonOnCellContentView; // @synthesize showsDeleteButtonOnCellContentView=_showsDeleteButtonOnCellContentView;
@property(readonly, nonatomic) double collageSpacing; // @synthesize collageSpacing=_collageSpacing;
@property(readonly) long long collageImageContentMode; // @synthesize collageImageContentMode=_collageImageContentMode;
@property(readonly) struct CGSize collageImageSize; // @synthesize collageImageSize=_collageImageSize;
@property(readonly, nonatomic) double posterSubitemCornerRadius; // @synthesize posterSubitemCornerRadius=_posterSubitemCornerRadius;
@property(readonly, nonatomic) double posterSquareCornerRadius; // @synthesize posterSquareCornerRadius=_posterSquareCornerRadius;
@property(readonly, nonatomic) struct UIOffset stackPerspectiveOffset; // @synthesize stackPerspectiveOffset=_stackPerspectiveOffset;
@property(readonly, nonatomic) struct UIEdgeInsets stackPerspectiveInsets; // @synthesize stackPerspectiveInsets=_stackPerspectiveInsets;
@property(readonly, nonatomic) struct UIOffset stackOffset; // @synthesize stackOffset=_stackOffset;
@property(readonly, nonatomic) struct CGSize stackSize; // @synthesize stackSize=_stackSize;
@property(readonly, nonatomic) PUPhotoDecoration *emptyStackPhotoDecoration; // @synthesize emptyStackPhotoDecoration=_emptyStackPhotoDecoration;
@property(readonly, nonatomic) PUPhotoDecoration *stackPhotoDecoration; // @synthesize stackPhotoDecoration=_stackPhotoDecoration;
@property(readonly, nonatomic) unsigned long long folderStackViewStyle; // @synthesize folderStackViewStyle=_folderStackViewStyle;
@property(readonly, nonatomic) unsigned long long stackViewStyle; // @synthesize stackViewStyle=_stackViewStyle;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly) _Bool shouldUseTableView; // @synthesize shouldUseTableView=_shouldUseTableView;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowSectionHeaders;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
@property(readonly, nonatomic) PUAlbumListViewControllerSpec *standInAlbumListViewControllerSpec;
- (void)_getStackSize:(struct CGSize *)arg1 outEdgeInsets:(struct UIEdgeInsets *)arg2 forLayoutReferenceSize:(struct CGSize)arg3 safeAreaInsets:(struct UIEdgeInsets)arg4;
- (struct CGPoint)_pixelRoundedOriginForCenteredImage:(id)arg1 inRect:(struct CGRect)arg2;
- (id)_centeredGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize)arg3 imageAlpha:(double)arg4;
- (id)_centeredTintedGlyphImage:(id)arg1 withBackgroundColor:(id)arg2 size:(struct CGSize)arg3;
@property(readonly, nonatomic) NSString *nameOfRecentlyDeletedAlbumPlaceholderImage;
@property(readonly, nonatomic) NSString *nameOfHiddenAlbumPlaceholderImage;
@property(readonly, nonatomic) NSString *nameOfEmptySharedAlbumPlaceholderImage;
@property(readonly, nonatomic) NSString *nameOfAddSharedAlbumPlaceholderImage;
@property(readonly, nonatomic) NSString *nameOfEmptyAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *recentlyDeletedAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *hiddenAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *addSharedAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *emptySharedAlbumPlaceholderImage;
@property(readonly, nonatomic) UIImage *emptyAlbumPlaceholderImage;
- (struct CGSize)tileSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2 stackViewStyle:(unsigned long long)arg3;
- (struct CGSize)imageSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)stackSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeForStackSize:(struct CGSize)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (void)configureCollectionViewAlbumListLayout:(id)arg1 forBounds:(struct CGRect)arg2;
@property(readonly, nonatomic) struct CGSize contentSizeForViewInPopover;
@property(readonly) long long imageContentMode;
@property(readonly, nonatomic) PXLayoutMetricInterpolator *_stackWidthInterpolator;
@property(readonly, nonatomic) PXLayoutMetricInterpolator *_insetsInterpolator;
@property(readonly, nonatomic) PUFontManager *_fontManager; // @synthesize _fontManager=__fontManager;

@end

