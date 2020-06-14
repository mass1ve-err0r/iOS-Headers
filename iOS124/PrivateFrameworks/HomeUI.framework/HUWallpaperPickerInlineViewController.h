//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <HomeUI/HUWallpaperPhotoCellDelegate-Protocol.h>
#import <HomeUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <HomeUI/UIDropInteractionDelegate-Protocol.h>

@class HFWallpaper, HUWallpaperPhotoCell, NSArray, NSIndexPath, NSMutableDictionary, NSString, UICollectionViewFlowLayout, UIDropInteraction, UIImage;
@protocol HUWallpaperPickerInlineViewControllerDelegate;

@interface HUWallpaperPickerInlineViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, HUWallpaperPhotoCellDelegate, UIDropInteractionDelegate>
{
    NSArray *_namedWallpapers;
    double _preferedHeight;
    UIImage *_originalCustomImage;
    id <HUWallpaperPickerInlineViewControllerDelegate> _delegate;
    NSMutableDictionary *_imageCache;
    HUWallpaperPhotoCell *_customWallpaperCell;
    UICollectionViewFlowLayout *_flowLayout;
    HFWallpaper *_customWallpaper;
    UIDropInteraction *_dropInteraction;
    NSIndexPath *_selectedIndexPath;
    unsigned long long _numberOfWallpapersFittingInWidth;
    struct CGSize _imageSize;
}

+ (_Bool)useWallpaperPickerCell;
@property(nonatomic) unsigned long long numberOfWallpapersFittingInWidth; // @synthesize numberOfWallpapersFittingInWidth=_numberOfWallpapersFittingInWidth;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(retain, nonatomic) HFWallpaper *customWallpaper; // @synthesize customWallpaper=_customWallpaper;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) HUWallpaperPhotoCell *customWallpaperCell; // @synthesize customWallpaperCell=_customWallpaperCell;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) __weak id <HUWallpaperPickerInlineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) UIImage *originalCustomImage; // @synthesize originalCustomImage=_originalCustomImage;
@property(readonly, nonatomic) double preferedHeight; // @synthesize preferedHeight=_preferedHeight;
@property(retain, nonatomic) NSArray *namedWallpapers; // @synthesize namedWallpapers=_namedWallpapers;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (void)updateScrolling;
- (id)wallpaperForIndexPath:(id)arg1;
@property(readonly) HFWallpaper *selectedWallpaper;
@property(readonly) unsigned long long numberOfWallpapers;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)wallpaperPhotoCellDidPressDeleteButton:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 image:(id)arg2 wallpaper:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)setSelectedWallpaper:(id)arg1 animated:(_Bool)arg2;
- (void)setImageSizeToFitWidth:(double)arg1 forNumberOfWallpapers:(unsigned long long)arg2;
- (void)setCustomWallpaper:(id)arg1 image:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

