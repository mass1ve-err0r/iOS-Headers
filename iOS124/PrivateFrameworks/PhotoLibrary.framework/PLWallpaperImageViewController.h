//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/PLUIEditImageViewController.h>

#import <PhotoLibrary/SBFLegibilitySettingsProviderDelegate-Protocol.h>

@class NSArray, NSString, PLWallpaperNavigationItem, SBSUIWallpaperPreviewViewController;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate>
{
    PLWallpaperNavigationItem *_navItem;
    int _wallpaperMode;
    NSArray *_navigationToolbarItems;
    _Bool _saveWallpaperData;
    NSString *_wallpaperTitle;
    unsigned int _didSetImageMode:1;
    _Bool _isWallpaperEdit;
    _Bool __statusBarHidden;
    SBSUIWallpaperPreviewViewController *_wallpaperPreviewViewController;
    long long _previewVariant;
    long long _previewType;
    long long __statusBarStyle;
}

@property(nonatomic, setter=_setStatusBarHidden:) _Bool _statusBarHidden; // @synthesize _statusBarHidden=__statusBarHidden;
@property(nonatomic, setter=_setStatusBarStyle:) long long _statusBarStyle; // @synthesize _statusBarStyle=__statusBarStyle;
@property(nonatomic) _Bool isWallpaperEdit; // @synthesize isWallpaperEdit=_isWallpaperEdit;
@property(nonatomic) long long previewType; // @synthesize previewType=_previewType;
@property(nonatomic) long long previewVariant; // @synthesize previewVariant=_previewVariant;
@property(retain, nonatomic) SBSUIWallpaperPreviewViewController *wallpaperPreviewViewController; // @synthesize wallpaperPreviewViewController=_wallpaperPreviewViewController;
@property(copy, nonatomic) NSString *wallpaperTitle; // @synthesize wallpaperTitle=_wallpaperTitle;
@property(nonatomic) _Bool saveWallpaperData; // @synthesize saveWallpaperData=_saveWallpaperData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (void)setupWallpaperPreview;
- (void)_updatePreviewFrame:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)_displayWallpaperOptionsSheet;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)motionToggledManually:(_Bool)arg1;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)setImageAsLockScreenClicked:(id)arg1;
- (void)setImageAsHomeScreenClicked:(id)arg1;
- (void)_cropWallpaperFinished:(id)arg1;
- (void)_backgroundCropWallpaper;
- (void)_savePhoto;
- (void)_updateTitles;
- (_Bool)uiipc_useTelephonyUI;
- (void)_adjustScrollViewGeometry;
- (int)imageFormat;
- (_Bool)clientIsWallpaper;
- (void)setupNavigationItem;
- (void)loadView;
- (unsigned long long)_tileAutoresizingMask;
- (unsigned long long)_contentAutoresizingMask;
- (struct CGRect)_viewFrame;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)desiredStatusBarAnimation;
- (_Bool)wantsStatusBarVisible;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)navigationItem;
- (int)cropOverlayMode;
- (id)initWithUIImage:(id)arg1;
- (void)prepareForForeground:(id)arg1;
- (void)prepareForBackground:(id)arg1;
- (id)initWithWallpaperVariant:(long long)arg1;
- (id)init;
- (void)setWallpaperSynchronouslyFromArgs:(id)arg1;
- (void)setWallpaperFromArgs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

