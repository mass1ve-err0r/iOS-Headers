//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUInterfaceManager : NSObject
{
}

+ (void)endUsingOrbTheme;
+ (void)beginUsingOrbTheme;
+ (_Bool)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)arg1;
+ (_Bool)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;
+ (void)_handleInteractionDisablingTimeout;
+ (void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+ (void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorLoadingImage;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+ (void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+ (void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+ (void)_disabledUserInteractionRequestDidTimeOut:(id)arg1;
+ (void)endDisablingUserInteraction:(id)arg1;
+ (id)beginDisablingUserInteractionForReason:(long long)arg1 withExpectedTimeout:(double)arg2;
+ (id)beginDisablingUserInteractionForReason:(long long)arg1;
+ (id)currentTheme;

@end

