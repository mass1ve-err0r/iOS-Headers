//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMExpandableMenuButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class NSArray, NSString, UIImageView;

@interface CAMHDRButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>
{
    _Bool _allowsAutomaticHDR;
    _Bool _allowsHDROn;
    UIImageView *__glyphView;
    NSArray *__allowedModes;
}

@property(copy, nonatomic, setter=_setAllowedModes:) NSArray *_allowedModes; // @synthesize _allowedModes=__allowedModes;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic) _Bool allowsHDROn; // @synthesize allowsHDROn=_allowsHDROn;
@property(nonatomic) _Bool allowsAutomaticHDR; // @synthesize allowsAutomaticHDR=_allowsAutomaticHDR;
- (void).cxx_destruct;
- (id)imageForAccessibilityHUD;
- (void)reloadData;
- (_Bool)shouldAllowExpansion;
- (double)padHeaderViewContentInsetLeft;
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;
- (void)_updateCurrentGlyphImage;
- (id)_currentGlyphImageForAccessibilityHUD:(_Bool)arg1;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (unsigned long long)indexForMode:(long long)arg1;
- (long long)modeForIndex:(long long)arg1;
- (void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1 needsReloadData:(_Bool)arg2;
- (void)_updateAllowedModes;
- (void)setAllowsAutomaticHDR:(_Bool)arg1 needsReloadData:(_Bool)arg2;
@property(nonatomic) long long HDRMode;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMHDRButtonInitialization;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

